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
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void xgerc(int m, int n, double alpha1, int ix0, const emxArray_real_T *y,
           emxArray_real_T *A, int ia0, int lda)
{
  const double *y_data;
  double temp;
  double *A_data;
  int i;
  int ijA;
  int j;
  int jA;
  A_data = A->data;
  y_data = y->data;
  if (!(alpha1 == 0.0)) {
    jA = ia0;
    for (j = 0; j < n; j++) {
      if (y_data[j] != 0.0) {
        temp = y_data[j] * alpha1;
        i = m + jA;
        for (ijA = jA; ijA < i; ijA++) {
          A_data[ijA - 1] += A_data[((ix0 + ijA) - jA) - 1] * temp;
        }
      }
      jA += lda;
    }
  }
}

/* End of code generation (xgerc.c) */
