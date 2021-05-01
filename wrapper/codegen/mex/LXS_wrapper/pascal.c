/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pascal.c
 *
 * Code generation for function 'pascal'
 *
 */

/* Include files */
#include "pascal.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo pf_emlrtRSI = {
    52,       /* lineNo */
    "pascal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pathName
                                                                         */
};

static emlrtRSInfo qf_emlrtRSI = {
    46,       /* lineNo */
    "pascal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pathName
                                                                         */
};

static emlrtRSInfo rf_emlrtRSI = {
    45,       /* lineNo */
    "pascal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pathName
                                                                         */
};

static emlrtRSInfo sf_emlrtRSI = {
    39,       /* lineNo */
    "pascal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pathName
                                                                         */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    25,       /* lineNo */
    15,       /* colNo */
    "pascal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pName
                                                                         */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    36,       /* lineNo */
    1,        /* colNo */
    "pascal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pName
                                                                         */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    33,       /* lineNo */
    5,        /* colNo */
    "pascal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pName
                                                                         */
};

static emlrtRTEInfo tf_emlrtRTEI = {
    178,      /* lineNo */
    59,       /* colNo */
    "mtimes", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pName */
};

/* Function Definitions */
void pascal(const emlrtStack *sp, real_T n, emxArray_real_T *P)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *A;
  real_T beta1;
  real_T plusminus1;
  int32_T i;
  int32_T loop_ub;
  int32_T mA;
  int32_T mB;
  int32_T nn_tmp_tmp;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (!(n == muDoubleScalarFloor(n))) {
    emlrtErrorWithMessageIdR2018a(
        sp, &bb_emlrtRTEI, "Coder:toolbox:pascal_nMustBeNonNegativeInteger",
        "Coder:toolbox:pascal_nMustBeNonNegativeInteger", 0);
  }
  nn_tmp_tmp = (int32_T)n;
  if ((int32_T)n < 2) {
    i = P->size[0] * P->size[1];
    P->size[0] = (int32_T)n;
    P->size[1] = (int32_T)n;
    emxEnsureCapacity_real_T(sp, P, i, &sf_emlrtRTEI);
    loop_ub = (int32_T)n * (int32_T)n;
    for (i = 0; i < loop_ub; i++) {
      P->data[i] = 1.0;
    }
  } else {
    i = P->size[0] * P->size[1];
    P->size[0] = (int32_T)n;
    P->size[1] = (int32_T)n;
    emxEnsureCapacity_real_T(sp, P, i, &rf_emlrtRTEI);
    loop_ub = (int32_T)n * (int32_T)n;
    for (i = 0; i < loop_ub; i++) {
      P->data[i] = 0.0;
    }
    for (i = 0; i < nn_tmp_tmp; i++) {
      P->data[i] = 1.0;
    }
    plusminus1 = -1.0;
    st.site = &sf_emlrtRSI;
    if ((2 <= (int32_T)n) && ((int32_T)n > 2147483646)) {
      b_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (loop_ub = 2; loop_ub <= nn_tmp_tmp; loop_ub++) {
      P->data[(loop_ub + P->size[0] * (loop_ub - 1)) - 1] = plusminus1;
      plusminus1 = -plusminus1;
    }
    if ((int32_T)n > 2) {
      mA = (int32_T)n - 1;
      st.site = &rf_emlrtRSI;
      if ((2 <= (int32_T)n - 1) && ((int32_T)n - 1 > 2147483646)) {
        b_st.site = &ic_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (loop_ub = 2; loop_ub <= mA; loop_ub++) {
        mB = loop_ub + 1;
        st.site = &qf_emlrtRSI;
        if ((loop_ub + 1 <= (int32_T)n) && ((int32_T)n > 2147483646)) {
          b_st.site = &ic_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }
        for (i = mB; i <= nn_tmp_tmp; i++) {
          P->data[(i + P->size[0] * (loop_ub - 1)) - 1] =
              P->data[(i + P->size[0] * (loop_ub - 1)) - 2] -
              P->data[(i + P->size[0] * (loop_ub - 2)) - 2];
        }
      }
    }
    emxInit_real_T(sp, &A, 2, &tf_emlrtRTEI, true);
    st.site = &pf_emlrtRSI;
    b_st.site = &gc_emlrtRSI;
    b_st.site = &fc_emlrtRSI;
    mA = P->size[0];
    mB = P->size[0];
    c_st.site = &hc_emlrtRSI;
    d_st.site = &jc_emlrtRSI;
    i = A->size[0] * A->size[1];
    A->size[0] = P->size[0];
    A->size[1] = P->size[1];
    emxEnsureCapacity_real_T(&d_st, A, i, &tf_emlrtRTEI);
    loop_ub = P->size[0] * P->size[1];
    for (i = 0; i < loop_ub; i++) {
      A->data[i] = P->data[i];
    }
    TRANSB1 = 'T';
    TRANSA1 = 'N';
    plusminus1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)P->size[0];
    n_t = (ptrdiff_t)P->size[0];
    k_t = (ptrdiff_t)P->size[1];
    lda_t = (ptrdiff_t)P->size[0];
    ldb_t = (ptrdiff_t)P->size[0];
    ldc_t = (ptrdiff_t)P->size[0];
    i = P->size[0] * P->size[1];
    P->size[0] = mA;
    P->size[1] = mB;
    emxEnsureCapacity_real_T(&d_st, P, i, &ge_emlrtRTEI);
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &plusminus1, &A->data[0],
          &lda_t, &A->data[0], &ldb_t, &beta1, &P->data[0], &ldc_t);
    emxFree_real_T(&A);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (pascal.c) */
