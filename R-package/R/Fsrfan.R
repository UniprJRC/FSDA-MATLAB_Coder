##-------------------------------------------------------------------------------
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#' Monitors the values of the score test statistic for each lambda
#'
#' @description The transformations for negative and positive responses were determined
#'  by Yeo and Johnson (2000) by imposing the smoothness condition that the second
#'  derivative of zYJ (\eqn{\lambda}{lambda}) with respect to y be smooth at y = 0. However some authors,
#'  for example Weisberg (2005), query the physical interpretability of this constraint
#'  which is oftern violated in data analysis. Accordingly, Atkinson et al. (2019) and (2020)
#'  extend the Yeo-Johnson transformation to allow two values of the transformations
#'  parameter: \eqn{\lambda_N} for negative observations and \eqn{\lambda_P} for non-negative ones.
#'
#'  FSRfan monitors:
#'
#'  \enumerate{
#'  \item the t test associated with the constructed variable computed assuming the same transformation
#'      parameter for positive and negative observations fixed. In short we call this test,
#'      "global score test for positive observations".
#'  \item the t test associated with the constructed variable computed assuming a different
#'      transformation for positive observations keeping the value of the transformation parameter
#'      for negative observations fixed. In short we call this test, "test for positive observations".
#'  \item the t test associated with the constructed variable computed assuming a different
#'      transformation for negative observations keeping the value of the transformation parameter
#'      for positive observations fixed. In short we call this test, "test for negative observations".
#'  \item the F test for the joint presence of the two constructed variables described in points 2) and 3).
#'  \item the F likelihood ratio test based on the MLE of \eqn{\lambda_P} and \eqn{\lambda_N}.
#'      In this case the residual sum of squares of the null model bsaed on a single trasnformation
#'      parameter \eqn{\lambda} is compared with the residual sum of squares of the model based
#'      on data transformed data using MLE of \eqn{\lambda_P} and \eqn{\lambda_N}.
#'  }
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
#' @param init Search initialization. It specifies the initial subset size to start monitoring units forming subset.
#'  By default, \code{init=p+1}, if the sample size is smaller than 40 or
#'  \code{init=min(3*p+1, floor(0.5*(n+p+1)))}, otherwise.
#' @param intercept Indicator for the constant term (intercept) in the fit, defaults to \code{intercept=TRUE}.
#' @param family string which identifies the family of transformations which must be used. Possible values are
#'  \code{c('BoxCox', 'YJ', 'YJpn', 'YJall')}. Default is \code{'BoxCox'}. The Box-Cox family of power
#'  transformations equals \eqn{(y^{\lambda}-1)/\lambda} for \eqn{\lambda} not equal to zero, and \eqn{\log(y)}
#'  if \eqn{\lambda = 0}.
#'  The Yeo-Johnson (YJ) transformation is the Box-Cox transformation of \eqn{y+1} for nonnegative values, and of
#'  \eqn{|y|+1} with parameter \eqn{2-\lambda} for \eqn{y} negative. Remember that BoxCox can be used only
#'  if input y is positive. Yeo-Johnson family of transformations does not have this limitation.
#'  If \code{family='YJpn'} Yeo-Johnson family is applied but in this case it is also possible
#'  to monitor (in the output arguments \code{Scorep} and \code{Scoren}) the score test for
#'  positive and negative observations respectively. If \code{family='YJall'}, it is also
#'  possible to monitor the joint F test for the presence of the two constructed variables
#'  for positive and negative observations.
#' @param la a vector with the values of the transformation parameter for which the score test is to be computed.
#'  By default \code{la=c(-1, -0.5, 0, 0.5, 1)}, i.e. the five most common values of lambda.
#' @param lms how to find the initlal subset to initialize the search. If \code{lms=1} (default)
#'  Least Median of Squares (LMS) is computed, else Least Trimmed Squares (LTS) is computed.
#'  If, \code{lms} is matrix of size \code{p - 1 + intercept X length(la)} it contains in column
#'  \code{j=1,..., lenght(la)} the list of units forming the initial subset for the search
#'  associated with \code{la(j)}. In this case the input option \code{nsamp} is ignored.
#' @param alpha the percentage (roughly) of squared residuals whose sum will be minimized,
#'  by default \code{alpha=0.5}. In general, alpha must between 0.5 and 1.
#' @param h The number of observations that have determined the least trimmed squares
#'  estimator,  scalar. \code{h} is an integer greater or equal than \code{p} but smaller
#'  then \code{n}. Generally \code{h=[0.5*(n+p+1)]} (default value).
#' @param nsamp number of subsamples which will be extracted to find the robust estimator. If \code{nsamp=0}
#'  all subsets will be extracted. They will be \code{n choose p}.
#'
#'  Remark: if the number of all possible subset is <1000 the default is to extract all subsets
#'  otherwise just 1000. If \code{nsamp} is a matrix of size \code{r-by-p}, it contains in the rows
#'  the subsets which sill have to be extracted. For example, if \code{p=3} and \code{nsamp=c(2,4,9; 23, 45, 49; 90, 34, 1)}
#'  the first subset is made up of units \code{c(2, 4, 9)}, the second subset of units \code{c(23, 45, 49)}
#'  and the third subset of units \code{c(90 34 1)}.
#' @param msg Level of output to display. It controls whether to display or not messages on the screen.
#'   If \code{msg=TRUE} (default) messages are displayed on the screen about step of the fwd search else
#'  no message is displayed on the screen.
#' @param nocheck Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
#'  matrix \code{y} and matrix \code{X}. Notice that \code{y} and \code{X} are left unchanged. In other words
#'  the additional column of ones for the intercept is not added. By default \code{nocheck=FALSE}.
#'
#' @param trace Whether to print intermediate results. Default is \code{trace=FALSE}.
#'
#' @return  An object of class \code{FSRfan} will be returned which is basically a list
#'  containing the following elements:
#'  \enumerate{
#'  \item \code{la} vector containing the values of lambda for which fan plot is constructed
#'  \item \code{bs} matrix of size \code{p X length(la)} containing the units forming
#'      the initial subset for each value of lambda
#'  \item \code{Score} a matrix containing the values of the score test for
#'      each value of the transformation parameter:
#'      \itemize{
#'      \item 1st col = fwd search index;
#'      \item 2nd col = value of the score test in each step of the fwd search for la[1]
#'      \item ...
#'      }
#'  \item \code{Scorep} matrix containing the values of the score test for positive
#'      observations for each value of the transformation parameter.
#'
#'      Note: this output is present only if input option \code{family='YJpn'} or \code{family='YJall'}.
#'
#'  \item \code{Scoren} matrix containing the values of the score test for negative observations
#'      for each value of the transformation parameter.
#'
#'      Note: this output is present only if input option 'family' is 'YJpn' or 'YJall'.
#'
#'  \item \code{Scoreb} matrix containing the values of the score test for the joint
#'      presence of both constructed variables (associated with positive and negative
#'      observations) for each value of the transformation parameter. In this case
#'      the reference distribution is the \eqn{F} with 2 and \code{subset_size - p}
#'      degrees of freedom.
#'
#'      Note: this output is present only if input option \code{family='YJall'}.
#'
#'  \item \code{Un} a three-dimensional array containing \code{length(la)} matrices of
#'      size \code{retnUn=(n-init) X retpUn=11}. Each matrix contains
#'      the unit(s) included in the subset at each step in the search associated
#'      with the corresponding element of \code{la}.
#'
#'      REMARK: at each step the new subset is compared with the old subset.
#'      \code{Un} contains the unit(s) present in the new subset but not in the old one.
#'  }
#'
#' @references
#'  Atkinson, A.C. and Riani, M. (2000), \emph{Robust Diagnostic Regression Analysis} Springer Verlag, New York.
#'
#'  Atkinson, A.C. and Riani, M. (2002), Tests in the fan plot for robust, diagnostic transformations in regression,
#'      \emph{Chemometrics and Intelligent Laboratory Systems}, \bold{60}, pp. 87--100.
#'
#'  Atkinson, A.C. Riani, M. and  Corbellini A. (2019), The analysis of transformations for profit-and-loss data,
#'      \emph{Journal of the Royal Statistical Society, Series C, "Applied Statistics"}, \bold{69}, pp. 251--275.
#'      \doi{10.1111/rssc.12389}
#'
#'  Atkinson, A.C. Riani, M. and Corbellini A. (2021), The Box-Cox Transformation: Review and Extensions,
#'      \emph{Statistical Science}, \bold{36}(2), pp. 239--255. \doi{10.1214/20-STS778}.
#'
#' @examples
#'
#'    data(wool)
#'    XX <- wool
#'    y <- XX[, ncol(XX)]
#'    X <- XX[, 1:(ncol(XX)-1), drop=FALSE]
#'
#'    out <- FSRfan(y, X)                    # call 'FSRfan' with all default parameters
#'
#' @export
#' @author FSDA team, \email{valentin.todorov@@chello.at}

