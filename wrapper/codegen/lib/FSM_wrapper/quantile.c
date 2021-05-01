/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quantile.c
 *
 * Code generation for function 'quantile'
 *
 */

/* Include files */
#include "quantile.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_rtwutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void quantile(const emxArray_real_T *x, double y[3])
{
  emxArray_int32_T *idx;
  double r;
  int i;
  int nj;
  if (x->size[0] == 0) {
    y[0] = rtNaN;
    y[1] = rtNaN;
    y[2] = rtNaN;
  } else {
    emxInit_int32_T(&idx, 1);
    sortIdx(x, idx);
    nj = x->size[0];
    while ((nj > 0) && rtIsNaN(x->data[idx->data[nj - 1] - 1])) {
      nj--;
    }
    if (nj < 1) {
      y[0] = rtNaN;
      y[1] = rtNaN;
      y[2] = rtNaN;
    } else if (nj == 1) {
      r = x->data[idx->data[0] - 1];
      y[0] = r;
      y[1] = r;
      y[2] = r;
    } else {
      r = 0.25 * (double)nj;
      i = (int)rt_roundd_snf(r);
      if (i >= nj) {
        y[0] = x->data[idx->data[nj - 1] - 1];
      } else {
        r -= (double)i;
        y[0] = (0.5 - r) * x->data[idx->data[i - 1] - 1] +
               (r + 0.5) * x->data[idx->data[i] - 1];
      }
      r = 0.5 * (double)nj;
      i = (int)rt_roundd_snf(r);
      if (i >= nj) {
        y[1] = x->data[idx->data[nj - 1] - 1];
      } else {
        r -= (double)i;
        y[1] = (0.5 - r) * x->data[idx->data[i - 1] - 1] +
               (r + 0.5) * x->data[idx->data[i] - 1];
      }
      r = 0.75 * (double)nj;
      i = (int)rt_roundd_snf(r);
      if (i >= nj) {
        y[2] = x->data[idx->data[nj - 1] - 1];
      } else {
        r -= (double)i;
        y[2] = (0.5 - r) * x->data[idx->data[i - 1] - 1] +
               (r + 0.5) * x->data[idx->data[i] - 1];
      }
    }
    emxFree_int32_T(&idx);
  }
}

/* End of code generation (quantile.c) */
