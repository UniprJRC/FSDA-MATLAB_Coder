/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: mod.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "mod.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : double x
 * Return Type  : double
 */
double b_mod(double x)
{
  double r;
  if (rtIsNaN(x) || rtIsInf(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = fmod(x, 100.0);
    if (r == 0.0) {
      r = 0.0;
    } else if (x < 0.0) {
      r += 100.0;
    }
  }
  return r;
}

/*
 * Arguments    : double x
 *                double y
 * Return Type  : double
 */
double c_mod(double x, double y)
{
  double r;
  r = x;
  if (rtIsNaN(x) || rtIsNaN(y) || rtIsInf(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0;
  } else if (rtIsInf(y)) {
    if (x < 0.0) {
      r = y;
    }
  } else {
    r = fmod(x, y);
    if (r == 0.0) {
      r = 0.0;
    } else if (x < 0.0) {
      r += y;
    }
  }
  return r;
}

/*
 * File trailer for mod.c
 *
 * [EOF]
 */
