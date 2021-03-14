%% Test for FSm

% FSM with plots showing envelope superimposition.
n=200;
v=3;
randn('state', 123456);
Y=randn(n,v);
% Contaminated data
Ycont=Y;
Ycont(1:5,:)=Ycont(1:5,:)+3;
Ycont(1:50,:)=Ycont(1:50,:)+2;
Y=Ycont;

bonflev=[]; % 0.99; % []; % scalar or empty
crit='md';
init=floor(n*0.6);
m0=v+1;
msg=true;
nocheck=true;
rf=0.95;
rng('default')
rng(100);

tic
% Check whether mex and .m produce the same results
[out] = FSM(Y, ...
    'bonflev',bonflev,'crit',crit,'init',init,'m0',m0,'msg',msg,...
    'nocheck',nocheck,'rf',rf,'plots',1);
tottime=toc;

% FSM wrapper
tic
rng(100);
[outMEX] = FSM_wrapper_mex(Y, ...
    bonflev,crit,init,m0,msg,nocheck,rf);
tottimeMEX=toc;

% Compare mex time with .m time
disp(array2table([tottime tottimeMEX],'VariableNames',{'.m time' '.mex time'}))

tol=1e-7;
assert(isequal(out.outliers,outMEX.outliers),'outliers not equal')
assert(max(abs(out.loc-outMEX.loc))<tol,'location not equal')
assert(max(abs(out.cov-outMEX.cov),[],'all')<tol,'cov not equal')
assert(max(abs(out.md-outMEX.md))<tol,'md not equal')
assert(max(abs(out.mmd-outMEX.mmd),[],'all')<toc,'mmd not equal')
assert(isequaln(out.Un,outMEX.Un),'Un not equal')
assert(isequaln(out.nout,outMEX.nout),'nout not equal')
assert(isequal(out.class,outMEX.class),'class not equal')

