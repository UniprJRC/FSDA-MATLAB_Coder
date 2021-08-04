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
#' Demographic data from the 341 miniciplaities in Emilia Romagna (an Italian region).
#'
#' A data set containing 28 demographic variables for 341 municipalities in Emilia Romagna (an Italian region).
#'
#' @name emilia2001
#' @docType data
#' @usage data(emilia2001)
#' @format A data frame with 341 rows and 28 variables
#' The variables are as follows:
#'
#' \itemize{
#'   \item less10: population aged less than 10
#'   \item more75: population aged more than 75
#'   \item single single-member families
#'   \item divorced": divorsed
#'   \item widows: widows and widowers
#'   \item graduates: population aged more than 25 who are graduates
#'   \item no_education:  of those aged over 6 having no education
#'   \item employed: activity rate
#'   \item unemployed: unemployment rate
#'   \item increase_popul: standardised natural increase in population
#'   \item migration: standardised change in population due to migration
#'   \item birth_92_94: average birth rate over 1992-94
#'   \item fecundity: three-year average birth rate amongst women of child-bearing age
#'   \item houses: occupied houses built since 1982
#'   \item houses_2WCs: occupied houses with 2 or more WCs
#'   \item houses_heating: occupied houses with fixed heating system
#'   \item TV: TV licence holders
#'   \item cars: number of cars for 100 inhabitants
#'   \item luxury_cars: luxury cars
#'   \item hotels: working in hotels and restaurants
#'   \item banking: working in banking and finance
#'   \item income: average declared income amongst those filing income tax returns
#'   \item income_tax_returns: inhabitants filing income tax returns
#'   \item factories: residents employed in factories and public services
#'   \item factories_more10: employees employed in factories withy more tha 10 employees
#'   \item factories_more50: employees employed in factories withy more tha 50 employees
#'   \item artisanal: artisanal enterprises
#'   \item entrepreneurs: enterpreneous and skilled self-employed among those of working age
#' }
#'
#'  @references
#'  Atkinson, A. C., Riani, M., and Cerioli, A. (2004). \emph{Exploring Multivariate Data with the Forward Search}. Springer-Verlag, New York.
#' @keywords datasets
NULL
#' Old Faithful Geyser Data.
#'
#' A bivariate data set obtained from the Old Faithful Geyser, containing the eruption
#'  length and the length of the previous eruption for 271 eruptions of this geyser in minutes.
#'
#' @name geyser2
#' @docType data
#' @usage data(geyser2)
#' @format A data frame with 271 rows and 2 variables
#' The variables are as follows:
#'
#' \itemize{
#'   \item Eruption length: The eruption length in minutes.
#'   \item Previous eruption length: The length of the previous eruption in minutes.
#' }
#'
#' @references
#'      Garcia-Escudero, L.A., Gordaliza, A. (1999). Robustness properties of k-means and trimmed k-means,
#'      \emph{Journal of the American Statistical Assoc.}, Vol.\strong{94}, No.447, 956-969.
#'
#'      Haerdle, W. (1991). \emph{Smoothing Techniques with Implementation in S}, New York: Springer.
#'
#' @keywords datasets
NULL
#' Mixture M5 Data.
#'
#' A bivariate data set obtained from three normal bivariate distributions with different scales and
#'  proportions 1:2:2. One of the components is strongly overlapping with another one. A 10%% background
#'  noise is added uniformly distributed in a rectangle containing the three normal components and not
#'  strongly overlapping with the three mixture components. A precise description of the M5 data set
#'  can be found in Garcia-Escudero et al. (2008).
#'
#' @name M5data
#' @docType data
#' @usage data(M5data)
#' @format A data frame with 2000 rows and 3 variables
#' The first two columns are the two variables. The last column is the true classification vector where symbol "0" stands for the contaminating data points.
#'
#' @source
#'      Garcia-Escudero, L.A., Gordaliza, A., Matran, C. and Mayo-Iscar, A. (2008). A General Trimming Approach to Robust Cluster Analysis,
#'      \emph{Annals of Statistics}, Vol.\strong{36}, 1324-1345. \doi{10.1214/07-AOS515}.
#'
#' @keywords datasets
NULL
#' Simulated data X.
#'
#' The X dataset has been simulated by Gordaliza, Garcia-Escudero and Mayo-Iscar during the Workshop
#'  ADVANCES IN ROBUST DATA ANALYSIS AND CLUSTERING held in Ispra on October 21st-25th 2013. It is
#'  a bivariate dataset of 200 observations. It presents two parallel components without contamination.
#'
#' @name X
#' @docType data
#' @usage data(X)
#' @format A data frame with 200 rows and 2 variables
#'
#' @keywords datasets
NULL
#' Mussels data.
#'
#'  These data, introduced by Cook and Weisberg (1994), consist of 82 observations on horse mussels from
#'  New Zeland. The variables are shell length, width, height, mass and muscle mass
#'
#' @name mussels
#' @docType data
#' @usage data(mussels)
#' @format A data frame with 82 rows and 5 variables
#'
#' @keywords datasets
NULL
#' Hawkins data.
#'
#'  These data, simulated by Hawkins, consist of 128 observations
#'      and eight explanatory variables \code{(X1, ..., X8)} and one dependent variable, \code{y}.
#'
#' @name hawkins
#' @docType data
#' @usage data(hawkins)
#' @format A data frame with 128 rows and 9 variables
#'
#' @keywords datasets
NULL
#' Forbes' data on air pressure in the Alps and the boiling point of water (Weisberg, 1985).
#'
#' A data set on air pressure in the Alps and the boiling point of water (Weisberg, 1985).
#'  There are 17 observations on the boiling point of water at different pressures, obtained
#'  from measurements at a variety of elevations in the Alps. The purpose of the experiment was
#'  to allow prediction of pressure from boiling point, which is easily measured, and so to
#'  provide an estimate of altitude: the higher the altitude, the lower the pressure.
#'  The dataset is characterized by one clear outlier.
#'
#' @name forbes
#' @docType data
#' @usage data(forbes)
#' @format A data frame with 17 rows and 2 variables
#' The variables are as follows:
#'
#' \itemize{
#'   \item x: boiling point
#'   \item y: 100 x log(pressure)
#' }
#'
#' @references
#'  Weisberg, S. (1985). \emph{Applied Linear Regression}. Wiley, New York.
#'
#' @examples
#'  data(forbes)
#'  plot(y~x, data=forbes)
#'  out <- FSRmdr(forbes$y, forbes$x)
#'  head(out$mdr)
#'  plot(out)
#'
#' @keywords datasets
NULL
#' Diabetes data
#'
#' The diabetes dataset, introduced by Reaven and Miller (1979),
#'  consists of 145 observations (patients). For each patient three
#'  measurements are reported: plasma glucose response to oral glucose,
#'  plasma insulin response to oral glucose, degree of insulin resistance.
#'
#' @name diabetes
#' @docType data
#' @usage data(diabetes)
#' @format A data frame with 145 rows and 4 variables
#' The variables are as follows:
#'
#'  \itemize{
#'      \item glucose: Area under plasma glucose curve after a three hour oral glucose tolerance test (OGTT).
#'      \item insulin: Area under plasma insulin curve after a three hour oral glucose tolerance test (OGTT).
#'      \item sspg: Steady state plasma glucose.
#'      \item class: The type of diabete: \code{Normal}, \code{Overt}, and \code{Chemical}.
#'  }
#'
#' @source Reaven, G. M. and Miller, R. G. (1979). An attempt to define the nature of
#'  chemical diabetes using a multidimensional analysis.
#'  \emph{Diabetologia} 16:17-24.
#'
#' @examples
#'  data(diabetes)
#'  head(diabetes)
#'
#' @keywords datasets
NULL
#' Loyalty data
#'
#' The loyalty data consist of 509 observations on the behaviour of
#'  customers with loyalty cards from a supermarket chain in Northern
#'  Italy. The response \code{y} is the amount in euros spent at the
#'  shop over six months and the explanatory variables are:
#'  X1, the number of visits to the supermarket in the six month period;
#'  X2, the age of the customer;
#'  X3, the number of members of the customers' family.
#'  To find out more about this data set please see Atkinson and Riani (2006), JCGS
#'
#' @name loyalty
#' @docType data
#' @usage data(loyalty)
#' @format A data frame with 509 rows and 4 variables
#' The variables are as follows:
#'
#'  \itemize{
#'      \item \code{visits}: the number of visits to the supermarket in the six month period
#'      \item \code{age}: the age of the customer
#'      \item \code{family}: the number of members of the customers' family
#'      \item \code{amount_spent}: he amount in euros spent at the shop over six months
#'  }
#'
#' @source The data are themselves a random sample from a larger database. The sample of 509
#'  observations is available at \url{http://www.riani.it/trimmed/}.
#'
#' @references Atkinson, A. and Riani, M (2006) Distribution Theory and Simulations for Tests of
#'  Outliers in Regression, \emph{Journal of Computational and Graphical Statistics}, \bold{15} 2, pp 460--476.
#'
#' @examples
#'  data(loyalty)
#'  head(loyalty)
#'
#' @keywords datasets
NULL
#' Swiss banknote data
#'
#' Six variables measured on 100 genuine and 100 counterfeit
#'  old (printed before the second world war) Swiss 1000-franc bank notes
#'  (Flury and Riedwyl, 1988).
#'
#' @name swissbanknotes
#' @docType data
#' @usage data(swissbanknotes)
#' @format A data frame with 200 rows and 7 variables
#' The variables are as follows:
#'
#'  \itemize{
#'      \item \code{length}: Length of bill, mm
#'      \item \code{left}: Width of left edge, mm
#'      \item \code{right}: Width of right edge, mm
#'      \item \code{bottom}: Bottom margin width, mm
#'      \item \code{top}: Top margin width, mm
#'      \item \code{diagonal}: Length of image diagonal, mm
#'      \item \code{class}: 1 = genuine, 2 = counterfeit
#'  }
#'
#' @source Flury, B. and Riedwyl, H. (1988). \emph{Multivariate Statistics: A practical approach.} London: Chapman & Hall.
#' @references Weisberg, S. (2005).  \emph{Applied Linear Regression}, 3rd edition. New York: Wiley, Problem 12.5.
#'
#' @examples
#'  data(swissbanknotes)
#'  head(swissbanknotes)
#'
#' @keywords datasets
NULL
#' Swiss heads data
#'
#' Six dimensions in millimetres of the heads of 200 twenty year old Swiss soldiers (Flury and Riedwyl,
#'  1988, p. 218 and also Flury, 1997, p. 6).
#'
#'  The data were collected to determine the variability in size and shape
#'  of heads of young men in order to help in the design of a new protection
#'  mask for the Swiss army.
#'
#' @name swissheads
#' @docType data
#' @usage data(swissheads)
#' @format A data frame with 200 rows and 6 variables
#' The variables are as follows:
#'
#'  \itemize{
#'      \item \code{minimal_frontal_breadth}: Minimal frontal breadth, mm
#'      \item \code{breadth_angulus_mandibulae}: Breadth of angulus mandibulae, mm
#'      \item \code{true_facial_height}: True facial height, mm
#'      \item \code{length_glabella_nasi}: Length from glabella to apex nasi, mm
#'      \item \code{length_tragion_nasion}: Length from tragion to nasion, mm
#'      \item \code{length_tragion_gnathion}: Length from tragion to gnathion, mm
#'  }
#'
#' @source Flury, B. and Riedwyl, H. (1988). \emph{Multivariate Statistics: A practical approach.} London: Chapman & Hall.
#' @references Atkinson, A. C., Riani, M. and Cerioli, A. (2004) \emph{Exploring multivariate data with the forward search}, New York: Springer-Verlag.
#'
#' @examples
#'  data(swissheads)
#'  head(swissheads)
#'
#' @keywords datasets
NULL
#' Poison
#'
#' The poison data (by Box and Cox, 1964) are about the time to death of animals in a \code{3 x 4}
#'  factorial experiment with four observations at each factor combination. There are no outliers
#'  or influential observations that cannot be reconciled with the greater part of the data by a
#'  suitable transformation.
#'
#' @name poison
#' @docType data
#' @usage data(poison)
#' @format A data frame with 48 rows and 7 variables: six explanatory and one response variable.
#'
#' @source G. E. P. Box and D. R. Cox (1964). An Analysis of Transformations,
#'  \emph{ournal of the Royal Statistical Society. Series B}, \bold{26}2 pp. 211--252.
#'
#' @examples
#'  data(poison)
#'  head(poison)
#'
#' @keywords datasets
NULL
