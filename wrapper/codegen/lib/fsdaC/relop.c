/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: relop.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "relop.h"
#include "fsdaC_rtwutil.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static double rt_atan2d_snf(double u0, double u1);

/* Function Definitions */
/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_atan2d_snf(double u0, double u1)
{
  double y;
  int b_u0;
  int b_u1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      b_u0 = 1;
    } else {
      b_u0 = -1;
    }
    if (u1 > 0.0) {
      b_u1 = 1;
    } else {
      b_u1 = -1;
    }
    y = atan2(b_u0, b_u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }
  return y;
}

/*
 * Arguments    : const creal_T a
 *                const creal_T b
 *                double *x
 *                double *y
 * Return Type  : void
 */
void absRelopProxies(const creal_T a, const creal_T b, double *x, double *y)
{
  bool SCALEA;
  bool SCALEB;
  if ((fabs(a.re) > 8.9884656743115785E+307) ||
      (fabs(a.im) > 8.9884656743115785E+307)) {
    SCALEA = true;
  } else {
    SCALEA = false;
  }
  if ((fabs(b.re) > 8.9884656743115785E+307) ||
      (fabs(b.im) > 8.9884656743115785E+307)) {
    SCALEB = true;
  } else {
    SCALEB = false;
  }
  if (SCALEA || SCALEB) {
    *x = rt_hypotd_snf(a.re / 2.0, a.im / 2.0);
    *y = rt_hypotd_snf(b.re / 2.0, b.im / 2.0);
  } else {
    *x = rt_hypotd_snf(a.re, a.im);
    *y = rt_hypotd_snf(b.re, b.im);
  }
  if (*x == *y) {
    *x = rt_atan2d_snf(a.im, a.re);
    *y = rt_atan2d_snf(b.im, b.re);
    if (*x == *y) {
      if (a.re != b.re) {
        if (*x >= 0.0) {
          *x = b.re;
          *y = a.re;
        } else {
          *x = a.re;
          *y = b.re;
        }
      } else if (a.re < 0.0) {
        *x = b.im;
        *y = a.im;
      } else {
        *x = a.im;
        *y = b.im;
      }
      if (*x == *y) {
        *x = 0.0;
        *y = 0.0;
      }
    }
  }
}

/*
 * File trailer for relop.c
 *
 * [EOF]
 */
