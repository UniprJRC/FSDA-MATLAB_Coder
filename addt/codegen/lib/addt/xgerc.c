/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgerc.c
 *
 * Code generation for function 'xgerc'
 *
 */

/* Include files */
#include "xgerc.h"
#include "addt_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void xgerc(int m, int n, double alpha1, int ix0, const emxArray_real_T *y,
           emxArray_real_T *A, int ia0, int lda)
{
  double temp;
  int i;
  int ijA;
  int ix;
  int j;
  int jA;
  int jy;
  if (!(alpha1 == 0.0)) {
    jA = ia0;
    jy = 0;
    for (j = 0; j < n; j++) {
      if (y->data[jy] != 0.0) {
        temp = y->data[jy] * alpha1;
        ix = ix0;
        i = m + jA;
        for (ijA = jA; ijA < i; ijA++) {
          A->data[ijA - 1] += A->data[ix - 1] * temp;
          ix++;
        }
      }

      jy++;
      jA += lda;
    }
  }
}

/* End of code generation (xgerc.c) */
