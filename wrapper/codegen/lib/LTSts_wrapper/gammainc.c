/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gammainc.c
 *
 * Code generation for function 'gammainc'
 *
 */

/* Include files */
#include "gammainc.h"
#include "LTSts_wrapper_data.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
creal_T gammainc(double x, double a)
{
  creal_T b;
  double d;
  double d1;
  double dj;
  double logpax;
  double old;
  double stirlerr;
  double t;
  double twoa;
  double vsq;
  double xD0;
  int b_i;
  int exitg1;
  int i;
  logpax = log(a);
  if (!(x > 0.0)) {
    if (x == 0.0) {
      twoa = 0.0;
    } else {
      twoa = rtNaN;
    }
  } else if (rtIsInf(a)) {
    if (rtIsInf(x)) {
      twoa = rtNaN;
    } else {
      twoa = 0.0;
    }
  } else if (rtIsInf(x)) {
    twoa = 1.0;
  } else {
    twoa = 2.0 * a;
    if (twoa == floor(twoa)) {
      stirlerr = dv[(int)(twoa + 1.0) - 1];
    } else {
      d = a + 1.0;
      gammaln(&d);
      stirlerr = ((d - (a + 0.5) * logpax) + a) - 0.91893853320467267;
    }
    d = a - x;
    d1 = a + x;
    if (fabs(d) > 0.1 * d1) {
      if (a < 2.2250738585072014E-308 * x) {
        xD0 = x;
      } else if ((x < 1.0) && (a > 1.7976931348623157E+308 * x)) {
        xD0 = (a * logpax - a * log(x)) - a;
      } else {
        xD0 = (a * log(a / x) + x) - a;
      }
    } else {
      t = x / a;
      twoa = (1.0 - t) / (t + 1.0);
      vsq = twoa * twoa;
      xD0 = d * twoa;
      old = xD0;
      twoa = 2.0 * (a * twoa);
      dj = 3.0;
      do {
        exitg1 = 0;
        twoa *= vsq;
        xD0 += twoa / dj;
        if (xD0 == old) {
          exitg1 = 1;
        } else {
          old = xD0;
          dj += 2.0;
        }
      } while (exitg1 == 0);
    }
    logpax = (-0.5 * (logpax + 1.8378770664093453) - stirlerr) - xD0;
    if (x > 1.0E+6) {
      stirlerr = sqrt(x);
      t = fabs(d - 1.0) / stirlerr;
      old = t * t;
      if (t < 15.0) {
        twoa = 0.70710678118654746 * t;
        dj = 3.97886080735226 / (twoa + 3.97886080735226);
        dj = 0.5 *
             ((((((((((((((((((((((0.0012710976495261409 * (dj - 0.5) +
                                   0.00011931402283834095) *
                                      (dj - 0.5) +
                                  -0.0039638509736051354) *
                                     (dj - 0.5) +
                                 -0.00087077963531729586) *
                                    (dj - 0.5) +
                                0.0077367252831352668) *
                                   (dj - 0.5) +
                               0.0038333512626488732) *
                                  (dj - 0.5) +
                              -0.012722381378212275) *
                                 (dj - 0.5) +
                             -0.013382364453346007) *
                                (dj - 0.5) +
                            0.016131532973325226) *
                               (dj - 0.5) +
                           0.039097684558848406) *
                              (dj - 0.5) +
                          0.0024936720005350331) *
                             (dj - 0.5) +
                         -0.0838864557023002) *
                            (dj - 0.5) +
                        -0.11946395996432542) *
                           (dj - 0.5) +
                       0.016620792496936737) *
                          (dj - 0.5) +
                      0.35752427444953105) *
                         (dj - 0.5) +
                     0.80527640875291062) *
                        (dj - 0.5) +
                    1.1890298290927332) *
                       (dj - 0.5) +
                   1.3704021768233816) *
                      (dj - 0.5) +
                  1.313146538310231) *
                     (dj - 0.5) +
                 1.0792551515585667) *
                    (dj - 0.5) +
                0.77436819911953858) *
                   (dj - 0.5) +
               0.49016508058531844) *
                  (dj - 0.5) +
              0.27537474159737679) *
             dj * exp(-twoa * twoa) * 2.5066282746310002 * exp(0.5 * old);
        vsq = (dj * ((old - 3.0) * t) - (old - 4.0)) / 6.0;
        xD0 = (dj * ((old * old - 9.0) * old + 6.0) -
               ((old - 1.0) * old - 6.0) * t) /
              72.0;
        twoa = (dj * (((((5.0 * old + 45.0) * old - 81.0) * old - 315.0) * old +
                       270.0) *
                      t) -
                ((((5.0 * old + 40.0) * old - 111.0) * old - 174.0) * old +
                 192.0)) /
               6480.0;
      } else {
        dj = (((3.0 - 15.0 / old) / old + -1.0) / old + 1.0) / t;
        vsq = (((25.0 - 210.0 / old) / old + -4.0) / old + 1.0) / old;
        xD0 = (((130.0 - 1750.0 / old) / old + -11.0) / old + 1.0) / (old * t);
        twoa =
            (((546.0 - 11368.0 / old) / old + -26.0) / old + 1.0) / (old * old);
      }
      twoa = a * (((dj / stirlerr + vsq / x) + xD0 / (x * stirlerr)) +
                  twoa / (x * x));
      if (logpax < 709.782712893384) {
        logpax = exp(logpax) * twoa;
      } else {
        logpax = exp(logpax + log(twoa));
      }
      twoa = 1.0 - logpax;
    } else if ((x < a) || (x < 1.0)) {
      dj = 1.0;
      if (x > 2.2204460492503131E-16 * a) {
        twoa = x / a;
        dj = 2.0;
        do {
          exitg1 = 0;
          twoa = x * twoa / (a + (dj - 1.0));
          if (twoa < 2.2204460492503131E-16) {
            exitg1 = 1;
          } else {
            dj++;
          }
        } while (exitg1 == 0);
      }
      twoa = 0.0;
      i = (int)(((-1.0 - (dj - 1.0)) + 1.0) / -1.0);
      for (b_i = 0; b_i < i; b_i++) {
        twoa = x * (twoa + 1.0) / (a + ((dj - 1.0) + -(double)b_i));
      }
      twoa++;
      if (logpax < 709.782712893384) {
        twoa *= exp(logpax);
      } else {
        twoa = exp(logpax + log(twoa));
      }
      if (twoa > 1.0) {
        twoa = 1.0;
      }
    } else {
      twoa = 1.0;
      dj = 1.0;
      do {
        exitg1 = 0;
        d = floor(d1);
        if (dj <= d) {
          twoa = (a - dj) * twoa / x;
          if (fabs(twoa) < 2.2204460492503131E-16) {
            exitg1 = 1;
          } else {
            dj++;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
      if (dj <= d) {
        twoa = 1.0;
      } else if (a - floor(a) == 0.0) {
        twoa = 1.0;
        dj = 1.0;
      } else {
        twoa = 0.70710678118654746 * sqrt(2.0 * x);
        t = 3.97886080735226 / (twoa + 3.97886080735226);
        twoa = sqrt(3.1415926535897931 * x) * exp(x) *
               (2.0 * (0.5 *
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
                       t * exp(-twoa * twoa)));
        dj = 1.0;
      }
      i = (int)(((-1.0 - (dj - 1.0)) + 1.0) / -1.0);
      for (b_i = 0; b_i < i; b_i++) {
        twoa = (a - ((dj - 1.0) + -(double)b_i)) * twoa / x + 1.0;
      }
      twoa = twoa * a / x;
      if (logpax < 709.782712893384) {
        twoa *= exp(logpax);
      } else {
        twoa = exp(logpax + log(twoa));
      }
      if (twoa > 1.0) {
        twoa = 1.0;
      }
      twoa = 1.0 - twoa;
    }
  }
  b.re = twoa;
  b.im = 0.0;
  return b;
}

/* End of code generation (gammainc.c) */
