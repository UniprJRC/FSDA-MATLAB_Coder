##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Computes the theoretical envelopes of Minimum Deletion Residual outside subset during the search
#'
#' @description Computes the theoretical envelopes of Minimum Deletion Residual outside subset during the search.
#'
#' @param n Number of observations.
#' @param v Number of variables.
#' @param init Search initialization. It specifies the point where to initialize the search and start
#'  monitoring required diagnostics. If it is not specified by default it will be equal to \code{floor(n * 0.6)}.
#' @param prob row vector of \code{k} quantiles for which envelopes have to be computed. 
#'  The default is to produce 1 per cent, 50 per cent and 99 per cent envelopes.
#'
#' @return  An object of class \code{FSRenvmdr}, will be returned which is basically a list
#'  containing the matrix \code{MDRenv} that is a \code{n-init+1 x length(prob)+1} array containing the envelopes
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
#' Atkinson, A.C. and Riani, M. (2006), Distribution theory and
#' simulations for tests of outliers in regression, "Journal of
#' Computational and Graphical Statistics", Vol. 15, pp. 460-476.
#' Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward
#' search for testing multiple outliers in regression, "Advances in Data
#' Analysis and Classification", Vol. 1, pp. 123-141.
#'
#'
#' @examples
#'
#' library(fsdac)
#'
#' out<-FSRenvmdr(n=100, v=3, prob=c(0.01, 0.05, 0.5, 0.95, 0.99), init=9)
#' plot(out)
#'
#' @export
#' @author FSDA team, \email{valentin.todorov@@chello.at}

##  FSRmdr_wrapper arguments:
##    double v, double n, double v, double init,
##    const emxArray_real_T *prob, bool scaled,
##    emxArray_real_T *MDRenv
##
##  Return arguments:
##      emxArray_real_T *MDRenv       nrow=n1-init x pprob+1


FSRenvmdr <- function(n, v, init, prob)
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
    


    MDRenv <- matrix(0, nrow=n1-init, pprob+1)
    nn1 <-nrow(MDRenv)
    pp1 <-ncol(MDRenv)
   


    tmp <- .C('r_fsrenvmdr',
        nn = as.double(n1),
        vv = as.double(p),
        init = as.double(init),
        prob = as.double(prob),
        pprob = as.integer(pprob),
        MDRenv = as.double(MDRenv),
        nn1 = as.integer(nn1),
        pp1 = as.integer(pp1),
        
        NAOK=TRUE,
        PACKAGE="fsdac")

    
    MDRenvMat <- matrix(tmp$MDRenv, nrow=tmp$nn1, ncol=tmp$pp1)
    #dimnames(MDRenvMat) <- list(MDRenvMat[,1], c("Step", "MMD"))
 
    ans <- list(MDRenv=MDRenvMat)
    class(ans) <- "FSRenvmdr"
    ans$call <- match.call()

    ans
}

plot.FSRenvmdr  <- function(x, col, xlab, ylab, main, ...) {
    if (!inherits(x, "FSRenvmdr"))
	   stop("Use only with 'FSRenvmdr' objects")

    if(missing(col))
        col <-"blue"
    if(missing(xlab))
        xlab <- "subset size m"
    if(missing(ylab))
        ylab <- "FSR envelopes"
    if(missing(main))
        main <- ""
    plot(x$MDRenv[,1], x$MDRenv[,2], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
    for (i in 3:ncol(x$MDRenv)){
        lines(x$MDRenv[,1], x$MDRenv[,i], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
    }
    

     return(invisible(x))
}
