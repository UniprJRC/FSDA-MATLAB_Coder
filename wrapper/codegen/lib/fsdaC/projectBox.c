/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: projectBox.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "projectBox.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *x
 *                const emxArray_real_T *dx
 * Return Type  : double
 */
double projectBox(const emxArray_real_T *x, const emxArray_real_T *dx)
{
  double dxInfNorm;
  int i;
  int n;
  n = dx->size[0] - 1;
  dxInfNorm = 0.0;
  if (x->size[0] == 0) {
    for (i = 0; i <= n; i++) {
      dxInfNorm = fmax(dxInfNorm, fabs(dx->data[i]));
    }
  } else {
    for (i = 0; i <= n; i++) {
      dxInfNorm = fmax(dxInfNorm, fabs(dx->data[i]));
    }
  }
  return dxInfNorm;
}

/*
 * File trailer for projectBox.c
 *
 * [EOF]
 */
