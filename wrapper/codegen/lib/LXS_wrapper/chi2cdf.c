/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chi2cdf.c
 *
 * Code generation for function 'chi2cdf'
 *
 */

/* Include files */
#include "chi2cdf.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "gammainc.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void chi2cdf(const emxArray_real_T *x, double v, emxArray_real_T *p)
{
  double a;
  double xk;
  int i;
  int k;
  a = v / 2.0;
  i = p->size[0] * p->size[1];
  p->size[0] = x->size[0];
  p->size[1] = x->size[1];
  emxEnsureCapacity_real_T(p, i);
  i = x->size[0] * x->size[1];
  for (k = 0; k < i; k++) {
    xk = x->data[k];
    if (!rtIsNaN(x->data[k])) {
      if (x->data[k] < 0.0) {
        xk = 0.0;
      }
      p->data[k] = (gammainc(xk / 2.0, a)).re;
    } else {
      p->data[k] = rtNaN;
    }
  }
}

/* End of code generation (chi2cdf.c) */
