/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * betainc.c
 *
 * Code generation for function 'betainc'
 *
 */

/* Include files */
#include "betainc.h"
#include "eml_betainc.h"
#include "fsdaC_data.h"
#include "fsdaC_rtwutil.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
creal_T b_betainc(double x, double a, double b)
{
  creal_T y;
  double a1;
  double b_x;
  double betai;
  double d;
  double fac;
  double log1mx;
  double logpax;
  double logx;
  double n;
  double old;
  double stirlerr;
  double t;
  double xD0;
  int b_i;
  int exitg1;
  int i;
  bool guard1 = false;
  d = a;
  gammaln(&d);
  a1 = b;
  gammaln(&a1);
  xD0 = a + b;
  betai = xD0;
  gammaln(&betai);
  betai = (d + a1) - betai;
  if ((0.0 < x) && (x < 1.0)) {
    if (rtIsInf(a)) {
      if (!rtIsInf(b)) {
        betai = 1.0;
      } else {
        betai = rtNaN;
      }
    } else if (rtIsInf(b)) {
      betai = 0.0;
    } else {
      guard1 = false;
      if (xD0 < 1.0E+7) {
        logx = log(x);
        if (1.0 - x != 1.0) {
          log1mx = log(1.0 - x) * (-x / ((1.0 - x) - 1.0));
        } else {
          log1mx = -x;
        }
        if (x < (a + 1.0) / (xD0 + 2.0)) {
          betai = 1.0 - exp(((a * logx + b * log1mx) - log(a)) - betai) *
                            betainc_cf(x, a, b);
        } else {
          betai = exp(((a * logx + b * log1mx) - log(b)) - betai) *
                  betainc_cf(1.0 - x, b, a);
        }
        if (!(betai == betai)) {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        betai = rt_powd_snf(b * x, 0.33333333333333331);
        logx = rt_powd_snf(a * (1.0 - x), 0.33333333333333331);
        if ((xD0 - 1.0) * (1.0 - x) > 0.8) {
          b_x =
              0.70710678118654746 * (3.0 *
                                     ((1.0 - 1.0 / (9.0 * b)) * betai -
                                      (1.0 - 1.0 / (9.0 * a)) * logx) /
                                     sqrt(betai * betai / b + logx * logx / a));
          t = 3.97886080735226 / (fabs(b_x) + 3.97886080735226);
          betai = 0.5 *
                  ((((((((((((((((((((((0.0012710976495261409 * (t - 0.5) +
                                        0.00011931402283834095) *
                                           (t - 0.5) +
                                       -0.0039638509736051354) *
                                          (t - 0.5) +
                                      -0.00087077963531729586) *
                                         (t - 0.5) +
                                     0.0077367252831352668) *
                                        (t - 0.5) +
                                    0.0038333512626488732) *
                                       (t - 0.5) +
                                   -0.012722381378212275) *
                                      (t - 0.5) +
                                  -0.013382364453346007) *
                                     (t - 0.5) +
                                 0.016131532973325226) *
                                    (t - 0.5) +
                                0.039097684558848406) *
                                   (t - 0.5) +
                               0.0024936720005350331) *
                                  (t - 0.5) +
                              -0.0838864557023002) *
                                 (t - 0.5) +
                             -0.11946395996432542) *
                                (t - 0.5) +
                            0.016620792496936737) *
                               (t - 0.5) +
                           0.35752427444953105) *
                              (t - 0.5) +
                          0.80527640875291062) *
                             (t - 0.5) +
                         1.1890298290927332) *
                            (t - 0.5) +
                        1.3704021768233816) *
                           (t - 0.5) +
                       1.313146538310231) *
                          (t - 0.5) +
                      1.0792551515585667) *
                         (t - 0.5) +
                     0.77436819911953858) *
                        (t - 0.5) +
                    0.49016508058531844) *
                       (t - 0.5) +
                   0.27537474159737679) *
                  t * exp(-b_x * b_x);
          if (b_x < 0.0) {
            betai = 1.0 - betai;
          }
        } else {
          b_x = 0.5 * (((a + b) - 1.0) * (3.0 - x) - (b - 1.0)) * (1.0 - x);
          fac = log(b);
          if (!(b_x > 0.0)) {
            if (b_x == 0.0) {
              betai = 0.0;
            } else {
              betai = rtNaN;
            }
          } else if (rtIsInf(b)) {
            if (rtIsInf(b_x)) {
              betai = rtNaN;
            } else {
              betai = 0.0;
            }
          } else if (rtIsInf(b_x)) {
            betai = 1.0;
          } else {
            if (b <= 15.0) {
              betai = 2.0 * b;
              if (betai == floor(betai)) {
                stirlerr = dv2[(int)(betai + 1.0) - 1];
              } else {
                d = b;
                gammaln(&d);
                stirlerr = ((d - (b + 0.5) * fac) + b) - 0.91893853320467267;
              }
            } else {
              betai = b * b;
              stirlerr = ((((0.00084175084175084171 / betai +
                             -0.00059523809523809529) /
                                betai +
                            0.00079365079365079365) /
                               betai +
                           -0.0027777777777777779) /
                              betai +
                          0.083333333333333329) /
                         b;
            }
            d = b - b_x;
            a1 = b + b_x;
            if (fabs(d) > 0.1 * a1) {
              if (b < 2.2250738585072014E-308 * b_x) {
                xD0 = b_x;
              } else if ((b_x < 1.0) && (b > 1.7976931348623157E+308 * b_x)) {
                xD0 = (b * fac - b * log(b_x)) - b;
              } else {
                xD0 = (b * log(b / b_x) + b_x) - b;
              }
            } else {
              t = b_x / b;
              betai = (1.0 - t) / (t + 1.0);
              log1mx = betai * betai;
              xD0 = d * betai;
              old = xD0;
              betai = 2.0 * (b * betai);
              logx = 3.0;
              do {
                exitg1 = 0;
                betai *= log1mx;
                xD0 += betai / logx;
                if (xD0 == old) {
                  exitg1 = 1;
                } else {
                  old = xD0;
                  logx += 2.0;
                }
              } while (exitg1 == 0);
            }
            logpax = (-0.5 * (fac + 1.8378770664093453) - stirlerr) - xD0;
            if (b_x > 1.0E+6) {
              old = sqrt(b_x);
              t = fabs(d - 1.0) / old;
              xD0 = t * t;
              if (t < 15.0) {
                logx = 0.70710678118654746 * t;
                betai = 3.97886080735226 / (logx + 3.97886080735226);
                a1 = 0.5 *
                     ((((((((((((((((((((((0.0012710976495261409 *
                                               (betai - 0.5) +
                                           0.00011931402283834095) *
                                              (betai - 0.5) +
                                          -0.0039638509736051354) *
                                             (betai - 0.5) +
                                         -0.00087077963531729586) *
                                            (betai - 0.5) +
                                        0.0077367252831352668) *
                                           (betai - 0.5) +
                                       0.0038333512626488732) *
                                          (betai - 0.5) +
                                      -0.012722381378212275) *
                                         (betai - 0.5) +
                                     -0.013382364453346007) *
                                        (betai - 0.5) +
                                    0.016131532973325226) *
                                       (betai - 0.5) +
                                   0.039097684558848406) *
                                      (betai - 0.5) +
                                  0.0024936720005350331) *
                                     (betai - 0.5) +
                                 -0.0838864557023002) *
                                    (betai - 0.5) +
                                -0.11946395996432542) *
                                   (betai - 0.5) +
                               0.016620792496936737) *
                                  (betai - 0.5) +
                              0.35752427444953105) *
                                 (betai - 0.5) +
                             0.80527640875291062) *
                                (betai - 0.5) +
                            1.1890298290927332) *
                               (betai - 0.5) +
                           1.3704021768233816) *
                              (betai - 0.5) +
                          1.313146538310231) *
                             (betai - 0.5) +
                         1.0792551515585667) *
                            (betai - 0.5) +
                        0.77436819911953858) *
                           (betai - 0.5) +
                       0.49016508058531844) *
                          (betai - 0.5) +
                      0.27537474159737679) *
                     betai * exp(-logx * logx) * 2.5066282746310002 *
                     exp(0.5 * xD0);
                logx = (a1 * ((xD0 - 3.0) * t) - (xD0 - 4.0)) / 6.0;
                log1mx = (a1 * ((xD0 * xD0 - 9.0) * xD0 + 6.0) -
                          ((xD0 - 1.0) * xD0 - 6.0) * t) /
                         72.0;
                betai =
                    (a1 * (((((5.0 * xD0 + 45.0) * xD0 - 81.0) * xD0 - 315.0) *
                                xD0 +
                            270.0) *
                           t) -
                     ((((5.0 * xD0 + 40.0) * xD0 - 111.0) * xD0 - 174.0) * xD0 +
                      192.0)) /
                    6480.0;
              } else {
                a1 = (((3.0 - 15.0 / xD0) / xD0 + -1.0) / xD0 + 1.0) / t;
                logx = (((25.0 - 210.0 / xD0) / xD0 + -4.0) / xD0 + 1.0) / xD0;
                log1mx = (((130.0 - 1750.0 / xD0) / xD0 + -11.0) / xD0 + 1.0) /
                         (xD0 * t);
                betai = (((546.0 - 11368.0 / xD0) / xD0 + -26.0) / xD0 + 1.0) /
                        (xD0 * xD0);
              }
              if (b_x < b - 1.0) {
                betai = b * (((a1 / old - logx / b_x) + log1mx / (b_x * old)) -
                             betai / (b_x * b_x));
                if (logpax < 709.782712893384) {
                  betai *= exp(logpax);
                } else {
                  betai = exp(logpax + log(betai));
                }
              } else {
                betai = b * (((a1 / old + logx / b_x) + log1mx / (b_x * old)) +
                             betai / (b_x * b_x));
                if (logpax < 709.782712893384) {
                  logpax = exp(logpax) * betai;
                } else {
                  logpax = exp(logpax + log(betai));
                }
                betai = 1.0 - logpax;
              }
            } else if (b_x < b) {
              n = 1.0;
              if (b_x > 2.2204460492503131E-16 * b) {
                fac = b_x / b;
                n = 2.0;
                do {
                  exitg1 = 0;
                  fac = b_x * fac / (b + (n - 1.0));
                  if (fac < 2.2204460492503131E-16) {
                    exitg1 = 1;
                  } else {
                    n++;
                  }
                } while (exitg1 == 0);
              }
              betai = 0.0;
              i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
              for (b_i = 0; b_i < i; b_i++) {
                betai = b_x * (betai + 1.0) / (b + ((n - 1.0) + -(double)b_i));
              }
              betai++;
              if (logpax < 709.782712893384) {
                betai *= exp(logpax);
              } else {
                betai = exp(logpax + log(betai));
              }
              if (betai > 1.0) {
                betai = 1.0;
              }
            } else {
              fac = 1.0;
              n = 1.0;
              do {
                exitg1 = 0;
                d = floor(a1);
                if (n <= d) {
                  fac = (b - n) * fac / b_x;
                  if (fabs(fac) < 2.2204460492503131E-16) {
                    exitg1 = 1;
                  } else {
                    n++;
                  }
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              if (n <= d) {
                betai = 1.0;
              } else {
                n = floor(b);
                logx = b - n;
                if (logx == 0.0) {
                  betai = 1.0;
                } else if (logx == 0.5) {
                  logx = 0.70710678118654746 * sqrt(2.0 * b_x);
                  t = 3.97886080735226 / (logx + 3.97886080735226);
                  betai =
                      sqrt(3.1415926535897931 * b_x) * exp(b_x) *
                      (2.0 * (0.5 *
                              ((((((((((((((((((((((0.0012710976495261409 *
                                                        (t - 0.5) +
                                                    0.00011931402283834095) *
                                                       (t - 0.5) +
                                                   -0.0039638509736051354) *
                                                      (t - 0.5) +
                                                  -0.00087077963531729586) *
                                                     (t - 0.5) +
                                                 0.0077367252831352668) *
                                                    (t - 0.5) +
                                                0.0038333512626488732) *
                                                   (t - 0.5) +
                                               -0.012722381378212275) *
                                                  (t - 0.5) +
                                              -0.013382364453346007) *
                                                 (t - 0.5) +
                                             0.016131532973325226) *
                                                (t - 0.5) +
                                            0.039097684558848406) *
                                               (t - 0.5) +
                                           0.0024936720005350331) *
                                              (t - 0.5) +
                                          -0.0838864557023002) *
                                             (t - 0.5) +
                                         -0.11946395996432542) *
                                            (t - 0.5) +
                                        0.016620792496936737) *
                                           (t - 0.5) +
                                       0.35752427444953105) *
                                          (t - 0.5) +
                                      0.80527640875291062) *
                                         (t - 0.5) +
                                     1.1890298290927332) *
                                        (t - 0.5) +
                                    1.3704021768233816) *
                                       (t - 0.5) +
                                   1.313146538310231) *
                                      (t - 0.5) +
                                  1.0792551515585667) *
                                     (t - 0.5) +
                                 0.77436819911953858) *
                                    (t - 0.5) +
                                0.49016508058531844) *
                                   (t - 0.5) +
                               0.27537474159737679) *
                              t * exp(-logx * logx)));
                  n++;
                } else {
                  log1mx = 1.0;
                  a1 = b_x;
                  xD0 = 0.0;
                  old = 1.0;
                  fac = 1.0 / b_x;
                  n = 1.0;
                  betai = fac;
                  stirlerr = 0.0;
                  while (fabs(betai - stirlerr) >
                         2.2204460492503131E-16 * betai) {
                    stirlerr = betai;
                    betai = n - logx;
                    log1mx = (a1 + log1mx * betai) * fac;
                    xD0 = (old + xD0 * betai) * fac;
                    betai = n * fac;
                    a1 = b_x * log1mx + betai * a1;
                    old = b_x * xD0 + betai * old;
                    fac = 1.0 / a1;
                    betai = old * fac;
                    n++;
                  }
                  betai *= b_x;
                  n = floor(b) + 1.0;
                }
              }
              i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
              for (b_i = 0; b_i < i; b_i++) {
                betai = (b - ((n - 1.0) + -(double)b_i)) * betai / b_x + 1.0;
              }
              betai = betai * b / b_x;
              if (logpax < 709.782712893384) {
                betai *= exp(logpax);
              } else {
                betai = exp(logpax + log(betai));
              }
              if (betai > 1.0) {
                betai = 1.0;
              }
              betai = 1.0 - betai;
            }
          }
        }
      }
    }
  } else if (x == 0.0) {
    betai = 1.0;
  } else if (x == 1.0) {
    betai = 0.0;
  } else {
    betai = rtNaN;
  }
  y.re = betai;
  y.im = 0.0;
  return y;
}

creal_T betainc(double x, double a, double b)
{
  creal_T y;
  double a1;
  double b_x;
  double betai;
  double d;
  double d1;
  double fac;
  double log1mx;
  double logpax;
  double logx;
  double n;
  double old;
  double stirlerr;
  double t;
  int b_i;
  int exitg1;
  int i;
  bool guard1 = false;
  d = a;
  gammaln(&d);
  a1 = b;
  gammaln(&a1);
  d1 = a + b;
  betai = d1;
  gammaln(&betai);
  betai = (d + a1) - betai;
  if ((0.0 < x) && (x < 1.0)) {
    if (a == 0.0) {
      if (b > 0.0) {
        betai = 1.0;
      } else {
        betai = rtNaN;
      }
    } else if (b == 0.0) {
      betai = 0.0;
    } else if (rtIsInf(a)) {
      if (!rtIsInf(b)) {
        betai = 0.0;
      } else {
        betai = rtNaN;
      }
    } else if (rtIsInf(b)) {
      betai = 1.0;
    } else {
      guard1 = false;
      if (d1 < 1.0E+7) {
        logx = log(x);
        if (1.0 - x != 1.0) {
          log1mx = log(1.0 - x) * (-x / ((1.0 - x) - 1.0));
        } else {
          log1mx = -x;
        }
        if (x < (a + 1.0) / (d1 + 2.0)) {
          betai = exp(((a * logx + b * log1mx) - log(a)) - betai) *
                  betainc_cf(x, a, b);
        } else {
          betai = 1.0 - exp(((a * logx + b * log1mx) - log(b)) - betai) *
                            betainc_cf(1.0 - x, b, a);
        }
        if (!(betai == betai)) {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        betai = rt_powd_snf(b * x, 0.33333333333333331);
        logx = rt_powd_snf(a * (1.0 - x), 0.33333333333333331);
        if ((d1 - 1.0) * (1.0 - x) > 0.8) {
          b_x = 0.70710678118654746 *
                -(3.0 *
                  ((1.0 - 1.0 / (9.0 * b)) * betai -
                   (1.0 - 1.0 / (9.0 * a)) * logx) /
                  sqrt(betai * betai / b + logx * logx / a));
          t = 3.97886080735226 / (fabs(b_x) + 3.97886080735226);
          betai = 0.5 *
                  ((((((((((((((((((((((0.0012710976495261409 * (t - 0.5) +
                                        0.00011931402283834095) *
                                           (t - 0.5) +
                                       -0.0039638509736051354) *
                                          (t - 0.5) +
                                      -0.00087077963531729586) *
                                         (t - 0.5) +
                                     0.0077367252831352668) *
                                        (t - 0.5) +
                                    0.0038333512626488732) *
                                       (t - 0.5) +
                                   -0.012722381378212275) *
                                      (t - 0.5) +
                                  -0.013382364453346007) *
                                     (t - 0.5) +
                                 0.016131532973325226) *
                                    (t - 0.5) +
                                0.039097684558848406) *
                                   (t - 0.5) +
                               0.0024936720005350331) *
                                  (t - 0.5) +
                              -0.0838864557023002) *
                                 (t - 0.5) +
                             -0.11946395996432542) *
                                (t - 0.5) +
                            0.016620792496936737) *
                               (t - 0.5) +
                           0.35752427444953105) *
                              (t - 0.5) +
                          0.80527640875291062) *
                             (t - 0.5) +
                         1.1890298290927332) *
                            (t - 0.5) +
                        1.3704021768233816) *
                           (t - 0.5) +
                       1.313146538310231) *
                          (t - 0.5) +
                      1.0792551515585667) *
                         (t - 0.5) +
                     0.77436819911953858) *
                        (t - 0.5) +
                    0.49016508058531844) *
                       (t - 0.5) +
                   0.27537474159737679) *
                  t * exp(-b_x * b_x);
          if (b_x < 0.0) {
            betai = 1.0 - betai;
          }
        } else {
          d = b;
          gammaln(&d);
          b_x = 0.5 * (((a + b) - 1.0) * (3.0 - x) - (b - 1.0)) * (1.0 - x);
          fac = log(b);
          if (!(b_x > 0.0)) {
            if (b_x == 0.0) {
              betai = 1.0;
            } else {
              betai = rtNaN;
            }
          } else if (rtIsInf(b)) {
            if (rtIsInf(b_x)) {
              betai = rtNaN;
            } else {
              betai = 1.0;
            }
          } else if (rtIsInf(b_x)) {
            betai = 0.0;
          } else {
            if (b <= 15.0) {
              betai = 2.0 * b;
              if (betai == floor(betai)) {
                stirlerr = dv2[(int)(betai + 1.0) - 1];
              } else {
                stirlerr = ((d - (b + 0.5) * fac) + b) - 0.91893853320467267;
              }
            } else {
              betai = b * b;
              stirlerr = ((((0.00084175084175084171 / betai +
                             -0.00059523809523809529) /
                                betai +
                            0.00079365079365079365) /
                               betai +
                           -0.0027777777777777779) /
                              betai +
                          0.083333333333333329) /
                         b;
            }
            a1 = b - b_x;
            d1 = b + b_x;
            if (fabs(a1) > 0.1 * d1) {
              if (b < 2.2250738585072014E-308 * b_x) {
                log1mx = b_x;
              } else if ((b_x < 1.0) && (b > 1.7976931348623157E+308 * b_x)) {
                log1mx = (b * fac - b * log(b_x)) - b;
              } else {
                log1mx = (b * log(b / b_x) + b_x) - b;
              }
            } else {
              t = b_x / b;
              betai = (1.0 - t) / (t + 1.0);
              logx = betai * betai;
              log1mx = a1 * betai;
              old = log1mx;
              t = 2.0 * (b * betai);
              betai = 3.0;
              do {
                exitg1 = 0;
                t *= logx;
                log1mx += t / betai;
                if (log1mx == old) {
                  exitg1 = 1;
                } else {
                  old = log1mx;
                  betai += 2.0;
                }
              } while (exitg1 == 0);
            }
            logpax = (-0.5 * (fac + 1.8378770664093453) - stirlerr) - log1mx;
            if (b_x > 1.0E+6) {
              stirlerr = sqrt(b_x);
              t = fabs(a1 - 1.0) / stirlerr;
              old = t * t;
              if (t < 15.0) {
                logx = 0.70710678118654746 * t;
                betai = 3.97886080735226 / (logx + 3.97886080735226);
                a1 = 0.5 *
                     ((((((((((((((((((((((0.0012710976495261409 *
                                               (betai - 0.5) +
                                           0.00011931402283834095) *
                                              (betai - 0.5) +
                                          -0.0039638509736051354) *
                                             (betai - 0.5) +
                                         -0.00087077963531729586) *
                                            (betai - 0.5) +
                                        0.0077367252831352668) *
                                           (betai - 0.5) +
                                       0.0038333512626488732) *
                                          (betai - 0.5) +
                                      -0.012722381378212275) *
                                         (betai - 0.5) +
                                     -0.013382364453346007) *
                                        (betai - 0.5) +
                                    0.016131532973325226) *
                                       (betai - 0.5) +
                                   0.039097684558848406) *
                                      (betai - 0.5) +
                                  0.0024936720005350331) *
                                     (betai - 0.5) +
                                 -0.0838864557023002) *
                                    (betai - 0.5) +
                                -0.11946395996432542) *
                                   (betai - 0.5) +
                               0.016620792496936737) *
                                  (betai - 0.5) +
                              0.35752427444953105) *
                                 (betai - 0.5) +
                             0.80527640875291062) *
                                (betai - 0.5) +
                            1.1890298290927332) *
                               (betai - 0.5) +
                           1.3704021768233816) *
                              (betai - 0.5) +
                          1.313146538310231) *
                             (betai - 0.5) +
                         1.0792551515585667) *
                            (betai - 0.5) +
                        0.77436819911953858) *
                           (betai - 0.5) +
                       0.49016508058531844) *
                          (betai - 0.5) +
                      0.27537474159737679) *
                     betai * exp(-logx * logx) * 2.5066282746310002 *
                     exp(0.5 * old);
                logx = (a1 * ((old - 3.0) * t) - (old - 4.0)) / 6.0;
                log1mx = (a1 * ((old * old - 9.0) * old + 6.0) -
                          ((old - 1.0) * old - 6.0) * t) /
                         72.0;
                betai =
                    (a1 * (((((5.0 * old + 45.0) * old - 81.0) * old - 315.0) *
                                old +
                            270.0) *
                           t) -
                     ((((5.0 * old + 40.0) * old - 111.0) * old - 174.0) * old +
                      192.0)) /
                    6480.0;
              } else {
                a1 = (((3.0 - 15.0 / old) / old + -1.0) / old + 1.0) / t;
                logx = (((25.0 - 210.0 / old) / old + -4.0) / old + 1.0) / old;
                log1mx = (((130.0 - 1750.0 / old) / old + -11.0) / old + 1.0) /
                         (old * t);
                betai = (((546.0 - 11368.0 / old) / old + -26.0) / old + 1.0) /
                        (old * old);
              }
              if (b_x < b - 1.0) {
                betai = b * (((a1 / stirlerr - logx / b_x) +
                              log1mx / (b_x * stirlerr)) -
                             betai / (b_x * b_x));
                if (logpax < 709.782712893384) {
                  logpax = exp(logpax) * betai;
                } else {
                  logpax = exp(logpax + log(betai));
                }
                betai = 1.0 - logpax;
              } else {
                betai = b * (((a1 / stirlerr + logx / b_x) +
                              log1mx / (b_x * stirlerr)) +
                             betai / (b_x * b_x));
                if (logpax < 709.782712893384) {
                  betai *= exp(logpax);
                } else {
                  betai = exp(logpax + log(betai));
                }
              }
            } else if ((b_x < 1.0) && (b < 1.0)) {
              fac = b * -b_x;
              log1mx = fac / (b + 1.0);
              n = 2.0;
              do {
                exitg1 = 0;
                fac = -b_x * fac / n;
                t = fac / (b + n);
                log1mx += t;
                if (fabs(t) <= fabs(log1mx) * 2.2204460492503131E-16) {
                  exitg1 = 1;
                } else {
                  n++;
                }
              } while (exitg1 == 0);
              betai = b * log(b_x) - d;
              logx = exp(betai);
              if (!(logx == 1.0)) {
                if (logx - 1.0 == -1.0) {
                  betai = -1.0;
                } else {
                  betai = (logx - 1.0) * betai / log(logx);
                }
              }
              betai = -((log1mx + betai) + log1mx * betai);
              if (betai < 0.0) {
                betai = 0.0;
              }
            } else if ((b_x < b) || (b_x < 1.0)) {
              n = 1.0;
              if ((!(b_x < b)) && (b < 2.2250738585072014E-308) &&
                  (b_x > 1.7976931348623157E+308 * b)) {
                betai = 0.0;
              } else {
                if (b_x > 2.2204460492503131E-16 * b) {
                  fac = b_x / b;
                  n = 2.0;
                  do {
                    exitg1 = 0;
                    fac = b_x * fac / (b + (n - 1.0));
                    if (fac < 2.2204460492503131E-16) {
                      exitg1 = 1;
                    } else {
                      n++;
                    }
                  } while (exitg1 == 0);
                }
                betai = 0.0;
                i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
                for (b_i = 0; b_i < i; b_i++) {
                  betai =
                      b_x * (betai + 1.0) / (b + ((n - 1.0) + -(double)b_i));
                }
                betai++;
                if (logpax < 709.782712893384) {
                  betai *= exp(logpax);
                } else {
                  betai = exp(logpax + log(betai));
                }
                if (betai > 1.0) {
                  betai = 1.0;
                }
                betai = 1.0 - betai;
              }
            } else {
              fac = 1.0;
              n = 1.0;
              do {
                exitg1 = 0;
                d = floor(d1);
                if (n <= d) {
                  fac = (b - n) * fac / b_x;
                  if (fabs(fac) < 2.2204460492503131E-16) {
                    exitg1 = 1;
                  } else {
                    n++;
                  }
                } else {
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
              if (n <= d) {
                betai = 1.0;
              } else {
                n = floor(b);
                logx = b - n;
                if (logx == 0.0) {
                  betai = 1.0;
                } else if (logx == 0.5) {
                  logx = 0.70710678118654746 * sqrt(2.0 * b_x);
                  t = 3.97886080735226 / (logx + 3.97886080735226);
                  betai =
                      sqrt(3.1415926535897931 * b_x) * exp(b_x) *
                      (2.0 * (0.5 *
                              ((((((((((((((((((((((0.0012710976495261409 *
                                                        (t - 0.5) +
                                                    0.00011931402283834095) *
                                                       (t - 0.5) +
                                                   -0.0039638509736051354) *
                                                      (t - 0.5) +
                                                  -0.00087077963531729586) *
                                                     (t - 0.5) +
                                                 0.0077367252831352668) *
                                                    (t - 0.5) +
                                                0.0038333512626488732) *
                                                   (t - 0.5) +
                                               -0.012722381378212275) *
                                                  (t - 0.5) +
                                              -0.013382364453346007) *
                                                 (t - 0.5) +
                                             0.016131532973325226) *
                                                (t - 0.5) +
                                            0.039097684558848406) *
                                               (t - 0.5) +
                                           0.0024936720005350331) *
                                              (t - 0.5) +
                                          -0.0838864557023002) *
                                             (t - 0.5) +
                                         -0.11946395996432542) *
                                            (t - 0.5) +
                                        0.016620792496936737) *
                                           (t - 0.5) +
                                       0.35752427444953105) *
                                          (t - 0.5) +
                                      0.80527640875291062) *
                                         (t - 0.5) +
                                     1.1890298290927332) *
                                        (t - 0.5) +
                                    1.3704021768233816) *
                                       (t - 0.5) +
                                   1.313146538310231) *
                                      (t - 0.5) +
                                  1.0792551515585667) *
                                     (t - 0.5) +
                                 0.77436819911953858) *
                                    (t - 0.5) +
                                0.49016508058531844) *
                                   (t - 0.5) +
                               0.27537474159737679) *
                              t * exp(-logx * logx)));
                  n++;
                } else {
                  log1mx = 1.0;
                  a1 = b_x;
                  old = 0.0;
                  stirlerr = 1.0;
                  fac = 1.0 / b_x;
                  n = 1.0;
                  betai = fac;
                  t = 0.0;
                  while (fabs(betai - t) > 2.2204460492503131E-16 * betai) {
                    t = betai;
                    betai = n - logx;
                    log1mx = (a1 + log1mx * betai) * fac;
                    old = (stirlerr + old * betai) * fac;
                    betai = n * fac;
                    a1 = b_x * log1mx + betai * a1;
                    stirlerr = b_x * old + betai * stirlerr;
                    fac = 1.0 / a1;
                    betai = stirlerr * fac;
                    n++;
                  }
                  betai *= b_x;
                  n = floor(b) + 1.0;
                }
              }
              i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
              for (b_i = 0; b_i < i; b_i++) {
                betai = (b - ((n - 1.0) + -(double)b_i)) * betai / b_x + 1.0;
              }
              betai = betai * b / b_x;
              if (logpax < 709.782712893384) {
                betai *= exp(logpax);
              } else {
                betai = exp(logpax + log(betai));
              }
              if (betai > 1.0) {
                betai = 1.0;
              }
            }
          }
        }
      }
    }
  } else if (x == 0.0) {
    betai = 0.0;
  } else if (x == 1.0) {
    betai = 1.0;
  } else {
    betai = rtNaN;
  }
  y.re = betai;
  y.im = 0.0;
  return y;
}

/* End of code generation (betainc.c) */
