%% Test for tclust (when input restreigen is a struct)

Y=load('geyser2.txt');
v=size(Y,2);
k=3;
alpha=0.1;
restrfactor=struct;
restrfactor.pars='VEE';
restrfactor.cdet=10;
restrfactor.shw=5;
restrfactor.shb=3;
restrfactor.k=k;
restrfactor.maxiterDSR=1e-06;
restrfactor.maxiterR=10;
restrfactor.maxiterS=10;
restrfactor.msg=false;
restrfactor.tolR=1e-7;
restrfactor.tolS=1e-7;
restrfactor.usepreviousest=false;
restrfactor.userepmat=2;
restrfactor.sortsh=1;
restrfactor.v=v;
restrfactor.zerotol=1e-12;

cshape=10^10;
equalweights=false;
mixt=0;
msg=0;
nocheck=false;
nsamp=2000;
RandNumbForNini=[];
refsteps=5;
reftol=1e-7;
restrtype='deter';
startv1=true;
Ysave=false;
rng('default')
rng(100);

% Check whether mex and .m produce the same results
tic
[out,C] = tclust(Y,k,alpha,restrfactor, ...
    'cshape',cshape,'equalweights',equalweights,'mixt',mixt,'msg',msg,...
    'nocheck',nocheck,'nsamp',nsamp,'RandNumbForNini',RandNumbForNini,...
    'refsteps',refsteps,'reftol',reftol,'restrtype',restrtype,'startv1',startv1,'Ysave',Ysave);
tottime=toc;

% tclust wrapper when restrfactor is a struct
rng(100);
tic
[outMEX,CMEX] = tclust_wrapper1(Y,k,alpha,restrfactor, ...
    cshape,equalweights,mixt,msg,...
    nocheck,nsamp,RandNumbForNini,...
    refsteps,reftol,restrtype,startv1,Ysave);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'tclust'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% assert(isequal(out,outMEX),'out structure not equal')
% assert(isequaln(BB,BBMEX),'BB not equal')
tol=1e-7;
assert(isequal(out.muopt,outMEX.muopt),'muopt not equal')
assert(isequal(out.sigmaopt,outMEX.sigmaopt),'sigmaopt not equal')
assert(isequal(out.idx,outMEX.idx),'idx not equal')
assert(isequal(out.siz,outMEX.siz),'siz not equal')
assert(max(abs(out.postprob-outMEX.postprob),[],'all')<tol,'beta not equal')
assert(max(abs(out.NlogL-outMEX.NlogL))<tol,'NlogL not equal')
assert(max(abs(out.CLACLA-outMEX.CLACLA))<tol,'CLACLA not equal')
assert(max(abs(out.notconver-outMEX.notconver))<tol,'CLACLA not equal')
assert(isequal(out.bs,outMEX.bs),'bs not equal')
assert(max(abs(out.obj-outMEX.obj))<tol,'obj not equal')
assert(isequal(out.equalweights,outMEX.equalweights),'equalweights not equal')
assert(isequal(out.h,outMEX.h),'h not equal')
assert(isequal(out.fullsol,outMEX.fullsol),'fullsol not equal')
assert(isequal(C,CMEX),'C not equal')

