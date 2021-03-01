%% addt with optional arguments.

% rng('default')
% rng(100)
n=50;

y=randn(n,1)+10;
X=randn(n,3);


% parameters not used by C Coder
defScalar=1;
defCell =false;
defBoolean = true;
intercept=true;
init=10;
nocheck=false;
msg=true;
bsbstepdef=30;
msg=false;

% FSRbsb with all default options.
[outINI]=LXS(y,X,'nsamp',1000);
bsb=double(outINI.bs)';

% if exist('FSRbsb','file')==2
    [out]=FSRbsb(y,X,bsb,'intercept',intercept,'init',init,'nocheck',nocheck,'plots',defBoolean,...
        'bsbsteps',bsbstepdef,'msg',msg);
% else
%    error('FSDA:FSRbsb:missingFile','FSRbsb is inside FSDA.')
% end

 outmex = FSRbsb_mex(y,X,bsb,'intercept',intercept,'init',init,'nocheck',nocheck,'plots',defBoolean,...
     'bsbsteps',bsbstepdef,'msg',msg);

disp(out)
disp(outmex)