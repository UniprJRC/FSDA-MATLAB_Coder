%% Test for unibiv

n=500;
p=5;
rng(10)
Y=randn(n,p);
madcoef=1;
robscale=1;
rf=0.98;
% Check whether mex and .m produce the same results
tic
[fre]=unibiv(Y,'madcoef',madcoef,'robscale',robscale','rf',rf);
tottime=toc;

% LXS wrapper when lms is a scalar
rng(100);
tic

[freMEX]=unibiv_wrapper_mex(Y,madcoef,robscale,rf);

tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'unibiv'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

assert(isequal(fre,freMEX),'fre not equal')
