%% Test for FSR when input option lms is a struct
% LXS with default input and output.
n=200;
p=3;
randn('state', 123456);
X=randn(n,p);
% Uncontaminated data
y=randn(n,1);
ycont=y;
% Contaminated data
ycont(1:5)=ycont(1:5)+6;
y=ycont;

% Example of point mass contamination.
n=130;
p=5;
state1=123498;
randn('state', state1);
X=randn(n,p);
y=randn(n,1);
kk=30;
% point mass contamination of the first kk units
X(1:kk,:)=1;
y(1:kk)=3;

bsbmfullrank=true;
bonflev=[]; % 0.99; % []; % scalar or empty
h=floor(0.5*(n+p+1));
init=floor(n*0.6);
intercept=true;
lms=struct;
lms.bsb=(20:60)';
msg=true;
nocheck=true;
nsamp=1000;
threshoutX=1;
weak=false;
rng('default')
rng(100);

tic
% Check whether .mex and .m produce the same results
[out] = FSR(y,X,   'bsbmfullrank',bsbmfullrank,'bonflev',bonflev,...
    'h',h,'init',init,'intercept',intercept,'lms',lms,'msg',msg,...
    'nocheck',nocheck,'nsamp',nsamp','threshoutX',threshoutX,'weak',weak,'plots',0);
tottime=toc;

% FSR wrapper1
tic
rng(100);
[outMEX]=FSR_wrapper1_mex(y,X,   bsbmfullrank,bonflev,h,init,intercept,...
    lms,msg,nocheck,nsamp,threshoutX,weak);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSR1'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

tol=1e-7;
assert(isequaln(out.ListOut,outMEX.ListOut),'ListOut not equal')
assert(isequaln(out.outliers,outMEX.outliers),'outliers not equal')
if ~isnan(out.mdr)
assert(max(abs(out.mdr-outMEX.mdr),[],'all')<toc,'mdr not equal')
assert(isequaln(out.Un,outMEX.Un),'Un not equal')
assert(isequaln(out.nout,outMEX.nout),'nout not equal')
assert(max(abs(out.beta-outMEX.beta),[],'all')<toc,'beta not equal')
assert(abs(out.scale-outMEX.scale)<toc,'scale not equal')
assert(max(abs(out.fittedvalues-outMEX.fittedvalues))<toc,'fittedvalues not equal')
assert(max(abs(out.residuals-outMEX.residuals))<toc,'residuals not equal')

assert(isequal(out.class,outMEX.class),'class not equal')
end

