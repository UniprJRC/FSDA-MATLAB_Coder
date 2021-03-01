%% addt with optional arguments.

% rng('default')
% rng(100)
n=50;

y=randn(n,1)+10;
X=randn(n,3);
w=randn(n,1);


%la=[];
%  uncomment the following line to set lambda parameter for data
%  transformation
la=0;


% parameters not used by C Coder
defScalar=1;
defCell =false;
intercept=true;

% [out]=addt_mex(y, X, w, 'intercept', intercept); % , 'la', la, 'nocheck', 0);

%if exist('addt','file')==2
   [out1]=addt(y, X, w,'intercept', intercept); % , 'la', la, 'nocheck', 0);
out=out1;
%else
%    error('FSDA:addt:missingFile','addt is inside FSDA.')
%end
% disp(out)
disp(out1)