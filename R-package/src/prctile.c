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
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
double prctile(const emxArray_real_T *x, double p)
{
  emxArray_int32_T *idx;
  const double *x_data;
  double i;
  double r;
  double y;
  int nj;
  int *idx_data;
  x_data = x->data;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    emxInit_int32_T(&idx, 1);
    sortIdx(x, idx);
    idx_data = idx->data;
    nj = x->size[0];
    while ((nj > 0) && rtIsNaN(x_data[idx_data[nj - 1] - 1])) {
      nj--;
    }
    if (nj < 1) {
      y = rtNaN;
    } else if (nj == 1) {
      y = x_data[idx_data[0] - 1];
    } else {
      r = p / 100.0 * (double)nj;
      i = rt_roundd_snf(r);
      if (i < 1.0) {
        y = x_data[idx_data[0] - 1];
      } else if (i >= nj) {
        y = x_data[idx_data[nj - 1] - 1];
      } else {
        r -= i;
        y = (0.5 - r) * x_data[idx_data[(int)i - 1] - 1] +
            (r + 0.5) * x_data[idx_data[(int)(i + 1.0) - 1] - 1];
      }
    }
    emxFree_int32_T(&idx);
  }
  return y;
}

/* End of code generation (prctile.c) */
