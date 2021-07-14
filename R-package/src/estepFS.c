/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * estepFS.c
 *
 * Code generation for function 'estepFS'
 *
 */

/* Include files */
#include "estepFS.h"
#include "blockedSummation.h"
#include "bsxfun.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_estepFS(const emxArray_real_T *log_lh, double *obj,
               emxArray_real_T *varargout1)
{
  emxArray_real_T *density;
  emxArray_real_T *maxll;
  emxArray_real_T *post;
  int k;
  int nx;
  emxInit_real_T(&maxll, 1);
  emxInit_real_T(&post, 2);
  /* estepFS performs e-step for Gaussian mixture distribution */
  /*  */
  /* <a href="matlab: docsearchFS('estepFS')">Link to the help function</a> */
  /*  */
  /*    obj = estepFS(log_lh) returns value of the loglikelihood of mixture
   * model. */
  /*  */
  /*    obj is equal to */
  /*    \begin{equation}\label{mixlik} */
  /*    obj = \log   \left( \prod_{i=1}^n  \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right). */
  /*    \end{equation} */
  /*  */
  /*    or */
  /*  */
  /*    \begin{equation}\label{mixlik} */
  /*    obj =  \sum_{i=1}^n  \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right). */
  /*    \end{equation} */
  /*  */
  /*  */
  /*    k = number of components of the mixture */
  /*    \pi_j = component probabilitites */
  /*    \theta_j = parameters of the j-th component of the mixture */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*        log_lh: n-by-p matrix containing the log of component conditional */
  /*                density weighted by the component probability. */
  /*                log_lh = log( \pi_j \phi (y_i; \; \theta_j)) */
  /*  */
  /*  verLess2016b : bsxfun or implicit expansion. Boolean. */
  /*              If verLess2016b is true, */
  /*              bsxfun inside the procedure is used. */
  /*              If verLess2016b is fase, implicit expansion is used instead of
   */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double% */
  /*   Output: */
  /*  */
  /*          obj  : scalar. Value of the log likelihood (see above) of */
  /*                 mixture models */
  /*  */
  /*   Optional Output: */
  /*  */
  /*    varargout1 : n-by-k matrix containing posterior probabilities */
  /*                 varargout1 i=1, ..., n and j=1, ..., k is the posterior */
  /*                 probability of observation i belonging to component j of */
  /*                 the mixture. */
  /*                 Posterior probabilities are computed as */
  /*                 varargout1(i,j)= exp( log_lh(i,j))/ (\sum_{j=1^k}
   * exp(log_lh(i,j))) */
  /*  */
  /*    varargout2 : n-by-1 vector which contains the contributions */
  /*                 to the loglikelihood of the mixture model of each
   * observation */
  /*                 More precisely, */
  /*                 lodpdf = \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right) */
  /*                        = \log   \left( \sum_{j=1}^k  \exp( \log_lh )
   * \right) */
  /*  */
  /*  */
  /*  */
  /*  DETAILS. Formally a mixture model corresponds to the mixture distribution
   * that */
  /*  represents the probability distribution of observations in the overall */
  /*  population. Mixture models are used */
  /*  to make statistical inferences about the properties of the */
  /*  sub-populations given only observations on the pooled population, without
   */
  /*  sub-population-identity information. */
  /*  Mixture modeling approaches assume that data at hand $y_1, ..., y_n$ in */
  /*  $R^p$ come from a probability distribution with density given by the sum
   * of k components */
  /*  $\sum_{j=1}^k  \pi_j \phi( \cdot, \theta_j)$ */
  /*  with $\phi( \cdot, \theta_j)$ being the */
  /*  $p$-variate  (generally multivariate normal) densities with parameters */
  /*  $\theta_j$, $j=1, \ldots, k$. Generally $\theta_j= (\mu_j, \Sigma_j)$ */
  /*  where $\mu_j$ is the population mean  and   $\Sigma_j$ is the covariance
   */
  /*  matrix for component $j$. */
  /*  \pi_j is the (prior) probability of component j */
  /*  */
  /*  References: */
  /*  */
  /*    McLachlan, G.J.; Peel, D. (2000). Finite Mixture Models. Wiley. ISBN
   * 0-471-00626-2 */
  /*  */
  /*  Copyright 2008-2021. */
  /*  */
  /* <a href="matlab: docsearchFS('estepFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*       Generate two Gaussian normal distributions */
  /*       and do not produce plots: */
  /*         MU1 = [1 2]; */
  /*         SIGMA1 = [2 0; 0 .5]; */
  /*         MU2 = [-3 -5]; */
  /*         SIGMA2 = [1 0; 0 1]; */
  /*         n1=100; */
  /*         n2=200; */
  /*         Y = [mvnrnd(MU1,SIGMA1,n1);mvnrnd(MU2,SIGMA2,n2)]; */
  /*         k=2; */
  /*         PI=[1/3;2/3]; */
  /*         MU=[MU1;MU2]; */
  /*         SIGMA=zeros(2,2,2); */
  /*         SIGMA(:,:,1)=SIGMA1; */
  /*         SIGMA(:,:,2)=SIGMA2; */
  /*         ll=zeros(n1+n2,1); */
  /*             for j=1:k */
  /*                 ll(:,j)= log(PI(j)) +  logmvnpdfFS(Y,MU(j,:),SIGMA(:,:,j));
   */
  /*             end */
  /*         % Compute posterior probabilities */
  /*         [~,postprob]=estepFS(ll,true); */
  /*  */
  /* } */
  /*  Beginning of code */
  f_maximum(log_lh, maxll);
  /*  minus maxll to avoid underflow */
  f_bsxfun(log_lh, maxll, post);
  nx = post->size[0] * post->size[1];
  for (k = 0; k < nx; k++) {
    post->data[k] = exp(post->data[k]);
  }
  emxInit_real_T(&density, 1);
  /*  density is a size(log_lh,1)-by-1 vector which contains the contribution */
  /*  of each observation to the likelihood  (each element is divided by the */
  /*  maximum of each row of input matrix log_lh to avoid overflow) */
  /*  density(i) is \sum_{j=1}^k \pi_j \phi(x_i| \theta_j)     / exp(maxll(i))
   */
  /*  i=1, 2, ..., size(log_lh,1) */
  sum(post, density);
  /* normalize posteriors */
  /*  varargout1 is a size(log_lh,1)-by-p matrix which contains posterior */
  /*  probabilities */
  g_bsxfun(post, density, varargout1);
  /*  logpdf is a size(log_lh,1)-by-1 vector which contains the contributions */
  /*  to the loglikelihood of the mixture model of each observation */
  /*  Note that give that maxll was substracted now it must be added */
  /*  More precisely, */
  /*  lodpdf = \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \; \theta_j)
   * \right) */
  nx = density->size[0];
  emxFree_real_T(&post);
  for (k = 0; k < nx; k++) {
    density->data[k] = log(density->data[k]);
  }
  nx = density->size[0];
  for (k = 0; k < nx; k++) {
    density->data[k] += maxll->data[k];
  }
  emxFree_real_T(&maxll);
  /*  obj is the value of the loglikelihood of the mixture model */
  /*  obj = \sum_{i=1}^n logpdf_i */
  *obj = blockedSummation(density, density->size[0]);
  emxFree_real_T(&density);
}

