
<!-- README.md is generated from README.Rmd. Please edit that file -->

# fsdac

This is a package to demonstrate the development of an R package using
native C code generated by the MATLAB Coder. The function translated so
far and included in the package are: addt(), FSR(), LXS(), FSRfan(),
FSRbsb().

## Installation

You can install ‘fsdac’ from github with:

``` r
# install.packages("remotes")
remotes::install_github("UniprJRC/FSDA-MATLAB_Coder", subdir="R-package")
```

## Example

This is a basic example which shows you if the package is properly
installed:

``` r
library(fsdac)
##  FSR with all default options =================================
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
#> Signal in final part of the search: step 195 because
#> rmin(195,200)>99.9% and rmin(196,200)>99.9% and rmin(194,200)>99%
#> rmin(195,200)>99% at final step: Bonferroni signal in the final part of the search.
#> rmin(195,200)>99.999%
#> ------------------------------------------------
#> -------------------
#> 
#> Call:
#> FSR(y = ycont, x = X)
#> 
#> Coefficients:
#> [1]  -0.063295   0.114162   0.008352   0.049730
#> 
#> Scale estimate 0.989
```