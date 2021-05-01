/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vvarstd.c
 *
 * Code generation for function 'vvarstd'
 *
 */

/* Include files */
#include "vvarstd.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "blockedSummation.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo et_emlrtRSI = {
    96,        /* lineNo */
    "vvarstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pathName */
};

static emlrtRSInfo ft_emlrtRSI = {
    127,       /* lineNo */
    "vvarstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pathName */
};

static emlrtRSInfo gt_emlrtRSI = {
    143,       /* lineNo */
    "vvarstd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pathName */
};

static emlrtRTEInfo ls_emlrtRTEI = {
    126,       /* lineNo */
    34,        /* colNo */
    "vvarstd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pName */
};

static emlrtRTEInfo ms_emlrtRTEI = {
    126,       /* lineNo */
    9,         /* colNo */
    "vvarstd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vvarst"
    "d.m" /* pName */
};

/* Function Definitions */
real_T vvarstd(const emlrtStack *sp, const emxArray_real_T *v, int32_T n)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *absdiff;
  real_T s;
  real_T xbar;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (n == 0) {
    s = rtNaN;
  } else if (n == 1) {
    if ((!muDoubleScalarIsInf(v->data[0])) &&
        (!muDoubleScalarIsNaN(v->data[0]))) {
      s = 0.0;
    } else {
      s = rtNaN;
    }
  } else {
    emxInit_real_T(sp, &absdiff, 1, &ms_emlrtRTEI, true);
    st.site = &et_emlrtRSI;
    b_st.site = &wn_emlrtRSI;
    xbar = blockedSummation(&b_st, v, n);
    xbar /= (real_T)n;
    k = absdiff->size[0];
    absdiff->size[0] = v->size[0];
    emxEnsureCapacity_real_T(sp, absdiff, k, &ls_emlrtRTEI);
    st.site = &ft_emlrtRSI;
    if ((1 <= n) && (n > 2147483646)) {
      b_st.site = &pf_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k < n; k++) {
      absdiff->data[k] = muDoubleScalarAbs(v->data[k] - xbar);
    }
    n_t = (ptrdiff_t)n;
    incx_t = (ptrdiff_t)1;
    s = dnrm2(&n_t, &absdiff->data[0], &incx_t);
    st.site = &gt_emlrtRSI;
    emxFree_real_T(&absdiff);
    if (n - 1 < 0) {
      emlrtErrorWithMessageIdR2018a(
          &st, &xb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    s /= muDoubleScalarSqrt(n - 1);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return s;
}

/* End of code generation (vvarstd.c) */
