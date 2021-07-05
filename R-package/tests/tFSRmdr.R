##  Testing FSRmdr()==============================================

    library(fsdac)

##  1. FSRmdr with all default options. Compute minimum deletion residual.
##      Monitor minimum deletion residual in each step of the forward search.
##      Common part to all examples: load fishery dataset.

##  All examples #1-#7 use the same data fishery. LXS is used only
##  once for finding the initial values for bsb

    data(fishery)
    y <- fishery[, 2, drop=FALSE]
    X <- fishery[, 1, drop=FALSE]

    ## Instead of calling LXS, take hard-coded bsb - this is faster,
    ##  more deterministic and guarantees that there is no crash of R

    ##  out <- LXS(y, X, nsamp=10000)
    ##  bsb <- out$bs
    ##  print(bsb)

    bsb <- c(14, 163)                               # found by LTS

    out1 <- FSRmdr(y, X, bsb=bsb)                   # call 'FSRmdr' with all default parameters
    plot(out1$mdr[,1], out1$mdr[,2], type="l", col="blue",
      xlab="Step", ylab="minimum deletion residual",
      main="Monitoring of the minimum deletion residual")

    out2 <- FSRmdr(y, X)                         # call 'FSRmdr' with missing bsb - will start from random p-sample
    plot(out2)                                   # same plot as above

    out1 <- FSRmdr(y, X, bsb=bsb, init=60)           # Example with monitoring from step 60.
    out1 <- FSRmdr(y, X, bsb=bsb, intercept=FALSE)   # Regression without intercept
    out1 <- FSRmdr(y, X, bsb=bsb, nocheck=TRUE)      # No checks on y and X (and no intercept)

##  2. Analyze units entering the search in the final steps.
##
##  Compute minimum deletion residual and analyze the units entering
##  subset in each step of the fwd search (matrix Un).  As is well known,
##  the FS provides an ordering of the data from those most in agreement
##  with a suggested model (which enter the first steps) to those least in
##  agreement with it (which are included in the final steps).

    out1 <- FSRmdr(y, X, bsb=bsb)
    tail(out1$Un)

##  3. Units forming subset in each step.
##      Obtain detailed information about the units forming subset in each
##      step of the forward search (matrix BB).
    out1 <- FSRmdr(y, X, bsb=bsb)
    head(out1$BB)

##  4. Monitor \( \hat  \beta \). Monitor how the estimates of beta coefficients changes as the subset
##      size increases (matrix Bols).
    out1 <- FSRmdr(y, X, bsb=bsb)
    head(out1$Bols)

##  5. Monitor $s^2$.
##      Monitor the estimate of $\sigma^2$ in each step of the fwd search (matrix S2).

    out1 <- FSRmdr(y, X, bsb=bsb)
    plot(out1$S2[, 1], out1$S2[, 2], type="l", col="blue", xlab="Step",
        ylab=expression("s"^2), main='Monitoring of s2')



##  6. Specify a regression model without intercept.
##      FSRmdr using a regression model without intercept.
    out1 <- FSRmdr(y, X, bsb=bsb, intercept=FALSE)

##  7. Example of the use of option nocheck.
##      FSRmdr applied without doing any checks on y and X variables.
    out1 <- FSRmdr(y, X, bsb=bsb, nocheck=TRUE)

##  8. Monitoring of s2, and the evolution of beta coefficients for the Hawkins dataset
    data(hawkins)
    y <- hawkins[, 9, drop=FALSE]
    X <- hawkins[, 1:8]

    ## Instead of calling LXS, take hard-coded bsb - this is faster
    ##  and guarantees that there is no crash of R

    ##  out <- LXS(y, X, nsamp=10000)
    ##  print(out$bs)
    bsb <- c(89, 125,  78,  27,  29,  15,  67,  91,  47)

    ##  This will cause a crash: with an error message from the C code 'FSDA:FSRmdr,Rank problem in step 10'
    ##bsb <- c(42,   1,   7,  96,  37, 104,  49, 109,  51)

    out1 <- FSRmdr(y, X, bsb=bsb)

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

    ## Instead of calling LXS, take hard-coded bsb - this is faster
    ##  and guarantees that there is no crash of R

    ##  out <- LXS(y, X, nsamp=10000)
    ##  print(out$bs)
    bsb <- c(89, 125,  78,  27,  29,  15,  67,  91,  47)

    ##  This will cause a crash: with an error message from the C code 'FSDA:FSRmdr,Rank problem in step 10'
    ##  bsb <- c(42,   1,   7,  96,  37, 104,  49, 109,  51)

    out1 <- FSRmdr(y, X, bsb=bsb, bsbsteps=c(30, 60))
    head(out1$mdr)

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

    set.seed(10000)

    n <- 100
    p <- 1
    X <- matrix(rnorm(n*p), nrow=n)
    epsil <- 10
    beta <- rep(1, p)
    y <- X %*% beta + rnorm(n) * epsil

    ##  Add 10 very remote points
    add <- 3
    Xadd <- X[1:add, , drop=FALSE] + 5000
    yadd <- y[1:add] + 200
    Xall <- rbind(X, Xadd)
    yall <- c(y, yadd)

    ## Instead of calling LXS, take hard-coded bsb - this is faster,
    ##  more deterministic and guarantees that there is no crash of R

    ##  outLXS <- LXS(y, X)
    ##  bsb <- outLXS$bs
    ##  print(bsb)

    bsb <- c(5, 46)

    out1 <- FSRmdr(yall, Xall, bsb=bsb)
    out2 <- FSRmdr(yall, Xall, bsb=bsb, threshlevoutX=10)
    print(head(out1$mdr))

##  We cannot draw yet the envelopes as it is done in MATLAB, see
##  below the commented code; will draw just mdr

    ##  out1=FSRmdr(yall,Xall,bs,'plots',1)
    ##  xylim=axis
    ##  ylabel('mdr')
    ##  title('Monitoring of mdr without bound on the leverage')

    ##  out2=FSRmdr(yall,Xall,bs,'plots',1,'threshlevoutX',10);
    ##  ylim(xylim(3:4));
    ##  ylabel('mdr')
    ##  title('Monitoring of mdr with bound on the leverage')

    oldpar <- par(mfrow=c(2,1))

    plot(out1$mdr[,1], out1$mdr[,2], xlab='Subset size m', ylab='mdr', ylim=c(0,5), xlim=c(0,120), main="Monitoring of mdr without bound on the leverage", type="l")
    plot(out2$mdr[,1], out2$mdr[,2], xlab='Subset size m', ylab='mdr', ylim=c(0,5), xlim=c(0,120), main="Monitoring of mdr with bound on the leverage", type="l")

    par(oldpar)
