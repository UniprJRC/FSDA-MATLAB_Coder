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
intercept=true;
nocheck=1;

% % parameters not used by C Coder
% defScalar=1;
% defCell =false;
% intercept=true;

[outMEX]=addt_wrapper_mex(y, X, w, intercept, la, nocheck);
[out]=addt(y,X,w,'intercept',intercept,'la',la,'nocheck',nocheck);
tol=1e-9;
assert(max(abs(out.b-outMEX.b))<tol,'b is different')
assert(max(abs(out.S2add-out.S2add))<tol,'S2 is different')
assert(max(abs(out.Tadd-out.Tadd))<tol,'ttest is different')
assert(max(abs(out.pval-out.pval))<tol,'pval is different')
