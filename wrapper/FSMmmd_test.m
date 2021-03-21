%% Test for FSMmmd

n=5000;
v=10;
m0=30;
randn('state',123456);
Y=randn(n,v);
% 25 per cent of Contaminated data
Ycont=Y;
hh=round(n*0.45);
Ycont(1:hh,:)=Ycont(1:hh,:)+3;
Y=Ycont;
[fre]=unibiv(Y);
fre=sortrows(fre,[3 4]);
bsb=fre(1:m0,1);
bsbsteps=[];
init=round(n/2);
msg=false;
nocheck=false;

tic
[mmd,Un,BB] = FSMmmd(Y,bsb,   'bsbsteps',bsbsteps,...
    'init',init,'msg',msg,'nocheck',nocheck,'plots',0);

tottime=toc;

% FSMmmd wrapper
tic
[mmdMEX,UnMEX,BBMEX] = FSMmmd_wrapper_mex(Y,bsb,   bsbsteps,...
    init,msg,nocheck);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSMmmd'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% Compare equality of the two outputs
tol=1e-7;
assert(max(abs(mmd-mmdMEX),[],'all')<tol,'mdr not equal')
assert(isequaln(Un,UnMEX),'Un not equal')
assert(isequaln(BB,BBMEX),'BB not equal')

