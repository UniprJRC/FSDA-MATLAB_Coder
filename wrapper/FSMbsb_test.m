%% Test for FSMbsb
n=200;
v=3;
randn('state',123456);
Y=randn(n,v);
% Contaminated data
Ycont=Y;
seqcont=11:10:51;
disp('Contaminated units')
disp(seqcont)
Ycont(seqcont,:)=Ycont(seqcont,:)+2.5;
Y=Ycont;
% Analyse the units forming subset in step msel=195
bsb=(1:5)';
bsbsteps=[]; % (190:195)';
init=10;
msg=true;
nocheck=false;


% Check whether mex and .m produce the same results
tic
[Un,BB]=FSMbsb(Y,bsb,'bsbsteps',bsbsteps,'init',init,...
    'msg',msg,'nocheck',nocheck);
tottime=toc;

tic
[UnMEX,BBMEX]=FSMbsb_wrapper_mex(Y,bsb,  bsbsteps,init,msg,nocheck);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSMbsb'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

assert(isequaln(Un,UnMEX),'Un not equal')
assert(isequaln(BB,BBMEX),'BB not equal')
