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
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_chi2inv(const emxArray_real_T *p, double v, emxArray_real_T *x)
{
  creal_T dc;
  double a;
  int i;
  int k;
  a = v / 2.0;
  i = x->size[0] * x->size[1];
  x->size[0] = p->size[0];
  x->size[1] = p->size[1];
  emxEnsureCapacity_real_T(x, i);
  i = p->size[0] * p->size[1];
  for (k = 0; k < i; k++) {
    if ((0.0 <= a) && (!rtIsInf(a)) && (p->data[k] >= 0.0) &&
        (p->data[k] <= 1.0)) {
      if ((p->data[k] > 0.0) && (p->data[k] < 1.0) && (a > 0.0)) {
        dc = gammaincinv(p->data[k], a);
        x->data[k] = dc.re * 2.0;
      } else if ((a == 0.0) || (p->data[k] == 0.0)) {
        x->data[k] = 0.0;
      } else if (p->data[k] == 1.0) {
        x->data[k] = rtInf;
      } else {
        x->data[k] = rtNaN;
      }
    } else {
      x->data[k] = rtNaN;
    }
  }
}

double c_chi2inv(double p)
{
  double x;
  if ((p >= 0.0) && (p <= 1.0)) {
    if ((p > 0.0) && (p < 1.0)) {
      x = (gammaincinv(p, 0.5)).re * 2.0;
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
  double x;
  a = v / 2.0;
  if (!rtIsInf(a)) {
    if ((p > 0.0) && (p < 1.0) && (a > 0.0)) {
      x = (gammaincinv(p, a)).re * 2.0;
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
