%% Test for Sreg
n=100;
p=3;
randn('state', 123456);
X=randn(n,p);
y=randn(n,1);
y(1:5)=y(1:5)+6;
bdp=0.01;
bestr=3;
conflev=0.99;
intercept=true;
minsctol=1e-8;
msg=true;
nsamp=4;
nocheck=false;
refsteps=10;
refstepsbestr=5;
reftol=1e-7;
reftolbestr=1e-7;
rhofunc='hampel';
rhofuncparam=[2;4;6];

rhofunc='hyperbolic';
rhofuncparam=4;
yxsave=true;
rng('default')
rng(100);

% Check whether mex and .m produce the same results
tic
[out,C] = Sreg(y,X, ...
    'bdp',bdp,'bestr',bestr,'conflev',conflev,'intercept',intercept,...
    'minsctol',minsctol,'msg',msg,'nocheck',nocheck,'nsamp',nsamp',...
    'refsteps',refsteps,'refstepsbestr',refstepsbestr,...
    'reftol',reftol,'reftolbestr',reftolbestr,'rhofunc',rhofunc,...
    'rhofuncparam',rhofuncparam,'yxsave',yxsave);
tottime=toc;

% Sreg wrapper 
rng(100);
tic
[outMEX,CMEX]=Sreg_wrapper_mex(y,X,  bdp,bestr,conflev,intercept,minsctol,...
    msg,nocheck,nsamp,refsteps,refstepsbestr,reftol,reftolbestr,...
    rhofunc,rhofuncparam,yxsave);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'Sreg'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% assert(isequal(out,outMEX),'out structure not equal')
% assert(isequaln(BB,BBMEX),'BB not equal')
tol=1e-7;
assert(max(abs(out.beta-outMEX.beta))<tol,'beta not equal')
assert(max(abs(out.scale-outMEX.scale))<tol,'scale not equal')
% bs is not checked because with multiple initial subset you can end up
% with the same solution after the concentration steps.
% assert(isequal(out.bs,outMEX.bs),'bs not equal')
assert(max(abs(out.weights-outMEX.weights),[],'all')<toc,'weights not equal')
assert(max(abs(out.fittedvalues-outMEX.fittedvalues))<toc,'fittedvalues not equal')
assert(max(abs(out.residuals-outMEX.residuals))<toc,'residuals not equal')
assert(isequal(out.singsub,outMEX.singsub),'singsub not equal')
assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.outliers,outMEX.outliers),'outliers not equal')

assert(isequal(out.rhofunc,outMEX.rhofunc),'rho function not equal')
assert(isequal(out.rhofuncparam,outMEX.rhofuncparam),'rhofuncparam not equal')

if yxsave==true
    assert(isequal(out.y,outMEX.y),'y not equal')
    assert(isequal(out.X,outMEX.X),'X not equal')
end
assert(isequal(out.class,outMEX.class),'class not equal')
assert(isequal(C,CMEX),'C not equal')

