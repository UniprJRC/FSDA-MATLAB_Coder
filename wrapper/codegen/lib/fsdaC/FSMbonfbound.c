/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMbonfbound.c
 *
 * Code generation for function 'FSMbonfbound'
 *
 */

/* Include files */
#include "FSMbonfbound.h"
#include "colon.h"
#include "finv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
void FSMbonfbound(double n, double p, const double varargin_2_data[],
                  const int varargin_2_size[2], double varargin_4,
                  emxArray_real_T *Bbound)
{
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  emxArray_real_T *b_y;
  emxArray_real_T *m;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *x;
  emxArray_real_T *y;
  double n_tmp;
  int b_n;
  int jtilecol;
  int k;
  int nrows;
  signed char input_sizes_idx_1;
  signed char sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSMbonfbound computes Bonferroni bounds for each step of the  search (in
   * mult analysis) */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSMbonfbound')">Link to the help function</a>
   */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*                Data Types - single | double */
  /*     p : number of variables. Scalar. Number of variables on which */
  /*        the envelopes are based. */
  /*                Data Types - single | double */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  distrib:      Reference distribution to use. Character. */
  /*                The statistical distribution used to compute the */
  /*                approximated Bonferroni bounds. Distributions implemented */
  /*                are 'chi2' and 'F' (default). */
  /*                  Example - 'distrib','chi2' */
  /*                  Data Types - char */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(0.5*(n+p+1))+1. */
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
  /*   Output: */
  /*  */
  /*   Bbound:      Bonferroni forward envelopes of mmd. Matrix. */
  /*                Matrix with n-m0+1 rows and length(prob)+1 columns: */
  /*                1st col = fwd search index from m0 to n-1, */
  /*                2nd col = bound for quantile prob[1], */
  /*                3rd col = bound for quantile prob[2], */
  /*                ..., */
  /*                (k+1) col = bound for quantile prob[k]. */
  /*  */
  /*  See also: FSMenvmmd, FSRbonfbound */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSMbonfbound')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% Example using default options. */
  /*     n=1000; */
  /*     p=5; */
  /*     init=floor(0.5*(n+p+1))+1; */
  /*     MMDenv = FSMenvmmd(n,p,'init',init); */
  /*     Bbound = FSMbonfbound(n,p,'init',init); */
  /*     figure; */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end),'r',Bbound(:,1),Bbound(:,2:end),'b');
   */
  /* } */
  /* { */
  /*     % Options init and prob. */
  /*     % Example using option, init=10 and prob=[0.01 0.05 0.99 0.999] */
  /*     n=2000; */
  /*     p=15; */
  /*     init=100; */
  /*     prob=[0.95 0.99 0.999]; */
  /*     MMDenv = FSMenvmmd(n,p,'init',init,'prob',prob); */
  /*     Bbound = FSMbonfbound(n,p,'init',init,'prob',prob); */
  /*     figure; */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end),'r',Bbound(:,1),Bbound(:,2:end),'b');
   */
  /* } */
  /* { */
  /*       % Comparison between chi2 and F distributions. */
  /*       % Example plotting distrib=chi2 and F, init=100 and prob=[0.999]. */
  /*       n=2000; */
  /*       p=10; */
  /*       init=100; */
  /*       prob=[0.99]; */
  /*       MMDenv = FSMenvmmd(n,p,'init',init,'prob',prob); */
  /*       distrib='chi2'; */
  /*       BboundC =
   * FSMbonfbound(n,p,'init',init,'prob',prob,'distrib',distrib); */
  /*       distrib='F'; */
  /*       BboundF =
   * FSMbonfbound(n,p,'init',init,'prob',prob,'distrib',distrib); */
  /*       figure; */
  /*       plot(MMDenv(:,1),MMDenv(:,2:end),BboundC(:,1),BboundC(:,2:end),BboundF(:,1),BboundF(:,2:end));
   */
  /*       legend('Order statistic envelope','Bonferroni Chi2 bound','Bonferroni
   * F bound','Location','best'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  The default starting point to monitor mdr is equal to the integer part of
   */
  /*  floor(0.5*(n+p+1)) */
  /*  Notice that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Bonferroni bound generation */
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
  /*  mm = fwd search index replicated lp times. */
  if ((varargin_2_size[0] == 0) || (varargin_2_size[1] == 0)) {
    b_n = -1;
  } else {
    b_n = 0;
  }
  emxInit_real_T(&b, 2);
  k = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = b_n + 1;
  emxEnsureCapacity_real_T(b, k);
  nrows = m->size[0];
  for (jtilecol = 0; jtilecol <= b_n; jtilecol++) {
    for (k = 0; k < nrows; k++) {
      b->data[k] = m->data[k];
    }
  }
  emxInit_real_T(&x, 2);
  k = x->size[0] * x->size[1];
  x->size[0] = b->size[0];
  x->size[1] = b->size[1];
  emxEnsureCapacity_real_T(x, k);
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    x->data[k] = b->data[k] - 1.0;
  }
  emxInit_real_T(&b_y, 2);
  k = b_y->size[0] * b_y->size[1];
  b_y->size[0] = b->size[0];
  b_y->size[1] = b->size[1];
  emxEnsureCapacity_real_T(b_y, k);
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    b_y->data[k] = b->data[k] - p;
  }
  emxInit_real_T(&r, 2);
  emxInit_real_T(&r1, 2);
  repmat(varargin_2_data, varargin_2_size, m->size[0], r);
  k = r1->size[0] * r1->size[1];
  r1->size[0] = r->size[0];
  r1->size[1] = r->size[1];
  emxEnsureCapacity_real_T(r1, k);
  nrows = r->size[0] * r->size[1];
  for (k = 0; k < nrows; k++) {
    r1->data[k] = 1.0 - (1.0 - r->data[k]) / (b->data[k] + 1.0);
  }
  emxFree_real_T(&r);
  emxInit_real_T(&b_b, 2);
  k = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b->size[0];
  b_b->size[1] = b->size[1];
  emxEnsureCapacity_real_T(b_b, k);
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    b_b->data[k] = b->data[k] - p;
  }
  emxInit_real_T(&r2, 2);
  emxInit_real_T(&r3, 2);
  finv(r1, p, b_b, r3);
  k = r2->size[0] * r2->size[1];
  r2->size[0] = r3->size[0];
  r2->size[1] = r3->size[1];
  emxEnsureCapacity_real_T(r2, k);
  nrows = r3->size[0] * r3->size[1];
  emxFree_real_T(&b_b);
  emxFree_real_T(&r1);
  for (k = 0; k < nrows; k++) {
    r2->data[k] = r3->data[k];
  }
  emxFree_real_T(&r3);
  k = b->size[0] * b->size[1];
  b->size[0] = x->size[0];
  b->size[1] = x->size[1];
  emxEnsureCapacity_real_T(b, k);
  n_tmp = n / (n - 1.0) * p;
  nrows = x->size[0] * x->size[1];
  for (k = 0; k < nrows; k++) {
    b->data[k] = n_tmp * (x->data[k] / b_y->data[k]) * r2->data[k];
  }
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    b->data[k] = sqrt(b->data[k]);
  }
  /* MinBonf =
   * sqrt(((m-1).^2./m).*betainv(1-((1-probm)./(mm+1)),p/2,(mm-p-1)/2)); */
  if (m->size[0] != 0) {
    b_n = m->size[0];
  } else if ((b->size[0] != 0) && (b->size[1] != 0)) {
    b_n = b->size[0];
  } else {
    b_n = 0;
    if (b->size[0] > 0) {
      b_n = b->size[0];
    }
  }
  empty_non_axis_sizes = (b_n == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || ((b->size[0] != 0) && (b->size[1] != 0))) {
    sizes_idx_1 = (signed char)b->size[1];
  } else {
    sizes_idx_1 = 0;
  }
  emxFree_real_T(&b);
  nrows = x->size[0] * x->size[1];
  for (k = 0; k < nrows; k++) {
    x->data[k] = n_tmp * (x->data[k] / b_y->data[k]) * r2->data[k];
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&r2);
  nrows = x->size[0] * x->size[1];
  for (k = 0; k < nrows; k++) {
    x->data[k] = sqrt(x->data[k]);
  }
  k = Bbound->size[0] * Bbound->size[1];
  Bbound->size[0] = b_n;
  Bbound->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(Bbound, k);
  nrows = input_sizes_idx_1;
  for (k = 0; k < nrows; k++) {
    for (jtilecol = 0; jtilecol < b_n; jtilecol++) {
      Bbound->data[jtilecol] = m->data[jtilecol];
    }
  }
  emxFree_real_T(&m);
  nrows = sizes_idx_1;
  for (k = 0; k < nrows; k++) {
    for (jtilecol = 0; jtilecol < b_n; jtilecol++) {
      Bbound->data[jtilecol + Bbound->size[0] * input_sizes_idx_1] =
          x->data[jtilecol];
    }
  }
  emxFree_real_T(&x);
}

/* End of code generation (FSMbonfbound.c) */
