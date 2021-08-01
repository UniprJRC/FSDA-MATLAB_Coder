chkinputR <- function(y, x, intercept=TRUE)
{
    if(missing(y))
        stop("Response variable 'y' must be provided!")

    dimny <- dimnames(y)
    rownames <- dimny[[1]]
    yn <- if(!is.null(dimny[[2]])) dimny[[2]]
    has.yn <- !is.null(yn)
    if(!has.yn) yn <- "Y"

    dimnx <- dimnames(x)

    y <- data.matrix(y)
    if(!is.numeric(y))
        stop("y is not numeric")
    if(dim(y)[2] != 1)
        stop("y is not one-dimensional")
    colnames(y) <- yn
    rownames(y) <- if(!is.null(rownames)) rownames else 1:nrow(y)

    oneD <- (missing(x) || is.null(x) || NCOL(x) == 0) ## location model - no x
    if(oneD) {
	   x <- matrix(1, nrow(y), 1)
    }
    else { ## x is present
    	if(is.data.frame(x)) {
    	    x <- data.matrix(x)
        } else if (!is.matrix(x))
    	    x <- matrix(x, length(x), 1,
    			dimnames = list(names(x), deparse(substitute(x))))
    }

    dimnx[[2]] <- if(!is.null(dimnx[[2]])) dimnx[[2]] else paste0("V", 1:ncol(x))
    dimnx[[1]] <- if(!is.null(dimnx[[1]])) dimnx[[1]] else 1:nrow(x)
    dimnames(x) <- dimnx

    n <- nrow(x)
    p <- ncol(x)

    if (nrow(x) != nrow(y))
	   stop("Number of observations in x and y not equal")

    ## Observations with missing or infinite values are removed from X and y
    na.x <- !is.finite(rowSums(x))
    na.y <- !is.finite(y)
    ok <- !(na.x | na.y)
    x <- x[ok, , drop = FALSE]
    y <- y[ok, , drop = FALSE]
    dx <- dim(x)
    n1 <- dx[1]
    if(n1 == 0)
	   stop("All observations have missing values!")

    storage.mode(y) <- "double"
    storage.mode(x) <- "double"

    ## Check for constant columns
    if (!oneD) {
        is.const <- function(x) {
            c1 <- range(x)
            c1[1] == c1[2]
        }

        ix <- apply(x, 2, is.const)
    	if((nx <- sum(ix)) > 0)
        {
            msg <- if(nx == 1) paste("There is one constant column, which will be removed:", which(ix))
                   else        paste("There are", nx, "constant column, which will be removed:", paste(which(ix), collapse=","))
    	    warning(msg)
            x <- x[, !ix, drop=FALSE]
        }
    }

    n1 <- nrow(x)
    p <- ncol(x)
    p1 <- p + intercept

    if(n1 < p1)
        stop("Need more observations than variables: n=", n1, "and p=", p1)

    rk=rankMM(x)
    if(rk < p)
        stop("Matrix X is singular")


    list(y=y, x=x, n=n, p=p, n1=n1, p1=p1)
}
