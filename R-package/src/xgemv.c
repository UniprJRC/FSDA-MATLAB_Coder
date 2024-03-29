/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgemv.c
 *
 * Code generation for function 'xgemv'
 *
 */

/* Include files */
#include "xgemv.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void xgemv(int m, int n, const emxArray_real_T *A, int lda,
           const emxArray_real_T *x, emxArray_real_T *y)
{
  const double *A_data;
  const double *x_data;
  double c;
  double *y_data;
  int i;
  int i1;
  int ia;
  int iac;
  int iy;
  y_data = y->data;
  x_data = x->data;
  A_data = A->data;
  if ((m != 0) && (n != 0)) {
    for (iy = 0; iy < n; iy++) {
      y_data[iy] = 0.0;
    }
    iy = 0;
    i = lda * (n - 1) + 1;
    for (iac = 1; lda < 0 ? iac >= i : iac <= i; iac += lda) {
      c = 0.0;
      i1 = (iac + m) - 1;
      for (ia = iac; ia <= i1; ia++) {
        c += A_data[ia - 1] * x_data[ia - iac];
      }
      y_data[iy] += c;
      iy++;
    }
  }
}

/* End of code generation (xgemv.c) */
