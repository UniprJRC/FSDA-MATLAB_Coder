##  test_addt

## Call addt() with all default options.
##  Compute the t test for an additional regressor.

##      XX=load('wool.txt');
##      y=log(XX(:,end));
##      X=XX(:,1:end-2);
##      w=XX(:,end-1);
##      [out]=addt(y,X,w);

    library(fsdac)
    data(wool)
    XX <- wool
    y <- log(XX[, ncol(XX)])
    w <- XX[, ncol(XX)-1]
    X <- XX[, 1:(ncol(XX)-2), drop=FALSE]

    ## Intercept=TRUE (default)
    ##  - has effect only when nocheck=FALSE (default)
    (out <- addt(y, X, w, intercept=TRUE, nocheck=FALSE))

    ## la is missing (default) and la=1 are identical,  when intercept=TRUE
    (out <- addt(y, X, w, intercept=TRUE, nocheck=FALSE, la=1))

    (out <- addt(y, X, w, intercept=TRUE, nocheck=FALSE, la=0))
    (out <- addt(y, X, w, intercept=TRUE, nocheck=FALSE, la=0.5))

    ## Intercept=FALSE
    (out <- addt(y, X, w, intercept=FALSE, nocheck=FALSE))
    (out <- addt(y, X, w, intercept=FALSE, nocheck=FALSE, la=1))
    (out <- addt(y, X, w, intercept=FALSE, nocheck=FALSE, la=0))
    (out <- addt(y, X, w, intercept=FALSE, nocheck=FALSE, la=0.5))

    (out <- addt(y, X, w))                          # call 'addt' with all default parameters

    (out1 <- addt(y, X, w, intercept=TRUE))         # call 'addt' with intercept =TRUE/FALSE
    (out2 <- addt(y, X, w, intercept=FALSE))
    all.equal(out, out1)
    all.equal(out1, out2)

    (out1 <- addt(y, X, w))                         # call 'addt' with la missing or 0.5
    (out2 <- addt(y, X, w, la=1))
    all.equal(out1, out2)
