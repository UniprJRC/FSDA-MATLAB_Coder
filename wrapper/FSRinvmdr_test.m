%% Test for FSRinvmdr
n=100;
p=3;
init=9;
prob=[0.05 0.5 0.95];
    



% Check whether mex and .m produce the same results


FSRenv=FSRenvmdr(n,v,'init',init,'prob',prob);

tic
FSRinv=FSRinvmdr(FSRenv, v);
tottime=toc;

% FSMinvmmd_wrapper_MEX

nn=FSRenv(end,1)+1;
tic
FSRinvMEX=FSRinvmdr_wrapper_mex(FSRenv, v, nn);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSMenvmmd'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% Compare the two outputs if some difference is present
assert(isequal(FSRinv, FSRinvMEX),'FSRinv not equal')

