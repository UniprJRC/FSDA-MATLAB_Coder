##  1. Crash of FSRmdr() with a specific initial data set (bsb)
##      with a message of the following type
##      'FSDA:FSRmdr, Rank problem in step 10'

    library(fsdac)
    data(hawkins)
    y <- hawkins[, 9, drop=FALSE]
    X <- hawkins[, 1:8]

    ## bsb <- c(42,   1,   7,  96,  37, 104,  49, 109,  51)

    ## After changing to linsolve() we need another example to demonstrate the issue
    bsb <- c(125,  16,  96,  81,   1,  33,  98,  22, 118)

    out1 <- FSRmdr(y, X, bsb=bsb, bsbsteps=c(30, 60))

    as.vector(out1$mdr)
