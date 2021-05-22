function ComptimesAll = CreateTestCallFiles(varargin)
%CreateTestCallFiles applies procedure CreateTestC to all files in a folder
%
%
%<a href="matlab: docsearchFS('CreateTestCallFiles')">Link to the help function</a>
%
%
% This file applies procedure CreateTestC (that is creates c and mex files)
% to  all files in the MATLAB path, which in the current folder (or in the
% InputPath folder) have the corresponding couple: *_test.m and
% *_wrapper.m and invokes a call to codegen with option -o, that is using
% all the files in order to create an overall c library with functions
% types ... shared
%
%
%  Required input arguments:
%
%
%  Optional input arguments:
%
% InputPath    : Folder whose files have to be converted. Character or empty value.
%                If InputPath is empty all files with extension .m whose
%                name contains the word wrapper in the current folder will
%                be converted.
%                 Example - 'InputPath','C:/Myfolder/tmp/'
%                 Data Types - char
%
% CreateMexFile : Create mex file. Boolean.
%               If CreateMexFile is true (default)  coder.config('mex') and
%               codegen is invoked for each file in the folder with
%               extension .m whose name contains the word wrapper to create
%               the corresponding .mex file else this part is skipped.
%                 Example - 'CreateMexFile',false
%                 Data Types - logical
%
% codegenIndependent : Create C files using independent compilation for each
%               input file. Boolean.
%               If Independent is true coder.config and packNGo are used to
%               build C libraries for each file independently. The default
%               value of codegenIndependent is false, that is each
%               individual file is not translated in C as standalone.
%                 Example - 'codegenIndependent',false
%                 Data Types - logical
%
% codegenOverall : Create C files using just one big call to codegen.
%                char (default name fsdaC) | empty character.
%               codegenOverall contains the name of the overall C library
%               which is created calling codgen with option -o, that is
%               calling codegen on the multiple files contained in the
%               folder. The default name of codegenOverall is 'fsdaC'.
%               If codegenOverall is empty the big call to codegen is not
%               invoked.
%               Remark 1: codegen is called with option -report.
%               Remark 2: If codegenOverall is empty the the first file name
%               contained in the input folder will be used.
%                 Example - 'codegenOverall','myLibraryName'
%                 Data Types - char
%
% DeleteMexSubfolder  : Delete mex subfolder. Boolean.
%               If DeleteMexSubfoler is true command
%               rmdir 'codegen/mex' s is invoked and subfolder dodegen/mex
%               is deleted. The default value of DeleteMexSubfoler is false
%               that is mex subfolder is not deleted.
%                 Example - 'DeleteMexSubfoler',true
%                 Data Types - logical
%
% UseBlas  :  Use BLAS library. Boolean.
%               If UseBlas is true command codegen is invoked with 
%               cfg.CustomBLASCallback ='mklcallback'. Note that we assume that file 
%               mklcallback is the current folder and the INTEL libraries
%              libiomp5md.lib,  mkl_core.lib,  mkl_intel_ilp64.lib,
%              mkl_intel_thread.lib, and header file mkl_cblas.h
%              are stored inside the folder (pwd)\mkl\WIN\lib\intel64
%               The default value of UseBlas is false.
%                 Example - 'UseBlas',true
%                 Data Types - logical
%
% Output:
%
%       ComptimesAll : Comparison of execution times. Ttable. table with
%                   two columns which compares the execution
%                   time of the .m file (first column) and the
%                   corresponding .mex file (second colum) to run the
%                   testing examples in the _test.m files.
%
% See also: codegen, CreateTestC
%
%
%
% References:
%
%
% Copyright 2008-2021.
% Written by FSDA team
%
%
%
%<a href="matlab: docsearchFS('CreateTestCallFiles')">Link to the help page for this function</a>
%
%$LastChangedDate::                      $: Date of the last commit

% Examples:

%{
    % CreateTestCallFiles with all default options.
    % Call codegen for each single file independently and sharing functions.
    % All the files contained in the current folder with extension .m whose
    % name contains the word wrapper are converted into mex and tested
    % whether the output of mex files is exactly the same as the output of
    % the corresponding m file (the check is done using the call to the
    % corresponding _test.m file). Subfolder mex after the check is
    % deleted. The conversion into C is also done using just a single call
    % to codegen with option -o and name fsdaC for the generated library is
    % used.
    ComptimesAll=CreateTestCallFiles();
%}

