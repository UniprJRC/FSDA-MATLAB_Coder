% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Fsmbsb.R
\name{FSMbsb}
\alias{FSMbsb}
\title{Returns the units belonging to the subset in each step of the forward search}
\usage{
FSMbsb(X, bsb, init, nocheck = FALSE, bsbsteps, msg = TRUE)
}
\arguments{
\item{X}{A data matrix (\code{n} observations and \code{p} variables) of dimension
\code{n x (p)}. Rows of \code{X} represent observations, and columns represent variables.
Missing values (NA's) and infinite values (Inf's) are allowed, since observations (rows) with missing or
infinite values will automatically be excluded from the computations.}

\item{bsb}{List of the units forming the initial subset.
If \code{bsb = 0} then the procedure starts with \code{p} units randomly chosen
else if \code{bsb} is not 0 the search will start with \code{m0=length(bsb)}.}

\item{init}{Search initialization. It specifies the point where to initialize the search and start
monitoring required diagnostics. If it is not specified by default it will be equal to \code{floor(n * 0.6)}.}

\item{nocheck}{Wheather to check the input arguments. If \code{nocheck=TRUE} no check is performed on
matrix \code{X}. By default \code{nocheck=FALSE}.}

\item{bsbsteps}{It specifies for which steps of the forward search it is necessary to save the units
forming subset. If \code{bsbsteps=0} we store the units forming the subset in all steps.
If \code{bsbsteps=c()} or omitted, the default is to store the units forming the subset in all steps
if \code{n <= 5000}, else to store the units forming the subset at steps \code{init} and steps which are
multiple of 100. For example, as default, if \code{n = 753} and \code{init = 6}, the units forming
the subset are stored for \code{m=init, 100, 200, 300, 400, 500 and 600}.}

\item{msg}{Level of output to display. It controls whether to display or not messages on the screen.
 If \code{msg=TRUE} (default) messages are displayed on the screen about step of the forward search else
no message is displayed on the screen.}
}
\value{
An object of class \code{FSMbsb}, will be returned which is basically a list
 containing two matrices, \code{Un} and \code{BB}:
 \enumerate{
 \item \code{Un} Units included in each step;
 \item \code{BB} Units belonging to search in each step or selected steps.
 }
 \code{Un} is an \code{(n-init) x 11} matrix which
     contains the unit(s) included in the subset at each step of the search.
     REMARK: in every step the new subset is compared with the old subset. \code{Un}
     contains the unit(s) present in the new subset but not in the old one.
     \code{Un[1,2]} for example contains the unit included in step \code{init+1}. \code{Un[nrow(Un), 2]}
     contains the units included in the final step of the search.

   \code{BB} is an \code{n-by-(n-init+1)} or \code{n-by-length(bsbsteps)} matrix which contains the units belonging to the subset at
     each step (or in selected steps as specified by optional vector bsbsteps) of the forward search.
     More precisely:
     \enumerate{
     \item \code{BB[, 1]} contains the units forming the subset in step \code{bsbsteps[1]};
     \item ....;
     \item \code{BB[, ncol(BB)]} contains the units forming the subset in step \code{bsbsteps[length(bsbsteps)]};
     }

     Row 1 of matrix \code{BB} is referred to unit 1;
     ......;
     Row \code{n} of matrix \code{BB} is referred to unit \code{n};

     Units not belonging to subset are denoted with NaN.
}
\description{
Returns the units belonging to the subset in each step of the forward search.
}
\references{
Atkinson A.C., Riani M. and Cerioli A. (2004), \emph{Exploring multivariate data with the
      forward search} Springer Verlag, New York.
}
\author{
FSDA team, \email{valentin@todorov.at}
}
