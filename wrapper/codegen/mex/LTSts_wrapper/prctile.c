/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * prctile.c
 *
 * Code generation for function 'prctile'
 *
 */

/* Include files */
#include "prctile.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo jv_emlrtRSI = {
    54,        /* lineNo */
    "prctile", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\prctile.m" /* pathName
                                                                         */
};

static emlrtBCInfo eo_emlrtBCI = {
    -1,                  /* iFirst */
    -1,                  /* iLast */
    146,                 /* lineNo */
    26,                  /* colNo */
    "",                  /* aName */
    "percentile_vector", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\prctile.m", /* pName
                                                                          */
    0 /* checkKind */
};

/* Function Definitions */
real_T prctile(const emlrtStack *sp, const emxArray_real_T *x, real_T p)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  real_T b_i;
  real_T r;
  real_T y;
  int32_T i;
  int32_T nj;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &jv_emlrtRSI;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    emxInit_int32_T(&st, &idx, 1, &ru_emlrtRTEI, true);
    b_st.site = &kv_emlrtRSI;
    sortIdx(&b_st, x, idx);
    b_st.site = &lv_emlrtRSI;
    nj = x->size[0];
    exitg1 = false;
    while ((!exitg1) && (nj > 0)) {
      if (nj > idx->size[0]) {
        emlrtDynamicBoundsCheckR2012b(nj, 1, idx->size[0], &co_emlrtBCI, &b_st);
      }
      i = idx->data[nj - 1];
      if ((i < 1) || (i > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &co_emlrtBCI, &b_st);
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
        emlrtDynamicBoundsCheckR2012b(idx->data[0], 1, x->size[0], &do_emlrtBCI,
                                      &st);
      }
      y = x->data[idx->data[0] - 1];
    } else {
      r = p / 100.0 * (real_T)nj;
      b_i = muDoubleScalarRound(r);
      if (b_i < 1.0) {
        if ((idx->data[0] < 1) || (idx->data[0] > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(idx->data[0], 1, x->size[0],
                                        &eo_emlrtBCI, &st);
        }
        y = x->data[idx->data[0] - 1];
      } else if (b_i >= nj) {
        if (nj > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b(nj, 1, idx->size[0], &fo_emlrtBCI, &st);
        }
        i = idx->data[nj - 1];
        if ((i < 1) || (i > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &fo_emlrtBCI, &st);
        }
        y = x->data[i - 1];
      } else {
        r -= b_i;
        if ((int32_T)b_i > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_i, 1, idx->size[0],
                                        &go_emlrtBCI, &st);
        }
        i = idx->data[(int32_T)b_i - 1];
        if ((i < 1) || (i > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &go_emlrtBCI, &st);
        }
        if ((int32_T)(b_i + 1.0) > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1.0), 1, idx->size[0],
                                        &ho_emlrtBCI, &st);
        }
        nj = idx->data[(int32_T)(b_i + 1.0) - 1];
        if ((nj < 1) || (nj > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(nj, 1, x->size[0], &ho_emlrtBCI, &st);
        }
        y = (0.5 - r) * x->data[i - 1] + (r + 0.5) * x->data[nj - 1];
      }
    }
    emxFree_int32_T(&idx);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (prctile.c) */
