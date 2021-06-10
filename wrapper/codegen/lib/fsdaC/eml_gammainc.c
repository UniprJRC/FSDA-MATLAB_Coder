/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_gammainc.c
 *
 * Code generation for function 'eml_gammainc'
 *
 */

/* Include files */
#include "eml_gammainc.h"
#include "fsdaC_data.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
double eml_gammainc(double x, double a, double la, double lgap1, bool upper)
{
  double a1;
  double asq;
  double d;
  double fac;
  double logpax;
  double n;
  double old;
  double rval;
  double stirlerr;
  double t;
  double vsq;
  double xD0;
  int b_i;
  int exitg1;
  int i;
  if (!(x > 0.0)) {
    if (x == 0.0) {
      rval = upper;
    } else {
      rval = rtNaN;
    }
  } else if (rtIsInf(a)) {
    if (rtIsInf(x)) {
      rval = rtNaN;
    } else {
      rval = upper;
    }
  } else if (rtIsInf(x)) {
    rval = 1.0 - (double)upper;
  } else {
    if (a <= 15.0) {
      asq = 2.0 * a;
      if (asq == floor(asq)) {
        stirlerr = dv2[(int)(asq + 1.0) - 1];
      } else {
        stirlerr = ((lgap1 - (a + 0.5) * la) + a) - 0.91893853320467267;
      }
    } else {
      asq = a * a;
      stirlerr =
          ((((0.00084175084175084171 / asq + -0.00059523809523809529) / asq +
             0.00079365079365079365) /
                asq +
            -0.0027777777777777779) /
               asq +
           0.083333333333333329) /
          a;
    }
    d = a - x;
    a1 = a + x;
    if (fabs(d) > 0.1 * a1) {
      if (a < 2.2250738585072014E-308 * x) {
        xD0 = x;
      } else if ((x < 1.0) && (a > 1.7976931348623157E+308 * x)) {
        xD0 = (a * la - a * log(x)) - a;
      } else {
        xD0 = (a * log(a / x) + x) - a;
      }
    } else {
      t = x / a;
      asq = (1.0 - t) / (t + 1.0);
      vsq = asq * asq;
      xD0 = d * asq;
      old = xD0;
      t = 2.0 * (a * asq);
      asq = 3.0;
      do {
        exitg1 = 0;
        t *= vsq;
        xD0 += t / asq;
        if (xD0 == old) {
          exitg1 = 1;
        } else {
          old = xD0;
          asq += 2.0;
        }
      } while (exitg1 == 0);
    }
    logpax = (-0.5 * (la + 1.8378770664093453) - stirlerr) - xD0;
    if (x > 1.0E+6) {
      stirlerr = sqrt(x);
      t = fabs(d - 1.0) / stirlerr;
      old = t * t;
      if (t < 15.0) {
        xD0 = 0.70710678118654746 * t;
        asq = 3.97886080735226 / (xD0 + 3.97886080735226);
        a1 = 0.5 *
             ((((((((((((((((((((((0.0012710976495261409 * (asq - 0.5) +
                                   0.00011931402283834095) *
                                      (asq - 0.5) +
                                  -0.0039638509736051354) *
                                     (asq - 0.5) +
                                 -0.00087077963531729586) *
                                    (asq - 0.5) +
                                0.0077367252831352668) *
                                   (asq - 0.5) +
                               0.0038333512626488732) *
                                  (asq - 0.5) +
                              -0.012722381378212275) *
                                 (asq - 0.5) +
                             -0.013382364453346007) *
                                (asq - 0.5) +
                            0.016131532973325226) *
                               (asq - 0.5) +
                           0.039097684558848406) *
                              (asq - 0.5) +
                          0.0024936720005350331) *
                             (asq - 0.5) +
                         -0.0838864557023002) *
                            (asq - 0.5) +
                        -0.11946395996432542) *
                           (asq - 0.5) +
                       0.016620792496936737) *
                          (asq - 0.5) +
                      0.35752427444953105) *
                         (asq - 0.5) +
                     0.80527640875291062) *
                        (asq - 0.5) +
                    1.1890298290927332) *
                       (asq - 0.5) +
                   1.3704021768233816) *
                      (asq - 0.5) +
                  1.313146538310231) *
                     (asq - 0.5) +
                 1.0792551515585667) *
                    (asq - 0.5) +
                0.77436819911953858) *
                   (asq - 0.5) +
               0.49016508058531844) *
                  (asq - 0.5) +
              0.27537474159737679) *
             asq * exp(-xD0 * xD0) * 2.5066282746310002 * exp(0.5 * old);
        vsq = (a1 * ((old - 3.0) * t) - (old - 4.0)) / 6.0;
        xD0 = (a1 * ((old * old - 9.0) * old + 6.0) -
               ((old - 1.0) * old - 6.0) * t) /
              72.0;
        asq = (a1 * (((((5.0 * old + 45.0) * old - 81.0) * old - 315.0) * old +
                      270.0) *
                     t) -
               ((((5.0 * old + 40.0) * old - 111.0) * old - 174.0) * old +
                192.0)) /
              6480.0;
      } else {
        a1 = (((3.0 - 15.0 / old) / old + -1.0) / old + 1.0) / t;
        vsq = (((25.0 - 210.0 / old) / old + -4.0) / old + 1.0) / old;
        xD0 = (((130.0 - 1750.0 / old) / old + -11.0) / old + 1.0) / (old * t);
        asq =
            (((546.0 - 11368.0 / old) / old + -26.0) / old + 1.0) / (old * old);
      }
      if (x < a - 1.0) {
        asq = a * (((a1 / stirlerr - vsq / x) + xD0 / (x * stirlerr)) -
                   asq / (x * x));
        if (logpax < 709.782712893384) {
          rval = exp(logpax) * asq;
        } else {
          rval = exp(logpax + log(asq));
        }
        if (upper) {
          rval = 1.0 - rval;
        }
      } else {
        asq = a * (((a1 / stirlerr + vsq / x) + xD0 / (x * stirlerr)) +
                   asq / (x * x));
        if (logpax < 709.782712893384) {
          rval = exp(logpax) * asq;
        } else {
          rval = exp(logpax + log(asq));
        }
        if (!upper) {
          rval = 1.0 - rval;
        }
      }
    } else if (upper && (x < 1.0) && (a < 1.0)) {
      fac = a * -x;
      vsq = fac / (a + 1.0);
      n = 2.0;
      do {
        exitg1 = 0;
        fac = -x * fac / n;
        t = fac / (a + n);
        vsq += t;
        if (fabs(t) <= fabs(vsq) * 2.2204460492503131E-16) {
          exitg1 = 1;
        } else {
          n++;
        }
      } while (exitg1 == 0);
      asq = a * log(x) - lgap1;
      xD0 = exp(asq);
      if (!(xD0 == 1.0)) {
        if (xD0 - 1.0 == -1.0) {
          asq = -1.0;
        } else {
          asq = (xD0 - 1.0) * asq / log(xD0);
        }
      }
      rval = -((vsq + asq) + vsq * asq);
      if (rval < 0.0) {
        rval = 0.0;
      }
    } else if ((x < a) || (x < 1.0)) {
      n = 1.0;
      if ((!(x < a)) && (a < 2.2250738585072014E-308) &&
          (x > 1.7976931348623157E+308 * a)) {
        rval = 1.0 - (double)upper;
      } else {
        if (x > 2.2204460492503131E-16 * a) {
          fac = x / a;
          n = 2.0;
          do {
            exitg1 = 0;
            fac = x * fac / (a + (n - 1.0));
            if (fac < 2.2204460492503131E-16) {
              exitg1 = 1;
            } else {
              n++;
            }
          } while (exitg1 == 0);
        }
        asq = 0.0;
        i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
        for (b_i = 0; b_i < i; b_i++) {
          asq = x * (asq + 1.0) / (a + ((n - 1.0) + -(double)b_i));
        }
        asq++;
        if (logpax < 709.782712893384) {
          rval = exp(logpax) * asq;
        } else {
          rval = exp(logpax + log(asq));
        }
        if (rval > 1.0) {
          rval = 1.0;
        }
        if (upper) {
          rval = 1.0 - rval;
        }
      }
    } else {
      fac = 1.0;
      n = 1.0;
      do {
        exitg1 = 0;
        d = floor(a1);
        if (n <= d) {
          fac = (a - n) * fac / x;
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
        asq = 1.0;
      } else {
        n = floor(a);
        vsq = a - n;
        if (vsq == 0.0) {
          asq = 1.0;
        } else if (vsq == 0.5) {
          xD0 = 0.70710678118654746 * sqrt(2.0 * x);
          t = 3.97886080735226 / (xD0 + 3.97886080735226);
          asq =
              sqrt(3.1415926535897931 * x) * exp(x) *
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
                      t * exp(-xD0 * xD0)));
          n++;
        } else {
          xD0 = 1.0;
          a1 = x;
          old = 0.0;
          stirlerr = 1.0;
          fac = 1.0 / x;
          n = 1.0;
          asq = fac;
          t = 0.0;
          while (fabs(asq - t) > 2.2204460492503131E-16 * asq) {
            t = asq;
            asq = n - vsq;
            xD0 = (a1 + xD0 * asq) * fac;
            old = (stirlerr + old * asq) * fac;
            asq = n * fac;
            a1 = x * xD0 + asq * a1;
            stirlerr = x * old + asq * stirlerr;
            fac = 1.0 / a1;
            asq = stirlerr * fac;
            n++;
          }
          asq *= x;
          n = floor(a) + 1.0;
        }
      }
      i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
      for (b_i = 0; b_i < i; b_i++) {
        asq = (a - ((n - 1.0) + -(double)b_i)) * asq / x + 1.0;
      }
      asq = asq * a / x;
      if (logpax < 709.782712893384) {
        rval = exp(logpax) * asq;
      } else {
        rval = exp(logpax + log(asq));
      }
      if (rval > 1.0) {
        rval = 1.0;
      }
      if (!upper) {
        rval = 1.0 - rval;
      }
    }
  }
  return rval;
}

/* End of code generation (eml_gammainc.c) */
