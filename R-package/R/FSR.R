##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Computes forward search estimator in linear regression
#'
#' @description FSR computes forward search estimator in linear regression.
#'
#' @param y A vector with \code{n} elements that contains the response variable.
#' @param x An \code{n x p} data matrix (\code{n} observations and \code{p}
#'  variables) of explanatory variables
#'  (also called 'regressors') of dimension n x (p-1) where p denotes the number of
#'  explanatory variables including the intercept.
#'
#'  Rows of \code{X} represent observations, and columns represent variables. By default,
#'  there is a constant term in the model, unless you explicitly remove it using input
#'  option intercept, so do not include a column of 1s in \code{X}.
#'  Missing values (NaN's)
#'  and infinite values (Inf's) are allowed, since observations (rows) with missing or
#'  infinite values will automatically be excluded from the computations.
#'
#' @param alpha the percentage (roughly) of squared residuals whose sum will be minimized,
#'  by default \code{alpha=0.5}. In general, alpha must be between 0.5 and 1.
#' @param h The number of observations that have determined the least trimmed squares
#'  estimator,  scalar. \code{h} is an integer greater or equal than \code{p} but smaller
#'  then \code{n}. Generally \code{h=[0.5*(n+p+1)]} (default value).
#' @param lms estimation method, If \code{lms=1} (default) Least Median of Squares is computed,
#'  else if \code{lms=2} or  \code{lms='lts'} fast LTS with all default options is used else
#'  if \code{lms} is a scalar different from 1 and 2 standard LTS is used (without concentration steps).
#' @param bsbmfullrank how to deal with singular \code{X} matrix. This option tells what to do
#'  in case when a subset at step \code{m} (say \code{bsbm}) produces a singular \code{X}.
#'  In other words, this options controls what to do when \code{rank(X[bsbm,]} is smaller
#'  then number of explanatory variables. If \code{bsbmfullrank=TRUE} (default) these units
#'  (whose number is say \code{mnofullrank}) are constrained to enter the search in the final
#'  n-mnofullrank steps else the search continues using as estimate of beta at step \code{m}
#'  the estimate of \code{beta} found in the previous step.
#' @param bonflev signal to use to identify outliers. This option is used if the distribution of
#'  the data is strongly non-normal and, thus, the general signal detection rule based on
#'  consecutive exceedances cannot be used. In this case \code{bonflev} can be:
#'  \enumerate{
#'  \item a value smaller than 1 which specifies the confidence level for a signal and a stopping
#'      rule based on the comparison of the minimum \code{MD} with a Bonferroni bound. For example
#'      if \code{bonflev=0.99} the procedure stops when the trajectory exceeds for the first time
#'      the 99\% bonferroni bound.
#'  \item a value greater than 1. In this case the procedure stops when the residual trajectory
#'      exceeds for the first time this value.
#'  }
#' @param nsamp number of subsamples which will be extracted to find the robust estimator. If \code{nsamp=0}
#'  all subsets will be extracted. They will be \code{n choose p}.
#'
#'  Remark: if the number of all possible subset is <1000 the default is to extract all subsets
#'  otherwise just 1000.
#' @param threshoutX threshold to bound the effect of high leverage units. If the design matrix \code{X}
#'  contains several high leverage units (that is units which are very far from the bulk of the data),
#'  it may happen that the best subset of LXS may include some of these units, or it may happen that
#'  these units have a deletion residual which is very small due to their extremely high value of \code{hi}.
#'  \code{threshoutX=1} imposes the constraints that:
#'  \enumerate{
#'  \item the extracted subsets which contain at least one unit declared as outlier in the \code{X} space by
#'      FSM using a Bonferronized confidence level of 0.99 are removed from the list of candidate subsets
#'      to find the LXS solution.
#'  \item imposes the constraint that \eqn{h_i(m^*)} cannot exceed \eqn{10 \times p/m}.
#'  }
#' @param weak indicator to use a different decision rule to detect the signal and flag outliers. If \code{weak=FALSE} (default)
#'  \code{FSRcore} values are used, if \code{weak=TRUE} 'stronger' quantiles are used as
#'  a decision rule to trim outliers and VIOM outliers are the ones entering the
#'  search after the first signal.
#' @param init Search initialization. It specifies the initial subset size to start monitoring units forming subset.
#'  By default, \code{init=p+1}, if the sample size is smaller than 40 or
#'  \code{init=min(3*p+1, floor(0.5*(n+p+1)))}, otherwise.
#' @param intercept Indicator for the constant term (intercept) in the fit, defaults to \code{intercept=TRUE}.
#' @param msg Level of output to display. It controls whether to display or not messages on the screen.
#'   If \code{msg=TRUE} (default) messages are displayed on the screen about step of the fwd search else
#'  no message is displayed on the screen.
#' @param nocheck Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
#'  matrix \code{y} and matrix \code{X}. Notice that \code{y} and \code{X} are left unchanged. In other words
#'  the additional column of ones for the intercept is not added. By default \code{nocheck=FALSE}.
#' @param trace Whether to print intermediate results. Default is \code{trace=FALSE}.
#'
#' @return  An object of class \code{FSR} will be returned which is basically a list
#'  containing the following elements:
#'  \enumerate{
#'  \item \code{coefficients}: FSR coefficient estimates, including the intercept when \code{intercept=TRUE}.
#'  \item \code{residuals}: a vector containing the standardized residuals from the regression.
#'  \item \code{fitted.values}: a vector containing the fitted values.
#'  \item \code{scale}: scale estimate of the residuals.
#'  \item \code{outliers}: a vector containing the list of the units declared as outliers
#'      using confidence level specified in \code{conflev}.
#'  \item \code{mdr} a \code{(n-init) x 2} matrix in which
#'  \enumerate{
#'   \item 1st col = fwd search index
#'   \item 2nd col = value of minimum deletion residual in each step of the fwd search
#'  }
#'  \item \code{Un} a \code{(n-init) x 11} matrix which contains the unit(s) included in the
#'      subset at each step of the fwd search.
#'
#'      REMARK: in every step the new subset is compared with the old subset. \code{Un}
#'      contains the unit(s) present in the new subset but not in the old one. \code{Un[1, 2]},
#'      for example, contains the unit included in step \code{init+1}. \code{Un[nrow(Un), 2]}
#'      contains the units included in the final step of the search.
#'  \item \code{nout} a \code{2 x 5} matrix containing the number of times \code{mdr}
#'      went out of particular quantiles. The first row contains the quantiles
#'      \code{c(1, 99, 99.9, 99.99, 99.999)}. The second row contains the frequency distribution.
#'  }
#'
#' @references
#'  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown number of multivariate outliers,
#'  \emph{Journal of the Royal Statistical Society Series B}, \bold{71}, pp. 201--221.
#'
#' @examples
#'
#'  data(hbk, package="robustbase")
#'  XX <- hbk
#'  y <- XX[, ncol(XX)]
#'  X <- XX[, 1:(ncol(XX)-1), drop=FALSE]
#'
#'  (out <- FSR(y, X))
#'
#' @export
#' @author FSDA team, \email{valentin@@todorov.at}
#'
FSR <- function(y, x, intercept=TRUE, lms=1,
    bsbmfullrank=TRUE, bonflev, alpha=0.5, h, nsamp=1000, threshoutX, weak=FALSE, init, msg=TRUE, nocheck=FALSE,
    trace=FALSE)
{

    ## Preprocess y and x
    y <- data.matrix(y)
    if (!is.numeric(y)) stop("y is not a numeric")
    if (!is.null(dim(y)) && dim(y)[2] != 1) stop("y is not onedimensional")

    if(is.data.frame(x))
        x <- data.matrix(x)
    else if (!is.matrix(x))
        x <- matrix(x, length(x), 1,
              dimnames = list(names(x), deparse(substitute(x))))
    n <- nrow(x)
    p <- ncol(x)

    ## Here we call chkinputR(), which might change n and p, especially,
    ##  p will become p+1 of intercept is TRUE. We take these n and p in
    ##  n1 and p1 and use them whenever preliminary calculations are necessary,
    ##  e.g. to find devault values for 'init'.
    ##
    ##  chk <- chkinputR(y, Y, intercept, nochek)
    n1 <- n
    p1 <- if(intercept && !nocheck) p+1 else p
    y1 <- y
    x1 <- x         # what is returned from chkinputR(), but with the 1-s for the intercept removed.


    ##  Process the input parameters and initial values

    ## The default value of init depends on n and p
    if(missing(init)) {
        init <- if(n1 < 40) p1 + 1 else min(3*p1 + 1, floor(0.5*(n1 + p1 + 1)))
    }
    if(init < p+1) {
        warning("Attention : 'init' should be larger than p+1. It is set to p+2.")
        init <- p + 2
    }
    if(!missing(h))          alpha <- h/n1
    else                     h <- ceiling(alpha*n1)
    if(alpha < 1/2 | alpha > 1)
        stop("'alpha' must be between 0.5 and 1.0!")

    bonflev <- if(missing(bonflev)) c(0.0, 0.0)
               else                 c(bonflev, 1)

    ## threshoutX can be only 1 if present - set it to 1 whatever it is
    if(missing(threshoutX))
        threshoutX <-  c(0.0, 0.0)
    else  {
        if(threshoutX != 1)
            warning("If present, 'threshoutX' must be equal to 1. Setting threshoutX=1.")
        threshoutX <-  c(1, 1)
     }

    ##  Allocate the output parameters
    beta <- rep(0, p1)
    residuals <- rep(0, n1)
    fitted.values <- rep(0, n1)
    outliers <- rep(0, n1)

    ##  mdr and Un: matrices, with retnUn=(n-init) rows and 2 or 11 columns respectively.
    retnUn <- n1-init
    mdr <- matrix(0., nrow=retnUn, ncol=2)
    Un <- matrix(0., nrow=retnUn, ncol=11)
    nout <- matrix(0., nrow=2, ncol=5)
    ListCl <- rep(0, n1)
    VIOMout <- rep(0, n1)

    ##  Call the C wrapper function
    tmp <- .C('r_fsr',
        y = if(is.double(y)) y else as.double(y),
        x = if(is.double(x)) x else as.double(x),
        n = as.integer(n),                              # number of rows of X and length of y
        p = as.integer(p),                              # number of variables
        n1 = as.integer(n1),                            # new n, returned by chkinputR()
        p1 = as.integer(p1),                            # new p, returned by chkinputR()

        intercept = as.integer(intercept),
        lms = if(is.double(lms)) lms else as.double(lms),
        bsbmfullrank = as.integer(bsbmfullrank),
        bonflev = as.double(bonflev),

        h = as.double(h),
        init = as.double(init),
        nsamp = as.double(nsamp),
        threshoutX = as.double(threshoutX),
        weak = as.integer(weak),
        msg = as.integer(msg),
        nocheck = as.integer(nocheck),
        trace = as.integer(trace),

        ## Here come the output parameters...
        beta = as.double(beta),
        residuals = as.double(residuals),
        scale = as.double(1),
        fitted.values = as.double(fitted.values),
        outliers = as.double(outliers),
        noutliers = as.integer(1),
        retnUn = as.integer(retnUn),                    # number of rows of Un and mdr
        retpmdr = as.integer(2),                        # number of columns Un
        retpUn = as.integer(11),                        # number of columns Un
        mdr = as.double(mdr),
        Un = as.double(Un),
        nout = as.double(nout),
        nListCl = as.integer(1),
        nVIOMout = as.integer(1),
        ListCl = as.double(ListCl),
        VIOMout = as.double(VIOMout),

        NAOK=TRUE,
        PACKAGE="fsdac")

    ##  Copy the output parameters into the output class FSR and return it.
    outliers <- tmp$outliers[1:tmp$noutliers]
    Un <- matrix(tmp$Un, nrow=tmp$retnUn, ncol=tmp$retpUn)
    mdr <- matrix(tmp$mdr, nrow=tmp$retnUn, ncol=tmp$retpmdr)
    nout <- matrix(tmp$nout, nrow=2, ncol=5)

    ans <- list(outliers=outliers, mdr=mdr, Un=Un, nout=nout, coefficients=tmp$beta,
        scale=tmp$scale, fitted.values=tmp$fitted.values, residuals=tmp$residuals)

    if(weak==TRUE){
        ans$ListCl <- tmp$ListCl[1:tmp$nListCl]
        ans$VIOMout <- tmp$VIOMout[1:tmp$nVIOMout]
    }

    ans$call <- match.call()
    class(ans) <- "FSR"

    ans
}

print.FSR <- function (x, digits = max(3, getOption("digits") - 3), ...)
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
