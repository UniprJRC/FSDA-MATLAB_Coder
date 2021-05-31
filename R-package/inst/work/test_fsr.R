##  test_FSR

    ## Call FSR() on the hbk data

    library(fsdac)
    library(rrcov)

    data(hbk)
    XX <- hbk
    y <- XX[, ncol(XX)]
    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

    (out <- FSR(y, X, trace=TRUE))

##===============================================================
##
##  The examples from MATLAB

##  #1. FSR with all default options =================================
    n <- 200
    p <- 3
    set.seed(123456)
    X <- matrix(rnorm(n*p), nrow=n)

##  Uncontaminated data
    y <- rnorm(n)

##  Contaminated data
    ycont <- y
    ycont[1:5] <- ycont[1:5] + 6
    (out <- FSR(ycont, X))

##  #2. FSR with optional arguments ==================================
##      Well, optional in this example were only plot-related parameters
##      which we anyway ignore
    set.seed(1000)
    n <- 100
    X <- matrix(rnorm(n*3), nrow=n)
    bet <- c(3, 4, 5)
    y <- 3 * rnorm(n) + X %*% bet
    y[1:20] <- y[1:20] + 13
    (outFS <- FSR(y, X))

##  The envelopes based on all the observations show that in the central
##  part of the search the observed curve is well beyond the extreme
##  thresholds. More precisely, the message inside the graph informs that
##  the signal took place in step 81 because the value of minimum deletion
##  residual in this step was greater than 99.999% threshold.
##  Once a signal takes place the envelopes are resuperimposed until a
##  stopping rule is fulfilled.
##  The procedure of resuperimposing envelopes in this case stops when
##  n = 85, the first time in which we have a value of rmin(m) for
##  $n >= m^\dagger-1$ greater than the 99% threshold. The group can
##  therefore be considered as homogeneous up to when we include 84 units.

##  #3. FSR with optional arguments ==================================
##  Monitor the exceedances from m=60 without showing plots.
    n <- 200
    p <- 3
    X <- matrix(rnorm(n*p), nrow=n)
    y=rnorm(n)
    (out <- FSR(y, X, init=60))

##  #4. Initialize the search with the subsample which produces
##      the smallest [h/n] quantile of squared residuals.
    n <- 200
    p <- 3
    X <- matrix(rnorm(n*p), nrow=n)
    y=rnorm(n)
    (out <- FSR(y, X, h=120))

##  #5. Extract all possible subsamples in order to find susbet
##      to initialize the search.
    n <- 40
    p <- 3
    X <- matrix(rnorm(n*p), nrow=n)
    y=rnorm(n)
    (out <- FSR(y, X, nsamp=0))

##  #6. Example for various combinations of the labeladd, bivarfit
##      and multivarfit options.
##
##  Not relevant for our project!!!

    n <- 200
    p <- 3
    X <- matrix(rnorm(n*p), nrow=n)
    y=rnorm(n)
    (out <- FSR(y, X))

##  #7. Example with Hawkins data
    load('hawkins.txt','hawkins');
    y=hawkins(:,9);
    X=hawkins(:,1:8);
    % Use of FSR starting with 1000 subsamples
    [out]=FSR(y,X,'nsamp',1000);

    % Use of FSR starting with 1000 subsamples
    % focusing in the output plots to the interval 1-6 on the y axis and
    % to steps 30-90.
    [out]=FSR(y,X,'nsamp',1000,'ylim',[1 6],'xlim',[30 90]);

##  #8. Example of contaminated data.
    n <- 200
    p <- 3
    set.seed(123498)
    X <- matrix(rnorm(n*p), nrow=n)
    y <- rnorm(n)
    kk <- 33

    ##  shift contamination of the first 33 units of the response
    y[1:kk] <- y[1:kk] + 6
    (out <- FSR(y, X))

##  9. Example of point mass contamination.
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

##  10. Example of the use of option threshoutX.
##  In this example a set of remote units is added to a cloud of points.
##  The purpose of this example is to show that in presence of units very far
##  from the bulk of th data (bad or good elverage points) it is necessary to
##  bound their effect putting a constraint on their leverage hi=xi'(X'X)xi
    set.seed(1000)
    n <- 100
    p <- 1
    X <- matrix(rnorm(n*p), nrow=n)
    epsil <- 10
    beta <- rep(1, p)
    y <- X %*% beta + rnorm(n) * epsil
    ## Add 10 very remote points
    add <- 3
    Xadd <- X[1:add,] + 5000
    yadd <- y[1:add] + 200
    Xall <- rbind(X, as.matrix(Xadd))
    yall <- c(y, yadd)
    (outNoLevConstr <- FSR(yall, Xall, msg=FALSE))

    ## We do not have yet plot in R
    ##xylim=axis;
    ##ylabel('mdr')
    ##title('FS without bound on the leverage')

    ##  threshoutX is passed s astructure
    threshoutX <- list(threshlevoutX=5)
    ##  Use the instruction below if you wish to change the confidence level to
    ##  be used to find outlierd in the X space
    ##  threshoutX.bonflevoutX=0.99
    (outWithLevConstr=FSR(yall, Xall, threshoutX=threshoutX, msg=FALSE))
    ##title('FS with bound on the leverage')


%{
    %% Example to detect both VIOM and MSOM outliers using weak=true.
    % loyalty data
    load('loyalty');
    y = loyalty{:,end};
    X = loyalty{:,1};
    xla = 'Number of visits';
    yla = 'Amount spent (in Euros)';
    n = size(X,1);
    % run FSR to detect a weaker signal indicating VIOM
    FSRoutw = FSR(y, X, 'intercept', false, ...
        'init', floor(n/2)-1, 'msg', 0, 'plots', 1, 'weak', true);
    trim_FSR =  FSRoutw.outliers;
    down_FSR =  FSRoutw.VIOMout;
    clean_FSR = FSRoutw.ListCl;
    % plotting
    figure
    plot(X(clean_FSR, :), y(clean_FSR), 'b.', 'MarkerSize', 15, 'DisplayName', 'clean');
    hold('on')
    plot(X(trim_FSR, :), y(trim_FSR), 'r.', 'MarkerSize', 15, 'DisplayName', 'MSOM');
    plot(X(down_FSR, :), y(down_FSR), 'g.', 'MarkerSize', 15, 'DisplayName', 'VIOM');
    drawnow
    clb = clickableMultiLegend(gca, 'Location', 'northeast');
    set(clb,'FontSize',12);
    xlabel(xla);
    ylabel(yla);
    box
    cascade
%}
