/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tinv.c
 *
 * Code generation for function 'tinv'
 *
 */

/* Include files */
#include "tinv.h"
#include "FSRfan_wrapper_rtwutil.h"
#include "eml_betainc.h"
#include "gammaln.h"
#include "norminv.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
double tinv(double v)
{
  double a;
  double f;
  double lbeta;
  double log1mz;
  double x;
  double xn3;
  double xn5;
  double xn7;
  double zhi;
  double zlo;
  int i;
  bool exitg1;
  bool guard1 = false;
  bool guard2 = false;
  if (v > 0.0) {
    if (v == 1.0) {
      x = 63.6567411628717;
    } else if (v < 1000.0) {
      a = v / 2.0;
      xn3 = a;
      gammaln(&xn3);
      xn5 = 0.5;
      gammaln(&xn5);
      xn7 = a + 0.5;
      gammaln(&xn7);
      lbeta = (xn3 + xn5) - xn7;
      if (a == 0.0) {
        xn3 = 1.0;
      } else {
        xn3 = ((4.0 * a + 1.0) - 2.0) / 6.5922458910395259;
        if (xn3 > 1.0) {
          xn3 = 1.0 - 2.0 / (xn3 + 1.0);
        } else {
          xn3 = exp((log(0.010000000000000009 * a) + lbeta) / a);
        }
        xn3 = fmin(fmax(xn3, 0.0001), 0.9999);
        xn5 = rtInf;
        xn7 = rtInf;
        zlo = 0.0;
        zhi = 1.0;
        i = 0;
        exitg1 = false;
        while ((!exitg1) && (i < 1000)) {
          f = eml_betainc(xn3, a, lbeta, false) - 0.010000000000000009;
          if ((f * xn5 < 0.0) && (fabs(xn5) <= fabs(f))) {
            xn3 = 0.5 * (xn3 + xn7);
            f = eml_betainc(xn3, a, lbeta, false) - 0.010000000000000009;
          }
          if (f > 0.0) {
            zhi = xn3;
          } else {
            zlo = xn3;
          }
          if ((fabs(f) < 2.2204460492503151E-16) ||
              (fabs(xn3 - xn7) <
               2.2204460492503131E-16 * xn3 + 2.2250738585072014E-308)) {
            exitg1 = true;
          } else {
            guard1 = false;
            guard2 = false;
            if (i < 200) {
              xn7 = xn3;
              xn5 = f;
              if (1.0 - xn3 != 1.0) {
                log1mz = log(1.0 - xn3) * (-xn3 / ((1.0 - xn3) - 1.0));
              } else {
                log1mz = -xn3;
              }
              xn3 -= f / exp(((a - 1.0) * log(xn3) + -0.5 * log1mz) - lbeta);
              if (xn3 <= zlo) {
                if (zlo == 0.0) {
                  if (0.010000000000000009 <
                      fabs(eml_betainc(2.2250738585072014E-308, a, lbeta,
                                       false) -
                           0.010000000000000009)) {
                    xn3 = 0.0;
                    exitg1 = true;
                  } else {
                    zlo = 2.2250738585072014E-308;
                    guard2 = true;
                  }
                } else {
                  guard2 = true;
                }
              } else if (xn3 >= zhi) {
                if (zhi == 1.0) {
                  if (0.99 <
                      fabs(eml_betainc(0.99999999999999989, a, lbeta, false) -
                           0.010000000000000009)) {
                    xn3 = 1.0;
                    exitg1 = true;
                  } else {
                    zhi = 0.99999999999999989;
                    guard1 = true;
                  }
                } else {
                  guard1 = true;
                }
              } else {
                i++;
              }
            } else {
              xn3 = 0.5 * (zlo + zhi);
              i++;
            }
            if (guard2) {
              xn3 = 0.99 * zlo + 0.01 * zhi;
              i++;
            }
            if (guard1) {
              xn3 = 0.01 * zlo + 0.99 * zhi;
              i++;
            }
          }
        }
      }
      x = sqrt(v * ((1.0 - xn3) / xn3));
    } else {
      x = norminv(0.995);
      if (v < 6.6457388829771584E+75) {
        xn3 = rt_powd_snf(x, 3.0);
        xn5 = rt_powd_snf(x, 5.0);
        xn7 = rt_powd_snf(x, 7.0);
        x = (((x + (xn3 + x) / (4.0 * v)) +
              ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x) /
                  (96.0 * rt_powd_snf(v, 2.0))) +
             (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) - 15.0 * x) /
                 (384.0 * rt_powd_snf(v, 3.0))) +
            ((((79.0 * rt_powd_snf(x, 9.0) + 776.0 * xn7) + 1482.0 * xn5) -
              1920.0 * xn3) -
             945.0 * x) /
                (92160.0 * rt_powd_snf(v, 4.0));
      }
    }
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (tinv.c) */
