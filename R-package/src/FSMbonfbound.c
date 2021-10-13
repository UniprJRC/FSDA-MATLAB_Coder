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
#include <string.h>

/* Function Declarations */
static void u_binary_expand_op(emxArray_real_T *x, double n, double p,
                               const emxArray_real_T *y,
                               const emxArray_real_T *r1);

static void v_binary_expand_op(emxArray_real_T *b, double n, double p,
                               const emxArray_real_T *x,
                               const emxArray_real_T *y,
                               const emxArray_real_T *r1);

static void w_binary_expand_op(emxArray_real_T *b, const emxArray_real_T *r2,
                               double p);

/* Function Definitions */
static void u_binary_expand_op(emxArray_real_T *x, double n, double p,
                               const emxArray_real_T *y,
                               const emxArray_real_T *r1)
{
  emxArray_real_T *b_n;
  const double *r;
  const double *y_data;
  double c_n;
  double *n_data;
  double *x_data;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  int stride_2_0;
  int stride_2_1;
  r = r1->data;
  y_data = y->data;
  x_data = x->data;
  emxInit_real_T(&b_n, 2);
  c_n = n / (n - 1.0) * p;
  i = b_n->size[0] * b_n->size[1];
  if (r1->size[0] == 1) {
    if (y->size[0] == 1) {
      b_n->size[0] = x->size[0];
    } else {
      b_n->size[0] = y->size[0];
    }
  } else {
    b_n->size[0] = r1->size[0];
  }
  if (r1->size[1] == 1) {
    if (y->size[1] == 1) {
      b_n->size[1] = x->size[1];
    } else {
      b_n->size[1] = y->size[1];
    }
  } else {
    b_n->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(b_n, i);
  n_data = b_n->data;
  stride_0_0 = (x->size[0] != 1);
  stride_0_1 = (x->size[1] != 1);
  stride_1_0 = (y->size[0] != 1);
  stride_1_1 = (y->size[1] != 1);
  stride_2_0 = (r1->size[0] != 1);
  stride_2_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  if (r1->size[1] == 1) {
    if (y->size[1] == 1) {
      loop_ub = x->size[1];
    } else {
      loop_ub = y->size[1];
    }
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      if (y->size[0] == 1) {
        b_loop_ub = x->size[0];
      } else {
        b_loop_ub = y->size[0];
      }
    } else {
      b_loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      n_data[i1 + b_n->size[0] * i] =
          c_n *
          (x_data[i1 * stride_0_0 + x->size[0] * aux_0_1] /
           y_data[i1 * stride_1_0 + y->size[0] * aux_1_1]) *
          r[i1 * stride_2_0 + r1->size[0] * aux_2_1];
    }
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = x->size[0] * x->size[1];
  x->size[0] = b_n->size[0];
  x->size[1] = b_n->size[1];
  emxEnsureCapacity_real_T(x, i);
  x_data = x->data;
  loop_ub = b_n->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_n->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      x_data[i1 + x->size[0] * i] = n_data[i1 + b_n->size[0] * i];
    }
  }
  emxFree_real_T(&b_n);
}

