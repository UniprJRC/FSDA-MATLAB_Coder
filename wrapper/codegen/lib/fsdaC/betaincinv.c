/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * betaincinv.c
 *
 * Code generation for function 'betaincinv'
 *
 */

/* Include files */
#include "betaincinv.h"
#include "eml_betainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
creal_T b_betaincinv(double x, double a, double b)
{
  creal_T y;
  double b_y;
  double f;
  double h;
  double lbeta;
  double log1mz;
  double p;
  double pLower;
  double r;
  double s;
  double t;
  int i;
  int sgn;
  bool exitg1;
  bool guard1 = false;
  bool guard2 = false;
  bool upper;
  pLower = a;
  gammaln(&pLower);
  s = b;
  gammaln(&s);
  h = a + b;
  gammaln(&h);
  lbeta = (pLower + s) - h;
  p = x;
  upper = false;
  if ((0.0 < x) && (x < 1.0)) {
    if (a == 0.0) {
      if (b > 0.0) {
        pLower = 0.0;
      } else {
        pLower = rtNaN;
      }
    } else if (b == 0.0) {
      pLower = 1.0;
    } else if (a == rtInf) {
      if (b < rtInf) {
        pLower = 1.0;
      } else {
        pLower = rtNaN;
      }
    } else if (b == rtInf) {
      pLower = 0.0;
    } else {
      if (x > 0.5) {
        p = 1.0 - x;
        upper = true;
        pLower = 1.0 - (1.0 - x);
      } else {
        pLower = x;
      }
      r = sqrt(-2.0 * log(pLower));
      b_y = r - (0.27061 * r + 2.30753) / ((0.04481 * r + 0.99229) * r + 1.0);
      if ((a > 1.0) && (b > 1.0)) {
        r = (b_y * b_y - 3.0) / 6.0;
        s = 1.0 / (2.0 * a - 1.0);
        t = 1.0 / (2.0 * b - 1.0);
        h = 2.0 / (s + t);
        pLower = a / (a + b * exp(2.0 * (b_y * sqrt(h + r) / h -
                                         (t - s) * ((r + 0.83333333333333337) -
                                                    2.0 / (3.0 * h)))));
      } else {
        r = 2.0 * b;
        t = 1.0 / (9.0 * b);
        t = (1.0 - t) + b_y * sqrt(t);
        t *= r * t * t;
        if (t > 0.0) {
          t = ((4.0 * a + r) - 2.0) / t;
          if (t > 1.0) {
            pLower = 1.0 - 2.0 / (t + 1.0);
          } else {
            pLower = exp((log(pLower * a) + lbeta) / a);
          }
        } else {
          pLower = 1.0 - exp((log((1.0 - pLower) * b) + lbeta) / b);
        }
      }
      pLower = fmin(fmax(pLower, 0.0001), 0.9999);
      s = rtInf;
      h = rtInf;
      if (p > 1.0021E-294) {
        r = 2.2204460492503131E-14 * p;
      } else {
        r = 2.2251089859537388E-308;
      }
      if (upper) {
        sgn = -1;
      } else {
        sgn = 1;
      }
      b_y = 0.0;
      t = 1.0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 1000)) {
        f = (double)sgn * (eml_betainc(pLower, a, b, lbeta, upper) - p);
        if ((f * s < 0.0) && (fabs(s) <= fabs(f))) {
          pLower = 0.5 * (pLower + h);
          f = (double)sgn * (eml_betainc(pLower, a, b, lbeta, upper) - p);
        }
        if (f > 0.0) {
          t = pLower;
        } else {
          b_y = pLower;
        }
        if ((fabs(f) < r) ||
            (fabs(pLower - h) <
             2.2204460492503131E-16 * pLower + 2.2250738585072014E-308)) {
          exitg1 = true;
        } else {
          guard1 = false;
          guard2 = false;
          if (i < 200) {
            h = pLower;
            s = f;
            if (1.0 - pLower != 1.0) {
              log1mz = log(1.0 - pLower) * (-pLower / ((1.0 - pLower) - 1.0));
            } else {
              log1mz = -pLower;
            }
            pLower -=
                f / exp(((a - 1.0) * log(pLower) + (b - 1.0) * log1mz) - lbeta);
            if (pLower <= b_y) {
              if (b_y == 0.0) {
                if (fabs((double)upper - p) <
                    fabs(eml_betainc(2.2250738585072014E-308, a, b, lbeta,
                                     upper) -
                         p)) {
                  pLower = 0.0;
                  exitg1 = true;
                } else {
                  b_y = 2.2250738585072014E-308;
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else if (pLower >= t) {
              if (t == 1.0) {
                if (fabs((1.0 - (double)upper) - p) <
                    fabs(eml_betainc(0.99999999999999989, a, b, lbeta, upper) -
                         p)) {
                  pLower = 1.0;
                  exitg1 = true;
                } else {
                  t = 0.99999999999999989;
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            } else {
              i++;
            }
          } else {
            pLower = 0.5 * (b_y + t);
            i++;
          }
          if (guard2) {
            pLower = 0.99 * b_y + 0.01 * t;
            i++;
          }
          if (guard1) {
            pLower = 0.01 * b_y + 0.99 * t;
            i++;
          }
        }
      }
    }
  } else if (x == 0.0) {
    pLower = 0.0;
  } else if (x == 1.0) {
    pLower = 1.0;
  } else {
    pLower = rtNaN;
  }
  y.re = pLower;
  y.im = 0.0;
  return y;
}

creal_T betaincinv(double x, double a, double b)
{
  creal_T y;
  double b_y;
  double f;
  double h;
  double lbeta;
  double log1mz;
  double p;
  double pLower;
  double r;
  double s;
  double t;
  int i;
  int sgn;
  bool exitg1;
  bool guard1 = false;
  bool guard2 = false;
  bool upper;
  pLower = a;
  gammaln(&pLower);
  s = b;
  gammaln(&s);
  h = a + b;
  gammaln(&h);
  lbeta = (pLower + s) - h;
  p = x;
  upper = true;
  if ((0.0 < x) && (x < 1.0)) {
    if (a == 0.0) {
      if (b > 0.0) {
        pLower = 1.0;
      } else {
        pLower = rtNaN;
      }
    } else if (b == 0.0) {
      pLower = 0.0;
    } else if (a == rtInf) {
      if (b < rtInf) {
        pLower = 0.0;
      } else {
        pLower = rtNaN;
      }
    } else if (b == rtInf) {
      pLower = 1.0;
    } else {
      if (x > 0.5) {
        p = 1.0 - x;
        upper = false;
        pLower = 1.0 - x;
      } else {
        pLower = 1.0 - x;
        if (1.0 - x == 1.0) {
          pLower = 0.9999999999999778;
        }
      }
      r = sqrt(-2.0 * log(pLower));
      b_y = r - (0.27061 * r + 2.30753) / ((0.04481 * r + 0.99229) * r + 1.0);
      if ((a > 1.0) && (b > 1.0)) {
        r = (b_y * b_y - 3.0) / 6.0;
        s = 1.0 / (2.0 * a - 1.0);
        t = 1.0 / (2.0 * b - 1.0);
        h = 2.0 / (s + t);
        pLower = a / (a + b * exp(2.0 * (b_y * sqrt(h + r) / h -
                                         (t - s) * ((r + 0.83333333333333337) -
                                                    2.0 / (3.0 * h)))));
      } else {
        r = 2.0 * b;
        t = 1.0 / (9.0 * b);
        t = (1.0 - t) + b_y * sqrt(t);
        t *= r * t * t;
        if (t > 0.0) {
          t = ((4.0 * a + r) - 2.0) / t;
          if (t > 1.0) {
            pLower = 1.0 - 2.0 / (t + 1.0);
          } else {
            pLower = exp((log(pLower * a) + lbeta) / a);
          }
        } else {
          pLower = 1.0 - exp((log((1.0 - pLower) * b) + lbeta) / b);
        }
      }
      pLower = fmin(fmax(pLower, 0.0001), 0.9999);
      s = rtInf;
      h = rtInf;
      if (p > 1.0021E-294) {
        r = 2.2204460492503131E-14 * p;
      } else {
        r = 2.2251089859537388E-308;
      }
      if (upper) {
        sgn = -1;
      } else {
        sgn = 1;
      }
      b_y = 0.0;
      t = 1.0;
      i = 0;
      exitg1 = false;
      while ((!exitg1) && (i < 1000)) {
        f = (double)sgn * (eml_betainc(pLower, a, b, lbeta, upper) - p);
        if ((f * s < 0.0) && (fabs(s) <= fabs(f))) {
          pLower = 0.5 * (pLower + h);
          f = (double)sgn * (eml_betainc(pLower, a, b, lbeta, upper) - p);
        }
        if (f > 0.0) {
          t = pLower;
        } else {
          b_y = pLower;
        }
        if ((fabs(f) < r) ||
            (fabs(pLower - h) <
             2.2204460492503131E-16 * pLower + 2.2250738585072014E-308)) {
          exitg1 = true;
        } else {
          guard1 = false;
          guard2 = false;
          if (i < 200) {
            h = pLower;
            s = f;
            if (1.0 - pLower != 1.0) {
              log1mz = log(1.0 - pLower) * (-pLower / ((1.0 - pLower) - 1.0));
            } else {
              log1mz = -pLower;
            }
            pLower -=
                f / exp(((a - 1.0) * log(pLower) + (b - 1.0) * log1mz) - lbeta);
            if (pLower <= b_y) {
              if (b_y == 0.0) {
                if (fabs((double)upper - p) <
                    fabs(eml_betainc(2.2250738585072014E-308, a, b, lbeta,
                                     upper) -
                         p)) {
                  pLower = 0.0;
                  exitg1 = true;
                } else {
                  b_y = 2.2250738585072014E-308;
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }
            } else if (pLower >= t) {
              if (t == 1.0) {
                if (fabs((1.0 - (double)upper) - p) <
                    fabs(eml_betainc(0.99999999999999989, a, b, lbeta, upper) -
                         p)) {
                  pLower = 1.0;
                  exitg1 = true;
                } else {
                  t = 0.99999999999999989;
                  guard1 = true;
                }
              } else {
                guard1 = true;
              }
            } else {
              i++;
            }
          } else {
            pLower = 0.5 * (b_y + t);
            i++;
          }
          if (guard2) {
            pLower = 0.99 * b_y + 0.01 * t;
            i++;
          }
          if (guard1) {
            pLower = 0.01 * b_y + 0.99 * t;
            i++;
          }
        }
      }
    }
  } else if (x == 0.0) {
    pLower = 1.0;
  } else if (x == 1.0) {
    pLower = 0.0;
  } else {
    pLower = rtNaN;
  }
  y.re = pLower;
  y.im = 0.0;
  return y;
}

/* End of code generation (betaincinv.c) */
