/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "mpower.h"
#include "addt_rtwutil.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double rt_atan2d_snf(double u0, double u1);
static double rt_roundd_snf(double u);

/* Function Definitions */
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

static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

creal_T mpower(const creal_T a, double b)
{
  creal_T c;
  double d;
  double r;
  double ytmp;
  signed char i;
  if ((a.im == 0.0) && (a.re >= 0.0)) {
    c.re = rt_powd_snf(a.re, b);
    c.im = 0.0;
  } else if ((a.re == 0.0) && (floor(b) == b)) {
    ytmp = rt_powd_snf(a.im, b);
    if (rtIsNaN(b) || rtIsInf(b)) {
      r = rtNaN;
    } else if (b == 0.0) {
      r = 0.0;
    } else {
      r = fmod(b, 4.0);
      if (r == 0.0) {
        r = 0.0;
      } else {
        if (b < 0.0) {
          r += 4.0;
        }
      }
    }

    d = rt_roundd_snf(r);
    if (d < 128.0) {
      i = (signed char)d;
    } else {
      i = 0;
    }

    if (i == 3) {
      c.re = 0.0;
      c.im = -ytmp;
    } else if (i == 2) {
      c.re = -ytmp;
      c.im = 0.0;
    } else if (i == 1) {
      c.re = 0.0;
      c.im = ytmp;
    } else {
      c.re = ytmp;
      c.im = 0.0;
    }
  } else if ((a.im == 0.0) && rtIsInf(b) && (a.re == 1.0)) {
    c.re = 1.0;
    c.im = 0.0;
  } else {
    if (a.im == 0.0) {
      ytmp = log(a.re);
      r = 0.0;
    } else if ((a.re > 8.9884656743115785E+307) || (a.im >
                8.9884656743115785E+307)) {
      ytmp = log(rt_hypotd_snf(a.re / 2.0, a.im / 2.0)) + 0.69314718055994529;
      r = rt_atan2d_snf(a.im, a.re);
    } else {
      ytmp = log(rt_hypotd_snf(a.re, a.im));
      r = rt_atan2d_snf(a.im, a.re);
    }

    c.re = b * ytmp;
    c.im = b * r;
    if (c.im == 0.0) {
      d = c.re;
      c.re = exp(d);
      c.im = 0.0;
    } else if (rtIsInf(c.im) && rtIsInf(c.re) && (c.re < 0.0)) {
      c.re = 0.0;
      c.im = 0.0;
    } else {
      r = exp(c.re / 2.0);
      d = c.im;
      ytmp = c.im;
      c.re = r * (r * cos(d));
      c.im = r * (r * sin(ytmp));
    }
  }

  return c;
}

/* End of code generation (mpower.c) */