static void v_binary_expand_op(emxArray_real_T *b, double n, double p,
                               const emxArray_real_T *x,
                               const emxArray_real_T *y,
                               const emxArray_real_T *r1)
{
  const double *r;
  const double *x_data;
  const double *y_data;
  double b_n;
  double *b_data;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  int stride_2_0;
  int stride_2_1;
  r = r1->data;
  y_data = y->data;
  x_data = x->data;
  b_n = n / (n - 1.0) * p;
  i = b->size[0] * b->size[1];
  if (r1->size[0] == 1) {
    if (y->size[0] == 1) {
      b->size[0] = x->size[0];
    } else {
      b->size[0] = y->size[0];
    }
  } else {
    b->size[0] = r1->size[0];
  }
  if (r1->size[1] == 1) {
    if (y->size[1] == 1) {
      b->size[1] = x->size[1];
    } else {
      b->size[1] = y->size[1];
    }
  } else {
    b->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(b, i);
  b_data = b->data;
  stride_0_0 = (x->size[0] != 1);
  stride_0_1 = (x->size[1] != 1);
  stride_1_0 = (y->size[0] != 1);
  stride_1_1 = (y->size[1] != 1);
  stride_2_0 = (r1->size[0] != 1);
  stride_2_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  if (r1->size[1] == 1) {
    if (y->size[1] == 1) {
      loop_ub = x->size[1];
    } else {
      loop_ub = y->size[1];
    }
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      if (y->size[0] == 1) {
        b_loop_ub = x->size[0];
      } else {
        b_loop_ub = y->size[0];
      }
    } else {
      b_loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_data[i1 + b->size[0] * i] =
          b_n *
          (x_data[i1 * stride_0_0 + x->size[0] * aux_0_1] /
           y_data[i1 * stride_1_0 + y->size[0] * aux_1_1]) *
          r[i1 * stride_2_0 + r1->size[0] * aux_2_1];
    }
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void w_binary_expand_op(emxArray_real_T *b, const emxArray_real_T *r2,
                               double p)
{
  emxArray_real_T *b_b;
  emxArray_real_T *r1;
  const double *r;
  double *b_b_data;
  double *b_data;
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
  r = r2->data;
  b_data = b->data;
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  if (b->size[0] == 1) {
    r1->size[0] = r2->size[0];
  } else {
    r1->size[0] = b->size[0];
  }
  if (b->size[1] == 1) {
    r1->size[1] = r2->size[1];
  } else {
    r1->size[1] = b->size[1];
  }
  emxEnsureCapacity_real_T(r1, i);
  b_b_data = r1->data;
  stride_0_0 = (r2->size[0] != 1);
  stride_0_1 = (r2->size[1] != 1);
  stride_1_0 = (b->size[0] != 1);
  stride_1_1 = (b->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (b->size[1] == 1) {
    loop_ub = r2->size[1];
  } else {
    loop_ub = b->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (b->size[0] == 1) {
      b_loop_ub = r2->size[0];
    } else {
      b_loop_ub = b->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b_data[i1 + r1->size[0] * i] =
          1.0 - (1.0 - r[i1 * stride_0_0 + r2->size[0] * aux_0_1]) /
                    (b_data[i1 * stride_1_0 + b->size[0] * aux_1_1] + 1.0);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  emxInit_real_T(&b_b, 2);
  i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b->size[0];
  b_b->size[1] = b->size[1];
  emxEnsureCapacity_real_T(b_b, i);
  b_b_data = b_b->data;
  loop_ub = b->size[0] * b->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b_data[i] = b_data[i] - p;
  }
  b_finv(r1, p, b_b, b);
  emxFree_real_T(&b_b);
  emxFree_real_T(&r1);
}

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
  emxArray_real_T *x;
  emxArray_real_T *y;
  double c_n;
  double *Bbound_data;
  double *b_data;
  double *m_data;
  double *r2;
  double *x_data;
  double *y_data;
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
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
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
  y_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, k);
    y_data = y->data;
    for (k = 0; k <= nrows; k++) {
      y_data[k] = varargin_4 + (double)k;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    y_data = y->data;
  }
  emxInit_real_T(&m, 1);
  k = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, k);
  m_data = m->data;
  nrows = y->size[1];
  for (k = 0; k < nrows; k++) {
    m_data[k] = y_data[k];
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
  b_data = b->data;
  nrows = m->size[0];
  for (jtilecol = 0; jtilecol <= b_n; jtilecol++) {
    for (k = 0; k < nrows; k++) {
      b_data[k] = m_data[k];
    }
  }
  emxInit_real_T(&x, 2);
  k = x->size[0] * x->size[1];
  x->size[0] = b->size[0];
  x->size[1] = b->size[1];
  emxEnsureCapacity_real_T(x, k);
  x_data = x->data;
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    x_data[k] = b_data[k] - 1.0;
  }
  emxInit_real_T(&b_y, 2);
  k = b_y->size[0] * b_y->size[1];
  b_y->size[0] = b->size[0];
  b_y->size[1] = b->size[1];
  emxEnsureCapacity_real_T(b_y, k);
  y_data = b_y->data;
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    y_data[k] = b_data[k] - p;
  }
  emxInit_real_T(&r, 2);
  repmat(varargin_2_data, varargin_2_size, m->size[0], r);
  Bbound_data = r->data;
  if ((r->size[0] == b->size[0]) && (r->size[1] == b->size[1])) {
    emxInit_real_T(&r1, 2);
    k = r1->size[0] * r1->size[1];
    r1->size[0] = r->size[0];
    r1->size[1] = r->size[1];
    emxEnsureCapacity_real_T(r1, k);
    r2 = r1->data;
    nrows = r->size[0] * r->size[1];
    for (k = 0; k < nrows; k++) {
      r2[k] = 1.0 - (1.0 - Bbound_data[k]) / (b_data[k] + 1.0);
    }
    emxInit_real_T(&b_b, 2);
    k = b_b->size[0] * b_b->size[1];
    b_b->size[0] = b->size[0];
    b_b->size[1] = b->size[1];
    emxEnsureCapacity_real_T(b_b, k);
    Bbound_data = b_b->data;
    nrows = b->size[0] * b->size[1];
    for (k = 0; k < nrows; k++) {
      Bbound_data[k] = b_data[k] - p;
    }
    b_finv(r1, p, b_b, b);
    b_data = b->data;
    emxFree_real_T(&b_b);
    emxFree_real_T(&r1);
  } else {
    w_binary_expand_op(b, r, p);
    b_data = b->data;
  }
  k = r->size[0] * r->size[1];
  r->size[0] = b->size[0];
  r->size[1] = b->size[1];
  emxEnsureCapacity_real_T(r, k);
  Bbound_data = r->data;
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    Bbound_data[k] = b_data[k];
  }
  if (x->size[0] == 1) {
    nrows = b_y->size[0];
  } else {
    nrows = x->size[0];
  }
  if (x->size[1] == 1) {
    k = b_y->size[1];
  } else {
    k = x->size[1];
  }
  if ((x->size[0] == b_y->size[0]) && (x->size[1] == b_y->size[1]) &&
      (nrows == r->size[0]) && (k == r->size[1])) {
    c_n = n / (n - 1.0) * p;
    k = b->size[0] * b->size[1];
    b->size[0] = x->size[0];
    b->size[1] = x->size[1];
    emxEnsureCapacity_real_T(b, k);
    b_data = b->data;
    nrows = x->size[0] * x->size[1];
    for (k = 0; k < nrows; k++) {
      b_data[k] = c_n * (x_data[k] / y_data[k]) * Bbound_data[k];
    }
  } else {
    v_binary_expand_op(b, n, p, x, b_y, r);
    b_data = b->data;
  }
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    b_data[k] = sqrt(b_data[k]);
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
  if (x->size[0] == 1) {
    nrows = b_y->size[0];
  } else {
    nrows = x->size[0];
  }
  if (x->size[1] == 1) {
    k = b_y->size[1];
  } else {
    k = x->size[1];
  }
  if ((x->size[0] == b_y->size[0]) && (x->size[1] == b_y->size[1]) &&
      (nrows == r->size[0]) && (k == r->size[1])) {
    c_n = n / (n - 1.0) * p;
    nrows = x->size[0] * x->size[1];
    for (k = 0; k < nrows; k++) {
      x_data[k] = c_n * (x_data[k] / y_data[k]) * Bbound_data[k];
    }
  } else {
    u_binary_expand_op(x, n, p, b_y, r);
    x_data = x->data;
  }
  emxFree_real_T(&r);
  emxFree_real_T(&b_y);
  nrows = x->size[0] * x->size[1];
  for (k = 0; k < nrows; k++) {
    x_data[k] = sqrt(x_data[k]);
  }
  k = Bbound->size[0] * Bbound->size[1];
  Bbound->size[0] = b_n;
  Bbound->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(Bbound, k);
  Bbound_data = Bbound->data;
  nrows = input_sizes_idx_1;
  for (k = 0; k < nrows; k++) {
    for (jtilecol = 0; jtilecol < b_n; jtilecol++) {
      Bbound_data[jtilecol] = m_data[jtilecol];
    }
  }
  emxFree_real_T(&m);
  nrows = sizes_idx_1;
  for (k = 0; k < nrows; k++) {
    for (jtilecol = 0; jtilecol < b_n; jtilecol++) {
      Bbound_data[jtilecol + Bbound->size[0] * (k + input_sizes_idx_1)] =
          x_data[jtilecol + b_n * k];
    }
  }
  emxFree_real_T(&x);
}

/* End of code generation (FSMbonfbound.c) */
