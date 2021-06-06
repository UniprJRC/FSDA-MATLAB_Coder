library(fsdac)

data(hbk, package="robustbase")
XX <- hbk
y <- XX[, ncol(XX)]
X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

(out <- LXS(y, X, alpha=0.5, lms=2, rew=TRUE, intercept=TRUE, msg=FALSE))
out$outliers
out$residuals

##  #1. LXS with default input and output.
##  Compute LMS estimator without reweighting, add intercept to matrix X
n <- 200
p <- 3
set.seed(123456)
X <- matrix(rnorm(n*p), nrow=n)
y <- rnorm(n)
y[1:5] <- y[1:5] + 6
(out <- LXS(y,X, msg=FALSE))
out$outliers
out$residuals

##  #3. LXS with optional output.
##  Generating the C matrix containing the indices of the subsamples
##  extracted for computing the estimate (the so called elemental sets).
n <- 200
p <- 3
set.seed(123456)
X <- matrix(rnorm(n*p), nrow=n)
y <- rnorm(n)
y[1:5] <- y[1:5] + 6
(out <- LXS(y,X, csave=TRUE, msg=FALSE))
out$outliers
out$residuals
