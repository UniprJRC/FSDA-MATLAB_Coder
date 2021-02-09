/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
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
  int j;
  int jA;
  if (!(alpha1 == 0.0)) {
    jA = ia0;
    for (j = 0; j < n; j++) {
      if (y->data[j] != 0.0) {
        temp = y->data[j] * alpha1;
        i = m + jA;
        for (ijA = jA; ijA < i; ijA++) {
          A->data[ijA - 1] += A->data[((ix0 + ijA) - jA) - 1] * temp;
        }
      }
      jA += lda;
    }
  }
}

/* End of code generation (xgerc.c) */
