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
#include "fsdaC_data.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
creal_T scalar_gammainc(double x, double a, double la, double lgap1)
{
  creal_T b;
  double Iax;
  double a1;
  double gold;
  double logpax;
  double n;
  double pax_modulus;
  double pax_r;
  double r;
  double stirlerr;
  double term;
  int afrac_tmp_tmp;
  int exitg1;
  int i;
  if (!(x < 0.0)) {
    if (!(a > 0.0)) {
      if (x == x) {
        r = 1.0;
      } else {
        r = rtNaN;
      }
    } else if (!(x > 0.0)) {
      if (x == 0.0) {
        r = 0.0;
      } else {
        r = rtNaN;
      }
    } else if (rtIsInf(a)) {
      if (rtIsInf(x)) {
        r = rtNaN;
      } else {
        r = 0.0;
      }
    } else if (rtIsInf(x)) {
      r = 1.0;
    } else {
      if (a <= 15.0) {
        r = 2.0 * a;
        if (r == floor(r)) {
          stirlerr = dv2[(int)(r + 1.0) - 1];
        } else {
          stirlerr = ((lgap1 - (a + 0.5) * la) + a) - 0.91893853320467267;
        }
      } else {
        r = a * a;
        stirlerr =
            ((((0.00084175084175084171 / r + -0.00059523809523809529) / r +
               0.00079365079365079365) /
                  r +
              -0.0027777777777777779) /
                 r +
             0.083333333333333329) /
            a;
      }
      n = a - x;
      gold = a + x;
      if (fabs(n) > 0.1 * gold) {
        if (a < 2.2250738585072014E-308 * x) {
          pax_r = x;
        } else if ((x < 1.0) && (a > 1.7976931348623157E+308 * x)) {
          pax_r = (a * la - a * log(x)) - a;
        } else {
          pax_r = (a * log(a / x) + x) - a;
        }
      } else {
        term = x / a;
        r = (1.0 - term) / (term + 1.0);
        pax_modulus = r * r;
        pax_r = n * r;
        Iax = pax_r;
        term = 2.0 * (a * r);
        r = 3.0;
        do {
          exitg1 = 0;
          term *= pax_modulus;
          pax_r += term / r;
          if (pax_r == Iax) {
            exitg1 = 1;
          } else {
            Iax = pax_r;
            r += 2.0;
          }
        } while (exitg1 == 0);
      }
      logpax = (-0.5 * (la + 1.8378770664093453) - stirlerr) - pax_r;
      if (x > 1.0E+6) {
        stirlerr = sqrt(x);
        term = fabs(n - 1.0) / stirlerr;
        Iax = term * term;
        if (term < 15.0) {
          r = 0.70710678118654746 * term;
          pax_r = 3.97886080735226 / (r + 3.97886080735226);
          a1 = 0.5 *
               ((((((((((((((((((((((0.0012710976495261409 * (pax_r - 0.5) +
                                     0.00011931402283834095) *
                                        (pax_r - 0.5) +
                                    -0.0039638509736051354) *
                                       (pax_r - 0.5) +
                                   -0.00087077963531729586) *
                                      (pax_r - 0.5) +
                                  0.0077367252831352668) *
                                     (pax_r - 0.5) +
                                 0.0038333512626488732) *
                                    (pax_r - 0.5) +
                                -0.012722381378212275) *
                                   (pax_r - 0.5) +
                               -0.013382364453346007) *
                                  (pax_r - 0.5) +
                              0.016131532973325226) *
                                 (pax_r - 0.5) +
                             0.039097684558848406) *
                                (pax_r - 0.5) +
                            0.0024936720005350331) *
                               (pax_r - 0.5) +
                           -0.0838864557023002) *
                              (pax_r - 0.5) +
                          -0.11946395996432542) *
                             (pax_r - 0.5) +
                         0.016620792496936737) *
                            (pax_r - 0.5) +
                        0.35752427444953105) *
                           (pax_r - 0.5) +
                       0.80527640875291062) *
                          (pax_r - 0.5) +
                      1.1890298290927332) *
                         (pax_r - 0.5) +
                     1.3704021768233816) *
                        (pax_r - 0.5) +
                    1.313146538310231) *
                       (pax_r - 0.5) +
                   1.0792551515585667) *
                      (pax_r - 0.5) +
                  0.77436819911953858) *
                     (pax_r - 0.5) +
                 0.49016508058531844) *
                    (pax_r - 0.5) +
                0.27537474159737679) *
               pax_r * exp(-r * r) * 2.5066282746310002 * exp(0.5 * Iax);
          pax_modulus = (a1 * ((Iax - 3.0) * term) - (Iax - 4.0)) / 6.0;
          pax_r = (a1 * ((Iax * Iax - 9.0) * Iax + 6.0) -
                   ((Iax - 1.0) * Iax - 6.0) * term) /
                  72.0;
          r = (a1 * (((((5.0 * Iax + 45.0) * Iax - 81.0) * Iax - 315.0) * Iax +
                      270.0) *
                     term) -
               ((((5.0 * Iax + 40.0) * Iax - 111.0) * Iax - 174.0) * Iax +
                192.0)) /
              6480.0;
        } else {
          a1 = (((3.0 - 15.0 / Iax) / Iax + -1.0) / Iax + 1.0) / term;
          pax_modulus = (((25.0 - 210.0 / Iax) / Iax + -4.0) / Iax + 1.0) / Iax;
          pax_r = (((130.0 - 1750.0 / Iax) / Iax + -11.0) / Iax + 1.0) /
                  (Iax * term);
          r = (((546.0 - 11368.0 / Iax) / Iax + -26.0) / Iax + 1.0) /
              (Iax * Iax);
        }
        if (x < a - 1.0) {
          Iax = a *
                (((a1 / stirlerr - pax_modulus / x) + pax_r / (x * stirlerr)) -
                 r / (x * x));
          if (logpax < 709.782712893384) {
            r = exp(logpax) * Iax;
          } else {
            r = exp(logpax + log(Iax));
          }
        } else {
          r = a *
              (((a1 / stirlerr + pax_modulus / x) + pax_r / (x * stirlerr)) +
               r / (x * x));
          if (logpax < 709.782712893384) {
            logpax = exp(logpax) * r;
          } else {
            logpax = exp(logpax + log(r));
          }
          r = 1.0 - logpax;
        }
      } else if ((x < a) || (x < 1.0)) {
        n = 1.0;
        if ((!(x < a)) && (a < 2.2250738585072014E-308) &&
            (x > 1.7976931348623157E+308 * a)) {
          r = 1.0;
        } else {
          if (x > 2.2204460492503131E-16 * a) {
            pax_modulus = x / a;
            n = 2.0;
            do {
              exitg1 = 0;
              pax_modulus = x * pax_modulus / (a + (n - 1.0));
              if (pax_modulus < 2.2204460492503131E-16) {
                exitg1 = 1;
              } else {
                n++;
              }
            } while (exitg1 == 0);
          }
          Iax = 0.0;
          afrac_tmp_tmp = (int)-((-1.0 - (n - 1.0)) + 1.0);
          for (i = 0; i < afrac_tmp_tmp; i++) {
            Iax = x * (Iax + 1.0) / (a + ((n - 1.0) + -(double)i));
          }
          Iax++;
          if (logpax < 709.782712893384) {
            r = exp(logpax) * Iax;
          } else {
            r = exp(logpax + log(Iax));
          }
          if (r > 1.0) {
            r = 1.0;
          }
        }
      } else {
        pax_modulus = 1.0;
        n = 1.0;
        do {
          exitg1 = 0;
          afrac_tmp_tmp = (int)floor(gold);
          if ((int)n <= afrac_tmp_tmp) {
            pax_modulus = (a - n) * pax_modulus / x;
            if (fabs(pax_modulus) < 2.2204460492503131E-16) {
              exitg1 = 1;
            } else {
              n++;
            }
          } else {
            exitg1 = 1;
          }
        } while (exitg1 == 0);
        if ((int)n <= afrac_tmp_tmp) {
          r = 1.0;
        } else {
          afrac_tmp_tmp = (int)floor(a);
          pax_r = a - (double)afrac_tmp_tmp;
          if (pax_r == 0.0) {
            r = 1.0;
            n = afrac_tmp_tmp;
          } else if (pax_r == 0.5) {
            r = 0.70710678118654746 * sqrt(2.0 * x);
            term = 3.97886080735226 / (r + 3.97886080735226);
            r = sqrt(3.1415926535897931 * x) * exp(x) *
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
                  term * exp(-r * r)));
            n = (double)afrac_tmp_tmp + 1.0;
          } else {
            Iax = 1.0;
            a1 = x;
            stirlerr = 0.0;
            term = 1.0;
            pax_modulus = 1.0 / x;
            n = 1.0;
            r = pax_modulus;
            gold = 0.0;
            while (fabs(r - gold) > 2.2204460492503131E-16 * r) {
              gold = r;
              r = n - pax_r;
              Iax = (a1 + Iax * r) * pax_modulus;
              stirlerr = (term + stirlerr * r) * pax_modulus;
              r = n * pax_modulus;
              a1 = x * Iax + r * a1;
              term = x * stirlerr + r * term;
              pax_modulus = 1.0 / a1;
              r = term * pax_modulus;
              n++;
            }
            r *= x;
            n = (double)afrac_tmp_tmp + 1.0;
          }
        }
        afrac_tmp_tmp = (int)n;
        for (i = 0; i <= afrac_tmp_tmp - 2; i++) {
          r = (a - ((n - 1.0) + -(double)i)) * r / x + 1.0;
        }
        r = r * a / x;
        if (logpax < 709.782712893384) {
          r *= exp(logpax);
        } else {
          r = exp(logpax + log(r));
        }
        if (r > 1.0) {
          r = 1.0;
        }
        r = 1.0 - r;
      }
    }
    b.re = r;
    b.im = 0.0;
  } else {
    if ((x == rtMinusInf) || (a == rtInf)) {
      pax_r = rtNaN;
      r = rtNaN;
    } else {
      pax_modulus = exp((-x + a * log(-x)) - lgap1);
      if (a == 1.0) {
        pax_r = -pax_modulus;
        pax_modulus = 0.0;
      } else {
        if (a < 0.25) {
          pax_r = cos(a * 3.1415926535897931);
          r = sin(a * 3.1415926535897931);
        } else {
          r = a - 2.0 * floor(a / 2.0);
          if (r < 0.25) {
            r *= 3.1415926535897931;
            pax_r = cos(r);
            r = sin(r);
          } else if (r < 0.75) {
            r = 0.5 - r;
            r *= 3.1415926535897931;
            pax_r = sin(r);
            r = cos(r);
          } else if (r < 1.25) {
            r = 1.0 - r;
            r *= 3.1415926535897931;
            pax_r = -cos(r);
            r = sin(r);
          } else if (r < 1.75) {
            r -= 1.5;
            r *= 3.1415926535897931;
            pax_r = sin(r);
            r = -cos(r);
          } else {
            r -= 2.0;
            r *= 3.1415926535897931;
            pax_r = cos(r);
            r = sin(r);
          }
        }
        pax_r *= pax_modulus;
        pax_modulus *= r;
      }
      Iax = 1.0;
      term = 1.0;
      r = 1.0;
      do {
        exitg1 = 0;
        term = term * x / (a + r);
        Iax += term;
        n = fabs(Iax);
        if (fabs(term) <= 2.2204460492503131E-16 * n) {
          exitg1 = 1;
        } else {
          r++;
        }
      } while (exitg1 == 0);
      pax_r *= n;
      if (pax_modulus == 0.0) {
        r = 0.0;
      } else {
        r = n * pax_modulus;
      }
    }
    b.re = pax_r;
    b.im = r;
  }
  return b;
}

/* End of code generation (gammainc.c) */
