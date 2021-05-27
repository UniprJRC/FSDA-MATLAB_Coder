##  test_lxs

    ## Call LXS() on the hbk data, with LTS, reweighting and alpha=0.5

    library(fsdaR)
    library(fsdac)
    library(rrcov)
    library(tictoc)
    data(hbk)
    XX <- hbk
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

    out <- LXS(y, X, alpha=0.5, lms=2, rew=TRUE, intercept=TRUE, trace=TRUE)

    start_time <- Sys.time()
    out <- LXS(y, X, alpha=0.5, lms=2, rew=TRUE, intercept=TRUE, nsamp=0, trace=TRUE)
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


    ##  LXS with default input and output.
    ##  Compute LMS estimator without reweighting, add intercept to matrix X
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    y[1:5] <- y[1:5] + 6
    (out <- LXS(y,X))


## Try with a large data set and few repetitions (nsamp=10)
    X <- matrix(rnorm(100000*20), ncol=20)
    y <- rnorm(100000)

    start_time <- Sys.time()
    out <- LXS(y, X, lms=c(refsteps=100), nsamp=10)
    end_time <- Sys.time()
    end_time - start_time

    start_time <- Sys.time()
    out <- ltsReg(y~X, nsamp=10000)
    end_time <- Sys.time()
    end_time - start_time
