/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * nanmedian.c
 *
 * Code generation for function 'nanmedian'
 *
 */

/* Include files */
#include "nanmedian.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo nk_emlrtRSI = {
    11,          /* lineNo */
    "nanmedian", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\nanmedian.m" /* pathName
                                                                           */
};

static emlrtRSInfo ok_emlrtRSI = {
    56,        /* lineNo */
    "prctile", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\prctile.m" /* pathName
                                                                         */
};

static emlrtRSInfo pk_emlrtRSI = {
    92,                 /* lineNo */
    "percentile_array", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\prctile.m" /* pathName
                                                                         */
};

static emlrtBCInfo ql_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    140,                 /* lineNo */
    18,                  /* colNo */
    "",                  /* aName */
    "percentile_vector", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\prctile.m", /* pName
                                                                          */
    0 /* checkKind */
};

/* Function Definitions */
real_T nanmedian(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  real_T r;
  real_T y;
  int32_T b_i;
  int32_T i;
  int32_T nj;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int32_T(sp, &idx, 1, &ll_emlrtRTEI, true);
  st.site = &nk_emlrtRSI;
  b_st.site = &ok_emlrtRSI;
  c_st.site = &pk_emlrtRSI;
  d_st.site = &rk_emlrtRSI;
  sortIdx(&d_st, x, idx);
  d_st.site = &qk_emlrtRSI;
  nj = x->size[0];
  exitg1 = false;
  while ((!exitg1) && (nj > 0)) {
    if (nj > idx->size[0]) {
      emlrtDynamicBoundsCheckR2012b(nj, 1, idx->size[0], &pl_emlrtBCI, &d_st);
    }
    i = idx->data[nj - 1];
    if ((i < 1) || (i > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &pl_emlrtBCI, &d_st);
    }
    if (!muDoubleScalarIsNaN(x->data[i - 1])) {
      exitg1 = true;
    } else {
      nj--;
    }
  }
  if (nj < 1) {
    y = rtNaN;
  } else if (nj == 1) {
    if ((idx->data[0] < 1) || (idx->data[0] > x->size[0])) {
      emlrtDynamicBoundsCheckR2012b(idx->data[0], 1, x->size[0], &ql_emlrtBCI,
                                    &c_st);
    }
    y = x->data[idx->data[0] - 1];
  } else {
    r = 0.5 * (real_T)nj;
    b_i = (int32_T)muDoubleScalarRound(r);
    if (b_i >= nj) {
      if (nj > idx->size[0]) {
        emlrtDynamicBoundsCheckR2012b(nj, 1, idx->size[0], &rl_emlrtBCI, &c_st);
      }
      i = idx->data[nj - 1];
      if ((i < 1) || (i > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &rl_emlrtBCI, &c_st);
      }
      y = x->data[i - 1];
    } else {
      r -= (real_T)b_i;
      if (b_i > idx->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i, 1, idx->size[0], &sl_emlrtBCI,
                                      &c_st);
      }
      i = idx->data[b_i - 1];
      if ((i < 1) || (i > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &sl_emlrtBCI, &c_st);
      }
      if (b_i + 1 > idx->size[0]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, idx->size[0], &tl_emlrtBCI,
                                      &c_st);
      }
      nj = idx->data[b_i];
      if ((nj < 1) || (nj > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b(nj, 1, x->size[0], &tl_emlrtBCI, &c_st);
      }
      y = (0.5 - r) * x->data[i - 1] + (r + 0.5) * x->data[nj - 1];
    }
  }
  emxFree_int32_T(&idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (nanmedian.c) */
