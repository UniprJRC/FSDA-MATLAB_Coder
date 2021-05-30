######
##  VT::17.04.2021
##
##
##  roxygen2::roxygenise("C:/projects/statproj/R/fsdac", load_code=roxygen2:::load_installed)
##
#'
#'
#'
#' Multiple regression data showing the effect of masking (Atkinson and Riani, 2000).
#'
#' There are 60 observations on a response y with the values of three explanatory variables.
#'  The scatter plot matrix of the data shows y increasing with each of x1, x2 and x3.
#'  The plot of residuals against fitted values shows no obvious pattern. However the
#'  FS finds that there are 6 masked outliers.
#'
#' @name multiple_regression
#' @docType data
#' @usage data(multiple_regression)
#' @format A data frame with 60 rows and 4 variables
#' The variables are as follows:
#'
#' \itemize{
#'   \item X1
#'   \item X2
#'   \item X3
#'   \item y
#' }
#'
#'  @references
#'  Atkinson, A. C., and Riani, M. (2000). \emph{Robust Diagnostic Regression Analysis}. Springer-Verlag, New York.
#' @keywords datasets
NULL
#' Fishery data.
#'
#' The fishery data consist of 677 transactions of a fishery product in Europe.
#'  For each transaction the Value in 1000 euro and the quantity in Tons are reported.
#'  Data extracted from monthly aggregates (flows) of trade declarations (Riani et al. 2008).
#'  The dataset is formed by 677 flows of a fishery product imported in the European Union from
#'  a third country in a period of one year. Among the many variables available we provide:
#'  \enumerate{
#'  \item \code{x}: the quantity of the trade flow;
#'  \item \code{y}: the value of the trade flow;
#'  }
#'  By regressing the variable \code{value} against the \code{quantity} one can see that the
#'  dataset is characterized by the presence of a mixture of linear groups, which roughly
#'  correspond to the clusters indicated by the subject matter expert. Riani et al. (2008)
#'  have shown how the FS can estimate such a mixture, allocate the units to the components
#'  of the mixture and identify in the dataset possible outliers, i.e. units that do not
#'  belong to any component. The three identified components are consistent with the clusters
#'  identified by the subject matter experts. The dataset is one among thousands of similar
#'  datasets that have to be analyzed automatically, for which there is no subject matter
#'  classification available.
#'
#' @name fishery
#' @docType data
#' @usage data(fishery)
#' @format A data frame with 677 rows and 2 variables
#'
#' @keywords datasets
NULL
#' Wool data (Box and Cox, 1964)
#'
#' Number of cycles to failure of samples of worsted yarn in a 33 experiment (Box and Cox, 1964).
#'  The wool data give the number of cycles to failure of a worsted yarn under cycles of repeated
#'  loading. The results are from a single 33 factorial experiment. The three factors and their
#'  levels are:
#'  \itemize{
#'  - x1: length of test specimen (25, 30, 35 cm)
#'  - x2: amplitude of loading cycle (8, 9, 10 mm)
#'  - x3: load (40, 45, 50 g).
#'  }
#'  The number of cycles to failure ranges from 90, for the shortest specimen subject to the most
#'  severe conditions, to 3,636 for observation 19 which comes from the longest specimen subjected
#'  to the mildest conditions. In their analysis Box and Cox(1964) recommend that the data be fitted
#'  after the log transformation of y. The FS plots explain the effect of the ordering of the data
#'  during the FS on the estimates of regression coefficients and the error variance and on
#'  a score statistic for transformation of the response.
#'
#' @name wool
#' @docType data
#' @usage data(wool)
#' @format A data frame with 27 rows and 4 variables
#' The variables are as follows:
#'
#' \itemize{
#'   \item length
#'   \item amplitude
#'   \item load
#'   \item cycles
#' }
#'
#'  @references
#'  Atkinson, A. C., and Riani, M. (2000). \emph{Robust Diagnostic Regression Analysis}. Springer-Verlag, New York.
#' @keywords datasets
NULL
