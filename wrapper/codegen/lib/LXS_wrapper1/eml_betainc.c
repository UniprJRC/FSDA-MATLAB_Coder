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
#include "LXS_wrapper1_rtwutil.h"
#include "eml_gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
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
      d = ((double)m + 1.0) * (b - ((double)m + 1.0)) * x /
          (((a - 1.0) + (double)twom) * d_tmp);
      C = d / C + 1.0;
      Dinv = d / Dinv + 1.0;
      y *= C / Dinv;
      d = -(a + ((double)m + 1.0)) * (aplusb + ((double)m + 1.0)) * x /
          (d_tmp * ((a + 1.0) + (double)twom));
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

double eml_betainc(double x, double a, double b, double lbeta, bool upper)
{
  double d;
  double log1mx;
  double logx;
  double rval;
  bool guard1 = false;
  if ((0.0 < x) && (x < 1.0)) {
    if (rtIsInf(a)) {
      if (!rtIsInf(b)) {
        rval = upper;
      } else {
        rval = rtNaN;
      }
    } else if (rtIsInf(b)) {
      rval = 1.0 - (double)upper;
    } else {
      d = a + b;
      guard1 = false;
      if (d < 1.0E+7) {
        logx = log(x);
        if (1.0 - x != 1.0) {
          log1mx = log(1.0 - x) * (-x / ((1.0 - x) - 1.0));
        } else {
          log1mx = -x;
        }
        if (x < (a + 1.0) / (d + 2.0)) {
          rval = exp(((a * logx + b * log1mx) - log(a)) - lbeta) *
                 betainc_cf(x, a, b);
          if (upper) {
            rval = 1.0 - rval;
          }
        } else {
          rval = exp(((a * logx + b * log1mx) - log(b)) - lbeta) *
                 betainc_cf(1.0 - x, b, a);
          if (!upper) {
            rval = 1.0 - rval;
          }
        }
        if (!(rval == rval)) {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        logx = rt_powd_snf(b * x, 0.33333333333333331);
        log1mx = rt_powd_snf(a * (1.0 - x), 0.33333333333333331);
        if ((d - 1.0) * (1.0 - x) > 0.8) {
          logx = 3.0 *
                 ((1.0 - 1.0 / (9.0 * b)) * logx -
                  (1.0 - 1.0 / (9.0 * a)) * log1mx) /
                 sqrt(logx * logx / b + log1mx * log1mx / a);
          if (upper) {
            log1mx = 0.70710678118654746 * logx;
            logx = 3.97886080735226 / (fabs(log1mx) + 3.97886080735226);
            rval = 0.5 *
                   ((((((((((((((((((((((0.0012710976495261409 * (logx - 0.5) +
                                         0.00011931402283834095) *
                                            (logx - 0.5) +
                                        -0.0039638509736051354) *
                                           (logx - 0.5) +
                                       -0.00087077963531729586) *
                                          (logx - 0.5) +
                                      0.0077367252831352668) *
                                         (logx - 0.5) +
                                     0.0038333512626488732) *
                                        (logx - 0.5) +
                                    -0.012722381378212275) *
                                       (logx - 0.5) +
                                   -0.013382364453346007) *
                                      (logx - 0.5) +
                                  0.016131532973325226) *
                                     (logx - 0.5) +
                                 0.039097684558848406) *
                                    (logx - 0.5) +
                                0.0024936720005350331) *
                                   (logx - 0.5) +
                               -0.0838864557023002) *
                                  (logx - 0.5) +
                              -0.11946395996432542) *
                                 (logx - 0.5) +
                             0.016620792496936737) *
                                (logx - 0.5) +
                            0.35752427444953105) *
                               (logx - 0.5) +
                           0.80527640875291062) *
                              (logx - 0.5) +
                          1.1890298290927332) *
                             (logx - 0.5) +
                         1.3704021768233816) *
                            (logx - 0.5) +
                        1.313146538310231) *
                           (logx - 0.5) +
                       1.0792551515585667) *
                          (logx - 0.5) +
                      0.77436819911953858) *
                         (logx - 0.5) +
                     0.49016508058531844) *
                        (logx - 0.5) +
                    0.27537474159737679) *
                   logx * exp(-log1mx * log1mx);
            if (log1mx < 0.0) {
              rval = 1.0 - rval;
            }
          } else {
            log1mx = 0.70710678118654746 * -logx;
            logx = 3.97886080735226 / (fabs(log1mx) + 3.97886080735226);
            rval = 0.5 *
                   ((((((((((((((((((((((0.0012710976495261409 * (logx - 0.5) +
                                         0.00011931402283834095) *
                                            (logx - 0.5) +
                                        -0.0039638509736051354) *
                                           (logx - 0.5) +
                                       -0.00087077963531729586) *
                                          (logx - 0.5) +
                                      0.0077367252831352668) *
                                         (logx - 0.5) +
                                     0.0038333512626488732) *
                                        (logx - 0.5) +
                                    -0.012722381378212275) *
                                       (logx - 0.5) +
                                   -0.013382364453346007) *
                                      (logx - 0.5) +
                                  0.016131532973325226) *
                                     (logx - 0.5) +
                                 0.039097684558848406) *
                                    (logx - 0.5) +
                                0.0024936720005350331) *
                                   (logx - 0.5) +
                               -0.0838864557023002) *
                                  (logx - 0.5) +
                              -0.11946395996432542) *
                                 (logx - 0.5) +
                             0.016620792496936737) *
                                (logx - 0.5) +
                            0.35752427444953105) *
                               (logx - 0.5) +
                           0.80527640875291062) *
                              (logx - 0.5) +
                          1.1890298290927332) *
                             (logx - 0.5) +
                         1.3704021768233816) *
                            (logx - 0.5) +
                        1.313146538310231) *
                           (logx - 0.5) +
                       1.0792551515585667) *
                          (logx - 0.5) +
                      0.77436819911953858) *
                         (logx - 0.5) +
                     0.49016508058531844) *
                        (logx - 0.5) +
                    0.27537474159737679) *
                   logx * exp(-log1mx * log1mx);
            if (log1mx < 0.0) {
              rval = 1.0 - rval;
            }
          }
        } else {
          d = b;
          gammaln(&d);
          rval = eml_gammainc(0.5 * (((a + b) - 1.0) * (3.0 - x) - (b - 1.0)) *
                                  (1.0 - x),
                              b, log(b), d, !upper);
        }
      }
    }
  } else if (x == 0.0) {
    rval = upper;
  } else if (x == 1.0) {
    rval = 1.0 - (double)upper;
  } else {
    rval = rtNaN;
  }
  return rval;
}

/* End of code generation (eml_betainc.c) */
