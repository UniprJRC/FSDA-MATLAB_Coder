/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * iqr.c
 *
 * Code generation for function 'iqr'
 *
 */

/* Include files */
#include "iqr.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo rk_emlrtRSI = {
    9,     /* lineNo */
    "iqr", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\iqr.m" /* pathName
                                                                     */
};

/* Function Definitions */
real_T iqr(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  real_T r;
  real_T y;
  real_T y_idx_0_tmp;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  st.site = &rk_emlrtRSI;
  b_st.site = &sk_emlrtRSI;
  if (x->size[0] == 0) {
    y_idx_0_tmp = rtNaN;
    r = rtNaN;
  } else {
    emxInit_int32_T(&b_st, &idx, 1, &uj_emlrtRTEI, true);
    c_st.site = &lk_emlrtRSI;
    sortIdx(&c_st, x, idx);
    c_st.site = &kk_emlrtRSI;
    nj = x->size[0];
    exitg1 = false;
    while ((!exitg1) && (nj > 0)) {
      if (nj > idx->size[0]) {
        emlrtDynamicBoundsCheckR2012b(nj, 1, idx->size[0], &tl_emlrtBCI, &c_st);
      }
      i = idx->data[nj - 1];
      if ((i < 1) || (i > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &tl_emlrtBCI, &c_st);
      }
      if (!muDoubleScalarIsNaN(x->data[i - 1])) {
        exitg1 = true;
      } else {
        nj--;
      }
    }
    if (nj < 1) {
      y_idx_0_tmp = rtNaN;
      r = rtNaN;
    } else if (nj == 1) {
      if ((idx->data[0] < 1) || (idx->data[0] > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b(idx->data[0], 1, x->size[0], &yl_emlrtBCI,
                                      &b_st);
      }
      y_idx_0_tmp = x->data[idx->data[0] - 1];
      if ((idx->data[0] < 1) || (idx->data[0] > x->size[0])) {
        emlrtDynamicBoundsCheckR2012b(idx->data[0], 1, x->size[0], &yl_emlrtBCI,
                                      &b_st);
      }
      r = y_idx_0_tmp;
    } else {
      r = 0.25 * (real_T)nj;
      b_i = (int32_T)muDoubleScalarRound(r);
      if (b_i >= nj) {
        if (nj > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b(nj, 1, idx->size[0], &vl_emlrtBCI,
                                        &b_st);
        }
        i = idx->data[nj - 1];
        if ((i < 1) || (i > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &vl_emlrtBCI, &b_st);
        }
        y_idx_0_tmp = x->data[i - 1];
      } else {
        r -= (real_T)b_i;
        if (b_i > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, idx->size[0], &wl_emlrtBCI,
                                        &b_st);
        }
        i = idx->data[b_i - 1];
        if ((i < 1) || (i > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &wl_emlrtBCI, &b_st);
        }
        if (b_i + 1 > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, idx->size[0], &xl_emlrtBCI,
                                        &b_st);
        }
        b_i = idx->data[b_i];
        if ((b_i < 1) || (b_i > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, x->size[0], &xl_emlrtBCI,
                                        &b_st);
        }
        y_idx_0_tmp = (0.5 - r) * x->data[i - 1] + (r + 0.5) * x->data[b_i - 1];
      }
      r = 0.75 * (real_T)nj;
      b_i = (int32_T)muDoubleScalarRound(r);
      if (b_i >= nj) {
        if (nj > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b(nj, 1, idx->size[0], &vl_emlrtBCI,
                                        &b_st);
        }
        i = idx->data[nj - 1];
        if ((i < 1) || (i > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &vl_emlrtBCI, &b_st);
        }
        r = x->data[i - 1];
      } else {
        r -= (real_T)b_i;
        if (b_i > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, idx->size[0], &wl_emlrtBCI,
                                        &b_st);
        }
        i = idx->data[b_i - 1];
        if ((i < 1) || (i > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, x->size[0], &wl_emlrtBCI, &b_st);
        }
        if (b_i + 1 > idx->size[0]) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, idx->size[0], &xl_emlrtBCI,
                                        &b_st);
        }
        b_i = idx->data[b_i];
        if ((b_i < 1) || (b_i > x->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, x->size[0], &xl_emlrtBCI,
                                        &b_st);
        }
        r = (0.5 - r) * x->data[i - 1] + (r + 0.5) * x->data[b_i - 1];
      }
    }
    emxFree_int32_T(&idx);
  }
  y = r - y_idx_0_tmp;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (iqr.c) */
