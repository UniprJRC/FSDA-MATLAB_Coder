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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void chi2cdf(const emxArray_real_T *x, double v, emxArray_real_T *p)
{
  const double *x_data;
  double a;
  double d;
  double xk;
  double *p_data;
  int i;
  int k;
  x_data = x->data;
  a = v / 2.0;
  i = p->size[0] * p->size[1];
  p->size[0] = x->size[0];
  p->size[1] = x->size[1];
  emxEnsureCapacity_real_T(p, i);
  p_data = p->data;
  i = x->size[0] * x->size[1];
  for (k = 0; k < i; k++) {
    xk = x_data[k];
    if ((a >= 0.0) && (!rtIsNaN(x_data[k]))) {
      if (x_data[k] < 0.0) {
        xk = 0.0;
      }
      d = a + 1.0;
      gammaln(&d);
      p_data[k] = (scalar_gammainc(xk / 2.0, a, log(a), d)).re;
    } else {
      p_data[k] = rtNaN;
    }
  }
}

/* End of code generation (chi2cdf.c) */
