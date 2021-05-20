/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * zscoreFS.c
 *
 * Code generation for function 'zscoreFS'
 *
 */

/* Include files */
#include "zscoreFS.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "median.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "vvarstd.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
void b_zscoreFS(const emxArray_real_T *X, emxArray_real_T *Z, double *mu,
                double *sigma)
{
  emxArray_real_T *b_xsor;
  emxArray_real_T *c;
  emxArray_real_T *dist_xi_xj_sor;
  emxArray_real_T *med_j;
  emxArray_real_T *xbinned;
  emxArray_real_T *xsor;
  double d;
  double d1;
  double ninbins;
  int acoef;
  int b_k;
  int half;
  int i;
  int i1;
  int k;
  int loop_ub;
  int nbins;
  emxInit_real_T(&xsor, 1);
  /* zscoreFS computes (robust) standardized z scores */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /*  */
  /*     X can be a vector of length(n) or data matrix containing n observations
   * on v */
  /*        variables or 3D array of size n-by-v-by-r. */
  /*    Z = zscoreFS(X) returns a centered, scaled version of X, with the same
   * size */
  /*    as X. For vector input X, Z is the vector of z-scores */
  /*  */
  /*       (X-median(X)) ./ (1.4826* mad(X)). */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) returns a centered, scaled version of X, the */
  /*    same size as X using location and scale are specified in input */
  /*    parameters 'loc' and 'scale'. For vector input X, Z is the vector of */
  /*    z-scores */
  /*  */
  /*       (X-location(X)) ./ scale(X). */
  /*  */
  /*    where scaled(X) is the corrected estimator of scale (corrected in the */
  /*    sense that it is multiplied by a coefficient to achieve consistency for
   */
  /*    normally distributed data).   */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) computes robust standardized zscores using the
   */
  /*    estimates of location and scale specified in loc and scale strings. If
   */
  /*    X is a 2D matrix, zscores are computed using loc and scale along each */
  /*    column of X. If X is a 3D array zscores are */
  /*    computed using the location and scale along the first */
  /*    non-singleton dimension. For example if X is n-by-v-by-r (with n>1) and
   */
  /*    loc='median'; n-by-r medians are computed for each of the n rows of X */
  /*    and each third dimension r. */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc) computes standardized zscores using the */
  /*    estimates of location specified in loc and the mad as measure of */
  /*    dispersion. */
  /*  */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X) also returns median(X) in mu and mad in */
  /*    sigma. */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X,loc,scale) also returns the estimates of
   * location */
  /*    in mu and of scale in sigma as specified in loc and scale strings. */
  /*  */
  /*    Z=zscoreFS(X,loc,scale,dim) computes robust standardized zscores along
   */
  /*    the dimension dim of X using the estimates of location and scale */
  /*    specified in loc and scale strings. dim standardizes X by working along
   */
  /*    the dimension dim of X. For example if X is a two dimensional matrix */
  /*    dim=2 (default) standardizes the columns of X else if dim=1 */
  /*    standardizes the rows. If X is a three dimensional dim = 1 standardizes
   */
  /*    the columns, dim =2 standardizes the rows and dim =3 standardizes the */
  /*    third dimension. */
  /*  */
  /*    zscoreFS is an extension of function zscore of statistic toolbox */
  /*    because it enables to specify alternative measures of location and */
  /*    scale. */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*    */
  /*  X :           Input data. Vector or Matrix or 3D array. Vector  of */
  /*                length n or data matrix containing n */
  /*                observations on v variables or 3D array of size */
  /*                n-by-v-by-r. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    loc : location measure to use. 'median' (default) or 'mean'. */
  /*          String which specifies the location measure to use. The default */
  /*          value is 'median'.  */
  /*                Example - 'median' */
  /*                Data Types - character */
  /*  scale : scale measure to use. 'mad' (default) or 'Qn' or 'Sn' or 'std' or
   */
  /*          moddmadp'. */
  /*          String which specifies the dispersion measure to use */
  /*            'mad' is the default. Traditional (corrected) mad is */
  /*            $Me(|x_i-Me(X)|)/norminv(3/4)$; */
  /*            'Qn' first quartile of interpoint distances $|x_i-x_j|$
   * corrected */
  /*            by the consistency factor. See function Qn.m; */
  /*            'Sn' robust Gini's average difference index corrected by the */
  /*            consistency factor. See function Sn.m; */
  /*            'std' Unbiased standard deviations. See function std.m;  */
  /*            'modmadp'. Modified mad where the last letter(s) p of string
   * modmap */
  /*                  is (are) a number converted to string necessary to */
  /*                  compute the modified MAD.  */
  /*        Modified MAD = (order statistic $ceil((n+p-1)/2)$ of $|x_i-Me(X)|$
   */
  /*                  + order statistic $floor((n+p-1)/2+1)$ of $|x_i-Me(X)|)$
   */
  /*                  / $(2 \sigma)$ where $\sigma= */
  /*                  norminv(0.5*((n+p-1)/(2*n)+1))$. */
  /*                   Note that $p$ is different from $v$ (columns of X if X is
   * a */
  /*                   matrix) and must be supplied by the user. */
  /*                    For example if p=5 then the user can supply the string
   * 'modmad5' */
  /*                    as follows.  p=5; modmadp=['modmap' num2str(p)]; */
  /*                Example - 'mad' */
  /*                Data Types - character */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*                Example - 2 */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*  */
  /*  */
  /*   Output:  */
  /*  */
  /*        Z : centered, scaled version of X. Array with the same dimension as
   * input X. */
  /*            Array with the same size as X using location and scale are
   * specified in input */
  /*            parameters 'loc' and 'scale'. For vector input X, Z is the
   * vector of */
  /*             z-scores */
  /*            (X-location(X)) ./ scale(X). */
  /*    mu : location estimate. Scalar, vector or matrix depending on the size
   * of input matrix X. */
  /*            Estimates of location specified in loc input string. */
  /*   sigma : scale estimate. Scalar, vector or matrix depending on the size of
   * input matrix X. */
  /*            Estimates of scale specified in scale input string. */
  /*  */
  /*  See also: zscore, Qn, Sn, MCD, Smult, MMmult, FSM */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples */
  /* { */
  /*     % Scale using medians and mads. */
  /*     % zscoreFS with all default options (that is remove the medians and */
  /*     % divide by mads) */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont); */
  /* } */
  /* { */
  /*     % Scale using mean and mads. */
  /*     % Computes standardized zscores using mean and mads */
  /*     % estimates of location the medians and the measure of dispersion */
  /*     % specified in scale */
  /*     loc='mean' */
  /*     X=randn(10,2); */
  /*     Z=zscoreFS(X,loc,'mad');  */
  /* } */
  /* { */
  /*     % Remove the medians and divide by Qn. */
  /*     n=200; */
  /*     v=1; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont,[],'Qn'); */
  /*     % Alternatively it is possible to use the following sintax */
  /*     [out]=zscoreFS(Ycont,'median','Qn'); */
  /* } */
  /* { */
  /*     % Examples with 3D arrays. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     [out1,Mu,Sigma]=zscoreFS(Ycont,[],'Sn',1); */
  /*     % [out,Mu1,Sigma1]=zscoreFS(Ycont,[],'Sn',1); */
  /* } */
  /* { */
  /*     % Report also location and scale measures which have have been used. */
  /*     % zscoreFS produces the same output as function zscore of statistics */
  /*     % toolbox if centroid is arithmetic mean and scale measure is the */
  /*     % standard deviation */
  /*     X=randn(10,3,6); */
  /*     [Z,mu,sig]=zscoreFS(X,'mean','std',3); */
  /*     [Z1,mu1,sig1]=zscore(X,[],3); */
  /*     if isequal(Z,Z1) + isequal(mu,mu1) + isequal(sig,sig) ==3 */
  /*         disp('Everything is equal') */
  /*     else */
  /*         disp('Equality not reached') */
  /*     end */
  /* } */
  /* { */
  /*     % 3D arrays with dim=1, dim=2 and dim=3. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     scale='Qn'; */
  /*     loc='mean'; */
  /*     dim=2; % work along rows */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(3,:,2)',zscoreFS(Ycont(3,:,2),loc,scale)) */
  /*  */
  /*     scale='Qn'; */
  /*     loc='median'; */
  /*     dim=1; % work along columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(:,2,4),zscoreFS(Ycont(:,2,4),loc,scale)) */
  /*  */
  /*     scale='Sn'; */
  /*     loc='median'; */
  /*     dim=3; % work along third dimension */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(squeeze(Z(7,2,:)),zscoreFS(squeeze(Ycont(7,2,:)),loc,scale)) */
  /* } */
  /* { */
  /*     % Example of use of modmad as a scale measure. */
  /*     p=3; */
  /*     X=randn(100,p); */
  /*     loc='median'; */
  /*     scale=['modmad' num2str(p)]; */
  /*     % Project the data using v vectors    */
  /*     v=10; */
  /*     proj=randn(p,v); */
  /*     Y=X*proj; */
  /*     % Standardize the n projected points using median and modified MAD */
  /*     % Note that Y has v columns but the original matrix X has p columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Y,loc,scale);    */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input is a column  vector */
  half = (int)floor((double)X->size[0] / 2.0);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(xsor, i);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  c_sort(xsor);
  *mu = xsor->data[half];
  if (half << 1 == X->size[0]) {
    /*  Average if even number of elements */
    *mu = (xsor->data[half - 1] + xsor->data[half]) / 2.0;
  }
  /* Sn robust estimator of scale (robust version of Gini's average difference)
   */
  /*  */
  /* <a href="matlab: docsearchFS('Sn')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*   */
  /*     X  :   Input array. Vector | matrix | 3D array. */
  /*            Input array, specified as a vector, matrix, or 3D  array. */
  /*            For vectors, Qn(X) is the scale estimator of the elements in X.
   * For */
  /*            matrices, Qn(X) is a row vector containing the scale estimator
   */
  /*            value of each column.  For 3D arrays, Qn(X) is the robust scale
   */
  /*            estimator of the elements along the first non-singleton
   * dimension */
  /*            of X. */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*   */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*     y  :    robust estimator of scale. Scalar | Vector or 3D array.  */
  /*             Sn(X,dim) takes the robust estimator of scale along the */
  /*             dimension dim of X. */
  /*  */
  /*  More About: */
  /*  */
  /*    For vectors, Sn(X) is the scale estimator of the elements in X. For */
  /*    matrices, Sn(X) is a row vector containing the scale estimator value of
   */
  /*    each column.  For 3D arrays, Sn(X) is the robust scale estimator of the
   */
  /*    elements along the first non-singleton dimension of X. */
  /*  */
  /*    Sn(X,dim) takes the robust estimator along the dimension dim of X. */
  /*  */
  /*    $Sn= cn \times c \times med_i { med_j |x_i-x_j|}$, $i=1,2, ...n$, $j=1,
   * 2, ..., n$. */
  /*    For each $i$ we compute the median of $|x_i-x_j|$, $j=1, 2, ..., n$. */
  /*    This yields $n$ numbers, the median of which gives the final estimate of
   */
  /*    $S_n$. This estimator is the robust version of Gini's average
   * difference, */
  /*    which one would obtain when replacing medians by averages */
  /*    More in detail $Sn = cn \times c \times lomed_i { highmed_j */
  /*    |x_i-x_j|}$, $i=1,2, ...n$, $j=1, 2, ..., n$, where $lomed$ (low */
  /*    median) is $[(n+1)/2]$-th order statistic out of $n$ numbers) and */
  /*    $himed$ (high median) is the $([n/2]+1)$-th order statistic out of the
   */
  /*    $n$ numbers. $c$ is the so called asymptotic consistency factor and is
   */
  /*    equal to 1.1926 while $cn$ is a finite sample correction factor to make
   */
  /*    the estimator unbiased. */
  /*   */
  /*  See also: Qn */
  /*  */
  /*  References: */
  /*  */
  /*  Rousseeuw P.J. and Croux C., (1993), Alternatives to the median absolute
   */
  /*  deviation, "Journal of American Statistical Association", Vol. 88, pp. */
  /*  1273-1283 */
  /*  Croux C. and Rousseeuw P.J. (1992), Time-efficient algorithms for two */
  /*  highly robust estimators of scale, in "Computational Statistics", Volume
   * 1, */
  /*  eds. Y . Dodge and J. Whittaker, Heidelberg: Physika-Verlag, 41 1-428. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('Sn')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* {  */
  /*     %% Sn with all default otpions. */
  /*     X = [1 2 4 4  7; */
  /*          3 4 6 6  8; */
  /*          5 6 8 8  10; */
  /*          5 7 10 12 1500]; */
  /*     y1=Sn(X) */
  /*     y2=Sn(X,2) */
  /* } */
  /*  Beginning of code */
  /*  Input is at least a two dimensional array */
  /*  Input is a matrix  dim=1 compute along columns */
  loop_ub = X->size[0];
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(xsor, i);
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  i = X->size[0] - 1;
  nbins = X->size[0];
  /*  Do binning for big n */
  if (X->size[0] > 10000) {
    emxInit_real_T(&xbinned, 1);
    c_sort(xsor);
    nbins = (int)floor((double)X->size[0] / 10.0);
    i1 = xbinned->size[0];
    xbinned->size[0] = nbins;
    emxEnsureCapacity_real_T(xbinned, i1);
    ninbins = floor((double)X->size[0] / (double)nbins);
    emxInit_real_T(&b_xsor, 1);
    for (half = 0; half < nbins; half++) {
      if (i + 1 == 0) {
        d = 0.0;
      } else {
        d = fmod((double)i + 1.0, nbins);
      }
      if ((d != 0.0) && (half + 1 == nbins)) {
        d = (((double)half + 1.0) - 1.0) * ninbins + 1.0;
        if (d > (double)i + 1.0) {
          i1 = 0;
          acoef = -1;
        } else {
          i1 = (int)d - 1;
          acoef = i;
        }
        loop_ub = acoef - i1;
        acoef = b_xsor->size[0];
        b_xsor->size[0] = loop_ub + 1;
        emxEnsureCapacity_real_T(b_xsor, acoef);
        for (acoef = 0; acoef <= loop_ub; acoef++) {
          b_xsor->data[acoef] = xsor->data[i1 + acoef];
        }
        xbinned->data[half] = median(b_xsor);
      } else {
        d = (((double)half + 1.0) - 1.0) * ninbins + 1.0;
        d1 = ((double)half + 1.0) * ninbins;
        if (d > d1) {
          i1 = 0;
          acoef = 0;
        } else {
          i1 = (int)d - 1;
          acoef = (int)d1;
        }
        loop_ub = acoef - i1;
        acoef = b_xsor->size[0];
        b_xsor->size[0] = loop_ub;
        emxEnsureCapacity_real_T(b_xsor, acoef);
        for (acoef = 0; acoef < loop_ub; acoef++) {
          b_xsor->data[acoef] = xsor->data[i1 + acoef];
        }
        xbinned->data[half] = median(b_xsor);
      }
    }
    emxFree_real_T(&b_xsor);
    i = xsor->size[0];
    xsor->size[0] = xbinned->size[0];
    emxEnsureCapacity_real_T(xsor, i);
    loop_ub = xbinned->size[0];
    for (i = 0; i < loop_ub; i++) {
      xsor->data[i] = xbinned->data[i];
    }
    emxFree_real_T(&xbinned);
    /*  Redefine x with binned x */
    /*  Redefine n with number of bins */
  }
  emxInit_real_T(&c, 2);
  i = c->size[0] * c->size[1];
  c->size[0] = xsor->size[0];
  c->size[1] = xsor->size[0];
  emxEnsureCapacity_real_T(c, i);
  if (xsor->size[0] != 0) {
    half = (xsor->size[0] != 1);
    i = xsor->size[0] - 1;
    for (k = 0; k <= i; k++) {
      loop_ub = half * k;
      acoef = (xsor->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            xsor->data[acoef * b_k] - xsor->data[loop_ub];
      }
    }
  }
  emxInit_real_T(&dist_xi_xj_sor, 2);
  half = c->size[0] * c->size[1];
  i = dist_xi_xj_sor->size[0] * dist_xi_xj_sor->size[1];
  dist_xi_xj_sor->size[0] = c->size[0];
  dist_xi_xj_sor->size[1] = c->size[1];
  emxEnsureCapacity_real_T(dist_xi_xj_sor, i);
  for (k = 0; k < half; k++) {
    dist_xi_xj_sor->data[k] = fabs(c->data[k]);
  }
  emxFree_real_T(&c);
  emxInit_real_T(&med_j, 2);
  e_sort(dist_xi_xj_sor);
  /*  For each i compute the median of |x_i-x_j| that is take di order */
  /*  statistic of rank [(n+1)/2] */
  half = (int)floor(((double)nbins + 1.0) / 2.0);
  loop_ub = dist_xi_xj_sor->size[1];
  i = med_j->size[0] * med_j->size[1];
  med_j->size[0] = 1;
  med_j->size[1] = dist_xi_xj_sor->size[1];
  emxEnsureCapacity_real_T(med_j, i);
  for (i = 0; i < loop_ub; i++) {
    med_j->data[i] =
        dist_xi_xj_sor->data[(half + dist_xi_xj_sor->size[0] * i) - 1];
  }
  emxFree_real_T(&dist_xi_xj_sor);
  d_sort(med_j);
  /*  Multiply the estimator also by cn a finite sample correction */
  /*  factor to make the estimator unbiased for finite samples (see p. 3 */
  /*  of Croux and Rousseeuw, 1992) or */
  /*  http://www.google.it/url?sa=t&rct=j&q=&esrc=s&source=web&cd=1&ved=0CDUQFjAA&url=http%3A%2F%2Fwww.researchgate.net%2Fpublication%2F228595593_Time-efficient_algorithms_for_two_highly_robust_estimators_of_scale%2Ffile%2F79e4150f52c2fcabb0.pdf&ei=ZCE5U_qHIqjU4QTMuIHwAQ&usg=AFQjCNERh4HiLgtkUGF1w4JU1380xhvKhA&bvm=bv.63808443,d.bGE
   */
  ninbins = 1.0;
  switch (nbins) {
  case 2:
    ninbins = 0.743;
    break;
  case 3:
    ninbins = 1.851;
    break;
  case 4:
    ninbins = 0.954;
    break;
  case 5:
    ninbins = 1.351;
    break;
  case 6:
    ninbins = 0.993;
    break;
  case 7:
    ninbins = 1.198;
    break;
  case 8:
    ninbins = 1.005;
    break;
  case 9:
    ninbins = 1.131;
    break;
  default:
    if (nbins == 0) {
      loop_ub = 0;
    } else {
      loop_ub = (int)fmod(nbins, 2.0);
    }
    if (loop_ub == 1.0) {
      ninbins = (double)nbins / ((double)nbins - 0.9);
    }
    break;
  }
  *sigma = ninbins * (1.1926 * med_j->data[(int)floor((double)nbins / 2.0)]);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(xsor, i);
  emxFree_real_T(&med_j);
  if (X->size[0] != 0) {
    acoef = (X->size[0] != 1);
    i = X->size[0] - 1;
    for (k = 0; k <= i; k++) {
      xsor->data[k] = X->data[acoef * k] - *mu;
    }
  }
  i = Z->size[0];
  Z->size[0] = xsor->size[0];
  emxEnsureCapacity_real_T(Z, i);
  if (xsor->size[0] != 0) {
    acoef = (xsor->size[0] != 1);
    i = xsor->size[0] - 1;
    for (k = 0; k <= i; k++) {
      Z->data[k] = xsor->data[acoef * k] / *sigma;
    }
  }
  emxFree_real_T(&xsor);
}