FSRfan <- function(y, x, intercept=TRUE, family=c("BoxCox", "YJ", "YJpn", "YJall"), la, lms,
    alpha=0.75, h, nsamp=1000, init,  msg=TRUE, nocheck=FALSE,
    trace)
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

    family <- match.arg(family)

    ## Default value of lambda is la=c(-1, -0.5, 0, 0.5, 1), these are the five most common values of lambda
    if(missing(la))
        la <- c(-1, -0.5, 0, 0.5, 1)

    ## If lms is 1 (default) LMS is computed, else LTS is computed.
    ##  If, lms is matrix with size  p - 1 + intercept - by - length(la)
    ##  it contains in column j=1,..., lenght(la) the list of units forming
    ##  the initial subset for the search associated with la(j). In this last
    ##  case input option nsamp is ignored.
    if(missing(lms))
        lms <- matrix(1., ncol=1, nrow=1)
    else if(length(lms) == 1)
        lms <- matrix(lms, ncol=1, nrow=1)
    else {
        lms <- if(!is.matrix(lms)) as.matrix(lms) else lms
        if(!is.numeric(lms))
            stop("The input parameter 'lms' must be either a number or a numeric matrix!")
        if(ncol(lms) != length(la))
            stop("The number of columns of the input parameter 'lms' must be equal to the length of'la'!")
    }

    ## The default value depends on n and p and init cannot be smaller
    ##  than p+1
    if(missing(init))
    {
        init <- if(n1 < 40) p1 + 1 else min(3*p1 + 1, floor(0.5*(n1 + p1 + 1)))
    }
    if(init < p+1)
    {
        warning("Attention : 'init' should be larger than p+1. It is set to p+2.")
        init <- p + 2
    }

    if(!missing(h))          alpha <- h/n1
    else                     h <- ceiling(alpha*n1)
    if(alpha < 1/2 | alpha > 1)
        stop("'alpha' must be between 0.5 and 1.0!")

    ##  The following output matrices are of size (n-init+1) x length(la)+1

    retn1 <- n1 - init + 1
    retp1 <- length(la) + 1

    ##  Score: a matrix containing the values of the score test for each value of the transformation parameter:
    ##      1st col = fwd search index;
    ##      2nd col = value of the score test in each step of the fwd search for la[1]
    ##      ...
    ##  Scorep: matrix containing the values of the score test for positive observations for each value of the transformation parameter.
    ##      Note: this output is present only if input option 'family' is 'YJpn' or 'YJall'.
    ##  Scoren: matrix containing the values of the score test for negative observations for each value of the transformation parameter.
    ##      Note: this output is present only if input option 'family' is 'YJpn' or 'YJall'.
    ##  Scoreb: matrix containing the values of the score test for the joint presence of both
    ##      constructed variables (associated with positive and negative observations) for
    ##      each value of the transformation parameter. In this case the reference distribution
    ##      is the $F$ with 2 and subset_size-p degrees of freedom.
    ##      Note: this output is present only if input option 'family' is 'YJall'.
    ##
    ##

    Score <- matrix(0., nrow=retn1, ncol=retp1)
    Scorep <- matrix(0., nrow=retn1, ncol=retp1)
    Scoren <- matrix(0., nrow=retn1, ncol=retp1)
    Scoreb <- matrix(0., nrow=retn1, ncol=retp1)

    ##  la: a vector containing the values of lambda for which fan plot is constructed
    ##  bs: a matrix of size p x length(la) containing the units forming the initial subset for each value of lambda
    bs <- matrix(0., nrow=p1, ncol=length(la))

    ##  Un: a three-dimensional array containing length(la) matrices of size retnUn=(n-init) x retpUn=11.
    ##      Each matrix contains the unit(s) included in the subset at each step in the search associated
    ##      with the corresponding element of la.
    ##      REMARK: at each step the new subset is compared with the old subset. Un contains the unit(s)
    ##      present in the new subset but not in the old one.
    retnUn <- n1-init
    Un <- array(0., dim=c(length(la), retnUn, 11))

    tmp <- .C('r_fsrfan',
        y = if(is.double(y)) y else as.double(y),
        x = if(is.double(x)) x else as.double(x),
        n = as.integer(n),                              # number of rows of X and length of y
        p = as.integer(p),                              # number of variables
        n1 = as.integer(n1),                            # new n, returned by chkinputR()
        p1 = as.integer(p1),                            # new p, returned by chkinputR()

        intercept = as.integer(intercept),
        family = as.character(family),

        la = if(is.double(la)) la else as.double(la),   # input and output
        lla = as.integer(length(la)),
        lms = if(is.double(lms)) lms else as.double(lms),
        nlms = as.integer(nrow(lms)),
        plms = as.integer(ncol(lms)),
        h = as.double(h),
        nsamp = as.double(nsamp),

        init = as.double(init),
        msg = as.integer(msg),
        nocheck = as.integer(nocheck),

        retn1 = as.integer(retn1),                      # number of rows of the returned ScoreX matrices
        retp1 = as.integer(retp1),                      # number of columns of the returned ScoreX matrice
        Score  = as.double(Score),
        Scorep = as.double(Scorep),
        Scoren = as.double(Scoren),
        Scoreb = as.double(Scoreb),

        bs = as.double(bs),
        retnUn = as.integer(retnUn),                    # number of rows of each of the 'lla' matrices of Un
        retpUn = as.integer(11),                        # number of columns of each of the 'lla' matrices of Un
        Un = as.double(Un),

        NAOK=TRUE,
        PACKAGE="fsdac")

    if(n1 != tmp$n1 | p1 != tmp$p1)
        stop("Different dimensions of the matrix X returned: ", tmp$n1, tmp$p1, "instead of", n1, p1)

    Score <- matrix(tmp$Score, nrow=tmp$retn1, ncol=tmp$retp1)
    bs <- matrix(tmp$bs, nrow=tmp$p1, ncol=length(la))
    aUn <- array(tmp$Un, dim=c(tmp$retnUn, tmp$retpUn, length(la)))
    dimnames(aUn) <- list(aUn[,1,1], c("Step", 1:10), la)

    ans <- list(call=match.call(), la=tmp$la, bs=bs, Score=Score, Un=aUn)

    if(family %in% c("YJpn", "YJall")) {
        Scorep <- matrix(tmp$Scorep, nrow=tmp$retn1, ncol=tmp$retp1)
        Scoren <- matrix(tmp$Scoren, nrow=tmp$retn1, ncol=tmp$retp1)
        ans$Scorep <- Scorep
        ans$Scoren <- Scoren

        if(family == "YJall") {
            Scoreb <- matrix(tmp$Scoreb, nrow=tmp$retn1, ncol=tmp$retp1)
            ans$Scoreb <- Scoreb
        }
    }

    class(ans) <- "FSRfan"
    ans
}
