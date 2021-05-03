function status = CreateTestC(FileName, varargin)
%CreateTestC creates and tests a file which has to be translated into C
%
%<a href="matlab: docsearchFS('CreateTestC')">Link to the help function</a>
%
%
% This file assumes that there is in the current folder
% 1) a file named FileName_wrapper.m which contains (throught the assert)
% the definition of the input types
% 2) a file named FileName_test which contains a call both to Filename.m
% and to FileName_wrapper_mex which tests whether the results of the call
% to the .m file are exactly the same as those coming from the call to
% FileName_wrapper_mex. FileName_test stores the computational times of the
% two implementations in a table called Comptimes inside a .mat file called
% CompTimes.mat
%
% The output of this file is: 
% 1) mex file named (FileName_wrapper_mex.mexw64 or
% FileName_wrapper_mex.mexmaci64) if input option CreateMexFile is true
% (this is the default)
% 2) subfolder codegen/mex/FileName_wrapper containing everything associated with mex
% (unless input option DeleteMexSubfolder is true)
% 3) subfolder codegen/lib/FileName_wrapper
% containing everything associated with C generation and file named
% FileName_wrapper.zip in subfolder zipSourceCode containing the header C
% (unless input option CreateCsourceFile is false).
%
%
%  Required input arguments:
%
%   FileName  : Name of the file which has to be converted. Character.
%               The name of the file can either contain or not contain the
%               extension.
%
%
%  Optional input arguments:
%
%     Suffix  : FileName suffix. Character. If for example Suffix is '1' then it is assumed
%               that there is in the current folder:
%               1) a file named FileName1_wrapper.m which contains (throught the assert)
%               the definition of the input types
%               2) a file named FileName1_test which contains a call both
%               to Filename1.m.
%               Note that sometimes an input option can be either a scalar
%               or a struct and therefore it is necessary to use two
%               testing files: the first when the option is called with a
%               scalar and the second with the option called with a struct.
%                 Example - 'Suffix','2'
%                 Data Types - double
%
% CreateMexFile : Create mex file. Boolean.
%               If CreateMexFile is true (default)  coder.config('mex') and
%               codegen is invoked to create the .mex file else this part
%               is skipped.
%                 Example - 'CreateMexFile',false
%                 Data Types - logical
%
%
%     Nargout  : Number of output arguments in the codegen call.
%                Non negative integer scalar.
%               If this option is omitted this routine opens the input
%               wrapper m ilfes and tries to automatically infer the number
%               of output arguments scanning the first line of
%               [FileName '_wrapper.m'];
%                 Example - 'Nargout',2
%                 Data Types - double
%
% CreateCsourceFile : Create C files. Boolean.
%               If CreateCsourceFile is true (default) coder.config
%               and packNGo are to build C libraries else
%               just mex is produced.
%                 Example - 'CreateCsourceFile',false
%                 Data Types - logical
%
% DeleteMexSubfolder  : Delete mex subfolder. Boolean.
%               If DeleteMexSubfoler is true command
%               rmdir 'codegen/mex' s is invoked and subfolder dodegen/mex
%               is deleted. The default value of DeleteMexSubfoler is false
%               that is mex subfolder is not deleted.
%                 Example - 'DeleteMexSubfoler',true
%                 Data Types - logical
%
% Output:
%
%       status : boolean which informs about success. Boolean.
%               If status is true all went well, else status is false
%
% See also: codegen
%
%
%
% References:
%
% Copyright 2008-2021.
% Written by FSDA team
%
%
%
%<a href="matlab: docsearchFS('CreateTestC')">Link to the help page for this function</a>
%
%$LastChangedDate::                      $: Date of the last commit

% Examples:

%{
    % CreateTestC with all default options.
    status=CreateTestC('FSRbsb');
%}

%{
    % CreateTestC with option Nargout.
    status=CreateTestC('LXS.m','Nargout',2);
%}


%{
    % CreateTestC with options suffix and Nargout.
    status=CreateTestC('LXS','Suffix','1','Nargout',2);
%}

%{
    % CreateTestC just to compare .mex and .m computational times
    % In this example it is assumed that mex has already been created.
    % and no C is created
    status=CreateTestC('LXS','CreateMexFile',false,'CreateCsourceFile',false);
%}

%% Beginning of code

Suffix='';
Nargout=[];
DeleteMexSubfolder=false;
CreateCsourceFile=true;
CreateMexFile=true;

