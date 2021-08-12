##  test_Sreg

    ## Call Sreg() on the hbk data

    library(fsdac)

    data(hbk, package="robustbase")
    XX <- hbk
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

    (out <- Sreg(y, X, nsamp=100, trace=TRUE))
    (out <- Sreg(y, X, nsamp=100, rhofunc='hampel'))
    (out <- Sreg(y, X, nsamp=100, rhofunc='hampel', rhofuncparam=c(2.,4.,8.)))

    (out <- Sreg(y, X, nsamp=100, rhofunc='hyperbolic'))
    (out <- Sreg(y, X, nsamp=100, rhofunc='hyperbolic', rhofuncparam=4.5))
    (out <- Sreg(y, X, nsamp=100, rhofunc='hyperbolic', rhofuncparam=3.5))

##===============================================================
##
##  The examples from MATLAB

##  #1. Sreg with all default options =================================
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)

##  Uncontaminated data
    y <- rnorm(n)

##  Contaminated data
    ycont <- y
    ycont[1:5] <- ycont[1:5] + 6
    (out <- Sreg(ycont, X))

    ##    laby='Scaled S residuals';
    ##    titl='';
    ##    resindexplot(out.residuals,'title',titl,'laby',laby,'numlab','')

##  #2. Sreg with optional arguments: optimal rho function =======
    set.seed(1000)
    n <- 100
    X <- matrix(rnorm(n*3), nrow=n)
    bet <- c(3, 4, 5)
    y <- 3 * rnorm(n) + X %*% bet
    y[1:20] <- y[1:20] + 13
    (out <- Sreg(y, X, rhofunc="optimal"))

##  #3. Sreg with optional arguments:hyperbolic rho function =====
    set.seed(1000)
    n <- 100
    X <- matrix(rnorm(n*3), nrow=n)
    bet <- c(3, 4, 5)
    y <- 3 * rnorm(n) + X %*% bet
    y[1:20] <- y[1:20] + 13
    (out <- Sreg(y, X, rhofunc="hyperbolic"))



##  #7. Example with Hawkins data
    data(hawkins)
    y <- hawkins$y
    X <- hawkins[, -ncol(hawkins)]

    ## Use of FSR starting with 1000 subsamples
    (out <- Sreg(y, X, nsamp=1000))

    ## Replace this by formula:
    ##  (out <- Sreg(y~., data=X, nsamp=1000)
    ##
    ##  No plots in R yet
    ##
    ##  [out]=FSR(y,X,'nsamp',1000,'ylim',[1 6],'xlim',[30 90]);
