%% Test for FSRbsb
% LXS with default input and output.
% Compute LMS estimator without reweighting, add intercept to matrix X
% and do not produce plots.
n=50;
p=3;
randn('state', 123456);
X=randn(n,p);
y=randn(n,1);
y(1:5)=y(1:5)+6;
intercept=true;
h=round(n*0.5);
nsamp=1000;
% Using fast options.
% Compute LTS using fast options
% detection equal to 0.999.
lms=struct;
lms.bestr=10;
% Do 5 refining steps for each elemental subset
lms.refsteps=3;
% Store the best 10 subsets
lms.refstepsbestr=50;
% tolerance to step refining steps loop
lms.reftol=1e-6;
lms.reftolbestr= 1e-8;

rew=true;
nocheck=true;
nomes=false;
bonflevoutX=[]; % scalar or empty
conflev=0.99;
msg=true;
yxsave=true;
tic
% Check whether mex and .m produce the same results
rng('default')
rng(100);
[out,C]=LXS(y,X,  'bonflevoutX',bonflevoutX,'conflev',conflev,'h',h,'intercept',intercept,'lms',lms,...
    'nocheck',nocheck,'msg',msg,'nomes',nomes,'nsamp',nsamp','rew',rew,'yxsave',yxsave);
tottime=toc;

% LXS wrapper when lms is a scalar
tic
rng(100);
[outMEX,CMEX]=LXS_wrapper1_mex(y,X,    bonflevoutX,conflev,h,intercept,lms,msg,...
    nocheck,nomes,nsamp,rew,yxsave);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'LXS1'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% assert(isequal(out,outMEX),'out structure not equal')
% assert(isequaln(BB,BBMEX),'BB not equal')
tol=1e-7;
assert(isequal(out.weights,outMEX.weights),'weights not equal')
assert(isequal(out.rew,outMEX.rew),'rew not equal')
assert(max(abs(out.beta-outMEX.beta))<toc,'beta not equal')
assert(max(abs(out.scale-outMEX.scale))<toc,'scale not equal')
assert(max(abs(out.residuals-outMEX.residuals))<toc,'residuals not equal')
assert(isequal(out.bs,outMEX.bs),'bs not equal')
assert(isequal(out.outliers,outMEX.outliers),'outliers not equal')
assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.h,outMEX.h),'h not equal')
assert(isequal(out.singsub,outMEX.singsub),'singsub not equal')
assert(isequal(out.class,outMEX.class),'class not equal')
assert(isequal(C,CMEX),'C not equal')
if yxsave==true
    assert(isequal(out.y,outMEX.y),'y not equal')
    assert(isequal(out.X,outMEX.X),'X not equal')
end


