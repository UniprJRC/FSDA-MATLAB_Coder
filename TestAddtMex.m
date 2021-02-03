%% addt with optional arguments.
% Excluding one observation from the sample; compare the added variable plot
% based on all units with that which excludes unit 43.
load('multiple_regression.txt');
y=1000+multiple_regression(:,4);

X=multiple_regression(:,1:3);
%[out]=addt(y,X(:,2:3),X(:,1),'plots',16,'units',20,'textlab',18);
%[out]=addt(y,X(:,2:3),X(:,1),'plots',16,'textlab','y');
textlab={'test string 12    3456 @!?#*ç§'};
units=[9 21 30 31 38 47]';
%
%  la=zeros(1,0);
%  la = double.empty;
la=1.5;
%la1=NaN;
%la=[];
%  uncommento the following line to set lambda parameter for data
%  transformation
%  la =0.5;
[out]=addt_mex(y,X(:,2:3),X(:,1), 'plots',1, 'textlab',textlab, 'units', units, ...
    'intercept', 0, 'la', la, 'FontSize', 14, 'SizeAxesNum', 12, 'nocheck', 0);

disp(out)