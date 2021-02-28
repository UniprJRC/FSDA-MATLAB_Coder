%% Test for FSRfan

%% wool dataset
XX=load('wool.txt');
y=XX(:,end);
X=XX(:,1:end-1);

intercept=true;
nocheck=true;
la=[-1 -0.5 0 0.5 1]';
h=16;
lms=1;
init=20;
family='BoxCox';
msg=true;
nsamp=0;
% Check whether mex and .m produce the same results
[out]=FSRfan(y,X,  'intercept',intercept,...
    'nocheck',nocheck,'la',la,'h',h,'nsamp',nsamp,'lms',lms,...
    'init',init,'family',family,'msg',msg);

[outMEX]=FSRfan_wrapper_mex(y,X,    intercept,nocheck,la,h,nsamp,lms,init,family,msg);

tol=1e-9;
assert(max(abs(out.Score-outMEX.Score),[],'all')<tol,'Score is different')
% assert(max(abs(out.Score(end-1:end,:)-outMEX.Score(end-1:end,:)),[],'all')<tol,'Score is different')
assert(max(abs(out.la-outMEX.la))<tol,'la is different')
assert(max(abs(out.bs-outMEX.bs),[],'all')<tol,'bs is different')
assert(isequaln(out.Un,outMEX.Un),'Un not equal')

