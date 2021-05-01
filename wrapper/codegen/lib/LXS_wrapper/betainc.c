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
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_rtwutil.h"
#include "eml_betainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
creal_T betainc(double a, double b)
{
  creal_T y;
  double a1;
  double betai;
  double d;
  double fac;
  double lgap1;
  double logpax;
  double n;
  double old;
  double stirlerr;
  double t;
  double w2;
  double x;
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
    if (xD0 < 1.0E+7) {
      if (0.5 < (a + 1.0) / (xD0 + 2.0)) {
        betai = exp(((a * -0.69314718055994529 + b * -0.69314718055994529) -
                     log(a)) -
                    betai) *
                betainc_cf(0.5, a, b);
      } else {
        betai =
            1.0 - exp(((a * -0.69314718055994529 + b * -0.69314718055994529) -
                       log(b)) -
                      betai) *
                      betainc_cf(0.5, b, a);
      }
      if (!(betai == betai)) {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      betai = rt_powd_snf(b * 0.5, 0.33333333333333331);
      w2 = rt_powd_snf(a * 0.5, 0.33333333333333331);
      if ((xD0 - 1.0) * 0.5 > 0.8) {
        x = 0.70710678118654746 *
            -(3.0 *
              ((1.0 - 1.0 / (9.0 * b)) * betai - (1.0 - 1.0 / (9.0 * a)) * w2) /
              sqrt(betai * betai / b + w2 * w2 / a));
        t = 3.97886080735226 / (fabs(x) + 3.97886080735226);
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
                t * exp(-x * x);
        if (x < 0.0) {
          betai = 1.0 - betai;
        }
      } else {
        x = 0.5 * (((a + b) - 1.0) * 2.5 - (b - 1.0)) * 0.5;
        fac = log(b);
        lgap1 = b;
        gammaln(&lgap1);
        if (!(x > 0.0)) {
          if (x == 0.0) {
            betai = 1.0;
          } else {
            betai = rtNaN;
          }
        } else if (rtIsInf(b)) {
          if (rtIsInf(x)) {
            betai = rtNaN;
          } else {
            betai = 1.0;
          }
        } else if (rtIsInf(x)) {
          betai = 0.0;
        } else {
          if (b <= 15.0) {
            betai = 2.0 * b;
            if (betai == floor(betai)) {
              stirlerr = dv[(int)(betai + 1.0) - 1];
            } else {
              stirlerr = ((lgap1 - (b + 0.5) * fac) + b) - 0.91893853320467267;
            }
          } else {
            betai = b * b;
            stirlerr =
                ((((0.00084175084175084171 / betai + -0.00059523809523809529) /
                       betai +
                   0.00079365079365079365) /
                      betai +
                  -0.0027777777777777779) /
                     betai +
                 0.083333333333333329) /
                b;
          }
          d = b - x;
          a1 = b + x;
          if (fabs(d) > 0.1 * a1) {
            if (b < 2.2250738585072014E-308 * x) {
              xD0 = x;
            } else if ((x < 1.0) && (b > 1.7976931348623157E+308 * x)) {
              xD0 = (b * fac - b * log(x)) - b;
            } else {
              xD0 = (b * log(b / x) + x) - b;
            }
          } else {
            t = x / b;
            betai = (1.0 - t) / (t + 1.0);
            w2 = betai * betai;
            xD0 = d * betai;
            old = xD0;
            t = 2.0 * (b * betai);
            betai = 3.0;
            do {
              exitg1 = 0;
              t *= w2;
              xD0 += t / betai;
              if (xD0 == old) {
                exitg1 = 1;
              } else {
                old = xD0;
                betai += 2.0;
              }
            } while (exitg1 == 0);
          }
          logpax = (-0.5 * (fac + 1.8378770664093453) - stirlerr) - xD0;
          if (x > 1.0E+6) {
            stirlerr = sqrt(x);
            t = fabs(d - 1.0) / stirlerr;
            old = t * t;
            if (t < 15.0) {
              w2 = 0.70710678118654746 * t;
              betai = 3.97886080735226 / (w2 + 3.97886080735226);
              a1 = 0.5 *
                   ((((((((((((((((((((((0.0012710976495261409 * (betai - 0.5) +
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
                   betai * exp(-w2 * w2) * 2.5066282746310002 * exp(0.5 * old);
              w2 = (a1 * ((old - 3.0) * t) - (old - 4.0)) / 6.0;
              xD0 = (a1 * ((old * old - 9.0) * old + 6.0) -
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
              w2 = (((25.0 - 210.0 / old) / old + -4.0) / old + 1.0) / old;
              xD0 = (((130.0 - 1750.0 / old) / old + -11.0) / old + 1.0) /
                    (old * t);
              betai = (((546.0 - 11368.0 / old) / old + -26.0) / old + 1.0) /
                      (old * old);
            }
            if (x < b - 1.0) {
              betai = b * (((a1 / stirlerr - w2 / x) + xD0 / (x * stirlerr)) -
                           betai / (x * x));
              if (logpax < 709.782712893384) {
                logpax = exp(logpax) * betai;
              } else {
                logpax = exp(logpax + log(betai));
              }
              betai = 1.0 - logpax;
            } else {
              betai = b * (((a1 / stirlerr + w2 / x) + xD0 / (x * stirlerr)) +
                           betai / (x * x));
              if (logpax < 709.782712893384) {
                betai *= exp(logpax);
              } else {
                betai = exp(logpax + log(betai));
              }
            }
          } else if ((x < 1.0) && (b < 1.0)) {
            fac = b * -x;
            xD0 = fac / (b + 1.0);
            n = 2.0;
            do {
              exitg1 = 0;
              fac = -x * fac / n;
              t = fac / (b + n);
              xD0 += t;
              if (fabs(t) <= fabs(xD0) * 2.2204460492503131E-16) {
                exitg1 = 1;
              } else {
                n++;
              }
            } while (exitg1 == 0);
            betai = b * log(x) - lgap1;
            w2 = exp(betai);
            if (!(w2 == 1.0)) {
              if (w2 - 1.0 == -1.0) {
                betai = -1.0;
              } else {
                betai = (w2 - 1.0) * betai / log(w2);
              }
            }
            betai = -((xD0 + betai) + xD0 * betai);
            if (betai < 0.0) {
              betai = 0.0;
            }
          } else if ((x < b) || (x < 1.0)) {
            n = 1.0;
            if ((!(x < b)) && (b < 2.2250738585072014E-308) &&
                (x > 1.7976931348623157E+308 * b)) {
              betai = 0.0;
            } else {
              if (x > 2.2204460492503131E-16 * b) {
                fac = x / b;
                n = 2.0;
                do {
                  exitg1 = 0;
                  fac = x * fac / (b + (n - 1.0));
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
                betai = x * (betai + 1.0) / (b + ((n - 1.0) + -(double)b_i));
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
              d = floor(a1);
              if (n <= d) {
                fac = (b - n) * fac / x;
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
              w2 = b - n;
              if (w2 == 0.0) {
                betai = 1.0;
              } else if (w2 == 0.5) {
                w2 = 0.70710678118654746 * sqrt(2.0 * x);
                t = 3.97886080735226 / (w2 + 3.97886080735226);
                betai =
                    sqrt(3.1415926535897931 * x) * exp(x) *
                    (2.0 *
                     (0.5 *
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
                      t * exp(-w2 * w2)));
                n++;
              } else {
                xD0 = 1.0;
                a1 = x;
                old = 0.0;
                stirlerr = 1.0;
                fac = 1.0 / x;
                n = 1.0;
                betai = fac;
                t = 0.0;
                while (fabs(betai - t) > 2.2204460492503131E-16 * betai) {
                  t = betai;
                  betai = n - w2;
                  xD0 = (a1 + xD0 * betai) * fac;
                  old = (stirlerr + old * betai) * fac;
                  betai = n * fac;
                  a1 = x * xD0 + betai * a1;
                  stirlerr = x * old + betai * stirlerr;
                  fac = 1.0 / a1;
                  betai = stirlerr * fac;
                  n++;
                }
                betai *= x;
                n = floor(b) + 1.0;
              }
            }
            i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
            for (b_i = 0; b_i < i; b_i++) {
              betai = (b - ((n - 1.0) + -(double)b_i)) * betai / x + 1.0;
            }
            betai = betai * b / x;
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
  y.re = betai;
  y.im = 0.0;
  return y;
}

/* End of code generation (betainc.c) */
