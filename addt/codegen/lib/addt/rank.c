/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * rank.c
 *
 * Code generation for function 'rank'
 *
 */

/* Include files */
#include "rank.h"
#include "addt_emxutil.h"
#include "addt_types.h"
#include "rt_nonfinite.h"
#include "svd.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
int local_rank(const emxArray_real_T *A)
{
  emxArray_real_T *r;
  emxArray_real_T *s;
  double absx;
  int exponent;
  int i;
  int irank;
  int k;
  int nx;
  bool p;
  irank = 0;
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    nx = A->size[0] * A->size[1];
    p = true;
    for (k = 0; k < nx; k++) {
      if ((!p) || (rtIsInf(A->data[k]) || rtIsNaN(A->data[k]))) {
        p = false;
      }
    }
    emxInit_real_T(&s, 1);
    if (p) {
      svd(A, s);
    } else {
      emxInit_real_T(&r, 2);
      i = r->size[0] * r->size[1];
      r->size[0] = A->size[0];
      r->size[1] = A->size[1];
      emxEnsureCapacity_real_T(r, i);
      k = A->size[0] * A->size[1];
      for (i = 0; i < k; i++) {
        r->data[i] = 0.0;
      }
      svd(r, s);
      nx = s->size[0];
      i = s->size[0];
      s->size[0] = nx;
      emxEnsureCapacity_real_T(s, i);
      emxFree_real_T(&r);
      for (i = 0; i < nx; i++) {
        s->data[i] = rtNaN;
      }
    }
    absx = fabs(s->data[0]);
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
    k = A->size[1];
    if (nx > k) {
      k = nx;
    }
    absx *= (double)k;
    k = 0;
    while ((k <= s->size[0] - 1) && (s->data[k] > absx)) {
      irank++;
      k++;
    }
    emxFree_real_T(&s);
  }
  return irank;
}

/* End of code generation (rank.c) */
