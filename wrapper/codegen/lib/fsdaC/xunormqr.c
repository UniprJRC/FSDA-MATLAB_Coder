/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xunormqr.c
 *
 * Code generation for function 'xunormqr'
 *
 */

/* Include files */
#include "xunormqr.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void xunormqr(const emxArray_real_T *Q, emxArray_real_T *C,
              const emxArray_real_T *tau)
{
  double wj;
  int i;
  int j;
  int m;
  int mn;
  int u0;
  m = Q->size[0];
  u0 = Q->size[0];
  mn = Q->size[1];
  if (u0 < mn) {
    mn = u0;
  }
  for (j = 0; j < mn; j++) {
    if (tau->data[j] != 0.0) {
      wj = C->data[j];
      u0 = j + 2;
      for (i = u0; i <= m; i++) {
        wj += Q->data[(i + Q->size[0] * j) - 1] * C->data[i - 1];
      }
      wj *= tau->data[j];
      if (wj != 0.0) {
        C->data[j] -= wj;
        for (i = u0; i <= m; i++) {
          C->data[i - 1] -= Q->data[(i + Q->size[0] * j) - 1] * wj;
        }
      }
    }
  }
}

/* End of code generation (xunormqr.c) */
