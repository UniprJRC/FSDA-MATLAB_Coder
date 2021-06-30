##  test_fsrmdr

    library(fsdac)

##  1. FSRmdr with all default options. Compute minimum deletion residual.
##      Monitor minimum deletion residual in each step of the forward search.
##      Common part to all examples: load fishery dataset.

    data(fishery)
    y <- fishery[,2, drop=FALSE]
    X <- fishery[,1, drop=FALSE]

    ##out <- LXS(y, X, nsamp=10000)
    ##bsb <- out$bs
    bsb <- c(371, 450)                          # found by LTS

    out1 <- FSRmdr(y, X, bsb)                   # call 'FSRmdr' with all default parameters
    plot(out1$mdr[,1], out1$mdr[,2], type="l", col="blue",
      xlab="Step", ylab="minimum deletion residual",
      main="Monitoring of the minimum deletion residual")

    out1 <- FSRmdr(y, X)                         # call 'FSRmdr' with missing bsb - will start from random p-sample
    plot(out1)                                   # same plot as above

    out1 <- FSRmdr(y, X, bsb, init=60)           # Example with monitoring from step 60.
    out1 <- FSRmdr(y, X, bsb, intercept=FALSE)   # Regression without intercept
    out1 <- FSRmdr(y, X, bsb, nocheck=TRUE)      # No checks on y and X (and no intercept)

##  2. Analyze units entering the search in the final steps.
##
##  Compute minimum deletion residual and analyze the units entering
##  subset in each step of the fwd search (matrix Un).  As is well known,
##  the FS provides an ordering of the data from those most in agreement
##  with a suggested model (which enter the first steps) to those least in
##  agreement with it (which are included in the final steps).


    data(fishery)
    y <- fishery[,2, drop=FALSE]
    X <- fishery[,1, drop=FALSE]
    out <- LXS(y, X, nsamp=10000)
    bsb <- out$bs
    out1 <- FSRmdr(y, X, out$bs)
    tail(out1$Un)

##  3. Units forming subset in each step.
##      Obtain detailed information about the units forming subset in each
##      step of the forward search (matrix BB).
    data(fishery)
    y <- fishery[,2, drop=FALSE]
    X <- fishery[,1, drop=FALSE]
    out <- LXS(y, X, nsamp=10000)
    bsb <- out$bs
    out1 <- FSRmdr(y, X, out$bs)
    head(out1$BB)

