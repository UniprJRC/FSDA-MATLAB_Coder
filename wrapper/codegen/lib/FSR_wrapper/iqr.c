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
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_rtwutil.h"
#include "FSR_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double iqr(const emxArray_real_T *x)
{
  emxArray_int32_T *idx;
  double r;
  double y_idx_0_tmp;
  int i;
  int nj;
  if (x->size[0] == 0) {
    y_idx_0_tmp = rtNaN;
    r = rtNaN;
  } else {
    emxInit_int32_T(&idx, 1);
    sortIdx(x, idx);
    nj = x->size[0];
    while ((nj > 0) && rtIsNaN(x->data[idx->data[nj - 1] - 1])) {
      nj--;
    }
    if (nj < 1) {
      y_idx_0_tmp = rtNaN;
      r = rtNaN;
    } else if (nj == 1) {
      y_idx_0_tmp = x->data[idx->data[0] - 1];
      r = y_idx_0_tmp;
    } else {
      r = 0.25 * (double)nj;
      i = (int)rt_roundd_snf(r);
      if (i >= nj) {
        y_idx_0_tmp = x->data[idx->data[nj - 1] - 1];
      } else {
        r -= (double)i;
        y_idx_0_tmp = (0.5 - r) * x->data[idx->data[i - 1] - 1] +
                      (r + 0.5) * x->data[idx->data[i] - 1];
      }
      r = 0.75 * (double)nj;
      i = (int)rt_roundd_snf(r);
      if (i >= nj) {
        r = x->data[idx->data[nj - 1] - 1];
      } else {
        r -= (double)i;
        r = (0.5 - r) * x->data[idx->data[i - 1] - 1] +
            (r + 0.5) * x->data[idx->data[i] - 1];
      }
    }
    emxFree_int32_T(&idx);
  }
  return r - y_idx_0_tmp;
}

/* End of code generation (iqr.c) */
