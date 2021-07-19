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
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo
    dab_emlrtRSI =
        {
            173,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    eab_emlrtRSI =
        {
            172,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRTEInfo
    sy_emlrtRTEI =
        {
            109,       /* lineNo */
            1,         /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

/* Function Definitions */
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
  emxEnsureCapacity_real_T(sp, Y, i, &sy_emlrtRTEI);
  loop_ub = A->size[1];
  for (i = 0; i < loop_ub; i++) {
    Y->data[i] = 0.0;
  }
  st.site = &fab_emlrtRSI;
  b_st.site = &jab_emlrtRSI;
  if ((A->size[0] != 0) && (A->size[1] != 0) && (B->size[0] != 0)) {
    nrc_t = (ptrdiff_t)B->size[0];
    nrc_t = LAPACKE_dormqr(
        102, 'L', 'T', nrc_t, (ptrdiff_t)1,
        (ptrdiff_t)muIntScalarMin_sint32(A->size[0], A->size[1]), &A->data[0],
        (ptrdiff_t)A->size[0], &tau->data[0], &B->data[0], nrc_t);
    c_st.site = &kab_emlrtRSI;
    if (infocheck(&c_st, (int32_T)nrc_t)) {
      loop_ub = B->size[0];
      i = B->size[0];
      B->size[0] = loop_ub;
      emxEnsureCapacity_real_T(&b_st, B, i, &ty_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        B->data[i] = rtNaN;
      }
    }
  }
  st.site = &hab_emlrtRSI;
  if ((1 <= rankA) && (rankA > 2147483646)) {
    b_st.site = &hb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (loop_ub = 0; loop_ub < rankA; loop_ub++) {
    Y->data[jpvt->data[loop_ub] - 1] = B->data[loop_ub];
  }
  for (j = rankA; j >= 1; j--) {
    i = jpvt->data[j - 1];
    Y->data[i - 1] /= A->data[(j + A->size[0] * (j - 1)) - 1];
    st.site = &iab_emlrtRSI;
    for (loop_ub = 0; loop_ub <= j - 2; loop_ub++) {
      Y->data[jpvt->data[loop_ub] - 1] -=
          Y->data[jpvt->data[j - 1] - 1] *
          A->data[loop_ub + A->size[0] * (j - 1)];
    }
  }
}

int32_T rankFromQR(const emlrtStack *sp, const emxArray_real_T *A)
{
  static const int32_T b_iv[2] = {1, 6};
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
    st.site = &dab_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &b_iv[0]);
    emlrtInitCharArrayR2013a(&st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
    b_st.site = &uqb_emlrtRSI;
    i_emlrt_marshallIn(&b_st, d_sprintf(&b_st, y, b_y, &u_emlrtMCI),
                       "<output of sprintf>", str);
    st.site = &eab_emlrtRSI;
    h_warning(&st, r, str);
  }
  return r;
}

/* End of code generation (qrsolve.c) */
