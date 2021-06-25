/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: xgemv.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "xgemv.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : int m
 *                int n
 *                const emxArray_real_T *A
 *                int lda
 *                const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void xgemv(int m, int n, const emxArray_real_T *A, int lda,
           const emxArray_real_T *x, emxArray_real_T *y)
{
  double c;
  int i;
  int i1;
  int ia;
  int iac;
  int iy;
  if ((m != 0) && (n != 0)) {
    for (iy = 0; iy < n; iy++) {
      y->data[iy] = 0.0;
    }
    iy = 0;
    i = lda * (n - 1) + 1;
    for (iac = 1; lda < 0 ? iac >= i : iac <= i; iac += lda) {
      c = 0.0;
      i1 = (iac + m) - 1;
      for (ia = iac; ia <= i1; ia++) {
        c += A->data[ia - 1] * x->data[ia - iac];
      }
      y->data[iy] += c;
      iy++;
    }
  }
}

/*
 * File trailer for xgemv.c
 *
 * [EOF]
 */
