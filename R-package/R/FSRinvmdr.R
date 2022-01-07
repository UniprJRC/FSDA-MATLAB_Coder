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
#' @return  An object of class \code{FSRinvmdr}, will be returned which is basically a list
#'  containing the array \code{MDRinvMat} that is a \code{n-init+1 x 3} array containing
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
#' outmdr<-FSRenvmdr(n=100, v=3, prob=c(0.05, 0.5, 0.95), init=9)
#' (FSRinvmdr(mdr=outmdr, p=3, n=100))
#'
#' @export
#' @author FSDA team, \email{valentin.todorov@@chello.at}


FSRinvmdr <- function(mdr, p, n)
{

    n1 <- n
    p <- p



        
    ## Search initialization. The default value depends on n and p
    if(missing(n))
    {
        ##  add 1 to the last ID index
        nn=mdr[nrow(mdr),1]+1;
    }
    

    #  MMDinv (n-m0) x 3 matrix (same rows of input matrix mmd).
    MDRinv <- matrix(0, nrow=nrow(mdr$MDRenv), 3)
    nn1 <-nrow(mdr$MDRenv)
    ppin <- ncol(mdr$MDRenv)
    ppout <- 3
   


    tmp <- .C('r_fsrinvmdr',
        mdr = as.double(mdr$MDRenv),
        nmdr = as.integer(nn1),
        pmdr = as.integer(ppin),
        p = as.double(p),
        n = as.double(n),
        MDRinv = as.double(MDRinv),
        nn1 = as.integer(nn1),
        pp1 = as.integer(ppout),
        
        NAOK=TRUE,
        PACKAGE="fsdac")

    
    MDRinvMat <- matrix(tmp$MDRinv, nrow=tmp$nn1, ncol=tmp$pp1)
    #dimnames(MDRinvMat) <- list(MDRinvMat[,1], c("Step", "MDR"))

   
    ans <- list(MDRinv=MDRinvMat)
    class(ans) <- "FSRinvmdr"
    ans$call <- match.call()

    ans
}

plot.FSRinvmdr  <- function(x, col, xlab, ylab, main, ...) {
    if (!inherits(x, "FSRinvmdr"))
	   stop("Use only with 'FSRinvmdr' objects")

    if(missing(col))
        col <-"blue"
    if(missing(xlab))
        xlab <- "subset size m"
    if(missing(ylab))
        ylab <- "FSM envelopes"
    if(missing(main))
        main <- ""
    #plot(x$FSRinv[,"Step"], x$mmd[,"FSR"], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
    plot(x$FSRinv[,1], x$FSRinv[,2], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
    for (i in 3:ncol(x$MDRinv)){
        lines(x$FSRinv[,1], x$FSRinv[,i], type="l", col=col,  xlab=xlab, ylab=ylab, main=main, ...)
    }
    

     return(invisible(x))
}
