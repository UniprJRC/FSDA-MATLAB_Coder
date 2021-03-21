%% Test for FSRbsb
n=5000;
y=randn(n,1)+10;
X=randn(n,3);

intercept=true;
nocheck=true;
bsbsteps=0;
msg=true;

[outINI]=LXS(y,X,'nsamp',1000);
bsb=double(outINI.bs)';
init=10;

% Check whether mex and .m produce the same results
tic
[Un,BB]=FSRbsb(y,X,bsb, 'bsbsteps',bsbsteps, 'init',init,'intercept',intercept,...
    'msg',msg,'nocheck',nocheck);
tottime=toc;

tic
[UnMEX,BBMEX]=FSRbsb_wrapper_mex(y,X,bsb,   bsbsteps,init,intercept,msg,nocheck);
tottimeMEX=toc;


% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSRbsb'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% Compare equality of the two outputs
assert(isequaln(Un,UnMEX),'Un not equal')
assert(isequaln(BB,BBMEX),'BB not equal')
