##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Detects univariate and bivariate outliers
#'
#' @description unibiv has the purpose of detecting univariate and bivariate outliers.
#'
#' @param Y Input data. A \code{n x v} data matrix; \code{n} observations and \code{v} variables.
#' Rows of Y represent observations, and columns represent variables. Missing values (NaN's) and
#' infinite values (Inf's) are allowed, since observations (rows) with missing or infinite values
#' will automatically be excluded from the computations.
#'
#' @param madcoef scaled MAD. Scalar. Coefficient which is used to scale MAD
#'                   coefficient to have a robust estimate of dispersion.  The
#'                   default is \code{1.4815} so that \code{1.4815*MAD(N(0,1))=1}.
#'                   Remark: if \code{mad=median(y-median(y))=0} then the interquartile
#'                   range is used. If also the interquartile range is 0
#'                   than the \code{MD} (mean absolute deviation) is used.  In
#'                   other words \code{MD=mean(abs(y-mean(Y)))}.
#'
#' @param robscale  how to compute dispersion. Specifies the
#'                   statistical indexes to use to compute the dispersion of
#'                   each variable and the correlation among each pair of variables.
#'  \enumerate{
#'    \item robscale=1 (default): the program uses the median correlation
#'                   and the MAD as estimate of the dispersion of each variable;
#'    \item robscale=2: the correlation coefficient among ranks is used
#'                   (Spearman's rho) and the MAD as estimate of the dispersion
#'                   of each variable;
#'    \item robscale=3: the correlation coefficient is based on Kendall's tau b
#'                   and the MAD as estimate of the dispersion of each variable;
#'    \item  robscale=4: tetracoric correlation coefficient is used and the MAD
#'                   as estimate of the dispersion of each variable;
#'                   otherwise the correlation and the dispersion of the variables are
#'                   computed using the traditional (non robust) formulae
#'                   around the univariate medians.
#'   }
#'
#' @param rf  It specifies the confidence level of the robust bivariate ellipses, \code{0 < rf < 1}.
#'                  The default value is \code{0.95} that is the outer contour in
#'                  presence of normality for each ellipse should leave
#'                  outside \code{5%%} of the values.
#'
#' @return
#'
#' \item \code{fre}   \code{n x 4} matrix which contains details about the univariate and
#'           bivariate outliers.
#'  \itemize {
#'   \item        1st col = index of the units;
#'   \item        2nd col = number of times unit has been declared
#'                univariate outliers;
#'   \item        3rd col = number of times unit has been declared
#'                bivariate outlier;
#'   \item         4th col = pseudo \code{MD} as sum of bivariate \code{MD}.
#'  }
#'
#'
#' @references
#'  Riani, M., Zani S. (1997). An iterative method for the detection of
#'  multivariate outliers, \emph{Metron}, Vol. LV, pp. 101-117.
#'
#' @examples
#' library(fsdac)
#' data(swissbanknotes)
#' Y = swissbanknotes
#' Y = Y[1:200,1:6]
#'
#' (out=unibiv(Y))
#'
#'
#' @export
#' @author FSDA team, \email{valentin@@todorov.at}
#'
#'
unibiv <- function(Y, madcoef=1.4815, rf=0.95, robscale=1,  trace=FALSE)
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
    ##  e.g. to find devault values for 'init'.
    ##
    ##  chk <- chkinputR(y, Y, intercept, nochek)
    n1 <- n
    p1 <- p




    ##  Process the input parameters and initial values


    fre <- matrix(0., nrow=n, ncol=4)



    ##  Call the C wrapper function
    tmp <- .C('r_unibiv',
        Y = if(is.double(Y)) Y else as.double(Y),
        n = as.integer(n),                              # number of rows of X
        p = as.integer(p),                              # number of variables

        madcoef = as.double(madcoef),
        rf = as.double(rf),
        robscale = as.double(robscale),

        fre = as.double(fre),

        trace = as.integer(trace),
        NAOK=TRUE,
        PACKAGE="fsdac")


    ##  Copy the output parameters into the output class FSM and return it.


    outfre<-matrix(tmp$fre, nrow=n, ncol=4)
    ans <- list(fre=outfre)

    ans$call <- match.call()
    class(ans) <- "unibiv"

    ans
}

# plot.FSM <- function(x, col, xlab, ylab, main, ...) {
#   if (!inherits(x, "FSM"))
#     stop("Use only with 'FSMmmd' objects")
#
#   if(ncol(x$mmd) != 2)
#     stop("Singularity issue - the 'FSM' object does not contain the minimum Mahalanobis distances.")
#
#   if(missing(col))
#     col <-"blue"
#   if(missing(xlab))
#     xlab <- "Step"
#   if(missing(ylab))
#     ylab <- "minimum Mahalanobis distances"
#   if(missing(main))
#     main <- "Monitoring of the minimum Mahalanobis distances"
#   plot(x$mmd[,"Step"], x$mmd[,"MMD"], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
#
#   return(invisible(x))
# }
