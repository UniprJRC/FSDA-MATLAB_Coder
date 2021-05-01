/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMenvmmd.c
 *
 * Code generation for function 'FSMenvmmd'
 *
 */

/* Include files */
#include "FSMenvmmd.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "chi2cdf.h"
#include "chi2inv.h"
#include "colon.h"
#include "finv.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void FSMenvmmd(double n, double v, double varargin_4, emxArray_real_T *MMDenv)
{
  static const double varargin_2[6] = {0.99, 0.999, 0.9999, 0.99999, 0.01, 0.5};
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  double b_options_prob_data[36];
  double options_prob_data[18];
  double tmp_data[6];
  int tmp_size[2];
  int i;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSMenvmmd computes the theoretical envelopes of Minimum MD outside subset
   * during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  n :           Number of observations. Scalar. Number of observations. */
  /*                Data Types - single | double */
  /*  v :           Number of variables. Scalar. Number of variables. */
  /*                Data Types - single | double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*  prob:        quantiles for which envelopes have */
  /*                to be computed. Vector. Vector containing 1 x k elements .
   */
  /*                The default is to produce 1 per cent, 50 per cent and 99 per
   * cent envelopes. */
  /*                  Example - 'prob',[0.05 0.95] */
  /*                  Data Types - double */
  /*  */
  /*    scaled:  It indicates how to compute the envelopes. Scalar. */
  /*                If scaled>0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',0 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   MMDenv=      n-m0+1 x length(prob)+1 columns containing the envelopes */
  /*                for the requested quantiles. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob[1]; */
  /*                3rd col = envelope for quantile prob[2]; */
  /*                ...; */
  /*                (k+1) col = envelope for quantile prob[k]. */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown */
  /*  number of multivariate outliers, "Journal of the Royal Statistical */
  /*  Society Series B", Vol. 71, pp. 201-221. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% FSMenvmmd with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. */
  /*     MMDenv=FSMenvmmd(10000,5); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% FSMenvmmd with otpional arguments. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. The envelopes are produced
   * for */
  /*     % scaled Mahalanobis distances (no consistency factor is applied) */
  /*     MMDenv=FSMenvmmd(10000,5,'scaled',1); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% Order statistics and simulations envelopes . */
  /*     % In this example we compare the accuracy of the envelopes computed
   * with */
  /*     % order statistics with those which come from simulations. */
  /*  */
  /*     % Fix a seed */
  /*     state=1000; */
  /*  */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous */
  /*     % four lines with */
  /*     % randn('state', 1000); */
  /*     n=200; */
  /*     p=3; */
  /*  */
  /*  */
  /*     init=25; */
  /*     nsimul=1000; */
  /*     mmdStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         Y=randn(n,p); */
  /*         [fre]=unibiv(Y); */
  /*         %create an initial subset with the 20 observations with the lowest
   */
  /*         %Mahalanobis Distance */
  /*         fre=sortrows(fre,4); */
  /*         bs=fre(1:25,1); */
  /*         mmd = FSMmmd(Y,bs,'init',init); */
  /*         mmdStore(:,j)=mmd(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mmdStore */
  /*     mmdStore=sort(mmdStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mmd(:,1),mmdStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mmdT=FSMenvmmd(n,p,'init',init); */
  /*     line(mmdT(:,1),mmdT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Note that prob must be a row vector */
  for (k = 0; k < 6; k++) {
    options_prob_data[k] = varargin_2[k];
  }
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    y->data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, k);
    for (k = 0; k <= nrows; k++) {
      y->data[k] = varargin_4 + (double)k;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&m, 1);
  k = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, k);
  nrows = y->size[1];
  for (k = 0; k < nrows; k++) {
    m->data[k] = y->data[k];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&b, 2);
  /*  mm = fwd search index replicated lp times. */
  k = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 6;
  emxEnsureCapacity_real_T(b, k);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 6; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      b->data[ibtile + k] = m->data[k];
    }
  }
  emxInit_real_T(&a, 2);
  /*  finv finds the inverse of the F distribution. */
  k = a->size[0] * a->size[1];
  a->size[0] = b->size[0];
  a->size[1] = 6;
  emxEnsureCapacity_real_T(a, k);
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    a->data[k] = n - b->data[k];
  }
  emxInit_real_T(&b_tmp, 2);
  k = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b->size[0];
  b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(b_tmp, k);
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_tmp->data[k] = b->data[k] + 1.0;
  }
  for (k = 0; k < 6; k++) {
    b_options_prob_data[k] = options_prob_data[k];
  }
  tmp_size[0] = 1;
  tmp_size[1] = 6;
  for (k = 0; k < 6; k++) {
    tmp_data[k] = 1.0 - b_options_prob_data[k];
  }
  emxInit_real_T(&b_b_tmp, 2);
  k = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = a->size[0];
  b_b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(b_b_tmp, k);
  nrows = a->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_b_tmp->data[k] = 2.0 * a->data[k];
  }
  emxInit_real_T(&b_b, 2);
  k = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b_tmp->size[0];
  b_b->size[1] = 6;
  emxEnsureCapacity_real_T(b_b, k);
  nrows = b_tmp->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_b->data[k] = 2.0 * b_tmp->data[k];
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&r, 2);
  emxInit_real_T(&r1, 2);
  repmat(tmp_data, tmp_size, m->size[0], r1);
  b_finv(r1, b_b_tmp, b_b, r);
  k = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(quant, k);
  nrows = r->size[0] * r->size[1];
  for (k = 0; k < nrows; k++) {
    quant->data[k] = r->data[k];
  }
  emxFree_real_T(&r);
  /*  from the equivalence with the incomplete beta distribution. */
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  k = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = b_tmp->size[0];
  b_b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(b_b_tmp, k);
  nrows = b_tmp->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_b_tmp->data[k] =
        b_tmp->data[k] / ((b->data[k] + 1.0) + a->data[k] * quant->data[k]);
  }
  k = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b->size[0];
  b_b->size[1] = 6;
  emxEnsureCapacity_real_T(b_b, k);
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_b->data[k] = b->data[k] - v;
  }
  emxInit_real_T(&r2, 2);
  finv(b_b_tmp, v, b_b, r1);
  k = r2->size[0] * r2->size[1];
  r2->size[0] = r1->size[0];
  r2->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(r2, k);
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&b_b_tmp);
  for (k = 0; k < nrows; k++) {
    r2->data[k] = r1->data[k];
  }
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  k = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b->size[0];
  b_b->size[1] = 6;
  emxEnsureCapacity_real_T(b_b, k);
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_b->data[k] = b->data[k] / n;
  }
  b_chi2inv(b_b, v, r1);
  k = a->size[0] * a->size[1];
  a->size[0] = r1->size[0];
  a->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(a, k);
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&b_b);
  for (k = 0; k < nrows; k++) {
    a->data[k] = r1->data[k];
  }
  chi2cdf(a, v + 2.0, r1);
  k = quant->size[0] * quant->size[1];
  quant->size[0] = r1->size[0];
  quant->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(quant, k);
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&a);
  for (k = 0; k < nrows; k++) {
    quant->data[k] = r1->data[k];
  }
  emxFree_real_T(&r1);
  nrows = b_tmp->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_tmp->data[k] = v * (b_tmp->data[k] / b->data[k]) * (b->data[k] - 1.0) /
                     (b->data[k] - v) * r2->data[k];
  }
  emxFree_real_T(&r2);
  nrows = b_tmp->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_tmp->data[k] = sqrt(b_tmp->data[k]);
  }
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b->data[k] = n / b->data[k] * quant->data[k];
  }
  emxFree_real_T(&quant);
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b->data[k] = sqrt(b->data[k]);
  }
  nrows = b_tmp->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_tmp->data[k] /= b->data[k];
  }
  emxFree_real_T(&b);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (b_tmp->size[0] != 0) {
    ibtile = b_tmp->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_tmp->size[0] != 0)) {
    outsize_idx_1 = 6;
  } else {
    outsize_idx_1 = 0;
  }
  k = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = ibtile;
  MMDenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MMDenv, k);
  nrows = input_sizes_idx_1;
  for (k = 0; k < nrows; k++) {
    for (i = 0; i < ibtile; i++) {
      MMDenv->data[i] = m->data[i];
    }
  }
  emxFree_real_T(&m);
  for (k = 0; k < outsize_idx_1; k++) {
    for (i = 0; i < ibtile; i++) {
      MMDenv->data[i + MMDenv->size[0] * (k + input_sizes_idx_1)] =
          b_tmp->data[i + ibtile * k];
    }
  }
  emxFree_real_T(&b_tmp);
}

