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
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "finv.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo bx_emlrtRSI = {
    166,                                                        /* lineNo */
    "FSMbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pathName */
};

static emlrtRSInfo cx_emlrtRSI = {
    163,                                                        /* lineNo */
    "FSMbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pathName */
};

static emlrtRSInfo dx_emlrtRSI = {
    158,                                                        /* lineNo */
    "FSMbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pathName */
};

static emlrtRSInfo ex_emlrtRSI = {
    157,                                                        /* lineNo */
    "FSMbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pathName */
};

static emlrtRSInfo fx_emlrtRSI = {
    153,                                                        /* lineNo */
    "FSMbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pathName */
};

static emlrtRSInfo gx_emlrtRSI = {
    141,                                                        /* lineNo */
    "FSMbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pathName */
};

static emlrtRSInfo hx_emlrtRSI = {
    113,                                                        /* lineNo */
    "FSMbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pathName */
};

static emlrtRSInfo ix_emlrtRSI = {
    109,                                                        /* lineNo */
    "FSMbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pathName */
};

static emlrtECInfo nb_emlrtECI = {
    2,                                                          /* nDims */
    163,                                                        /* lineNo */
    20,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo cn_emlrtRTEI = {
    153,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo dn_emlrtRTEI = {
    157,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo en_emlrtRTEI = {
    158,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo fn_emlrtRTEI = {
    163,                                                        /* lineNo */
    35,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo gn_emlrtRTEI = {
    163,                                                        /* lineNo */
    43,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo hn_emlrtRTEI = {
    163,                                                        /* lineNo */
    20,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo in_emlrtRTEI = {
    163,                                                        /* lineNo */
    60,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo jn_emlrtRTEI = {
    163,                                                        /* lineNo */
    71,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo kn_emlrtRTEI = {
    163,                                                        /* lineNo */
    56,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo ln_emlrtRTEI = {
    163,                                                        /* lineNo */
    81,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo mn_emlrtRTEI = {
    163,                                                        /* lineNo */
    51,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo nn_emlrtRTEI = {
    163,                                                        /* lineNo */
    15,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo on_emlrtRTEI = {
    163,                                                        /* lineNo */
    5,                                                          /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo pn_emlrtRTEI = {
    166,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo qn_emlrtRTEI = {
    1,                                                          /* lineNo */
    19,                                                         /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

static emlrtRTEInfo rn_emlrtRTEI = {
    153,                                                        /* lineNo */
    5,                                                          /* colNo */
    "FSMbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSMbonfbound.m" /* pName */
};

/* Function Definitions */
void FSMbonfbound(const emlrtStack *sp, real_T n, real_T p,
                  const real_T varargin_2_data[],
                  const int32_T varargin_2_size[2], real_T varargin_4,
                  emxArray_real_T *Bbound)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_real_T *b_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *probm;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *x;
  emxArray_real_T *y;
  real_T b_n;
  int32_T iv[2];
  int32_T z_size[2];
  int32_T b_x;
  int32_T csz_idx_1;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int8_T input_sizes_idx_1;
  boolean_T b_p;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
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
  if (muDoubleScalarIsNaN(n)) {
    st.site = &ix_emlrtRSI;
    c_error(&st);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &hx_emlrtRSI;
    d_error(&st);
  }
  /*  The default starting point to monitor mdr is equal to the integer part of
   */
  /*  floor(0.5*(n+p+1)) */
  /*  Notice that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &gx_emlrtRSI;
    e_error(&st);
  }
  emxInit_real_T(sp, &y, 2, &rn_emlrtRTEI, true);
  /*  Bonferroni bound generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &fx_emlrtRSI;
  b_st.site = &ft_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &vb_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(varargin_4) ||
              muDoubleScalarIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &vb_emlrtRTEI);
    y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, y, i, &vb_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &ct_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, y);
  }
  emxInit_real_T(&b_st, &m, 1, &cn_emlrtRTEI, true);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, m, i, &cn_emlrtRTEI);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    m->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  /*  mm = fwd search index replicated lp times. */
  if ((varargin_2_size[0] == 0) || (varargin_2_size[1] == 0)) {
    loop_ub = 0;
  } else {
    loop_ub = 1;
  }
  emxInit_real_T(sp, &mm, 2, &dn_emlrtRTEI, true);
  emxInit_real_T(sp, &x, 2, &fn_emlrtRTEI, true);
  st.site = &ex_emlrtRSI;
  b_repmat(&st, m, loop_ub, x);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = x->size[0];
  mm->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &dn_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = x->data[i];
  }
  emxInit_real_T(sp, &probm, 2, &en_emlrtRTEI, true);
  st.site = &dx_emlrtRSI;
  c_repmat(&st, varargin_2_data, varargin_2_size, m->size[0], x);
  i = probm->size[0] * probm->size[1];
  probm->size[0] = x->size[0];
  probm->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, probm, i, &en_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    probm->data[i] = x->data[i];
  }
  st.site = &cx_emlrtRSI;
  i = x->size[0] * x->size[1];
  x->size[0] = mm->size[0];
  x->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, x, i, &fn_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = mm->data[i] - 1.0;
  }
  emxInit_real_T(&st, &b_y, 2, &gn_emlrtRTEI, true);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, b_y, i, &gn_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = mm->data[i] - p;
  }
  b_st.site = &nx_emlrtRSI;
  c_st.site = &ox_emlrtRSI;
  d_st.site = &px_emlrtRSI;
  e_st.site = &ak_emlrtRSI;
  f_st.site = &qx_emlrtRSI;
  if (x->size[0] <= b_y->size[0]) {
    z_size[0] = x->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (x->size[1] <= b_y->size[1]) {
    z_size[1] = x->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != x->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &kb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &bk_emlrtRSI;
  g_st.site = &rx_emlrtRSI;
  if (x->size[0] <= b_y->size[0]) {
    z_size[0] = x->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (x->size[1] <= b_y->size[1]) {
    z_size[1] = x->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != x->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &kb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (x->size[0] <= b_y->size[0]) {
    loop_ub = x->size[0];
  } else {
    loop_ub = b_y->size[0];
  }
  if (x->size[1] <= b_y->size[1]) {
    b_x = x->size[1];
  } else {
    b_x = 0;
  }
  loop_ub *= b_x;
  g_st.site = &sx_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ad_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  emxInit_real_T(&g_st, &r, 2, &qn_emlrtRTEI, true);
  i = r->size[0] * r->size[1];
  r->size[0] = x->size[0];
  r->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, r, i, &hn_emlrtRTEI);
  b_n = n / (n - 1.0) * p;
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = b_n * (x->data[i] / b_y->data[i]);
  }
  st.site = &cx_emlrtRSI;
  i = x->size[0] * x->size[1];
  x->size[0] = probm->size[0];
  x->size[1] = probm->size[1];
  emxEnsureCapacity_real_T(&st, x, i, &in_emlrtRTEI);
  loop_ub = probm->size[0] * probm->size[1];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = 1.0 - probm->data[i];
  }
  emxFree_real_T(&probm);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, b_y, i, &jn_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = mm->data[i] + 1.0;
  }
  b_st.site = &nx_emlrtRSI;
  c_st.site = &ox_emlrtRSI;
  d_st.site = &px_emlrtRSI;
  e_st.site = &ak_emlrtRSI;
  f_st.site = &qx_emlrtRSI;
  if (x->size[0] <= b_y->size[0]) {
    z_size[0] = x->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (x->size[1] <= b_y->size[1]) {
    z_size[1] = x->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != x->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &kb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &bk_emlrtRSI;
  g_st.site = &rx_emlrtRSI;
  if (x->size[0] <= b_y->size[0]) {
    z_size[0] = x->size[0];
  } else {
    z_size[0] = b_y->size[0];
  }
  if (x->size[1] <= b_y->size[1]) {
    z_size[1] = x->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  b_p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if (z_size[loop_ub] != x->size[loop_ub]) {
      b_p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }
  if (b_p) {
    b_p = true;
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub < 2)) {
      if (z_size[loop_ub] != b_y->size[loop_ub]) {
        b_p = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &kb_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (x->size[0] <= b_y->size[0]) {
    loop_ub = x->size[0];
  } else {
    loop_ub = b_y->size[0];
  }
  if (x->size[1] <= b_y->size[1]) {
    b_x = x->size[1];
  } else {
    b_x = 0;
  }
  loop_ub *= b_x;
  g_st.site = &sx_emlrtRSI;
  if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
    h_st.site = &ad_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  emxInit_real_T(&g_st, &r1, 2, &kn_emlrtRTEI, true);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = x->size[0];
  r1->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, r1, i, &kn_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = 1.0 - x->data[i] / b_y->data[i];
  }
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, b_y, i, &ln_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = mm->data[i] - p;
  }
  st.site = &cx_emlrtRSI;
  b_finv(&st, r1, p, b_y, x);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = x->size[0];
  mm->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &mn_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  emxFree_real_T(&r1);
  emxFree_real_T(&b_y);
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = x->data[i];
  }
  z_size[0] = (*(int32_T(*)[2])r->size)[0];
  z_size[1] = (*(int32_T(*)[2])r->size)[1];
  iv[0] = (*(int32_T(*)[2])mm->size)[0];
  iv[1] = (*(int32_T(*)[2])mm->size)[1];
  emlrtSizeEqCheckNDR2012b(&z_size[0], &iv[0], &nb_emlrtECI, (emlrtCTX)sp);
  i = x->size[0] * x->size[1];
  x->size[0] = r->size[0];
  x->size[1] = r->size[1];
  emxEnsureCapacity_real_T(sp, x, i, &nn_emlrtRTEI);
  loop_ub = r->size[0] * r->size[1];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = r->data[i] * mm->data[i];
  }
  emxFree_real_T(&r);
  st.site = &cx_emlrtRSI;
  d_sqrt(&st, x);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = x->size[0];
  mm->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &on_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = x->data[i];
  }
  emxFree_real_T(&x);
  /* MinBonf =
   * sqrt(((m-1).^2./m).*betainv(1-((1-probm)./(mm+1)),p/2,(mm-p-1)/2)); */
  st.site = &bx_emlrtRSI;
  b_st.site = &xx_emlrtRSI;
  if (m->size[0] != 0) {
    b_x = m->size[0];
  } else if ((mm->size[0] != 0) && (mm->size[1] != 0)) {
    b_x = mm->size[0];
  } else {
    b_x = 0;
    if (mm->size[0] > 0) {
      b_x = mm->size[0];
    }
  }
  c_st.site = &uh_emlrtRSI;
  if ((m->size[0] != b_x) && (m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((mm->size[0] != b_x) && ((mm->size[0] != 0) && (mm->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_x == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || ((mm->size[0] != 0) && (mm->size[1] != 0))) {
    csz_idx_1 = mm->size[1];
  } else {
    csz_idx_1 = 0;
  }
  i = Bbound->size[0] * Bbound->size[1];
  Bbound->size[0] = b_x;
  Bbound->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, Bbound, i, &pn_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_x; i1++) {
      Bbound->data[i1] = m->data[i1];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_x; i1++) {
      Bbound->data[i1 + Bbound->size[0] * input_sizes_idx_1] = mm->data[i1];
    }
  }
  emxFree_real_T(&mm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSMbonfbound.c) */
