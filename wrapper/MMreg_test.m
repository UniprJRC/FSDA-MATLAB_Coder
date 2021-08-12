%% Test for MMreg
n=100;
p=3;
randn('state', 123456);
X=randn(n,p);
y=randn(n,1);
y(1:5)=y(1:5)+6;
conflev=0.99;
eff=0.95;
InitialEst=struct;
InitialEst.beta=NaN;
InitialEst.scale=0;
bestr=10;
intercept=true;
msg=true;
nocheck=false;

refsteps=100;
rhofunc='hyperbolic';
rhofuncparam=[];

rhofunc='hampel';
rhofuncparam=[2; 3; 8.2];

Sbdp=0.5;
Sbestr=10;
Sminsctol=1e-8;
Snsamp=5000;
Srefsteps=10;
Srefstepsbestr=5;
Sreftol=1e-7;
Sreftolbestr=1e-7;
Srhofunc='hyperbolic';
Srhofuncparam=[];
tol=1e-7;
yxsave=true;
rng('default')
rng(100);

% Check whether mex and .m produce the same results
tic
[out,C] = MMreg(y,X, ...
    'conflev',conflev,'eff',eff,'effshape',0,'InitialEst',InitialEst,'intercept',intercept,...
    'msg',msg,'nocheck',nocheck,'plots',0,'refsteps',refsteps,'rhofunc',rhofunc,...
     'rhofuncparam',rhofuncparam,'Sbdp',Sbdp,...
    'Sbestr',Sbestr,'Sminsctol',Sminsctol,'Snsamp',Snsamp,...
    'Srefsteps',Srefsteps,'Srefstepsbestr',Srefstepsbestr,...
    'Sreftol',Sreftol,'Sreftolbestr',Sreftolbestr,'Srhofunc',Srhofunc,...
    'Srhofuncparam',Srhofuncparam,'tol',tol,'yxsave',yxsave);
tottime=toc;

% Sreg wrapper 
rng(100);
tic
[outMEX,CMEX] = MMreg_wrapper_mex(y,X,  conflev,eff,InitialEst,intercept,...
    msg,nocheck,refsteps,rhofunc,rhofuncparam, Sbdp,Sbestr,Sminsctol,Snsamp,Srefsteps,Srefstepsbestr,...
    Sreftol,Sreftolbestr,Srhofunc,Srhofuncparam,tol,yxsave);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'MMreg'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% assert(isequal(out,outMEX),'out structure not equal')
% assert(isequaln(BB,BBMEX),'BB not equal')
tol=1e-7;
assert(max(abs(out.beta-outMEX.beta))<tol,'beta not equal')
assert(max(abs(out.auxscale-outMEX.auxscale))<tol,'auxscale not equal')
assert(max(abs(out.fittedvalues-outMEX.fittedvalues))<toc,'fittedvalues not equal')
assert(max(abs(out.residuals-outMEX.residuals))<toc,'residuals not equal')

assert(max(abs(out.Sbeta-outMEX.Sbeta))<toc,'Sbeta not equal')
assert(isequal(out.Ssingsub,outMEX.Ssingsub),'Ssingsub not equal')

assert(max(abs(out.weights-outMEX.weights),[],'all')<toc,'weights not equal')
assert(isequal(out.outliers,outMEX.outliers),'outliers not equal')
assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.class,outMEX.class),'class not equal')

assert(isequal(out.rhofuncS,outMEX.rhofuncS),'S rho function not equal')
assert(isequal(out.rhofuncparamS,outMEX.rhofuncparamS),'S rhofuncparam not equal')
assert(isequal(out.rhofunc,outMEX.rhofunc),'MM rho function not equal')
assert(isequal(out.rhofuncparam,outMEX.rhofuncparam),'MM rhofuncparam not equal')

if yxsave==true
    assert(isequal(out.y,outMEX.y),'y not equal')
    assert(isequal(out.X,outMEX.X),'X not equal')
end
assert(isequal(C,CMEX),'C not equal')

