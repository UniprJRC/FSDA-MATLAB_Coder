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
#include "FSRfan_wrapper_data.h"
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ef_emlrtRSI = {
    52,       /* lineNo */
    "pascal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pathName
                                                                         */
};

static emlrtRSInfo ff_emlrtRSI = {
    46,       /* lineNo */
    "pascal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pathName
                                                                         */
};

static emlrtRSInfo gf_emlrtRSI = {
    45,       /* lineNo */
    "pascal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pathName
                                                                         */
};

static emlrtRSInfo hf_emlrtRSI = {
    39,       /* lineNo */
    "pascal", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pathName
                                                                         */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    25,       /* lineNo */
    15,       /* colNo */
    "pascal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pName
                                                                         */
};

static emlrtRTEInfo of_emlrtRTEI = {
    36,       /* lineNo */
    1,        /* colNo */
    "pascal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pName
                                                                         */
};

static emlrtRTEInfo pf_emlrtRTEI = {
    33,       /* lineNo */
    5,        /* colNo */
    "pascal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pName
                                                                         */
};

static emlrtRTEInfo qf_emlrtRTEI = {
    52,       /* lineNo */
    9,        /* colNo */
    "pascal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pName
                                                                         */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    52,       /* lineNo */
    11,       /* colNo */
    "pascal", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\pascal.m" /* pName
                                                                         */
};

/* Function Definitions */
void pascal(const emlrtStack *sp, real_T n, emxArray_real_T *P)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *b_P;
  emxArray_real_T *c_P;
  real_T plusminus1;
  int32_T a;
  int32_T i;
  int32_T j;
  int32_T loop_ub;
  int32_T nn_tmp_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (!(n == muDoubleScalarFloor(n))) {
    emlrtErrorWithMessageIdR2018a(
        sp, &ab_emlrtRTEI, "Coder:toolbox:pascal_nMustBeNonNegativeInteger",
        "Coder:toolbox:pascal_nMustBeNonNegativeInteger", 0);
  }
  nn_tmp_tmp = (int32_T)n;
  if ((int32_T)n < 2) {
    a = P->size[0] * P->size[1];
    P->size[0] = (int32_T)n;
    P->size[1] = (int32_T)n;
    emxEnsureCapacity_real_T(sp, P, a, &pf_emlrtRTEI);
    loop_ub = (int32_T)n * (int32_T)n;
    for (a = 0; a < loop_ub; a++) {
      P->data[a] = 1.0;
    }
  } else {
    a = P->size[0] * P->size[1];
    P->size[0] = (int32_T)n;
    P->size[1] = (int32_T)n;
    emxEnsureCapacity_real_T(sp, P, a, &of_emlrtRTEI);
    loop_ub = (int32_T)n * (int32_T)n;
    for (a = 0; a < loop_ub; a++) {
      P->data[a] = 0.0;
    }
    for (a = 0; a < nn_tmp_tmp; a++) {
      P->data[a] = 1.0;
    }
    plusminus1 = -1.0;
    st.site = &hf_emlrtRSI;
    if ((2 <= (int32_T)n) && ((int32_T)n > 2147483646)) {
      b_st.site = &ob_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 2; j <= nn_tmp_tmp; j++) {
      P->data[(j + P->size[0] * (j - 1)) - 1] = plusminus1;
      plusminus1 = -plusminus1;
    }
    if ((int32_T)n > 2) {
      loop_ub = (int32_T)n - 1;
      st.site = &gf_emlrtRSI;
      if ((2 <= (int32_T)n - 1) && ((int32_T)n - 1 > 2147483646)) {
        b_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (j = 2; j <= loop_ub; j++) {
        a = j + 1;
        st.site = &ff_emlrtRSI;
        if ((j + 1 <= (int32_T)n) && ((int32_T)n > 2147483646)) {
          b_st.site = &ob_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }
        for (i = a; i <= nn_tmp_tmp; i++) {
          P->data[(i + P->size[0] * (j - 1)) - 1] =
              P->data[(i + P->size[0] * (j - 1)) - 2] -
              P->data[(i + P->size[0] * (j - 2)) - 2];
        }
      }
    }
    emxInit_real_T(sp, &b_P, 2, &qf_emlrtRTEI, true);
    st.site = &ef_emlrtRSI;
    a = b_P->size[0] * b_P->size[1];
    b_P->size[0] = P->size[0];
    b_P->size[1] = P->size[1];
    emxEnsureCapacity_real_T(&st, b_P, a, &qf_emlrtRTEI);
    loop_ub = P->size[0] * P->size[1] - 1;
    for (a = 0; a <= loop_ub; a++) {
      b_P->data[a] = P->data[a];
    }
    emxInit_real_T(&st, &c_P, 2, &rf_emlrtRTEI, true);
    a = c_P->size[0] * c_P->size[1];
    c_P->size[0] = P->size[0];
    c_P->size[1] = P->size[1];
    emxEnsureCapacity_real_T(&st, c_P, a, &rf_emlrtRTEI);
    loop_ub = P->size[0] * P->size[1] - 1;
    for (a = 0; a <= loop_ub; a++) {
      c_P->data[a] = P->data[a];
    }
    b_st.site = &lb_emlrtRSI;
    b_mtimes(&b_st, b_P, c_P, P);
    emxFree_real_T(&c_P);
    emxFree_real_T(&b_P);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (pascal.c) */
