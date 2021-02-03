%% addt with optional arguments.
% Excluding one observation from the sample; compare the added variable plot
% based on all units with that which excludes unit 43.

rng('default')
rng(100)
n=50;

y=randn(n,1)+10;
X=randn(n,3);
w=randn(n,1);

units=1;
%

la=1.5;
%la1=NaN;
%la=[];
%  uncomment the following line to set lambda parameter for data
%  transformation
%  la =0.5;
[out]=addt_mex(y, X, w, 'plots', 0, 'textlab',{'test string'}, 'units', units, ...
    'intercept', 1, 'la', la, 'FontSize', 14, 'SizeAxesNum', 12, 'nocheck', 0);

disp(out)