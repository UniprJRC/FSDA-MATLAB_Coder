##  My first R-to-C function
myc <- function(x) {

    stopifnot(is.numeric(x))
    ret <- .C("mycc", x = as.double(x), n = length(x), PACKAGE = "fsdac")
    return(ret$x)
}