double c_estepFS(const emxArray_real_T *log_lh)
{
  emxArray_real_T *logpdf;
  emxArray_real_T *maxll;
  emxArray_real_T *post;
  double obj;
  int k;
  int nx;
  emxInit_real_T(&maxll, 1);
  emxInit_real_T(&post, 2);
  /* estepFS performs e-step for Gaussian mixture distribution */
  /*  */
  /* <a href="matlab: docsearchFS('estepFS')">Link to the help function</a> */
  /*  */
  /*    obj = estepFS(log_lh) returns value of the loglikelihood of mixture
   * model. */
  /*  */
  /*    obj is equal to */
  /*    \begin{equation}\label{mixlik} */
  /*    obj = \log   \left( \prod_{i=1}^n  \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right). */
  /*    \end{equation} */
  /*  */
  /*    or */
  /*  */
  /*    \begin{equation}\label{mixlik} */
  /*    obj =  \sum_{i=1}^n  \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right). */
  /*    \end{equation} */
  /*  */
  /*  */
  /*    k = number of components of the mixture */
  /*    \pi_j = component probabilitites */
  /*    \theta_j = parameters of the j-th component of the mixture */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*        log_lh: n-by-p matrix containing the log of component conditional */
  /*                density weighted by the component probability. */
  /*                log_lh = log( \pi_j \phi (y_i; \; \theta_j)) */
  /*  */
  /*  verLess2016b : bsxfun or implicit expansion. Boolean. */
  /*              If verLess2016b is true, */
  /*              bsxfun inside the procedure is used. */
  /*              If verLess2016b is fase, implicit expansion is used instead of
   */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double% */
  /*   Output: */
  /*  */
  /*          obj  : scalar. Value of the log likelihood (see above) of */
  /*                 mixture models */
  /*  */
  /*   Optional Output: */
  /*  */
  /*    varargout1 : n-by-k matrix containing posterior probabilities */
  /*                 varargout1 i=1, ..., n and j=1, ..., k is the posterior */
  /*                 probability of observation i belonging to component j of */
  /*                 the mixture. */
  /*                 Posterior probabilities are computed as */
  /*                 varargout1(i,j)= exp( log_lh(i,j))/ (\sum_{j=1^k}
   * exp(log_lh(i,j))) */
  /*  */
  /*    varargout2 : n-by-1 vector which contains the contributions */
  /*                 to the loglikelihood of the mixture model of each
   * observation */
  /*                 More precisely, */
  /*                 lodpdf = \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right) */
  /*                        = \log   \left( \sum_{j=1}^k  \exp( \log_lh )
   * \right) */
  /*  */
  /*  */
  /*  */
  /*  DETAILS. Formally a mixture model corresponds to the mixture distribution
   * that */
  /*  represents the probability distribution of observations in the overall */
  /*  population. Mixture models are used */
  /*  to make statistical inferences about the properties of the */
  /*  sub-populations given only observations on the pooled population, without
   */
  /*  sub-population-identity information. */
  /*  Mixture modeling approaches assume that data at hand $y_1, ..., y_n$ in */
  /*  $R^p$ come from a probability distribution with density given by the sum
   * of k components */
  /*  $\sum_{j=1}^k  \pi_j \phi( \cdot, \theta_j)$ */
  /*  with $\phi( \cdot, \theta_j)$ being the */
  /*  $p$-variate  (generally multivariate normal) densities with parameters */
  /*  $\theta_j$, $j=1, \ldots, k$. Generally $\theta_j= (\mu_j, \Sigma_j)$ */
  /*  where $\mu_j$ is the population mean  and   $\Sigma_j$ is the covariance
   */
  /*  matrix for component $j$. */
  /*  \pi_j is the (prior) probability of component j */
  /*  */
  /*  References: */
  /*  */
  /*    McLachlan, G.J.; Peel, D. (2000). Finite Mixture Models. Wiley. ISBN
   * 0-471-00626-2 */
  /*  */
  /*  Copyright 2008-2021. */
  /*  */
  /* <a href="matlab: docsearchFS('estepFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*       Generate two Gaussian normal distributions */
  /*       and do not produce plots: */
  /*         MU1 = [1 2]; */
  /*         SIGMA1 = [2 0; 0 .5]; */
  /*         MU2 = [-3 -5]; */
  /*         SIGMA2 = [1 0; 0 1]; */
  /*         n1=100; */
  /*         n2=200; */
  /*         Y = [mvnrnd(MU1,SIGMA1,n1);mvnrnd(MU2,SIGMA2,n2)]; */
  /*         k=2; */
  /*         PI=[1/3;2/3]; */
  /*         MU=[MU1;MU2]; */
  /*         SIGMA=zeros(2,2,2); */
  /*         SIGMA(:,:,1)=SIGMA1; */
  /*         SIGMA(:,:,2)=SIGMA2; */
  /*         ll=zeros(n1+n2,1); */
  /*             for j=1:k */
  /*                 ll(:,j)= log(PI(j)) +  logmvnpdfFS(Y,MU(j,:),SIGMA(:,:,j));
   */
  /*             end */
  /*         % Compute posterior probabilities */
  /*         [~,postprob]=estepFS(ll,true); */
  /*  */
  /* } */
  /*  Beginning of code */
  f_maximum(log_lh, maxll);
  /*  minus maxll to avoid underflow */
  f_bsxfun(log_lh, maxll, post);
  nx = post->size[0] * post->size[1];
  for (k = 0; k < nx; k++) {
    post->data[k] = exp(post->data[k]);
  }
  emxInit_real_T(&logpdf, 1);
  /*  density is a size(log_lh,1)-by-1 vector which contains the contribution */
  /*  of each observation to the likelihood  (each element is divided by the */
  /*  maximum of each row of input matrix log_lh to avoid overflow) */
  /*  density(i) is \sum_{j=1}^k \pi_j \phi(x_i| \theta_j)     / exp(maxll(i))
   */
  /*  i=1, 2, ..., size(log_lh,1) */
  /*  logpdf is a size(log_lh,1)-by-1 vector which contains the contributions */
  /*  to the loglikelihood of the mixture model of each observation */
  /*  Note that give that maxll was substracted now it must be added */
  /*  More precisely, */
  /*  lodpdf = \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \; \theta_j)
   * \right) */
  sum(post, logpdf);
  nx = logpdf->size[0];
  emxFree_real_T(&post);
  for (k = 0; k < nx; k++) {
    logpdf->data[k] = log(logpdf->data[k]);
  }
  nx = logpdf->size[0];
  for (k = 0; k < nx; k++) {
    logpdf->data[k] += maxll->data[k];
  }
  emxFree_real_T(&maxll);
  /*  obj is the value of the loglikelihood of the mixture model */
  /*  obj = \sum_{i=1}^n logpdf_i */
  obj = blockedSummation(logpdf, logpdf->size[0]);
  emxFree_real_T(&logpdf);
  return obj;
}

