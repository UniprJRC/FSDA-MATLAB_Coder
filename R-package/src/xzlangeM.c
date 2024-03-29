/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlangeM.c
 *
 * Code generation for function 'xzlangeM'
 *
 */

/* Include files */
#include "xzlangeM.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
double xzlangeM(const emxArray_creal_T *x)
{
  const creal_T *x_data;
  double absxk;
  double y;
  int k;
  bool b;
  bool b1;
  bool exitg1;
  x_data = x->data;
  y = 0.0;
  b = (x->size[0] == 0);
  b1 = (x->size[1] == 0);
  if ((!b) && (!b1)) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[0] * x->size[1] - 1)) {
      absxk = rt_hypotd_snf(x_data[k].re, x_data[k].im);
      if (rtIsNaN(absxk)) {
        y = rtNaN;
        exitg1 = true;
      } else {
        if (absxk > y) {
          y = absxk;
        }
        k++;
      }
    }
  }
  return y;
}

/* End of code generation (xzlangeM.c) */
