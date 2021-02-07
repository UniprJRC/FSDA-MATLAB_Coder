/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
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

creal_T mpower(const creal_T a, double b)
{
  creal_T c;
  double b_im;
  double r;
  double ytmp;
  signed char i;
  if ((a.im == 0.0) && (a.re >= 0.0)) {
    c.re = rt_powd_snf(a.re, b);
    c.im = 0.0;
  } else if ((a.re == 0.0) && (floor(b) == b)) {
    ytmp = rt_powd_snf(a.im, b);
    if (rtIsInf(b)) {
      i = 0;
    } else {
      if (b == 0.0) {
        r = 0.0;
      } else {
        r = fmod(b, 4.0);
        if (r == 0.0) {
          r = 0.0;
        } else if (b < 0.0) {
          r += 4.0;
        }
      }
      i = (signed char)r;
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
      b_im = 0.0;
    } else if ((a.re > 8.9884656743115785E+307) ||
               (a.im > 8.9884656743115785E+307)) {
      ytmp = log(rt_hypotd_snf(a.re / 2.0, a.im / 2.0)) + 0.69314718055994529;
      b_im = rt_atan2d_snf(a.im, a.re);
    } else {
      ytmp = log(rt_hypotd_snf(a.re, a.im));
      b_im = rt_atan2d_snf(a.im, a.re);
    }
    c.re = b * ytmp;
    c.im = b * b_im;
    if (c.im == 0.0) {
      b_im = c.re;
      c.re = exp(b_im);
      c.im = 0.0;
    } else if (rtIsInf(c.im) && rtIsInf(c.re) && (c.re < 0.0)) {
      c.re = 0.0;
      c.im = 0.0;
    } else {
      r = exp(c.re / 2.0);
      b_im = c.im;
      ytmp = c.im;
      c.re = r * (r * cos(b_im));
      c.im = r * (r * sin(ytmp));
    }
  }
  return c;
}

/* End of code generation (mpower.c) */