if nargin>1
    options=struct('Suffix',Suffix,'Nargout',Nargout,...
        'DeleteMexSubfolder',DeleteMexSubfolder,...
        'CreateCsourceFile',CreateCsourceFile,'CreateMexFile',CreateMexFile);
    
    UserOptions=varargin(1:2:length(varargin));
    if ~isempty(UserOptions)
        % Check if number of supplied options is valid
        if length(varargin) ~= 2*length(UserOptions)
            error('FSDA:CreateTestC:WrongInputOpt','Number of supplied options is invalid. Probably values for some parameters are missing.');
        end
        % Check if user options are valid options
        chkoptions(options,UserOptions)
    end
    
    for i=1:2:length(varargin)
        options.(varargin{i})=varargin{i+1};
    end
    Suffix=options.Suffix;
    Nargout=options.Nargout;
    DeleteMexSubfolder=options.DeleteMexSubfolder;
    CreateCsourceFile=options.CreateCsourceFile;
    CreateMexFile=options.CreateMexFile;
end

% Remove .m extension from FileName if it exists
[~,FileName,ext] = fileparts(FileName);
if ~isempty(ext) && ~strcmp('.m',ext)
    error('FSDA:CreateTestC:WrongFileExt','Input file must have m extension')
end

FileNameWithSuffix=[FileName '_wrapper' Suffix];
% Remove .m extension if it exists
[pathstrcf] = fileparts(which(FileNameWithSuffix));

if isempty(pathstrcf)
    error('FSDA:CreateTestC:WrongFile','SourceNotFound');
end


% If Nargout is empty read the first line of the _wrapper file an guess the
% number of output elements using the numbers of commas inside [  ]=*****_wrapper
if isempty(Nargout)
    
    fileID = fopen([FileNameWithSuffix '.m'], 'r+');
    
    % Insert the file into fstring
    fstring=fscanf(fileID,'%c');
    fclose(fileID);
    
    [startIndexEq] = regexp(fstring,'=');
    
    if startIndexEq(1)<regexp(fstring,'%','once')
        [startIndex] = regexp(fstring(1:startIndexEq(1)),'[');
        [endIndex] = regexp(fstring(1:startIndexEq(1)),']');
        % if startindex is empty it means there is a single output which is not
        % enclosed in square brackets
        if isempty(startIndex)
            outargs=['[' strtrim(fstring(9:startIndexEq(1)-1)) ']'];
        else
            outargs=fstring(startIndex(1):endIndex(1));
        end
        
        
        % Find number of output arguments
        % nargout = number of commas in string  outargs= [out1, out2, out3] +1
        [commasOut] = regexp(outargs,',');
        
        Nargout=length(commasOut)+1;
    else
        Nargout=0;
    end
    
end

%% Create mex
if CreateMexFile==true
    cfg = coder.config('mex'); %#ok<NASGU>
    
    % Invoke MATLAB Coder to create mex file
    eval(['codegen -config cfg ' [FileNameWithSuffix ' -nargout ' num2str(Nargout)]])
end

%% Check if results from mex are equal to results from .m file
eval(['run ' [FileName '_test' Suffix '.m']])

disp('Results from MEX are equal to results from m file')

%% Configure and create build libraries

if CreateCsourceFile==true
disp("Create c source file")
    
    % Configuration part
    cfg = coder.config('lib','ecoder',false);
    cfg.GenerateReport = true;
    cfg.ReportPotentialDifferences = false;
    cfg.GenCodeOnly = true;
    cfg.Toolchain = 'MinGW64 | gmake (64-bit Windows)';
    cfg.BuildConfiguration = 'Debug';
    cfg.HardwareImplementation.ProdHWDeviceType = 'Intel->x86-64 (Mac OS X)';
    cfg.HardwareImplementation.TargetHWDeviceType = 'Intel->x86-64 (Mac OS X)';
    % build part
    % codegen -config cfg addt_wrapper % -d addt
    fn=[FileName '_wrapper' Suffix];
    eval(['codegen -config cfg ' fn]) % -d addt
    
    % Create additional necessary header files for compilation
    % load buildInfo.mat
    load(['codegen/lib/' FileName '_wrapper' Suffix '/buildInfo.mat'],'build*')
    
    packNGo(buildInfo,'packType', 'hierarchical', 'minimalHeaders',true, 'fileName',['zipSourceCode' filesep fn]);
end

%% Remove mex files
if DeleteMexSubfolder == true
    disp('Remove mex files and associated folders')
    delete([FileName '_wrapper' Suffix '_mex.mexw64'])
    try
        rmdir 'codegen/mex' s
    catch
        warning('FSDA:CreateTestC:CouldNotDelete','Subfolder codegen/mex could not be deleted.');
    end
end
status =true;
end

