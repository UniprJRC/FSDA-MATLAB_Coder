/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: triu.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "triu.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
void triu(emxArray_real_T *x)
{
  int i;
  int istart;
  int j;
  int jend;
  int m;
  m = x->size[0];
  if ((x->size[0] != 0) && (x->size[1] != 0) && (3 < x->size[0])) {
    istart = 4;
    if (x->size[0] - 4 < x->size[1] - 1) {
      jend = x->size[0] - 3;
    } else {
      jend = x->size[1];
    }
    for (j = 0; j < jend; j++) {
      for (i = istart; i <= m; i++) {
        x->data[(i + x->size[0] * j) - 1] = 0.0;
      }
      istart++;
    }
  }
}

/*
 * File trailer for triu.c
 *
 * [EOF]
 */
