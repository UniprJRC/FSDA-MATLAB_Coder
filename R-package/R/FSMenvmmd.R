##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Computes the theoretical envelopes of Minimum MD outside subset during the search
#'
#' @description Computes the theoretical envelopes of Minimum MD outside subset during the search.
#'
#' @param n Number of observations.
#' @param v Number of variables.
#' @param init Search initialization. It specifies the point where to initialize the search and start
#'  monitoring required diagnostics. If it is not specified by default it will be equal to \code{floor(n * 0.6)}.
#' @param prob row vector of \code{k} quantiles for which envelopes have to be computed. 
#'  The default is to produce 1 per cent, 50 per cent and 99 per cent envelopes.
#' @param scaled It indicates how to compute the envelopes. Boolean.
#'               If \code{scaled=TRUE} the envelopes are produced for
#'               scaled Mahalanobis distances (no consistency factor is applied) else the traditional 
#'               consistency factor is applied (this is the default).
#'
#' @return  An object of class \code{FSMenvmmd}, will be returned which is basically a list
#'  containing the matrix \code{MMDenv} that is a \code{n-init+1 x length(prob)+1} array containing the envelopes
#'               for the requested quantiles.
#'  \enumerate{
#'             \item 1st col = fwd search index from \code{init to n-1};
#'             \item 2nd col = envelope for quantile \code{prob[1]};
#'             \item 3rd col = envelope for quantile \code{prob[2]};
#'             \item ...;
#'             \item \code{(k+1)} col = envelope for quantile \code{prob[k]}.  
#'}
#' @references
#'
#'   Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown
#'   number of multivariate outliers, "Journal of the Royal Statistical
#'   Society Series B", Vol. 71, pp. 201-221.
#'
#'
#' @examples
#'
#' library(fsdac)
#'
#' out<-FSMenvmmd(n=100, v=3, prob=c(0.01, 0.05, 0.5, 0.95, 0.99), init=9, scaled=FALSE)
#' plot(out)
#'
#' @export
#' @author FSDA team, \email{valentin.todorov@@chello.at}

##  FSMmmd_wrapper arguments:
##    double v, double n, double v, double init,
##    const emxArray_real_T *prob, bool scaled,
##    emxArray_real_T *MMDenv
##
##  Return arguments:
##      emxArray_real_T *MMDenv       nrow=n1-init x pprob+1


FSMenvmmd <- function(n, v, init, prob, scaled=FALSE)
{

    n1 <- n
    p <- v



    if(missing(prob))
        prob <- c(0.01, 0.5, 0.99)
    
    pprob <-length(prob)
        
    ## Search initialization. The default value depends on n and p
    if(missing(init))
    {
        ##  init <- if(n < 40) p1 + 1 else min(3*p1 + 1, floor(0.5*(n1 + p1 + 1)))
        init <- floor(n1 * 0.6)
    }
    


    MMDenv <- matrix(0, nrow=n1-init, pprob+1)
    nn1 <-nrow(MMDenv)
    pp1 <-ncol(MMDenv)
   


    tmp <- .C('r_fsmenvmmd',
        nn = as.double(n1),
        vv = as.double(p),
        init = as.double(init),
        prob = as.double(prob),
        pprob = as.integer(pprob),
        scaled = as.integer(scaled),
        MMDenv = as.double(MMDenv),
        nn1 = as.integer(nn1),
        pp1 = as.integer(pp1),
        
        NAOK=TRUE,
        PACKAGE="fsdac")

    
    MMDenvMat <- matrix(tmp$MMDenv, nrow=tmp$nn1, ncol=tmp$pp1)
    #dimnames(MMDenvMat) <- list(MMDenvMat[,1], c("Step", "MMD"))

   
    ans <- list(MMDenv=MMDenvMat)
    class(ans) <- "FSMenvmmd"
    ans$call <- match.call()

    ans
}

plot.FSMenvmmd  <- function(x, col, xlab, ylab, main, ...) {
    if (!inherits(x, "FSMenvmmd"))
	   stop("Use only with 'FSMenvmmd' objects")

    if(missing(col))
        col <-"blue"
    if(missing(xlab))
        xlab <- "subset size m"
    if(missing(ylab))
        ylab <- "FSM envelopes"
    if(missing(main))
        main <- ""
    #plot(x$MMDenv[,"Step"], x$mmd[,"MMD"], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
    plot(x$MMDenv[,1], x$MMDenv[,2], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
    for (i in 3:ncol(x$MMDenv)){
        lines(x$MMDenv[,1], x$MMDenv[,i], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
    }
    

     return(invisible(x))
}
