##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Computes a forward search estimator in multivariate analysis
#'
#' @description FSM computes a forward search estimator in multivariate analysis.
#'
#' @param Y Input data. An \code{n x p} data matrix; \code{n} observations and \code{p} variables.
#'  The rows of \code{Y} represent observations, and the columns represent variables. Missing values (NA's) and
#'  infinite values (Inf's) are allowed, since observations (rows) with missing or infinite values
#'  will automatically be excluded from the computations.
#'
#' @param bonflev  option that might be used to identify extreme outliers when the distribution of
#'  the data is strongly non-normal. In such case, the general signal detection
#'  rule based on consecutive exceedances cannot be used. In this case \code{bonflev} can be:
#'   \enumerate{
#'                \item - a number smaller than 1, which specifies the confidence
#'                  level for a signal and a stopping rule based on the
#'                  comparison of the minimum deletion residual with a
#'                  Bonferroni bound. For example if \code{bonflev=0.99} the
#'                  procedure stops when the trajectory exceeds for the
#'                  first time the 99% bonferroni bound.
#'                \item - A number greater than 1. In this case the
#'                  procedure stops when the residual trajectory exceeds
#'                  for the first time this value.
#'                }.
#'  If \code{'bonflev'} is not specified, this means to rely on general rules
#'  based on consecutive exceedances.

