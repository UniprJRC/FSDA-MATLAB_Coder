##  1. Crash of FSRmdr() with a specific initial data set (bsb)
##      with a message of the following type
##      'FSDA:FSRmdr,Rank problem in step 10'

    library(fsdac)
    data(hawkins)
    y <- hawkins[, 9, drop=FALSE]
    X <- hawkins[, 1:8]

    ## Instead of calling LXS, take hard-coded bsb - this is faster
    ##  and guarantees that there is no crash of R

      ##    out <- LXS(y, X, nsamp=10000)
      ##    bsb <- out$bs
      ##    print(bsb)

    ##  bsb <- c(89, 125,  78,  27,  29,  15,  67,  91,  47)

    ##  This will cause a crash: with an error message from
    ##  the C code 'FSDA:FSRmdr,Rank problem in step 10'
    ##
    ##  Not it is fixed, the message will be from R, telling about the singularity issue

    bsb <- c(42,   1,   7,  96,  37, 104,  49, 109,  51)

    out1 <- FSRmdr(y, X, bsb=bsb, bsbsteps=c(30, 60))

    as.vector(out1$mdr)
