/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_mexutil.h"
#include "FSRfan_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo
    ri_emlrtRSI =
        {
            173,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    si_emlrtRSI =
        {
            172,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRTEInfo
    di_emlrtRTEI =
        {
            109,       /* lineNo */
            1,         /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

/* Function Declarations */
static void e_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[14]);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[14]);

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static void e_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[14])
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = {1, 14};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void LSQFromQR(const emlrtStack *sp, const emxArray_real_T *A,
               const emxArray_real_T *tau, const emxArray_int32_T *jpvt,
               emxArray_real_T *B, int32_T rankA, emxArray_real_T *Y)
{
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T j;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  i = Y->size[0];
  Y->size[0] = A->size[1];
  emxEnsureCapacity_real_T(sp, Y, i, &di_emlrtRTEI);
  loop_ub = A->size[1];
  for (i = 0; i < loop_ub; i++) {
    Y->data[i] = 0.0;
  }
  st.site = &ti_emlrtRSI;
  b_st.site = &wi_emlrtRSI;
  if ((A->size[0] != 0) && (A->size[1] != 0) && (B->size[0] != 0)) {
    nrc_t = (ptrdiff_t)B->size[0];
    nrc_t = LAPACKE_dormqr(
        102, 'L', 'T', nrc_t, (ptrdiff_t)1,
        (ptrdiff_t)muIntScalarMin_sint32(A->size[0], A->size[1]), &A->data[0],
        (ptrdiff_t)A->size[0], &tau->data[0], &B->data[0], nrc_t);
    c_st.site = &xi_emlrtRSI;
    if (infocheck(&c_st, (int32_T)nrc_t)) {
      loop_ub = B->size[0];
      i = B->size[0];
      B->size[0] = loop_ub;
      emxEnsureCapacity_real_T(&b_st, B, i, &ei_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        B->data[i] = rtNaN;
      }
    }
  }
  st.site = &ui_emlrtRSI;
  if ((1 <= rankA) && (rankA > 2147483646)) {
    b_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (loop_ub = 0; loop_ub < rankA; loop_ub++) {
    Y->data[jpvt->data[loop_ub] - 1] = B->data[loop_ub];
  }
  for (j = rankA; j >= 1; j--) {
    i = jpvt->data[j - 1];
    Y->data[i - 1] /= A->data[(j + A->size[0] * (j - 1)) - 1];
    st.site = &vi_emlrtRSI;
    for (loop_ub = 0; loop_ub <= j - 2; loop_ub++) {
      Y->data[jpvt->data[loop_ub] - 1] -=
          Y->data[jpvt->data[j - 1] - 1] *
          A->data[loop_ub + A->size[0] * (j - 1)];
    }
  }
}

int32_T rankFromQR(const emlrtStack *sp, const emxArray_real_T *A)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T maxmn;
  int32_T minmn;
  int32_T r;
  char_T str[14];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  r = 0;
  tol = 0.0;
  if (A->size[0] < A->size[1]) {
    minmn = A->size[0];
    maxmn = A->size[1];
  } else {
    minmn = A->size[1];
    maxmn = A->size[0];
  }
  if (minmn > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)maxmn) *
          muDoubleScalarAbs(A->data[0]);
    while ((r < minmn) &&
           (!(muDoubleScalarAbs(A->data[r + A->size[0] * r]) <= tol))) {
      r++;
    }
  }
  if (r < minmn) {
    st.site = &ri_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
    b_st.site = &mu_emlrtRSI;
    e_emlrt_marshallIn(&b_st, b_sprintf(&b_st, y, b_y, &s_emlrtMCI),
                       "<output of sprintf>", str);
    st.site = &si_emlrtRSI;
    b_warning(&st, r, str);
  }
  return r;
}

/* End of code generation (qrsolve.c) */