%{
    % CreateTestC with option CreateMexFile set to false.
    % In this case mex files are not generated for testing that the output
    % of the conversion is the same as that of the original .m files.
    % Just the overall compilation is called.
    ComptimesAll=CreateTestCallFiles('CreateMexFile',false)
%}


%{
    % CreateTestC with options CreateMexFile and codegenIndependent.
    % In this example codegen is also called independently for each
    % individual file and mex files are not generated.
    ComptimesAll=CreateTestCallFiles('CreateMexFile',false,'codegenIndependent',true)
%}


%% Beginning of code

InputPath='';
DeleteMexSubfolder=false;
codegenIndependent=false;
codegenOverall='fsdaC';
CreateMexFile=true;
    UseBlas=false;

if nargin>0
    options=struct('InputPath',InputPath,'DeleteMexSubfolder',DeleteMexSubfolder,...
        'codegenIndependent',codegenIndependent,'CreateMexFile',CreateMexFile,...
        'codegenOverall',codegenOverall,'UseBlas',UseBlas);
    
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
    codegenIndependent=options.codegenIndependent;
    CreateMexFile=options.CreateMexFile;
    InputPath=options.InputPath;
    codegenOverall=options.codegenOverall;
        UseBlas=options.UseBlas;
end

FileList=dir([InputPath '*_wrapper*.m']);

lFiles=length(FileList);
ComptimesAll=table('Size',[lFiles,2],'VariableNames',{'m-time' 'mex-time'},...
    'variableTypes',{'double' 'double'});

AllFileNames=cell(lFiles,1);

for i=1:lFiles
    
    FileNameIni=FileList(i).name;
    AllFileNames{i}=[FileNameIni ' '];
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
    
    if CreateMexFile ==false && codegenIndependent ==false && DeleteMexSubfolder==false
        % In this case just the overall compilation is invoked
    else
        try
            CreateTestC(FileName,'Suffix',Suffix,'CreateMexFile',CreateMexFile,...
                'CreateCsourceFile',codegenIndependent,'DeleteMexSubfolder',DeleteMexSubfolder);
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

if ~isempty(codegenOverall)
    disp('Code to callgen on the multiple files')
    
    % This assignment is not necessary, this is just because overallName is
    % more evocative than codegenOverall
    overallName=codegenOverall;
    
    AllFileNameschar=[AllFileNames{:}];
    
    % Configuration part
    cfg = coder.config('lib','ecoder',false);
    cfg.GenerateReport = true;
    cfg.ReportPotentialDifferences = false;
    cfg.GenCodeOnly = true;
    if ispc == true
        cfg.Toolchain = 'MinGW64 | gmake (64-bit Windows)';
    elseif ismac == true
        cfg.Toolchain = 'Clang v3.1 | gmake (64-bit Mac)';
    elseif isunix == true
        cfg.Toolchain = 'Clang v3.1 | gmake (64-bit Mac)';
    else
        disp('Platform not supported')
    end
    cfg.BuildConfiguration = 'Debug';
    cfg.HardwareImplementation.ProdHWDeviceType = 'Intel->x86-64 (Mac OS X)';
    cfg.HardwareImplementation.TargetHWDeviceType = 'Intel->x86-64 (Mac OS X)';
    % Note that the option below is just used for the overall call to
    % codegen.
    cfg.EnableOpenMP = 0; % generate single-threaded code for MATLAB parfor loops
    if UseBlas ==true
        cfg.CustomBLASCallback ='mklcallback'; % COMPILE USING BLAS LIBRARIES
    end
    % Suppress warning below in the generated code
    % cfg.CustomSourceCode = '#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"';
    % Enable runtime checks (esp. out-of-bounds array indexing when callad from R)
    cfg.RuntimeChecks = true;

    tic;
    eval(['codegen -o ' overallName ' -report -config cfg ' AllFileNameschar])
    t1=toc;
    fprintf('Compilation time = %.1f seconds\n',t1)
    
    % Create additional necessary header files for compilation.
    % load buildInfo.mat
    % [~,FileName]=fileparts(AllFileNames{1});
    load(['codegen/lib/' overallName  '/buildInfo.mat'],'build*')
    
    zipSourceCodefname=['zipSourceCode' filesep overallName];
    packNGo(buildInfo,'packType', 'hierarchical', 'minimalHeaders',true,...
        'fileName',zipSourceCodefname);
end

end

