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
#include "colon.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "tinv.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void hc_binary_expand_op(emxArray_real_T *x, const emxArray_real_T *r3,
                                const emxArray_real_T *mm,
                                const emxArray_real_T *mmminusp);

/* Function Definitions */
static void hc_binary_expand_op(emxArray_real_T *x, const emxArray_real_T *r3,
                                const emxArray_real_T *mm,
                                const emxArray_real_T *mmminusp)
{
  emxArray_real_T *r1;
  const double *mm_data;
  const double *r;
  double *r2;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  mm_data = mm->data;
  r = r3->data;
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  if (mm->size[0] == 1) {
    r1->size[0] = r3->size[0];
  } else {
    r1->size[0] = mm->size[0];
  }
  if (mm->size[1] == 1) {
    r1->size[1] = r3->size[1];
  } else {
    r1->size[1] = mm->size[1];
  }
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (r3->size[0] != 1);
  stride_0_1 = (r3->size[1] != 1);
  stride_1_0 = (mm->size[0] != 1);
  stride_1_1 = (mm->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (mm->size[1] == 1) {
    loop_ub = r3->size[1];
  } else {
    loop_ub = mm->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (mm->size[0] == 1) {
      b_loop_ub = r3->size[0];
    } else {
      b_loop_ub = mm->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r2[i1 + r1->size[0] * i] =
          (1.0 - r[i1 * stride_0_0 + r3->size[0] * aux_0_1]) /
          (mm_data[i1 * stride_1_0 + mm->size[0] * aux_1_1] + 1.0);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  b_tinv(r1, mmminusp, x);
  emxFree_real_T(&r1);
}

void FSRbonfbound(double n, double p, const double varargin_2_data[],
                  const int varargin_2_size[2], double varargin_4,
                  emxArray_real_T *Bbound)
{
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T *b;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *mmminusp;
  emxArray_real_T *r3;
  emxArray_real_T *x;
  emxArray_real_T *y;
  double *b_data;
  double *m_data;
  double *mm_data;
  double *mmminusp_data;
  int b_n;
  int i;
  int k;
  int nrows;
  int sizes_idx_1;
  int *r1;
  signed char input_sizes_idx_1;
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
  mmminusp_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    mmminusp_data = y->data;
    mmminusp_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    mmminusp_data = y->data;
    mmminusp_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, i);
    mmminusp_data = y->data;
    for (i = 0; i <= nrows; i++) {
      mmminusp_data[i] = varargin_4 + (double)i;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    mmminusp_data = y->data;
  }
  emxInit_real_T(&m, 1);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, i);
  m_data = m->data;
  nrows = y->size[1];
  for (i = 0; i < nrows; i++) {
    m_data[i] = mmminusp_data[i];
  }
  emxFree_real_T(&y);
  /*  mm = fwd search index replicated lp times. */
  if ((varargin_2_size[0] == 0) || (varargin_2_size[1] == 0)) {
    b_n = -1;
  } else {
    b_n = 0;
  }
  emxInit_real_T(&b, 2);
  i = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = b_n + 1;
  emxEnsureCapacity_real_T(b, i);
  b_data = b->data;
  nrows = m->size[0];
  for (sizes_idx_1 = 0; sizes_idx_1 <= b_n; sizes_idx_1++) {
    for (k = 0; k < nrows; k++) {
      b_data[k] = m_data[k];
    }
  }
  emxInit_real_T(&mm, 2);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = b->size[0];
  mm->size[1] = b->size[1];
  emxEnsureCapacity_real_T(mm, i);
  mm_data = mm->data;
  nrows = b->size[0] * b->size[1];
  for (i = 0; i < nrows; i++) {
    mm_data[i] = b_data[i];
  }
  emxInit_real_T(&mmminusp, 2);
  /*  Set to 1 all m-p not greater than 0 */
  i = mmminusp->size[0] * mmminusp->size[1];
  mmminusp->size[0] = b->size[0];
  mmminusp->size[1] = b->size[1];
  emxEnsureCapacity_real_T(mmminusp, i);
  mmminusp_data = mmminusp->data;
  nrows = b->size[0] * b->size[1];
  for (i = 0; i < nrows; i++) {
    mmminusp_data[i] = b_data[i] - p;
  }
  b_n = b->size[0] * b->size[1] - 1;
  nrows = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= b_n; sizes_idx_1++) {
    if (b_data[sizes_idx_1] - p <= 0.0) {
      nrows++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = nrows;
  emxEnsureCapacity_int32_T(r, i);
  r1 = r->data;
  nrows = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= b_n; sizes_idx_1++) {
    if (b_data[sizes_idx_1] - p <= 0.0) {
      r1[nrows] = sizes_idx_1 + 1;
      nrows++;
    }
  }
  nrows = r->size[0];
  for (i = 0; i < nrows; i++) {
    mm_data[r1[i] - 1] = 1.0;
  }
  emxFree_int32_T(&r);
  b_n = mmminusp->size[0] * mmminusp->size[1] - 1;
  nrows = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= b_n; sizes_idx_1++) {
    if (mmminusp_data[sizes_idx_1] <= 0.0) {
      nrows++;
    }
  }
  emxInit_int32_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = nrows;
  emxEnsureCapacity_int32_T(r2, i);
  r1 = r2->data;
  nrows = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= b_n; sizes_idx_1++) {
    if (mmminusp_data[sizes_idx_1] <= 0.0) {
      r1[nrows] = sizes_idx_1 + 1;
      nrows++;
    }
  }
  nrows = r2->size[0] - 1;
  for (i = 0; i <= nrows; i++) {
    mmminusp_data[r1[i] - 1] = 1.0;
  }
  emxFree_int32_T(&r2);
  emxInit_real_T(&r3, 2);
  repmat(varargin_2_data, varargin_2_size, m->size[0], r3);
  mmminusp_data = r3->data;
  emxInit_real_T(&x, 2);
  if ((r3->size[0] == mm->size[0]) && (r3->size[1] == mm->size[1])) {
    i = b->size[0] * b->size[1];
    b->size[0] = r3->size[0];
    b->size[1] = r3->size[1];
    emxEnsureCapacity_real_T(b, i);
    b_data = b->data;
    nrows = r3->size[0] * r3->size[1];
    for (i = 0; i < nrows; i++) {
      b_data[i] = (1.0 - mmminusp_data[i]) / (mm_data[i] + 1.0);
    }
    b_tinv(b, mmminusp, x);
    mmminusp_data = x->data;
  } else {
    hc_binary_expand_op(x, r3, mm, mmminusp);
    mmminusp_data = x->data;
  }
  emxFree_real_T(&r3);
  emxFree_real_T(&mmminusp);
  emxFree_real_T(&mm);
  nrows = x->size[0] * x->size[1];
  i = b->size[0] * b->size[1];
  b->size[0] = x->size[0];
  b->size[1] = x->size[1];
  emxEnsureCapacity_real_T(b, i);
  b_data = b->data;
  for (k = 0; k < nrows; k++) {
    b_data[k] = fabs(mmminusp_data[k]);
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
    sizes_idx_1 = b->size[1];
  } else {
    sizes_idx_1 = 0;
  }
  i = Bbound->size[0] * Bbound->size[1];
  Bbound->size[0] = b_n;
  Bbound->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(Bbound, i);
  mmminusp_data = Bbound->data;
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (k = 0; k < b_n; k++) {
      mmminusp_data[k] = m_data[k];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < sizes_idx_1; i++) {
    for (k = 0; k < b_n; k++) {
      mmminusp_data[k + Bbound->size[0] * (i + input_sizes_idx_1)] =
          b_data[k + b_n * i];
    }
  }
  emxFree_real_T(&b);
}

/* End of code generation (FSRbonfbound.c) */
