% FSRBSB_SCRIPT   Generate MEX-function FSRbsb_mex from FSRbsb.
% 
% Script generated from project 'FSRbsb.prj' on 04-Feb-2021.
% 
% See also CODER, CODER.CONFIG, CODER.TYPEOF, CODEGEN.

%% Create configuration object of class 'coder.MexCodeConfig'.
cfg = coder.config('mex');
cfg.GenerateReport = true;
cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'FSRbsb'.
ARGS = cell(1,1);
ARGS{1} = cell(15,1);
% 3 required input arguments + 6 name / pairs
% required input arguments
% y: a column vector of doubles of any length 
% R.L. just to have a confirmation about thhe first value of coder.typeof
% If it is a double any array of doubles will work?
% [Inf 1] = a column vector of doubles of any length 
% [1, 0] = dynamic number of rows but just one column
ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]);
% X: an array of doubles of any dimensions
ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]);
% bsb: a column vector of doubles of any length 
ARGS{1}{3} = coder.typeof(0,[Inf 1],[1 0]);
% optional input arguments (name / pairs)
ARGS{1}{4} = coder.Constant('intercept');
ARGS{1}{5} = coder.typeof(false);
ARGS{1}{6} = coder.Constant('init');
ARGS{1}{7} = coder.typeof(1,[1 1],[1 1]);
ARGS{1}{8} = coder.Constant('nocheck');
ARGS{1}{9} = coder.typeof(false);
ARGS{1}{10} = coder.Constant('plots');
ARGS{1}{11} = coder.typeof(false);
ARGS{1}{12} = coder.Constant('bsbsteps');
ARGS{1}{13} = coder.typeof(0,[Inf 1],[1 0]);
ARGS{1}{14} = coder.Constant('msg');
ARGS{1}{15} = coder.typeof(false);

%% Invoke MATLAB Coder.
codegen -config cfg FSRbsb -args ARGS{1}

