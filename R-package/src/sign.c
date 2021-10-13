/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sign.c
 *
 * Code generation for function 'sign'
 *
 */

/* Include files */
#include "sign.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_sign(emxArray_real_T *x)
{
  double b_x;
  double *x_data;
  int k;
  int nx;
  x_data = x->data;
  nx = x->size[0];
  for (k = 0; k < nx; k++) {
    b_x = x_data[k];
    if (x_data[k] < 0.0) {
      b_x = -1.0;
    } else if (x_data[k] > 0.0) {
      b_x = 1.0;
    } else if (x_data[k] == 0.0) {
      b_x = 0.0;
    }
    x_data[k] = b_x;
  }
}

/* End of code generation (sign.c) */
