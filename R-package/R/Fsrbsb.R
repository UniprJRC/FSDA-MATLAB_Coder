## TO DO:
##  1. implement the check for the input parameters, aka chkinputR(). This is important
##      beacuse default values have to be computed already in R (e.g. init) and the output
##      matrices have to be allocated. It will do the following:
##      % 1) If y is a row vector it is transformed in a column vector;
##      % 2) Checks that X is a matrix that has not more than two dimensions;
##      % 3) Checks dimension consistency of X and y;
##      % 4) Removes observations with missing or infinite values from X or y (listwise exclusion);
##      % 5) Adds to matrix X a column of ones if option intercept is 1;
##      % 6) Checks if there are constant columns in matrix X. In other words, if
##          Xj is a generic column of X (excluding the column which contains the
##          intercept) it removes it if max(Xj)=min(Xj) and produces a warning.
##      % 7) Computes final values of n and p after previous operations;
##      % 8) Makes sure than n>=p;
##      % 9) Makes sure that new X is full rank
##
##  2. Replace 'randsample' by a function using the R random number generator
##
##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Returns the units belonging to the subset in each step of the forward search
#'
#' @description Returns the units belonging to the subset in each step of the forward search.
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
#'
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
#' @param bsbsteps It specifies for which steps of the fwd search it is necessary to save the units
#'  forming subset. If \code{bsbsteps=0} we store the units forming the subset in all steps.
#'  If \code{bsbsteps=c()} or omitted, the default is to store the units forming the subset in all steps
#'  if \code{n <= 5000}, else to store the units forming the subset at steps init and steps which are
#'  multiple of 100. For example, as default, if \code{n = 753} and \code{init = 6}, the units forming
#'  the subset are stored for \code{m=init, 100, 200, 300, 400, 500 and 600}.
#' @param trace Whether to print intermediate results. Default is \code{trace=FALSE}.
#'
#' @return  An object of class \code{FSRbsb}, will be returned which is basically a list
#'  containing two matrices, \code{Un} and \code{BB}:
#'  \enumerate{
#'  \item \code{Un} Units included in each step;
#'  \item \code{BB} Units belonging to search in each step or selected steps.
#'  }
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
#' @references
#'       Atkinson A.C., Riani M. and Cerioli A. (2004), \emph{Exploring multivariate data with the
#'       forward search} Springer Verlag, New York.
#'
#' @examples
#'
#'    data(fishery)
#'
#'    y <- fishery[,2, drop=FALSE]
#'    X <- fishery[,1, drop=FALSE]
#'    bsb <- c(7, 431)                    # found by LTS
#'
#'    out <- FSRbsb(y, X, bsb)            # call 'FSRbsb' with all default parameters
#'
#' @export
#' @author FSDA team, \email{valentin.todorov@@chello.at}

FSRbsb <- function(y, x, bsb, init, intercept=TRUE, nocheck=FALSE, bsbsteps, msg=TRUE, trace)
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


    ## If missing bsb, a random sample of p observations will be chosen
    ##  - therefore ste the length of bsb to p, if missing, it will be used for init.
    if(missing(bsb))
    {
        bsb <- 0
        lbsb <- p1
    } else
    {   bsb <- as.double(bsb)
        lbsb <- length(bsb)
    }

    ## The default value depends on n and p and init cannot be smaller
    ##  than the length of bsb
    if(missing(init))
    {
        init <- if(n < 40) p1 + 1 else min(3*p1 + 1, floor(0.5*(n1 + p1 + 1)))
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
        warning("FSDA:FSRbsb:WrongInit: It is impossible to monitor the subset for values smaller than init")

    ##  Matrix BB will contain the units forming the subset in each step (or in
    ##  selected steps) of the forward search. The first column contains
    ##  information about the units forming the subset at step init1.
    Un <- matrix(0, nrow=n1-init, ncol=11)
    BB <- if(length(bsbsteps) == 0) matrix(0, nrow=n1, ncol=n1-init+1)
          else                      matrix(0, nrow=n1, ncol=length(bsbsteps))
    nUn <- nrow(Un); pUn <- ncol(Un)
    nBB <- nrow(BB); pBB <- ncol(BB)

    tmp <- .C('r_fsrbsb',
        y = if(is.double(y)) y else as.double(y),
        x = if(is.double(x)) x else as.double(x),
        n = as.integer(n),
        p = as.integer(p),
        bsb = if(is.double(bsb)) bsb else as.double(bsb),
        nbsb = as.integer(length(bsb)),
        bsbsteps = if(is.double(bsbsteps)) bsbsteps else as.double(bsbsteps),
        nbsbsteps = as.integer(length(bsbsteps)),
        init = as.double(init),
        intercept = as.integer(intercept),
        msg = as.integer(msg),
        nocheck = as.integer(nocheck),

        Un = as.double(Un),
        nUn = as.integer(nUn),
        pUn = as.integer(pUn),
        BB = as.double(BB),
        nBB = as.integer(nBB),
        pBB = as.integer(pBB),

        NAOK=TRUE,
        PACKAGE="fsdac")

    Un <- matrix(tmp$Un, nrow=tmp$nUn, ncol=tmp$pUn)
    BB <- matrix(tmp$BB, nrow=tmp$nBB, ncol=tmp$pBB)

    ans <- list(Un=Un, BB=BB)
    class(ans) <- "FSRbsb"
    ans
}
