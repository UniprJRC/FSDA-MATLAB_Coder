library(fsdac)

x <- rnorm(10)
x2 <- myc(x)
identical(x^2, x2)
