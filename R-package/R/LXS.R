##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Computes the Least Median of Squares (LMS) or Least Trimmed Squares (LTS) estimators
#'
#' @description LXS computes the Least Median of Squares (LMS) or Least Trimmed Squares (LTS) estimators.
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
#' @param intercept Indicator for the constant term (intercept) in the fit, defaults to \code{intercept=TRUE}.
#' @param bonflevoutX control outlier detection in the designmatrix. If the design matrix \code{X} contains
#'  several high leverage units (that is units which are very far from the bulk of the data), it may happen
#'  that the best subset may include some of these units. If \code{boflevoutX} is not missing, outlier
#'  detection procedure \code{FSM()} is applied to the design matrix \code{X}, using name/pair option
#'  \code{bonflev=bonflevoutX}. The extracted subsets which contain at least one unit declared as outlier
#'  in the \code{X} space by \code{FSM()} are removed (more precisely they are treated as singular subsets)
#'  from the list of candidate subsets to find the \code{LXS()} solution. By default (\code{bonflevoutX} is missing)
#'  \code{FSM()} is not invoked.
#' @param conflev confidence level which is used to declare outliers. It could be \code{95, 0.975, 0.99}
#'  (individual alpha) or \code{1-0.05/n, 1-0.025/n, 1-0.01/n} (simultaneous alpha). The default is \code{conflev=0.975}.
#' @param alpha the percentage (roughly) of squared residuals whose sum will be minimized,
#'  by default \code{alpha=0.5}. In general, alpha must be between 0.5 and 1.
#' @param h The number of observations that have determined the least trimmed squares
#'  estimator,  scalar. \code{h} is an integer greater or equal than \code{p} but smaller
#'  then \code{n}. Generally \code{h=[0.5*(n+p+1)]} (default value).
#'
#' @param lms estimation method, If \code{lms=1} (default) Least Median of Squares is computed,
#'  else if \code{lms=2} or  \code{lms='lts'} fast LTS with all default options is used else
#'  if \code{lms} is a scalar different from 1 and 2 standard lts is used (without concentration steps) else
#'  if \code{lms} is a list or a named vector fast lts (with concentration steps) is used. In this case the user
#'  can control the following options:
#'  \enumerate{
#'  \item \code{refsteps} - number of refining iterations on each subsample (default is \code{refsteps=3}).
#'      If \code{refsteps=0}, this  means 'raw-subsampling' without iterations.
#'  \item \code{reftol} - default value for the tolerance used for the refining steps (default is \code{reftol=1e-6}).
#'  \item \code{bestr} - number of 'best betas' to remember from the subsamples. These will be
#'      later iterated until convergence (default is \code{bestr=5}).
#'  \item \code{refstepsbestr} - number of refining iterations for each best subset (default is \code{refstepsbestr=50}).
#'  \item \code{reftolbestr} - default value for the tolerance for the refining steps for each of
#'      the best subsets (default is \code{reftolbestr=1e-8}).
#' }
#' @param nsamp number of subsamples which will be extracted to find the robust estimator. If \code{nsamp=0}
#'  all subsets will be extracted. They will be \code{n choose p}.
#'
#'  Remark: if the number of all possible subset is <1000 the default is to extract all subsets
#'  otherwise just 1000.
#' @param rew wheather to reweight the LTS/LMS estomates. If \code{rew=TRUE} the reweighted version of LTS/LMS is used and
#'  the output quantities refer to the reweighted version, else no reweighting is performed (default).
#' @param nomes controls whether to display or not on the screen messages about estimated
#'  time to compute LMS (LTS). If \code{nomes=TRUE} no message about estimated time to compute
#'  LMS (LTS) is displayed, else if \code{nomes=FALSE} (default), a message about
#'  estimated time is displayed.
#' @param msg Level of output to display. It controls whether to display or not messages on the screen.
#'   If \code{msg=TRUE} (default) messages are displayed on the screen about step of the fwd search else
#'  no message is displayed on the screen.
#' @param nocheck Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
#'  matrix \code{y} and matrix \code{X}. Notice that \code{y} and \code{X} are left unchanged. In other words
#'  the additional column of ones for the intercept is not added. By default \code{nocheck=FALSE}.
#' @param csave wheather to return the optional matrix \code{C} containing the indexes of
#'  the subsamples extracted for computing the estimate (the so called elemental sets).
#'
#' @param trace Whether to print intermediate results. Default is \code{trace=FALSE}.
#'
#' @return  An object of class \code{lts} or \code{lms} will be returned which is basically a list
#'  containing the following elements:
#'  \enumerate{
#'  \item \code{rew}: wheather reweighting was applied. If \code{rew=TRUE}, all subsequent output refers to
#'      reweighted estimates.
#'  \item \code{coefficients}: LTS (LMS) coefficient estimates, including the intercept when \code{intercept=TRUE}.
#'  \item \code{bs}: a vector containing the units forming the subset associated with bLMS (bLTS).
#'  \item \code{residuals}: a vector containing the standardized residuals from the regression.
#'  \item \code{scale}: scale estimate of the residuals.
#'  \item \code{weights}: a vector containing weights. The elements of this vector are 0 or 1.
#'      These weights identify the \code{h} observations which are used to compute the final LTS (LMS) estimate.
#'      \code{sum(weights)=h} if there is not a perfect fit, otherwise \code{sum(weights)} can be greater than \code{h}.
#'  \item \code{h}: the number of observations that have determined the LTS (LMS) estimator, i.e. the value of h.
#'  \item \code{outliers}: a vector containing the list of the units declared as outliers
#'      using confidence level specified in \code{conflev}.
#'  \item \code{conflev}: confidence level which is used to declare outliers.
#'  \item \code{singsub}: number of subsets wihtout full rank. Notice that if this number is greater than
#'      \code{0.1*(number of subsamples)} a warning is produced on the screen.
#'  \item \code{y}: the responce variable.
#'  \item \code{X}: the predictor matrix.
#'  \item \code{C}: the matrix containing the indexes of the subsamples extracted for computing
#'      the estimate (the so called elemental sets) (only of \code{csave=TRUE}).
#'
#'  }
#'
#' @references
#'  Rousseeuw P.J. and Leroy A.M. (1987), \emph{Robust regression and outlier detection}, Wiley.
#'
#' @examples
#'
#'  data(heart, package="robustbase")
#'
#'  ## Default method works with 'x'-matrix and y-var and all default optional arguments
#'  heart.x <- data.matrix(heart[, 1:2]) # the X-variables
#'  heart.y <- heart[,"clength"]
#'  (out <- LXS(heart.y, heart.x))
#'
#'  data(stackloss)
#'  LXS(stackloss$stack.loss, stackloss[, -4])
#'
#' @export
#' @author FSDA team, \email{valentin.todorov@@chello.at}

