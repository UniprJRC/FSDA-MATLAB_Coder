##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Computes S estimators in linear regression
#'
#' @description Sreg computes S estimators in linear regression.
#'
#' @param y A vector with \code{n} elements that contains the response variable.
#' @param x An \code{n x p} data matrix (\code{n} observations and \code{p}
#'  variables) of explanatory variables
#'  (also called 'regressors') of dimension n x (p-1) where p denotes the number of
#'  explanatory variables including the intercept.
#'
#'  Rows of \code{x} represent observations, and columns represent variables. By default,
#'  there is a constant term in the model, unless you explicitly remove it using input
#'  option intercept, so do not include a column of 1s in \code{x}.
#'  Missing values (NaN's)
#'  and infinite values (Inf's) are allowed, since observations (rows) with missing or
#'  infinite values will automatically be excluded from the computations.
#'
#' @param intercept Indicator for the constant term (intercept) in the fit, defaults to \code{intercept=TRUE}.
#' @param bdp breakdown point -  measures the fraction of outliers the algorithm
#'  should resist. Any value greater than 0 but smaller or equal than 0.5 will do.
#'  Note that for given bdp nominal efficiency is determined automatically.
#' @param rhofunc 'rho' function. A string which specifies the rho function which will
#'  be used to weight the residuals. Possible values are: \code{c('bisquare', 'optimal', 'hyperbolic', 'hampel', 'mdpd')}.
#'  The choice 'bisquare' uses Tukey's \eqn{\rho} and \eqn{\psi} functions,
#'  'optimal' uses the optimal \eqn{\rho} and \eqn{\psi} functions;
#'  'hyperbolic' uses hyperbolic \eqn{\rho} and \eqn{\psi} functions,
#'  'hampel' uses Hampel \eqn{\rho} and \eqn{\psi} functions;
#'  'mdpd' uses Minimum Density Power Divergence \eqn{\rho} and \eqn{\psi} functions.
#'  The default is \code{rhofunc='bisquare'}.
#' @param rhofuncparam: additional parameters for the specified rho function (one or more double numbers).
#'  For the hyperbolic rho function it is possible to set the value of \code{k = sup CVC}
#'  (the default value is \code{k=4.5}).
#'  For the Hampel rho function it is possible to define the parameters \code{a}, \code{b} and \code{c}
#'  (the default values are \code{a=2, b=4, c=8} or \code{rhofuncparam=c(2, 4, 8)}).
#' @param nsamp number of subsamples which will be extracted to find the robust estimator.
#'  If \code{nsamp=0} all subsets will be extracted. They will be \code{(n choose p)}.
#'  Remark: if the number of all possible subset is <1000 the default is to extract all subsets
#'  otherwise just 1000.
#' @param refsteps number of refining iterations in each subsample (default is \code{refsteps=3}).
#'  \code{refsteps=0} means "raw-subsampling" without iterations.
#' @param reftol tolerance for the refining steps. The default value is \code{reftol=1e-6}.
#' @param refstepsbestr number of refining iterations for each best subset. (default is \code{refstepsbestr=50}).
#' @param reftolbestr tolerance for the refining steps for each of the best subsets. The default value is \code{reftolbestr=1e-8}.
#' @param minsctol tolerance for the iterative procedure for finding the minimum
#'  value of the scale for each subset and each of the best subsets. The default value is \code{minsctol=1e-7}.
#' @param bestr number of 'best betas' to remember from the subsamples. These will be
#'  later iterated until convergence. Default is \code{bestr=5}.
#' @param conflev confidence level which is used to declare units as outliers. Usually
#'  \code{conflev=c(0.95, 0.975, 0.99)} (individual alpha) or
#'  \code{conflev=c(1-0.05/n, 1-0.025/n, 1-0.01/n)} (simultaneous alpha).
#'  Default is \code{conflev=0.975}.
#' @param msg Level of output to display. It controls whether to display or not messages on the screen.
#'   If \code{msg=TRUE} (default) messages are displayed on the screen about step of the fwd search else
#'  no message is displayed on the screen.
#' @param nocheck Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
#'  matrix \code{y} and matrix \code{x}. Notice that \code{y} and \code{x} are left unchanged. In other words
#'  the additional column of ones for the intercept is not added. By default \code{nocheck=FALSE}.
#' @param trace Whether to print intermediate results. Default is \code{trace=FALSE}.
#'
#' @return  An object of class \code{Sreg} will be returned which is basically a list
#'  containing the following elements:
#'  \enumerate{
#'  \item \code{coefficients}: S estimates of the regression coefficients, including the intercept when \code{intercept=TRUE}.
#'  \item \code{residuals}: a vector containing the standardized residuals from the regression.
#'  \item \code{fitted.values}: a vector containing the fitted values.
#'  \item \code{weights}: a vector containing the estimated weights.
#'  \item \code{scale}: scale estimate of the residuals.
#'  \item \code{outliers}: a vector containing the list of the units declared as outliers
#'      using the confidence level specified in \code{conflev}.
#'  \item \code{bs}: a \code{p x 1} vector containing the units forming best subset
#'      associated with the S estimate of the regression coefficients.
#'  \item \code{conflev} confidence level which is used to declare outliers.
#'      Remark: the returned \code{conflev} will be used to draw the horizontal line
#'      (confidence band) in the plot.
#'  \item \code{singsub}: number of subsets wihtout full rank. Notice that
#'      \code{singsub > 0.1*(number of subsamples)} will produce a warning.
#'  \item \code{rhofunc}: a character string identifying the \eqn{\rho} function which has been used.
#'  \item \code{rhofuncparam}: a vector with additional parameters for the specified \eqn{\rho}
#'      function which have been used. For the hyperbolic \eqn{\rho} function this is the value
#'      of \code{k=sup CVC}. For the Hampel \eqn{\rho} function these are the parameters \code{a, b and c}.
#'      This field is present only if the input argument \code{rhofunc} is  \code{'hyperbolic'} or \code{'hampel'}.
#'  \item \code{singularity}: if present, this element indicatres a singularity condition.
#'  \item \code{y}: the response variable.
#'  \item \code{X}: the predictor matrix.
#'  }
#'
#' @references
#'  Maronna, R.A., Martin D. and Yohai V.J. (2006), \emph{Robust Statistics, Theory and Methods},
#'      Wiley, New York.
#'
#' @examples
#'
#'  data(hbk, package="robustbase")
#'  XX <- hbk
#'  y <- XX[, ncol(XX)]
#'  X <- XX[, 1:(ncol(XX)-1), drop=FALSE]
#'
#'  (out <- Sreg(y, X))
#'
#' @export
#' @author FSDA team, \email{valentin@@todorov.at}

