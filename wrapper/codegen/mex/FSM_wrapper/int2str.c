/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * int2str.c
 *
 * Code generation for function 'int2str'
 *
 */

/* Include files */
#include "int2str.h"
#include "FSM_wrapper_mexutil.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo be_emlrtRSI = {
    54,        /* lineNo */
    "int2str", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\int2str.m" /* pathName
                                                                           */
};

static emlrtRSInfo ce_emlrtRSI = {
    94,        /* lineNo */
    "int2str", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\int2str.m" /* pathName
                                                                           */
};

static emlrtRSInfo de_emlrtRSI = {
    25,                 /* lineNo */
    "printNumToBuffer", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\printNumToBuffer.m" /* pathName */
};

static emlrtMCInfo sb_emlrtMCI = {
    26,                 /* lineNo */
    9,                  /* colNo */
    "printNumToBuffer", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\printNumToBuffer.m" /* pName */
};

static emlrtDCInfo j_emlrtDCI = {
    12,       /* lineNo */
    20,       /* colNo */
    "blanks", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\strfun\\blanks.m", /* pName
                                                                           */
    4 /* checkKind */
};

static emlrtRSInfo peb_emlrtRSI = {
    26,                 /* lineNo */
    "printNumToBuffer", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\printNumToBuffer.m" /* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y_data[], int32_T y_size[2]);

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_feval_,
                             const char_T *identifier, char_T y_data[],
                             int32_T y_size[2]);

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               char_T ret_data[], int32_T ret_size[2]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y_data[], int32_T y_size[2])
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void emlrt_marshallIn(const emlrtStack *sp,
                             const mxArray *a__output_of_feval_,
                             const char_T *identifier, char_T y_data[],
                             int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_feval_), &thisId, y_data,
                     y_size);
  emlrtDestroyArray(&a__output_of_feval_);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               char_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = {1, 310};
  int32_T iv[2];
  const boolean_T bv[2] = {false, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  emlrtImportArrayR2015b((emlrtCTX)sp, src, &ret_data[0], 1, false);
  emlrtDestroyArray(&src);
}

void int2str(const emlrtStack *sp, real_T xin, char_T s_data[],
             int32_T s_size[2])
{
  static const int32_T iv[2] = {1, 7};
  static const int32_T iv1[2] = {1, 4};
  static const char_T u[7] = {'s', 'p', 'r', 'i', 'n', 't', 'f'};
  static const char_T mlfmt[4] = {'%', '.', '0', 'f'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T b_x;
  real_T ub;
  real_T x;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  x = muDoubleScalarRound(xin);
  if (x == 0.0) {
    s_size[0] = 1;
    s_size[1] = 1;
    s_data[0] = '0';
  } else if (muDoubleScalarIsInf(x)) {
    if (x > 0.0) {
      s_size[0] = 1;
      s_size[1] = 3;
      s_data[0] = 'I';
      s_data[1] = 'n';
      s_data[2] = 'f';
    } else {
      s_size[0] = 1;
      s_size[1] = 4;
      s_data[0] = '-';
      s_data[1] = 'I';
      s_data[2] = 'n';
      s_data[3] = 'f';
    }
  } else if (muDoubleScalarIsNaN(x)) {
    s_size[0] = 1;
    s_size[1] = 3;
    s_data[0] = 'N';
    s_data[1] = 'a';
    s_data[2] = 'N';
  } else {
    if (x == 0.0) {
      ub = 1.0;
    } else {
      st.site = &be_emlrtRSI;
      b_x = muDoubleScalarFloor(muDoubleScalarLog10(muDoubleScalarAbs(x)));
      ub = b_x + 1.0;
      if (x < 0.0) {
        ub = (b_x + 1.0) + 1.0;
      }
    }
    st.site = &ce_emlrtRSI;
    b_st.site = &de_emlrtRSI;
    if ((int32_T)ub <= 310) {
      i = (int32_T)ub;
    } else {
      i = 310;
    }
    if (i < 0) {
      emlrtNonNegativeCheckR2012b(i, &j_emlrtDCI, &b_st);
    }
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 7, m, &u[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &mlfmt[0]);
    emlrtAssign(&b_y, m);
    c_y = NULL;
    m = emlrtCreateDoubleScalar(x);
    emlrtAssign(&c_y, m);
    b_st.site = &peb_emlrtRSI;
    emlrt_marshallIn(&b_st, feval(&b_st, y, b_y, c_y, &sb_emlrtMCI),
                     "<output of feval>", s_data, s_size);
  }
}

/* End of code generation (int2str.c) */
