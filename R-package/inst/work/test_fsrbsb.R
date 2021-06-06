##  test_fsrbsb

## Call FSRbsb() with all default options.

##    % FSRbsb with all default options.
##    load('fishery');
##    y=fishery{:,2};
##    X=fishery{:,1};
##    [out]=LXS(y,X,'nsamp',10000);
##    Un = FSRbsb(y,X,out.bs);

    library(fsdac)
    data(fishery)

    y <- fishery[,2, drop=FALSE]
    X <- fishery[,1, drop=FALSE]
    bsb <- c(7, 431)                    # found by LTS
    bsb <- c(104,   489)

    out <- FSRbsb(y, X, bsb)                    # call 'FSRbsb' with all default parameters
    out <- FSRbsb(y, X)                         # call 'FSRbsb' with missing bsb - will start from random p-sample
    out <- FSRbsb(y, X, bsb, init=60)           # Example with monitoring from step 60.
    out <- FSRbsb(y, X, bsb, intercept=FALSE)   # Regression without intercept
    out <- FSRbsb(y, X, bsb, nocheck=TRUE)      # No checks on y and X (and no intercept)
