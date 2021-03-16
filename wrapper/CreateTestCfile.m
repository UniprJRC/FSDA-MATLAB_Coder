function status = CreateTestCfile(FileName, varargin)
%CreateTestCfile creates and tests a file which has to be translated into C
%
% this file assumes that there is in the current folder
% 1) a file named FileName_wrapper.m which contains (throught the assert)
% the definition of the input types
% 2) a file named FileName_test which contains a call both to Filename.m
% and to FileName_wrapper_mex which tests whether the results of the call
% to the .m file are exactly the same as those coming from the call to
% FileName_wrapper_mex.
%
% The output of this file is subfolder codegen/lib/FileName_wrapper which
% contains the related C library and a zip file containing header files in
% subfolder zipSourceCode
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
%     Nargout  : Number of output arguments in the codegen call.
%                Non negative integer scalar.
%               If this option is omitted by default Nargout is set to 1
%                 Example - 'Nargout',2
%                 Data Types - double
%
% DeleteMexSubfoler  : Delete mex subfolder. Boolean.
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
% Copyright 2008-2021.
% Written by FSDA team
%
%
%
%<a href="matlab: docsearchFS('FSM')">Link to the help page for this function</a>
%
%$LastChangedDate::                      $: Date of the last commit

% Examples:

%{
    % CreateTestCfile with all default options.
    status=CreateTestCfile('frsbsb');
%}

%{
    % CreateTestCfile with option Nargout.
    status=CreateTestCfile('LXS','Nargout',2);
%}


%{
    % CreateTestCfile with options suffix and Nargout.
    status=CreateTestCfile('LXS','Suffix','1','Nargout',2);
%}


%% Beginning of code

% Remove .m extension if it exists
[~,FileName] = fileparts(FileName);


Suffix='';
Nargout=1;
DeleteMexSubfoler=false;

if nargin>1
    options=struct('Suffix',Suffix,'Nargout',Nargout,...
        'DeleteMexSubfoler',DeleteMexSubfoler);
    
    UserOptions=varargin(1:2:length(varargin));
    if ~isempty(UserOptions)
        % Check if number of supplied options is valid
        if length(varargin) ~= 2*length(UserOptions)
            error('FSDA:CreateTestCfile:WrongInputOpt','Number of supplied options is invalid. Probably values for some parameters are missing.');
        end
        % Check if user options are valid options
        chkoptions(options,UserOptions)
    end
    
    for i=1:2:length(varargin)
        options.(varargin{i})=varargin{i+1};
    end
    Suffix=options.Suffix;
    Nargout=options.Nargout;
    DeleteMexSubfoler=options.DeleteMexSubfoler;
end


%% Create mex
cfg = coder.config('mex'); %#ok<NASGU>

%% Invoke MATLAB Coder.
eval(['codegen -config cfg ' [FileName '_wrapper' Suffix ' -nargout ' num2str(Nargout)]])

%% Check if results from mex are equal to results from .m file
eval(['run ' [FileName '_test' Suffix '.m']])

disp('Results from MEX are equal to results from m file')
disp("Create c source file")

%% Configure and create build libraries
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

%% Create additional necessary header files for compilation
% load buildInfo.mat
load(['codegen/lib/' FileName '_wrapper' Suffix '/buildInfo.mat'],'build*')

packNGo(buildInfo,'packType', 'hierarchical', 'minimalHeaders',true, 'fileName',['zipSourceCode' filesep fn]);

%% Remove mex files
if DeleteMexSubfoler == true
    disp('Remove mex files and associated folders')
    delete([FileName '_wrapper' Suffix '_mex.mexw64'])
    try
        rmdir 'codegen/mex' s
    catch
        warning('FSDA:CreateTestCfile:CouldNotDelete','Subolder codegen/mex could not be deleted.');
    end
end
status =true;
end

