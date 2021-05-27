%% Test for addt

n=5000;

y=randn(n,1)+10;
X=randn(n,3);
w=randn(n,1);

intercept=true;
la=0;  %la=[];
nocheck=false;

tic
[out]=addt(y,X,w,'intercept',intercept,'la',la,'nocheck',nocheck);
tottime=toc;

tic
[outMEX]=addt_wrapper_mex(y, X, w, intercept, la, nocheck);
tottimeMEX=toc;


% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'addt'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')
% Compare equality of the two outputs
tol=1e-9;
assert(max(abs(out.b-outMEX.b))<tol,'b is different')
assert(max(abs(out.S2add-out.S2add))<tol,'S2 is different')
assert(max(abs(out.Tadd-out.Tadd))<tol,'ttest is different')
assert(max(abs(out.pval-out.pval))<tol,'pval is different')
