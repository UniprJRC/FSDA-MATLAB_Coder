##  test missing values

    library(fsdac)

    data(hbk, package="robustbase")
    write.table(hbk, file="hbk.txt", col.names=FALSE, row.names=FALSE)

    XX <- hbk
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

## missing values in X and/or in y
    X1 <- X
    y1 <- y
    X1[1,3] <- NA
    y1[50]  <- NA

    (out1 <- FSR(y1, X1))
    (out2 <- FSR(y1, X1, intercept=FALSE))
    (out3 <- FSR(y1, data.matrix(X1), nocheck=TRUE))

## y not compatible with X
    y2 <- c(y, 1)
    (out1 <- FSR(y2, X))
    (out2 <- FSR(y2, X, intercept=FALSE))
    (out3 <- FSR(y2, data.matrix(X), nocheck=TRUE))

##===============================================================
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
