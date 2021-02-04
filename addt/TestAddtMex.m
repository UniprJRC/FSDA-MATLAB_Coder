%% addt with optional arguments.

% rng('default')
% rng(100)
n=50;

y=randn(n,1)+10;
X=randn(n,3);
w=randn(n,1);


%la=[];
%  uncomment the following line to set lambda parameter for data
%  transformation
la=1.1;


% parameters not used by C Coder
defScalar=1;
defCell =false;
intercept=true;

[out]=addt_mex(y, X, w, 'intercept', intercept, 'la', la,  'nocheck', 0, ...
    'FontSize', defScalar, 'plots',defScalar,  'SizeAxesNum',defScalar, ...
    'textlab', defCell, 'units', defScalar);

if exist('addt','file')==2
    [out1]=addt(y, X, w, 'plots', 1, 'intercept', intercept, 'la', la, 'nocheck', 0, ...
        'FontSize', 12, 'SizeAxesNum', 10,'textlab',false,'units',1:2);
else
    error('FSDA:addt:missingFile','addt is inside FSDA.')
end
disp(out)
disp(out1)