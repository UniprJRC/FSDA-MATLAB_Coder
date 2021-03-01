% FSRBSB_SCRIPT   Generate MEX-function FSRbsb_mex from FSRbsb.
% 
% Script generated from project 'FSRbsb.prj' on 04-Feb-2021.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.CodeConfig'.
currentFolder=pwd;
mex=false;
if mex == true
    cfg = coder.config('mex');
else
    cfg = coder.config('lib','ecoder',false);
    cfg.GenerateReport = true;
    cfg.ReportPotentialDifferences = false;
    cfg.GenCodeOnly = true;
    cfg.Toolchain = 'MinGW64 | gmake (64-bit Windows)';
    cfg.BuildConfiguration = 'Debug';
    cfg.HardwareImplementation.ProdHWDeviceType = 'Intel->x86-64 (Mac OS X)';
    cfg.HardwareImplementation.TargetHWDeviceType = 'Intel->x86-64 (Mac OS X)';
end

%% Define argument types for entry-point 'FSRbsb'.
ARGS = cell(1,1);
ARGS{1} = cell(13,1);
% 3 required input arguments + 5 name / pairs
% required input arguments
% y: a column vector of doubles of any length 
ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]);
% X: an array of doubles of any dimensions
ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]);
% bsb: a column vector of doubles of any length 
ARGS{1}{3} = coder.typeof(0,[Inf 1],[1 0]);
% optional input arguments (name / pairs)
% intercept is a boolean
ARGS{1}{4} = coder.Constant('intercept');
ARGS{1}{5} = coder.typeof(false);
% init is a scalar
ARGS{1}{6} = coder.Constant('init');
ARGS{1}{7} = coder.typeof(1,[1 1],[1 1]);
% nocheck is a boolean
ARGS{1}{8} = coder.Constant('nocheck');
ARGS{1}{9} = coder.typeof(false);
% bsbsteps is a column vector of any length
ARGS{1}{10} = coder.Constant('bsbsteps');
ARGS{1}{11} = coder.typeof(0,[Inf 1],[1 0]);
% msg is a boolean
ARGS{1}{12} = coder.Constant('msg');
ARGS{1}{13} = coder.typeof(false);

%% Invoke MATLAB Coder.

codegen -config cfg addt -args ARGS{1}

if mex==false
    cd ./codegen/lib/addt;
    load buildInfo.mat
    packNGo(buildInfo,'packType', 'hierarchical', 'minimalHeaders',true, 'fileName','addt');
end

% goback to current folder
cd(currentFolder)
