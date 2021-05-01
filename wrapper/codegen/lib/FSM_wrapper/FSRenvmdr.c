/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRenvmdr.c
 *
 * Code generation for function 'FSRenvmdr'
 *
 */

/* Include files */
#include "FSRenvmdr.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "colon.h"
#include "erfcinv.h"
#include "finv.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "tinv.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  static const double options_prob[7] = {0.99, 0.999, 0.9999, 0.99999,
                                         0.01, 0.5,   1.0E-5};
  emxArray_real_T *a;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *x;
  emxArray_real_T *y;
  double options_prob_data[49];
  double tmp_data[7];
  int tmp_size[2];
  int i;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Notice that prob must be a row vector */
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
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  i = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = 7;
  emxEnsureCapacity_real_T(mm, i);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 7; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      mm->data[ibtile + k] = m->data[k];
    }
  }
  emxInit_real_T(&b_tmp, 2);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 7;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = n - mm->data[i];
  }
  for (i = 0; i < 7; i++) {
    options_prob_data[i] = options_prob[i];
  }
  tmp_size[0] = 1;
  tmp_size[1] = 7;
  for (i = 0; i < 7; i++) {
    tmp_data[i] = 1.0 - options_prob_data[i];
  }
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = b_tmp->size[0];
  r->size[1] = 7;
  emxEnsureCapacity_real_T(r, i);
  nrows = b_tmp->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    r->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = mm->size[0];
  r1->size[1] = 7;
  emxEnsureCapacity_real_T(r1, i);
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    r1->data[i] = 2.0 * (mm->data[i] + 1.0);
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&b_y, 2);
  emxInit_real_T(&r2, 2);
  repmat(tmp_data, tmp_size, m->size[0], r2);
  b_finv(r2, r, r1, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = 7;
  emxEnsureCapacity_real_T(r, i);
  nrows = mm->size[0] * 7;
  emxFree_real_T(&r2);
  for (i = 0; i < nrows; i++) {
    r->data[i] =
        0.5 * ((mm->data[i] + 1.0) /
                   ((mm->data[i] + 1.0) + b_tmp->data[i] * quant->data[i]) +
               1.0);
  }
  emxFree_real_T(&quant);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 7;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = mm->data[i] - p;
  }
  emxInit_real_T(&x, 2);
  b_tinv(r, b_tmp, r1);
  i = x->size[0] * x->size[1];
  x->size[0] = r1->size[0];
  x->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(x, i);
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&r);
  for (i = 0; i < nrows; i++) {
    x->data[i] = r1->data[i];
  }
  emxFree_real_T(&r1);
  nrows = x->size[0] * x->size[1];
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = x->size[0];
  b_y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(b_y, i);
  for (k = 0; k < nrows; k++) {
    b_y->data[k] = fabs(x->data[k]);
  }
  emxFree_real_T(&x);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 7;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  emxInit_real_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = b_tmp->size[0];
  a->size[1] = 7;
  emxEnsureCapacity_real_T(a, i);
  i = b_tmp->size[0] * 7;
  for (k = 0; k < i; k++) {
    if ((b_tmp->data[k] >= 0.0) && (b_tmp->data[k] <= 1.0)) {
      a->data[k] = -1.4142135623730951 * erfcinv(2.0 * b_tmp->data[k]);
    } else {
      a->data[k] = rtNaN;
    }
  }
  emxInit_real_T(&r3, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r3->size[0] * r3->size[1];
  r3->size[0] = a->size[0];
  r3->size[1] = 7;
  emxEnsureCapacity_real_T(r3, i);
  i = a->size[0] * 7;
  for (k = 0; k < i; k++) {
    r3->data[k] = exp(-0.5 * a->data[k] * a->data[k]) / 2.5066282746310002;
  }
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    mm->data[i] = 1.0 - 2.0 * (n / mm->data[i]) * a->data[i] * r3->data[i];
  }
  emxFree_real_T(&r3);
  emxFree_real_T(&a);
  nrows = mm->size[0] * 7;
  for (k = 0; k < nrows; k++) {
    mm->data[k] = sqrt(mm->data[k]);
  }
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (b_y->size[0] != 0) {
    ibtile = b_y->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_y->size[0] != 0)) {
    outsize_idx_1 = 7;
  } else {
    outsize_idx_1 = 0;
  }
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b_y->size[0];
  b_tmp->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = b_y->size[0] * b_y->size[1];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = b_y->data[i] / mm->data[i];
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&mm);
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = ibtile;
  MDRenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MDRenv, i);
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (k = 0; k < ibtile; k++) {
      MDRenv->data[k] = m->data[k];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < outsize_idx_1; i++) {
    for (k = 0; k < ibtile; k++) {
      MDRenv->data[k + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          b_tmp->data[k + ibtile * i];
    }
  }
  emxFree_real_T(&b_tmp);
}

