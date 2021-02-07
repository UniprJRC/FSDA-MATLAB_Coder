/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * tcdf.c
 *
 * Code generation for function 'tcdf'
 *
 */

/* Include files */
#include "tcdf.h"
#include "addt_rtwutil.h"
#include "eml_betainc.h"
#include "eml_gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void tcdf(const double x_data[], const int x_size[2], double v, double p_data[],
          int p_size[2])
{
  double glnb1_tmp;
  double log1mx;
  double logx;
  double term;
  double x;
  double xD0;
  double xsq;
  int b;
  int b_i;
  int eint;
  int exitg1;
  int i;
  int k;
  p_size[0] = (signed char)x_size[0];
  p_size[1] = (signed char)x_size[1];
  i = (signed char)x_size[0] * (signed char)x_size[1];
  for (k = 0; k < i; k++) {
    if ((v > 0.0) && (!rtIsNaN(x_data[0]))) {
      if (x_data[0] == 0.0) {
        p_data[0] = 0.5;
      } else if (v > 1.0E+7) {
        x = -x_data[0] / 1.4142135623730951;
        /* ========================== COPYRIGHT NOTICE
         * ============================ */
        /*  The algorithms for calculating ERF(X) and ERFC(X) are derived */
        /*  from FDLIBM, which has the following notice: */
        /*                                                                          */
        /*  Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved. */
        /*                                                                          */
        /*  Developed at SunSoft, a Sun Microsystems, Inc. business. */
        /*  Permission to use, copy, modify, and distribute this */
        /*  software is freely granted, provided that this notice */
        /*  is preserved. */
        /* =============================    END
         * ================================ */
        log1mx = fabs(x);
        if (rtIsNaN(x)) {
          xsq = x;
        } else if (rtIsInf(x)) {
          if (x < 0.0) {
            xsq = 2.0;
          } else {
            xsq = 0.0;
          }
        } else if (log1mx < 0.84375) {
          if (log1mx < 1.3877787807814457E-17) {
            xsq = 1.0 - x;
          } else {
            xsq = x * x;
            if (x < 0.25) {
              xsq =
                  1.0 -
                  (x +
                   x * ((xsq * (xsq * (xsq * (xsq * -2.3763016656650163E-5 +
                                              -0.0057702702964894416) +
                                       -0.02848174957559851) +
                                -0.3250421072470015) +
                         0.12837916709551256) /
                        (xsq *
                             (xsq *
                                  (xsq * (xsq * (xsq * -3.9602282787753681E-6 +
                                                 0.00013249473800432164) +
                                          0.0050813062818757656) +
                                   0.0650222499887673) +
                              0.39791722395915535) +
                         1.0)));
            } else {
              xsq = rtNaN;
            }
          }
        } else if (log1mx < 1.25) {
          xsq = (((log1mx - 1.0) *
                      ((log1mx - 1.0) *
                           ((log1mx - 1.0) *
                                ((log1mx - 1.0) *
                                     ((log1mx - 1.0) *
                                          ((log1mx - 1.0) *
                                               -0.0021663755948687908 +
                                           0.035478304325618236) +
                                      -0.11089469428239668) +
                                 0.31834661990116175) +
                            -0.37220787603570132) +
                       0.41485611868374833) +
                  -0.0023621185607526594) /
                     ((log1mx - 1.0) *
                          ((log1mx - 1.0) *
                               ((log1mx - 1.0) *
                                    ((log1mx - 1.0) *
                                         ((log1mx - 1.0) *
                                              ((log1mx - 1.0) *
                                                   0.011984499846799107 +
                                               0.013637083912029051) +
                                          0.12617121980876164) +
                                     0.071828654414196266) +
                                0.540397917702171) +
                           0.10642088040084423) +
                      1.0) +
                 0.84506291151046753) +
                1.0;
        } else if (x < -6.0) {
          xsq = 2.0;
        } else {
          xsq = 1.0 / (log1mx * log1mx);
          if (log1mx < 2.8571414947509766) {
            term =
                xsq *
                    (xsq *
                         (xsq *
                              (xsq * (xsq * (xsq * (xsq * -9.8143293441691455 +
                                                    -81.2874355063066) +
                                             -184.60509290671104) +
                                      -162.39666946257347) +
                               -62.375332450326006) +
                          -10.558626225323291) +
                     -0.69385857270718176) +
                -0.0098649440348471482;
            logx =
                xsq *
                    (xsq *
                         (xsq *
                              (xsq *
                                   (xsq *
                                        (xsq *
                                             (xsq * (xsq * -0.0604244152148581 +
                                                     6.5702497703192817) +
                                              108.63500554177944) +
                                         429.00814002756783) +
                                    645.38727173326788) +
                               434.56587747522923) +
                          137.65775414351904) +
                     19.651271667439257) +
                1.0;
          } else {
            term = xsq * (xsq * (xsq * (xsq * (xsq * (xsq * -483.5191916086514 +
                                                      -1025.0951316110772) +
                                               -637.56644336838963) +
                                        -160.63638485582192) +
                                 -17.757954917754752) +
                          -0.799283237680523) +
                   -0.0098649429247001;
            logx =
                xsq *
                    (xsq *
                         (xsq *
                              (xsq * (xsq * (xsq * (xsq * -22.440952446585818 +
                                                    474.52854120695537) +
                                             2553.0504064331644) +
                                      3199.8582195085955) +
                               1536.729586084437) +
                          325.79251299657392) +
                     30.338060743482458) +
                1.0;
          }
          if ((!rtIsInf(log1mx)) && (!rtIsNaN(log1mx))) {
            xsq = frexp(log1mx, &eint);
            b = eint;
          } else {
            xsq = log1mx;
            b = 0;
          }
          xsq = floor(xsq * 2.097152E+6) / 2.097152E+6 * rt_powd_snf(2.0, b);
          xsq = exp(-xsq * xsq - 0.5625) *
                exp((xsq - log1mx) * (xsq + log1mx) + term / logx) / log1mx;
          if (x < 0.0) {
            xsq = 2.0 - xsq;
          }
        }
        p_data[0] = 0.5 * xsq;
      } else if (v == 1.0) {
        logx = atan(1.0 / -x_data[0]) / 3.1415926535897931;
        p_data[0] = logx;
        if (x_data[0] > 0.0) {
          logx++;
          p_data[0] = logx;
        }
      } else {
        xsq = x_data[0] * x_data[0];
        if (v < xsq) {
          x = v / (v + xsq);
          term = v / 2.0;
          glnb1_tmp = 0.5;
          gammaln(&glnb1_tmp);
          logx = term;
          gammaln(&logx);
          log1mx = term + 0.5;
          gammaln(&log1mx);
          xsq = (logx + glnb1_tmp) - log1mx;
          if ((0.0 < x) && (x < 1.0)) {
            logx = log(x);
            if (1.0 - x != 1.0) {
              log1mx = log(1.0 - x) * (-x / ((1.0 - x) - 1.0));
            } else {
              log1mx = -x;
            }
            if (x < (term + 1.0) / ((term + 0.5) + 2.0)) {
              xsq = exp(((term * logx + 0.5 * log1mx) - log(term)) - xsq) *
                    betainc_cf(x, term, 0.5);
            } else {
              xsq = 1.0 -
                    exp(((term * logx + 0.5 * log1mx) - -0.69314718055994529) -
                        xsq) *
                        betainc_cf(1.0 - x, 0.5, term);
            }
            if (!(xsq == xsq)) {
              xsq = rt_powd_snf(0.5 * x, 0.33333333333333331);
              logx = rt_powd_snf(term * (1.0 - x), 0.33333333333333331);
              if (((term + 0.5) - 1.0) * (1.0 - x) > 0.8) {
                x = 0.70710678118654746 *
                    -(3.0 *
                      (0.77777777777777779 * xsq -
                       (1.0 - 1.0 / (9.0 * term)) * logx) /
                      sqrt(xsq * xsq / 0.5 + logx * logx / term));
                log1mx = 3.97886080735226 / (fabs(x) + 3.97886080735226);
                xsq = 0.5 *
                      ((((((((((((((((((((((0.0012710976495261409 *
                                                (log1mx - 0.5) +
                                            0.00011931402283834095) *
                                               (log1mx - 0.5) +
                                           -0.0039638509736051354) *
                                              (log1mx - 0.5) +
                                          -0.00087077963531729586) *
                                             (log1mx - 0.5) +
                                         0.0077367252831352668) *
                                            (log1mx - 0.5) +
                                        0.0038333512626488732) *
                                           (log1mx - 0.5) +
                                       -0.012722381378212275) *
                                          (log1mx - 0.5) +
                                      -0.013382364453346007) *
                                         (log1mx - 0.5) +
                                     0.016131532973325226) *
                                        (log1mx - 0.5) +
                                    0.039097684558848406) *
                                       (log1mx - 0.5) +
                                   0.0024936720005350331) *
                                      (log1mx - 0.5) +
                                  -0.0838864557023002) *
                                     (log1mx - 0.5) +
                                 -0.11946395996432542) *
                                    (log1mx - 0.5) +
                                0.016620792496936737) *
                                   (log1mx - 0.5) +
                               0.35752427444953105) *
                                  (log1mx - 0.5) +
                              0.80527640875291062) *
                                 (log1mx - 0.5) +
                             1.1890298290927332) *
                                (log1mx - 0.5) +
                            1.3704021768233816) *
                               (log1mx - 0.5) +
                           1.313146538310231) *
                              (log1mx - 0.5) +
                          1.0792551515585667) *
                             (log1mx - 0.5) +
                         0.77436819911953858) *
                            (log1mx - 0.5) +
                        0.49016508058531844) *
                           (log1mx - 0.5) +
                       0.27537474159737679) *
                      log1mx * exp(-x * x);
                if (x < 0.0) {
                  xsq = 1.0 - xsq;
                }
              } else {
                x = 0.5 * (((term + 0.5) - 1.0) * (3.0 - x) - -0.5) * (1.0 - x);
                if (!(x > 0.0)) {
                  if (x == 0.0) {
                    xsq = 1.0;
                  } else {
                    xsq = rtNaN;
                  }
                } else {
                  if (fabs(0.5 - x) > 0.1 * (x + 0.5)) {
                    if ((x < 1.0) && (0.5 > 1.7976931348623157E+308 * x)) {
                      xD0 = (-0.34657359027997264 - 0.5 * log(x)) - 0.5;
                    } else {
                      xD0 = (0.5 * log(0.5 / x) + x) - 0.5;
                    }
                  } else {
                    log1mx = x / 0.5;
                    xsq = (1.0 - log1mx) / (log1mx + 1.0);
                    logx = xsq * xsq;
                    xD0 = (0.5 - x) * xsq;
                    log1mx = xD0;
                    term = 2.0 * (0.5 * xsq);
                    xsq = 3.0;
                    do {
                      exitg1 = 0;
                      term *= logx;
                      xD0 += term / xsq;
                      if (xD0 == log1mx) {
                        exitg1 = 1;
                      } else {
                        log1mx = xD0;
                        xsq += 2.0;
                      }
                    } while (exitg1 == 0);
                  }
                  if (x > 1.0E+6) {
                    xsq = sqrt(x);
                    log1mx = fabs((0.5 - x) - 1.0) / xsq;
                    logx = log1mx * log1mx;
                    xsq =
                        0.5 *
                        ((((((3.0 - 15.0 / logx) / logx + -1.0) / logx + 1.0) /
                               log1mx / xsq +
                           (((25.0 - 210.0 / logx) / logx + -4.0) / logx +
                            1.0) /
                               logx / x) +
                          (((130.0 - 1750.0 / logx) / logx + -11.0) / logx +
                           1.0) /
                              (logx * log1mx) / (x * xsq)) +
                         (((546.0 - 11368.0 / logx) / logx + -26.0) / logx +
                          1.0) /
                             (logx * logx) / (x * x));
                    if (-0.72579135264472727 - xD0 < 709.782712893384) {
                      xsq *= exp(-0.72579135264472727 - xD0);
                    } else {
                      xsq = exp((-0.72579135264472727 - xD0) + log(xsq));
                    }
                  } else if (x < 1.0) {
                    xsq = 0.5 * -x;
                    log1mx = xsq / 1.5;
                    logx = 2.0;
                    do {
                      exitg1 = 0;
                      xsq = -x * xsq / logx;
                      term = xsq / (logx + 0.5);
                      log1mx += term;
                      if (fabs(term) <= fabs(log1mx) * 2.2204460492503131E-16) {
                        exitg1 = 1;
                      } else {
                        logx++;
                      }
                    } while (exitg1 == 0);
                    xsq = 0.5 * log(x) - glnb1_tmp;
                    logx = exp(xsq);
                    if (logx - 1.0 == -1.0) {
                      xsq = -1.0;
                    } else {
                      xsq = (logx - 1.0) * xsq / log(logx);
                    }
                    xsq = -((log1mx + xsq) + log1mx * xsq);
                    if (xsq < 0.0) {
                      xsq = 0.0;
                    }
                  } else {
                    xsq = 1.0;
                    logx = 1.0;
                    do {
                      exitg1 = 0;
                      b = (int)floor(x + 0.5);
                      if ((int)logx <= b) {
                        xsq = (0.5 - logx) * xsq / x;
                        if (fabs(xsq) < 2.2204460492503131E-16) {
                          exitg1 = 1;
                        } else {
                          logx++;
                        }
                      } else {
                        exitg1 = 1;
                      }
                    } while (exitg1 == 0);
                    if ((int)logx <= b) {
                      xsq = 1.0;
                    } else {
                      xsq = 0.70710678118654746 * sqrt(2.0 * x);
                      log1mx = 3.97886080735226 / (xsq + 3.97886080735226);
                      xsq = sqrt(3.1415926535897931 * x) * exp(x) *
                            (2.0 *
                             (0.5 *
                              ((((((((((((((((((((((0.0012710976495261409 *
                                                        (log1mx - 0.5) +
                                                    0.00011931402283834095) *
                                                       (log1mx - 0.5) +
                                                   -0.0039638509736051354) *
                                                      (log1mx - 0.5) +
                                                  -0.00087077963531729586) *
                                                     (log1mx - 0.5) +
                                                 0.0077367252831352668) *
                                                    (log1mx - 0.5) +
                                                0.0038333512626488732) *
                                                   (log1mx - 0.5) +
                                               -0.012722381378212275) *
                                                  (log1mx - 0.5) +
                                              -0.013382364453346007) *
                                                 (log1mx - 0.5) +
                                             0.016131532973325226) *
                                                (log1mx - 0.5) +
                                            0.039097684558848406) *
                                               (log1mx - 0.5) +
                                           0.0024936720005350331) *
                                              (log1mx - 0.5) +
                                          -0.0838864557023002) *
                                             (log1mx - 0.5) +
                                         -0.11946395996432542) *
                                            (log1mx - 0.5) +
                                        0.016620792496936737) *
                                           (log1mx - 0.5) +
                                       0.35752427444953105) *
                                          (log1mx - 0.5) +
                                      0.80527640875291062) *
                                         (log1mx - 0.5) +
                                     1.1890298290927332) *
                                        (log1mx - 0.5) +
                                    1.3704021768233816) *
                                       (log1mx - 0.5) +
                                   1.313146538310231) *
                                      (log1mx - 0.5) +
                                  1.0792551515585667) *
                                     (log1mx - 0.5) +
                                 0.77436819911953858) *
                                    (log1mx - 0.5) +
                                0.49016508058531844) *
                                   (log1mx - 0.5) +
                               0.27537474159737679) *
                              log1mx * exp(-xsq * xsq)));
                      logx = 1.0;
                    }
                    b = (int)(((-1.0 - (logx - 1.0)) + 1.0) / -1.0);
                    for (b_i = 0; b_i < b; b_i++) {
                      xsq =
                          (0.5 - ((logx - 1.0) + -(double)b_i)) * xsq / x + 1.0;
                    }
                    xsq = xsq * 0.5 / x;
                    if (-0.72579135264472727 - xD0 < 709.782712893384) {
                      xsq *= exp(-0.72579135264472727 - xD0);
                    } else {
                      xsq = exp((-0.72579135264472727 - xD0) + log(xsq));
                    }
                    if (xsq > 1.0) {
                      xsq = 1.0;
                    }
                  }
                }
              }
            }
          } else if (x == 0.0) {
            xsq = 0.0;
          } else if (x == 1.0) {
            xsq = 1.0;
          } else {
            xsq = rtNaN;
          }
          logx = xsq / 2.0;
          p_data[0] = logx;
        } else {
          x = xsq / (v + xsq);
          term = v / 2.0;
          logx = 0.5;
          gammaln(&logx);
          log1mx = term;
          gammaln(&log1mx);
          xsq = term + 0.5;
          gammaln(&xsq);
          xsq = (logx + log1mx) - xsq;
          if ((0.0 < x) && (x < 1.0)) {
            logx = log(x);
            if (1.0 - x != 1.0) {
              log1mx = log(1.0 - x) * (-x / ((1.0 - x) - 1.0));
            } else {
              log1mx = -x;
            }
            if (x < 1.5 / ((term + 0.5) + 2.0)) {
              xsq = 1.0 -
                    exp(((0.5 * logx + term * log1mx) - -0.69314718055994529) -
                        xsq) *
                        betainc_cf(x, 0.5, term);
            } else {
              xsq = exp(((0.5 * logx + term * log1mx) - log(term)) - xsq) *
                    betainc_cf(1.0 - x, term, 0.5);
            }
            if (!(xsq == xsq)) {
              xsq = rt_powd_snf(term * x, 0.33333333333333331);
              logx = rt_powd_snf(0.5 * (1.0 - x), 0.33333333333333331);
              if (((term + 0.5) - 1.0) * (1.0 - x) > 0.8) {
                x = 0.70710678118654746 *
                    (3.0 *
                     ((1.0 - 1.0 / (9.0 * term)) * xsq -
                      0.77777777777777779 * logx) /
                     sqrt(xsq * xsq / term + logx * logx / 0.5));
                log1mx = 3.97886080735226 / (fabs(x) + 3.97886080735226);
                xsq = 0.5 *
                      ((((((((((((((((((((((0.0012710976495261409 *
                                                (log1mx - 0.5) +
                                            0.00011931402283834095) *
                                               (log1mx - 0.5) +
                                           -0.0039638509736051354) *
                                              (log1mx - 0.5) +
                                          -0.00087077963531729586) *
                                             (log1mx - 0.5) +
                                         0.0077367252831352668) *
                                            (log1mx - 0.5) +
                                        0.0038333512626488732) *
                                           (log1mx - 0.5) +
                                       -0.012722381378212275) *
                                          (log1mx - 0.5) +
                                      -0.013382364453346007) *
                                         (log1mx - 0.5) +
                                     0.016131532973325226) *
                                        (log1mx - 0.5) +
                                    0.039097684558848406) *
                                       (log1mx - 0.5) +
                                   0.0024936720005350331) *
                                      (log1mx - 0.5) +
                                  -0.0838864557023002) *
                                     (log1mx - 0.5) +
                                 -0.11946395996432542) *
                                    (log1mx - 0.5) +
                                0.016620792496936737) *
                                   (log1mx - 0.5) +
                               0.35752427444953105) *
                                  (log1mx - 0.5) +
                              0.80527640875291062) *
                                 (log1mx - 0.5) +
                             1.1890298290927332) *
                                (log1mx - 0.5) +
                            1.3704021768233816) *
                               (log1mx - 0.5) +
                           1.313146538310231) *
                              (log1mx - 0.5) +
                          1.0792551515585667) *
                             (log1mx - 0.5) +
                         0.77436819911953858) *
                            (log1mx - 0.5) +
                        0.49016508058531844) *
                           (log1mx - 0.5) +
                       0.27537474159737679) *
                      log1mx * exp(-x * x);
                if (x < 0.0) {
                  xsq = 1.0 - xsq;
                }
              } else {
                logx = term;
                gammaln(&logx);
                xsq = eml_gammainc(
                    0.5 * (((term + 0.5) - 1.0) * (3.0 - x) - (term - 1.0)) *
                        (1.0 - x),
                    term, log(term), logx);
              }
            }
          } else if (x == 0.0) {
            xsq = 1.0;
          } else if (x == 1.0) {
            xsq = 0.0;
          } else {
            xsq = rtNaN;
          }
          logx = xsq / 2.0;
          p_data[0] = logx;
        }
        if (x_data[0] > 0.0) {
          logx = 1.0 - logx;
          p_data[0] = logx;
        }
      }
    } else {
      p_data[0] = rtNaN;
    }
  }
}

/* End of code generation (tcdf.c) */
