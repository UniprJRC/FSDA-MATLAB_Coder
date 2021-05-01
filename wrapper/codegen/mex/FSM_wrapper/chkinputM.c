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
#include "FSM_wrapper_data.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_mexutil.h"
#include "FSM_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "int2str.h"
#include "mtimes.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo oc_emlrtRSI = {
    86,                                                 /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    94,                                                 /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    102,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    104,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = {
    117,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    116,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    120,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    122,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

static emlrtMCInfo qb_emlrtMCI = {
    108,                                                /* lineNo */
    13,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtECInfo nc_emlrtECI = {
    2,                                                  /* nDims */
    102,                                                /* lineNo */
    22,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtBCInfo br_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    98,                                                  /* lineNo */
    9,                                                   /* colNo */
    "X",                                                 /* aName */
    "chkinputM",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtRTEInfo mt_emlrtRTEI = {
    94,                                                 /* lineNo */
    22,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo nt_emlrtRTEI = {
    15,      /* lineNo */
    13,      /* colNo */
    "isinf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\isinf.m" /* pName
                                                                        */
};

static emlrtRTEInfo ot_emlrtRTEI = {
    1,                                                  /* lineNo */
    20,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo pt_emlrtRTEI = {
    98,                                                 /* lineNo */
    7,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo qt_emlrtRTEI = {
    98,                                                 /* lineNo */
    5,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo rt_emlrtRTEI = {
    102,                                                /* lineNo */
    22,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo st_emlrtRTEI = {
    364,    /* lineNo */
    24,     /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo tt_emlrtRTEI = {
    39,     /* lineNo */
    5,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

static emlrtRTEInfo ut_emlrtRTEI = {
    102,                                                /* lineNo */
    5,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo vt_emlrtRTEI = {
    104,                                                /* lineNo */
    13,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo wt_emlrtRTEI = {
    97,                                                 /* lineNo */
    5,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo xt_emlrtRTEI = {
    98,                                                 /* lineNo */
    9,                                                  /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRTEInfo yt_emlrtRTEI = {
    94,                                                 /* lineNo */
    20,                                                 /* colNo */
    "chkinputM",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pName */
};

static emlrtRSInfo leb_emlrtRSI = {
    108,                                                /* lineNo */
    "chkinputM",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputM.m" /* pathName */
};

/* Function Definitions */
void chkinputM(const emlrtStack *sp, emxArray_real_T *X,
               boolean_T vvarargin_f12)
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
  static const char_T b_cv[41] = {
      'N', 'e', 'e', 'd', ' ', 'm', 'o', 'r', 'e', ' ', 'o', 'b', 's', 'e',
      'r', 'v', 'a', 't', 'i', 'o', 'n', 's', ' ', 't', 'h', 'a', 'n', ' ',
      'v', 'a', 'r', 'i', 'a', 'b', 'l', 'e', 's', ':', ' ', 'n', '='};
  static const char_T varargin_2[29] = {
      'I', 'n', 'p', 'u', 't', ' ', 'm', 'a', 't', 'r', 'i', 'x', ' ', 'X', ' ',
      'n', 'o', 't', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', '.'};
  static const char_T varargin_1[28] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u', 't', 'M',
      ':', 'm', 'i', 's', 's', 'i', 'n', 'g', 'I', 'n', 'p', 'u', 't', 's'};
  static const char_T b_varargin_1[25] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u', 't',
      'M', ':', 'N', 'o', 'F', 'u', 'l', 'l', 'R', 'a', 'n', 'k'};
  static const char_T c_varargin_1[24] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u',
      't', 'M', ':', 'N', 'S', 'm', 'a', 'l', 'l', 'e', 'r', 'P'};
  static const char_T b_varargin_2[20] = {'M', 'a', 't', 'r', 'i', 'x', ' ',
                                          'X', ' ', 'i', 's', ' ', 's', 'i',
                                          'n', 'g', 'u', 'l', 'a', 'r'};
  static const char_T b_cv1[7] = {' ', 'a', 'n', 'd', ' ', 'p', '='};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack st;
  emxArray_boolean_T *ok;
  emxArray_boolean_T *r;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_int32_T *r1;
  emxArray_real_T *b;
  emxArray_real_T *b_X;
  emxArray_real_T *constcols;
  emxArray_real_T *r2;
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
  int32_T idx;
  int32_T n;
  char_T b_tmp_data[310];
  char_T tmp_data[310];
  char_T varargin_2_data[68];
  boolean_T exitg1;
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
  if (!vvarargin_f12) {
    /*  The second argument which is passed is X */
    if ((X->size[0] == 0) || (X->size[1] == 0)) {
      st.site = &oc_emlrtRSI;
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&st, 28, m, &varargin_1[0]);
      emlrtAssign(&b_y, m);
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&st, 29, m, &varargin_2[0]);
      emlrtAssign(&c_y, m);
      b_st.site = &neb_emlrtRSI;
      j_error(&b_st, b_y, c_y, &rb_emlrtMCI);
    }
    emxInit_real_T(sp, &y, 1, &yt_emlrtRTEI, true);
    emxInit_real_T(sp, &b, 1, &mt_emlrtRTEI, true);
    /*  Check dimension consistency of X and y */
    st.site = &pc_emlrtRSI;
    i = b->size[0];
    b->size[0] = X->size[1];
    emxEnsureCapacity_real_T(&st, b, i, &mt_emlrtRTEI);
    idx = X->size[1];
    for (i = 0; i < idx; i++) {
      b->data[i] = 1.0;
    }
    emxInit_boolean_T(&st, &ok, 1, &wt_emlrtRTEI, true);
    b_st.site = &xc_emlrtRSI;
    dynamic_size_checks(&b_st, X, b, X->size[1], X->size[1]);
    b_st.site = &wc_emlrtRSI;
    mtimes(&b_st, X, b, y);
    /*  Observations with missing or infinite values are removed from X and y */
    i = ok->size[0];
    ok->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(sp, ok, i, &nt_emlrtRTEI);
    idx = y->size[0];
    emxFree_real_T(&b);
    for (i = 0; i < idx; i++) {
      ok->data[i] = muDoubleScalarIsInf(y->data[i]);
    }
    emxInit_boolean_T(sp, &r, 1, &dc_emlrtRTEI, true);
    i = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(sp, r, i, &dc_emlrtRTEI);
    idx = y->size[0];
    for (i = 0; i < idx; i++) {
      r->data[i] = muDoubleScalarIsNaN(y->data[i]);
    }
    emxFree_real_T(&y);
    idx = ok->size[0];
    for (i = 0; i < idx; i++) {
      ok->data[i] = ((!ok->data[i]) && (!r->data[i]));
    }
    emxFree_boolean_T(&r);
    n = ok->size[0] - 1;
    b_m = 0;
    for (i = 0; i <= n; i++) {
      if (ok->data[i]) {
        b_m++;
      }
    }
    emxInit_int32_T(sp, &r1, 1, &xt_emlrtRTEI, true);
    i = r1->size[0];
    r1->size[0] = b_m;
    emxEnsureCapacity_int32_T(sp, r1, i, &ot_emlrtRTEI);
    b_m = 0;
    for (i = 0; i <= n; i++) {
      if (ok->data[i]) {
        r1->data[b_m] = i + 1;
        b_m++;
      }
    }
    emxFree_boolean_T(&ok);
    emxInit_real_T(sp, &b_X, 2, &pt_emlrtRTEI, true);
    b_m = X->size[0];
    n = X->size[1] - 1;
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r1->size[0];
    b_X->size[1] = n + 1;
    emxEnsureCapacity_real_T(sp, b_X, i, &pt_emlrtRTEI);
    for (i = 0; i <= n; i++) {
      idx = r1->size[0];
      for (b_n = 0; b_n < idx; b_n++) {
        if (r1->data[b_n] > b_m) {
          emlrtDynamicBoundsCheckR2012b(r1->data[b_n], 1, b_m, &br_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        b_X->data[b_n + b_X->size[0] * i] =
            X->data[(r1->data[b_n] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    i = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(sp, X, i, &qt_emlrtRTEI);
    idx = b_X->size[1];
    for (i = 0; i < idx; i++) {
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
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    st.site = &qc_emlrtRSI;
    b_st.site = &cd_emlrtRSI;
    c_st.site = &dd_emlrtRSI;
    d_st.site = &ed_emlrtRSI;
    if (X->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    emxInit_real_T(&d_st, &constcols, 2, &ut_emlrtRTEI, true);
    e_st.site = &fd_emlrtRSI;
    f_st.site = &gd_emlrtRSI;
    g_st.site = &hd_emlrtRSI;
    b_m = X->size[0];
    n = X->size[1];
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&g_st, constcols, i, &mc_emlrtRTEI);
    if (X->size[1] >= 1) {
      h_st.site = &jd_emlrtRSI;
      if ((1 <= X->size[1]) && (X->size[1] > 2147483646)) {
        i_st.site = &ad_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (idx = 0; idx < n; idx++) {
        constcols->data[idx] = X->data[X->size[0] * idx];
        h_st.site = &id_emlrtRSI;
        if ((2 <= b_m) && (b_m > 2147483646)) {
          i_st.site = &ad_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (i = 2; i <= b_m; i++) {
          a = constcols->data[idx];
          b_tmp = X->data[(i + X->size[0] * idx) - 1];
          if (muDoubleScalarIsNaN(b_tmp)) {
            p = false;
          } else if (muDoubleScalarIsNaN(a)) {
            p = true;
          } else {
            p = (a < b_tmp);
          }
          if (p) {
            constcols->data[idx] = b_tmp;
          }
        }
      }
    }
    st.site = &qc_emlrtRSI;
    b_st.site = &kd_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    d_st.site = &md_emlrtRSI;
    if (X->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    emxInit_real_T(&d_st, &r2, 2, &ot_emlrtRTEI, true);
    e_st.site = &fd_emlrtRSI;
    f_st.site = &gd_emlrtRSI;
    g_st.site = &hd_emlrtRSI;
    b_m = X->size[0];
    n = X->size[1];
    i = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    r2->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&g_st, r2, i, &mc_emlrtRTEI);
    if (X->size[1] >= 1) {
      h_st.site = &jd_emlrtRSI;
      if ((1 <= X->size[1]) && (X->size[1] > 2147483646)) {
        i_st.site = &ad_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (idx = 0; idx < n; idx++) {
        r2->data[idx] = X->data[X->size[0] * idx];
        h_st.site = &id_emlrtRSI;
        if ((2 <= b_m) && (b_m > 2147483646)) {
          i_st.site = &ad_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (i = 2; i <= b_m; i++) {
          a = r2->data[idx];
          b_tmp = X->data[(i + X->size[0] * idx) - 1];
          if (muDoubleScalarIsNaN(b_tmp)) {
            p = false;
          } else if (muDoubleScalarIsNaN(a)) {
            p = true;
          } else {
            p = (a > b_tmp);
          }
          if (p) {
            r2->data[idx] = b_tmp;
          }
        }
      }
    }
    emxInit_boolean_T(&g_st, &x, 2, &rt_emlrtRTEI, true);
    tmp_size[0] = (*(int32_T(*)[2])constcols->size)[0];
    tmp_size[1] = (*(int32_T(*)[2])constcols->size)[1];
    b_tmp_size[0] = (*(int32_T(*)[2])r2->size)[0];
    b_tmp_size[1] = (*(int32_T(*)[2])r2->size)[1];
    emlrtSizeEqCheckNDR2012b(&tmp_size[0], &b_tmp_size[0], &nc_emlrtECI,
                             (emlrtCTX)sp);
    st.site = &qc_emlrtRSI;
    i = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(&st, x, i, &rt_emlrtRTEI);
    idx = constcols->size[1];
    for (i = 0; i < idx; i++) {
      x->data[i] = (constcols->data[i] - r2->data[i] == 0.0);
    }
    emxFree_real_T(&r2);
    emxInit_int32_T(&st, &ii, 2, &kg_emlrtRTEI, true);
    b_st.site = &nd_emlrtRSI;
    n = x->size[1];
    c_st.site = &od_emlrtRSI;
    idx = 0;
    i = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(&c_st, ii, i, &st_emlrtRTEI);
    d_st.site = &pd_emlrtRSI;
    if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
      e_st.site = &ad_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    b_m = 0;
    exitg1 = false;
    while ((!exitg1) && (b_m <= n - 1)) {
      if (x->data[b_m]) {
        idx++;
        ii->data[idx - 1] = b_m + 1;
        if (idx >= n) {
          exitg1 = true;
        } else {
          b_m++;
        }
      } else {
        b_m++;
      }
    }
    if (idx > x->size[1]) {
      emlrtErrorWithMessageIdR2018a(&c_st, &r_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    if (x->size[1] == 1) {
      if (idx == 0) {
        ii->size[0] = 1;
        ii->size[1] = 0;
      }
    } else {
      i = ii->size[0] * ii->size[1];
      if (1 > idx) {
        ii->size[1] = 0;
      } else {
        ii->size[1] = idx;
      }
      emxEnsureCapacity_int32_T(&c_st, ii, i, &tt_emlrtRTEI);
    }
    emxFree_boolean_T(&x);
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(&st, constcols, i, &ut_emlrtRTEI);
    idx = ii->size[1];
    for (i = 0; i < idx; i++) {
      constcols->data[i] = ii->data[i];
    }
    if (constcols->size[1] >= 1) {
      idx = constcols->size[1];
      i = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = constcols->size[1];
      emxEnsureCapacity_int32_T(sp, ii, i, &vt_emlrtRTEI);
      for (i = 0; i < idx; i++) {
        ii->data[i] = (int32_T)(uint32_T)constcols->data[i];
      }
      st.site = &rc_emlrtRSI;
      nullAssignment(&st, X, ii);
      d_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a((emlrtCTX)sp, 60, m, &u[0]);
      emlrtAssign(&d_y, m);
      st.site = &leb_emlrtRSI;
      disp(&st, d_y, &qb_emlrtMCI);
    }
    emxFree_int32_T(&ii);
    emxFree_real_T(&constcols);
    /*  p is the number of parameters to be estimated */
    if (b_n < X->size[1]) {
      st.site = &tc_emlrtRSI;
      b_st.site = &sc_emlrtRSI;
      int2str(&b_st, X->size[0], tmp_data, tmp_size);
      b_st.site = &sc_emlrtRSI;
      int2str(&b_st, X->size[1], b_tmp_data, b_tmp_size);
      b_m = (tmp_size[1] + b_tmp_size[1]) + 48;
      for (i = 0; i < 41; i++) {
        varargin_2_data[i] = b_cv[i];
      }
      idx = tmp_size[1];
      if (0 <= idx - 1) {
        memcpy(&varargin_2_data[41], &tmp_data[0], idx * sizeof(char_T));
      }
      for (i = 0; i < 7; i++) {
        varargin_2_data[(i + tmp_size[1]) + 41] = b_cv1[i];
      }
      idx = b_tmp_size[1];
      for (i = 0; i < idx; i++) {
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
      b_st.site = &neb_emlrtRSI;
      j_error(&b_st, g_y, h_y, &rb_emlrtMCI);
    }
    st.site = &uc_emlrtRSI;
    b_st.site = &ee_emlrtRSI;
    b_m = local_rank(&b_st, X);
    if (b_m < X->size[1]) {
      st.site = &vc_emlrtRSI;
      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&st, 25, m, &b_varargin_1[0]);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&st, 20, m, &b_varargin_2[0]);
      emlrtAssign(&f_y, m);
      b_st.site = &neb_emlrtRSI;
      j_error(&b_st, e_y, f_y, &rb_emlrtMCI);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (chkinputM.c) */
