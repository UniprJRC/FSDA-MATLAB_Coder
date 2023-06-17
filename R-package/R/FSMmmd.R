##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Computes the minimum mahalanobis distance in each step of the search
#'
#' @description Computes the minimum mahalanobis distance in each step of the search
#'
#' @param Y A data matrix (\code{n} observations and \code{p} variables) of dimension
#'  \code{n x (p)}. Rows of \code{Y} represent observations, and columns represent variables.
#'  Missing values (NA's) and infinite values (Inf's) are allowed, since observations (rows) with missing or
#'  infinite values will automatically be excluded from the computations.
#' @param bsb List of the units forming the initial subset.
#'  If \code{bsb = 0} then the procedure starts with \code{p} units randomly chosen
#'  else if \code{bsb} is not 0 the search will start with \code{m0=length(bsb)}.
#' @param init Search initialization. It specifies the point where to initialize the search and start
#'  monitoring required diagnostics. If it is not specified by default it will be equal to \code{floor(n * 0.6)}.
#' @param msg Level of output to display. It controls whether to display or not messages on the screen.
#'   If \code{msg=TRUE} (default) messages are displayed on the screen about step of the forward search else
#'  no message is displayed on the screen.
#' @param nocheck Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
#'  matrix \code{Y}. By default \code{nocheck=FALSE}.
#' @param bsbsteps It specifies for which steps of the forward search it is necessary to save the units
#'  forming subset. If \code{bsbsteps=0} we store the units forming the subset in all steps.
#'  If \code{bsbsteps=c()} or omitted, the default is to store the units forming the subset in all steps
#'  if \code{n <= 5000}, else to store the units forming the subset at steps \code{init} and steps which are
#'  multiple of 100. For example, as default, if \code{n = 753} and \code{init = 6}, the units forming
#'  the subset are stored for \code{m=init, 100, 200, 300, 400, 500 and 600}.
#' @return  An object of class \code{FSMmmd}, will be returned which is basically a list
#'  containing five matrices:
#'  \enumerate{
#'  \item \code{mmd} Monitoring of the minimum mahalanobis distance at each step;
#'  \item \code{Un} Units included in each step;
#'  \item \code{BB} Units belonging to search in each step or selected steps.
#'  }
#'  \code{mmd} is a \code{n-init x 2} matrix which contains the monitoring of the minimum
#'      mahalanobis distance at each step of the forward search.
#'      The first column is the forward search index (from \code{init} to \code{n-1}) and the
#'      second column contains the minimum mahalanobis distance. REMARK: if in a certain step
#'      of the search the matrix is singular, this procedure checks how many observations
#'      produce a singular matrix. In this case \code{mmd} is a vector which contains
#'      the list of units for which the matrix Y is non singular.
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
#' @references
#'
#'      Atkinson, A.C., Riani, M. and Cerioli, A. (2004), \emph{Exploring multivariate
#'          data with the forward search}, Springer Verlag, New York.

#'
#' @examples
#'
#'  set.seed(123456)
#'  n <- 200
#'  p <- 3
#'  m0 <- 4
#'
#'  Y <- matrix(rnorm(n*p), nrow=n, ncol=p)
#'  ##  Contaminated data
#'  Ycont <-Y
#'  Ycont[1:5,] <- Ycont[1:5,] + 3
#'  mmd <- FSMmmd(Ycont, bsb=c(45, 142, 52, 87))
#'  plot(mmd)
#'
#' @export
#' @author FSDA team, \email{valentin@todorov.at}

##  FSMmmd_wrapper arguments:
##      const emxArray_real_T *Y, const emxArray_real_T *bsb,
##      const emxArray_real_T *bsbsteps,
##      double init, bool msg, bool nocheck
##
##  Return arguments:
##      emxArray_real_T *mmd,       n-init x 2
##      emxArray_real_T *Un,        n-init x 11
##      emxArray_real_T *BB,        n x n-init+1 or n x length(bsbsteps)

