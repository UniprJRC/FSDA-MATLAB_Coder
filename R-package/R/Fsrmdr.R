##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Computes the minimum deletion residual and other basic linear regression
#'  quantities in each step of the search
#'
#' @description Computes the minimum deletion residual and other basic linear regression
#'  quantities in each step of the search
#'
#' @details Let \eqn{S^{(m)}_* \in \cal{M}} be the  optimum subset of size \code{m}, for which
#'  the matrix of regressors is \eqn{X(m^*)}. Least squares applied to this subset yields parameter
#'  estimates \eqn{\hat{\beta}(m^*)} and \eqn{s^2(m^*)}, the mean square estimate of \eqn{\sigma^2}
#'  on \eqn{m-p} degrees of freedom. The residuals can be calculated for all observations including
#'  those not in \eqn{S^{(m)}_*}. The \code{n} resulting least squares residuals are
#'  \deqn{
#'      e_i(m^*) =  y_i -x_i^T\hat{\beta}(m^*). \label{eq2.14a}
#'  }
#'  The search moves forward with the subset \eqn{S^{(m+1)}_*} consisting of the observations with
#'  the \eqn{m+1} smallest absolute values of \eqn{e_i(m^*)}. When \eqn{m < n} the estimates of
#'  the parameters are based on only those observations giving the central \code{m} residuals.
#'
#'  To test for outliers the deletion residual is calculated for the \eqn{n-m} observations not in
#'  \eqn{S^{(m)}_*}. These residuals are
#'  \deqn{
#'      r_i^*(m^*)  = \frac{y_{i} - x_{i}^T\hat{\beta}(m^*)} {
#'      \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}  = \frac{e_{i}(m^*)} {
#'      \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}},
#'  }
#'  where \eqn{h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i};  the leverage of each observation depends on
#'  \eqn{S^{(m)}_*}. Let the observation nearest to those constituting \eqn{S^{(m)}_*} be \eqn{i_{\mbox{min}}} where
#'  \deqn{
#'      i_{\mbox{min}} = \arg \min | r^*_i(m^*)| \; \mbox{for} \; i \notin S^{(m)}_*,
#'  }
#'  the observation with the minimum absolute deletion  residual among those not in \eqn{S^{(m)}_*}.
#'  This function computes
#'  \eqn{r_i^*(m^*)$ for $m^*=init, init+1, \ldots, n-1}.
#'
#' @param y A vector with \code{n} elements that contains the response variable.
#' @param x A data matrix (\code{n} observations and \code{p-1} variables) of explanatory variables
#'  (also called 'regressors') of dimension \code{n x (p-1)} where \code{p} denotes the number of
#'  explanatory variables including the intercept. Rows of \code{x} represent observations,
#'  and columns represent variables. By default,
#'  there is a constant term in the model, unless you explicitly remove it using the input
#'  option intercept. In such case (\code{intercept=FALSE}) a column of 1s will not be added to \code{x}.
#'  Missing values (NA's) and infinite values (Inf's) are allowed, since observations (rows) with missing or
#'  infinite values will automatically be excluded from the computations.
#' @param bsb List of the units forming the initial subset.
#'  If \code{bsb = 0} then the procedure starts with \code{p} units randomly chosen
#'  else if \code{bsb} is not 0 the search will start with \code{m0=length(bsb)}.

