/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rank.c
 *
 * Code generation for function 'rank'
 *
 */

/* Include files */
#include "rank.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "svd.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
int local_rank(const emxArray_real_T *A)
{
  emxArray_real_T *s;
  const double *A_data;
  double absx;
  double *s_data;
  int exponent;
  int irank;
  int n;
  int nx;
  bool p;
  A_data = A->data;
  irank = 0;
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    nx = A->size[0] * A->size[1];
    p = true;
    for (n = 0; n < nx; n++) {
      if ((!p) || (rtIsInf(A_data[n]) || rtIsNaN(A_data[n]))) {
        p = false;
      }
    }
    n = (int)fmin(A->size[0], A->size[1]);
    emxInit_real_T(&s, 1);
    if (p) {
      svd(A, s);
      s_data = s->data;
    } else {
      nx = s->size[0];
      s->size[0] = n;
      emxEnsureCapacity_real_T(s, nx);
      s_data = s->data;
      for (nx = 0; nx < n; nx++) {
        s_data[nx] = rtNaN;
      }
    }
    absx = fabs(s_data[0]);
    if ((!rtIsInf(absx)) && (!rtIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    nx = A->size[0];
    n = A->size[1];
    if (nx >= n) {
      n = nx;
    }
    absx *= (double)n;
    n = 0;
    while ((n <= s->size[0] - 1) && (s_data[n] > absx)) {
      irank++;
      n++;
    }
    emxFree_real_T(&s);
  }
  return irank;
}

/* End of code generation (rank.c) */