FSMmmd <- function(Y, bsb, init, nocheck=FALSE, bsbsteps, msg=TRUE)
{



    Y <- data.matrix(Y)
    if (!is.numeric(Y)) stop("Y is not a numeric matrix")


    n <- nrow(Y)
    p <- ncol(Y)

    ## Here we call chkinputM(), which might change n and p. We take these n and p in
    ##  n1 and p1 and use them whenever preliminary calculations are necessary,
    ##  e.g. to find default values for 'init'.
    ##
    ##  chk <- chkinputM(Y, nochek)
    n1 <- n
    p1 <- p


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
        ##  init <- if(n < 40) p1 + 1 else min(3*p1 + 1, floor(0.5*(n1 + p1 + 1)))
        init <- floor(n1 * 0.6)
    }
    if(init < lbsb)
        init <- lbsb

    ## Here we need to interpret the default value of 'bsbsteps', because
    ##  its length will define the size of the BB matrix which we need to allocate
    if(missing(bsbsteps))
    {
        ## Default for vector bsbsteps which indicates for which steps of the fwd
        ##  search the units forming the subset have to be saved
        bsbsteps <- if(n1 <= 5000) init:n1 else c(init, seq(init + 100 - init %% 100, 100*floor(n/100), 100))
    }
    if(min(bsbsteps) < init)
        warning("FSDA:FSRmdr:WrongInit: It is impossible to monitor the subset for values smaller than init")


    ##  Matrix BB will contain the units forming the subset in each step (or in
    ##  selected steps) of the forward search. The first column contains
    ##  information about the units forming the subset at step init1.
    mmd <- matrix(0, nrow=n1-init, ncol=2)
    Un <- matrix(0, nrow=n1-init, ncol=11)
    BB <- if(length(bsbsteps) == 0) matrix(0, nrow=n1, ncol=n1-init+1)
          else                      matrix(0, nrow=n1, ncol=length(bsbsteps))


    nmmd <- nrow(mmd); pmmd <- ncol(mmd)
    nUn <- nrow(Un); pUn <- ncol(Un)
    nBB <- nrow(BB); pBB <- ncol(BB)



    tmp <- .C('r_fsmmmd',
        Y = if(is.double(Y)) Y else as.double(Y),
        n = as.integer(n),
        p = as.integer(p),
        bsb = if(is.double(bsb)) bsb else as.double(bsb),
        nbsb = as.integer(length(bsb)),
        bsbsteps = if(is.double(bsbsteps)) bsbsteps else as.double(bsbsteps),
        nbsbsteps = as.integer(length(bsbsteps)),
        init = as.double(init),
        msg = as.integer(msg),
        nocheck = as.integer(nocheck),

        mmd = as.double(mmd),
        nmmd = as.integer(nmmd),
        pmmd = as.integer(pmmd),
        Un = as.double(Un),
        nUn = as.integer(nUn),
        pUn = as.integer(pUn),
        BB = as.double(BB),
        nBB = as.integer(nBB),
        pBB = as.integer(pBB),

        NAOK=TRUE,
        PACKAGE="fsdac")

    mmd <- matrix(tmp$mmd[1:(tmp$nmmd*tmp$pmmd)], nrow=tmp$nmmd, ncol=tmp$pmmd)
    Un <- matrix(tmp$Un, nrow=tmp$nUn, ncol=tmp$pUn)
    BB <- matrix(tmp$BB, nrow=tmp$nBB, ncol=tmp$pBB)

    if(tmp$pmmd == 2) {
        dimnames(mmd) <- list(1:nrow(mmd), c("Step", "MMD"))
        dimnames(Un) <- list(1:nrow(Un), c("Step", paste0("Unit", 1:10)))
    } else {
    	message("Singularity issue! The vector 'mmd' does not contain the minimum Mahalanobis distances!\n It contains a list of observations which produce singular matrix.")
    	message(paste("Singularity issue! The vector 'mmd' does not contain the minimum Mahalanobis distances!\n It contains a list of ",
        nrow(tmp$mmd), "observations which produce singular matrix:"))
        print(as.vector(tmp$mmd[1:tmp$nmmd]))
    }
    ans <- list(mmd=mmd, Un=Un, BB=BB)
    class(ans) <- "FSMmmd"
    ans$call <- match.call()

    ans
}

plot.FSMmmd <- function(x, col, xlab, ylab, main, ...) {
    if (!inherits(x, "FSMmmd"))
	   stop("Use only with 'FSMmmd' objects")

    if(ncol(x$mmd) != 2)
	   stop("Singularity issue - the 'FSMmmd' object does not contain the minimum Mahalanobis distances.")

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
