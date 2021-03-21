%% Test for FSRfan
% loyalty dataset
load('loyalty.txt');
y=loyalty(:,4); %#ok<SUSENS>
X=loyalty(:,1:3);
n=length(y);
% Compute fan plot to find best value of transformation parameter
intercept=true;
nocheck=false;
la=[-1 -0.5 0 0.5 1]';
h=round(n/2);
lms=1;
init=5;
family='BoxCox';
msg=true;
nsamp=2000;
rng(100)
tic
% Check whether mex and .m produce the same results
[out]=FSRfan(y,X,  'intercept',intercept,...
    'nocheck',nocheck,'la',la,'h',h,'nsamp',nsamp,'lms',lms,...
    'init',init,'family',family,'msg',msg,'plots',0);
tottime=toc;
rng(100)
tic
[outMEX]=FSRfan_wrapper_mex(y,X,    intercept,nocheck,la,h,nsamp,lms,init,family,msg);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSRfan'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

tol=1e-8;
assert(max(abs(out.Score-outMEX.Score),[],'all')<tol,'Score is different')
% assert(max(abs(out.Score(end-1:end,:)-outMEX.Score(end-1:end,:)),[],'all')<tol,'Score is different')
assert(max(abs(out.la-outMEX.la))<tol,'la is different')
assert(max(abs(out.bs-outMEX.bs),[],'all')<tol,'bs is different')
assert(isequaln(out.Un,outMEX.Un),'Un not equal')

