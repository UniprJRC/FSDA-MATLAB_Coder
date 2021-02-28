%% Test for FSRbsb
n=50;
y=randn(n,1)+10;
X=randn(n,3);

la=0;
intercept=true;
nocheck=true;
bsbsteps=0;
msg=true;

[outINI]=LXS(y,X,'nsamp',1000);
bsb=double(outINI.bs)';
init=10;

% Check whether mex and .m produce the same results
[UnMEX,BBMEX]=FSRbsb_wrapper_mex(y,X,bsb,   init,intercept, nocheck, bsbsteps,msg);
[Un,BB]=FSRbsb(y,X,bsb,  'init',init,'intercept',intercept,...
    'nocheck',nocheck,'bsbsteps',bsbsteps,'msg',msg);
tol=1e-9;
assert(isequaln(Un,UnMEX),'Un not equal')
assert(isequaln(BB,BBMEX),'BB not equal')
