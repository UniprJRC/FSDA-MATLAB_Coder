/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_betainc.c
 *
 * Code generation for function 'eml_betainc'
 *
 */

/* Include files */
#include "eml_betainc.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
double betainc_cf(double x, double a, double b)
{
  double C;
  double Dinv;
  double aplusb;
  double d;
  double d_tmp;
  double y;
  double yold;
  int exitg1;
  int m;
  int twom;
  aplusb = a + b;
  C = 1.0;
  Dinv = 1.0 - aplusb * x / (a + 1.0);
  y = 1.0 / Dinv;
  m = 0;
  do {
    exitg1 = 0;
    if (m < 1000) {
      yold = y;
      twom = (m + 1) << 1;
      d_tmp = a + (double)twom;
      d = ((double)m + 1.0) * (b - ((double)m + 1.0)) * x / (((a - 1.0) +
        (double)twom) * d_tmp);
      C = d / C + 1.0;
      Dinv = d / Dinv + 1.0;
      y *= C / Dinv;
      d = -(a + ((double)m + 1.0)) * (aplusb + ((double)m + 1.0)) * x / (d_tmp *
        ((a + 1.0) + (double)twom));
      C = d / C + 1.0;
      Dinv = d / Dinv + 1.0;
      y *= C / Dinv;
      if (fabs(y - yold) < 2.2204460492503131E-15) {
        exitg1 = 1;
      } else {
        m++;
      }
    } else {
      y = rtNaN;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return y;
}

/* End of code generation (eml_betainc.c) */
