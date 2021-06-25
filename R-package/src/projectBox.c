/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * projectBox.c
 *
 * Code generation for function 'projectBox'
 *
 */

/* Include files */
#include "projectBox.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
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

/* End of code generation (projectBox.c) */
