/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "power.h"
#include "FSMbsb_wrapper_emxutil.h"
#include "FSMbsb_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void power(const emxArray_real_T *a, emxArray_real_T *y)
{
  int k;
  int nx;
  nx = y->size[0] * y->size[1];
  y->size[0] = a->size[0];
  y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(y, nx);
  nx = a->size[0] * a->size[1];
  for (k = 0; k < nx; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
