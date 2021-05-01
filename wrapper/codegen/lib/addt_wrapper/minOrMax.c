/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * minOrMax.c
 *
 * Code generation for function 'minOrMax'
 *
 */

/* Include files */
#include "minOrMax.h"
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void minimum(const emxArray_real_T *x, emxArray_real_T *ex)
{
  double a;
  double b;
  int i;
  int j;
  int m;
  int n;
  m = x->size[0];
  n = x->size[1];
  j = ex->size[0] * ex->size[1];
  ex->size[0] = 1;
  ex->size[1] = x->size[1];
  emxEnsureCapacity_real_T(ex, j);
  if (x->size[1] >= 1) {
    for (j = 0; j < n; j++) {
      ex->data[j] = x->data[x->size[0] * j];
      for (i = 2; i <= m; i++) {
        a = ex->data[j];
        b = x->data[(i + x->size[0] * j) - 1];
        if ((!rtIsNaN(b)) && (rtIsNaN(a) || (a > b))) {
          ex->data[j] = b;
        }
      }
    }
  }
}

/* End of code generation (minOrMax.c) */
