%% Test for MMregeda
n=100;
p=3;
randn('state', 123456);
X=randn(n,p);
y=randn(n,1);
y(1:5)=y(1:5)+6;
Sbdp=0.5;
eff=(0.5:0.01:0.99)';
Sbestr=10;
conflev=0.99;
intercept=true;
InitialEst=struct;
InitialEst.beta=NaN;
InitialEst.scale=1;
Sminsctol=1e-8;
Smsg=true;
Snsamp=500;
nocheck=false;
refsteps=10;
Srefsteps=10;
Srefstepsbestr=5;
Sreftol=1e-7;
Sreftolbestr=1e-7;
%rhofunc='hyperbolic';
%rhofunc='optimal';
% rhofunc='hampel';
Srhofunc='bisquare';
Srhofuncparam=[];

rhofunc='bisquare';
rhofuncparam=[];
tol=1e-7;
rng('default')
rng(100);

% Check whether mex and .m produce the same results
tStart=tic;
[out,C] = MMregeda(y,X, 'conflev',conflev,'eff',eff,'InitialEst',InitialEst,'intercept',intercept,...
    'nocheck',nocheck,'refsteps',refsteps, ...
    'rhofunc',rhofunc,...
    'rhofuncparam',rhofuncparam,...
    'Sbdp',Sbdp,'Sbestr',Sbestr,...
    'Sminsctol',Sminsctol,'Smsg',Smsg,'Snsamp',Snsamp,...
    'Srefsteps',Srefsteps,'Srefstepsbestr',Srefstepsbestr,...
    'Sreftol',Sreftol,'Sreftolbestr',Sreftolbestr,'Srhofunc',Srhofunc,...
    'Srhofuncparam',Srhofuncparam,'tol',tol);
tottime=toc(tStart);




% Sreg wrapper
rng(100);
tStart=tic;
[outMEX,CMEX]=MMregeda_wrapper_mex(y,X,  conflev,eff,InitialEst,intercept,...
    nocheck,refsteps,rhofunc,rhofuncparam, Sbdp, Sbestr,Sminsctol,Smsg,Snsamp,Srefsteps,Srefstepsbestr,...
    Sreftol,Sreftolbestr,Srhofunc,Srhofuncparam,tol);
tottimeMEX=toc(tStart);


% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'MMregeda'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% assert(isequal(out,outMEX),'out structure not equal')
% assert(isequaln(BB,BBMEX),'BB not equal')
tol=1e-7;
assert(max(abs(out.Sbeta-outMEX.Sbeta),[],'all')<tol,'Sbeta not equal')
assert(max(abs(out.Beta-outMEX.Beta),[],'all')<tol,'beta not equal')
% assert(isequal(out.BS,outMEX.BS),'bs not equal')
assert(max(abs(out.Weights-outMEX.Weights),[],'all')<toc,'weights not equal')
assert(max(abs(out.RES-outMEX.RES),[],'all')<toc,'RES not equal')
% assert(isequal(out.Singsub,outMEX.Singsub),'singsub not equal')
assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.Outliers,outMEX.Outliers),'outliers not equal')
assert(max(abs(out.auxscale-outMEX.auxscale),[],'all')<toc,'auxscale not equal')

assert(isequal(out.rhofunc,outMEX.rhofunc),'rho function not equal')
assert(isequal(out.rhofuncparam,outMEX.rhofuncparam),'rhofuncparam not equal')

assert(isequal(out.y,outMEX.y),'y not equal')
assert(isequal(out.X,outMEX.X),'X not equal')
assert(isequal(out.class,outMEX.class),'class not equal')
assert(isequal(C,CMEX),'C not equal')

