library(rrcov)
data(heart)

y <- heart[, 3, drop=FALSE]
x <- heart[, 1:2]
#rownames(y) <- rownames(heart)
#rownames(x) <- rownames(heart)

##  Missing values in y
##  y[3] <- NA

##  Missing values in y
##  x[3, 1] <- NA
##  x[5, 2] <- NA

##  One constant columns in x
##x <- cbind(x, 1)

##  Several constant columns in x
##x <- cbind(x, 1)
##x <- cbind(x, 10)
##x

chkinputR(y, x)

## y and x are matrices, no dimnames
y1 <- rnorm(11)
x1 <- matrix(rnorm(33), nrow=11)
chkinputR(y1, x1)
