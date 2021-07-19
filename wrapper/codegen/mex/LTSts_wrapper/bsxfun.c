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
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void bsxfun(const emlrtStack *sp, const emxArray_real_T *a,
            const emxArray_real_T *b, emxArray_real_T *c)
{
  int32_T acoef;
  int32_T b_k;
  int32_T bcoef;
  int32_T csz_idx_0;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T varargin_3;
  if (b->size[0] == 1) {
    csz_idx_0 = a->size[0];
  } else if (a->size[0] == 1) {
    csz_idx_0 = b->size[0];
  } else if (a->size[0] == b->size[0]) {
    csz_idx_0 = a->size[0];
  } else {
    emlrtErrorWithMessageIdR2018a(sp, &tb_emlrtRTEI,
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch",
                                  "MATLAB:bsxfun:arrayDimensionsMustMatch", 0);
  }
  i = c->size[0] * c->size[1];
  c->size[0] = csz_idx_0;
  c->size[1] = b->size[1];
  emxEnsureCapacity_real_T(sp, c, i, &fm_emlrtRTEI);
  if ((csz_idx_0 != 0) && (b->size[1] != 0)) {
    csz_idx_0 = (b->size[1] != 1);
    i = b->size[1] - 1;
    for (k = 0; k <= i; k++) {
      varargin_3 = csz_idx_0 * k;
      acoef = (a->size[0] != 1);
      bcoef = (b->size[0] != 1);
      i1 = c->size[0] - 1;
      for (b_k = 0; b_k <= i1; b_k++) {
        c->data[b_k + c->size[0] * k] =
            a->data[acoef * b_k] *
            b->data[bcoef * b_k + b->size[0] * varargin_3];
      }
    }
  }
}

/* End of code generation (bsxfun.c) */