void b_FSMenvmmd(double n, double v, double varargin_4, emxArray_real_T *MMDenv)
{
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_tmp;
  emxArray_real_T *c_b;
  emxArray_real_T *m;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *y;
  int i;
  int i1;
  int itilerow;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSMenvmmd computes the theoretical envelopes of Minimum MD outside subset
   * during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  n :           Number of observations. Scalar. Number of observations. */
  /*                Data Types - single | double */
  /*  v :           Number of variables. Scalar. Number of variables. */
  /*                Data Types - single | double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*  prob:        quantiles for which envelopes have */
  /*                to be computed. Vector. Vector containing 1 x k elements .
   */
  /*                The default is to produce 1 per cent, 50 per cent and 99 per
   * cent envelopes. */
  /*                  Example - 'prob',[0.05 0.95] */
  /*                  Data Types - double */
  /*  */
  /*    scaled:  It indicates how to compute the envelopes. Scalar. */
  /*                If scaled>0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',0 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   MMDenv=      n-m0+1 x length(prob)+1 columns containing the envelopes */
  /*                for the requested quantiles. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob[1]; */
  /*                3rd col = envelope for quantile prob[2]; */
  /*                ...; */
  /*                (k+1) col = envelope for quantile prob[k]. */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown */
  /*  number of multivariate outliers, "Journal of the Royal Statistical */
  /*  Society Series B", Vol. 71, pp. 201-221. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% FSMenvmmd with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. */
  /*     MMDenv=FSMenvmmd(10000,5); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% FSMenvmmd with otpional arguments. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. The envelopes are produced
   * for */
  /*     % scaled Mahalanobis distances (no consistency factor is applied) */
  /*     MMDenv=FSMenvmmd(10000,5,'scaled',1); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% Order statistics and simulations envelopes . */
  /*     % In this example we compare the accuracy of the envelopes computed
   * with */
  /*     % order statistics with those which come from simulations. */
  /*  */
  /*     % Fix a seed */
  /*     state=1000; */
  /*  */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous */
  /*     % four lines with */
  /*     % randn('state', 1000); */
  /*     n=200; */
  /*     p=3; */
  /*  */
  /*  */
  /*     init=25; */
  /*     nsimul=1000; */
  /*     mmdStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         Y=randn(n,p); */
  /*         [fre]=unibiv(Y); */
  /*         %create an initial subset with the 20 observations with the lowest
   */
  /*         %Mahalanobis Distance */
  /*         fre=sortrows(fre,4); */
  /*         bs=fre(1:25,1); */
  /*         mmd = FSMmmd(Y,bs,'init',init); */
  /*         mmdStore(:,j)=mmd(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mmdStore */
  /*     mmdStore=sort(mmdStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mmd(:,1),mmdStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mmdT=FSMenvmmd(n,p,'init',init); */
  /*     line(mmdT(:,1),mmdT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Note that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    y->data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, i);
    for (i = 0; i <= nrows; i++) {
      y->data[i] = varargin_4 + (double)i;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&m, 1);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, i);
  nrows = y->size[1];
  for (i = 0; i < nrows; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&b, 2);
  /*  mm = fwd search index replicated lp times. */
  i = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 1;
  emxEnsureCapacity_real_T(b, i);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < nrows; outsize_idx_1++) {
    b->data[outsize_idx_1] = m->data[outsize_idx_1];
  }
  emxInit_real_T(&a, 2);
  /*  finv finds the inverse of the F distribution. */
  i = a->size[0] * a->size[1];
  a->size[0] = b->size[0];
  a->size[1] = 1;
  emxEnsureCapacity_real_T(a, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    a->data[i] = n - b->data[i];
  }
  emxInit_real_T(&b_tmp, 2);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b->size[0];
  b_tmp->size[1] = 1;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = b->data[i] + 1.0;
  }
  emxInit_real_T(&b_b, 2);
  i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = m->size[0];
  b_b->size[1] = 1;
  emxEnsureCapacity_real_T(b_b, i);
  nrows = m->size[0];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    b_b->data[itilerow] = 0.99;
  }
  emxInit_real_T(&b_b_tmp, 2);
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = a->size[0];
  b_b_tmp->size[1] = 1;
  emxEnsureCapacity_real_T(b_b_tmp, i);
  nrows = a->size[0];
  for (i = 0; i < nrows; i++) {
    b_b_tmp->data[i] = 2.0 * a->data[i];
  }
  emxInit_real_T(&c_b, 2);
  i = c_b->size[0] * c_b->size[1];
  c_b->size[0] = b_tmp->size[0];
  c_b->size[1] = 1;
  emxEnsureCapacity_real_T(c_b, i);
  nrows = b_tmp->size[0];
  for (i = 0; i < nrows; i++) {
    c_b->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&r, 2);
  b_finv(b_b, b_b_tmp, c_b, r);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(quant, i);
  nrows = r->size[0] * r->size[1];
  emxFree_real_T(&b_b);
  for (i = 0; i < nrows; i++) {
    quant->data[i] = r->data[i];
  }
  /*  from the equivalence with the incomplete beta distribution. */
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = b_tmp->size[0];
  b_b_tmp->size[1] = 1;
  emxEnsureCapacity_real_T(b_b_tmp, i);
  nrows = b_tmp->size[0];
  for (i = 0; i < nrows; i++) {
    b_b_tmp->data[i] =
        b_tmp->data[i] / ((b->data[i] + 1.0) + a->data[i] * quant->data[i]);
  }
  i = c_b->size[0] * c_b->size[1];
  c_b->size[0] = b->size[0];
  c_b->size[1] = 1;
  emxEnsureCapacity_real_T(c_b, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    c_b->data[i] = b->data[i] - v;
  }
  emxInit_real_T(&r1, 2);
  finv(b_b_tmp, v, c_b, r);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = r->size[0];
  r1->size[1] = r->size[1];
  emxEnsureCapacity_real_T(r1, i);
  nrows = r->size[0] * r->size[1];
  emxFree_real_T(&b_b_tmp);
  for (i = 0; i < nrows; i++) {
    r1->data[i] = r->data[i];
  }
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  i = c_b->size[0] * c_b->size[1];
  c_b->size[0] = b->size[0];
  c_b->size[1] = 1;
  emxEnsureCapacity_real_T(c_b, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    c_b->data[i] = b->data[i] / n;
  }
  b_chi2inv(c_b, v, r);
  i = a->size[0] * a->size[1];
  a->size[0] = r->size[0];
  a->size[1] = r->size[1];
  emxEnsureCapacity_real_T(a, i);
  nrows = r->size[0] * r->size[1];
  emxFree_real_T(&c_b);
  for (i = 0; i < nrows; i++) {
    a->data[i] = r->data[i];
  }
  chi2cdf(a, v + 2.0, r);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(quant, i);
  nrows = r->size[0] * r->size[1];
  emxFree_real_T(&a);
  for (i = 0; i < nrows; i++) {
    quant->data[i] = r->data[i];
  }
  emxFree_real_T(&r);
  nrows = b_tmp->size[0];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = v * (b_tmp->data[i] / b->data[i]) * (b->data[i] - 1.0) /
                     (b->data[i] - v) * r1->data[i];
  }
  emxFree_real_T(&r1);
  nrows = b_tmp->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < nrows; outsize_idx_1++) {
    b_tmp->data[outsize_idx_1] = sqrt(b_tmp->data[outsize_idx_1]);
  }
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    b->data[i] = n / b->data[i] * quant->data[i];
  }
  emxFree_real_T(&quant);
  nrows = b->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < nrows; outsize_idx_1++) {
    b->data[outsize_idx_1] = sqrt(b->data[outsize_idx_1]);
  }
  nrows = b_tmp->size[0];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] /= b->data[i];
  }
  emxFree_real_T(&b);
  if (m->size[0] != 0) {
    itilerow = m->size[0];
  } else if (b_tmp->size[0] != 0) {
    itilerow = b_tmp->size[0];
  } else {
    itilerow = 0;
  }
  empty_non_axis_sizes = (itilerow == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_tmp->size[0] != 0)) {
    outsize_idx_1 = 1;
  } else {
    outsize_idx_1 = 0;
  }
  i = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = itilerow;
  MMDenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MMDenv, i);
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (i1 = 0; i1 < itilerow; i1++) {
      MMDenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < outsize_idx_1; i++) {
    for (i1 = 0; i1 < itilerow; i1++) {
      MMDenv->data[i1 + MMDenv->size[0] * input_sizes_idx_1] = b_tmp->data[i1];
    }
  }
  emxFree_real_T(&b_tmp);
}

