library(fsdac)

##  Minimum Mahalanobis distance.
##
##      Personalized initial subset (small n). Create an initial subset with
##      the 4 observations which fell the smallest number of times outside
##      the robust bivariate ellipses and with the lowest Mahalanobis Distance.
##
    set.seed(123456)
    n <- 200
    p <- 3
    m0 <- 4

    Y <- matrix(rnorm(n*p), nrow=n, ncol=p)

##  Contaminated data
    Ycont <-Y
    Ycont[1:5,] <- Ycont[1:5,] + 3

    ##  we still do not have unibiv() in the R package
    ##    [fre]=unibiv(Y);
    ##    fre=sortrows(fre,[3 4]);
    ##    bs=fre(1:m0,1);

    bs <- c(45, 142, 52, 87)
    mmd <- FSMmmd(Ycont, bs)
    plot(mmd)

##  The same as above, but with optional parameters
##
    set.seed(123456)
    n <- 200
    p <- 3
    m0 <- 4

    Y <- matrix(rnorm(n*p), nrow=n, ncol=p)

##  Contaminated data
    Ycont <-Y
    Ycont[1:5,] <- Ycont[1:5,] + 3

    ##  we still do not have unibiv() in the R package
    ##    [fre]=unibiv(Y);
    ##    fre=sortrows(fre,[3 4]);
    ##    bs=fre(1:m0,1);

    bs <- c(45, 142, 52, 87)
    mmd <- FSMmmd(Ycont, bs, init=FALSE, nocheck=FALSE, bsbsteps=c(9,10), msg=FALSE)
    plot(mmd)
