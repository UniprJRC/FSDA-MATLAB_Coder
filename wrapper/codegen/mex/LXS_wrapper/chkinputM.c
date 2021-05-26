/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chkinputM.c
 *
 * Code generation for function 'chkinputM'
 *
 */

/* Include files */
#include "chkinputM.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_mexutil.h"
#include "LXS_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "int2str.h"
#include "mtimes.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo sh_emlrtRSI = {
    86,                                                 /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo th_emlrtRSI = {
    94,                                                 /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo uh_emlrtRSI = {
    102,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo vh_emlrtRSI = {
    104,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo wh_emlrtRSI = {
    117,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo xh_emlrtRSI = {
    116,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo yh_emlrtRSI = {
    120,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo ai_emlrtRSI = {
    122,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtMCInfo l_emlrtMCI = {
    108,                                                /* lineNo */
    13,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtECInfo xc_emlrtECI = {
    2,                                                  /* nDims */
    102,                                                /* lineNo */
    22,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtBCInfo ns_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    98,                                                  /* lineNo */
    9,                                                   /* colNo */
    "X",                                                 /* aName */
    "chkinputM",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtRTEInfo qx_emlrtRTEI = {
    94,                                                 /* lineNo */
    22,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo rx_emlrtRTEI = {
    1,                                                  /* lineNo */
    20,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo sx_emlrtRTEI = {
    98,                                                 /* lineNo */
    7,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo tx_emlrtRTEI = {
    98,                                                 /* lineNo */
    5,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo ux_emlrtRTEI = {
    102,                                                /* lineNo */
    22,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo vx_emlrtRTEI = {
    102,                                                /* lineNo */
    5,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo wx_emlrtRTEI = {
    104,                                                /* lineNo */
    13,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo xx_emlrtRTEI = {
    97,                                                 /* lineNo */
    5,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo yx_emlrtRTEI = {
    98,                                                 /* lineNo */
    9,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo ay_emlrtRTEI = {
    94,                                                 /* lineNo */
    20,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRSInfo whb_emlrtRSI = {
    108,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

/* Function Definitions */
void chkinputM(const emlrtStack *sp, emxArray_real_T *X)
{
  static const int32_T iv[2] = {1, 28};
  static const int32_T iv1[2] = {1, 29};
  static const int32_T iv2[2] = {1, 60};
  static const int32_T iv3[2] = {1, 25};
  static const int32_T iv4[2] = {1, 20};
  static const int32_T iv5[2] = {1, 24};
  static const char_T u[60] = {
      'W', 'a', 'r', 'n', 'i', 'n', 'g', ':', ' ', 'c', 'o', 'l',
      'u', 'm', 'n', 's', ' ', 'c', 'o', 'n', 's', 't', 'a', 'n',
      't', ' ', 'a', 'n', 'd', ' ', 'j', 'u', 's', 't', ' ', 'o',
      'n', ' ', 'o', 'f', ' ', 't', 'h', 'e', 'm', ' ', 'h', 'a',
      's', ' ', 'b', 'e', 'e', 'n', ' ', 'k', 'e', 'p', 't', '!'};
  static const char_T varargin_1[28] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u', 't', 'M',
      ':', 'm', 'i', 's', 's', 'i', 'n', 'g', 'I', 'n', 'p', 'u', 't', 's'};
  static const char_T b_varargin_1[25] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u', 't',
      'M', ':', 'N', 'o', 'F', 'u', 'l', 'l', 'R', 'a', 'n', 'k'};
  static const char_T c_varargin_1[24] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u',
      't', 'M', ':', 'N', 'S', 'm', 'a', 'l', 'l', 'e', 'r', 'P'};
  static const char_T b_cv[7] = {' ', 'a', 'n', 'd', ' ', 'p', '='};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *ok;
  emxArray_boolean_T *r1;
  emxArray_int32_T *ii;
  emxArray_int32_T *r2;
  emxArray_real_T *b_X;
  emxArray_real_T *constcols;
  emxArray_real_T *r;
  emxArray_real_T *r3;
  emxArray_real_T *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *m;
  real_T a;
  real_T b_tmp;
  int32_T b_tmp_size[2];
  int32_T tmp_size[2];
  int32_T b_m;
  int32_T b_n;
  int32_T i;
  int32_T loop_ub;
  int32_T n;
  char_T b_tmp_data[310];
  char_T tmp_data[310];
  char_T varargin_2_data[68];
  boolean_T p;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  /* chkinputM makes some input parameters and user options checking in
   * multivariate analysis */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  X :          Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                X represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  nnargin:      nargin. Scalar. The number of input arguments specified for
   * the caller */
  /*                function. */
  /*  vvarargin:    nvarargin. Scalar. The variable length input argument list
   */
  /*                specified for the */
  /*                caller function. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*  X:            Data matrix without missing and infs. Matrix. */
  /*                The new matrix of variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of variable in the input data matrix. */
  /*  */
  /*  See also */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Example: */
  /* { */
  /*     %% example_producing_error */
  /*     %To examplify the behaviour of chkinputM, we call function FSM with a
   */
  /*     %X with more columns then rows. */
  /*     n=3; */
  /*     p=200; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSM(X); */
  /* } */
  /*  Beginning of code */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  If nocheck=1, then skip checks on y and X */
  /*  The second argument which is passed is X */
  if ((X->size[0] == 0) || (X->size[1] == 0)) {
    st.site = &sh_emlrtRSI;
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 28, m, &varargin_1[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 29, m, &cv18[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &jib_emlrtRSI;
    o_error(&b_st, b_y, c_y, &d_emlrtMCI);
  }
  emxInit_real_T(sp, &y, 1, &ay_emlrtRTEI, true);
  emxInit_real_T(sp, &r, 1, &qx_emlrtRTEI, true);
  /*  Check dimension consistency of X and y */
  st.site = &th_emlrtRSI;
  b_st.site = &gc_emlrtRSI;
  b_m = X->size[1];
  i = r->size[0];
  r->size[0] = b_m;
  emxEnsureCapacity_real_T(&st, r, i, &qx_emlrtRTEI);
  for (i = 0; i < b_m; i++) {
    r->data[i] = 1.0;
  }
  emxInit_boolean_T(&st, &ok, 1, &xx_emlrtRTEI, true);
  b_st.site = &fc_emlrtRSI;
  mtimes(&b_st, X, r, y);
  /*  Observations with missing or infinite values are removed from X and y */
  i = ok->size[0];
  ok->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(sp, ok, i, &yw_emlrtRTEI);
  loop_ub = y->size[0];
  emxFree_real_T(&r);
  for (i = 0; i < loop_ub; i++) {
    ok->data[i] = muDoubleScalarIsInf(y->data[i]);
  }
  emxInit_boolean_T(sp, &r1, 1, &og_emlrtRTEI, true);
  i = r1->size[0];
  r1->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(sp, r1, i, &og_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = muDoubleScalarIsNaN(y->data[i]);
  }
  emxFree_real_T(&y);
  loop_ub = ok->size[0];
  for (i = 0; i < loop_ub; i++) {
    ok->data[i] = ((!ok->data[i]) && (!r1->data[i]));
  }
  emxFree_boolean_T(&r1);
  n = ok->size[0] - 1;
  b_m = 0;
  for (i = 0; i <= n; i++) {
    if (ok->data[i]) {
      b_m++;
    }
  }
  emxInit_int32_T(sp, &r2, 1, &yx_emlrtRTEI, true);
  i = r2->size[0];
  r2->size[0] = b_m;
  emxEnsureCapacity_int32_T(sp, r2, i, &rx_emlrtRTEI);
  b_m = 0;
  for (i = 0; i <= n; i++) {
    if (ok->data[i]) {
      r2->data[b_m] = i + 1;
      b_m++;
    }
  }
  emxFree_boolean_T(&ok);
  emxInit_real_T(sp, &b_X, 2, &sx_emlrtRTEI, true);
  b_m = X->size[0];
  n = X->size[1] - 1;
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = r2->size[0];
  b_X->size[1] = n + 1;
  emxEnsureCapacity_real_T(sp, b_X, i, &sx_emlrtRTEI);
  for (i = 0; i <= n; i++) {
    loop_ub = r2->size[0];
    for (b_n = 0; b_n < loop_ub; b_n++) {
      if (r2->data[b_n] > b_m) {
        emlrtDynamicBoundsCheckR2012b(r2->data[b_n], 1, b_m, &ns_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      b_X->data[b_n + b_X->size[0] * i] =
          X->data[(r2->data[b_n] + X->size[0] * i) - 1];
    }
  }
  emxFree_int32_T(&r2);
  i = X->size[0] * X->size[1];
  X->size[0] = b_X->size[0];
  X->size[1] = b_X->size[1];
  emxEnsureCapacity_real_T(sp, X, i, &tx_emlrtRTEI);
  loop_ub = b_X->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_m = b_X->size[0];
    for (b_n = 0; b_n < b_m; b_n++) {
      X->data[b_n + X->size[0] * i] = b_X->data[b_n + b_X->size[0] * i];
    }
  }
  emxFree_real_T(&b_X);
  /*  Now n is the new number of non missing observations */
  if ((X->size[0] == 0) || (X->size[1] == 0)) {
    b_n = 0;
  } else {
    b_n = muIntScalarMax_sint32(X->size[0], X->size[1]);
  }
  /*  constcols = scalar vector of the indices of possible constant columns. */
  st.site = &uh_emlrtRSI;
  b_st.site = &lc_emlrtRSI;
  c_st.site = &mc_emlrtRSI;
  d_st.site = &nc_emlrtRSI;
  if (X->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &eb_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  emxInit_real_T(&d_st, &constcols, 2, &vx_emlrtRTEI, true);
  e_st.site = &oc_emlrtRSI;
  f_st.site = &pc_emlrtRSI;
  g_st.site = &qc_emlrtRSI;
  b_m = X->size[0];
  n = X->size[1];
  i = constcols->size[0] * constcols->size[1];
  constcols->size[0] = 1;
  constcols->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&g_st, constcols, i, &jg_emlrtRTEI);
  if (X->size[1] >= 1) {
    h_st.site = &sc_emlrtRSI;
    if ((1 <= X->size[1]) && (X->size[1] > 2147483646)) {
      i_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }
    for (loop_ub = 0; loop_ub < n; loop_ub++) {
      constcols->data[loop_ub] = X->data[X->size[0] * loop_ub];
      h_st.site = &rc_emlrtRSI;
      if ((2 <= b_m) && (b_m > 2147483646)) {
        i_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (i = 2; i <= b_m; i++) {
        a = constcols->data[loop_ub];
        b_tmp = X->data[(i + X->size[0] * loop_ub) - 1];
        if (muDoubleScalarIsNaN(b_tmp)) {
          p = false;
        } else if (muDoubleScalarIsNaN(a)) {
          p = true;
        } else {
          p = (a < b_tmp);
        }
        if (p) {
          constcols->data[loop_ub] = b_tmp;
        }
      }
    }
  }
  st.site = &uh_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (X->size[0] < 1) {
    emlrtErrorWithMessageIdR2018a(&d_st, &eb_emlrtRTEI,
                                  "Coder:toolbox:eml_min_or_max_varDimZero",
                                  "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }
  emxInit_real_T(&d_st, &r3, 2, &rx_emlrtRTEI, true);
  e_st.site = &oc_emlrtRSI;
  f_st.site = &pc_emlrtRSI;
  g_st.site = &qc_emlrtRSI;
  b_m = X->size[0];
  n = X->size[1];
  i = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = X->size[1];
  emxEnsureCapacity_real_T(&g_st, r3, i, &jg_emlrtRTEI);
  if (X->size[1] >= 1) {
    h_st.site = &sc_emlrtRSI;
    if ((1 <= X->size[1]) && (X->size[1] > 2147483646)) {
      i_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&i_st);
    }
    for (loop_ub = 0; loop_ub < n; loop_ub++) {
      r3->data[loop_ub] = X->data[X->size[0] * loop_ub];
      h_st.site = &rc_emlrtRSI;
      if ((2 <= b_m) && (b_m > 2147483646)) {
        i_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (i = 2; i <= b_m; i++) {
        a = r3->data[loop_ub];
        b_tmp = X->data[(i + X->size[0] * loop_ub) - 1];
        if (muDoubleScalarIsNaN(b_tmp)) {
          p = false;
        } else if (muDoubleScalarIsNaN(a)) {
          p = true;
        } else {
          p = (a > b_tmp);
        }
        if (p) {
          r3->data[loop_ub] = b_tmp;
        }
      }
    }
  }
  emxInit_boolean_T(&g_st, &b_constcols, 2, &ux_emlrtRTEI, true);
  tmp_size[0] = (*(int32_T(*)[2])constcols->size)[0];
  tmp_size[1] = (*(int32_T(*)[2])constcols->size)[1];
  b_tmp_size[0] = (*(int32_T(*)[2])r3->size)[0];
  b_tmp_size[1] = (*(int32_T(*)[2])r3->size)[1];
  emlrtSizeEqCheckNDR2012b(&tmp_size[0], &b_tmp_size[0], &xc_emlrtECI,
                           (emlrtCTX)sp);
  st.site = &uh_emlrtRSI;
  i = b_constcols->size[0] * b_constcols->size[1];
  b_constcols->size[0] = 1;
  b_constcols->size[1] = constcols->size[1];
  emxEnsureCapacity_boolean_T(&st, b_constcols, i, &ux_emlrtRTEI);
  loop_ub = constcols->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_constcols->data[i] = (constcols->data[i] - r3->data[i] == 0.0);
  }
  emxFree_real_T(&r3);
  emxInit_int32_T(&st, &ii, 2, &fk_emlrtRTEI, true);
  b_st.site = &wc_emlrtRSI;
  eml_find(&b_st, b_constcols, ii);
  i = constcols->size[0] * constcols->size[1];
  constcols->size[0] = 1;
  constcols->size[1] = ii->size[1];
  emxEnsureCapacity_real_T(&st, constcols, i, &vx_emlrtRTEI);
  loop_ub = ii->size[1];
  emxFree_boolean_T(&b_constcols);
  for (i = 0; i < loop_ub; i++) {
    constcols->data[i] = ii->data[i];
  }
  if (constcols->size[1] >= 1) {
    loop_ub = constcols->size[1];
    i = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = constcols->size[1];
    emxEnsureCapacity_int32_T(sp, ii, i, &wx_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      ii->data[i] = (int32_T)constcols->data[i];
    }
    st.site = &vh_emlrtRSI;
    nullAssignment(&st, X, ii);
    d_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((emlrtCTX)sp, 60, m, &u[0]);
    emlrtAssign(&d_y, m);
    st.site = &whb_emlrtRSI;
    disp(&st, d_y, &l_emlrtMCI);
  }
  emxFree_int32_T(&ii);
  emxFree_real_T(&constcols);
  /*  p is the number of parameters to be estimated */
  if (b_n < X->size[1]) {
    st.site = &xh_emlrtRSI;
    b_st.site = &wh_emlrtRSI;
    int2str(&b_st, X->size[0], tmp_data, tmp_size);
    b_st.site = &wh_emlrtRSI;
    int2str(&b_st, X->size[1], b_tmp_data, b_tmp_size);
    b_m = (tmp_size[1] + b_tmp_size[1]) + 48;
    for (i = 0; i < 41; i++) {
      varargin_2_data[i] = cv19[i];
    }
    loop_ub = tmp_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&varargin_2_data[41], &tmp_data[0], loop_ub * sizeof(char_T));
    }
    for (i = 0; i < 7; i++) {
      varargin_2_data[(i + tmp_size[1]) + 41] = b_cv[i];
    }
    loop_ub = b_tmp_size[1];
    for (i = 0; i < loop_ub; i++) {
      varargin_2_data[(i + tmp_size[1]) + 48] = b_tmp_data[i];
    }
    g_y = NULL;
    m = emlrtCreateCharArray(2, &iv5[0]);
    emlrtInitCharArrayR2013a(&st, 24, m, &c_varargin_1[0]);
    emlrtAssign(&g_y, m);
    h_y = NULL;
    tmp_size[0] = 1;
    tmp_size[1] = b_m;
    m = emlrtCreateCharArray(2, &tmp_size[0]);
    emlrtInitCharArrayR2013a(&st, b_m, m, &varargin_2_data[0]);
    emlrtAssign(&h_y, m);
    b_st.site = &jib_emlrtRSI;
    o_error(&b_st, g_y, h_y, &d_emlrtMCI);
  }
  st.site = &yh_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  b_m = local_rank(&b_st, X);
  if (b_m < X->size[1]) {
    st.site = &ai_emlrtRSI;
    e_y = NULL;
    m = emlrtCreateCharArray(2, &iv3[0]);
    emlrtInitCharArrayR2013a(&st, 25, m, &b_varargin_1[0]);
    emlrtAssign(&e_y, m);
    f_y = NULL;
    m = emlrtCreateCharArray(2, &iv4[0]);
    emlrtInitCharArrayR2013a(&st, 20, m, &cv[0]);
    emlrtAssign(&f_y, m);
    b_st.site = &jib_emlrtRSI;
    o_error(&b_st, e_y, f_y, &d_emlrtMCI);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (chkinputM.c) */
