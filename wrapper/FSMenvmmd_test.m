%% Test for FSRenvmmd

n=2000;
v=5;
init=20;
prob=[0.01 0.5 0.99];
scaled=true;

% Check whether mex and .m produce the same results

tic
MMDenv=FSMenvmmd(n,v,'init',init,'prob',prob,'scaled',scaled);
tottime=toc;

% FSMenvmmd_wrapper_mex
tic
MMDenvMEX=FSMenvmmd_wrapper_mex(n,v,init,prob,scaled);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSMenvmmd'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% Compare equality of the two outputs
assert(isequal(MMDenv,MMDenvMEX),'MDRenv not equal')
