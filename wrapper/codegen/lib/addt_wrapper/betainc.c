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
#include "addt_wrapper_rtwutil.h"
#include "eml_betainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
creal_T betainc(double x, double b)
{
  static const double dv[31] = { 0.0, 0.15342640972002736, 0.081061466795327261,
    0.054814121051917651, 0.0413406959554093, 0.033162873519936291,
    0.027677925684998338, 0.023746163656297496, 0.020790672103765093,
    0.018488450532673187, 0.016644691189821193, 0.015134973221917378,
    0.013876128823070748, 0.012810465242920227, 0.01189670994589177,
    0.011104559758206917, 0.010411265261972096, 0.0097994161261588039,
    0.0092554621827127329, 0.0087687001341393862, 0.00833056343336287,
    0.00793411456431402, 0.0075736754879518406, 0.007244554301320383,
    0.00694284010720953, 0.0066652470327076821, 0.0064089941880042071,
    0.0061717122630394576, 0.0059513701127588475, 0.0057462165130101155,
    0.0055547335519628011 };

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
  d = 0.5;
  gammaln(&d);
  a1 = b;
  gammaln(&a1);
  betai = b + 0.5;
  gammaln(&betai);
  betai = (d + a1) - betai;
  if ((0.0 < x) && (x < 1.0)) {
    if (rtIsInf(b)) {
      betai = (x == 0.0);
    } else {
      logx = log(x);
      if (1.0 - x != 1.0) {
        log1mx = log(1.0 - x) * (-x / ((1.0 - x) - 1.0));
      } else {
        log1mx = -x;
      }

      if (x < 1.5 / ((b + 0.5) + 2.0)) {
        betai = 1.0 - exp(((0.5 * logx + b * log1mx) - -0.69314718055994529) -
                          betai) * betainc_cf(x, 0.5, b);
      } else {
        betai = exp(((0.5 * logx + b * log1mx) - log(b)) - betai) * betainc_cf
          (1.0 - x, b, 0.5);
      }

      if (!(betai == betai)) {
        betai = rt_powd_snf(b * x, 0.33333333333333331);
        logx = rt_powd_snf(0.5 * (1.0 - x), 0.33333333333333331);
        if (((b + 0.5) - 1.0) * (1.0 - x) > 0.8) {
          b_x = 0.70710678118654746 * (3.0 * ((1.0 - 1.0 / (9.0 * b)) * betai -
            0.77777777777777779 * logx) / sqrt(betai * betai / b + logx * logx /
            0.5));
          t = 3.97886080735226 / (fabs(b_x) + 3.97886080735226);
          betai = 0.5 * ((((((((((((((((((((((0.0012710976495261409 * (t - 0.5)
            + 0.00011931402283834095) * (t - 0.5) + -0.0039638509736051354) * (t
            - 0.5) + -0.00087077963531729586) * (t - 0.5) +
            0.0077367252831352668) * (t - 0.5) + 0.0038333512626488732) * (t -
            0.5) + -0.012722381378212275) * (t - 0.5) + -0.013382364453346007) *
            (t - 0.5) + 0.016131532973325226) * (t - 0.5) + 0.039097684558848406)
            * (t - 0.5) + 0.0024936720005350331) * (t - 0.5) +
            -0.0838864557023002) * (t - 0.5) + -0.11946395996432542) * (t - 0.5)
            + 0.016620792496936737) * (t - 0.5) + 0.35752427444953105) * (t -
            0.5) + 0.80527640875291062) * (t - 0.5) + 1.1890298290927332) * (t -
            0.5) + 1.3704021768233816) * (t - 0.5) + 1.313146538310231) * (t -
            0.5) + 1.0792551515585667) * (t - 0.5) + 0.77436819911953858) * (t -
            0.5) + 0.49016508058531844) * (t - 0.5) + 0.27537474159737679) * t *
            exp(-b_x * b_x);
          if (b_x < 0.0) {
            betai = 1.0 - betai;
          }
        } else {
          b_x = 0.5 * (((b + 0.5) - 1.0) * (3.0 - x) - (b - 1.0)) * (1.0 - x);
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
                stirlerr = dv[(int)(betai + 1.0) - 1];
              } else {
                d = b;
                gammaln(&d);
                stirlerr = ((d - (b + 0.5) * fac) + b) - 0.91893853320467267;
              }
            } else {
              betai = b * b;
              stirlerr = ((((0.00084175084175084171 / betai +
                             -0.00059523809523809529) / betai +
                            0.00079365079365079365) / betai +
                           -0.0027777777777777779) / betai +
                          0.083333333333333329) / b;
            }

            d = b - b_x;
            a1 = b + b_x;
            if (fabs(d) > 0.1 * a1) {
              if ((b_x < 1.0) && (b > 1.7976931348623157E+308 * b_x)) {
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
                a1 = 0.5 * ((((((((((((((((((((((0.0012710976495261409 * (betai
                  - 0.5) + 0.00011931402283834095) * (betai - 0.5) +
                  -0.0039638509736051354) * (betai - 0.5) +
                  -0.00087077963531729586) * (betai - 0.5) +
                  0.0077367252831352668) * (betai - 0.5) + 0.0038333512626488732)
                  * (betai - 0.5) + -0.012722381378212275) * (betai - 0.5) +
                  -0.013382364453346007) * (betai - 0.5) + 0.016131532973325226)
                  * (betai - 0.5) + 0.039097684558848406) * (betai - 0.5) +
                  0.0024936720005350331) * (betai - 0.5) + -0.0838864557023002) *
                                      (betai - 0.5) + -0.11946395996432542) *
                                     (betai - 0.5) + 0.016620792496936737) *
                                    (betai - 0.5) + 0.35752427444953105) *
                                   (betai - 0.5) + 0.80527640875291062) * (betai
                  - 0.5) + 1.1890298290927332) * (betai - 0.5) +
                                 1.3704021768233816) * (betai - 0.5) +
                                1.313146538310231) * (betai - 0.5) +
                               1.0792551515585667) * (betai - 0.5) +
                              0.77436819911953858) * (betai - 0.5) +
                             0.49016508058531844) * (betai - 0.5) +
                            0.27537474159737679) * betai * exp(-logx * logx) *
                  2.5066282746310002 * exp(0.5 * xD0);
                logx = (a1 * ((xD0 - 3.0) * t) - (xD0 - 4.0)) / 6.0;
                log1mx = (a1 * ((xD0 * xD0 - 9.0) * xD0 + 6.0) - ((xD0 - 1.0) *
                           xD0 - 6.0) * t) / 72.0;
                betai = (a1 * (((((5.0 * xD0 + 45.0) * xD0 - 81.0) * xD0 - 315.0)
                                * xD0 + 270.0) * t) - ((((5.0 * xD0 + 40.0) *
                            xD0 - 111.0) * xD0 - 174.0) * xD0 + 192.0)) / 6480.0;
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
                  betai = sqrt(3.1415926535897931 * b_x) * exp(b_x) * (2.0 *
                    (0.5 * ((((((((((((((((((((((0.0012710976495261409 * (t -
                    0.5) + 0.00011931402283834095) * (t - 0.5) +
                    -0.0039638509736051354) * (t - 0.5) +
                    -0.00087077963531729586) * (t - 0.5) + 0.0077367252831352668)
                    * (t - 0.5) + 0.0038333512626488732) * (t - 0.5) +
                    -0.012722381378212275) * (t - 0.5) + -0.013382364453346007) *
                    (t - 0.5) + 0.016131532973325226) * (t - 0.5) +
                    0.039097684558848406) * (t - 0.5) + 0.0024936720005350331) *
                                       (t - 0.5) + -0.0838864557023002) * (t -
                    0.5) + -0.11946395996432542) * (t - 0.5) +
                                     0.016620792496936737) * (t - 0.5) +
                                    0.35752427444953105) * (t - 0.5) +
                                   0.80527640875291062) * (t - 0.5) +
                                  1.1890298290927332) * (t - 0.5) +
                                 1.3704021768233816) * (t - 0.5) +
                                1.313146538310231) * (t - 0.5) +
                               1.0792551515585667) * (t - 0.5) +
                              0.77436819911953858) * (t - 0.5) +
                             0.49016508058531844) * (t - 0.5) +
                            0.27537474159737679) * t * exp(-logx * logx)));
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
                  while (fabs(betai - stirlerr) > 2.2204460492503131E-16 * betai)
                  {
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

/* End of code generation (betainc.c) */