void c_zscoreFS(const emxArray_real_T *X, emxArray_real_T *Z, double *mu,
                double *sigma)
{
  emxArray_real_T *xsor;
  int half;
  int i;
  int loop_ub;
  emxInit_real_T(&xsor, 1);
  /* zscoreFS computes (robust) standardized z scores */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /*  */
  /*     X can be a vector of length(n) or data matrix containing n observations
   * on v */
  /*        variables or 3D array of size n-by-v-by-r. */
  /*    Z = zscoreFS(X) returns a centered, scaled version of X, with the same
   * size */
  /*    as X. For vector input X, Z is the vector of z-scores */
  /*  */
  /*       (X-median(X)) ./ (1.4826* mad(X)). */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) returns a centered, scaled version of X, the */
  /*    same size as X using location and scale are specified in input */
  /*    parameters 'loc' and 'scale'. For vector input X, Z is the vector of */
  /*    z-scores */
  /*  */
  /*       (X-location(X)) ./ scale(X). */
  /*  */
  /*    where scaled(X) is the corrected estimator of scale (corrected in the */
  /*    sense that it is multiplied by a coefficient to achieve consistency for
   */
  /*    normally distributed data).   */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) computes robust standardized zscores using the
   */
  /*    estimates of location and scale specified in loc and scale strings. If
   */
  /*    X is a 2D matrix, zscores are computed using loc and scale along each */
  /*    column of X. If X is a 3D array zscores are */
  /*    computed using the location and scale along the first */
  /*    non-singleton dimension. For example if X is n-by-v-by-r (with n>1) and
   */
  /*    loc='median'; n-by-r medians are computed for each of the n rows of X */
  /*    and each third dimension r. */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc) computes standardized zscores using the */
  /*    estimates of location specified in loc and the mad as measure of */
  /*    dispersion. */
  /*  */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X) also returns median(X) in mu and mad in */
  /*    sigma. */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X,loc,scale) also returns the estimates of
   * location */
  /*    in mu and of scale in sigma as specified in loc and scale strings. */
  /*  */
  /*    Z=zscoreFS(X,loc,scale,dim) computes robust standardized zscores along
   */
  /*    the dimension dim of X using the estimates of location and scale */
  /*    specified in loc and scale strings. dim standardizes X by working along
   */
  /*    the dimension dim of X. For example if X is a two dimensional matrix */
  /*    dim=2 (default) standardizes the columns of X else if dim=1 */
  /*    standardizes the rows. If X is a three dimensional dim = 1 standardizes
   */
  /*    the columns, dim =2 standardizes the rows and dim =3 standardizes the */
  /*    third dimension. */
  /*  */
  /*    zscoreFS is an extension of function zscore of statistic toolbox */
  /*    because it enables to specify alternative measures of location and */
  /*    scale. */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*    */
  /*  X :           Input data. Vector or Matrix or 3D array. Vector  of */
  /*                length n or data matrix containing n */
  /*                observations on v variables or 3D array of size */
  /*                n-by-v-by-r. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    loc : location measure to use. 'median' (default) or 'mean'. */
  /*          String which specifies the location measure to use. The default */
  /*          value is 'median'.  */
  /*                Example - 'median' */
  /*                Data Types - character */
  /*  scale : scale measure to use. 'mad' (default) or 'Qn' or 'Sn' or 'std' or
   */
  /*          moddmadp'. */
  /*          String which specifies the dispersion measure to use */
  /*            'mad' is the default. Traditional (corrected) mad is */
  /*            $Me(|x_i-Me(X)|)/norminv(3/4)$; */
  /*            'Qn' first quartile of interpoint distances $|x_i-x_j|$
   * corrected */
  /*            by the consistency factor. See function Qn.m; */
  /*            'Sn' robust Gini's average difference index corrected by the */
  /*            consistency factor. See function Sn.m; */
  /*            'std' Unbiased standard deviations. See function std.m;  */
  /*            'modmadp'. Modified mad where the last letter(s) p of string
   * modmap */
  /*                  is (are) a number converted to string necessary to */
  /*                  compute the modified MAD.  */
  /*        Modified MAD = (order statistic $ceil((n+p-1)/2)$ of $|x_i-Me(X)|$
   */
  /*                  + order statistic $floor((n+p-1)/2+1)$ of $|x_i-Me(X)|)$
   */
  /*                  / $(2 \sigma)$ where $\sigma= */
  /*                  norminv(0.5*((n+p-1)/(2*n)+1))$. */
  /*                   Note that $p$ is different from $v$ (columns of X if X is
   * a */
  /*                   matrix) and must be supplied by the user. */
  /*                    For example if p=5 then the user can supply the string
   * 'modmad5' */
  /*                    as follows.  p=5; modmadp=['modmap' num2str(p)]; */
  /*                Example - 'mad' */
  /*                Data Types - character */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*                Example - 2 */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*  */
  /*  */
  /*   Output:  */
  /*  */
  /*        Z : centered, scaled version of X. Array with the same dimension as
   * input X. */
  /*            Array with the same size as X using location and scale are
   * specified in input */
  /*            parameters 'loc' and 'scale'. For vector input X, Z is the
   * vector of */
  /*             z-scores */
  /*            (X-location(X)) ./ scale(X). */
  /*    mu : location estimate. Scalar, vector or matrix depending on the size
   * of input matrix X. */
  /*            Estimates of location specified in loc input string. */
  /*   sigma : scale estimate. Scalar, vector or matrix depending on the size of
   * input matrix X. */
  /*            Estimates of scale specified in scale input string. */
  /*  */
  /*  See also: zscore, Qn, Sn, MCD, Smult, MMmult, FSM */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples */
  /* { */
  /*     % Scale using medians and mads. */
  /*     % zscoreFS with all default options (that is remove the medians and */
  /*     % divide by mads) */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont); */
  /* } */
  /* { */
  /*     % Scale using mean and mads. */
  /*     % Computes standardized zscores using mean and mads */
  /*     % estimates of location the medians and the measure of dispersion */
  /*     % specified in scale */
  /*     loc='mean' */
  /*     X=randn(10,2); */
  /*     Z=zscoreFS(X,loc,'mad');  */
  /* } */
  /* { */
  /*     % Remove the medians and divide by Qn. */
  /*     n=200; */
  /*     v=1; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont,[],'Qn'); */
  /*     % Alternatively it is possible to use the following sintax */
  /*     [out]=zscoreFS(Ycont,'median','Qn'); */
  /* } */
  /* { */
  /*     % Examples with 3D arrays. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     [out1,Mu,Sigma]=zscoreFS(Ycont,[],'Sn',1); */
  /*     % [out,Mu1,Sigma1]=zscoreFS(Ycont,[],'Sn',1); */
  /* } */
  /* { */
  /*     % Report also location and scale measures which have have been used. */
  /*     % zscoreFS produces the same output as function zscore of statistics */
  /*     % toolbox if centroid is arithmetic mean and scale measure is the */
  /*     % standard deviation */
  /*     X=randn(10,3,6); */
  /*     [Z,mu,sig]=zscoreFS(X,'mean','std',3); */
  /*     [Z1,mu1,sig1]=zscore(X,[],3); */
  /*     if isequal(Z,Z1) + isequal(mu,mu1) + isequal(sig,sig) ==3 */
  /*         disp('Everything is equal') */
  /*     else */
  /*         disp('Equality not reached') */
  /*     end */
  /* } */
  /* { */
  /*     % 3D arrays with dim=1, dim=2 and dim=3. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     scale='Qn'; */
  /*     loc='mean'; */
  /*     dim=2; % work along rows */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(3,:,2)',zscoreFS(Ycont(3,:,2),loc,scale)) */
  /*  */
  /*     scale='Qn'; */
  /*     loc='median'; */
  /*     dim=1; % work along columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(:,2,4),zscoreFS(Ycont(:,2,4),loc,scale)) */
  /*  */
  /*     scale='Sn'; */
  /*     loc='median'; */
  /*     dim=3; % work along third dimension */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(squeeze(Z(7,2,:)),zscoreFS(squeeze(Ycont(7,2,:)),loc,scale)) */
  /* } */
  /* { */
  /*     % Example of use of modmad as a scale measure. */
  /*     p=3; */
  /*     X=randn(100,p); */
  /*     loc='median'; */
  /*     scale=['modmad' num2str(p)]; */
  /*     % Project the data using v vectors    */
  /*     v=10; */
  /*     proj=randn(p,v); */
  /*     Y=X*proj; */
  /*     % Standardize the n projected points using median and modified MAD */
  /*     % Note that Y has v columns but the original matrix X has p columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Y,loc,scale);    */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input is a column  vector */
  half = (int)floor((double)X->size[0] / 2.0);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(xsor, i);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  c_sort(xsor);
  *mu = xsor->data[half];
  if (half << 1 == X->size[0]) {
    /*  Average if even number of elements */
    *mu = (xsor->data[half - 1] + xsor->data[half]) / 2.0;
  }
  *sigma = vvarstd(X, X->size[0]);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(xsor, i);
  if (X->size[0] != 0) {
    half = (X->size[0] != 1);
    i = X->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      xsor->data[loop_ub] = X->data[half * loop_ub] - *mu;
    }
  }
  i = Z->size[0];
  Z->size[0] = xsor->size[0];
  emxEnsureCapacity_real_T(Z, i);
  if (xsor->size[0] != 0) {
    half = (xsor->size[0] != 1);
    i = xsor->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      Z->data[loop_ub] = xsor->data[half * loop_ub] / *sigma;
    }
  }
  emxFree_real_T(&xsor);
}

