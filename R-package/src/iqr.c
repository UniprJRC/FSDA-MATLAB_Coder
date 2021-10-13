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
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
double iqr(const emxArray_real_T *x)
{
  emxArray_int32_T *idx;
  const double *x_data;
  double r;
  double y_idx_0_tmp;
  int i;
  int nj;
  int *idx_data;
  x_data = x->data;
  if (x->size[0] == 0) {
    y_idx_0_tmp = rtNaN;
    r = rtNaN;
  } else {
    emxInit_int32_T(&idx, 1);
    sortIdx(x, idx);
    idx_data = idx->data;
    nj = x->size[0];
    while ((nj > 0) && rtIsNaN(x_data[idx_data[nj - 1] - 1])) {
      nj--;
    }
    if (nj < 1) {
      y_idx_0_tmp = rtNaN;
      r = rtNaN;
    } else if (nj == 1) {
      y_idx_0_tmp = x_data[idx_data[0] - 1];
      r = y_idx_0_tmp;
    } else {
      r = 0.25 * (double)nj;
      i = (int)rt_roundd_snf(r);
      if (i >= nj) {
        y_idx_0_tmp = x_data[idx_data[nj - 1] - 1];
      } else {
        r -= (double)i;
        y_idx_0_tmp = (0.5 - r) * x_data[idx_data[i - 1] - 1] +
                      (r + 0.5) * x_data[idx_data[i] - 1];
      }
      r = 0.75 * (double)nj;
      i = (int)rt_roundd_snf(r);
      if (i >= nj) {
        r = x_data[idx_data[nj - 1] - 1];
      } else {
        r -= (double)i;
        r = (0.5 - r) * x_data[idx_data[i - 1] - 1] +
            (r + 0.5) * x_data[idx_data[i] - 1];
      }
    }
    emxFree_int32_T(&idx);
  }
  return r - y_idx_0_tmp;
}

/* End of code generation (iqr.c) */
