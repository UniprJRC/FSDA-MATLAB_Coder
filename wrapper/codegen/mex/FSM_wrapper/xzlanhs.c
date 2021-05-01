/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlanhs.c
 *
 * Code generation for function 'xzlanhs'
 *
 */

/* Include files */
#include "xzlanhs.h"
#include "FSM_wrapper_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo vp_emlrtRSI = {
    21,        /* lineNo */
    "xzlanhs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlanhs.m" /* pathName */
};

static emlrtRSInfo wp_emlrtRSI = {
    26,        /* lineNo */
    "xzlanhs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlanhs.m" /* pathName */
};

static emlrtRSInfo xp_emlrtRSI = {
    47,        /* lineNo */
    "xzlanhs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlanhs.m" /* pathName */
};

static emlrtRSInfo yp_emlrtRSI = {
    49,        /* lineNo */
    "xzlanhs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlanhs.m" /* pathName */
};

static emlrtRSInfo aq_emlrtRSI = {
    53,        /* lineNo */
    "xzlanhs", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzlanhs.m" /* pathName */
};

/* Function Definitions */
real_T xzlanhs(const emlrtStack *sp, const creal_T A[4], int32_T ilo,
               int32_T ihi)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T absxk;
  real_T colscale;
  real_T colssq;
  real_T f;
  real_T scale;
  real_T ssq;
  real_T t;
  int32_T absxk_tmp;
  int32_T b;
  int32_T col;
  int32_T j;
  int32_T nm1;
  int32_T row;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  f = 0.0;
  if (ilo <= ihi) {
    scale = 3.3121686421112381E-170;
    ssq = 0.0;
    nm1 = ihi - ilo;
    st.site = &vp_emlrtRSI;
    if ((1 <= nm1 + 1) && (nm1 + 1 > 2147483646)) {
      b_st.site = &ad_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 0; j <= nm1; j++) {
      colscale = 3.3121686421112381E-170;
      colssq = 0.0;
      col = (ilo + j) - 1;
      b = ilo + nm1;
      st.site = &wp_emlrtRSI;
      if ((ilo <= b) && (b > 2147483646)) {
        b_st.site = &ad_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (row = ilo; row <= b; row++) {
        absxk_tmp = (row + (col << 1)) - 1;
        absxk = muDoubleScalarAbs(A[absxk_tmp].re);
        if (absxk > colscale) {
          t = colscale / absxk;
          colssq = colssq * t * t + 1.0;
          colscale = absxk;
        } else {
          t = absxk / colscale;
          colssq += t * t;
        }
        absxk = muDoubleScalarAbs(A[absxk_tmp].im);
        if (absxk > colscale) {
          t = colscale / absxk;
          colssq = colssq * t * t + 1.0;
          colscale = absxk;
        } else {
          t = absxk / colscale;
          colssq += t * t;
        }
      }
      if (scale >= colscale) {
        st.site = &xp_emlrtRSI;
        absxk = colscale / scale;
        ssq += absxk * absxk * colssq;
      } else {
        st.site = &yp_emlrtRSI;
        absxk = scale / colscale;
        ssq = colssq + absxk * absxk * ssq;
        scale = colscale;
      }
    }
    st.site = &aq_emlrtRSI;
    f = scale * muDoubleScalarSqrt(ssq);
  }
  return f;
}

/* End of code generation (xzlanhs.c) */
