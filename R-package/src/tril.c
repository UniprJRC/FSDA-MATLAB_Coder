/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tril.c
 *
 * Code generation for function 'tril'
 *
 */

/* Include files */
#include "tril.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void tril(emxArray_uint8_T *x)
{
  int i;
  int iend;
  int j;
  int m;
  int n;
  m = x->size[0];
  n = x->size[1];
  if ((x->size[0] != 0) && (x->size[1] != 0) && (0 < x->size[1])) {
    iend = (1 <= x->size[0]);
    for (j = 0; j < n; j++) {
      for (i = 0; i < iend; i++) {
        x->data[i + x->size[0] * j] = 0U;
      }
      if (iend < m) {
        iend++;
      }
    }
  }
}

/* End of code generation (tril.c) */
