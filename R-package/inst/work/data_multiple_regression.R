multiple_regression <- read.table("multiple_regression.txt")
colnames(multiple_regression) <- c("X1", "X2", "X3", "y")
rownames(multiple_regression) <- NULL
save(multiple_regression, file="multiple_regression.rda", version=2)
