/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fcdf.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "fcdf.h"
#include "betainc.h"
#include "gammainc.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double x
 *                double v2
 * Return Type  : double
 */
double fcdf(double x, double v2)
{
  double num;
  double p;
  if ((v2 > 0.0) && (!rtIsNaN(x))) {
    if (x > 0.0) {
      if (rtIsInf(x)) {
        p = 1.0;
      } else if (rtIsInf(v2)) {
        p = (gammainc(2.0 * x / 2.0, 1.0)).re;
      } else if (v2 <= x * 2.0) {
        p = (b_betainc(v2 / (v2 + x * 2.0), v2 / 2.0, 1.0)).re;
      } else {
        num = 2.0 * x;
        p = (betainc(num / (num + v2), 1.0, v2 / 2.0)).re;
      }
    } else {
      p = 0.0;
    }
  } else {
    p = rtNaN;
  }
  return p;
}

/*
 * File trailer for fcdf.c
 *
 * [EOF]
 */
