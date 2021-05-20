/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * gammaincinv.c
 *
 * Code generation for function 'gammaincinv'
 *
 */

/* Include files */
#include "gammaincinv.h"
#include "eml_gammainc.h"
#include "fsdaC_rtwutil.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
creal_T gammaincinv(double x, double a)
{
  creal_T b;
  double la;
  double lga;
  double lgap1;
  double log1mpLower;
  double nu;
  double oldz;
  double p;
  double p1;
  double pLower;
  double r;
  double z;
  int i;
  int sgn;
  bool exitg1;
  bool guard1 = false;
  bool upper;
  la = log(a);
  lga = a;
  gammaln(&lga);
  lgap1 = a + 1.0;
  gammaln(&lgap1);
  p = x;
  upper = false;
  if (a == rtInf) {
    z = rtInf;
  } else if (lga == rtInf) {
    z = a;
  } else {
    nu = 2.0 * a;
    if (x > 0.5) {
      p = 1.0 - x;
      upper = true;
      pLower = 1.0 - (1.0 - x);
      if (1.0 - (1.0 - x) == 1.0) {
        pLower = 0.9999999999999778;
      }
      log1mpLower = log(1.0 - x);
    } else {
      pLower = x;
      if (1.0 - x != 1.0) {
        log1mpLower = log(1.0 - x) * (-x / ((1.0 - x) - 1.0));
      } else {
        log1mpLower = -x;
      }
    }
    if (nu < -1.24 * log(pLower)) {
      pLower =
          rt_powd_snf(pLower * exp(lgap1 + a * 0.693147180559945), 1.0 / a);
      if (pLower < 2.2250738585072014E-306) {
        pLower = 2.2250738585072014E-306;
      }
    } else if (nu <= 0.32) {
      pLower = 0.4;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 200)) {
        oldz = pLower;
        p1 = pLower * (pLower + 4.67) + 1.0;
        r = pLower * (pLower * (pLower + 6.66) + 6.73);
        pLower -= (1.0 - exp(((log1mpLower + lga) + 0.5 * pLower) +
                             (a - 1.0) * 0.693147180559945) *
                             r / p1) /
                  (((2.0 * pLower + 4.67) / p1 + -0.5) -
                   (pLower * (3.0 * pLower + 13.32) + 6.73) / r);
        if (fabs(oldz - pLower) < 0.01 * pLower) {
          exitg1 = true;
        } else {
          i++;
        }
      }
    } else {
      if (fabs(pLower - 0.5) <= 0.425) {
        r = 0.180625 - (pLower - 0.5) * (pLower - 0.5);
        z = (pLower - 0.5) *
            (((((((2509.0809287301227 * r + 33430.575583588128) * r +
                  67265.7709270087) *
                     r +
                 45921.95393154987) *
                    r +
                13731.693765509461) *
                   r +
               1971.5909503065513) *
                  r +
              133.14166789178438) *
                 r +
             3.3871328727963665) /
            (((((((5226.4952788528544 * r + 28729.085735721943) * r +
                  39307.895800092709) *
                     r +
                 21213.794301586597) *
                    r +
                5394.1960214247511) *
                   r +
               687.18700749205789) *
                  r +
              42.313330701600911) *
                 r +
             1.0);
      } else {
        if (pLower - 0.5 < 0.0) {
          r = sqrt(-log(pLower));
        } else {
          r = sqrt(-log(1.0 - pLower));
        }
        if (r <= 5.0) {
          r -= 1.6;
          z = (((((((0.00077454501427834139 * r + 0.022723844989269184) * r +
                    0.24178072517745061) *
                       r +
                   1.2704582524523684) *
                      r +
                  3.6478483247632045) *
                     r +
                 5.769497221460691) *
                    r +
                4.6303378461565456) *
                   r +
               1.4234371107496835) /
              (((((((1.0507500716444169E-9 * r + 0.00054759380849953455) * r +
                    0.015198666563616457) *
                       r +
                   0.14810397642748008) *
                      r +
                  0.6897673349851) *
                     r +
                 1.6763848301838038) *
                    r +
                2.053191626637759) *
                   r +
               1.0);
        } else {
          r -= 5.0;
          z = (((((((2.0103343992922881E-7 * r + 2.7115555687434876E-5) * r +
                    0.0012426609473880784) *
                       r +
                   0.026532189526576124) *
                      r +
                  0.29656057182850487) *
                     r +
                 1.7848265399172913) *
                    r +
                5.4637849111641144) *
                   r +
               6.6579046435011033) /
              (((((((2.0442631033899397E-15 * r + 1.4215117583164459E-7) * r +
                    1.8463183175100548E-5) *
                       r +
                   0.00078686913114561329) *
                      r +
                  0.014875361290850615) *
                     r +
                 0.13692988092273581) *
                    r +
                0.599832206555888) *
                   r +
               1.0);
        }
        if (pLower - 0.5 < 0.0) {
          z = -z;
        }
      }
      p1 = 0.222222 / nu;
      pLower = (z * sqrt(p1) + 1.0) - p1;
      pLower *= nu * pLower * pLower;
      if (pLower > 2.2 * nu + 6.0) {
        pLower = -2.0 * ((log1mpLower - (a - 1.0) * log(0.5 * pLower)) + lga);
      }
    }
    z = 0.5 * pLower;
    r = rtInf;
    oldz = rtInf;
    if (p > 1.0021E-294) {
      pLower = 2.2204460492503131E-14 * p;
    } else {
      pLower = 2.2251089859537388E-308;
    }
    if (upper) {
      sgn = -1;
    } else {
      sgn = 1;
    }
    nu = 0.0;
    p1 = 1.7976931348623157E+308;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 1000)) {
      log1mpLower = (double)sgn * (eml_gammainc(z, a, la, lgap1, upper) - p);
      if ((log1mpLower * r < 0.0) && (fabs(r) <= fabs(log1mpLower))) {
        z = 0.5 * z + 0.5 * oldz;
        log1mpLower = (double)sgn * (eml_gammainc(z, a, la, lgap1, upper) - p);
      }
      if (log1mpLower > 0.0) {
        p1 = z;
      } else {
        nu = z;
      }
      if ((fabs(log1mpLower) < pLower) ||
          (fabs(z - oldz) <
           2.2204460492503131E-16 * z + 2.2250738585072014E-308)) {
        exitg1 = true;
      } else {
        oldz = z;
        r = log1mpLower;
        guard1 = false;
        if (i < 500) {
          z *= 1.0 - log1mpLower / (z * exp(((a - 1.0) * log(z) - z) - lga) +
                                    log1mpLower * ((z + 1.0) - a) / 2.0);
          if (z <= nu) {
            if (nu == 0.0) {
              if (fabs((double)upper - p) <
                  fabs(eml_gammainc(2.2250738585072014E-308, a, la, lgap1,
                                    upper) -
                       p)) {
                z = 0.0;
                exitg1 = true;
              } else {
                nu = 2.2250738585072014E-308;
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
          } else {
            if (z >= p1) {
              z = 0.01 * nu + 0.99 * p1;
            }
            i++;
          }
        } else {
          if (1.0E+8 * nu < p1) {
            oldz = 1.0E+8 * nu;
            r = (double)sgn * (eml_gammainc(oldz, a, la, lgap1, upper) - p);
            if (r > 0.0) {
              p1 = oldz;
            } else {
              nu = oldz;
            }
          }
          z = 0.5 * nu + 0.5 * p1;
          i++;
        }
        if (guard1) {
          z = 0.99 * nu + 0.01 * p1;
          i++;
        }
      }
    }
  }
  b.re = z;
  b.im = 0.0;
  return b;
}

/* End of code generation (gammaincinv.c) */