void zscoreFS(const emxArray_real_T *X, emxArray_real_T *Z, double *mu,
              double *sigma)
{
  emxArray_boolean_T *logIndX;
  emxArray_real_T *b_xsor;
  emxArray_real_T *distord;
  emxArray_real_T *xbinned;
  emxArray_real_T *xsor;
  double d;
  double d1;
  double ninbins;
  int half;
  int i;
  int i1;
  int i2;
  int ii;
  int loop_ub;
  int nbins;
  int x;
  emxInit_real_T(&xsor, 1);
  /* zscoreFS computes (robust) standardized z scores */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /*  */
  /*     X can be a vector of length(n) or data matrix containing n observations
   * on v */
  /*        variables or 3D array of size n-by-v-by-r. */
  /*    Z = zscoreFS(X) returns a centered, scaled version of X, with the same
   * size */
  /*    as X. For vector input X, Z is the vector of z-scores */
  /*  */
  /*       (X-median(X)) ./ (1.4826* mad(X)). */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) returns a centered, scaled version of X, the */
  /*    same size as X using location and scale are specified in input */
  /*    parameters 'loc' and 'scale'. For vector input X, Z is the vector of */
  /*    z-scores */
  /*  */
  /*       (X-location(X)) ./ scale(X). */
  /*  */
  /*    where scaled(X) is the corrected estimator of scale (corrected in the */
  /*    sense that it is multiplied by a coefficient to achieve consistency for
   */
  /*    normally distributed data).   */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc,scale) computes robust standardized zscores using the
   */
  /*    estimates of location and scale specified in loc and scale strings. If
   */
  /*    X is a 2D matrix, zscores are computed using loc and scale along each */
  /*    column of X. If X is a 3D array zscores are */
  /*    computed using the location and scale along the first */
  /*    non-singleton dimension. For example if X is n-by-v-by-r (with n>1) and
   */
  /*    loc='median'; n-by-r medians are computed for each of the n rows of X */
  /*    and each third dimension r. */
  /*  */
  /*  */
  /*    Z=zscoreFS(X,loc) computes standardized zscores using the */
  /*    estimates of location specified in loc and the mad as measure of */
  /*    dispersion. */
  /*  */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X) also returns median(X) in mu and mad in */
  /*    sigma. */
  /*  */
  /*    [Z,mu,sigma] = zscoreFS(X,loc,scale) also returns the estimates of
   * location */
  /*    in mu and of scale in sigma as specified in loc and scale strings. */
  /*  */
  /*    Z=zscoreFS(X,loc,scale,dim) computes robust standardized zscores along
   */
  /*    the dimension dim of X using the estimates of location and scale */
  /*    specified in loc and scale strings. dim standardizes X by working along
   */
  /*    the dimension dim of X. For example if X is a two dimensional matrix */
  /*    dim=2 (default) standardizes the columns of X else if dim=1 */
  /*    standardizes the rows. If X is a three dimensional dim = 1 standardizes
   */
  /*    the columns, dim =2 standardizes the rows and dim =3 standardizes the */
  /*    third dimension. */
  /*  */
  /*    zscoreFS is an extension of function zscore of statistic toolbox */
  /*    because it enables to specify alternative measures of location and */
  /*    scale. */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*    */
  /*  X :           Input data. Vector or Matrix or 3D array. Vector  of */
  /*                length n or data matrix containing n */
  /*                observations on v variables or 3D array of size */
  /*                n-by-v-by-r. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    loc : location measure to use. 'median' (default) or 'mean'. */
  /*          String which specifies the location measure to use. The default */
  /*          value is 'median'.  */
  /*                Example - 'median' */
  /*                Data Types - character */
  /*  scale : scale measure to use. 'mad' (default) or 'Qn' or 'Sn' or 'std' or
   */
  /*          moddmadp'. */
  /*          String which specifies the dispersion measure to use */
  /*            'mad' is the default. Traditional (corrected) mad is */
  /*            $Me(|x_i-Me(X)|)/norminv(3/4)$; */
  /*            'Qn' first quartile of interpoint distances $|x_i-x_j|$
   * corrected */
  /*            by the consistency factor. See function Qn.m; */
  /*            'Sn' robust Gini's average difference index corrected by the */
  /*            consistency factor. See function Sn.m; */
  /*            'std' Unbiased standard deviations. See function std.m;  */
  /*            'modmadp'. Modified mad where the last letter(s) p of string
   * modmap */
  /*                  is (are) a number converted to string necessary to */
  /*                  compute the modified MAD.  */
  /*        Modified MAD = (order statistic $ceil((n+p-1)/2)$ of $|x_i-Me(X)|$
   */
  /*                  + order statistic $floor((n+p-1)/2+1)$ of $|x_i-Me(X)|)$
   */
  /*                  / $(2 \sigma)$ where $\sigma= */
  /*                  norminv(0.5*((n+p-1)/(2*n)+1))$. */
  /*                   Note that $p$ is different from $v$ (columns of X if X is
   * a */
  /*                   matrix) and must be supplied by the user. */
  /*                    For example if p=5 then the user can supply the string
   * 'modmad5' */
  /*                    as follows.  p=5; modmadp=['modmap' num2str(p)]; */
  /*                Example - 'mad' */
  /*                Data Types - character */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*                Example - 2 */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*  */
  /*  */
  /*   Output:  */
  /*  */
  /*        Z : centered, scaled version of X. Array with the same dimension as
   * input X. */
  /*            Array with the same size as X using location and scale are
   * specified in input */
  /*            parameters 'loc' and 'scale'. For vector input X, Z is the
   * vector of */
  /*             z-scores */
  /*            (X-location(X)) ./ scale(X). */
  /*    mu : location estimate. Scalar, vector or matrix depending on the size
   * of input matrix X. */
  /*            Estimates of location specified in loc input string. */
  /*   sigma : scale estimate. Scalar, vector or matrix depending on the size of
   * input matrix X. */
  /*            Estimates of scale specified in scale input string. */
  /*  */
  /*  See also: zscore, Qn, Sn, MCD, Smult, MMmult, FSM */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('zscoreFS')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples */
  /* { */
  /*     % Scale using medians and mads. */
  /*     % zscoreFS with all default options (that is remove the medians and */
  /*     % divide by mads) */
  /*     n=200; */
  /*     v=3; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont); */
  /* } */
  /* { */
  /*     % Scale using mean and mads. */
  /*     % Computes standardized zscores using mean and mads */
  /*     % estimates of location the medians and the measure of dispersion */
  /*     % specified in scale */
  /*     loc='mean' */
  /*     X=randn(10,2); */
  /*     Z=zscoreFS(X,loc,'mad');  */
  /* } */
  /* { */
  /*     % Remove the medians and divide by Qn. */
  /*     n=200; */
  /*     v=1; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:)=Ycont(1:5,:)+10; */
  /*     [out]=zscoreFS(Ycont,[],'Qn'); */
  /*     % Alternatively it is possible to use the following sintax */
  /*     [out]=zscoreFS(Ycont,'median','Qn'); */
  /* } */
  /* { */
  /*     % Examples with 3D arrays. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     [out1,Mu,Sigma]=zscoreFS(Ycont,[],'Sn',1); */
  /*     % [out,Mu1,Sigma1]=zscoreFS(Ycont,[],'Sn',1); */
  /* } */
  /* { */
  /*     % Report also location and scale measures which have have been used. */
  /*     % zscoreFS produces the same output as function zscore of statistics */
  /*     % toolbox if centroid is arithmetic mean and scale measure is the */
  /*     % standard deviation */
  /*     X=randn(10,3,6); */
  /*     [Z,mu,sig]=zscoreFS(X,'mean','std',3); */
  /*     [Z1,mu1,sig1]=zscore(X,[],3); */
  /*     if isequal(Z,Z1) + isequal(mu,mu1) + isequal(sig,sig) ==3 */
  /*         disp('Everything is equal') */
  /*     else */
  /*         disp('Equality not reached') */
  /*     end */
  /* } */
  /* { */
  /*     % 3D arrays with dim=1, dim=2 and dim=3. */
  /*     n=200; */
  /*     v=3; */
  /*     q=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,v,q); */
  /*     % Contaminated data */
  /*     Ycont=Y; */
  /*     Ycont(1:5,:,:)=Ycont(1:5,:,:)+10; */
  /*     scale='Qn'; */
  /*     loc='mean'; */
  /*     dim=2; % work along rows */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(3,:,2)',zscoreFS(Ycont(3,:,2),loc,scale)) */
  /*  */
  /*     scale='Qn'; */
  /*     loc='median'; */
  /*     dim=1; % work along columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(Z(:,2,4),zscoreFS(Ycont(:,2,4),loc,scale)) */
  /*  */
  /*     scale='Sn'; */
  /*     loc='median'; */
  /*     dim=3; % work along third dimension */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Ycont,loc,scale,dim); */
  /*     isequal(squeeze(Z(7,2,:)),zscoreFS(squeeze(Ycont(7,2,:)),loc,scale)) */
  /* } */
  /* { */
  /*     % Example of use of modmad as a scale measure. */
  /*     p=3; */
  /*     X=randn(100,p); */
  /*     loc='median'; */
  /*     scale=['modmad' num2str(p)]; */
  /*     % Project the data using v vectors    */
  /*     v=10; */
  /*     proj=randn(p,v); */
  /*     Y=X*proj; */
  /*     % Standardize the n projected points using median and modified MAD */
  /*     % Note that Y has v columns but the original matrix X has p columns */
  /*     [Z,Mu1,Sigma1]=zscoreFS(Y,loc,scale);    */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input is a column  vector */
  half = (int)floor((double)X->size[0] / 2.0);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(xsor, i);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  c_sort(xsor);
  *mu = xsor->data[half];
  if (half << 1 == X->size[0]) {
    /*  Average if even number of elements */
    *mu = (xsor->data[half - 1] + xsor->data[half]) / 2.0;
  }
  /* Qn robust estimator of scale (first quartile of interpoint distances
   * $|x_i-x_j|$) */
  /*  */
  /* <a href="matlab: docsearchFS('Qn')">Link to the help function</a> */
  /*  */
  /*  */
  /*  Required input arguments: */
  /*   */
  /*     X  :   Input array. Vector | matrix | 3D array. */
  /*            Input array, specified as a vector, matrix, or 3D  array. */
  /*            For vectors, Qn(X) is the scale estimator of the elements in X.
   * For */
  /*            matrices, Qn(X) is a row vector containing the scale estimator
   */
  /*            value of each column.  For 3D arrays, Qn(X) is the robust scale
   */
  /*            estimator of the elements along the first non-singleton
   * dimension */
  /*            of X. */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*   dim  :   Dimension to operate along. Positive integer scalar.  */
  /*            Dimension to operate along, specified as a positive integer */
  /*            scalar. If no value is specified, then the default is the first
   */
  /*            array dimension whose size does not equal 1. */
  /*            Data Types -single | double | int8 | int16 | int32 | int64
   * |uint8 | uint16 | uint32 | uint64 */
  /*   */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*     y  :    robust estimator of scale. Scalar | Vector or 3D array.  */
  /*             Qn(X,dim) takes the robust estimator of scale along the */
  /*             dimension dim of X. */
  /*  */
  /*  More About: */
  /*  */
  /*    $Q_n$ is the first quartile of the distances { $|x_i-x_j|$; $i <j$} Note
   * that */
  /*    $Q_n$ does not need any location estimate. More in detail, let  */
  /*    $d_{(1)} \leq d_{(2)} \leq ... \leq d_{(m)}$ the ordered values of the
   */
  /*    $m$ */
  /*    differences $|x_i-x_j|$ with $i>j$ and $m = {n \choose 2}$.
   * $Q_n=d_{(k)}$ where */
  /*    $k= {[n/2]+1 \choose 2}$. Since $k$ is approximately $m/4$, $Q_n$ is
   * approximately */
  /*    the first quartile of the ordered distances $d_{(1)} \leq d_{(2)} \leq
   */
  /*    ... \leq d_{(m)}$. $Q_n$ is multiplyed by $c$ and $c_n$.  */
  /*    $c$ is the so called */
  /*    asymptotic consistency factor and is equal to 2.2219 while $c_n$ is a */
  /*    finite sample correction factor to make the estimator unbiased. */
  /*  */
  /*  */
  /*  See also: Sn */
  /*  */
  /*  References: */
  /*  */
  /*  Rousseeuw P.J. and Croux C., (1993), Alternatives to the median absolute
   */
  /*  deviation, "Journal of American Statistical Association", Vol. 88, pp. */
  /*  1273-1283 */
  /*  Croux C. and Rousseeuw P.J.(1992)  Time-efficient algorithms for two */
  /*  highly robust estimators of scale, in "Computational Statistics", Vol. 1,
   */
  /*  eds. Y . Dodge and J. Whittaker, Heidelberg: Physika-Verlag, 41 1-428. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('Qn')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* {  */
  /*     %% Qn with all default otpions. */
  /*     X = [1 2 4 4  7; */
  /*          3 4 6 6  8; */
  /*          5 6 8 8  10; */
  /*          5 7 10 12 1500]; */
  /*     y1=Qn(X) */
  /*     y2=Qn(X,2) */
  /* } */
  /*  Beginning of code */
  /*  Input is at least a two dimensional array */
  /*  Input is a matrix  dim=1 compute along columns */
  loop_ub = X->size[0];
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(xsor, i);
  for (i = 0; i < loop_ub; i++) {
    xsor->data[i] = X->data[i];
  }
  i = X->size[0] - 1;
  nbins = X->size[0];
  /*  Do binning for big n */
  if (X->size[0] > 10000) {
    emxInit_real_T(&xbinned, 1);
    c_sort(xsor);
    nbins = (int)floor((double)X->size[0] / 10.0);
    i1 = xbinned->size[0];
    xbinned->size[0] = nbins;
    emxEnsureCapacity_real_T(xbinned, i1);
    ninbins = floor((double)X->size[0] / (double)nbins);
    emxInit_real_T(&b_xsor, 1);
    for (ii = 0; ii < nbins; ii++) {
      if (i + 1 == 0) {
        d = 0.0;
      } else {
        d = fmod((double)i + 1.0, nbins);
      }
      if ((d != 0.0) && (ii + 1 == nbins)) {
        d = (((double)ii + 1.0) - 1.0) * ninbins + 1.0;
        if (d > (double)i + 1.0) {
          i1 = 0;
          i2 = -1;
        } else {
          i1 = (int)d - 1;
          i2 = i;
        }
        loop_ub = i2 - i1;
        i2 = b_xsor->size[0];
        b_xsor->size[0] = loop_ub + 1;
        emxEnsureCapacity_real_T(b_xsor, i2);
        for (i2 = 0; i2 <= loop_ub; i2++) {
          b_xsor->data[i2] = xsor->data[i1 + i2];
        }
        xbinned->data[ii] = median(b_xsor);
      } else {
        d = (((double)ii + 1.0) - 1.0) * ninbins + 1.0;
        d1 = ((double)ii + 1.0) * ninbins;
        if (d > d1) {
          i1 = 0;
          i2 = 0;
        } else {
          i1 = (int)d - 1;
          i2 = (int)d1;
        }
        loop_ub = i2 - i1;
        i2 = b_xsor->size[0];
        b_xsor->size[0] = loop_ub;
        emxEnsureCapacity_real_T(b_xsor, i2);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_xsor->data[i2] = xsor->data[i1 + i2];
        }
        xbinned->data[ii] = median(b_xsor);
      }
    }
    emxFree_real_T(&b_xsor);
    i = xsor->size[0];
    xsor->size[0] = xbinned->size[0];
    emxEnsureCapacity_real_T(xsor, i);
    loop_ub = xbinned->size[0];
    for (i = 0; i < loop_ub; i++) {
      xsor->data[i] = xbinned->data[i];
    }
    emxFree_real_T(&xbinned);
    /*  Redefine x with binned x */
    /*  Redefine n with number of bins */
  }
  x = (int)floor((double)nbins / 2.0);
  /*  Compute the n*(n-1)/2 pairwise ordered distances */
  /*  Use function pdist of statistics toolbox */
  half = xsor->size[0] * (xsor->size[0] - 1) / 2;
  emxInit_real_T(&distord, 2);
  if (xsor->size[0] == 0) {
    distord->size[0] = 1;
    distord->size[1] = 0;
  } else {
    emxInit_boolean_T(&logIndX, 2);
    i = logIndX->size[0] * logIndX->size[1];
    logIndX->size[0] = 1;
    logIndX->size[1] = xsor->size[0];
    emxEnsureCapacity_boolean_T(logIndX, i);
    loop_ub = xsor->size[0];
    for (i = 0; i < loop_ub; i++) {
      logIndX->data[i] = true;
    }
    i = xsor->size[0];
    for (loop_ub = 0; loop_ub < i; loop_ub++) {
      if (rtIsNaN(xsor->data[loop_ub])) {
        logIndX->data[loop_ub] = false;
      }
    }
    i = distord->size[0] * distord->size[1];
    distord->size[0] = 1;
    distord->size[1] = half;
    emxEnsureCapacity_real_T(distord, i);
    for (i = 0; i < half; i++) {
      distord->data[i] = rtNaN;
    }
    half = 0;
    i = xsor->size[0];
    for (ii = 0; ii <= i - 2; ii++) {
      i1 = ii + 2;
      i2 = xsor->size[0];
      for (loop_ub = i1; loop_ub <= i2; loop_ub++) {
        if (logIndX->data[ii] && logIndX->data[loop_ub - 1]) {
          distord->data[((half + loop_ub) - ii) - 2] =
              fabs(xsor->data[ii] - xsor->data[loop_ub - 1]);
        }
      }
      half = ((half + xsor->size[0]) - ii) - 1;
    }
    emxFree_boolean_T(&logIndX);
  }
  d_sort(distord);
  /*         If statistic toolbox is not present it is possible to use the
   * following code */
  /*          distord = zeros(1,n*(n-1)./2); */
  /*          kkk = 1; */
  /*          for iii = 1:n-1 */
  /*              d = abs(x(iii) - x((iii+1):n)); */
  /*              distord(kkk:(kkk+n-iii-1)) = d; */
  /*              kkk = kkk + (n-iii); */
  /*          end */
  /*          distord=sort(distord); */
  /*  Multiply the estimator also by cn a finite sample correction */
  /*  factor to make the estimator unbiased for finite samples (see p. 10 */
  /*  of Croux and Rousseeuw, 1992) or */
  /*  http://www.google.it/url?sa=t&rct=j&q=&esrc=s&source=web&cd=1&ved=0CDUQFjAA&url=http%3A%2F%2Fwww.researchgate.net%2Fpublication%2F228595593_Time-efficient_algorithms_for_two_highly_robust_estimators_of_scale%2Ffile%2F79e4150f52c2fcabb0.pdf&ei=ZCE5U_qHIqjU4QTMuIHwAQ&usg=AFQjCNERh4HiLgtkUGF1w4JU1380xhvKhA&bvm=bv.63808443,d.bGE
   */
  ninbins = 0.0;
  switch (nbins) {
  case 1:
    break;
  case 2:
    ninbins = 0.399;
    break;
  case 3:
    ninbins = 0.994;
    break;
  case 4:
    ninbins = 0.512;
    break;
  case 5:
    ninbins = 0.844;
    break;
  case 6:
    ninbins = 0.611;
    break;
  case 7:
    ninbins = 0.857;
    break;
  case 8:
    ninbins = 0.669;
    break;
  case 9:
    ninbins = 0.872;
    break;
  default:
    if (nbins == 0) {
      i = 0;
    } else {
      i = (int)fmod(nbins, 2.0);
    }
    if (i == 1) {
      ninbins = (double)nbins / ((double)nbins + 1.4);
    } else if (i == 0) {
      ninbins = (double)nbins / ((double)nbins + 3.8);
    }
    break;
  }
  *sigma = ninbins * (2.2219 * distord->data[(int)(0.5 * ((double)x + 1.0) *
                                                   (((double)x + 1.0) - 1.0)) -
                                             1]);
  i = xsor->size[0];
  xsor->size[0] = X->size[0];
  emxEnsureCapacity_real_T(xsor, i);
  emxFree_real_T(&distord);
  if (X->size[0] != 0) {
    half = (X->size[0] != 1);
    i = X->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      xsor->data[loop_ub] = X->data[half * loop_ub] - *mu;
    }
  }
  i = Z->size[0];
  Z->size[0] = xsor->size[0];
  emxEnsureCapacity_real_T(Z, i);
  if (xsor->size[0] != 0) {
    half = (xsor->size[0] != 1);
    i = xsor->size[0] - 1;
    for (loop_ub = 0; loop_ub <= i; loop_ub++) {
      Z->data[loop_ub] = xsor->data[half * loop_ub] / *sigma;
    }
  }
  emxFree_real_T(&xsor);
}

/* End of code generation (zscoreFS.c) */
