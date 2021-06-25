/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: xzlangeM.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "xzlangeM.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_creal_T *x
 * Return Type  : double
 */
double xzlangeM(const emxArray_creal_T *x)
{
  double absxk;
  double y;
  int k;
  bool b;
  bool b1;
  bool exitg1;
  y = 0.0;
  b = (x->size[0] == 0);
  b1 = (x->size[1] == 0);
  if ((!b) && (!b1)) {
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[0] * x->size[1] - 1)) {
      absxk = rt_hypotd_snf(x->data[k].re, x->data[k].im);
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

/*
 * File trailer for xzlangeM.c
 *
 * [EOF]
 */