##  4. Monitor \( \hat  \beta \). Monitor how the estimates of beta coefficients changes as the subset
##      size increases (matrix Bols).
    data(fishery)
    y <- fishery[,2, drop=FALSE]
    X <- fishery[,1, drop=FALSE]
    out <- LXS(y, X, nsamp=10000)
    bsb <- out$bs
    out1 <- FSRmdr(y, X, out$bs)
    head(out1$Bols

##  5. Monitor $s^2$.
##      Monitor the estimate of $\sigma^2$ in each step of the fwd search (matrix S2).
    data(fishery)
    y <- fishery[,2, drop=FALSE]
    X <- fishery[,1, drop=FALSE]
    out <- LXS(y, X, nsamp=10000)
    out1 <- FSRmdr(y, X, out$bs)

    plot(out1$S2[, 1], out1$S2[, 2], type="l", col="blue", xlab="Step",
        ylab=expression("s"^2), main='Monitoring of s2')



##  6. Specify a regression model without intercept.
##      FSRmdr using a regression model without intercept.
    data(fishery)
    y <- fishery[,2, drop=FALSE]
    X <- fishery[,1, drop=FALSE]
    out <- LXS(y, X, nsamp=10000)
    out1 <- FSRmdr(y, X, bsb=out$bs, intercept=FALSE)

##  7. Example of the use of option nocheck.
##      FSRmdr applied without doing any checks on y and X variables.
    data(fishery)
    y <- fishery[,2, drop=FALSE]
    X <- fishery[,1, drop=FALSE]
    out <- LXS(y, X, nsamp=10000)
    out1 <- FSRmdr(y, X, bsb=out$bs, nocheck=TRUE)


##  8. Monitoring of s2, and the evolution of beta coefficients for the Hawkins dataset

    data(hawkins)
    y <- hawkins[, 9, drop=FALSE]
    X <- hawkins[, 1:8]
    out <- LXS(y, X, nsamp=10000)

    out1 <- FSRmdr(y, X, bsb=out$bs)

    if(sum(is.nan(out1$S2)) > 0) {
        cat('\nNoFullRank in initial subset, please rerun FSRmdr.\n')
    } else {
        ##  The forward plot of s2 shows that initially the estimate is virtually
        ##  zero. The four line segments comprising the plot correspond to the four
        ##  groups of observations

        ##  Plot of the monitoring of S2 and R2
        oldpar <- par(mfrow=c(2,1))

        plot(out1$S2[,1], out1$S2[,2], xlab='Subset size m', ylab='S2', type="l")
        plot(out1$S2[,1], out1$S2[,3], xlab='Subset size m', ylab='R2', type="l")

        par(oldpar)

        ##  The forward plots of the estimates of the beta coefficients show that
        ##  they are virtually constant until m = 86, after which they start
        ##  fluctuating in different directions.

        ##  Plots of the monitoring of "Estimates of beta coefficients"
        oldpar <- par(mfrow=c(3,3))
        for(j in 3:ncol(out1$Bols))
            plot(out1$Bols[,1], out1$Bols[, j], xlab='Subset size m', ylab=colnames(out1$Bols)[j], type="l")
        par(oldpar)
    }

##  9. Store units forming subsets in selected steps.
##      In this example the units forming subset are stored just for
##      selected steps.

    data(hawkins)
    y <- hawkins[, 9, drop=FALSE]
    X <- hawkins[, 1:8]

    ##  rng('default')
    ##  rng(100)

    out <- LXS(y, X, nsamp=10000)
    out1 <- FSRmdr(y, X, bsb=out$bs, bsbsteps=c(30, 60))


    if(sum(is.nan(out1$S2)) > 0) {
        cat('\nNoFullRank in initial subset, please rerun FSRmdr.\n')
    } else {
        ##  BB has just two columns
        ##  First column contains information about units forming subset at step m=30
        ##  sum(~isnan(BB(:,1))) is 30
        ##  Second column contains information about units forming subset at step m=60
        ##  sum(~isnan(BB(:,2))) is 60

        print(sum(!is.nan(out1$BB[, 1])))
        print(sum(!is.nan(out1$BB[, 2])))
    }


##  10. Example of the use of option threshlevoutX.
##      In this example a set of remote units is added to a cloud of points.
##      The purpose of this example is to show that in presence of units very far
##      from the bulk of th data (bad or good elverage points) it is necessary to
##      bound their effect putting a constraint on their leverage hi=xi'(X'X)xi

    ##rng(10000)

    n <- 100
    p <- 1
    X <- matrix(rnorm(n*p), nrow=n)
    epsil <- 10
    beta <- rep(1, p)
    y <- X %*% beta + rnorm(n) * epsil

    ##  Add 10 very remote points
    add=3;
    Xadd=X(1:add,:)+5000;
    yadd=y(1:add)+200;
    Xall=[X;Xadd];
    yall=[y;yadd];
    outLXS=LXS(y,X);
    bs=outLXS.bs;
    subplot(2,1,1)
    out1=FSRmdr(yall,Xall,bs,'plots',1);
    xylim=axis;
    ylabel('mdr')
    title('Monitoring of mdr without bound on the leverage')
    subplot(2,1,2)
    out2=FSRmdr(yall,Xall,bs,'plots',1,'threshlevoutX',10);
    ylim(xylim(3:4));
    ylabel('mdr')
    title('Monitoring of mdr with bound on the leverage')
%}
