/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chi2inv.c
 *
 * Code generation for function 'chi2inv'
 *
 */

/* Include files */
#include "chi2inv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "gammaincinv.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_chi2inv(const emxArray_real_T *p, double v, emxArray_real_T *x)
{
  const double *p_data;
  double a;
  double d;
  double d1;
  double *x_data;
  int i;
  int k;
  p_data = p->data;
  a = v / 2.0;
  i = x->size[0] * x->size[1];
  x->size[0] = p->size[0];
  x->size[1] = p->size[1];
  emxEnsureCapacity_real_T(x, i);
  x_data = x->data;
  i = p->size[0] * p->size[1];
  for (k = 0; k < i; k++) {
    if ((0.0 <= a) && (!rtIsInf(a)) && (p_data[k] >= 0.0) &&
        (p_data[k] <= 1.0)) {
      if ((p_data[k] > 0.0) && (p_data[k] < 1.0) && (a > 0.0)) {
        d = a;
        gammaln(&d);
        d1 = a + 1.0;
        gammaln(&d1);
        x_data[k] = eml_gammaincinv(p_data[k], a, log(a), d, d1) * 2.0;
      } else if ((a == 0.0) || (p_data[k] == 0.0)) {
        x_data[k] = 0.0;
      } else if (p_data[k] == 1.0) {
        x_data[k] = rtInf;
      } else {
        x_data[k] = rtNaN;
      }
    } else {
      x_data[k] = rtNaN;
    }
  }
}

double c_chi2inv(double p)
{
  double d;
  double d1;
  double x;
  if ((p >= 0.0) && (p <= 1.0)) {
    if ((p > 0.0) && (p < 1.0)) {
      d = 0.5;
      gammaln(&d);
      d1 = 1.5;
      gammaln(&d1);
      x = eml_gammaincinv(p, 0.5, -0.69314718055994529, d, d1) * 2.0;
    } else if (p == 0.0) {
      x = 0.0;
    } else {
      x = rtInf;
    }
  } else {
    x = rtNaN;
  }
  return x;
}

double chi2inv(double p, double v)
{
  double a;
  double d;
  double d1;
  double x;
  a = v / 2.0;
  if (!rtIsInf(a)) {
    if ((p > 0.0) && (p < 1.0) && (a > 0.0)) {
      d = a;
      gammaln(&d);
      d1 = a + 1.0;
      gammaln(&d1);
      x = eml_gammaincinv(p, a, log(a), d, d1) * 2.0;
    } else if ((a == 0.0) || (p == 0.0)) {
      x = 0.0;
    } else if (p == 1.0) {
      x = rtInf;
    } else {
      x = rtNaN;
    }
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (chi2inv.c) */
