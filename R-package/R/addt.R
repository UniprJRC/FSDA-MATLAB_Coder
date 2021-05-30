##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Produces the t-test for an additional explanatory variable
#'
#' @description Produces the t-test for an additional explanatory variable.
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
#'  Missing values (NAs)
#'  and infinite values (Inf's) are allowed, since observations (rows) with missing or
#'  infinite values will automatically be excluded from the computations.
#' @param w the added variable, a vector containing the additional explanatory variable
#'  whose \code{t-test} must be computed.
#' @param intercept Indicator for the constant term (intercept) in the fit, defaults to \code{intercept=TRUE}.
#' @param la transformation parameter. It specifies for which Box Cox transformation parameter
#'  is necessary to compute the \code{t} statistic for the additional variable. If \code{la} is missing
#'  (default) no transformation is used. For example \code{la=0.5} tests square root transformation
#' @param nocheck Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
#'  matrix \code{y} and matrix \code{X}. Notice that \code{y} and \code{X} are left unchanged. In other words
#'  the additional column of ones for the intercept is not added. By default \code{nocheck=FALSE}.
#' @param trace Whether to print intermediate results. Default is \code{trace=FALSE}.
#'
#' @return  An object of class \code{addt}, will be returned which is basically a list
#'  containing two matrices, \code{Un} and \code{BB}:
#'  \enumerate{
#'  \item \code{b} estimate of the slope for additional explanatory variable
#'  \item \code{S2add} estimate of \eqn{s^2} of the model which contains the additional explanatory variable
#'  \item \code{Tadd} t-statistic for additional explanatory variable
#'  \item \code{pval} p-value of the t-statistic
#'  }
#' @references
#'       Atkinson A.C. and Riani M. (200), \emph{Robust Diagnostic Regression Analysis} Springer Verlag, New York.
#'
#' @examples
#'
#'    data(wool)
#'    XX <- wool
#'    y <- log(XX[, ncol(XX)])
#'    w <- XX[, ncol(XX)-1]
#'    X <- XX[, 1:(ncol(XX)-2), drop=FALSE]

#'    ## Intercept=TRUE (default)
#'    ##  - has effect only when nocheck=FALSE (default)
#'    (out <- addt(y, X, w, intercept=TRUE, nocheck=FALSE))
#'
#' @export
#' @author FSDA team, \email{valentin.todorov@@chello.at}

addt <- function(y, x, w, intercept=TRUE, la, nocheck=FALSE, trace)
{

    y <- data.matrix(y)
    if (!is.numeric(y)) stop("y is not a numeric")
    if (dim(y)[2] != 1) stop("y is not onedimensional")

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

    if(missing(la))
        la <- c(0.0, 0.0)
    else
        la <- c(la, 1)

    tmp <- .C('r_addt',
        y = if(is.double(y)) y else as.double(y),
        x = if(is.double(x)) x else as.double(x),
        w = if(is.double(w)) w else as.double(w),
        n = as.integer(n),
        p = as.integer(p),
        n1 = as.integer(n1),                            # new n, returned by chkinputR()
        p1 = as.integer(p1),                            # new p, returned by chkinputR()
        intercept = as.integer(intercept),
        la = as.double(la),
        nocheck = as.integer(nocheck),

        b = as.double(0),
        S2add = as.double(0),
        Tadd = as.double(0),
        pval = as.double(0),

        NAOK=TRUE,
        PACKAGE="fsdac")

    ans <- list(b=tmp$b, S2add=tmp$S2add, Tadd=tmp$Tadd, pval=tmp$pval)
    class(ans) <- "addt"
    ans
}
