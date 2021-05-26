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

/* Function Definitions */
double prctile(const emxArray_real_T *x, double p)
{
  emxArray_int32_T *idx;
  double i;
  double r;
  double y;
  int nj;
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
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
      r = p / 100.0 * (double)nj;
      i = rt_roundd_snf(r);
      if (i < 1.0) {
        y = x->data[idx->data[0] - 1];
      } else if (i >= nj) {
        y = x->data[idx->data[nj - 1] - 1];
      } else {
        r -= i;
        y = (0.5 - r) * x->data[idx->data[(int)i - 1] - 1] +
            (r + 0.5) * x->data[idx->data[(int)(i + 1.0) - 1] - 1];
      }
    }
    emxFree_int32_T(&idx);
  }
  return y;
}

/* End of code generation (prctile.c) */
