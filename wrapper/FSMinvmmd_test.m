%% Test for FSRenvmmd

n=100;
v=3;
init=9;
prob=[0.05 0.5 0.95];
scaled=true;


% Check whether mex and .m produce the same results


MMDenv=FSMenvmmd(n,v,'init',init,'prob',prob,'scaled',scaled);

tic
MMDinv=FSMinvmmd(MMDenv,v);
tottime=toc;

% FSMinvmmd_wrapper_MEX

nn=MMDenv(end,1)+1;
tic
MMDinvMEX=FSMinvmmd_wrapper_mex(MMDenv,v, nn);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSMenvmmd'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% Compare equality of the two outputs
assert(isequal(MMDinv,MMDinvMEX),'MMDinv not equal')
