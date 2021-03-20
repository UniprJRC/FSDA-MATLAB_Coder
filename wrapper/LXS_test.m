%% Test for LXS (when input option lms is a scalar)
% LXS with default input and output.
% Compute LMS estimator without reweighting, add intercept to matrix X
% and do not produce plots.
n=2000;
p=3;
randn('state', 123456);
X=randn(n,p);
y=randn(n,1);
y(1:5)=y(1:5)+6;
intercept=true;
h=round(n*0.5);
nsamp=5000;
lms=0; % in this case lms is a scalar
rew=true;
nocheck=true;
nomes=false;
bonflevoutX=[]; % scalar or empty
conflev=0.99;
msg=true;
yxsave=true;
rng('default')
rng(100);

tic
% Check whether mex and .m produce the same results
[out,C]=LXS(y,X,  'bonflevoutX',bonflevoutX,'conflev',conflev,'h',h,'intercept',intercept,'lms',lms,...
    'nocheck',nocheck,'msg',msg,'nomes',nomes,'nsamp',nsamp','rew',rew,'yxsave',yxsave);
tottime=toc;

% LXS wrapper when lms is a scalar
tic
rng(100);
[outMEX,CMEX]=LXS_wrapper_mex(y,X,    bonflevoutX,conflev,h,intercept,lms,msg,nocheck,nomes,nsamp,rew,yxsave);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% assert(isequal(out,outMEX),'out structure not equal')
% assert(isequaln(BB,BBMEX),'BB not equal')
tol=1e-7;
assert(isequal(out.weights,outMEX.weights),'weights not equal')
assert(isequal(out.rew,outMEX.rew),'rew not equal')
assert(max(abs(out.beta-outMEX.beta))<tol,'beta not equal')
assert(max(abs(out.scale-outMEX.scale))<tol,'scale not equal')
assert(max(abs(out.residuals-outMEX.residuals))<toc,'residuals not equal')
assert(isequal(out.bs,outMEX.bs),'bs not equal')
assert(isequal(out.outliers,outMEX.outliers),'outliers not equal')
assert(isequal(out.singsub,outMEX.singsub),'singsub not equal')

assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.h,outMEX.h),'h not equal')
assert(isequal(out.class,outMEX.class),'class not equal')
assert(isequal(C,CMEX),'C not equal')
if yxsave==true
    assert(isequal(out.y,outMEX.y),'y not equal')
    assert(isequal(out.X,outMEX.X),'X not equal')
end

%% Test option bonflevoutX
rng('default')
rng(10000)
n=100;
p=1;
X=randn(n,p);
epsil=10;
beta=ones(p,1);
y=X*beta+randn(n,1)*epsil;
% Add 10 very remote points
add=10;
Xadd=X(1:add,:)+5000;
yadd=y(1:add)+200;
X=[X;Xadd];
y=[y;yadd];
bonflevoutX=0.99; % scalar or empty
h=round(length(y)*0.7);
nocheck=false;
rng(100);

tic
% Check whether mex and .m produce the same results
[out,C]=LXS(y,X,  'bonflevoutX',bonflevoutX,'conflev',conflev,'h',h,'intercept',intercept,'lms',lms,...
    'nocheck',nocheck,'msg',msg,'nomes',nomes,'nsamp',nsamp','rew',rew);
tottime=toc;

% LXS wrapper when lms is a scalar
tic
rng(100);
[outMEX,CMEX]=LXS_wrapper_mex(y,X,    bonflevoutX,conflev,h,intercept...
    ,lms,msg,nocheck,nomes,nsamp,rew,yxsave);
tottimeMEX=toc;

% Compare mex time with .m time
disp(array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'}))
tol=1e-7;
assert(isequal(out.weights,outMEX.weights),'weights not equal')
assert(isequal(out.rew,outMEX.rew),'rew not equal')
assert(max(abs(out.beta-outMEX.beta))<tol,'beta not equal')
assert(max(abs(out.scale-outMEX.scale))<tol,'scale not equal')
assert(max(abs(out.residuals-outMEX.residuals))<toc,'residuals not equal')
assert(isequal(out.bs,outMEX.bs),'bs not equal')
assert(isequal(out.outliers,outMEX.outliers),'outliers not equal')
assert(isequal(out.singsub,outMEX.singsub),'singsub not equal')

assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.h,outMEX.h),'h not equal')
assert(isequal(out.class,outMEX.class),'class not equal')
assert(isequal(C,CMEX),'C not equal')
