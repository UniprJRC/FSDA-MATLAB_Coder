%% Test for FSRenvmdr 

n=2000;
p=3;
init=20;
prob=[0.01 0.5 0.99];
    
% Check whether mex and .m produce the same results

tic
    MDRenv=FSRenvmdr(10000,5,'init',init,'prob',prob);
tottime=toc;

% FSRmdr wrapper
rng(100);
tic
    MDRenvMEX=FSRenvmdr_wrapper_mex(10000,5,init,prob);
tottimeMEX=toc;

% Compare mex time with .m time
CompTimes=array2table([tottime tottimeMEX],'VariableNames',{'.m time' 'mex time'},...
    'RowNames',{'FSRenvmdr'});
disp(CompTimes)
% Save table CompTimes
save('CompTimes','CompTimes')

% Compare equality of the two outputs
assert(isequal(MDRenv,MDRenvMEX),'MDRenv not equal')
