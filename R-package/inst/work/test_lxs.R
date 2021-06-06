##  test_lxs

    ## Call LXS() on the hbk data, with LTS, reweighting and alpha=0.5

    library(fsdac)
    library(rrcov)      # for dataset 'hbk' and to compare times with ltsReg
    library(fsdaR)      # to compare times
    library(tictoc)

    data(hbk, package="robustbase")
    XX <- hbk
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

    (out <- LXS(y, X, alpha=0.5, lms=2, rew=TRUE, intercept=TRUE, trace=TRUE))

##
##  Timing experiments ==========================================
    start_time <- Sys.time()
    out <- LXS(y, X, alpha=0.5, lms=2, rew=TRUE, nsamp=0, trace=TRUE)
    end_time <- Sys.time()
    end_time - start_time

    start_time <- Sys.time()
    out <- ltsReg(Y~., data=hbk, nsamp="exact", trace=TRUE)
    end_time <- Sys.time()
    end_time - start_time

    start_time <- Sys.time()
    out <- fsreg(Y~., data=hbk, method="LTS", control=LXS_control(nsamp=0, lms=2))
    end_time <- Sys.time()
    end_time - start_time

    out <- LXS(y, X, alpha=0.5, lms=2, rew=TRUE, intercept=0, nsamp=0, trace=TRUE)
    out <- LXS(y, X, alpha=0.5, lms=c(refsteps=10, bestr=20), rew=TRUE)

## Try with a large data set and few repetitions (nsamp=10)
    X <- matrix(rnorm(100000*20), ncol=20)
    y <- rnorm(100000)

    start_time <- Sys.time()
    out <- LXS(y, X, lms=c(refsteps=100), nsamp=10)
    end_time <- Sys.time()
    end_time - start_time

    start_time <- Sys.time()
    out <- ltsReg(y~X, nsamp=10)
    end_time <- Sys.time()
    end_time - start_time

##===============================================================
##
##  The examples from MATLAB
##

    library(fsdac)

    ##  #1. LXS with default input and output.
    ##  Compute LMS estimator without reweighting, add intercept to matrix X
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    y[1:5] <- y[1:5] + 6
    (out <- LXS(y,X))

    ##  #2. LXS with optional arguments.
    ##  Compute LMS estimator, reweight [and plot the residuals].
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    y[1:5] <- y[1:5] + 6
    (out <- LXS(y,X, rew=TRUE))

    ##  #3. LXS with optional output.
    ##  Generating the C matrix containing the indices of the subsamples
    ##  extracted for computing the estimate (the so called elemental sets).
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    y[1:5] <- y[1:5] + 6
    (out <- LXS(y,X, csave=TRUE))

    ##  4. Reweighted LTS estimator.
    ##  Compute reweighted LTS estimator [and produce the plot of residuals].
    ##  (standard LTS without concentration steps)
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    y[1:5] <- y[1:5] + 6
    (out <- LXS(y,X, rew=TRUE, lms=3))

    ##  5. Specifying the number of subsamples.
    ##  Compute LMS estimator, without plots using 20000 subsamples.
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    y[1:5] <- y[1:5] + 6
    (out <- LXS(y, X, nsamp=20000))

    ##  6. Specifying a confidence level.
    ##  Compute reweighted LMS and use a confidence level for outlier
    ##  detection equal to 0.999.
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    y[1:5] <- y[1:5] + 6
    (out <- LXS(y,X, rew=TRUE, conflev=0.999))


    ##  7. Using fast options.
    ##  Compute LTS using fast options, detection equal to 0.999.
    ##  'lms' is a list, do 5 refining steps for each elemental subset, store the best 10 subsets
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    y[1:5] <- y[1:5] + 6

    ## lms is a named list: do 5 refining steps for each elemental subset and dtore the best 10 subsets
    lms <- c(refsteps=5, bestr=10)
    (out <- LXS(y,X, lms=lms))


    ##  8. We compare the output of different procedures:
    ##  only the reweighted LTS seems to detect half of the outlier with a Bonferroni
    ##  significance level.

    set.seed(1000)
    n <- 100
    p <- 3
    X <- matrix(rnorm(n*p), nrow=n)
    bet <- c(3, 4, 5)
    y <- 3 * rnorm(n) + X %*% bet
    y[1:20] <- y[1:20] + 13

    ##  Define nominal confidence level
    conflev <- c(0.99, 1 - 0.01/length(y))

    ##  Define number of subsets
    nsamp <- 3000

    ## LMS with no reweighting
    (outLMS <- LXS(y, X, nsamp=nsamp, conflev=conflev[1]))
    outLMS$outliers

    ##  These are some plot functionalities which are not currently implemented
    ##  h=subplot(2,2,1)
    ##  laby='Scaled LMS residuals';
    ##  resindexplot(outLMS.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev)

    ##  LTS with no reweighting

    ##  h=subplot(2,2,2);
    (outLTS <- LXS(y, X, nsamp=nsamp, conflev=conflev[1], lms=3))
    outLTS$outliers

    ##  laby='Scaled LTS residuals';
    ##  resindexplot(outLTS.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev);

    ##  LMS with reweighting
    (outLMSr <- LXS(y, X, nsamp=nsamp, conflev=conflev[1], rew=TRUE))
    outLMSr$outliers

    ##  h=subplot(2,2,3);
    ##  laby='Scaled reweighted LMS residuals';
    ##  resindexplot(outLMSr.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev)

    ##  LTS with reweighting
    (outLTSr <- LXS(y, X, nsamp=nsamp, conflev=conflev[1], rew=1, lms=3))
    outLTSr$outliers

    ##  h=subplot(2,2,4);
    ##  laby='Scaled reweighted LTS residuals';
    ##  resindexplot(outLTSr.residuals,'h',h,'title',titl,'laby',laby,'numlab','','conflev',conflev);
    ##
    ##  By simply changing the seed to 543 (state=543), using a Bonferroni size of 1%, no unit is declared as outlier.
    ##

%{
    %% Example of the use of option bonflevoutX.
    % In this example a set of remote units is added to a cloud of points.
    % The purpose of this example is to show that while best LMS using all
    % default options contains some of the remote units. In order to make sure
    % that the remote units are excluded from the best LMS subset it is
    % necessary to use option bonflevoutX.
    rng('default')
    rng(10000)
    n=100;
    p=1;
    X=randn(n,p);
    epsil=10;
    beta=ones(p,1);
    y=X*beta+randn(n,1)*epsil;
    % Add 10 very remote points
    add=10;
    Xadd=X(1:add,:)+5000;
    yadd=y(1:add)+200;
    Xall=[X;Xadd];
    yall=[y;yadd];
    out=LXS(yall,Xall);
    subplot(2,1,1)
    plot(Xall,yall,'o')
    xylim=axis;
    line(xylim(1:2),out.beta(1)+out.beta(2)*xylim(1:2))
    title('Fit using best subset with option bonflevoutX empty')
    subplot(2,1,2)
    plot(Xall,yall,'o')
    out=LXS(yall,Xall,'bonflevoutX',0.99);
    line(xylim(1:2),out.beta(1)+out.beta(2)*xylim(1:2))
    ylim(xylim(3:4));
    title('Fit using best subset with option bonflevoutX  not empty')
%}