LXS <- function(y, x, intercept=TRUE, lms=1, rew=FALSE, bonflevoutX,
    alpha=0.5, h, conflev=0.975, nsamp, nomes=FALSE, msg=TRUE, nocheck=FALSE,
    csave=FALSE,
    trace=FALSE)
{

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
    ##  e.g. to find default values for 'init'.
    ##
    ##  chk <- chkinputR(y, Y, intercept, nochek)
    n1 <- n
    p1 <- if(intercept && !nocheck) p+1 else p
    y1 <- y
    x1 <- x         # what is returned from chkinputR(), but with the 1-s for the intercept removed.

    if(missing(bonflevoutX))
        bonflevoutX <- c(0.0, 0.0)
    else
        bonflevoutX <- c(bonflevoutX, 1)

    if(!missing(h))          alpha <- h/n1
    else                     h <- ceiling(alpha*n1)
    if(alpha < 1/2 | alpha > 1)
        stop("'alpha' must be between 0.5 and 1.0!")

    refsteps <- 3
    reftol  <- 1e-6
    bestr  <- 5
    refstepsbestr  <- 50
    reftolbestr <- 1e-8
    if(length(lms) == 1)
    {
        if(is.numeric(lms))
        {
            if(lms != 1 | lms != 2)         # Standard LTS (without concentration steps)
                lms <- 3
        } else if(toupper(lms) == "LMS")    # LMS (default)
            lms <- 1
        else if(toupper(lms) == "LTS")      #  Fast LTS with the all default options
            lms <- 2
        else
            stop("'lms' must be a list or either numeric or a character string 'LMS' or 'LTS'")
    } else if(is.list(lms) | is.vector(lms))     # lms is a structure
    {
        lms <- unlist(lms)
        if(is.null(names(lms)) | !is.numeric(lms))
            stop("'lms' must be a list or a named numeric vector")

        cnames <- c("refsteps", "reftol", "bestr", "refstepsbestr", "reftolbest")
        for(cx in names(lms))
            if(cx %in% cnames)
                assign(cx, lms[cx])
            else
                stop(paste("Unknown option in 'lms':", cx, ". Must be one of: ", paste(cnames, collapse =",")))

        lms <- 0                            # Fast LTS (with concentration steps) with options
    } else
        stop("'lms' must be a list or either numeric or a character string 'LMS' or 'LTS'")

    if(trace && lms == 0)
        message("\nLTS with options (refsteps, reftol, bestr, refstepsbestr, reftolbestr): ", refsteps, reftol, bestr, refstepsbestr, reftolbestr, "\n")

    ##  Prepare the output values..................................
    beta <- rep(0, p1)
    bs <- rep(0, p1)
    residuals <- rep(0, n1)
    weights <- rep(0, n1)
    outliers <- rep(0, n1)

    pC = p1     # p or p+1, depending on the intercept
    ncomb <- choose(n1, p1)
    if(missing(nsamp)) {
        nsamp <- 3000
        if(lms == 0 || lms == 2)
            nsamp <- min(1000, ncomb)
    }
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
    } else if(is.matrix(nsamp) | is.data.frame(nsamp)){        # nsamp is a matrix with already selected subsets
        nsamp <- as.matrix(nsamp)
        if(ncol(nsamp) != pC | !is.numeric(nsamp))
            stop(paste("If 'nsamp' is a matrix it has to be numeric with", pC, "columns"))
        nC <- nrow(nsamp)
    }

    if(nC > 5000 && nsamp==0) {
        message("Computing all ", ncomb," subsets of size ", pC, " out of ", n1,"\n This may take a very long time!\n")
        flush.console()
    }

    ##  we want to return the C matrix with elemental sets.
    ##  Let's try to guess its size and allocate the space necessary.
    C <- matrix(0, nrow=nC, ncol=pC)

    tmp <- .C('r_lxs',
        y = if(is.double(y)) y else as.double(y),
        x = if(is.double(x)) x else as.double(x),
        n = as.integer(n),                              # number of rows of X and length of y
        p = as.integer(p),                              # number of variables
        n1 = as.integer(n1),                            # new n, returned by chkinputR()
        p1 = as.integer(p1),                            # new p, returned by chkinputR()

        intercept = as.integer(intercept),

        lms = if(is.double(lms)) lms else as.double(lms),
        refsteps <- as.double(refsteps),
        reftol  <- as.double(reftol),
        bestr  <- as.double(bestr),
        refstepsbestr  <- as.double(refstepsbestr),
        reftolbestr <- as.double(reftolbestr),

        bonflevoutX = as.double(bonflevoutX),
        h = as.double(h),
        conflev = as.double(conflev),
        nsamp = as.double(nsamp),
        rew = as.integer(rew),

        nomes = as.integer(nomes),
        msg = as.integer(msg),
        nocheck = as.integer(nocheck),
        csave = as.integer(csave),               # wheather to return C
        nC = as.integer(nC),                     # expected number of rows of C
        pC = as.integer(pC),                     # expected number of columns of C
        trace = as.integer(trace),

        beta = as.double(beta),
        bs = as.integer(bs),
        residuals = as.double(residuals),
        scale = as.double(1),
        weights = as.double(weights),
        outliers = as.double(outliers),
        nout = as.integer(1),
        singsub = as.double(0.0),
        C = as.double(C),

        NAOK=TRUE,
        PACKAGE="fsdac")

        outliers <- tmp$outliers[1:tmp$nout]
        if(csave)
        {
            C <- matrix(tmp$C, nrow=tmp$nC, ncol=tmp$pC)
            rownames(C) <- 1:nrow(C)
            colnames(C) <- paste0("X", 1:ncol(C))
        }

    ans <- list(rew=rew, coefficients=tmp$beta, bs=tmp$bs, residuals=tmp$residuals, scale=tmp$scale, weights=tmp$weights,
        h=tmp$h, outliers=outliers, conflev=tmp$conflev, singsub=tmp$singsub,
        y=y1, X=x1)

        if(csave)
            ans$C <- tmp$C
    class(ans) <- if(lms==2) "LMS" else "LTS"

    ans$call <- match.call()
    ans
}

print.LTS <- function (x, digits = max(3, getOption("digits") - 3), ...) {
    cat("\nCall:\n", deparse(x$call), "\n\n", sep = "")
    if (length(coef(x))) {
        cat("Coefficients:\n")
        print.default(format(coef(x), digits = digits), print.gap = 2, quote = FALSE)
        cat("\nScale estimate", format(x$scale, digits = digits), "\n\n")
    } else
        cat("No coefficients\n")

    invisible(x)
}

print.LMS <- function (x, digits = max(3, getOption("digits") - 3), ...) {
    print.LTS(x, digits = digits, ...)
}
