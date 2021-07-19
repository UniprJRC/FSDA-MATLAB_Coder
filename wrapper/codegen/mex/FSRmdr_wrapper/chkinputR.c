/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chkinputR.c
 *
 * Code generation for function 'chkinputR'
 *
 */

/* Include files */
#include "chkinputR.h"
#include "FSRmdr_wrapper_data.h"
#include "FSRmdr_wrapper_emxutil.h"
#include "FSRmdr_wrapper_mexutil.h"
#include "FSRmdr_wrapper_types.h"
#include "cat.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "error.h"
#include "find.h"
#include "int2str.h"
#include "isequal.h"
#include "mtimes.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo yb_emlrtRSI = {
    207,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    205,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    201,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    202,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    190,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = {
    188,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = {
    182,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    150,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    147,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    143,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    135,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo kc_emlrtRSI = {
    120,                                                /* lineNo */
    "chkinputR",                                        /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName
                                                                        */
};

static emlrtRSInfo sc_emlrtRSI =
    {
        44,         /* lineNo */
        "minOrMax", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI =
    {
        79,        /* lineNo */
        "maximum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo uc_emlrtRSI = {
    197,             /* lineNo */
    "unaryMinOrMax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    288,                     /* lineNo */
    "unaryMinOrMaxDispatch", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    356,          /* lineNo */
    "minOrMax2D", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    438,                         /* lineNo */
    "minOrMax2DColumnMajorDim1", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    436,                         /* lineNo */
    "minOrMax2DColumnMajorDim1", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    39,     /* lineNo */
    "find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

static emlrtECInfo p_emlrtECI = {
    -1,                                                 /* nDims */
    154,                                                /* lineNo */
    10,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtECInfo q_emlrtECI = {
    2,                                                  /* nDims */
    188,                                                /* lineNo */
    22,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    155,                                                 /* lineNo */
    9,                                                   /* colNo */
    "X",                                                 /* aName */
    "chkinputR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,                                                  /* iFirst */
    -1,                                                  /* iLast */
    156,                                                 /* lineNo */
    9,                                                   /* colNo */
    "y",                                                 /* aName */
    "chkinputR",                                         /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m", /* pName */
    0                                                    /* checkKind */
};

static emlrtRTEInfo bh_emlrtRTEI = {
    147,                                                /* lineNo */
    22,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = {
    15,      /* lineNo */
    13,      /* colNo */
    "isinf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\isinf.m" /* pName
                                                                        */
};

static emlrtRTEInfo dh_emlrtRTEI = {
    15,      /* lineNo */
    13,      /* colNo */
    "isnan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m" /* pName
                                                                        */
};

static emlrtRTEInfo eh_emlrtRTEI = {
    147,                                                /* lineNo */
    5,                                                  /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = {
    1,                                                  /* lineNo */
    22,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = {
    155,                                                /* lineNo */
    7,                                                  /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = {
    155,                                                /* lineNo */
    5,                                                  /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = {
    156,                                                /* lineNo */
    5,                                                  /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = {
    182,                                                /* lineNo */
    23,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = {
    182,                                                /* lineNo */
    33,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = {
    428,             /* lineNo */
    21,              /* colNo */
    "unaryMinOrMax", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = {
    188,                                                /* lineNo */
    22,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = {
    188,                                                /* lineNo */
    5,                                                  /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = {
    190,                                                /* lineNo */
    13,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = {
    155,                                                /* lineNo */
    9,                                                  /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = {
    156,                                                /* lineNo */
    9,                                                  /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = {
    147,                                                /* lineNo */
    20,                                                 /* colNo */
    "chkinputR",                                        /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\utilities\\chkinputR.m" /* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = {
    31,     /* lineNo */
    6,      /* colNo */
    "find", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pName
                                                                       */
};

/* Function Definitions */
void chkinputR(const emlrtStack *sp, emxArray_real_T *y, emxArray_real_T *X,
               boolean_T vvarargin_f10, boolean_T vvarargin_f16, real_T *n,
               real_T *p)
{
  static const int32_T iv[2] = {1, 28};
  static const int32_T iv1[2] = {1, 28};
  static const int32_T iv2[2] = {1, 29};
  static const int32_T iv3[2] = {1, 22};
  static const int32_T iv4[2] = {1, 29};
  static const int32_T iv5[2] = {1, 33};
  static const int32_T iv6[2] = {1, 23};
  static const int32_T iv7[2] = {1, 44};
  static const int32_T iv8[2] = {1, 24};
  static const char_T d_varargin_2[44] = {
      'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f', ' ', 'o', 'b', 's', 'e', 'r',
      'v', 'a', 't', 'i', 'o', 'n', 's', ' ', 'i', 'n', ' ', 'X', ' ', 'a', 'n',
      'd', ' ', 'y', ' ', 'n', 'o', 't', ' ', 'e', 'q', 'u', 'a', 'l', '.'};
  static const char_T cv[41] = {
      'N', 'e', 'e', 'd', ' ', 'm', 'o', 'r', 'e', ' ', 'o', 'b', 's', 'e',
      'r', 'v', 'a', 't', 'i', 'o', 'n', 's', ' ', 't', 'h', 'a', 'n', ' ',
      'v', 'a', 'r', 'i', 'a', 'b', 'l', 'e', 's', ':', ' ', 'n', '='};
  static const char_T c_varargin_2[33] = {
      'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'i', 'n', 'p',
      'u', 't', ':', ' ', 'y', ' ', 'a', 'n', 'd', ' ', 'X',
      ' ', 'a', 'r', 'e', ' ', 'e', 'q', 'u', 'a', 'l', '.'};
  static const char_T b_varargin_2[29] = {
      'I', 'n', 'p', 'u', 't', ' ', 'm', 'a', 't', 'r', 'i', 'x', ' ', 'X', ' ',
      'n', 'o', 't', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', '.'};
  static const char_T varargin_2[29] = {
      'I', 'n', 'p', 'u', 't', ' ', 'v', 'e', 'c', 't', 'o', 'r', ' ', 'y', ' ',
      'n', 'o', 't', ' ', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'd', '.'};
  static const char_T varargin_1[28] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u', 't', 'R',
      ':', 'm', 'i', 's', 's', 'i', 'n', 'g', 'I', 'n', 'p', 'u', 't', 's'};
  static const char_T d_varargin_1[24] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u',
      't', 'R', ':', 'N', 'S', 'm', 'a', 'l', 'l', 'e', 'r', 'P'};
  static const char_T c_varargin_1[23] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p', 'u',
      't', 'R', ':', 'N', 'x', 'D', 'i', 'f', 'f', 'N', 'y'};
  static const char_T b_varargin_1[22] = {
      'F', 'S', 'D', 'A', ':', 'c', 'h', 'k', 'i', 'n', 'p',
      'u', 't', 'R', ':', 'y', 'X', 'e', 'q', 'u', 'a', 'l'};
  static const char_T cv1[7] = {' ', 'a', 'n', 'd', ' ', 'p', '='};
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
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *na_y;
  emxArray_boolean_T *r;
  emxArray_int32_T *ii;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *b;
  emxArray_real_T *b_X;
  emxArray_real_T *constcols;
  emxArray_real_T *d_y;
  emxArray_real_T *r3;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  real_T a;
  real_T b_tmp;
  int32_T b_tmp_size[2];
  int32_T tmp_size[2];
  int32_T b_i;
  int32_T b_m;
  int32_T b_n;
  int32_T i;
  int32_T loop_ub;
  char_T varargin_2_data[68];
  char_T b_tmp_data[10];
  char_T tmp_data[10];
  boolean_T b_p;
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
  /* chkinputR makes some input parameters and user options checking in
   * regression */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  y:            Response variable. Vector. */
  /*                A vector with n elements that contains the response */
  /*                variables, possibly with missing values (NaN's) and */
  /*                infinite values (Inf's). */
  /*  X :           Predictor variables. Matrix. */
  /*                Data matrix of explanatory variables (also called */
  /*                'regressors') of dimension (n x p-1), possibly with missing
   */
  /*                values (NaN's) and infinite values (Inf's). Rows of X */
  /*                represent observations, and columns represent variables. */
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
  /*  y:            response without missing and infs. Vector. The new response
   * variable, with observations (rows) with */
  /*                missing or infinite values excluded. */
  /*  X:            Predictor variables without infs and missings. Matrix. */
  /*                The new matrix of explanatory variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of parameters to be estimated. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  This routines preforms the following operations: */
  /*  1) If y is a row vector it is transformed in a column vector; */
  /*  2) Checks that X is a matrix that has not more than two dimensions; */
  /*  3) Checks dimension consistency of X and y; */
  /*  4) Removes observations with missing or infinite values from X or y */
  /*  (listwise exclusion); */
  /*  5) Adds to matrix X a column of ones if option intercept is 1; */
  /*  6) Checks if there are constant columns in matrix X. In other words, if */
  /*  Xj is a generic column of X (excluding the column which contains the */
  /*  intercept) it removes it if max(Xj)=min(Xj) and produces a warning. */
  /*  7) Computes final values of n and p after previous operations; */
  /*  8) Makes sure than n>=p; */
  /*  9) Makes sure that new X is full rank */
  /*  */
  /*  See also chkinputRB */
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
  /*  example_producing_error */
  /*     %To examplify the behaviour of chkinputR, we call function FSR without
   * a */
  /*     %compulsory parameter ('y'). */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSR(X); */
  /* } */
  /*  Beginning of code */
  /*  chklist is the vector containing the names of optional arguments */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  chkint is the position of the option intercept in vector chklist */
  /*  chkint = strmatch('intercept',chklist,'exact'); */
  /*  If nocheck=true, then skip checks on y and X */
  if (vvarargin_f16) {
    *p = X->size[1];
    *n = X->size[0];
  } else {
    /*  The first argument which is passed is y */
    if (y->size[0] == 0) {
      st.site = &kc_emlrtRSI;
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&st, 28, m, &varargin_1[0]);
      emlrtAssign(&b_y, m);
      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&st, 29, m, &varargin_2[0]);
      emlrtAssign(&e_y, m);
      b_st.site = &tk_emlrtRSI;
      b_error(&b_st, b_y, e_y, &k_emlrtMCI);
    }
    /*  The second argument which is passed is X */
    if ((X->size[0] == 0) || (X->size[1] == 0)) {
      st.site = &jc_emlrtRSI;
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&st, 28, m, &varargin_1[0]);
      emlrtAssign(&c_y, m);
      g_y = NULL;
      m = emlrtCreateCharArray(2, &iv4[0]);
      emlrtInitCharArrayR2013a(&st, 29, m, &b_varargin_2[0]);
      emlrtAssign(&g_y, m);
      b_st.site = &tk_emlrtRSI;
      b_error(&b_st, c_y, g_y, &k_emlrtMCI);
    }
    if (isequal(y, X)) {
      st.site = &ic_emlrtRSI;
      f_y = NULL;
      m = emlrtCreateCharArray(2, &iv3[0]);
      emlrtInitCharArrayR2013a(&st, 22, m, &b_varargin_1[0]);
      emlrtAssign(&f_y, m);
      h_y = NULL;
      m = emlrtCreateCharArray(2, &iv5[0]);
      emlrtInitCharArrayR2013a(&st, 33, m, &c_varargin_2[0]);
      emlrtAssign(&h_y, m);
      b_st.site = &tk_emlrtRSI;
      b_error(&b_st, f_y, h_y, &k_emlrtMCI);
    }
    emxInit_real_T(sp, &d_y, 1, &rh_emlrtRTEI, true);
    emxInit_real_T(sp, &b, 1, &bh_emlrtRTEI, true);
    /*  Check dimension consistency of X and y */
    st.site = &hc_emlrtRSI;
    i = b->size[0];
    b->size[0] = X->size[1];
    emxEnsureCapacity_real_T(&st, b, i, &bh_emlrtRTEI);
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      b->data[i] = 1.0;
    }
    emxInit_boolean_T(&st, &na_y, 1, &eh_emlrtRTEI, true);
    b_st.site = &mc_emlrtRSI;
    dynamic_size_checks(&b_st, X, b, X->size[1], X->size[1]);
    b_st.site = &lc_emlrtRSI;
    mtimes(&b_st, X, b, d_y);
    i = na_y->size[0];
    na_y->size[0] = d_y->size[0];
    emxEnsureCapacity_boolean_T(sp, na_y, i, &ch_emlrtRTEI);
    loop_ub = d_y->size[0];
    emxFree_real_T(&b);
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = muDoubleScalarIsInf(d_y->data[i]);
    }
    emxInit_boolean_T(sp, &r, 1, &dh_emlrtRTEI, true);
    i = r->size[0];
    r->size[0] = d_y->size[0];
    emxEnsureCapacity_boolean_T(sp, r, i, &dh_emlrtRTEI);
    loop_ub = d_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = muDoubleScalarIsNaN(d_y->data[i]);
    }
    emxInit_boolean_T(sp, &na_X, 1, &eh_emlrtRTEI, true);
    i = na_X->size[0];
    na_X->size[0] = na_y->size[0];
    emxEnsureCapacity_boolean_T(sp, na_X, i, &eh_emlrtRTEI);
    loop_ub = na_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_X->data[i] = (na_y->data[i] || r->data[i]);
    }
    i = na_y->size[0];
    na_y->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(sp, na_y, i, &ch_emlrtRTEI);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = muDoubleScalarIsInf(y->data[i]);
    }
    i = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(sp, r, i, &dh_emlrtRTEI);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = muDoubleScalarIsNaN(y->data[i]);
    }
    loop_ub = na_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = (na_y->data[i] || r->data[i]);
    }
    emxFree_boolean_T(&r);
    if (na_X->size[0] != na_y->size[0]) {
      st.site = &gc_emlrtRSI;
      i_y = NULL;
      m = emlrtCreateCharArray(2, &iv6[0]);
      emlrtInitCharArrayR2013a(&st, 23, m, &c_varargin_1[0]);
      emlrtAssign(&i_y, m);
      j_y = NULL;
      m = emlrtCreateCharArray(2, &iv7[0]);
      emlrtInitCharArrayR2013a(&st, 44, m, &d_varargin_2[0]);
      emlrtAssign(&j_y, m);
      b_st.site = &tk_emlrtRSI;
      b_error(&b_st, i_y, j_y, &k_emlrtMCI);
    }
    /*  Observations with missing or infinite values are removed from X and y */
    if (na_X->size[0] != na_y->size[0]) {
      emlrtSizeEqCheck1DR2012b(na_X->size[0], na_y->size[0], &p_emlrtECI,
                               (emlrtCTX)sp);
    }
    b_n = na_X->size[0] - 1;
    b_m = 0;
    for (b_i = 0; b_i <= b_n; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        b_m++;
      }
    }
    emxInit_int32_T(sp, &r1, 1, &ph_emlrtRTEI, true);
    i = r1->size[0];
    r1->size[0] = b_m;
    emxEnsureCapacity_int32_T(sp, r1, i, &fh_emlrtRTEI);
    b_m = 0;
    for (b_i = 0; b_i <= b_n; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r1->data[b_m] = b_i + 1;
        b_m++;
      }
    }
    emxInit_real_T(sp, &b_X, 2, &gh_emlrtRTEI, true);
    b_m = X->size[0];
    b_n = X->size[1] - 1;
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r1->size[0];
    b_X->size[1] = b_n + 1;
    emxEnsureCapacity_real_T(sp, b_X, i, &gh_emlrtRTEI);
    for (i = 0; i <= b_n; i++) {
      loop_ub = r1->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        if (r1->data[b_i] > b_m) {
          emlrtDynamicBoundsCheckR2012b(r1->data[b_i], 1, b_m, &qc_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        b_X->data[b_i + b_X->size[0] * i] =
            X->data[(r1->data[b_i] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    i = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(sp, X, i, &hh_emlrtRTEI);
    loop_ub = b_X->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_m = b_X->size[0];
      for (b_i = 0; b_i < b_m; b_i++) {
        X->data[b_i + X->size[0] * i] = b_X->data[b_i + b_X->size[0] * i];
      }
    }
    b_n = na_X->size[0] - 1;
    b_m = 0;
    for (b_i = 0; b_i <= b_n; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        b_m++;
      }
    }
    emxInit_int32_T(sp, &r2, 1, &qh_emlrtRTEI, true);
    i = r2->size[0];
    r2->size[0] = b_m;
    emxEnsureCapacity_int32_T(sp, r2, i, &fh_emlrtRTEI);
    b_m = 0;
    for (b_i = 0; b_i <= b_n; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r2->data[b_m] = b_i + 1;
        b_m++;
      }
    }
    emxFree_boolean_T(&na_y);
    emxFree_boolean_T(&na_X);
    b_m = y->size[0];
    i = d_y->size[0];
    d_y->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(sp, d_y, i, &fh_emlrtRTEI);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (r2->data[i] > b_m) {
        emlrtDynamicBoundsCheckR2012b(r2->data[i], 1, b_m, &rc_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      d_y->data[i] = y->data[r2->data[i] - 1];
    }
    emxFree_int32_T(&r2);
    i = y->size[0];
    y->size[0] = d_y->size[0];
    emxEnsureCapacity_real_T(sp, y, i, &ih_emlrtRTEI);
    loop_ub = d_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      y->data[i] = d_y->data[i];
    }
    /*  Now n is the new number of non missing observations */
    *n = y->size[0];
    /*  Now add to matrix X a column of ones for the intercept. */
    /*  If a value for the intercept has not been specified or if this value is
     */
    /*  equal to 1, add to matrix X the column of ones. The position of */
    /*  the option intercept in chklist, which contains the optional is */
    /*  given in chkint. chkint is empty if the option intercept is not */
    /*  specified. */
    /* if coder.target('MATLAB') */
    /* else */
    /*     interceptPresent=vvarargin{2*chkint}==true; */
    /* end */
    if (vvarargin_f10) {
      b_m = y->size[0];
      i = d_y->size[0];
      d_y->size[0] = b_m;
      emxEnsureCapacity_real_T(sp, d_y, i, &jh_emlrtRTEI);
      for (i = 0; i < b_m; i++) {
        d_y->data[i] = 1.0;
      }
      i = b_X->size[0] * b_X->size[1];
      b_X->size[0] = X->size[0];
      b_X->size[1] = X->size[1];
      emxEnsureCapacity_real_T(sp, b_X, i, &kh_emlrtRTEI);
      loop_ub = X->size[0] * X->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        b_X->data[i] = X->data[i];
      }
      st.site = &fc_emlrtRSI;
      cat(&st, d_y, b_X, X);
    }
    emxFree_real_T(&b_X);
    emxFree_real_T(&d_y);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    st.site = &ec_emlrtRSI;
    b_st.site = &rc_emlrtRSI;
    c_st.site = &sc_emlrtRSI;
    d_st.site = &tc_emlrtRSI;
    if (X->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &d_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    emxInit_real_T(&d_st, &constcols, 2, &nh_emlrtRTEI, true);
    e_st.site = &uc_emlrtRSI;
    f_st.site = &vc_emlrtRSI;
    g_st.site = &wc_emlrtRSI;
    b_m = X->size[0];
    b_n = X->size[1];
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&g_st, constcols, i, &lh_emlrtRTEI);
    if (X->size[1] >= 1) {
      h_st.site = &yc_emlrtRSI;
      if ((1 <= X->size[1]) && (X->size[1] > 2147483646)) {
        i_st.site = &oc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (loop_ub = 0; loop_ub < b_n; loop_ub++) {
        constcols->data[loop_ub] = X->data[X->size[0] * loop_ub];
        h_st.site = &xc_emlrtRSI;
        if ((2 <= b_m) && (b_m > 2147483646)) {
          i_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (b_i = 2; b_i <= b_m; b_i++) {
          a = constcols->data[loop_ub];
          b_tmp = X->data[(b_i + X->size[0] * loop_ub) - 1];
          if (muDoubleScalarIsNaN(b_tmp)) {
            b_p = false;
          } else if (muDoubleScalarIsNaN(a)) {
            b_p = true;
          } else {
            b_p = (a < b_tmp);
          }
          if (b_p) {
            constcols->data[loop_ub] = b_tmp;
          }
        }
      }
    }
    st.site = &ec_emlrtRSI;
    b_st.site = &ad_emlrtRSI;
    c_st.site = &bd_emlrtRSI;
    d_st.site = &cd_emlrtRSI;
    if (X->size[0] < 1) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &d_emlrtRTEI, "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
    }
    emxInit_real_T(&d_st, &r3, 2, &fh_emlrtRTEI, true);
    e_st.site = &uc_emlrtRSI;
    f_st.site = &vc_emlrtRSI;
    g_st.site = &wc_emlrtRSI;
    b_m = X->size[0];
    b_n = X->size[1];
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = X->size[1];
    emxEnsureCapacity_real_T(&g_st, r3, i, &lh_emlrtRTEI);
    if (X->size[1] >= 1) {
      h_st.site = &yc_emlrtRSI;
      if ((1 <= X->size[1]) && (X->size[1] > 2147483646)) {
        i_st.site = &oc_emlrtRSI;
        check_forloop_overflow_error(&i_st);
      }
      for (loop_ub = 0; loop_ub < b_n; loop_ub++) {
        r3->data[loop_ub] = X->data[X->size[0] * loop_ub];
        h_st.site = &xc_emlrtRSI;
        if ((2 <= b_m) && (b_m > 2147483646)) {
          i_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }
        for (b_i = 2; b_i <= b_m; b_i++) {
          a = r3->data[loop_ub];
          b_tmp = X->data[(b_i + X->size[0] * loop_ub) - 1];
          if (muDoubleScalarIsNaN(b_tmp)) {
            b_p = false;
          } else if (muDoubleScalarIsNaN(a)) {
            b_p = true;
          } else {
            b_p = (a > b_tmp);
          }
          if (b_p) {
            r3->data[loop_ub] = b_tmp;
          }
        }
      }
    }
    emxInit_boolean_T(&g_st, &b_constcols, 2, &mh_emlrtRTEI, true);
    tmp_size[0] = (*(int32_T(*)[2])constcols->size)[0];
    tmp_size[1] = (*(int32_T(*)[2])constcols->size)[1];
    b_tmp_size[0] = (*(int32_T(*)[2])r3->size)[0];
    b_tmp_size[1] = (*(int32_T(*)[2])r3->size)[1];
    emlrtSizeEqCheckNDR2012b(&tmp_size[0], &b_tmp_size[0], &q_emlrtECI,
                             (emlrtCTX)sp);
    st.site = &ec_emlrtRSI;
    i = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(&st, b_constcols, i, &mh_emlrtRTEI);
    loop_ub = constcols->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_constcols->data[i] = (constcols->data[i] - r3->data[i] == 0.0);
    }
    emxFree_real_T(&r3);
    emxInit_int32_T(&st, &ii, 2, &sh_emlrtRTEI, true);
    b_st.site = &dd_emlrtRSI;
    eml_find(&b_st, b_constcols, ii);
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(&st, constcols, i, &nh_emlrtRTEI);
    loop_ub = ii->size[1];
    emxFree_boolean_T(&b_constcols);
    for (i = 0; i < loop_ub; i++) {
      constcols->data[i] = ii->data[i];
    }
    if (constcols->size[1] > 1) {
      loop_ub = constcols->size[1] - 2;
      i = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(sp, ii, i, &oh_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        ii->data[i] = (int32_T)constcols->data[i + 1];
      }
      st.site = &dc_emlrtRSI;
      nullAssignment(&st, X, ii);
    }
    emxFree_int32_T(&ii);
    emxFree_real_T(&constcols);
    /*  p is the number of parameters to be estimated */
    *p = X->size[1];
    if (y->size[0] < X->size[1]) {
      st.site = &bc_emlrtRSI;
      b_st.site = &cc_emlrtRSI;
      int2str(&b_st, X->size[0], tmp_data, tmp_size);
      b_st.site = &cc_emlrtRSI;
      int2str(&b_st, X->size[1], b_tmp_data, b_tmp_size);
      b_m = (tmp_size[1] + b_tmp_size[1]) + 48;
      for (i = 0; i < 41; i++) {
        varargin_2_data[i] = cv[i];
      }
      loop_ub = tmp_size[1];
      if (0 <= loop_ub - 1) {
        memcpy(&varargin_2_data[41], &tmp_data[0], loop_ub * sizeof(char_T));
      }
      for (i = 0; i < 7; i++) {
        varargin_2_data[(i + tmp_size[1]) + 41] = cv1[i];
      }
      loop_ub = b_tmp_size[1];
      for (i = 0; i < loop_ub; i++) {
        varargin_2_data[(i + tmp_size[1]) + 48] = b_tmp_data[i];
      }
      k_y = NULL;
      m = emlrtCreateCharArray(2, &iv8[0]);
      emlrtInitCharArrayR2013a(&st, 24, m, &d_varargin_1[0]);
      emlrtAssign(&k_y, m);
      l_y = NULL;
      tmp_size[0] = 1;
      tmp_size[1] = b_m;
      m = emlrtCreateCharArray(2, &tmp_size[0]);
      emlrtInitCharArrayR2013a(&st, b_m, m, &varargin_2_data[0]);
      emlrtAssign(&l_y, m);
      b_st.site = &tk_emlrtRSI;
      b_error(&b_st, k_y, l_y, &k_emlrtMCI);
    }
    st.site = &ac_emlrtRSI;
    b_st.site = &td_emlrtRSI;
    b_m = local_rank(&b_st, X);
    if (b_m < X->size[1]) {
      st.site = &yb_emlrtRSI;
      error(&st);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (chkinputR.c) */
