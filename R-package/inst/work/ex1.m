%% Example of initial subset with full rank
% Initial subset supplied by the user
clc
seed=10;
rng(seed)
n=100;
y=mtR(n,1,seed);
X1=mtR(n,1,-seed);
X2=mtR(n,1,-seed);
X=[X1 X2];

bsb=11:21;

lms=struct;
lms.bsb=bsb;
out=FSR(y,X,'lms',lms);
% In this case out.ListOut is scalar NaN
% In this case out.mdr is scalar NaN

%% Example of initial subset without full rank
% Initial subset supplied by the user
clc
seed=10;
rng(seed)
n=100;
y=mtR(n,1,seed);
X1=mtR(n,1,-seed);
X2=mtR(n,1,-seed);
X=[X1 X2];

% Valentin, to have the same random numbers in R please use
%  set.seed(10)
% n=100
% p=2;
%  XX=matrix(rnorm(n*p),n,p+1)
% First column of XX is y
% Columns 2:end are X



X(10:100,:)=20;

bsb=11:21;

lms=struct;
lms.bsb=bsb;
out=FSR(y,X,'lms',lms);
% In this case out.ListOut is scalar NaN
% In this case out.mdr is scalar NaN

%% Example of lack of full rank during the search  (1)
% bsbmfullrank=true (default) that is you need  a full rank matrix at step
% m to progress.
% initial subset supplied by the user
clc
seed=10;
rng(seed)
n=100;
y=mtR(n,1,seed);
X1=mtR(n,1,-seed);
X2=mtR(n,1,-seed);
X=[X1 X2];
X(10:100,:)=20;

bsb=1:11;

lms=struct;
lms.bsb=bsb;
out=FSR(y,X,'lms',lms);
% In this case out.ListOut is a row vector which contains the list of the
% units for which X is not full rank
% out.mdr is a scalar NaN

%% Example of lack of full rank during the search  (2)
% bsbmfullrank=false (this is not the default) that is you do not need  a full rank matrix at step
% m to progress, but if at step m there is not full rank previous estimates of betas are used.
% Initial subset supplied by the user
clc
seed=10;
rng(seed)
n=100;
y=mtR(n,1,seed);
X1=mtR(n,1,-seed);
X2=mtR(n,1,-seed);
X=[X1 X2];
X(10:100,:)=1;
y(10:100)=5;
bsb=1:6;

lms=struct;
lms.bsb=bsb;
out=FSR(y,X,'lms',lms,'bsbmfullrank',false);
% In this case the search is forced to progress using last estimate of beta
% with full rank
% out.mdr has two columns
% out.ListOut is a row vector which contains the list of the units declared
% as outliers (note that the outlier declaration is based on the last betas
% for which X was full rank therefore it is not reliable)

%% Example of lack of full rank during the search  (3)
% Initial subset NOT supplied by the user but found using LXS
% bsbmfullrank=true (default)
% In this case more than 50 per cent of observations produce a non full
% rank matrix
clc
seed=10;
rng(seed)
n=100;
p=2;
y=mtR(n,1,seed);
X1=mtR(n,1,-seed);
X2=mtR(n,1,-seed);
X=[X1 X2];
X(10:100,:)=1;
y(10:100)=5;
bsb=1:6;

out=FSR(y,X,'bsbmfullrank',true,'nsamp',1000);
% out.mdr is a scalar NaN
% out.ListOut is a row vector which contains the list of the units 
% which produced a non singular matrix


%% Example of lack of full rank during the search  (4)
% Initial subset NOT supplied by the user but found using LXS
% bsbmfullrank=true (default)
% In this case less than 50 per cent of observations produce a non full
% rank matrix
clc
seed=10;
rng(seed)
n=100;
p=2;
y=mtR(n,1,seed);
X1=mtR(n,1,-seed);
X2=mtR(n,1,-seed);
X=[X1 X2];
X(10:50,:)=2;
y(10:100)=5;

out=FSR(y,X,'nsamp',10);
% In this case the search starts and finds at step m a non singular matrix
% The list of units producing X without full rank is shown on the screen,
% however, given that this list is smaller than 50%, LXS is recalled using
% the units which did not produce a singular matrix.
% The search tries to rerun from different starting points
% Warnings are shown about the fact that mdr is NaN at some steps
%.........
% Warning: Value of S2 at step 5 is zero, mdr is NaN 
% Warning: Value of S2 at step 8 is zero, mdr is NaN 
% Warning: Value of S2 at step 13 is zero, mdr is NaN 
% Warning: Value of S2 at step 15 is zero, mdr is NaN 
%
% The maximum number of attempts to rerun the search is 5
%
% If the search succeeds 
% out.mdr has two columns but may contain NaNs
% out.ListOut is a row vector which contains the list of the units 
% declared as outliers

%% Conclusions
% The idea is:
% The user provides an initial subset to FSR
% 1) initial subset is not full rank FSR stops
% 2a) During the search Xbsb is not full rank, FSR stops and returns the
% list of units which produced a non singular matrix (independently of the
% fact that this list is made up by a proportion smaller or greater than 50
% per cent).
% 2b) During the search Xbsb is not full rank but option bsmbfullrank is
% false therefore last betas with full rank are used.


% The user provides an initial subset to FSR
% 1) LXS finds an initial subset without full rank, FSR stops
% 2) initial subset is not full rank during the search
% 2a) the number of units producing a non full rank is greater than 50 per
% cent FSR stops
% 2b) the number of units producing a non full rank is smaller than 50 per
% cent, up to 5 attempts are made to rerun the search. 
% warnings are shown when
% a) estimate of scale is 0 from LXS
% b) mdr is NaN (given that estimate of scale during the search is 0)



