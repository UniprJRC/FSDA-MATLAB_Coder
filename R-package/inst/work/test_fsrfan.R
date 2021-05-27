##  test_fsrbsb

## Call FSRbsb() with all default options.

    ##  %% FSRfan with all default options.
    ##  % Store values of the score test statistic
    ##  % for the five most common values of $\lambda$.
    ##  % Produce also a fan plot and display it on the screen.
    ##  % Common part to all examples: load wool dataset.
    ##  XX=load('wool.txt');
    ##  y=XX(:,end);
    ##  X=XX(:,1:end-1);
    ##  % Function FSRfan stores the score test statistic.
    ##  % In this case we use the five most common values of lambda are considered
    ##  [out]=FSRfan(y,X);
    ##  fanplot(out);
    ##  %The fan plot shows the log transformation is diffused throughout
    ##      the data and does not depend on the presence of particular observations.

    library(fsdac)
    data(wool)
    XX <- wool
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]
    out <- FSRfan(y, X)

    out <- FSRfan(y, X, intercept=FALSE)

    lms <- matrix(c(1, 6, 16, 24, 15, 16, 20, 21,  9, 15, 17, 26,  7, 10, 15, 17,  6,  7, 12, 15), nrow=4)
    out <- FSRfan(y, X, lms=lms[,1], la=-1)

    out <- FSRfan(y, X, lms=lms)

## With random data set ==========================================
    library(fsdac)
    n <- 100
    p <- 3
    y <- rnorm(n)
    x <- matrix(rnorm(n*p), nrow=n)
    out <- FSRfan(y, x, family="YJall")
