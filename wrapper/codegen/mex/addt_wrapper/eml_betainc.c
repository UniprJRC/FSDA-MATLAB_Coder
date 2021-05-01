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
#include "mwmathutil.h"

/* Function Definitions */
real_T betainc_cf(real_T x, real_T a, real_T b)
{
  real_T C;
  real_T Dinv;
  real_T aplusb;
  real_T d;
  real_T d_tmp;
  real_T y;
  real_T yold;
  int32_T exitg1;
  int32_T m;
  int32_T twom;
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
      d_tmp = a + (real_T)twom;
      d = ((real_T)m + 1.0) * (b - ((real_T)m + 1.0)) * x / (((a - 1.0) +
        (real_T)twom) * d_tmp);
      C = d / C + 1.0;
      Dinv = d / Dinv + 1.0;
      y *= C / Dinv;
      d = -(a + ((real_T)m + 1.0)) * (aplusb + ((real_T)m + 1.0)) * x / (d_tmp *
        ((a + 1.0) + (real_T)twom));
      C = d / C + 1.0;
      Dinv = d / Dinv + 1.0;
      y *= C / Dinv;
      if (muDoubleScalarAbs(y - yold) < 2.2204460492503131E-15) {
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
