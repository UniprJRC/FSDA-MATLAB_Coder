%% This will ultimately work, but errors will be produced, 
%% and messages will be written which I do not get in R.
%%
%%  The out.mdr will be a complex matrix!!

load xx.txt
y=xx(:,6);
X=xx(:,1:5);
out=FSR(y, X)