void c_FSMenvmmd(double n, double v, double varargin_4, emxArray_real_T *MMDenv)
{
  emxArray_real_T *a;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_mm;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *y;
  double options_prob_data[18];
  double b_options_prob_data[16];
  double tmp_data[4];
  int tmp_size[2];
  int i;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSMenvmmd computes the theoretical envelopes of Minimum MD outside subset
   * during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  n :           Number of observations. Scalar. Number of observations. */
  /*                Data Types - single | double */
  /*  v :           Number of variables. Scalar. Number of variables. */
  /*                Data Types - single | double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*  prob:        quantiles for which envelopes have */
  /*                to be computed. Vector. Vector containing 1 x k elements .
   */
  /*                The default is to produce 1 per cent, 50 per cent and 99 per
   * cent envelopes. */
  /*                  Example - 'prob',[0.05 0.95] */
  /*                  Data Types - double */
  /*  */
  /*    scaled:  It indicates how to compute the envelopes. Scalar. */
  /*                If scaled>0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',0 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   MMDenv=      n-m0+1 x length(prob)+1 columns containing the envelopes */
  /*                for the requested quantiles. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob[1]; */
  /*                3rd col = envelope for quantile prob[2]; */
  /*                ...; */
  /*                (k+1) col = envelope for quantile prob[k]. */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown */
  /*  number of multivariate outliers, "Journal of the Royal Statistical */
  /*  Society Series B", Vol. 71, pp. 201-221. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% FSMenvmmd with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. */
  /*     MMDenv=FSMenvmmd(10000,5); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% FSMenvmmd with otpional arguments. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. The envelopes are produced
   * for */
  /*     % scaled Mahalanobis distances (no consistency factor is applied) */
  /*     MMDenv=FSMenvmmd(10000,5,'scaled',1); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% Order statistics and simulations envelopes . */
  /*     % In this example we compare the accuracy of the envelopes computed
   * with */
  /*     % order statistics with those which come from simulations. */
  /*  */
  /*     % Fix a seed */
  /*     state=1000; */
  /*  */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous */
  /*     % four lines with */
  /*     % randn('state', 1000); */
  /*     n=200; */
  /*     p=3; */
  /*  */
  /*  */
  /*     init=25; */
  /*     nsimul=1000; */
  /*     mmdStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         Y=randn(n,p); */
  /*         [fre]=unibiv(Y); */
  /*         %create an initial subset with the 20 observations with the lowest
   */
  /*         %Mahalanobis Distance */
  /*         fre=sortrows(fre,4); */
  /*         bs=fre(1:25,1); */
  /*         mmd = FSMmmd(Y,bs,'init',init); */
  /*         mmdStore(:,j)=mmd(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mmdStore */
  /*     mmdStore=sort(mmdStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mmd(:,1),mmdStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mmdT=FSMenvmmd(n,p,'init',init); */
  /*     line(mmdT(:,1),mmdT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Note that prob must be a row vector */
  options_prob_data[0] = 0.99;
  options_prob_data[1] = 0.999;
  options_prob_data[2] = 0.01;
  options_prob_data[3] = 0.5;
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    y->data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, k);
    for (k = 0; k <= nrows; k++) {
      y->data[k] = varargin_4 + (double)k;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&m, 1);
  k = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, k);
  nrows = y->size[1];
  for (k = 0; k < nrows; k++) {
    m->data[k] = y->data[k];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  k = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(mm, k);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      mm->data[ibtile + k] = m->data[k];
    }
  }
  emxInit_real_T(&a, 2);
  /*  finv finds the inverse of the F distribution. */
  k = a->size[0] * a->size[1];
  a->size[0] = mm->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(a, k);
  nrows = mm->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    a->data[k] = n - mm->data[k];
  }
  emxInit_real_T(&b_tmp, 2);
  k = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, k);
  nrows = mm->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    b_tmp->data[k] = mm->data[k] + 1.0;
  }
  for (k = 0; k < 4; k++) {
    b_options_prob_data[k] = options_prob_data[k];
  }
  tmp_size[0] = 1;
  tmp_size[1] = 4;
  for (k = 0; k < 4; k++) {
    tmp_data[k] = 1.0 - b_options_prob_data[k];
  }
  emxInit_real_T(&b_mm, 2);
  k = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = a->size[0];
  b_mm->size[1] = 4;
  emxEnsureCapacity_real_T(b_mm, k);
  nrows = a->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    b_mm->data[k] = 2.0 * a->data[k];
  }
  emxInit_real_T(&b_b_tmp, 2);
  k = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = b_tmp->size[0];
  b_b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_b_tmp, k);
  nrows = b_tmp->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    b_b_tmp->data[k] = 2.0 * b_tmp->data[k];
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&r, 2);
  repmat(tmp_data, tmp_size, m->size[0], r);
  b_finv(r, b_mm, b_b_tmp, quant);
  /*  from the equivalence with the incomplete beta distribution. */
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  k = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = b_tmp->size[0];
  b_b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_b_tmp, k);
  nrows = b_tmp->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    b_b_tmp->data[k] =
        b_tmp->data[k] / ((mm->data[k] + 1.0) + a->data[k] * quant->data[k]);
  }
  k = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = 4;
  emxEnsureCapacity_real_T(b_mm, k);
  nrows = mm->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    b_mm->data[k] = mm->data[k] - v;
  }
  finv(b_b_tmp, v, b_mm, r);
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  k = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = 4;
  emxEnsureCapacity_real_T(b_mm, k);
  nrows = mm->size[0] * 4;
  emxFree_real_T(&b_b_tmp);
  for (k = 0; k < nrows; k++) {
    b_mm->data[k] = mm->data[k] / n;
  }
  b_chi2inv(b_mm, v, a);
  chi2cdf(a, v + 2.0, quant);
  nrows = b_tmp->size[0] * 4;
  emxFree_real_T(&b_mm);
  emxFree_real_T(&a);
  for (k = 0; k < nrows; k++) {
    b_tmp->data[k] = v * (b_tmp->data[k] / mm->data[k]) * (mm->data[k] - 1.0) /
                     (mm->data[k] - v) * r->data[k];
  }
  emxFree_real_T(&r);
  nrows = b_tmp->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    b_tmp->data[k] = sqrt(b_tmp->data[k]);
  }
  nrows = mm->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    mm->data[k] = n / mm->data[k] * quant->data[k];
  }
  emxFree_real_T(&quant);
  nrows = mm->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    mm->data[k] = sqrt(mm->data[k]);
  }
  nrows = b_tmp->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    b_tmp->data[k] /= mm->data[k];
  }
  emxFree_real_T(&mm);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (b_tmp->size[0] != 0) {
    ibtile = b_tmp->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_tmp->size[0] != 0)) {
    outsize_idx_1 = 4;
  } else {
    outsize_idx_1 = 0;
  }
  k = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = ibtile;
  MMDenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MMDenv, k);
  nrows = input_sizes_idx_1;
  for (k = 0; k < nrows; k++) {
    for (i = 0; i < ibtile; i++) {
      MMDenv->data[i] = m->data[i];
    }
  }
  emxFree_real_T(&m);
  for (k = 0; k < outsize_idx_1; k++) {
    for (i = 0; i < ibtile; i++) {
      MMDenv->data[i + MMDenv->size[0] * (k + input_sizes_idx_1)] =
          b_tmp->data[i + ibtile * k];
    }
  }
  emxFree_real_T(&b_tmp);
}

/* End of code generation (FSMenvmmd.c) */
