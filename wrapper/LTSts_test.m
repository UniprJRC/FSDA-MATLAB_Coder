%% Test for LTSts
% Simulated data with linear trend and level shift.
rng('default')
n=145;
a=1;
b=0.8;
sig=1;
seq=(1:n)';
y=a+b*seq+sig*randn(n,1);
% Add a level shift in the simulated series
y(round(n/2):end)=y(round(n/2):end)+10;
% model with a linear trend, non seasonal and level shift

conflev=0.99;
dispresults=true;
h=round(n*0.5);
intercept=true;
lshiftlocref=struct;
lshiftlocref.wlength=6;
lshiftlocref.typeres=2;
lshiftlocref.huberc=2;
lts=struct;
lts.bestr=10;
lts.refsteps=3;
lts.refstepsbestr=10;
lts.reftol=1e-07;
lts.reftolbestr=1e-07;

model=struct;
model.trend=2;
% Potential level shift position is investigated in positions:
% t=10, t=11, ..., t=T-10.
model.lshift=10;
model.s=12;
model.trend=1;
model.seasonal=3;
model.ARp=2; %
model.X=[];
msg=true;
nbestindexes=10;
nocheck=false;
nsamp=5000;
refstepsALS=5;
reftolALS=1e-7;
SmallSampleCor=1;
yxsave=true;

rng('default')
rng(100);

% Check whether mex and .m produce the same results
tic
[out,C] = LTSts(y, ...
    'conflev',conflev,'dispresults',dispresults,'h',h,...
    'intercept',intercept,'lshiftlocref',lshiftlocref,'lts',lts,...
    'model',model,'msg',msg,'nbestindexes',nbestindexes,'nocheck',nocheck,...
    'nsamp',nsamp','refstepsALS',refstepsALS,'reftolALS',reftolALS,...
    'SmallSampleCor',SmallSampleCor,'yxsave',yxsave);
tottime=toc;

% LTSts wrapper_mex
rng(100);
tic
[outMEX,CMEX]=LTSts_wrapper_mex(y,  conflev,dispresults,h,intercept,lshiftlocref,lts,model,msg,nbestindexes,nocheck,nsamp,refstepsALS,reftolALS,SmallSampleCor,yxsave);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'LTSts'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

tol=1e-7;
assert(isequal(out.RES,outMEX.RES),'RES not equal')
assert(isequaln(out.Hsubset,outMEX.Hsubset),'Hsubset not equal')
assert(max(abs(out.B(:)-outMEX.B(:)))<tol,'B not equal')
assert(max(abs(out.posLS-outMEX.posLS))<tol,'posLS not equal')
assert(max(abs(out.yhat-outMEX.yhat))<toc,'yhat not equal')
assert(isequal(out.outliers,outMEX.outliers),'outliers not equal')
assert(isequal(out.outliersPval,outMEX.outliersPval),'outliersPval not equal')
assert(isequal(out.scale,outMEX.scale),'singsub not equal')

assert(isequal(out.numscale2,outMEX.numscale2),'numscale2 not equal')
assert(isequal(out.BestIndexes,outMEX.BestIndexes),'BestIndexes not equal')
assert(isequal(out.residuals,outMEX.residuals),'residuals not equal')
assert(isequal(out.bs,outMEX.bs),'bs not equal')
assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.h,outMEX.h),'h not equal')
assert(isequal(out.weights,outMEX.weights),'weights not equal')
assert(isequal(out.singsub,outMEX.singsub),'singsub not equal')
assert(isequal(out.class,outMEX.class),'class not equal')
assert(isequal(out.Likloc,outMEX.Likloc),'Likloc not equal')
assert(isequal(out.y,outMEX.y),'y not equal')
assert(isequal(out.invXX,outMEX.invXX),'invXX not equal')
assert(isequal(out.Btable,outMEX.Btable),'Btable not equal')
assert(isequal(out.LastHarmonicPval,outMEX.LastHarmonicPval),'LastHarmonicPval not equal')
assert(isequaln(out.LevelShiftPval,outMEX.LevelShiftPval),'LevelShiftPval not equal')

assert(isequal(C,CMEX),'C not equal')
if yxsave==true
    assert(isequal(out.y,outMEX.y),'y not equal')
    assert(isequal(out.X,outMEX.X),'X not equal')
