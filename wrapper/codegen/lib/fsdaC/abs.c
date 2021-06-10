/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "abs.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  int k;
  int nx;
  nx = x->size[0] * x->size[1];
  k = y->size[0] * y->size[1];
  y->size[0] = x->size[0];
  y->size[1] = x->size[1];
  emxEnsureCapacity_real_T(y, k);
  for (k = 0; k < nx; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
