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
#'  Rows of \code{x} represent observations, and columns represent variables. By default,
#'  there is a constant term in the model, unless you explicitly remove it using input
#'  option intercept, so do not include a column of 1s in \code{x}.
#'  Missing values (NaN's)
#'  and infinite values (Inf's) are allowed, since observations (rows) with missing or
#'  infinite values will automatically be excluded from the computations.
#'
#' @param intercept Indicator for the constant term (intercept) in the fit, defaults to \code{intercept=TRUE}.
#' @param alpha the percentage (roughly) of squared residuals whose sum will be minimized,
#'  by default \code{alpha=0.5}. In general, alpha must be between 0.5 and 1.
#' @param h The number of observations that have determined the least trimmed squares
#'  estimator,  scalar. \code{h} is an integer greater or equal than \code{p} but smaller
#'  then \code{n}. Generally \code{h=[0.5*(n+p+1)]} (default value).
#' @param lms criterion to use to find the initial subset to initialize the search (LMS, LTS with concentration steps,
#'  LTS without concentration steps or a subset supplied directly by the user). The default value is \code{lms="lms"}
#'  (or \code{lms=1}) (Least Median of Squares is computed to initialize the search). If the user wants to initialze
#'  the search with LTS with all the default options for concentration steps then, \code{lms=2} or \code{lms="lts"}.
#'  If the user wants to use LTS without concentration steps, \code{lms} can
#'  be any value different from 1 or 2. If \code{lms} is a vector or a list it is possible
#'  to initialize the search with a prespecified set of units and in such case \code{lms} is a list
#'  which contains a field named \code{bsb} which contains the list of units.
#'  For example, in the case of simple regression through the origin with just
#'  one explanatory variable, to initialize the search with unit 3 then \code{lms=list(bsb=3)}.
#' @param bsbmfullrank how to deal with singular \code{x} matrix. This option tells what to do
#'  in case when a subset at step \code{m} (say \code{bsbm}) produces a singular \code{x}.
#'  In other words, this options controls what to do when \code{rank(x[bsbm,]} is smaller
#'  then number of explanatory variables. If \code{bsbmfullrank=TRUE} (default) these units
#'  (whose number is say \code{mnofullrank}) are constrained to enter the search in the final
#'  \code{n-mnofullrank} steps else the search continues using as estimate of \code{beta} at step \code{m}
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
#' @param threshoutX threshold to bound the effect of high leverage units. If the design matrix \code{x}
#'  contains several high leverage units (that is units which are very far from the bulk of the data),
#'  it may happen that the best subset of LXS may include some of these units, or it may happen that
#'  these units have a deletion residual which is very small due to their extremely high value of \code{hi}.
#'  \code{threshoutX=1} imposes the constraints that:
#'  \enumerate{
#'  \item the extracted subsets which contain at least one unit declared as outlier in the \code{x} space by
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
#' @param msg Level of output to display. It controls whether to display or not messages on the screen.
#'   If \code{msg=TRUE} (default) messages are displayed on the screen about step of the fwd search else
#'  no message is displayed on the screen.
#' @param nocheck Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
#'  matrix \code{y} and matrix \code{x}. Notice that \code{y} and \code{x} are left unchanged. In other words
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
#'  \item \code{singularity} if present, this element indicatres a singularity condition - either
#'      on the initial set or a set reached during the forward search. Contains the indexes
#'      of units that result in a singular matrix.
#'  \item \code{y}: the response variable.
#'  \item \code{X}: the predictor matrix.
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
    bsbmfullrank=TRUE, bonflev, alpha=0.5, h, nsamp=1000, threshoutX, weak=FALSE,
    init, msg=TRUE, nocheck=FALSE, trace=FALSE)
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
        ##  n1 and p1 and use them whenever preliminary calculations are necessary,
        ##  e.g. to find default values for 'init'.
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

    ## 'lms' can be 1="lms" or 2="lts" or 3 (anything else) = standard LTS without concentration steps
    ##  or, alternatively a structure with options or a vector with a list of units.
    bsb <- c()
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
        if(is.vector(lms) && is.numeric(lms)) {
            bsb <- lms
            if(!all(bsb >= 1 & bsb <= n1))
                stop("The initial subset must contain valid unit indexes!")

        } else {
            lms <- unlist(lms)
            if(is.null(names(lms)) | !is.numeric(lms))
                stop("'lms' must be a list or a named numeric vector")

            cnames <- c("bsb")
            for(cx in names(lms))
                if(cx %in% cnames)
                    assign(cx, lms[cx])
                else
                    stop(paste("Unknown option in 'lms':", cx, ". Must be one of: ", paste(cnames, collapse =",")))
        }

        lms <- 0                            # Fast LTS (with concentration steps) with options

    } else
        stop("'lms' must be a list or either numeric or a character string 'LMS' or 'LTS'")

    ## The default value of init depends on n and p
    if(missing(init)) {
        init <- if(n1 < 40) p1 + 1 else min(3*p1 + 1, floor(0.5*(n1 + p1 + 1)))
    }
    if(init < p+1) {
        warning("Attention : 'init' should be larger than p+1. It is set to p+2.")
        init <- p + 2
    }
    if(init < length(bsb))
        init <- length(bsb)

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

    ## cat("\nn, p, n1, p1, init, retnUn: ", n, p, n1, p1, init, retnUn)

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
        bsb <- as.double(bsb),
        nbsb <- as.integer(length(bsb)),

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
    singularity <- NULL
    if(tmp$retnUn == 0)             # singularity condition, user choice of initial subset
    {
        mdr <- Un <- nout <- outliers <- tmp$beta <- tmp$residuals <- tmp$fittedvalues <- tmp$scale <- NULL
        singularity <- "Singular initial subset"
    	message(paste("Singularity issue! The initial subset results in a singular matrix:\n", paste(bsb, collapse=",")))

    } else if(tmp$retpmdr == 1)     # singularity condition occured during FS, the list of units is returned in mdr
    {
        mdr <- Un <- nout <- outliers <- tmp$beta <- tmp$residuals <- tmp$fittedvalues <- tmp$scale <- NULL
        singularity <- tmp$mdr[1:tmp$retnUn]
    	message(paste("Singularity issue! The following", length(singularity), "observations produce singular matrix:"))
        print(singularity)
    } else {
        outliers <- if(tmp$noutliers == 0) NULL else tmp$outliers[1:tmp$noutliers]
        Un <- matrix(tmp$Un[1:(tmp$retnUn * tmp$retpUn)], nrow=tmp$retnUn, ncol=tmp$retpUn)
        mdr <- matrix(tmp$mdr[1:(tmp$retnUn * tmp$retpmdr)], nrow=tmp$retnUn, ncol=tmp$retpmdr)
        nout <- matrix(tmp$nout, nrow=2, ncol=5)
        if(!nocheck) {
            names(tmp$beta) <- if(intercept) c("Intercept", colnames(chk$x)) else colnames(chk$x)
            names(tmp$residuals) <- names(tmp$fitted.values) <- rownames(chk$x)
        }
        dimnames(mdr) <- list(1:nrow(mdr), c("Step", "MDR"))
        dimnames(Un) <- list(1:nrow(Un), c("Step", paste0("Unit", 1:10)))
    }

    ans <- if(!is.null(singularity))
                list(singularity=singularity)
            else list(mdr=mdr, Un=Un, nout=nout, coefficients=tmp$beta, scale=tmp$scale,
                    fitted.values=tmp$fitted.values, residuals=tmp$residuals)
    if(!is.null(outliers))
        ans$outliers <- outliers

    if(!nocheck) {
        ans$y <- chk$y
        ans$X <- chk$x
    }

    if(weak == TRUE && is.null(singularity)){
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
