%% Test for Sregeda
n=100;
p=3;
randn('state', 123);
X=randn(n,p);
y=randn(n,1);
y(1:5)=y(1:5)+6;
bdp=(0.5:-0.01:0.01)';
bdp=[0.5 0.25 0.01]';
% bdp=[0.01];
bestr=10;
conflev=0.99;
intercept=true;
minsctol=1e-8;
msg=true;
nsamp=15;
nocheck=false;
refsteps=10;
refstepsbestr=5;
reftol=1e-7;
reftolbestr=1e-7;
%rhofunc='hyperbolic';
% rhofunc='optimal';
 rhofunc='hampel';
% rhofunc='bisquare';
% rhofunc='optimal';
rhofuncparam=[];
rhofuncparam=[1.5; 2; 4.3];

rng('default')
rng(100);

% Check whether mex and .m produce the same results
tStart=tic;
[out,C] = Sregeda(y,X, ...
    'bdp',bdp,'bestr',bestr,'conflev',conflev,'intercept',intercept,...
    'minsctol',minsctol,'msg',msg,'nocheck',nocheck,'nsamp',nsamp',...
    'refsteps',refsteps,'refstepsbestr',refstepsbestr,...
    'reftol',reftol,'reftolbestr',reftolbestr,'rhofunc',rhofunc,...
    'rhofuncparam',rhofuncparam);
tottime=toc(tStart);

% Sreg wrapper
rng(100);
tStart=tic;
[outMEX,CMEX]=Sregeda_wrapper_mex(y,X,  bdp,bestr,conflev,intercept,minsctol,...
    msg,nocheck,nsamp,refsteps,refstepsbestr,reftol,reftolbestr,...
    rhofunc,rhofuncparam);
tottimeMEX=toc(tStart);

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'Sregeda'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% assert(isequal(out,outMEX),'out structure not equal')
% assert(isequaln(BB,BBMEX),'BB not equal')
tol=1e-7;
assert(max(abs(out.Beta-outMEX.Beta),[],'all')<tol,'beta not equal')
assert(max(abs(out.Scale-outMEX.Scale),[],'all')<tol,'scales not equal')
% assert(isequal(out.BS,outMEX.BS),'bs not equal')
assert(max(abs(out.Weights-outMEX.Weights),[],'all')<toc,'weights not equal')
assert(max(abs(out.RES-outMEX.RES),[],'all')<toc,'RES not equal')
assert(isequal(out.Singsub,outMEX.Singsub),'singsub not equal')
assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.Outliers,outMEX.Outliers),'outliers not equal')
assert(isequal(out.bdp,outMEX.bdp),'bdp function not equal')

assert(isequal(out.rhofunc,outMEX.rhofunc),'rho function not equal')
assert(isequal(out.rhofuncparam,outMEX.rhofuncparam),'rhofuncparam not equal')

assert(isequal(out.y,outMEX.y),'y not equal')
assert(isequal(out.X,outMEX.X),'X not equal')
assert(isequal(out.class,outMEX.class),'class not equal')
assert(isequal(C,CMEX),'C not equal')

