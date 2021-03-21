%% Test for FSRmdr 

n=2000;
p=3;
randn('state', 123456);
X=randn(n,p);
y=randn(n,1);
y(1:5)=y(1:5)+6;
h=round(n*0.5);
nsamp=5000;
lms=0; % in this case lms is a scalar
rew=true;
nomes=false;
bonflevoutX=[]; % scalar or empty
conflev=0.99;
rng('default')
rng(100);
% Check whether mex and .m produce the same results
[out]=LXS(y,X);

bsb=double(out.bs(:));
bsbmfullrank=true;
bsbsteps=[round(n*0.9); round(n*0.95)];
constr=[];
init=round(n/2);
intercept=true;
internationaltrade=false;
msg=true;
nocheck=false;
threshlevoutX=[];

tic
[mdr,Un,BB,Bols,S2]=FSRmdr(y,X,bsb,  'bsbmfullrank',bsbmfullrank,'bsbsteps',bsbsteps,...
    'constr',constr,'init',init,'intercept',intercept,'internationaltrade',internationaltrade,...
    'msg',msg,'nocheck',nocheck,'threshlevoutX',threshlevoutX);
tottime=toc;

% FSRmdr wrapper
rng(100);
tic
[mdrMEX,UnMEX,BBMEX,BolsMEX,S2MEX]=FSRmdr_wrapper(y,X,bsb,   bsbmfullrank,bsbsteps,constr,init,intercept,...
    internationaltrade,msg,nocheck,threshlevoutX);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSRmdr'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% Compare equality of the two outputs
tol=1e-7;
assert(max(abs(mdr-mdrMEX),[],'all')<tol,'mdr not equal')
assert(isequaln(Un,UnMEX),'Un not equal')
assert(isequaln(BB,BBMEX),'BB not equal')
assert(max(abs(Bols-BolsMEX),[],'all')<tol,'Bols not equal')
assert(max(abs(S2-S2MEX),[],'all')<tol,'S2 not equal')

