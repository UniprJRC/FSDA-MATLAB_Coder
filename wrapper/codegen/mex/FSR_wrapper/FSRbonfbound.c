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
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "abs.h"
#include "colon.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "tinv.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo klb_emlrtRSI = {
    137,                                                        /* lineNo */
    "FSRbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pathName */
};

static emlrtRSInfo llb_emlrtRSI = {
    135,                                                        /* lineNo */
    "FSRbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pathName */
};

static emlrtRSInfo mlb_emlrtRSI = {
    129,                                                        /* lineNo */
    "FSRbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pathName */
};

static emlrtRSInfo nlb_emlrtRSI = {
    128,                                                        /* lineNo */
    "FSRbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pathName */
};

static emlrtRSInfo olb_emlrtRSI = {
    124,                                                        /* lineNo */
    "FSRbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pathName */
};

static emlrtRSInfo plb_emlrtRSI = {
    113,                                                        /* lineNo */
    "FSRbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pathName */
};

static emlrtRSInfo qlb_emlrtRSI = {
    91,                                                         /* lineNo */
    "FSRbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pathName */
};

static emlrtRSInfo rlb_emlrtRSI = {
    87,                                                         /* lineNo */
    "FSRbonfbound",                                             /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pathName */
};

static emlrtBCInfo qfb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    132,                                                         /* lineNo */
    1,                                                           /* colNo */
    "mm",                                                        /* aName */
    "FSRbonfbound",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo rfb_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    133,                                                         /* lineNo */
    1,                                                           /* colNo */
    "mmminusp",                                                  /* aName */
    "FSRbonfbound",                                              /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtRTEInfo pfb_emlrtRTEI = {
    124,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo qfb_emlrtRTEI = {
    128,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo rfb_emlrtRTEI = {
    129,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo sfb_emlrtRTEI = {
    131,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo tfb_emlrtRTEI = {
    1,                                                          /* lineNo */
    19,                                                         /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo ufb_emlrtRTEI = {
    135,                                                        /* lineNo */
    21,                                                         /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo vfb_emlrtRTEI = {
    135,                                                        /* lineNo */
    32,                                                         /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo wfb_emlrtRTEI = {
    137,                                                        /* lineNo */
    1,                                                          /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo xfb_emlrtRTEI = {
    132,                                                        /* lineNo */
    4,                                                          /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo yfb_emlrtRTEI = {
    133,                                                        /* lineNo */
    10,                                                         /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

static emlrtRTEInfo agb_emlrtRTEI = {
    124,                                                        /* lineNo */
    5,                                                          /* colNo */
    "FSRbonfbound",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities_stat\\FSRbonfbound.m" /* pName */
};

/* Function Definitions */
void FSRbonfbound(const emlrtStack *sp, real_T n, real_T p,
                  const real_T varargin_2_data[],
                  const int32_T varargin_2_size[2], real_T varargin_4,
                  emxArray_real_T *Bbound)
{
  static const int32_T b_iv[2] = {1, 24};
  static const int32_T iv1[2] = {1, 44};
  static const char_T varargin_1[24] = {'F', 'S', 'D', 'A', ':', 'F', 'S', 'R',
                                        'b', 'o', 'n', 'f', 'b', 'o', 'u', 'n',
                                        'd', ':', 'W', 'r', 'o', 'n', 'g', 'n'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *b_m;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *mm;
  emxArray_real_T *mmminusp;
  emxArray_real_T *probm;
  emxArray_real_T *x;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  int32_T z_size[2];
  int32_T b_n;
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
  if (muDoubleScalarIsNaN(n)) {
    st.site = &rlb_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&st, 24, m, &varargin_1[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 44, m, &cv18[0]);
    emlrtAssign(&b_y, m);
    b_st.site = &qqb_emlrtRSI;
    w_error(&b_st, y, b_y, &d_emlrtMCI);
  }
  if (muDoubleScalarIsNaN(p)) {
    st.site = &qlb_emlrtRSI;
    q_error(&st);
  }
  /*  The default starting point to monitor mdr is equal to the integer part of
   */
  /*  floor(0.5*(n+p+1)) */
  /*  Notice that prob must be a row vector */
  /*  Check that the specified starting point is not greater than n-1 */
  if (varargin_4 > n - 1.0) {
    st.site = &plb_emlrtRSI;
    r_error(&st, varargin_4, n - 1.0);
  }
  emxInit_real_T(sp, &c_y, 2, &agb_emlrtRTEI, true);
  /*  Bonferroni bound generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  st.site = &olb_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  if (muDoubleScalarIsNaN(varargin_4) || muDoubleScalarIsNaN(n - 1.0)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, c_y, i, &hd_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    c_y->size[0] = 1;
    c_y->size[1] = 0;
  } else if ((muDoubleScalarIsInf(varargin_4) ||
              muDoubleScalarIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    c_y->size[1] = 1;
    emxEnsureCapacity_real_T(&b_st, c_y, i, &hd_emlrtRTEI);
    c_y->data[0] = rtNaN;
  } else if (muDoubleScalarFloor(varargin_4) == varargin_4) {
    i = c_y->size[0] * c_y->size[1];
    c_y->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor((n - 1.0) - varargin_4);
    c_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&b_st, c_y, i, &hd_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      c_y->data[i] = varargin_4 + (real_T)i;
    }
  } else {
    c_st.site = &gd_emlrtRSI;
    eml_float_colon(&c_st, varargin_4, n - 1.0, c_y);
  }
  emxInit_real_T(&b_st, &b_m, 1, &pfb_emlrtRTEI, true);
  i = b_m->size[0];
  b_m->size[0] = c_y->size[1];
  emxEnsureCapacity_real_T(sp, b_m, i, &pfb_emlrtRTEI);
  loop_ub = c_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_m->data[i] = c_y->data[i];
  }
  emxFree_real_T(&c_y);
  /*  mm = fwd search index replicated lp times. */
  if ((varargin_2_size[0] == 0) || (varargin_2_size[1] == 0)) {
    b_n = 0;
  } else {
    b_n = 1;
  }
  emxInit_real_T(sp, &mm, 2, &qfb_emlrtRTEI, true);
  emxInit_real_T(sp, &x, 2, &ufb_emlrtRTEI, true);
  st.site = &nlb_emlrtRSI;
  b_repmat(&st, b_m, b_n, x);
  i = mm->size[0] * mm->size[1];
  mm->size[0] = x->size[0];
  mm->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &qfb_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = x->data[i];
  }
  emxInit_real_T(sp, &probm, 2, &rfb_emlrtRTEI, true);
  st.site = &mlb_emlrtRSI;
  c_repmat(&st, varargin_2_data, varargin_2_size, b_m->size[0], x);
  i = probm->size[0] * probm->size[1];
  probm->size[0] = x->size[0];
  probm->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, probm, i, &rfb_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    probm->data[i] = x->data[i];
  }
  emxInit_real_T(sp, &mmminusp, 2, &sfb_emlrtRTEI, true);
  /*  Set to 1 all m-p not greater than 0 */
  i = mmminusp->size[0] * mmminusp->size[1];
  mmminusp->size[0] = mm->size[0];
  mmminusp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(sp, mmminusp, i, &sfb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    mmminusp->data[i] = mm->data[i] - p;
  }
  csz_idx_1 = mm->size[0] * mm->size[1] - 1;
  b_n = 0;
  for (loop_ub = 0; loop_ub <= csz_idx_1; loop_ub++) {
    if (mm->data[loop_ub] - p <= 0.0) {
      b_n++;
    }
  }
  emxInit_int32_T(sp, &r, 1, &xfb_emlrtRTEI, true);
  i = r->size[0];
  r->size[0] = b_n;
  emxEnsureCapacity_int32_T(sp, r, i, &tfb_emlrtRTEI);
  b_n = 0;
  for (loop_ub = 0; loop_ub <= csz_idx_1; loop_ub++) {
    if (mm->data[loop_ub] - p <= 0.0) {
      r->data[b_n] = loop_ub + 1;
      b_n++;
    }
  }
  loop_ub = r->size[0] - 1;
  b_n = mm->size[0] * mm->size[1];
  for (i = 0; i <= loop_ub; i++) {
    if (r->data[i] > b_n) {
      emlrtDynamicBoundsCheckR2012b(r->data[i], 1, b_n, &qfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    mm->data[r->data[i] - 1] = 1.0;
  }
  emxFree_int32_T(&r);
  csz_idx_1 = mmminusp->size[0] * mmminusp->size[1] - 1;
  b_n = 0;
  for (loop_ub = 0; loop_ub <= csz_idx_1; loop_ub++) {
    if (mmminusp->data[loop_ub] <= 0.0) {
      b_n++;
    }
  }
  emxInit_int32_T(sp, &r1, 1, &yfb_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = b_n;
  emxEnsureCapacity_int32_T(sp, r1, i, &tfb_emlrtRTEI);
  b_n = 0;
  for (loop_ub = 0; loop_ub <= csz_idx_1; loop_ub++) {
    if (mmminusp->data[loop_ub] <= 0.0) {
      r1->data[b_n] = loop_ub + 1;
      b_n++;
    }
  }
  loop_ub = r1->size[0] - 1;
  b_n = mmminusp->size[0] * mmminusp->size[1];
  for (i = 0; i <= loop_ub; i++) {
    if (r1->data[i] > b_n) {
      emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, b_n, &rfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    mmminusp->data[r1->data[i] - 1] = 1.0;
  }
  emxFree_int32_T(&r1);
  st.site = &llb_emlrtRSI;
  i = x->size[0] * x->size[1];
  x->size[0] = probm->size[0];
  x->size[1] = probm->size[1];
  emxEnsureCapacity_real_T(&st, x, i, &ufb_emlrtRTEI);
  loop_ub = probm->size[0] * probm->size[1];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = 1.0 - probm->data[i];
  }
  emxInit_real_T(&st, &d_y, 2, &vfb_emlrtRTEI, true);
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = mm->size[0];
  d_y->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(&st, d_y, i, &vfb_emlrtRTEI);
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = mm->data[i] + 1.0;
  }
  b_st.site = &jd_emlrtRSI;
  c_st.site = &kd_emlrtRSI;
  d_st.site = &ld_emlrtRSI;
  e_st.site = &md_emlrtRSI;
  f_st.site = &nd_emlrtRSI;
  if (x->size[0] <= d_y->size[0]) {
    z_size[0] = x->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  if (x->size[1] <= d_y->size[1]) {
    z_size[1] = x->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  b_p = true;
  b_n = 0;
  exitg1 = false;
  while ((!exitg1) && (b_n < 2)) {
    if (z_size[b_n] != x->size[b_n]) {
      b_p = false;
      exitg1 = true;
    } else {
      b_n++;
    }
  }
  if (b_p) {
    b_p = true;
    b_n = 0;
    exitg1 = false;
    while ((!exitg1) && (b_n < 2)) {
      if (z_size[b_n] != d_y->size[b_n]) {
        b_p = false;
        exitg1 = true;
      } else {
        b_n++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&f_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  f_st.site = &od_emlrtRSI;
  g_st.site = &pd_emlrtRSI;
  if (x->size[0] <= d_y->size[0]) {
    z_size[0] = x->size[0];
  } else {
    z_size[0] = d_y->size[0];
  }
  if (x->size[1] <= d_y->size[1]) {
    z_size[1] = x->size[1];
  } else {
    z_size[1] = 0;
  }
  empty_non_axis_sizes = true;
  b_p = true;
  b_n = 0;
  exitg1 = false;
  while ((!exitg1) && (b_n < 2)) {
    if (z_size[b_n] != x->size[b_n]) {
      b_p = false;
      exitg1 = true;
    } else {
      b_n++;
    }
  }
  if (b_p) {
    b_p = true;
    b_n = 0;
    exitg1 = false;
    while ((!exitg1) && (b_n < 2)) {
      if (z_size[b_n] != d_y->size[b_n]) {
        b_p = false;
        exitg1 = true;
      } else {
        b_n++;
      }
    }
    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  if (x->size[0] <= d_y->size[0]) {
    b_n = x->size[0];
  } else {
    b_n = d_y->size[0];
  }
  if (x->size[1] <= d_y->size[1]) {
    csz_idx_1 = x->size[1];
  } else {
    csz_idx_1 = 0;
  }
  b_n *= csz_idx_1;
  g_st.site = &qd_emlrtRSI;
  if ((1 <= b_n) && (b_n > 2147483646)) {
    h_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&h_st);
  }
  i = mm->size[0] * mm->size[1];
  mm->size[0] = x->size[0];
  mm->size[1] = x->size[1];
  emxEnsureCapacity_real_T(sp, mm, i, &tfb_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1];
  for (i = 0; i < loop_ub; i++) {
    mm->data[i] = x->data[i] / d_y->data[i];
  }
  emxFree_real_T(&d_y);
  emxFree_real_T(&x);
  st.site = &llb_emlrtRSI;
  b_tinv(&st, mm, mmminusp, probm);
  st.site = &llb_emlrtRSI;
  c_abs(&st, probm, mm);
  st.site = &klb_emlrtRSI;
  b_st.site = &mbb_emlrtRSI;
  emxFree_real_T(&mmminusp);
  emxFree_real_T(&probm);
  if (b_m->size[0] != 0) {
    b_n = b_m->size[0];
  } else if ((mm->size[0] != 0) && (mm->size[1] != 0)) {
    b_n = mm->size[0];
  } else {
    b_n = 0;
    if (mm->size[0] > 0) {
      b_n = mm->size[0];
    }
  }
  c_st.site = &gl_emlrtRSI;
  if ((b_m->size[0] != b_n) && (b_m->size[0] != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((mm->size[0] != b_n) && ((mm->size[0] != 0) && (mm->size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ob_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (b_n == 0);
  if (empty_non_axis_sizes || (b_m->size[0] != 0)) {
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
  Bbound->size[0] = b_n;
  Bbound->size[1] = input_sizes_idx_1 + csz_idx_1;
  emxEnsureCapacity_real_T(sp, Bbound, i, &wfb_emlrtRTEI);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < b_n; i1++) {
      Bbound->data[i1] = b_m->data[i1];
    }
  }
  emxFree_real_T(&b_m);
  for (i = 0; i < csz_idx_1; i++) {
    for (i1 = 0; i1 < b_n; i1++) {
      Bbound->data[i1 + Bbound->size[0] * input_sizes_idx_1] = mm->data[i1];
    }
  }
  emxFree_real_T(&mm);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (FSRbonfbound.c) */
