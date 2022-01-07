##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Converts values of minimum Mahalanobis distance into confidence levels
#'
#' @description Computes the theoretical envelopes of Minimum MD outside subset during the search.
#'
#' @param mmd Matrix of distances of dimension \code{n-m0}.
#'            1st col = forward search index
#'            2nd col = minimum Mahalanobis distance.
#' @param v Number of variables.
#'
#' @return  An object of class \code{FSMinvmmd}, will be returned which is basically a list
#'  containing the matrix \code{MMDinvMat} that is a \code{n-init+1 x 3} array containing
#'  information about confidence levels plotted in normal coordinates.
#'  \enumerate{
#'             \item 1st col = fwd search index from \code{init to n-1};
#'             \item 2nd col = confidence level of each value of \code{mmd};
#'             \item 3rd col = confidence level in normal coordinates.
#'             \item 50\% per cent conf level becomes \code{norminv(0.50)=0};
#'             \item 99 per cent conf level becomes \code{norminv(0.99)=2.33}.  
#'}
#' @references
#'
#' Atkinson, A.C. and Riani, M. (2006), Distribution theory and
#' simulations for tests of outliers in regression, "Journal of
#' Computational and Graphical Statistics", Vol. 15, pp. 460-476.
#'
#' Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward
#' search for testing multiple outliers in regression, "Advances in Data
#' Analysis and Classification", Vol. 1, pp. 123-141.
#'
#'
#' @examples
#'
#' library(fsdac)
#'
#' out <- FSMenvmmd(n=100, v=3, prob=c(0.05, 0.5, 0.95), init=9, scaled=FALSE)
#' (FSMinvmmd(mmd=out, v=3, n=100))
#'
#' @export
#' @author FSDA team, \email{valentin.todorov@@chello.at}




FSMinvmmd <- function(mmd, v, n)
{

    n1 <- n
    p <- v



        
    ## Search initialization. The default value depends on n and p
    if(missing(n))
    {
        ##  add 1 to the last ID index
        nn=mmd[nrow(mmd),1]+1;
    }
    

    #  MMDinv (n-m0) x 3 matrix (same num. of rows of input matrix mmd).
    MMDinv <- matrix(0, nrow=nrow(mmd$MMDenv), 3)
    nn1 <-nrow(mmd$MMDenv)
    ppin <- ncol(mmd$MMDenv)
    ppout <- 3
   
    


    tmp <- .C('r_fsminvmmd',
        mmd = as.double(mmd$MMDenv),
        nmmd = as.integer(nn1),
        pmmd = as.integer(ppin),
        v = as.double(v),
        n = as.double(n1),
        MMDinv = as.double(MMDinv),
        nn1 = as.integer(nn1),
        pp1 = as.integer(ppout),
        
        NAOK=TRUE,
        PACKAGE="fsdac")


    MMDinvMat <- matrix(tmp$MMDinv, nrow=tmp$nn1, ncol=tmp$pp1)
    #dimnames(MMDinvMat) <- list(MMDinvMat[,1], c("Step", "Conf. lev.","MMD"))
    
   
    ans <- list(MMDinv=MMDinvMat)
    class(ans) <- "FSMinvmmd"
    ans$call <- match.call()

    ans
}

plot.FSMinvmmd  <- function(x, col, xlab, ylab, main, ...) {
    if (!inherits(x, "FSMinvmmd"))
	   stop("Use only with 'FSMinvmmd' objects")

    if(missing(col))
        col <-"blue"
    if(missing(xlab))
        xlab <- "subset size m"
    if(missing(ylab))
        ylab <- "MMD envelopes"
    if(missing(main))
        main <- ""
 
        plot(x$MMDinv[,1], x$MMDinv[,3], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)


     return(invisible(x))
}
