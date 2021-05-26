/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bsxfun.c
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "bsxfun.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRTEInfo yb_emlrtRTEI = {
    53,       /* lineNo */
    15,       /* colNo */
    "bsxfun", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m" /* pName
                                                                         */
};

/* Function Definitions */
void b_bsxfun(const emlrtStack *sp, const emxArray_real_T *a,
              const emxArray_real_T *b, emxArray_real_T *c)
{
  int32_T acoef;
  int32_T b_acoef;
  int32_T b_bcoef;
  int32_T b_k;
  int32_T bcoef;
  int32_T csz_idx_0;
  int32_T csz_idx_1;
  int32_T i;
  int32_T i1;
  int32_T k;
  boolean_T iscompatible;
  iscompatible = true;
  if (b->size[0] == 1) {
    csz_idx_0 = a->size[0];
  } else if (a->size[0] == 1) {
    csz_idx_0 = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    csz_idx_0 = a->size[0];
  } else {
    iscompatible = false;
    csz_idx_0 = muIntScalarMin_sint32(b->size[0], a->size[0]);
  }
  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    iscompatible = false;
    csz_idx_1 = muIntScalarMin_sint32(b->size[1], a->size[1]);
  }
  if (!iscompatible) {
    emlrtErrorWithMessageIdR2018a(sp, &yb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  i = c->size[0] * c->size[1];
  c->size[0] = csz_idx_0;
  c->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(sp, c, i, &kj_emlrtRTEI);
  if ((csz_idx_0 != 0) && (csz_idx_1 != 0)) {
    acoef = (a->size[1] != 1);
    bcoef = (b->size[1] != 1);
    i = csz_idx_1 - 1;
    for (k = 0; k <= i; k++) {
      csz_idx_0 = acoef * k;
      csz_idx_1 = bcoef * k;
      b_acoef = (a->size[0] != 1);
      b_bcoef = (b->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            a->data[b_acoef * b_k + a->size[0] * csz_idx_0] *
            b->data[b_bcoef * b_k + b->size[0] * csz_idx_1];
      }
    }
  }
}

void bsxfun(const emlrtStack *sp, const emxArray_real_T *a,
            const emxArray_real_T *b, emxArray_real_T *c)
{
  int32_T acoef;
  int32_T b_acoef;
  int32_T b_k;
  int32_T bcoef;
  int32_T csz_idx_1;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T varargin_3;
  if (b->size[1] == 1) {
    csz_idx_1 = a->size[1];
  } else if (a->size[1] == 1) {
    csz_idx_1 = b->size[1];
  } else if (a->size[1] == b->size[1]) {
    csz_idx_1 = a->size[1];
  } else {
    emlrtErrorWithMessageIdR2018a(sp, &yb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(sp, c, i, &kj_emlrtRTEI);
  if ((a->size[0] != 0) && (csz_idx_1 != 0)) {
    acoef = (a->size[1] != 1);
    bcoef = (b->size[1] != 1);
    i = csz_idx_1 - 1;
    for (k = 0; k <= i; k++) {
      csz_idx_1 = acoef * k;
      varargin_3 = bcoef * k;
      b_acoef = (a->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            a->data[b_acoef * b_k + a->size[0] * csz_idx_1] -
            b->data[varargin_3];
      }
    }
  }
}

/* End of code generation (bsxfun.c) */
