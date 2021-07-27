##  1. Crash of FSRmdr() with a specific initial data set (bsb)
##      with a message of the following type
##      'FSDA:FSRmdr, Rank problem in step 10'
##
##  Fixed now, manually changing the file FSRmdr_wrapper
##
    library(fsdac)
    data(hawkins)
    y <- hawkins[, 9, drop=FALSE]
    X <- hawkins[, 1:8]

    ## bsb <- c(42,   1,   7,  96,  37, 104,  49, 109,  51)

    ## After changing to linsolve() we need another example to demonstrate the issue
    bsb <- c(125,  16,  96,  81,   1,  33,  98,  22, 118)

    out1 <- FSRmdr(y, X, bsb=bsb, bsbsteps=c(30, 60))

    as.vector(out1$mdr)

##  2. Crash of FSR, which was not there before compiling with linsolve()
##      The problem actually occurs in the call to FSRmdr()
##
##  Example of point mass contamination.
    library(fsdac)
    n <- 130
    p <- 5
    set.seed(12345678)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    kk <- 30
    ##  point mass contamination of the first kk units
    X[1:kk,] <- 1
    y[1:kk] <- 3

    xx <- cbind.data.frame(X, y)
    write.table(xx, file="xx.txt", col.names=FALSE, row.names=FALSE)

    xx1 <- read.table("xx.txt")
    y <- xx1[, 6]
    X <- xx1[, 1:5]
    ## X[,2]=X[,1]

    (out <- FSR(y, X))

##  3. Example 3.
##      The crash of FSR from the previous example was fixed, in the same way this was done for FSRmdr.
##      but now new issues arise.
##
    library(fsdac)
    n <- 130
    p <- 5
    set.seed(12345678)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    kk <- 30
    ##  point mass contamination of the first kk units
    X[1:kk,] <- 1
    y[1:kk] <- 3

    (out <- FSR(y, X))
