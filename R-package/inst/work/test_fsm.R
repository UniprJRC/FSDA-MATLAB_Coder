##  test_FSR

    library(fsdac)

## Call FSM() on the hbk data

    data(hbk, package="robustbase")
    X <- hbk[, 1:(ncol(hbk)-1), drop=FALSE]

    (out <- FSM(X, m0=ncol(X) + 1))

## Call FSM() on a homogenous sample - out$outliers will be missing/empty
    x <- matrix(rnorm(20*3), nrow=20)
    out <- FSM(x, m0=4)
    out$outliers

## Call FSM() with bonflev - out$nout will be missing/empty
    x <- matrix(rnorm(20*3), nrow=20)
    out <- FSM(x, m0=4, bonflev=0.99)
    out$nout

## Call FSM() with m0=0 - R will crash (sometimes)
    x <- matrix(rnorm(20*3), nrow=20)
    out <- FSM(x, m0=0, trace=TRUE)

## Call FSM() with m0 containing indexes outside of 1:n - R will crash
    x <- matrix(rnorm(20*3), nrow=20)
    out <- FSM(x, m0=c(1, 500, 501), trace=TRUE)

##===============================================================
##
##  The examples from MATLAB

##  #1. FSM with all default options =================================

    n <- 200
    v <- 3
    set.seed(123456)
    Y <- matrix(rnorm(n*v), nrow=n)

##   Create contaminated data
    Ycont=Y
    Ycont[1:5, c(1,3)] <- Ycont[1:5, c(1,3)] + sign(matrix(rnorm(5*2), nrow=5)) * 4.5

    out <- FSM(Ycont)

    ##  We do not have graphs in fsdac
    ##  title('Outliers detected by FSM','Fontsize',24,'Interpreter','LaTex');
