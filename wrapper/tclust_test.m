%% Test for tclust (when input restreigen is a scalar or a vector)

Y=load('geyser2.txt');
Y=Y(1:10,:);
k=3;
alpha=0.1;
restrfactor=100;
equalweights=false;
mixt=0;
msg=0;
nocheck=false;
nsamp=30;
RandNumbForNini=[];
refsteps=5;
reftol=1e-7;
startv1=true;
Ysave=false;
rng('default')
rng(100);

% Check whether mex and .m produce the same results
tic
[out,C] = tclust(Y,k,alpha,restrfactor, ...
    'equalweights',equalweights,'mixt',mixt,'msg',msg,...
    'nocheck',nocheck,'nsamp',nsamp,'RandNumbForNini',RandNumbForNini,...
    'refsteps',refsteps,'reftol',reftol,'startv1',startv1,'Ysave',Ysave);
tottime=toc;

% LXS wrapper when lms is a scalar
rng(100);
tic
[outMEX,CMEX] = tclust_wrapper_mex(Y,k,alpha,restrfactor, ...
    equalweights,mixt,msg,...
    nocheck,nsamp,RandNumbForNini,...
    refsteps,reftol,startv1,Ysave);
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
assert(max(abs(out.muopt-outMEX.muopt),[],'all')<tol,'muopt not equal')
assert(max(abs(out.sigmaopt-outMEX.sigmaopt),[],'all')<tol,'sigmaopt not equal')
assert(isequal(out.idx,outMEX.idx),'idx not equal')
% assert(isequal(out.siz,outMEX.siz),'siz not equal')
assert(max(abs(out.postprob-outMEX.postprob),[],'all')<tol,'psot prob not equal')
assert(max(abs(out.NlogL-outMEX.NlogL))<tol,'NlogL not equal')
assert(max(abs(out.CLACLA-outMEX.CLACLA))<tol,'CLACLA not equal')
assert(max(abs(out.notconver-outMEX.notconver))<tol,'notconver not equal')
assert(isequal(out.bs,outMEX.bs),'bs not equal')
assert(max(abs(out.obj-outMEX.obj))<tol,'obj not equal')
assert(isequal(out.equalweights,outMEX.equalweights),'equalweights not equal')
assert(isequal(out.h,outMEX.h),'h not equal')
assert(max(out.fullsol-outMEX.fullsol)<tol,'fullsol not equal')
assert(isequal(C,CMEX),'C not equal')

