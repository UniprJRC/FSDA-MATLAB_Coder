% ADDT_SCRIPT   Generate dynamic library addt from addt.
 
%% Create configuration object of class 'coder.CodeConfig'.
% use mex -setup if compiler stops working

cfg = coder.config('mex');
%cfg = coder.config('dll');
cfg.GenerateReport = true;
%cfg.ReportPotentialDifferences = false;

%% Define argument types for entry-point 'addt'.
ARGS = cell(1,1);
ARGS{1} = cell(19,1);   % 3 required input arguments + 8 name / pairs
% required input arguments
ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); 
ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]);
ARGS{1}{3} = coder.typeof(0,[Inf 1],[1 0]);
% optional input arguments (name / pairs)
ARGS{1}{4} = coder.Constant('plots');
ARGS{1}{5} = coder.typeof(0);
ARGS{1}{6} = coder.Constant('textlab');
ARG = coder.typeof('X',[1 100],[0 1]);
ARGS{1}{7} = coder.typeof({ARG}, [1 1]);
ARGS{1}{8} = coder.Constant('units');
ARGS{1}{9} = coder.typeof(0, [10 1], [1 0]);
ARGS{1}{10} = coder.Constant('intercept');
ARGS{1}{11} = coder.typeof(0);
ARGS{1}{12} = coder.Constant('la');
ARGS{1}{13} = coder.typeof(1,[1 1],[1 1]);
ARGS{1}{14} = coder.Constant('FontSize');
ARGS{1}{15} = coder.typeof(0);
ARGS{1}{16} = coder.Constant('SizeAxesNum');
ARGS{1}{17} = coder.typeof(0);
ARGS{1}{18} = coder.Constant('nocheck');
ARGS{1}{19} = coder.typeof(0);


%% Invoke MATLAB Coder.
codegen -config cfg addt -args ARGS{1}
