% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Fsrfan.R
\name{FSRfan}
\alias{FSRfan}
\title{Monitors the values of the score test statistic for each lambda}
\usage{
FSRfan(
  y,
  x,
  intercept = TRUE,
  family = c("BoxCox", "YJ", "YJpn", "YJall"),
  la,
  lms,
  alpha = 0.75,
  h,
  nsamp = 1000,
  init,
  msg = TRUE,
  nocheck = FALSE,
  trace
)
}
\arguments{
\item{y}{A vector with \code{n} elements that contains the response variable.}

\item{x}{An \code{n x p} data matrix (\code{n} observations and \code{p}
 variables) of explanatory variables
 (also called 'regressors') of dimension n x (p-1) where p denotes the number of
 explanatory variables including the intercept.

 Rows of \code{X} represent observations, and columns represent variables. By default,
 there is a constant term in the model, unless you explicitly remove it using input
 option intercept, so do not include a column of 1s in \code{X}.
 Missing values (NaN's)
 and infinite values (Inf's) are allowed, since observations (rows) with missing or
 infinite values will automatically be excluded from the computations.}

\item{intercept}{Indicator for the constant term (intercept) in the fit, defaults to \code{intercept=TRUE}.}

\item{family}{string which identifies the family of transformations which must be used. Possible values are
\code{c('BoxCox', 'YJ', 'YJpn', 'YJall')}. Default is \code{'BoxCox'}. The Box-Cox family of power
transformations equals \eqn{(y^{\lambda}-1)/\lambda} for \eqn{\lambda} not equal to zero, and \eqn{\log(y)}
if \eqn{\lambda = 0}.
The Yeo-Johnson (YJ) transformation is the Box-Cox transformation of \eqn{y+1} for nonnegative values, and of
\eqn{|y|+1} with parameter \eqn{2-\lambda} for \eqn{y} negative. Remember that BoxCox can be used only
if input y is positive. Yeo-Johnson family of transformations does not have this limitation.
If \code{family='YJpn'} Yeo-Johnson family is applied but in this case it is also possible
to monitor (in the output arguments \code{Scorep} and \code{Scoren}) the score test for
positive and negative observations respectively. If \code{family='YJall'}, it is also
possible to monitor the joint F test for the presence of the two constructed variables
for positive and negative observations.}

\item{la}{a vector with the values of the transformation parameter for which the score test is to be computed.
By default \code{la=c(-1, -0.5, 0, 0.5, 1)}, i.e. the five most common values of lambda.}

\item{lms}{how to find the initlal subset to initialize the search. If \code{lms=1} (default)
Least Median of Squares (LMS) is computed, else Least Trimmed Squares (LTS) is computed.
If, \code{lms} is matrix of size \code{p - 1 + intercept X length(la)} it contains in column
\code{j=1,..., lenght(la)} the list of units forming the initial subset for the search
associated with \code{la(j)}. In this case the input option \code{nsamp} is ignored.}

\item{alpha}{the percentage (roughly) of squared residuals whose sum will be minimized,
by default \code{alpha=0.5}. In general, alpha must between 0.5 and 1.}

\item{h}{The number of observations that have determined the least trimmed squares
estimator,  scalar. \code{h} is an integer greater or equal than \code{p} but smaller
then \code{n}. Generally \code{h=[0.5*(n+p+1)]} (default value).}

\item{nsamp}{number of subsamples which will be extracted to find the robust estimator. If \code{nsamp=0}
 all subsets will be extracted. They will be \code{n choose p}.

 Remark: if the number of all possible subset is <1000 the default is to extract all subsets
 otherwise just 1000. If \code{nsamp} is a matrix of size \code{r-by-p}, it contains in the rows
 the subsets which sill have to be extracted. For example, if \code{p=3} and \code{nsamp=c(2,4,9; 23, 45, 49; 90, 34, 1)}
 the first subset is made up of units \code{c(2, 4, 9)}, the second subset of units \code{c(23, 45, 49)}
 and the third subset of units \code{c(90 34 1)}.}

\item{init}{Search initialization. It specifies the initial subset size to start monitoring units forming subset.
By default, \code{init=p+1}, if the sample size is smaller than 40 or
\code{init=min(3*p+1, floor(0.5*(n+p+1)))}, otherwise.}

\item{msg}{Level of output to display. It controls whether to display or not messages on the screen.
 If \code{msg=TRUE} (default) messages are displayed on the screen about step of the fwd search else
no message is displayed on the screen.}

\item{nocheck}{Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
matrix \code{y} and matrix \code{X}. Notice that \code{y} and \code{X} are left unchanged. In other words
the additional column of ones for the intercept is not added. By default \code{nocheck=FALSE}.}

\item{trace}{Whether to print intermediate results. Default is \code{trace=FALSE}.}
}
\value{
An object of class \code{FSRfan} will be returned which is basically a list
 containing the following elements:
 \enumerate{
 \item \code{la} vector containing the values of lambda for which fan plot is constructed
 \item \code{bs} matrix of size \code{p X length(la)} containing the units forming
     the initial subset for each value of lambda
 \item \code{Score} a matrix containing the values of the score test for
     each value of the transformation parameter:
     \itemize{
     \item 1st col = fwd search index;
     \item 2nd col = value of the score test in each step of the fwd search for la[1]
     \item ...
     }
 \item \code{Scorep} matrix containing the values of the score test for positive
     observations for each value of the transformation parameter.

     Note: this output is present only if input option \code{family='YJpn'} or \code{family='YJall'}.

 \item \code{Scoren} matrix containing the values of the score test for negative observations
     for each value of the transformation parameter.

     Note: this output is present only if input option 'family' is 'YJpn' or 'YJall'.

 \item \code{Scoreb} matrix containing the values of the score test for the joint
     presence of both constructed variables (associated with positive and negative
     observations) for each value of the transformation parameter. In this case
     the reference distribution is the \eqn{F} with 2 and \code{subset_size - p}
     degrees of freedom.

     Note: this output is present only if input option \code{family='YJall'}.

 \item \code{Un} a three-dimensional array containing \code{length(la)} matrices of
     size \code{retnUn=(n-init) X retpUn=11}. Each matrix contains
     the unit(s) included in the subset at each step in the search associated
     with the corresponding element of \code{la}.

     REMARK: at each step the new subset is compared with the old subset.
     \code{Un} contains the unit(s) present in the new subset but not in the old one.
 }
}
\description{
The transformations for negative and positive responses were determined
 by Yeo and Johnson (2000) by imposing the smoothness condition that the second
 derivative of zYJ (\eqn{\lambda}{lambda}) with respect to y be smooth at y = 0. However some authors,
 for example Weisberg (2005), query the physical interpretability of this constraint
 which is oftern violated in data analysis. Accordingly, Atkinson et al. (2019) and (2020)
 extend the Yeo-Johnson transformation to allow two values of the transformations
 parameter: \eqn{\lambda_N} for negative observations and \eqn{\lambda_P} for non-negative ones.

 FSRfan monitors:

 \enumerate{
 \item the t test associated with the constructed variable computed assuming the same transformation
     parameter for positive and negative observations fixed. In short we call this test,
     "global score test for positive observations".
 \item the t test associated with the constructed variable computed assuming a different
     transformation for positive observations keeping the value of the transformation parameter
     for negative observations fixed. In short we call this test, "test for positive observations".
 \item the t test associated with the constructed variable computed assuming a different
     transformation for negative observations keeping the value of the transformation parameter
     for positive observations fixed. In short we call this test, "test for negative observations".
 \item the F test for the joint presence of the two constructed variables described in points 2) and 3).
 \item the F likelihood ratio test based on the MLE of \eqn{\lambda_P} and \eqn{\lambda_N}.
     In this case the residual sum of squares of the null model bsaed on a single trasnformation
     parameter \eqn{\lambda} is compared with the residual sum of squares of the model based
     on data transformed data using MLE of \eqn{\lambda_P} and \eqn{\lambda_N}.
 }
}
\examples{

   data(wool)
   XX <- wool
   y <- XX[, ncol(XX)]
   X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

   out <- FSRfan(y, X)                    # call 'FSRfan' with all default parameters

}
\references{
Atkinson, A.C. and Riani, M. (2000), \emph{Robust Diagnostic Regression Analysis} Springer Verlag, New York.

 Atkinson, A.C. and Riani, M. (2002), Tests in the fan plot for robust, diagnostic transformations in regression,
     \emph{Chemometrics and Intelligent Laboratory Systems}, \bold{60}, pp. 87--100.

 Atkinson, A.C. Riani, M. and  Corbellini A. (2019), The analysis of transformations for profit-and-loss data,
     \emph{Journal of the Royal Statistical Society, Series C, "Applied Statistics"}, \bold{69}, pp. 251--275.
     \doi{10.1111/rssc.12389}

 Atkinson, A.C. Riani, M. and Corbellini A. (2021), The Box-Cox Transformation: Review and Extensions,
     \emph{Statistical Science}, \bold{36}(2), pp. 239--255. \doi{10.1214/20-STS778}.
}
\author{
FSDA team, \email{valentin@todorov.at}
}
