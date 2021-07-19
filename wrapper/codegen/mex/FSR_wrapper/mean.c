/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "mean.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "blockedSummation.h"
#include "combineVectorElements.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo xm_emlrtRSI = {
    49,     /* lineNo */
    "mean", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m" /* pathName
                                                                         */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    18,     /* lineNo */
    15,     /* colNo */
    "mean", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m" /* pName
                                                                         */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    22,     /* lineNo */
    5,      /* colNo */
    "mean", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m" /* pName
                                                                         */
};

static emlrtRTEInfo gy_emlrtRTEI = {
    49,     /* lineNo */
    5,      /* colNo */
    "mean", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m" /* pName
                                                                         */
};

/* Function Definitions */
void b_mean(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  if (((x->size[0] != 1) || (x->size[1] != 1)) && (x->size[0] == 1)) {
    emlrtErrorWithMessageIdR2018a(sp, &wb_emlrtRTEI,
                                  "Coder:toolbox:autoDimIncompatibility",
                                  "Coder:toolbox:autoDimIncompatibility", 0);
  }
  if ((x->size[0] == 0) && (x->size[1] == 0)) {
    emlrtErrorWithMessageIdR2018a(sp, &oc_emlrtRTEI,
                                  "Coder:toolbox:UnsupportedSpecialEmpty",
                                  "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }
  st.site = &xm_emlrtRSI;
  b_combineVectorElements(&st, x, y);
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_real_T(sp, y, i, &gy_emlrtRTEI);
  loop_ub = y->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    y->data[i] /= (real_T)x->size[0];
  }
}

real_T mean(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T y;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  st.site = &xm_emlrtRSI;
  b_st.site = &tm_emlrtRSI;
  y = blockedSummation(&b_st, x, x->size[0]);
  y /= (real_T)x->size[0];
  return y;
}

/* End of code generation (mean.c) */
