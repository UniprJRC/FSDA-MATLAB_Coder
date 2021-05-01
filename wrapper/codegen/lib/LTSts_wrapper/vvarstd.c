/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * vvarstd.c
 *
 * Code generation for function 'vvarstd'
 *
 */

/* Include files */
#include "vvarstd.h"
#include "LTSts_wrapper_types.h"
#include "blockedSummation.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
double vvarstd(const emxArray_real_T *v, int n)
{
  double d;
  double s;
  double scale;
  double t;
  double xbar;
  int k;
  if (n == 0) {
    s = rtNaN;
  } else if (n == 1) {
    if ((!rtIsInf(v->data[0])) && (!rtIsNaN(v->data[0]))) {
      s = 0.0;
    } else {
      s = rtNaN;
    }
  } else {
    xbar = blockedSummation(v, n) / (double)n;
    s = 0.0;
    scale = 3.3121686421112381E-170;
    for (k = 0; k < n; k++) {
      d = fabs(v->data[k] - xbar);
      if (d > scale) {
        t = scale / d;
        s = s * t * t + 1.0;
        scale = d;
      } else {
        t = d / scale;
        s += t * t;
      }
    }
    s = scale * sqrt(s);
    s /= sqrt(n - 1);
  }
  return s;
}

/* End of code generation (vvarstd.c) */