void b_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  emxArray_real_T *b_p;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_b;
  emxArray_real_T *m;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *x;
  emxArray_real_T *y;
  int i;
  int i1;
  int itilerow;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Notice that prob must be a row vector */
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
  emxInit_real_T(&b_tmp, 2);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b->size[0];
  b_tmp->size[1] = 1;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = n - b->data[i];
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
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = b_tmp->size[0];
  r->size[1] = 1;
  emxEnsureCapacity_real_T(r, i);
  nrows = b_tmp->size[0];
  for (i = 0; i < nrows; i++) {
    r->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(&c_b, 2);
  i = c_b->size[0] * c_b->size[1];
  c_b->size[0] = b->size[0];
  c_b->size[1] = 1;
  emxEnsureCapacity_real_T(c_b, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    c_b->data[i] = 2.0 * (b->data[i] + 1.0);
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&b_p, 2);
  b_finv(b_b, r, c_b, b_p);
  i = quant->size[0] * quant->size[1];
  quant->size[0] = b_p->size[0];
  quant->size[1] = b_p->size[1];
  emxEnsureCapacity_real_T(quant, i);
  nrows = b_p->size[0] * b_p->size[1];
  emxFree_real_T(&b_b);
  for (i = 0; i < nrows; i++) {
    quant->data[i] = b_p->data[i];
  }
  emxInit_real_T(&b_y, 2);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r->size[0] * r->size[1];
  r->size[0] = b->size[0];
  r->size[1] = 1;
  emxEnsureCapacity_real_T(r, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    r->data[i] = 0.5 * ((b->data[i] + 1.0) / ((b->data[i] + 1.0) +
                                              b_tmp->data[i] * quant->data[i]) +
                        1.0);
  }
  emxFree_real_T(&b_tmp);
  emxFree_real_T(&quant);
  i = c_b->size[0] * c_b->size[1];
  c_b->size[0] = b->size[0];
  c_b->size[1] = 1;
  emxEnsureCapacity_real_T(c_b, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    c_b->data[i] = b->data[i] - p;
  }
  emxInit_real_T(&x, 2);
  b_tinv(r, c_b, b_p);
  i = x->size[0] * x->size[1];
  x->size[0] = b_p->size[0];
  x->size[1] = b_p->size[1];
  emxEnsureCapacity_real_T(x, i);
  nrows = b_p->size[0] * b_p->size[1];
  emxFree_real_T(&r);
  for (i = 0; i < nrows; i++) {
    x->data[i] = b_p->data[i];
  }
  nrows = x->size[0] * x->size[1];
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = x->size[0];
  b_y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(b_y, i);
  for (outsize_idx_1 = 0; outsize_idx_1 < nrows; outsize_idx_1++) {
    b_y->data[outsize_idx_1] = fabs(x->data[outsize_idx_1]);
  }
  emxFree_real_T(&x);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = b_p->size[0] * b_p->size[1];
  b_p->size[0] = b->size[0];
  b_p->size[1] = 1;
  emxEnsureCapacity_real_T(b_p, i);
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    b_p->data[i] = 0.5 * (b->data[i] / n + 1.0);
  }
  i = c_b->size[0] * c_b->size[1];
  c_b->size[0] = b_p->size[0];
  c_b->size[1] = 1;
  emxEnsureCapacity_real_T(c_b, i);
  i = b_p->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < i; outsize_idx_1++) {
    if ((b_p->data[outsize_idx_1] >= 0.0) &&
        (b_p->data[outsize_idx_1] <= 1.0)) {
      c_b->data[outsize_idx_1] =
          -1.4142135623730951 * erfcinv(2.0 * b_p->data[outsize_idx_1]);
    } else {
      c_b->data[outsize_idx_1] = rtNaN;
    }
  }
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = b_p->size[0] * b_p->size[1];
  b_p->size[0] = c_b->size[0];
  b_p->size[1] = 1;
  emxEnsureCapacity_real_T(b_p, i);
  i = c_b->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < i; outsize_idx_1++) {
    b_p->data[outsize_idx_1] =
        exp(-0.5 * c_b->data[outsize_idx_1] * c_b->data[outsize_idx_1]) /
        2.5066282746310002;
  }
  nrows = b->size[0];
  for (i = 0; i < nrows; i++) {
    b->data[i] = 1.0 - 2.0 * (n / b->data[i]) * c_b->data[i] * b_p->data[i];
  }
  emxFree_real_T(&b_p);
  nrows = b->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < nrows; outsize_idx_1++) {
    b->data[outsize_idx_1] = sqrt(b->data[outsize_idx_1]);
  }
  if (m->size[0] != 0) {
    itilerow = m->size[0];
  } else if (b_y->size[0] != 0) {
    itilerow = b_y->size[0];
  } else {
    itilerow = 0;
  }
  empty_non_axis_sizes = (itilerow == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_y->size[0] != 0)) {
    outsize_idx_1 = 1;
  } else {
    outsize_idx_1 = 0;
  }
  i = c_b->size[0] * c_b->size[1];
  c_b->size[0] = b_y->size[0];
  c_b->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(c_b, i);
  nrows = b_y->size[0] * b_y->size[1];
  for (i = 0; i < nrows; i++) {
    c_b->data[i] = b_y->data[i] / b->data[i];
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&b);
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = itilerow;
  MDRenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MDRenv, i);
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (i1 = 0; i1 < itilerow; i1++) {
      MDRenv->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < outsize_idx_1; i++) {
    for (i1 = 0; i1 < itilerow; i1++) {
      MDRenv->data[i1 + MDRenv->size[0] * input_sizes_idx_1] = c_b->data[i1];
    }
  }
  emxFree_real_T(&c_b);
}

