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
#include "betainc.h"
#include "betaincinv.h"
#include "chi2inv.h"
#include "colon.h"
#include "erfcinv.h"
#include "finv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "tinv.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  static const double b_dv[7] = {0.010000000000000009,
                                 0.0010000000000000009,
                                 9.9999999999988987E-5,
                                 9.99999999995449E-6,
                                 0.99,
                                 0.5,
                                 0.99999};
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *v1;
  emxArray_real_T *v2;
  emxArray_real_T *x;
  emxArray_real_T *y;
  creal_T dc;
  double t;
  double xn5;
  double xn7;
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
  emxInit_real_T(&b_b_tmp, 2);
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = mm->size[0];
  b_b_tmp->size[1] = 7;
  emxEnsureCapacity_real_T(b_b_tmp, i);
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    b_b_tmp->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(&MinSca, 2);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = m->size[0];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(MinSca, i);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 7; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      MinSca->data[ibtile + k] = b_dv[outsize_idx_1];
    }
  }
  emxInit_real_T(&v1, 2);
  i = v1->size[0] * v1->size[1];
  v1->size[0] = b_tmp->size[0];
  v1->size[1] = 7;
  emxEnsureCapacity_real_T(v1, i);
  nrows = b_tmp->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    v1->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(&v2, 2);
  i = v2->size[0] * v2->size[1];
  v2->size[0] = b_b_tmp->size[0];
  v2->size[1] = 7;
  emxEnsureCapacity_real_T(v2, i);
  nrows = b_b_tmp->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    v2->data[i] = 2.0 * b_b_tmp->data[i];
  }
  emxInit_real_T(&quant, 2);
  if (MinSca->size[0] <= v1->size[0]) {
    nrows = MinSca->size[0];
  } else {
    nrows = v1->size[0];
  }
  if (nrows > v2->size[0]) {
    nrows = v2->size[0];
  }
  i = quant->size[0] * quant->size[1];
  quant->size[0] = nrows;
  quant->size[1] = 7;
  emxEnsureCapacity_real_T(quant, i);
  i = nrows * 7;
  for (k = 0; k < i; k++) {
    if ((v1->data[k] > 0.0) && (v2->data[k] > 0.0)) {
      if (rtIsInf(v1->data[k])) {
        if (rtIsInf(v2->data[k])) {
          quant->data[k] = 1.0;
        } else {
          quant->data[k] =
              v2->data[k] / chi2inv(1.0 - MinSca->data[k], v2->data[k]);
        }
      } else if (rtIsInf(v2->data[k])) {
        quant->data[k] = chi2inv(MinSca->data[k], v1->data[k]) / v1->data[k];
      } else {
        dc = betainc(0.5, v1->data[k] / 2.0, v2->data[k] / 2.0);
        if (MinSca->data[k] > dc.re) {
          dc =
              betaincinv(MinSca->data[k], v2->data[k] / 2.0, v1->data[k] / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(MinSca->data[k], v1->data[k] / 2.0,
                            v2->data[k] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        quant->data[k] = t * v2->data[k] / v1->data[k];
      }
    } else {
      quant->data[k] = rtNaN;
    }
  }
  emxFree_real_T(&v2);
  emxFree_real_T(&v1);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  nrows = b_b_tmp->size[0] * 7;
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[1] = 7;
  emxEnsureCapacity_real_T(b_b_tmp, i);
  for (i = 0; i < nrows; i++) {
    b_b_tmp->data[i] =
        0.5 * (b_b_tmp->data[i] /
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
  if (b_b_tmp->size[0] <= b_tmp->size[0]) {
    nrows = b_b_tmp->size[0];
  } else {
    nrows = b_tmp->size[0];
  }
  i = x->size[0] * x->size[1];
  x->size[0] = nrows;
  x->size[1] = 7;
  emxEnsureCapacity_real_T(x, i);
  i = nrows * 7;
  for (k = 0; k < i; k++) {
    if ((b_tmp->data[k] > 0.0) && (0.0 <= b_b_tmp->data[k]) &&
        (b_b_tmp->data[k] <= 1.0)) {
      if (b_b_tmp->data[k] == 0.0) {
        x->data[k] = rtMinusInf;
      } else if (b_b_tmp->data[k] == 1.0) {
        x->data[k] = rtInf;
      } else if (b_tmp->data[k] == 1.0) {
        x->data[k] = tan(3.1415926535897931 * (b_b_tmp->data[k] - 0.5));
      } else if (b_tmp->data[k] < 1000.0) {
        t = fabs(b_b_tmp->data[k] - 0.5);
        if (t < 0.25) {
          dc = b_betaincinv(2.0 * t, 0.5, b_tmp->data[k] / 2.0);
          xn7 = dc.re;
          dc = b_betaincinv(2.0 * t, 0.5, b_tmp->data[k] / 2.0);
          xn5 = 1.0 - dc.re;
        } else {
          dc = betaincinv(2.0 * t, b_tmp->data[k] / 2.0, 0.5);
          xn5 = dc.re;
          dc = betaincinv(2.0 * t, b_tmp->data[k] / 2.0, 0.5);
          xn7 = 1.0 - dc.re;
        }
        t = b_b_tmp->data[k] - 0.5;
        if (b_b_tmp->data[k] - 0.5 < 0.0) {
          t = -1.0;
        } else if (b_b_tmp->data[k] - 0.5 > 0.0) {
          t = 1.0;
        } else if (b_b_tmp->data[k] - 0.5 == 0.0) {
          t = 0.0;
        }
        x->data[k] = t * sqrt(b_tmp->data[k] * (xn7 / xn5));
      } else {
        if ((b_b_tmp->data[k] >= 0.0) && (b_b_tmp->data[k] <= 1.0)) {
          x->data[k] = -1.4142135623730951 * erfcinv(2.0 * b_b_tmp->data[k]);
        } else {
          x->data[k] = rtNaN;
        }
        if (b_tmp->data[k] < 6.6457388829771584E+75) {
          t = rt_powd_snf(x->data[k], 3.0);
          xn5 = rt_powd_snf(x->data[k], 5.0);
          xn7 = rt_powd_snf(x->data[k], 7.0);
          x->data[k] =
              (((x->data[k] + (t + x->data[k]) / (4.0 * b_tmp->data[k])) +
                ((5.0 * xn5 + 16.0 * t) + 3.0 * x->data[k]) /
                    (96.0 * (b_tmp->data[k] * b_tmp->data[k]))) +
               (((3.0 * xn7 + 19.0 * xn5) + 17.0 * t) - 15.0 * x->data[k]) /
                   (384.0 * rt_powd_snf(b_tmp->data[k], 3.0))) +
              ((((79.0 * rt_powd_snf(x->data[k], 9.0) + 776.0 * xn7) +
                 1482.0 * xn5) -
                1920.0 * t) -
               945.0 * x->data[k]) /
                  (92160.0 * rt_powd_snf(b_tmp->data[k], 4.0));
        }
      }
    } else {
      x->data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_b_tmp);
  nrows = x->size[0] * 7;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = x->size[0];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(MinSca, i);
  for (k = 0; k < nrows; k++) {
    MinSca->data[k] = fabs(x->data[k]);
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
  emxFree_real_T(&b_tmp);
  emxInit_real_T(&r, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r->size[0] * r->size[1];
  r->size[0] = a->size[0];
  r->size[1] = 7;
  emxEnsureCapacity_real_T(r, i);
  i = a->size[0] * 7;
  for (k = 0; k < i; k++) {
    r->data[k] = exp(-0.5 * a->data[k] * a->data[k]) / 2.5066282746310002;
  }
  nrows = mm->size[0] * 7;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 7;
  emxEnsureCapacity_real_T(mm, i);
  for (i = 0; i < nrows; i++) {
    mm->data[i] = 1.0 - 2.0 * (n / mm->data[i]) * a->data[i] * r->data[i];
  }
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  nrows = mm->size[0] * 7;
  for (k = 0; k < nrows; k++) {
    mm->data[k] = sqrt(mm->data[k]);
  }
  nrows = MinSca->size[0] * 7;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(MinSca, i);
  for (i = 0; i < nrows; i++) {
    MinSca->data[i] /= mm->data[i];
  }
  emxFree_real_T(&mm);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (MinSca->size[0] != 0) {
    ibtile = MinSca->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    outsize_idx_1 = 7;
  } else {
    outsize_idx_1 = 0;
  }
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
          MinSca->data[k + ibtile * i];
    }
  }
  emxFree_real_T(&MinSca);
}

void b_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *v2;
  emxArray_real_T *x;
  emxArray_real_T *y;
  creal_T dc;
  double t;
  double xn3;
  double xn5;
  double xn7;
  int i;
  int k;
  int nrows;
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
  emxInit_real_T(&mm, 1);
  /*  mm = fwd search index replicated lp times. */
  i = mm->size[0];
  mm->size[0] = m->size[0];
  emxEnsureCapacity_real_T(mm, i);
  nrows = m->size[0];
  for (k = 0; k < nrows; k++) {
    mm->data[k] = m->data[k];
  }
  emxInit_real_T(&b_tmp, 1);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0];
  b_tmp->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = n - mm->data[i];
  }
  emxInit_real_T(&b_b_tmp, 1);
  i = b_b_tmp->size[0];
  b_b_tmp->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(b_b_tmp, i);
  nrows = mm->size[0];
  for (i = 0; i < nrows; i++) {
    b_b_tmp->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(&MinSca, 1);
  i = MinSca->size[0];
  MinSca->size[0] = b_tmp->size[0];
  emxEnsureCapacity_real_T(MinSca, i);
  nrows = b_tmp->size[0];
  for (i = 0; i < nrows; i++) {
    MinSca->data[i] = 2.0 * b_tmp->data[i];
  }
  emxInit_real_T(&v2, 1);
  i = v2->size[0];
  v2->size[0] = b_b_tmp->size[0];
  emxEnsureCapacity_real_T(v2, i);
  nrows = b_b_tmp->size[0];
  for (i = 0; i < nrows; i++) {
    v2->data[i] = 2.0 * b_b_tmp->data[i];
  }
  emxInit_real_T(&quant, 1);
  if (m->size[0] <= MinSca->size[0]) {
    nrows = m->size[0];
  } else {
    nrows = MinSca->size[0];
  }
  if (nrows > v2->size[0]) {
    nrows = v2->size[0];
  }
  i = quant->size[0];
  quant->size[0] = nrows;
  emxEnsureCapacity_real_T(quant, i);
  for (k = 0; k < nrows; k++) {
    if ((MinSca->data[k] > 0.0) && (v2->data[k] > 0.0)) {
      if (rtIsInf(MinSca->data[k])) {
        if (rtIsInf(v2->data[k])) {
          quant->data[k] = 1.0;
        } else {
          quant->data[k] =
              v2->data[k] / chi2inv(0.010000000000000009, v2->data[k]);
        }
      } else if (rtIsInf(v2->data[k])) {
        quant->data[k] = chi2inv(0.99, MinSca->data[k]) / MinSca->data[k];
      } else {
        dc = betainc(0.5, MinSca->data[k] / 2.0, v2->data[k] / 2.0);
        if (0.99 > dc.re) {
          dc = betaincinv(0.99, v2->data[k] / 2.0, MinSca->data[k] / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(0.99, MinSca->data[k] / 2.0, v2->data[k] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        quant->data[k] = t * v2->data[k] / MinSca->data[k];
      }
    } else {
      quant->data[k] = rtNaN;
    }
  }
  emxFree_real_T(&v2);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  nrows = b_b_tmp->size[0];
  for (i = 0; i < nrows; i++) {
    b_b_tmp->data[i] =
        0.5 * (b_b_tmp->data[i] /
                   ((mm->data[i] + 1.0) + b_tmp->data[i] * quant->data[i]) +
               1.0);
  }
  emxFree_real_T(&quant);
  i = b_tmp->size[0];
  b_tmp->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = mm->data[i] - p;
  }
  emxInit_real_T(&x, 1);
  if (b_b_tmp->size[0] <= b_tmp->size[0]) {
    nrows = b_b_tmp->size[0];
  } else {
    nrows = b_tmp->size[0];
  }
  i = x->size[0];
  x->size[0] = nrows;
  emxEnsureCapacity_real_T(x, i);
  for (k = 0; k < nrows; k++) {
    if ((b_tmp->data[k] > 0.0) && (0.0 <= b_b_tmp->data[k]) &&
        (b_b_tmp->data[k] <= 1.0)) {
      if (b_b_tmp->data[k] == 0.0) {
        x->data[k] = rtMinusInf;
      } else if (b_b_tmp->data[k] == 1.0) {
        x->data[k] = rtInf;
      } else if (b_tmp->data[k] == 1.0) {
        x->data[k] = tan(3.1415926535897931 * (b_b_tmp->data[k] - 0.5));
      } else if (b_tmp->data[k] < 1000.0) {
        t = fabs(b_b_tmp->data[k] - 0.5);
        if (t < 0.25) {
          dc = b_betaincinv(2.0 * t, 0.5, b_tmp->data[k] / 2.0);
          xn5 = dc.re;
          dc = b_betaincinv(2.0 * t, 0.5, b_tmp->data[k] / 2.0);
          xn3 = 1.0 - dc.re;
        } else {
          dc = betaincinv(2.0 * t, b_tmp->data[k] / 2.0, 0.5);
          xn3 = dc.re;
          dc = betaincinv(2.0 * t, b_tmp->data[k] / 2.0, 0.5);
          xn5 = 1.0 - dc.re;
        }
        t = b_b_tmp->data[k] - 0.5;
        if (b_b_tmp->data[k] - 0.5 < 0.0) {
          t = -1.0;
        } else if (b_b_tmp->data[k] - 0.5 > 0.0) {
          t = 1.0;
        } else if (b_b_tmp->data[k] - 0.5 == 0.0) {
          t = 0.0;
        }
        x->data[k] = t * sqrt(b_tmp->data[k] * (xn5 / xn3));
      } else {
        if ((b_b_tmp->data[k] >= 0.0) && (b_b_tmp->data[k] <= 1.0)) {
          t = -1.4142135623730951 * erfcinv(2.0 * b_b_tmp->data[k]);
          x->data[k] = t;
        } else {
          t = rtNaN;
          x->data[k] = rtNaN;
        }
        if (b_tmp->data[k] < 6.6457388829771584E+75) {
          xn3 = rt_powd_snf(t, 3.0);
          xn5 = rt_powd_snf(t, 5.0);
          xn7 = rt_powd_snf(t, 7.0);
          t = (((t + (xn3 + t) / (4.0 * b_tmp->data[k])) +
                ((5.0 * xn5 + 16.0 * xn3) + 3.0 * t) /
                    (96.0 * (b_tmp->data[k] * b_tmp->data[k]))) +
               (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) - 15.0 * t) /
                   (384.0 * rt_powd_snf(b_tmp->data[k], 3.0))) +
              ((((79.0 * rt_powd_snf(t, 9.0) + 776.0 * xn7) + 1482.0 * xn5) -
                1920.0 * xn3) -
               945.0 * t) /
                  (92160.0 * rt_powd_snf(b_tmp->data[k], 4.0));
          x->data[k] = t;
        }
      }
    } else {
      x->data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_b_tmp);
  nrows = x->size[0];
  i = MinSca->size[0];
  MinSca->size[0] = x->size[0];
  emxEnsureCapacity_real_T(MinSca, i);
  for (k = 0; k < nrows; k++) {
    MinSca->data[k] = fabs(x->data[k]);
  }
  emxFree_real_T(&x);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = b_tmp->size[0];
  b_tmp->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(b_tmp, i);
  nrows = mm->size[0];
  for (i = 0; i < nrows; i++) {
    b_tmp->data[i] = 0.5 * (mm->data[i] / n + 1.0);
  }
  emxInit_real_T(&a, 1);
  i = a->size[0];
  a->size[0] = b_tmp->size[0];
  emxEnsureCapacity_real_T(a, i);
  i = b_tmp->size[0];
  for (k = 0; k < i; k++) {
    if ((b_tmp->data[k] >= 0.0) && (b_tmp->data[k] <= 1.0)) {
      a->data[k] = -1.4142135623730951 * erfcinv(2.0 * b_tmp->data[k]);
    } else {
      a->data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_tmp);
  emxInit_real_T(&r, 1);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r->size[0];
  r->size[0] = a->size[0];
  emxEnsureCapacity_real_T(r, i);
  i = a->size[0];
  for (k = 0; k < i; k++) {
    r->data[k] = exp(-0.5 * a->data[k] * a->data[k]) / 2.5066282746310002;
  }
  nrows = mm->size[0];
  for (i = 0; i < nrows; i++) {
    mm->data[i] = 1.0 - 2.0 * (n / mm->data[i]) * a->data[i] * r->data[i];
  }
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  nrows = mm->size[0];
  for (k = 0; k < nrows; k++) {
    mm->data[k] = sqrt(mm->data[k]);
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = m->size[0];
  MDRenv->size[1] = 2;
  emxEnsureCapacity_real_T(MDRenv, i);
  nrows = m->size[0];
  for (i = 0; i < nrows; i++) {
    MDRenv->data[i] = m->data[i];
  }
  emxFree_real_T(&m);
  nrows = MinSca->size[0];
  for (i = 0; i < nrows; i++) {
    MDRenv->data[i + MDRenv->size[0]] = MinSca->data[i] / mm->data[i];
  }
  emxFree_real_T(&MinSca);
  emxFree_real_T(&mm);
}

void c_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  static const double b_dv[4] = {0.010000000000000009, 0.0010000000000000009,
                                 0.99, 0.5};
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
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
  emxInit_real_T(&MinSca, 2);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    MinSca->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(&b, 2);
  i = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 4;
  emxEnsureCapacity_real_T(b, i);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      b->data[ibtile + k] = b_dv[outsize_idx_1];
    }
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
  r1->size[0] = MinSca->size[0];
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(r1, i);
  nrows = MinSca->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r1->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(&quant, 2);
  d_finv(b, r, r1, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r->size[0] * r->size[1];
  r->size[0] = MinSca->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  nrows = MinSca->size[0] * 4;
  emxFree_real_T(&r1);
  emxFree_real_T(&b);
  for (i = 0; i < nrows; i++) {
    r->data[i] = 0.5 * (MinSca->data[i] / ((mm->data[i] + 1.0) +
                                           b_tmp->data[i] * quant->data[i]) +
                        1.0);
  }
  emxFree_real_T(&quant);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    MinSca->data[i] = mm->data[i] - p;
  }
  c_tinv(r, MinSca, b_tmp);
  nrows = b_tmp->size[0] << 2;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = b_tmp->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  emxFree_real_T(&r);
  for (k = 0; k < nrows; k++) {
    MinSca->data[k] = fabs(b_tmp->data[k]);
  }
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
  emxFree_real_T(&b_tmp);
  emxInit_real_T(&r2, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r2->size[0] * r2->size[1];
  r2->size[0] = a->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity_real_T(r2, i);
  i = a->size[0] << 2;
  for (k = 0; k < i; k++) {
    r2->data[k] = exp(-0.5 * a->data[k] * a->data[k]) / 2.5066282746310002;
  }
  nrows = mm->size[0] * 4;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(mm, i);
  for (i = 0; i < nrows; i++) {
    mm->data[i] = 1.0 - 2.0 * (n / mm->data[i]) * a->data[i] * r2->data[i];
  }
  emxFree_real_T(&r2);
  emxFree_real_T(&a);
  nrows = mm->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    mm->data[k] = sqrt(mm->data[k]);
  }
  nrows = MinSca->size[0] * 4;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  for (i = 0; i < nrows; i++) {
    MinSca->data[i] /= mm->data[i];
  }
  emxFree_real_T(&mm);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (MinSca->size[0] != 0) {
    ibtile = MinSca->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    outsize_idx_1 = 4;
  } else {
    outsize_idx_1 = 0;
  }
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
          MinSca->data[k + ibtile * i];
    }
  }
  emxFree_real_T(&MinSca);
}

void d_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  static const double b_dv[4] = {1.0000000000287557E-6, 9.9999999947364415E-8,
                                 0.99, 0.5};
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
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
  emxInit_real_T(&MinSca, 2);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    MinSca->data[i] = mm->data[i] + 1.0;
  }
  emxInit_real_T(&b, 2);
  i = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 4;
  emxEnsureCapacity_real_T(b, i);
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      b->data[ibtile + k] = b_dv[outsize_idx_1];
    }
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
  r1->size[0] = MinSca->size[0];
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(r1, i);
  nrows = MinSca->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r1->data[i] = 2.0 * MinSca->data[i];
  }
  emxInit_real_T(&quant, 2);
  d_finv(b, r, r1, quant);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  i = r->size[0] * r->size[1];
  r->size[0] = MinSca->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  nrows = MinSca->size[0] * 4;
  emxFree_real_T(&r1);
  emxFree_real_T(&b);
  for (i = 0; i < nrows; i++) {
    r->data[i] = 0.5 * (MinSca->data[i] / ((mm->data[i] + 1.0) +
                                           b_tmp->data[i] * quant->data[i]) +
                        1.0);
  }
  emxFree_real_T(&quant);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    MinSca->data[i] = mm->data[i] - p;
  }
  c_tinv(r, MinSca, b_tmp);
  nrows = b_tmp->size[0] << 2;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = b_tmp->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  emxFree_real_T(&r);
  for (k = 0; k < nrows; k++) {
    MinSca->data[k] = fabs(b_tmp->data[k]);
  }
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
  emxFree_real_T(&b_tmp);
  emxInit_real_T(&r2, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r2->size[0] * r2->size[1];
  r2->size[0] = a->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity_real_T(r2, i);
  i = a->size[0] << 2;
  for (k = 0; k < i; k++) {
    r2->data[k] = exp(-0.5 * a->data[k] * a->data[k]) / 2.5066282746310002;
  }
  nrows = mm->size[0] * 4;
  i = mm->size[0] * mm->size[1];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(mm, i);
  for (i = 0; i < nrows; i++) {
    mm->data[i] = 1.0 - 2.0 * (n / mm->data[i]) * a->data[i] * r2->data[i];
  }
  emxFree_real_T(&r2);
  emxFree_real_T(&a);
  nrows = mm->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    mm->data[k] = sqrt(mm->data[k]);
  }
  nrows = MinSca->size[0] * 4;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  for (i = 0; i < nrows; i++) {
    MinSca->data[i] /= mm->data[i];
  }
  emxFree_real_T(&mm);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (MinSca->size[0] != 0) {
    ibtile = MinSca->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    outsize_idx_1 = 4;
  } else {
    outsize_idx_1 = 0;
  }
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
          MinSca->data[k + ibtile * i];
    }
  }
  emxFree_real_T(&MinSca);
}

/* End of code generation (FSRenvmdr.c) */
