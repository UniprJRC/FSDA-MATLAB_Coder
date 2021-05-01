/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRbonfbound.c
 *
 * Code generation for function 'FSRbonfbound'
 *
 */

/* Include files */
#include "FSRbonfbound.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "colon.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "tinv.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void FSRbonfbound(double n, double p, const double varargin_2_data[],
                  const int varargin_2_size[2], double varargin_4,
                  emxArray_real_T *Bbound)
{
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *b;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *mmminusp;
  emxArray_real_T *r2;
  emxArray_real_T *x;
  emxArray_real_T *y;
  int b_n;
  int jtilecol;
  int k;
  int nrows;
  signed char input_sizes_idx_1;
  signed char sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSRbonfbound computes Bonferroni bounds for each step of the search (in
   * linear regression) */
  /*  */
  /* <a href="matlab: docsearchFS('FSRbonfbound')">Link to the help function</a>
   */
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
  /*         init :      Search initialization. Scalar. */
  /*                       It specifies the point where to initialize the search
   */
  /*                        and start monitoring minimum deletion residual. if
   * init is not */
  /*                        specified it will be set equal to : */
  /*                        p+1, if the sample size is smaller than 40; */
  /*                        min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                        Example - 'init',100 starts monitoring from step
   * m=100 */
  /*                        Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99]  */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   Bbound:      Bonferroni forward envelopes of mdr. Matrix. */
  /*                Matrix with n-m0+1 rows and length(prob)+1 columns: */
  /*                1st col = fwd search index from m0 to n-1, */
  /*                2nd col = bound for quantile prob[1], */
  /*                3rd col = bound for quantile prob[2], */
  /*                ..., */
  /*                (k+1) col = bound for quantile prob[k]. */
  /*  */
  /*  */
  /*  See also: FSRenvmdr */
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
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRbonfbound')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% mdr with Bonferroni envelopes. */
  /*     % Example of creation of 1, 50 and 99 per cent envelopes based on 1000
   */
  /*     % observations and 5 explanatory variables using exact method */
  /*     MDRenv = FSRenvmdr(1000,5,'init',10); */
  /*     Bbound = FSRbonfbound(1000,5,'init',10); */
  /*     plot(MDRenv(:,1),MDRenv(:,2:end),Bbound(:,1),Bbound(:,2:end)); */
  /* } */
  /* { */
  /*     % mdr with personalized Bonferroni envelopes. */
  /*     % Example of creation of 1, 50, 99  and 99.9 per cent envelopes based
   * on 1000 */
  /*     % observations and 5 explanatory variables using exact method */
  /*     MDRenv = FSRenvmdr(1000,5,'init',10,'prob',[0.01 0.5 0.99 0.999]); */
  /*     Bbound = FSRbonfbound(1000,5,'init',10,'prob',[0.01 0.5 0.99 0.999]);
   */
  /*     plot(MDRenv(:,1),MDRenv(:,2:5),Bbound(:,1),Bbound(:,2:5)); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  The default starting point to monitor mdr is equal to the integer part of
   */
  /*  floor(0.5*(n+p+1)) */
  /*  Notice that prob must be a row vector */
  /*  Check that the specified starting point is not greater than n-1 */
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
  emxInit_real_T(&mm, 2);
  k = mm->size[0] * mm->size[1];
  mm->size[0] = b->size[0];
  mm->size[1] = b->size[1];
  emxEnsureCapacity_real_T(mm, k);
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    mm->data[k] = b->data[k];
  }
  emxInit_real_T(&mmminusp, 2);
  /*  Set to 1 all m-p not greater than 0 */
  k = mmminusp->size[0] * mmminusp->size[1];
  mmminusp->size[0] = b->size[0];
  mmminusp->size[1] = b->size[1];
  emxEnsureCapacity_real_T(mmminusp, k);
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    mmminusp->data[k] = b->data[k] - p;
  }
  b_n = b->size[0] * b->size[1] - 1;
  nrows = 0;
  for (jtilecol = 0; jtilecol <= b_n; jtilecol++) {
    if (b->data[jtilecol] - p <= 0.0) {
      nrows++;
    }
  }
  emxInit_int32_T(&r, 1);
  k = r->size[0];
  r->size[0] = nrows;
  emxEnsureCapacity_int32_T(r, k);
  nrows = 0;
  for (jtilecol = 0; jtilecol <= b_n; jtilecol++) {
    if (b->data[jtilecol] - p <= 0.0) {
      r->data[nrows] = jtilecol + 1;
      nrows++;
    }
  }
  nrows = r->size[0];
  for (k = 0; k < nrows; k++) {
    mm->data[r->data[k] - 1] = 1.0;
  }
  emxFree_int32_T(&r);
  b_n = mmminusp->size[0] * mmminusp->size[1] - 1;
  nrows = 0;
  for (jtilecol = 0; jtilecol <= b_n; jtilecol++) {
    if (mmminusp->data[jtilecol] <= 0.0) {
      nrows++;
    }
  }
  emxInit_int32_T(&r1, 1);
  k = r1->size[0];
  r1->size[0] = nrows;
  emxEnsureCapacity_int32_T(r1, k);
  nrows = 0;
  for (jtilecol = 0; jtilecol <= b_n; jtilecol++) {
    if (mmminusp->data[jtilecol] <= 0.0) {
      r1->data[nrows] = jtilecol + 1;
      nrows++;
    }
  }
  nrows = r1->size[0] - 1;
  for (k = 0; k <= nrows; k++) {
    mmminusp->data[r1->data[k] - 1] = 1.0;
  }
  emxFree_int32_T(&r1);
  emxInit_real_T(&r2, 2);
  repmat(varargin_2_data, varargin_2_size, m->size[0], b);
  k = r2->size[0] * r2->size[1];
  r2->size[0] = b->size[0];
  r2->size[1] = b->size[1];
  emxEnsureCapacity_real_T(r2, k);
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    r2->data[k] = (1.0 - b->data[k]) / (mm->data[k] + 1.0);
  }
  emxFree_real_T(&mm);
  emxInit_real_T(&x, 2);
  tinv(r2, mmminusp, x);
  nrows = x->size[0] * x->size[1];
  k = b->size[0] * b->size[1];
  b->size[0] = x->size[0];
  b->size[1] = x->size[1];
  emxEnsureCapacity_real_T(b, k);
  emxFree_real_T(&r2);
  emxFree_real_T(&mmminusp);
  for (k = 0; k < nrows; k++) {
    b->data[k] = fabs(x->data[k]);
  }
  emxFree_real_T(&x);
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
      Bbound->data[jtilecol + Bbound->size[0] * (k + input_sizes_idx_1)] =
          b->data[jtilecol + b_n * k];
    }
  }
  emxFree_real_T(&b);
}

/* End of code generation (FSRbonfbound.c) */