void estepFS(const emxArray_real_T *log_lh, double *obj,
             emxArray_real_T *varargout1, emxArray_real_T *varargout2)
{
  emxArray_real_T *maxll;
  emxArray_real_T *post;
  int k;
  int nx;
  emxInit_real_T(&maxll, 1);
  emxInit_real_T(&post, 2);
  /* estepFS performs e-step for Gaussian mixture distribution */
  /*  */
  /* <a href="matlab: docsearchFS('estepFS')">Link to the help function</a> */
  /*  */
  /*    obj = estepFS(log_lh) returns value of the loglikelihood of mixture
   * model. */
  /*  */
  /*    obj is equal to */
  /*    \begin{equation}\label{mixlik} */
  /*    obj = \log   \left( \prod_{i=1}^n  \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right). */
  /*    \end{equation} */
  /*  */
  /*    or */
  /*  */
  /*    \begin{equation}\label{mixlik} */
  /*    obj =  \sum_{i=1}^n  \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right). */
  /*    \end{equation} */
  /*  */
  /*  */
  /*    k = number of components of the mixture */
  /*    \pi_j = component probabilitites */
  /*    \theta_j = parameters of the j-th component of the mixture */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*        log_lh: n-by-p matrix containing the log of component conditional */
  /*                density weighted by the component probability. */
  /*                log_lh = log( \pi_j \phi (y_i; \; \theta_j)) */
  /*  */
  /*  verLess2016b : bsxfun or implicit expansion. Boolean. */
  /*              If verLess2016b is true, */
  /*              bsxfun inside the procedure is used. */
  /*              If verLess2016b is fase, implicit expansion is used instead of
   */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double% */
  /*   Output: */
  /*  */
  /*          obj  : scalar. Value of the log likelihood (see above) of */
  /*                 mixture models */
  /*  */
  /*   Optional Output: */
  /*  */
  /*    varargout1 : n-by-k matrix containing posterior probabilities */
  /*                 varargout1 i=1, ..., n and j=1, ..., k is the posterior */
  /*                 probability of observation i belonging to component j of */
  /*                 the mixture. */
  /*                 Posterior probabilities are computed as */
  /*                 varargout1(i,j)= exp( log_lh(i,j))/ (\sum_{j=1^k}
   * exp(log_lh(i,j))) */
  /*  */
  /*    varargout2 : n-by-1 vector which contains the contributions */
  /*                 to the loglikelihood of the mixture model of each
   * observation */
  /*                 More precisely, */
  /*                 lodpdf = \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j)    \right) */
  /*                        = \log   \left( \sum_{j=1}^k  \exp( \log_lh )
   * \right) */
  /*  */
  /*  */
  /*  */
  /*  DETAILS. Formally a mixture model corresponds to the mixture distribution
   * that */
  /*  represents the probability distribution of observations in the overall */
  /*  population. Mixture models are used */
  /*  to make statistical inferences about the properties of the */
  /*  sub-populations given only observations on the pooled population, without
   */
  /*  sub-population-identity information. */
  /*  Mixture modeling approaches assume that data at hand $y_1, ..., y_n$ in */
  /*  $R^p$ come from a probability distribution with density given by the sum
   * of k components */
  /*  $\sum_{j=1}^k  \pi_j \phi( \cdot, \theta_j)$ */
  /*  with $\phi( \cdot, \theta_j)$ being the */
  /*  $p$-variate  (generally multivariate normal) densities with parameters */
  /*  $\theta_j$, $j=1, \ldots, k$. Generally $\theta_j= (\mu_j, \Sigma_j)$ */
  /*  where $\mu_j$ is the population mean  and   $\Sigma_j$ is the covariance
   */
  /*  matrix for component $j$. */
  /*  \pi_j is the (prior) probability of component j */
  /*  */
  /*  References: */
  /*  */
  /*    McLachlan, G.J.; Peel, D. (2000). Finite Mixture Models. Wiley. ISBN
   * 0-471-00626-2 */
  /*  */
  /*  Copyright 2008-2021. */
  /*  */
  /* <a href="matlab: docsearchFS('estepFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*       Generate two Gaussian normal distributions */
  /*       and do not produce plots: */
  /*         MU1 = [1 2]; */
  /*         SIGMA1 = [2 0; 0 .5]; */
  /*         MU2 = [-3 -5]; */
  /*         SIGMA2 = [1 0; 0 1]; */
  /*         n1=100; */
  /*         n2=200; */
  /*         Y = [mvnrnd(MU1,SIGMA1,n1);mvnrnd(MU2,SIGMA2,n2)]; */
  /*         k=2; */
  /*         PI=[1/3;2/3]; */
  /*         MU=[MU1;MU2]; */
  /*         SIGMA=zeros(2,2,2); */
  /*         SIGMA(:,:,1)=SIGMA1; */
  /*         SIGMA(:,:,2)=SIGMA2; */
  /*         ll=zeros(n1+n2,1); */
  /*             for j=1:k */
  /*                 ll(:,j)= log(PI(j)) +  logmvnpdfFS(Y,MU(j,:),SIGMA(:,:,j));
   */
  /*             end */
  /*         % Compute posterior probabilities */
  /*         [~,postprob]=estepFS(ll,true); */
  /*  */
  /* } */
  /*  Beginning of code */
  f_maximum(log_lh, maxll);
  /*  minus maxll to avoid underflow */
  f_bsxfun(log_lh, maxll, post);
  nx = post->size[0] * post->size[1];
  for (k = 0; k < nx; k++) {
    post->data[k] = exp(post->data[k]);
  }
  /*  density is a size(log_lh,1)-by-1 vector which contains the contribution */
  /*  of each observation to the likelihood  (each element is divided by the */
  /*  maximum of each row of input matrix log_lh to avoid overflow) */
  /*  density(i) is \sum_{j=1}^k \pi_j \phi(x_i| \theta_j)     / exp(maxll(i))
   */
  /*  i=1, 2, ..., size(log_lh,1) */
  sum(post, varargout2);
  /* normalize posteriors */
  /*  varargout1 is a size(log_lh,1)-by-p matrix which contains posterior */
  /*  probabilities */
  g_bsxfun(post, varargout2, varargout1);
  /*  logpdf is a size(log_lh,1)-by-1 vector which contains the contributions */
  /*  to the loglikelihood of the mixture model of each observation */
  /*  Note that give that maxll was substracted now it must be added */
  /*  More precisely, */
  /*  lodpdf = \log   \left( \sum_{j=1}^k \pi_j \phi (y_i; \; \theta_j)
   * \right) */
  nx = varargout2->size[0];
  emxFree_real_T(&post);
  for (k = 0; k < nx; k++) {
    varargout2->data[k] = log(varargout2->data[k]);
  }
  nx = varargout2->size[0];
  for (k = 0; k < nx; k++) {
    varargout2->data[k] += maxll->data[k];
  }
  emxFree_real_T(&maxll);
  /*  obj is the value of the loglikelihood of the mixture model */
  /*  obj = \sum_{i=1}^n logpdf_i */
  *obj = blockedSummation(varargout2, varargout2->size[0]);
}

/* End of code generation (estepFS.c) */
