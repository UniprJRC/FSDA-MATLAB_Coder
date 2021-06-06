library(fsdac)

data(hbk, package="robustbase")
XX <- hbk
y <- XX[, ncol(XX)]
X <- XX[, 1:(ncol(XX)-1), drop=FALSE]

(out <- FSR(y, X))
out$outliers
out$Un
out$residuals
out$fitted.values

n <- 200
p <- 3
set.seed(123456)
X <- matrix(rnorm(n*p), nrow=n)
##  Uncontaminated data
y <- rnorm(n)
##  Contaminated data
ycont <- y
ycont[1:5] <- ycont[1:5] + 6
(out <- FSR(ycont, X))
out$outliers
out$Un
out$residuals
out$fitted.values

n <- 200
p <- 3
set.seed(1000)
X <- matrix(rnorm(n*p), nrow=n)
y=rnorm(n)
(out <- FSR(y, X, init=60))
out$outliers
out$Un
out$residuals
out$fitted.values