end



%% Another example with varying seasonality

% Model with an explanatory variable using log-transformed series.
% Load airline data.
%   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960
y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan
    118  126  150  180  196  188  233  277  301  318  342  391    % Feb
    132  141  178  193  236  235  267  317  356  362  406  419    % Mar
    129  135  163  181  235  227  269  313  348  348  396  461    % Apr
    121  125  172  183  229  234  270  318  355  363  420  472    % May
    135  149  178  218  243  264  315  374  422  435  472  535    % Jun
    148  170  199  230  264  302  364  413  465  491  548  622    % Jul
    148  170  199  242  272  293  347  405  467  505  559  606    % Aug
    136  158  184  209  237  259  312  355  404  404  463  508    % Sep
    119  133  162  191  211  229  274  306  347  359  407  461    % Oct
    104  114  146  172  180  203  237  271  305  310  362  390    % Nov
    118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec
% Source:
% http://datamarket.com/data/list/?q=provider:tsdl

y=(y(:));
y1=log(y);
% Model with linear trend, two harmonics for seasonal component and
% varying amplitude using a linear trend).
model=struct;
model.trend=1;              % linear trend
model.s=12;                 % monthly time series
model.seasonal=102;
model.lshift=100:103;
model.X=randn(length(y),1);
model.ARp=0; %
rng('default')
rng(100);

tic
[out,C]=LTSts(y1,'conflev',conflev,'dispresults',dispresults,'h',h,...
    'intercept',intercept,'lshiftlocref',lshiftlocref,'lts',lts,...
    'model',model,'msg',msg,'nbestindexes',nbestindexes,'nocheck',nocheck,...
    'nsamp',nsamp','refstepsALS',refstepsALS,'reftolALS',reftolALS,...
    'SmallSampleCor',SmallSampleCor,'yxsave',yxsave);
tottime=toc;

rng('default')
rng(100);

tic
[outMEX,CMEX]=LTSts_wrapper(y1,  conflev,dispresults,h,intercept,lshiftlocref,lts,model,msg,nbestindexes,nocheck,nsamp,refstepsALS,reftolALS,SmallSampleCor,yxsave);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'LTSts'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

tol=1e-5;
assert(isequal(out.RES,outMEX.RES),'RES not equal')
assert(isequaln(out.Hsubset,outMEX.Hsubset),'Hsubset not equal')
assert(max(abs(out.B(:,1)-outMEX.B(:,1)))<tol,'B not equal')
assert(max(abs(out.yhat-outMEX.yhat))<tol,'yhat not equal')
assert(isequal(out.outliers,outMEX.outliers),'outliers not equal')
assert(max(abs(out.outliersPval-outMEX.outliersPval))<tol,'outliersPval not equal')
assert(isequal(out.scale,outMEX.scale),'singsub not equal')

assert(max(abs(out.numscale2(:)-outMEX.numscale2(:)))<tol,'numscale2 not equal')
assert(isequal(out.BestIndexes,outMEX.BestIndexes),'BestIndexes not equal')
assert(isequal(out.residuals,outMEX.residuals),'residuals not equal')
assert(isequal(out.bs,outMEX.bs),'bs not equal')
assert(isequal(out.conflev,outMEX.conflev),'conflev not equal')
assert(isequal(out.h,outMEX.h),'h not equal')
assert(isequal(out.weights,outMEX.weights),'weights not equal')
assert(isequal(out.singsub,outMEX.singsub),'singsub not equal')
assert(isequal(out.class,outMEX.class),'class not equal')
assert(isequal(out.y,outMEX.y),'y not equal')
assert(isequal(out.invXX,outMEX.invXX),'invXX not equal')
assert(isequal(out.Btable,outMEX.Btable),'Btable not equal')
assert(isequal(out.LastHarmonicPval,outMEX.LastHarmonicPval),'LastHarmonicPval not equal')
assert(isequaln(out.LevelShiftPval,outMEX.LevelShiftPval),'LevelShiftPval not equal')

assert(isequal(C,CMEX),'C not equal')
if yxsave==true
    assert(isequal(out.y,outMEX.y),'y not equal')
    assert(isequal(out.X,outMEX.X),'X not equal')
end


