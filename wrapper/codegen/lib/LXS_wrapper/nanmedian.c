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
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_rtwutil.h"
#include "LXS_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double nanmedian(const emxArray_real_T *x)
{
  emxArray_int32_T *idx;
  double r;
  double y;
  int i;
  int nj;
  emxInit_int32_T(&idx, 1);
  sortIdx(x, idx);
  nj = x->size[0];
  while ((nj > 0) && rtIsNaN(x->data[idx->data[nj - 1] - 1])) {
    nj--;
  }
  if (nj < 1) {
    y = rtNaN;
  } else if (nj == 1) {
    y = x->data[idx->data[0] - 1];
  } else {
    r = 0.5 * (double)nj;
    i = (int)rt_roundd_snf(r);
    if (i >= nj) {
      y = x->data[idx->data[nj - 1] - 1];
    } else {
      r -= (double)i;
      y = (0.5 - r) * x->data[idx->data[i - 1] - 1] +
          (r + 0.5) * x->data[idx->data[i] - 1];
    }
  }
  emxFree_int32_T(&idx);
  return y;
}

/* End of code generation (nanmedian.c) */