void c_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  emxArray_real_T *a;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *x;
  emxArray_real_T *y;
  double options_prob_data[16];
  double tmp_data[4];
  int tmp_size[2];
  int i;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Notice that prob must be a row vector */
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
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  i = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(mm, i);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      mm->data[ibtile + k] = m->data[k];
    }
  }
  emxInit_real_T(&b_tmp, 2);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = n - mm->data[i];
  }
  options_prob_data[0] = 0.99;
  options_prob_data[1] = 0.999;
  options_prob_data[2] = 0.01;
  options_prob_data[3] = 0.5;
  tmp_size[0] = 1;
  tmp_size[1] = 4;
  for (i = 0; i < 4; i++) {
    tmp_data[i] = 1.0 - options_prob_data[i];
  }
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = b_tmp->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  nrows = b_tmp->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = mm->size[0];
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(r1, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r1->data[i] = 2.0 * (mm->data[i] + 1.0);
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&b_y, 2);
  emxInit_real_T(&r2, 2);
  repmat(tmp_data, tmp_size, m->size[0], r2);
  b_finv(r2, r, r1, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  nrows = mm->size[0] * 4;
  emxFree_real_T(&r2);
  for (i = 0; i < nrows; i++) {
    r->data[i] =
        0.5 * ((mm->data[i] + 1.0) /
                   ((mm->data[i] + 1.0) + b_tmp->data[i] * quant->data[i]) +
               1.0);
  }
  emxFree_real_T(&quant);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = mm->data[i] - p;
  }
  emxInit_real_T(&x, 2);
  b_tinv(r, b_tmp, r1);
  i = x->size[0] * x->size[1];
  x->size[0] = r1->size[0];
  x->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(x, i);
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&r);
  for (i = 0; i < nrows; i++) {
    x->data[i] = r1->data[i];
  }
  emxFree_real_T(&r1);
  nrows = x->size[0] * x->size[1];
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = x->size[0];
  b_y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(b_y, i);
  for (k = 0; k < nrows; k++) {
    b_y->data[k] = fabs(x->data[k]);
  }
  emxFree_real_T(&x);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  emxInit_real_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = b_tmp->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(a, i);
  i = b_tmp->size[0] << 2;
  for (k = 0; k < i; k++) {
    if ((b_tmp->data[k] >= 0.0) && (b_tmp->data[k] <= 1.0)) {
      a->data[k] = -1.4142135623730951 * erfcinv(2.0 * b_tmp->data[k]);
    } else {
      a->data[k] = rtNaN;
    }
  }
  emxInit_real_T(&r3, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r3->size[0] * r3->size[1];
  r3->size[0] = a->size[0];
  r3->size[1] = 4;
  emxEnsureCapacity_real_T(r3, i);
  i = a->size[0] << 2;
  for (k = 0; k < i; k++) {
    r3->data[k] = exp(-0.5 * a->data[k] * a->data[k]) / 2.5066282746310002;
  }
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    mm->data[i] = 1.0 - 2.0 * (n / mm->data[i]) * a->data[i] * r3->data[i];
  }
  emxFree_real_T(&r3);
  emxFree_real_T(&a);
  nrows = mm->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    mm->data[k] = sqrt(mm->data[k]);
  }
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (b_y->size[0] != 0) {
    ibtile = b_y->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_y->size[0] != 0)) {
    outsize_idx_1 = 4;
  } else {
    outsize_idx_1 = 0;
  }
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b_y->size[0];
  b_tmp->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = b_y->size[0] * b_y->size[1];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = b_y->data[i] / mm->data[i];
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&mm);
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = ibtile;
  MDRenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MDRenv, i);
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (k = 0; k < ibtile; k++) {
      MDRenv->data[k] = m->data[k];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < outsize_idx_1; i++) {
    for (k = 0; k < ibtile; k++) {
      MDRenv->data[k + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          b_tmp->data[k + ibtile * i];
    }
  }
  emxFree_real_T(&b_tmp);
}

