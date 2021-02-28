function status = CreateTestCfile(FileName)
% Create and test a file which has to be translated into C

% Remark: this file assumes that there is in the current folder 
% 1) a file named FileName_wrapper.m which contains (throught the assert)
% the definition of the input types
% 2) a file named FileName_test which contains a call both to Filename.m
% and to FileName_wrapper_mex which tests whether the results of the call
% to the .m file are extactly the same as those coming from the call to
% FileName_wrapper_mex.
%
% The output of this file is subfolder codegen/lib/FileName_wrapper which
% contains the related C library
%
% If all is well status is a logical equal to true

%% Create mex
cfg = coder.config('mex');

%% Invoke MATLAB Coder.
eval(['codegen -config cfg ' [FileName '_wrapper']])

%% Check if results from mex are equal to results from .m file 
eval(['run ' [FileName '_test.m']])

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
fn=[FileName '_wrapper'];
eval(['codegen -config cfg ' fn]) % -d addt

%% Create additional necessary header files for compilation
% load buildInfo.mat
load(['codegen/lib/' FileName '_wrapper/buildInfo.mat'],'build*')
% , char(["buildInfo";"buildOpts"]))

packNGo(buildInfo,'packType', 'hierarchical', 'minimalHeaders',true, 'fileName',fn);

%% Remove mex files
disp('Remove mex files and associated folders')
delete([FileName '_wrapper_mex.mexw64'])
rmdir 'codegen/mex' s

status =true;
end