Sreg <- function(y, x, intercept=TRUE, bdp=0.5, rhofunc=c('bisquare', 'optimal', 'hyperbolic', 'hampel', 'mdpd'), rhofuncparam,
        nsamp=1000, refsteps=3, reftol=1e-6, refstepsbestr=50, reftolbestr=1e-8, minsctol=1e-7,
        bestr=5, conflev=0.975,
        msg=TRUE, nocheck=FALSE, csave=FALSE, trace=FALSE)
{

    ## Preprocess y and x
    if(nocheck) {
        ## no checks will be performed: x must be a numerics matrix or
        ##  a data frame that can be coerced to a numeric matrix and y is
        ##  a vector or a one-dimensional numerical matrix or data frame.
        y <- data.matrix(y)
        if(is.data.frame(x)) {
    	    x <- data.matrix(x)
        } else if (!is.matrix(x))
    	    x <- matrix(x, length(x), 1,
    			dimnames = list(names(x), deparse(substitute(x))))

        n1 <- n <- nrow(x)
        p1 <- p <- ncol(x)
    } else {
        ## Here we call chkinputR(), which might change n and p, especially,
        ##  p will become p+1 of intercept is TRUE. We take these n and p in
        ##  n1 and p1 and use them whenever preliminary calculations are necessar
        ##
        chk <- chkinputR(y, x, intercept)
        n <- chk$n
        p <- chk$p
        n1 <- chk$n1
        p1 <- chk$p1

        ## Further the original y and x will be used, therefore, take care
        ##  both y and x to ba data.matrix. We do this after calling chkinputR(),
        ##  because other wise data.matrix() will kill the dimnames.
        y <- data.matrix(y)
        if(is.data.frame(x)) {
    	    x <- data.matrix(x)
        } else if (!is.matrix(x))
    	    x <- matrix(x, length(x), 1,
    			dimnames = list(names(x), deparse(substitute(x))))
    }

    ##  Process the input parameters and initial values =========
    rhofunc <- match.arg(rhofunc)
    if(missing(rhofuncparam))
    {
        rhofuncparam <- rep(0, 3)
        nrhofuncparam <- 0
    } else
    {
        rhofuncparam <- as.double(rhofuncparam)
        nrhofuncparam <- length(rhofuncparam)
    }

    if(bdp > 1/2 || bdp < 0)
        stop("'bdp' must be between 0 and 0.5!")

    ##  Allocate the output parameters
    beta <- rep(0, p1)
    residuals <- rep(0, n1)
    fitted.values <- rep(0, n1)
    weights <- rep(0, n1)
    outliers <- rep(0, n1)
    bs <- rep(0, p1+1)

    pC = p1     # p or p+1, depending on the intercept
    ncomb <- choose(n1, p1)
    if(length(nsamp) == 1 & is.numeric(nsamp))
    {
        if(ncomb < nsamp)
        {
            message("Number of subsets to extract is greater than (n choose p). It is set to (n choose p).")
            nsamp <- 0
        }

        if(nsamp < 0)
            stop("'nsamp' has to be a positive number!")
        else if(nsamp > 0)
            nC <- nsamp
        else {
            nC <- ncomb
        }
    } else
        stop("Please provide the number of subsamples in 'nsamp' or leave it empty to use the default!")

    if(nC > 5000 && nsamp==0) {
        message("Computing all ", ncomb," subsets of size ", pC, " out of ", n1,"\n This may take a very long time!\n")
        flush.console()
    }

    ##  we want to return the C matrix with elemental sets.
    ##  Let's try to guess its size and allocate the space necessary.
    C <- matrix(0, nrow=nC, ncol=pC)

    ##  Call the C wrapper function
    tmp <- .C('r_sreg',
        y = if(is.double(y)) y else as.double(y),
        x = if(is.double(x)) x else as.double(x),
        n = as.integer(n),                              # number of rows of X and length of y
        p = as.integer(p),                              # number of variables
        n1 = as.integer(n1),                            # new n, returned by chkinputR()
        p1 = as.integer(p1),                            # new p, returned by chkinputR()

        intercept = as.integer(intercept),
        bdp = as.double(bdp),
        rhofunc = as.character(rhofunc),
        rhofuncparam = as.double(rhofuncparam),
        nrhofuncparam = as.integer(nrhofuncparam),
        nsamp = as.double(nsamp),
        refsteps = as.double(refsteps),
        reftol = as.double(reftol),
        refstepsbestr = as.double(refstepsbestr),
        reftolbestr = as.double(reftolbestr),
        minsctol = as.double(minsctol),
        bestr = as.double(bestr),
        conflev = as.double(conflev),

        msg = as.integer(msg),
        nocheck = as.integer(nocheck),
        csave = as.integer(csave),               # wheather to return C
        nC = as.integer(nC),                     # expected number of rows of C
        pC = as.integer(pC),                     # expected number of columns of C
        trace = as.integer(trace),

        ## Here come the output parameters...
        beta = as.double(beta),
        residuals = as.double(residuals),
        scale = as.double(1),
        fitted.values = as.double(fitted.values),
        weights = as.double(weights),
        outliers = as.double(outliers),
        noutliers = as.integer(1),
        bs = as.double(bs),
        nbs = as.integer(length(bs)),
        singsub = as.double(1),
        C = as.double(C),

        NAOK=TRUE,
        PACKAGE="fsdac")

    ##  Copy the output parameters into the output class Sreg and return it.
    singularity <- NULL
    outliers <- if(tmp$noutliers == 0) NULL else tmp$outliers[1:tmp$noutliers]
    if(!nocheck) {
        names(tmp$beta) <- if(intercept) c("Intercept", colnames(chk$x)) else colnames(chk$x)
        names(tmp$residuals) <- names(tmp$fitted.values) <- names(tmp$weights) <- rownames(chk$x)
    }

    ans <- if(!is.null(singularity))
                list(singularity=singularity)
           else list(coefficients=tmp$beta, scale=tmp$scale, weights=tmp$weights,
                    fitted.values=tmp$fitted.values, residuals=tmp$residuals, bs=as.integer(tmp$bs[1:tmp$nbs]),
                    conflev=tmp$conflev, singsub=tmp$singsub, rhofunc=rhofunc)

    if(rhofunc %in% c('hyperbolic', 'hampel'))
        ans$rhofuncparam <- tmp$rhofuncparam[1:tmp$nrhofuncparam]

    if(!is.null(outliers))
        ans$outliers <- outliers
    if(csave)
        ans$C <- matrix(tmp$C, nrow=tmp$nC, ncol=tmp$pC)

    if(!nocheck) {
        ans$y <- chk$y
        ans$X <- chk$x
    }

    ans$call <- match.call()
    class(ans) <- "Sreg"

    ans
}

print.Sreg <- function (x, digits = max(3, getOption("digits") - 3), ...)
{
    cat("\nCall:\n", deparse(x$call), "\n\n", sep = "")
    if (length(coef(x))) {
        cat("Coefficients:\n")
        print.default(format(coef(x), digits = digits), print.gap = 2, quote = FALSE)
        cat("\nScale estimate", format(x$scale, digits = digits), "\n\n")
    } else
        cat("No coefficients\n")

    invisible(x)
}