#' @param intercept Indicator for the constant term (intercept) in the fit, defaults to \code{intercept=TRUE}.
#' @param init Search initialization. It specifies the point where to initialize the search and start
#'  monitoring required diagnostics. If it is not specified by default it will be equal to:
#'  \itemize{
#'      \item \code{p+1}, if the sample size is smaller than 40;
#'      \item \code{min(3*p+1, floor(0.5*(n+p+1)))}, otherwise.
#'  }
#' @param msg Level of output to display. It controls whether to display or not messages on the screen.
#'   If \code{msg=TRUE} (default) messages are displayed on the screen about step of the fwd search else
#'  no message is displayed on the screen.
#' @param nocheck Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
#'  matrix \code{y} and matrix \code{X}. Notice that \code{y} and \code{X} are left unchanged. In other words
#'  the additional column of ones for the intercept is not added. By default \code{nocheck=FALSE}.
#' @param bsbsteps It specifies for which steps of the forward search it is necessary to save the units
#'  forming subset. If \code{bsbsteps=0} we store the units forming the subset in all steps.
#'  If \code{bsbsteps=c()} or omitted, the default is to store the units forming the subset in all steps
#'  if \code{n <= 5000}, else to store the units forming the subset at steps init and steps which are
#'  multiple of 100. For example, as default, if \code{n = 753} and \code{init = 6}, the units forming
#'  the subset are stored for \code{m=init, 100, 200, 300, 400, 500 and 600}.
#' @param bsbmfullrank how to deal with singular \code{x} matrix. This option tells what to do
#'  in case when a subset at step \code{m} (say \code{bsbm}) produces a singular \code{x}.
#'  In other words, this options controls what to do when \code{rank(X[bsbm,]} is smaller
#'  then number of explanatory variables. If \code{bsbmfullrank=TRUE} (default) these units
#'  (whose number is say \code{mnofullrank}) are constrained to enter the search in the final
#'  \code{n-mnofullrank} steps else the search continues using as estimate of \code{beta} at step \code{m}
#'  the estimate of \code{beta} found in the previous step.
#' @param constr  controls the constrained search. A vector of length \code{r} which contains a
#'  list of units which are forced to join the search in the last \code{r} steps. The default is an empty vector
#'  which means that no constraint is imposed. For example \code{constr=1:10} forces
#'  the first 10 units to join the subset in the last 10 steps
#' @param threshlevoutX threshold to bound the effect of high leverage units in the computation of
#'  deletion residuals. In the computation of the quantity \eqn{h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i}, \eqn{i \notin S^{(m)}_*},
#'  units which are very far from the bulk of the data (represented by \eqn{X(m^*)}) will have a huge value of \eqn{h_i(m^*)}
#'  and consequently of the deletion residuals. In order to tackle this problem it is possible to put a bound to the value of \eqn{h_i(m^*)}.
#'  For example \code{threshlevoutX=r} imposes the contrainst that \eqn{h_i(m^*)} cannot exceed \eqn{r \times p/m}.
#'  The default value is to leave \code{threshlevoutX} empty, which means that no threshold is imposed.
#' @param internationaltrade criterion for updating the subset. If \code{internationaltrade=TRUE}
#'  (default is \code{internationaltrade=FALSE}) the residuals which have large of the final
#'  column of X (generally quantity) are reduced. Note that this guarantees that leverge units
#'  which have a large value of \code{X} will tend to stay in the subset. This option is
#'  particularly useful in the context of international trade data where we regress the
#'  value \code{value=price*Q} on quantity \code{Q}. In other words, we use the residuals
#'  as if we were regressing \code{y/X} (i.e., the price) on the vector of ones.
#' @param trace Whether to print intermediate results. Default is \code{trace=FALSE}.
#'
#' @return  An object of class \code{FSRmdr}, will be returned which is basically a list
#'  containing five matrices:
#'  \enumerate{
#'  \item \code{mdr} Monitoring of the minimum deletion residual at each step;
#'  \item \code{Un} Units included in each step;
#'  \item \code{BB} Units belonging to search in each step or selected steps.
#'  \item \code{Bols} OLS coefficients at each step;
#'  \item \code{S2} S2 and R2 at each step;
#'  }
#'  \code{mdr} is a \code{n-init x 2} matrix which contains the monitoring of the minimum
#'      deletion residual at each step of the forward search.
#'      The first column is the forward search index (from \code{init} to \code{n-1}) and the
#'      second column contains the minimum deletion residual. REMARK: if in a certain step
#'      of the search the matrix is singular, this procedure checks how many observations
#'      produce a singular matrix. In this case \code{mdr} is a column vector which contains
#'      the list of units for which the matrix X is non singular.
#'
#'  \code{Un} is an \code{(n-init) x 11} matrix which
#'      contains the unit(s) included in the subset at each step of the search.
#'      REMARK: in every step the new subset is compared with the old subset. \code{Un}
#'      contains the unit(s) present in the new subset but not in the old one.
#'      \code{Un[1,2]} for example contains the unit included in step \code{init+1}. \code{Un[nrow(Un), 2]}
#'      contains the units included in the final step of the search.
#'
#'    \code{BB} is an \code{n-by-(n-init+1)} or \code{n-by-length(bsbsteps)} matrix which contains the units belonging to the subset at
#'      each step (or in selected steps as specified by optional vector bsbsteps) of the forward search.
#'      More precisely:
#'      \enumerate{
#'      \item \code{BB[, 1]} contains the units forming the subset in step \code{bsbsteps[1]};
#'      \item ....;
#'      \item \code{BB[, ncol(BB)]} contains the units forming the subset in step \code{bsbsteps[length(bsbsteps)]};
#'      }
#'
#'      Row 1 of matrix \code{BB} is referred to unit 1;
#'      ......;
#'      Row \code{n} of matrix \code{BB} is referred to unit \code{n};
#'
#'      Units not belonging to subset are denoted with NaN.
#'
#'  \code{Bols} is a \code{n-init+1 x p+1} matrix containing the monitoring of the estimated
#'      beta coefficients in each step of the forward search (\code{p} includes the intercept, if selected).
#'
#'  \code{S2} is a \code{n-init+1 x 3} matrix containing the monitoring of S2 (2nd column) and R2
#'      (third column) in each step of the forward search.
#'
#' @references
#'      Atkinson, A.C. and Riani, M. (2000), \emph{Robust Diagnostic Regression Analysis} Springer Verlag, New York.
#'
#'      Atkinson, A.C. and Riani, M. (2006), Distribution theory and simulations for tests of outliers in regression,
#'      \emph{Journal of Computational and Graphical Statistics}, \bold{15}, pp. 460--476.
#'
#'      Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward search for testing multiple outliers
#'      in regression, \emph{Advances in Data Analysis and Classification}, \bold{1}, pp. 123--141.
#'
#' @examples
#'
#'    data(fishery)
#'
#'    y <- fishery[,2, drop=FALSE]
#'    X <- fishery[,1, drop=FALSE]
#'    bsb <- c(7, 431)                    # found by LTS
#'    out <- FSRmdr(y, X, bsb)            # call 'FSRmdr' with all default parameters
#'    plot(out)                           # a very simple plot
#'
#' @export
#' @author FSDA team, \email{valentin@todorov.at}