void d_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  emxArray_real_T *a;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *x;
  emxArray_real_T *y;
  double options_prob_data[16];
  double tmp_data[4];
  int tmp_size[2];
  int i;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Notice that prob must be a row vector */
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
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  i = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(mm, i);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      mm->data[ibtile + k] = m->data[k];
    }
  }
  emxInit_real_T(&b_tmp, 2);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = n - mm->data[i];
  }
  options_prob_data[0] = 0.999999;
  options_prob_data[1] = 0.9999999;
  options_prob_data[2] = 0.01;
  options_prob_data[3] = 0.5;
  tmp_size[0] = 1;
  tmp_size[1] = 4;
  for (i = 0; i < 4; i++) {
    tmp_data[i] = 1.0 - options_prob_data[i];
  }
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = b_tmp->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  nrows = b_tmp->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = mm->size[0];
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(r1, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r1->data[i] = 2.0 * (mm->data[i] + 1.0);
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&b_y, 2);
  emxInit_real_T(&r2, 2);
  repmat(tmp_data, tmp_size, m->size[0], r2);
  b_finv(r2, r, r1, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r->size[0] * r->size[1];
  r->size[0] = mm->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  nrows = mm->size[0] * 4;
  emxFree_real_T(&r2);
  for (i = 0; i < nrows; i++) {
    r->data[i] =
        0.5 * ((mm->data[i] + 1.0) /
                   ((mm->data[i] + 1.0) + b_tmp->data[i] * quant->data[i]) +
               1.0);
  }
  emxFree_real_T(&quant);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = mm->data[i] - p;
  }
  emxInit_real_T(&x, 2);
  b_tinv(r, b_tmp, r1);
  i = x->size[0] * x->size[1];
  x->size[0] = r1->size[0];
  x->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(x, i);
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&r);
  for (i = 0; i < nrows; i++) {
    x->data[i] = r1->data[i];
  }
  emxFree_real_T(&r1);
  nrows = x->size[0] * x->size[1];
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = x->size[0];
  b_y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(b_y, i);
  for (k = 0; k < nrows; k++) {
    b_y->data[k] = fabs(x->data[k]);
  }
  emxFree_real_T(&x);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  emxInit_real_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = b_tmp->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(a, i);
  i = b_tmp->size[0] << 2;
  for (k = 0; k < i; k++) {
    if ((b_tmp->data[k] >= 0.0) && (b_tmp->data[k] <= 1.0)) {
      a->data[k] = -1.4142135623730951 * erfcinv(2.0 * b_tmp->data[k]);
    } else {
      a->data[k] = rtNaN;
    }
  }
  emxInit_real_T(&r3, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r3->size[0] * r3->size[1];
  r3->size[0] = a->size[0];
  r3->size[1] = 4;
  emxEnsureCapacity_real_T(r3, i);
  i = a->size[0] << 2;
  for (k = 0; k < i; k++) {
    r3->data[k] = exp(-0.5 * a->data[k] * a->data[k]) / 2.5066282746310002;
  }
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    mm->data[i] = 1.0 - 2.0 * (n / mm->data[i]) * a->data[i] * r3->data[i];
  }
  emxFree_real_T(&r3);
  emxFree_real_T(&a);
  nrows = mm->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    mm->data[k] = sqrt(mm->data[k]);
  }
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (b_y->size[0] != 0) {
    ibtile = b_y->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_y->size[0] != 0)) {
    outsize_idx_1 = 4;
  } else {
    outsize_idx_1 = 0;
  }
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b_y->size[0];
  b_tmp->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = b_y->size[0] * b_y->size[1];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = b_y->data[i] / mm->data[i];
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&mm);
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = ibtile;
  MDRenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MDRenv, i);
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (k = 0; k < ibtile; k++) {
      MDRenv->data[k] = m->data[k];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < outsize_idx_1; i++) {
    for (k = 0; k < ibtile; k++) {
      MDRenv->data[k + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          b_tmp->data[k + ibtile * i];
    }
  }
  emxFree_real_T(&b_tmp);
}

/* End of code generation (FSRenvmdr.c) */
