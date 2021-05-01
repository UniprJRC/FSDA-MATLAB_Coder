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
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
creal_T scalar_gammainc(double x, double a, double la, double lgap1)
{
  static const double dv[31] = {0.0,
                                0.15342640972002736,
                                0.081061466795327261,
                                0.054814121051917651,
                                0.0413406959554093,
                                0.033162873519936291,
                                0.027677925684998338,
                                0.023746163656297496,
                                0.020790672103765093,
                                0.018488450532673187,
                                0.016644691189821193,
                                0.015134973221917378,
                                0.013876128823070748,
                                0.012810465242920227,
                                0.01189670994589177,
                                0.011104559758206917,
                                0.010411265261972096,
                                0.0097994161261588039,
                                0.0092554621827127329,
                                0.0087687001341393862,
                                0.00833056343336287,
                                0.00793411456431402,
                                0.0075736754879518406,
                                0.007244554301320383,
                                0.00694284010720953,
                                0.0066652470327076821,
                                0.0064089941880042071,
                                0.0061717122630394576,
                                0.0059513701127588475,
                                0.0057462165130101155,
                                0.0055547335519628011};
  creal_T b;
  double Iax;
  double a1;
  double d;
  double fac;
  double i;
  double logpax;
  double n;
  double old;
  double pax_modulus;
  double stirlerr;
  double term;
  int b_i;
  int c_i;
  int exitg1;
  if (!(x < 0.0)) {
    if (!(x > 0.0)) {
      if (x == 0.0) {
        i = 0.0;
      } else {
        i = rtNaN;
      }
    } else if (rtIsInf(a)) {
      if (rtIsInf(x)) {
        i = rtNaN;
      } else {
        i = 0.0;
      }
    } else if (rtIsInf(x)) {
      i = 1.0;
    } else {
      i = 2.0 * a;
      if (i == floor(i)) {
        stirlerr = dv[(int)(i + 1.0) - 1];
      } else {
        stirlerr = ((lgap1 - (a + 0.5) * la) + a) - 0.91893853320467267;
      }
      d = a - x;
      a1 = a + x;
      if (fabs(d) > 0.1 * a1) {
        if (a < 2.2250738585072014E-308 * x) {
          Iax = x;
        } else if ((x < 1.0) && (a > 1.7976931348623157E+308 * x)) {
          Iax = (a * la - a * log(x)) - a;
        } else {
          Iax = (a * log(a / x) + x) - a;
        }
      } else {
        term = x / a;
        i = (1.0 - term) / (term + 1.0);
        pax_modulus = i * i;
        Iax = d * i;
        old = Iax;
        term = 2.0 * (a * i);
        i = 3.0;
        do {
          exitg1 = 0;
          term *= pax_modulus;
          Iax += term / i;
          if (Iax == old) {
            exitg1 = 1;
          } else {
            old = Iax;
            i += 2.0;
          }
        } while (exitg1 == 0);
      }
      logpax = (-0.5 * (la + 1.8378770664093453) - stirlerr) - Iax;
      if (x > 1.0E+6) {
        old = sqrt(x);
        term = fabs(d - 1.0) / old;
        Iax = term * term;
        if (term < 15.0) {
          pax_modulus = 0.70710678118654746 * term;
          i = 3.97886080735226 / (pax_modulus + 3.97886080735226);
          a1 = 0.5 *
               ((((((((((((((((((((((0.0012710976495261409 * (i - 0.5) +
                                     0.00011931402283834095) *
                                        (i - 0.5) +
                                    -0.0039638509736051354) *
                                       (i - 0.5) +
                                   -0.00087077963531729586) *
                                      (i - 0.5) +
                                  0.0077367252831352668) *
                                     (i - 0.5) +
                                 0.0038333512626488732) *
                                    (i - 0.5) +
                                -0.012722381378212275) *
                                   (i - 0.5) +
                               -0.013382364453346007) *
                                  (i - 0.5) +
                              0.016131532973325226) *
                                 (i - 0.5) +
                             0.039097684558848406) *
                                (i - 0.5) +
                            0.0024936720005350331) *
                               (i - 0.5) +
                           -0.0838864557023002) *
                              (i - 0.5) +
                          -0.11946395996432542) *
                             (i - 0.5) +
                         0.016620792496936737) *
                            (i - 0.5) +
                        0.35752427444953105) *
                           (i - 0.5) +
                       0.80527640875291062) *
                          (i - 0.5) +
                      1.1890298290927332) *
                         (i - 0.5) +
                     1.3704021768233816) *
                        (i - 0.5) +
                    1.313146538310231) *
                       (i - 0.5) +
                   1.0792551515585667) *
                      (i - 0.5) +
                  0.77436819911953858) *
                     (i - 0.5) +
                 0.49016508058531844) *
                    (i - 0.5) +
                0.27537474159737679) *
               i * exp(-pax_modulus * pax_modulus) * 2.5066282746310002 *
               exp(0.5 * Iax);
          i = (a1 * ((Iax - 3.0) * term) - (Iax - 4.0)) / 6.0;
          pax_modulus = (a1 * ((Iax * Iax - 9.0) * Iax + 6.0) -
                         ((Iax - 1.0) * Iax - 6.0) * term) /
                        72.0;
          Iax =
              (a1 * (((((5.0 * Iax + 45.0) * Iax - 81.0) * Iax - 315.0) * Iax +
                      270.0) *
                     term) -
               ((((5.0 * Iax + 40.0) * Iax - 111.0) * Iax - 174.0) * Iax +
                192.0)) /
              6480.0;
        } else {
          a1 = (((3.0 - 15.0 / Iax) / Iax + -1.0) / Iax + 1.0) / term;
          i = (((25.0 - 210.0 / Iax) / Iax + -4.0) / Iax + 1.0) / Iax;
          pax_modulus = (((130.0 - 1750.0 / Iax) / Iax + -11.0) / Iax + 1.0) /
                        (Iax * term);
          Iax = (((546.0 - 11368.0 / Iax) / Iax + -26.0) / Iax + 1.0) /
                (Iax * Iax);
        }
        i = a *
            (((a1 / old + i / x) + pax_modulus / (x * old)) + Iax / (x * x));
        if (logpax < 709.782712893384) {
          logpax = exp(logpax) * i;
        } else {
          logpax = exp(logpax + log(i));
        }
        i = 1.0 - logpax;
      } else if ((x < a) || (x < 1.0)) {
        n = 1.0;
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
        Iax = 0.0;
        b_i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
        for (c_i = 0; c_i < b_i; c_i++) {
          Iax = x * (Iax + 1.0) / (a + ((n - 1.0) + -(double)c_i));
        }
        Iax++;
        if (logpax < 709.782712893384) {
          i = exp(logpax) * Iax;
        } else {
          i = exp(logpax + log(Iax));
        }
        if (i > 1.0) {
          i = 1.0;
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
          i = 1.0;
        } else {
          n = floor(a);
          pax_modulus = a - n;
          if (pax_modulus == 0.0) {
            i = 1.0;
          } else if (pax_modulus == 0.5) {
            pax_modulus = 0.70710678118654746 * sqrt(2.0 * x);
            term = 3.97886080735226 / (pax_modulus + 3.97886080735226);
            i = sqrt(3.1415926535897931 * x) * exp(x) *
                (2.0 *
                 (0.5 *
                  ((((((((((((((((((((((0.0012710976495261409 * (term - 0.5) +
                                        0.00011931402283834095) *
                                           (term - 0.5) +
                                       -0.0039638509736051354) *
                                          (term - 0.5) +
                                      -0.00087077963531729586) *
                                         (term - 0.5) +
                                     0.0077367252831352668) *
                                        (term - 0.5) +
                                    0.0038333512626488732) *
                                       (term - 0.5) +
                                   -0.012722381378212275) *
                                      (term - 0.5) +
                                  -0.013382364453346007) *
                                     (term - 0.5) +
                                 0.016131532973325226) *
                                    (term - 0.5) +
                                0.039097684558848406) *
                                   (term - 0.5) +
                               0.0024936720005350331) *
                                  (term - 0.5) +
                              -0.0838864557023002) *
                                 (term - 0.5) +
                             -0.11946395996432542) *
                                (term - 0.5) +
                            0.016620792496936737) *
                               (term - 0.5) +
                           0.35752427444953105) *
                              (term - 0.5) +
                          0.80527640875291062) *
                             (term - 0.5) +
                         1.1890298290927332) *
                            (term - 0.5) +
                        1.3704021768233816) *
                           (term - 0.5) +
                       1.313146538310231) *
                          (term - 0.5) +
                      1.0792551515585667) *
                         (term - 0.5) +
                     0.77436819911953858) *
                        (term - 0.5) +
                    0.49016508058531844) *
                       (term - 0.5) +
                   0.27537474159737679) *
                  term * exp(-pax_modulus * pax_modulus)));
            n++;
          } else {
            Iax = 1.0;
            a1 = x;
            old = 0.0;
            stirlerr = 1.0;
            fac = 1.0 / x;
            n = 1.0;
            i = fac;
            term = 0.0;
            while (fabs(i - term) > 2.2204460492503131E-16 * i) {
              term = i;
              i = n - pax_modulus;
              Iax = (a1 + Iax * i) * fac;
              old = (stirlerr + old * i) * fac;
              i = n * fac;
              a1 = x * Iax + i * a1;
              stirlerr = x * old + i * stirlerr;
              fac = 1.0 / a1;
              i = stirlerr * fac;
              n++;
            }
            i *= x;
            n = floor(a) + 1.0;
          }
        }
        b_i = (int)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
        for (c_i = 0; c_i < b_i; c_i++) {
          i = (a - ((n - 1.0) + -(double)c_i)) * i / x + 1.0;
        }
        i = i * a / x;
        if (logpax < 709.782712893384) {
          i *= exp(logpax);
        } else {
          i = exp(logpax + log(i));
        }
        if (i > 1.0) {
          i = 1.0;
        }
        i = 1.0 - i;
      }
    }
    b.re = i;
    b.im = 0.0;
  } else {
    if (x == rtMinusInf) {
      Iax = rtNaN;
      i = rtNaN;
    } else {
      pax_modulus = exp((-x + 0.5 * log(-x)) - lgap1);
      Iax = 1.0;
      term = 1.0;
      i = 1.0;
      do {
        exitg1 = 0;
        term = term * x / (i + 0.5);
        Iax += term;
        d = fabs(Iax);
        if (fabs(term) <= 2.2204460492503131E-16 * d) {
          exitg1 = 1;
        } else {
          i++;
        }
      } while (exitg1 == 0);
      Iax = d * (pax_modulus * 0.0);
      if (pax_modulus == 0.0) {
        i = 0.0;
      } else {
        i = d * pax_modulus;
      }
    }
    b.re = Iax;
    b.im = i;
  }
  return b;
}

/* End of code generation (gammainc.c) */
