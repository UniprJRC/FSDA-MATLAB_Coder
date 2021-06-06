##  test missing values

    library(fsdac)
    library(rrcov)          # Use the hbk data from robustbase

    data(hbk)
    XX <- hbk
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

    X[1,3] <- NaN
    y[50]  <- NaN

    (out1 <- LXS(y, X, alpha=0.5, lms=2, rew=TRUE))
    (out2 <- LXS(y, X, alpha=0.5, lms=2, rew=TRUE, nocheck=TRUE))

    out1 <- FSRbsb(y, X)
    out2 <- FSRbsb(y, X, nocheck=TRUE)

    ## FSRfan will crash R in both cases
    out1 <- FSRfan(y, X)
    out2 <- FSRfan(y, X, nocheck=TRUE)



    data(wool)
    XX <- wool
    y <- log(XX[, ncol(XX)])
    w <- XX[, ncol(XX)-1]
    X <- XX[, 1:(ncol(XX)-2), drop=FALSE]

    X[5,2] <- NA
    y[10] <- NA
    ## Intercept=TRUE (default)
    ##  - has effect only when nocheck=FALSE (default)
    (out <- addt(y, X, w))
    (out <- addt(y, X, w, nocheck=TRUE))
