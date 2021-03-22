function ComptimesAll = CreateTestCallFiles(varargin)
%CreateTestCallFiles applies procedure CreateTestC to all files in a folder
%
% This file applies procedure CreateTestC (that is creates c and mex files)
% to  all files in the MATLAB path, which in the current folder (or in the
% InputPath folder) have the corresponding couple: *_test.m and
% *_wrapper.m
%
%
%
%  Required input arguments:
%
%
%  Optional input arguments:
%
% InputPath    : Folder whose files have to be converted. Character or empty value.
%                If InputPath is empty all files in the current folder will
%                be converted.
%                 Example - 'InputPath','C:\Myfolder\tmp\'
%                 Data Types - char
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
% See also: codegen, CreateTestC
%
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
    status=CreateTestCallFiles('CreateMexFile',false,'CreateCsourceFile',false)
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

InputPath='';
DeleteMexSubfolder=false;
CreateCsourceFile=true;
CreateMexFile=true;

if nargin>0
    options=struct('InputPath',InputPath,'DeleteMexSubfolder',DeleteMexSubfolder,...
        'CreateCsourceFile',CreateCsourceFile,'CreateMexFile',CreateMexFile);
    
    UserOptions=varargin(1:2:length(varargin));
    if ~isempty(UserOptions)
        % Check if number of supplied options is valid
        if length(varargin) ~= 2*length(UserOptions)
            error('FSDA:CreateTestCallFiles:WrongInputOpt','Number of supplied options is invalid. Probably values for some parameters are missing.');
        end
        % Check if user options are valid options
        chkoptions(options,UserOptions)
    end
    
    for i=1:2:length(varargin)
        options.(varargin{i})=varargin{i+1};
    end
    DeleteMexSubfolder=options.DeleteMexSubfolder;
    CreateCsourceFile=options.CreateCsourceFile;
    CreateMexFile=options.CreateMexFile;
    InputPath=options.InputPath;
end

FileList=dir([InputPath '*_wrapper*.m']);

lFiles=length(FileList);
ComptimesAll=table('Size',[lFiles,2],'VariableNames',{'m-time' 'mex-time'},...
    'variableTypes',{'double' 'double'});

for i=1:lFiles
    FileNameIni=FileList(i).name;
    Suf=regexp(FileNameIni,'wrapper\d','match');
    fname=regexp(FileList(i).name,'_wrapper');
    FileName=FileNameIni(1:fname-1);
    if isempty(Suf)
        Suffix='';
    else
        exstrSuf=Suf{:};
        Suffix=exstrSuf(8:end);
    end
    FileNameS=[FileName Suffix];
    disp(['Converting file: ' num2str(i) '/' num2str(lFiles) ' ' FileNameS])
    try
        CreateTestC(FileName,'Suffix',Suffix,'CreateMexFile',CreateMexFile,...
            'CreateCsourceFile',CreateCsourceFile,'DeleteMexSubfolder',DeleteMexSubfolder);
        cont=true;
    catch
        cont=false;
        warning('FSDA:CreateTestCallFiles:WrongInputOpt',['Could not convert file'  FileNameS])
    end
    if cont==true
        load('CompTimes.mat','CompTimes')
        if isequal(CompTimes.Properties.RowNames{:},FileNameS)
            ComptimesAll{i,:}=CompTimes{1,:};
        else
            error('FSDA:CreateTestCallFiles:WrongInputCompTimes','Wrong input name in CompTimes')
        end
    end
    ComptimesAll.Properties.RowNames{i}=FileNameS;
end


end