#' @param crit specifies the criterion to be used to initialize the search.
#'    \enumerate{
#'          \item if \code{crit='md'} the units which form initial subset are those which have the
#'                  smallest \code{m0} pseudo Mahalanobis distances computed using the procedure \code{unibiv} (bivariate robust ellipses).
#'          \item if \code{crit='biv'} sorting is done first in terms of times units fell outside the robust bivariate
#'                  ellipses and then in terms of the pseudoMD.
#'                  In other words, the units forming initial subset are chosen first among
#'                  the set of those which never fell outside robust bivariate ellipses then among those which fell only once
#'                  outside bivariate ellipses, ..., up to reach \code{m0}.
#'          \item if \code{crit='uni'} sorting is done first in
#'                 terms of times units fell outside univariate boxplots
#'                 and then in terms of pseudoMD. In other words,
#'                 the units forming initial subset are chosen first among
#'                 the set of those which never fell outside
#'                 univariate boxplots then among those which fell only once
#'                 outside univariate boxplots, ..., up to reach \code{m0}.
#'                 }
#'  Remark: as the user can see, the starting point of the search is not going to affect at all
#'  the results of the analysis. The user can explore this point with his own datasets.
#'
#'  Remark: if \code{crit='biv'} the user can also supply in the argument \code{rf}
#'  (see below) the confidence level of the bivariate ellipses.
#'
#' @param init the point where to start the monitoring of the required diagnostics.
#'  Note that if if initial subset is supplied (that is, input option \code{m0} is a vector
#'  of length greater than 1) init must be greater or equal than \code{length(m0)}.
#'  If \code{init} is not specified it will be set equal to \code{floor(n * 0.6)}.
#'
#' @param m0 initial subset size or a vector which contains a list of units forming initial subset.
#'  The default is to start the search with \code{p+1} units consisting of those observations
#'  which are not outlying on any scatterplot, found as the intersection of all points lying
#'  within a robust contour containing a specified portion of the data (Riani and Zani 1997) and
#'  inside the univariate boxplot.
#'
#'  Remark: if \code{m0} is a vector the option \code{crit} is ignored.
#'
#' @param msg controls whether to display or not messages on the screen.  If \code{msg==TRUE} (default)
#'  messages about the progression of the search are displayed on the screen otherwise
#'  only error messages will be displayed.
#'
#' @param nocheck controls whether to perform checks on the input matrix \code{Y}. If \code{nocheck=TRUE},
#'  no check is performed. The default is \code{nocheck=FALSE}.
#'
#' @param rf confidence level for the bivariate ellipses. The default is \code{rf=0.95}. This option
#'  is only used if \code{crit='biv'}.
#'
#' @param trace Whether to print intermediate results. Default is \code{trace=FALSE}.
#'
#' @return  An object of class \code{FSM} will be returned which is basically a list
#'  containing the following elements:
#'  \enumerate{
#'  \item \code{outliers}: a vector of length \code{k} containing the indexes of the units declared as
#'  outliers or is missing (\code{NULL}) if the sample is homogeneous
#'  \item \code{mmd}:  \code{(n-init) x 2} matrix.
#'  \enumerate{
#'      \item    1st col = fwd search index;
#'      \item    2nd col = value of minimum Mahalanobis Distance at each step of the fwd search.
#'  }
#'  \item \code{Un}: An \code{(n-init) x 11} matrix which contains the unit(s) included in the subset at
#'      each step of the fwd search. REMARK: in every step the new subset is compared with the old subset.
#'      \code{Un} contains the unit(s) present in the new subset but not in the old one. \code{Un[1, 2]} for example
#'      contains the unit included in step \code{init+1}. \code{Un[nrow(Un), 2]} contains the units included in
#'      the final step of the search.
#'
#'  \item \code{nout}: a \code{2 x 5} matrix containing the number of times \code{mmd} went out
#'      of particular quantiles. The first row contains the quantiles \code{c(1, 99, 99.9, 99.99, 99.999)} per cent;
#'      The second row contains the frequency distribution.
#'
#'      It is NaN if \code{bonflev} threshold is used.
#'
#'  \item \code{loc}:  a vector of length \code{p} containing the robust estimated location of the data.
#'  \item \code{cov}:  a \code{p x p} robust estimate of the covariance matrix.
#'  \item \code{md}:  a vector of length \code{n} containing the estimates of the (squared) robust
#'      Mahalanobis distances. This vector contains the distances of each observation to the
#'      center of the data \code{loc}, relative to the scatter matrix \code{cov}.
#'  }
#'
#' @references
#'  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown number of multivariate outliers,
#'  \emph{Journal of the Royal Statistical Society Series B}, \bold{71}, pp. 201--221.
#'
#'  Cerioli, A., Farcomeni, A. and Riani M. (2014), Strong consistency and
#'  robustness of the Forward Search estimator of multivariate location
#'  and scatter, \emph{Journal of Multivariate Analysis}, Vol. 126,
#'  pp. 167-183, \code{http://dx.doi.org/10.1016/j.jmva.2013.12.010}.
#'
#' @examples
#'
#' library(fsdac)
#' data(swissbanknotes)
#' Y = swissbanknotes
#' Y = Y[1:200,1:6]
#'
#' # FSM with all default arguments
#' (out = FSM(Y))
#'
#'
#' crit="md"
#' init=60
#' rf=0.95
#'
#' (out = FSM(Y, crit=crit, init=init, rf=rf, msg=FALSE, nocheck=FALSE, trace=FALSE))
#'
#' @export
#' @author FSDA team, \email{valentin@@todorov.at}
#'
#'
FSM <- function(Y, bonflev, crit=c("md", "biv", "uni"), init, m0, msg=TRUE, nocheck=FALSE, rf=0.95, trace=FALSE)
{

    ## Preprocess y

    if(is.data.frame(Y))
        Y <- data.matrix(Y)
    else if (!is.matrix(Y))
        Y <- matrix(Y, length(Y), 1,
              dimnames = list(names(Y), deparse(substitute(Y))))
    n <- nrow(Y)
    p <- ncol(Y)

    ## Here we call chkinputR(), which might change n and p, especially,
    ##  p will become p+1 of intercept is TRUE. We take these n and p in
    ##  n1 and p1 and use them whenever preliminary calculations are necessary,
    ##  e.g. to find default values for 'init'.
    ##
    ##  chk <- chkinputM(Y, nochek)
    n1 <- n
    p1 <- p

    Y1 <- Y         # what is returned from chkinputRM().

    ##  Process the input parameters and initial values

    ## The default value of init depends on n and p
    if(missing(init)) {
        init <-  floor(n*0.6)
    }
    if(init < p+1) {
        warning("Attention : 'init' should be larger than p+1. It is set to p+2.")
        init <- p + 2
    }

    bonflev <- if(missing(bonflev))
                  c(0.0, 0.0)
               else
                  c(bonflev, 1)

    if(p > 1){
      critdef = "md"
    } else{
      critdef = "uni"
    }

    if (missing(m0) && length(crit) > 2) {
      crit = critdef
      m0 = p + 1
    } else if (length(crit) < 2) {
      # m0 is ignored
      crit <- match.arg(crit)
      if (missing(m0)) {
        m0 = p + 1
      }
    }


    if (length(m0) == 1) {
      if (m0 < p + 1 || m0 > n) {
        warning("Attention: 'm0' should be set in the interval [p+1, n], now it is set to p+1")
        m0 = p + 1
      }
    } else if (length(m0) > 1) {
      # m0 is a vector of indexes
      if (!all(m0 >= 1 & m0 <= n1))
        stop("The initial subset must contain valid unit indexes!")
    }

    ##  mmd and Un: matrices, with retnUn=(n-init) rows and 2 or 11 columns respectively.
    outliers <- rep(0, n1)
    retnUn <- n1-init
    mmd <- matrix(0., nrow=retnUn, ncol=2)
    Un <- matrix(0., nrow=retnUn, ncol=11)
    nout <- matrix(0., nrow=2, ncol=5)
    loc <- rep(0., p)
    xcov <- matrix(0., nrow=p, ncol=p)
    md <- rep(0., n1)


    nm <- length(m0)

    ##  Call the C wrapper function
    tmp <- .C('r_fsm',
        Y = if(is.double(Y)) Y else as.double(Y),
        n = as.integer(n),                              # number of rows of X
        p = as.integer(p),                              # number of variables

        bonflev = as.double(bonflev),
        crit = as.character(crit),
        init = as.double(init),

        m0 = as.double(m0),
        nm = as.integer(nm),                            # number of elements of m0


        msg = as.integer(msg),
        nocheck = as.integer(nocheck),
        rf = as.double(rf),

        ## Here come the output parameters...
        outliers = as.double(outliers),
        noutliers = as.integer(1),
        mmd = as.double(mmd),
        Un = as.double(Un),
        nout = as.double(nout),
        loc = as.double(loc),
        xcov = as.double(xcov),
        md = as.double(md),

        trace = as.integer(trace),
        NAOK=TRUE,
        PACKAGE="fsdac")


    ##  Copy the output parameters into the output class FSM and return it.

    outliers <- tmp$outliers[1:tmp$noutliers]
    Un <- matrix(tmp$Un, nrow=retnUn, ncol=11)
    mmd <- matrix(tmp$mmd, nrow=retnUn, ncol=2)
    cov <- matrix(tmp$xcov, nrow=p, ncol=p)
    nout <- matrix(tmp$nout, nrow=2, ncol=5)
    dimnames(mmd) <- list(mmd[,1], c("Step", "MMD"))

    ans <- list(mmd=mmd, Un=Un, nout=nout, outliers=outliers, cov=cov, loc=tmp$loc, md=tmp$md)

    if (tmp$noutliers == 1 && tmp$outliers[1] == "NaN") {
      ans$outliers <- NULL
    }
    else if (!missing(bonflev)) {
      ans$nout <- NULL
    }

    ans$call <- match.call()
    class(ans) <- "FSM"

    ans
}

plot.FSM <- function(x, col, xlab, ylab, main, ...) {
  if (!inherits(x, "FSM"))
    stop("Use only with 'FSM' objects")

  if(ncol(x$mmd) != 2)
    stop("Singularity issue - the 'FSM' object does not contain the minimum Mahalanobis distances.")

  if(missing(col))
    col <-"blue"
  if(missing(xlab))
    xlab <- "Step"
  if(missing(ylab))
    ylab <- "minimum Mahalanobis distances"
  if(missing(main))
    main <- "Monitoring of the minimum Mahalanobis distances"
  plot(x$mmd[,"Step"], x$mmd[,"MMD"], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)

  return(invisible(x))
}