##  FSRmdr_wrapper arguments:
##      const emxArray_real_T *y, const emxArray_real_T *X, const emxArray_real_T *bsb,
##      bool bsbmfullrank,
##      const emxArray_real_T *bsbsteps,
##      const emxArray_real_T *constr, double init, bool intercept,
##      bool internationaltrade, bool msg, bool nocheck,
##      const double threshlevoutX_data[], const int threshlevoutX_size[2]
##
##  Return arguments:
##      emxArray_real_T *mdr,       n-init x 2
##      emxArray_real_T *Un,        n-init x 11
##      emxArray_real_T *BB,        n x n-init+1 or n x length(bsbsteps)
##      emxArray_real_T *Bols,      n-init+1 x p+1
##      emxArray_real_T *S2         n-init+1 x 3

FSRmdr <- function(y, x, bsb, intercept=TRUE, init, nocheck=FALSE,
    bsbsteps, bsbmfullrank=TRUE, constr, threshlevoutX, internationaltrade=FALSE, msg=TRUE, trace=FALSE)
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

    ## bsb can contain a list of the units forming the initial subset.
    ##  If missing, a random sample of p observations will be chosen
    ##  - therefore set the length of bsb to p, if it is missing.
    ##  It will be used for init.
    if(missing(bsb))
    {
        bsb <- 0
        lbsb <- p1
    } else
    {   bsb <- as.double(bsb)
        lbsb <- length(bsb)
    }

    ## Search initialization. The default value depends on n and p
    ##  and init cannot be smaller than the length of bsb
    if(missing(init))
    {
        init <- if(n1 < 40) p1 + 1 else min(3*p1 + 1, floor(0.5*(n1 + p1 + 1)))
    }
    if(init < lbsb)
        init <- lbsb

    ## Here we need to interpret the default value of 'bsbsteps', because
    ##  its length will define the size of the BB matrix which we need to allocate
    if(missing(bsbsteps))
    {
        ## Default for vector bsbsteps which indicates for which steps of the fwd
        ##  search the units forming the subset have to be saved
        bsbsteps <- if(n1 <= 5000) init:n1 else c(init, seq(init + 100 - init %% 100, 100*floor(n1/100), 100))
    }
    if(min(bsbsteps) < init)
        warning("FSDA:FSRmdr:WrongInit: It is impossible to monitor the subset for values smaller than init")

    if(missing(constr))
        constr <- c()
    else if(!is.numeric(constr))
        stop("If not missing, 'constr' must be a numeric vector with indexes of the observation to base the constraint on!")
    else
        constr <- unlist(constr)
    if(length((which(!(constr %in% 1:n1)))) > 0)
        stop("The vector 'constr' contains indexes outside of the data set!")

    if(missing(threshlevoutX))
        threshlevoutX <- c(0.0, 0.0)
    else
        threshlevoutX <- c(threshlevoutX, 1)

    ##  Matrix BB will contain the units forming the subset in each step (or in
    ##  selected steps) of the forward search. The first column contains
    ##  information about the units forming the subset at step init1.
    mdr <- matrix(0, nrow=n1-init, ncol=2)
    Un <- matrix(0, nrow=n1-init, ncol=11)
    BB <- if(length(bsbsteps) == 0) matrix(0, nrow=n1, ncol=n1-init+1)
          else                      matrix(0, nrow=n1, ncol=length(bsbsteps))
    Bols <- matrix(0, nrow=n1-init+1, ncol=p1+1)
    S2 <- matrix(0, nrow=n1-init+1, ncol=3)

    nmdr <- nrow(mdr); pmdr <- ncol(mdr)
    nUn <- nrow(Un); pUn <- ncol(Un)
    nBB <- nrow(BB); pBB <- ncol(BB)
    nBols <- nrow(Bols); pBols <- ncol(Bols)
    nS2 <- nrow(S2); pS2 <- ncol(S2)

    tmp <- .C('r_fsrmdr',
        y = if(is.double(y)) y else as.double(y),
        x = if(is.double(x)) x else as.double(x),
        n = as.integer(n),
        p = as.integer(p),
        bsb = if(is.double(bsb)) bsb else as.double(bsb),
        nbsb = as.integer(length(bsb)),
        bsbsteps = if(is.double(bsbsteps)) bsbsteps else as.double(bsbsteps),
        nbsbsteps = as.integer(length(bsbsteps)),
        bsbmfullrank = as.integer(bsbmfullrank),
        constr = as.integer(constr),
        lconstr = as.integer(length(constr)),
        threshlevoutX = as.double(threshlevoutX),
        internationaltrade = as.integer(internationaltrade),
        init = as.double(init),
        intercept = as.integer(intercept),
        msg = as.integer(msg),
        nocheck = as.integer(nocheck),

        mdr = as.double(mdr),
        nmdr = as.integer(nmdr),
        pmdr = as.integer(pmdr),
        Un = as.double(Un),
        nUn = as.integer(nUn),
        pUn = as.integer(pUn),
        BB = as.double(BB),
        nBB = as.integer(nBB),
        pBB = as.integer(pBB),
        Bols = as.double(Bols),
        nBols = as.integer(nBols),
        pBols = as.integer(pBols),
        S2 = as.double(S2),
        nS2 = as.integer(nS2),
        pS2 = as.integer(pS2),

        NAOK=TRUE,
        PACKAGE="fsdac")

    ##  Copy the output parameters into the output class FSR and return it.
    singularity <- NULL

    if(tmp$nmdr == 0)             # singularity condition, user choice of initial subset
    {
        mdr <- Un <- BB <- Bols <- S2 <- NULL
        singularity <- "Singular initial subset"
    	message(paste("Singularity issue! The initial subset results in a singular matrix:\n", paste(bsb, collapse=",")))

    } else if(tmp$pmdr == 1)     # singularity condition occured during FS, the list of units is returned in mdr
    {
        mdr <- Un <- BB <- Bols <- S2 <- NULL
        singularity <- tmp$mdr[1:tmp$nmdr]
    	message(paste("Singularity issue! The following", length(singularity), "observations produce singular matrix:"))
        print(singularity)
    } else if(tmp$pmdr == 2) {
        mdr <- matrix(tmp$mdr[1:(tmp$nmdr*tmp$pmdr)], nrow=tmp$nmdr, ncol=tmp$pmdr)
        Un <- matrix(tmp$Un, nrow=tmp$nUn, ncol=tmp$pUn)
        BB <- matrix(tmp$BB, nrow=tmp$nBB, ncol=tmp$pBB)
        Bols <- matrix(tmp$Bols, nrow=tmp$nBols, ncol=tmp$pBols)
        S2 <- matrix(tmp$S2, nrow=tmp$nS2, ncol=tmp$pS2)

        dimnames(mdr) <- list(1:nrow(mdr), c("Step", "MDR"))
        dimnames(Un) <- list(1:nrow(Un), c("Step", paste0("Unit", 1:10)))
        dimnames(Bols) <- list(1:nrow(Bols), c("Step", paste0("V", 1:p1)))
        dimnames(S2) <- list(1:nrow(S2), c("Step", "S2", "R2"))
    } else
        stop("Wrong 'mdr' dimensions!")

    ans <- if(!is.null(singularity))
                list(singularity=singularity)
            else list(mdr=mdr, Un=Un, BB=BB, Bols=Bols, S2=S2)

    class(ans) <- "FSRmdr"
    ans$call <- match.call()

    ans
}

plot.FSRmdr <- function(x, col, xlab, ylab, main, ...) {
    if (!inherits(x, "FSRmdr"))
	   stop("Use only with 'FSRmdr' objects")

    if(ncol(x$mdr) != 2)
	   stop("Singularity issue - the 'FSRmdr' object does not contain the minimum deletion residuals.")

    if(missing(col))
        col <-"blue"
    if(missing(xlab))
        xlab <- "Step"
    if(missing(ylab))
        ylab <- "minimum deletion residual"
    if(missing(main))
        main <- "Monitoring of the minimum deletion residual"
    plot(x$mdr[,"Step"], x$mdr[,"MDR"], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)

    return(invisible(x))
}
