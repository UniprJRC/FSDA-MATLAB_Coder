/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tcdf.c
 *
 * Code generation for function 'tcdf'
 *
 */

/* Include files */
#include "tcdf.h"
#include "addt_rtwutil.h"
#include "betainc.h"
#include "eml_betainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void tcdf(const double x_data[], const int x_size[2], double v, double p_data[],
          int p_size[2])
{
  double log1mx;
  double logx;
  double sqrtx;
  double t;
  double term;
  double tsq;
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

        /* ========================== COPYRIGHT NOTICE ============================ */
        /*  The algorithms for calculating ERF(X) and ERFC(X) are derived           */
        /*  from FDLIBM, which has the following notice:                            */
        /*                                                                          */
        /*  Copyright (C) 1993 by Sun Microsystems, Inc. All rights reserved.       */
        /*                                                                          */
        /*  Developed at SunSoft, a Sun Microsystems, Inc. business.                */
        /*  Permission to use, copy, modify, and distribute this                    */
        /*  software is freely granted, provided that this notice                   */
        /*  is preserved.                                                           */
        /* =============================    END    ================================ */
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
              xsq = 1.0 - (x + x * ((xsq * (xsq * (xsq * (xsq *
                -2.3763016656650163E-5 + -0.0057702702964894416) +
                -0.02848174957559851) + -0.3250421072470015) +
                0.12837916709551256) / (xsq * (xsq * (xsq * (xsq * (xsq *
                -3.9602282787753681E-6 + 0.00013249473800432164) +
                0.0050813062818757656) + 0.0650222499887673) +
                0.39791722395915535) + 1.0)));
            } else {
              xsq = rtNaN;
            }
          }
        } else if (log1mx < 1.25) {
          xsq = (((log1mx - 1.0) * ((log1mx - 1.0) * ((log1mx - 1.0) * ((log1mx
                      - 1.0) * ((log1mx - 1.0) * ((log1mx - 1.0) *
            -0.0021663755948687908 + 0.035478304325618236) +
                                -0.11089469428239668) + 0.31834661990116175) +
                    -0.37220787603570132) + 0.41485611868374833) +
                  -0.0023621185607526594) / ((log1mx - 1.0) * ((log1mx - 1.0) *
                   ((log1mx - 1.0) * ((log1mx - 1.0) * ((log1mx - 1.0) *
                      ((log1mx - 1.0) * 0.011984499846799107 +
                       0.013637083912029051) + 0.12617121980876164) +
                     0.071828654414196266) + 0.540397917702171) +
                   0.10642088040084423) + 1.0) + 0.84506291151046753) + 1.0;
        } else if (x < -6.0) {
          xsq = 2.0;
        } else {
          xsq = 1.0 / (log1mx * log1mx);
          if (log1mx < 2.8571414947509766) {
            term = xsq * (xsq * (xsq * (xsq * (xsq * (xsq * (xsq *
              -9.8143293441691455 + -81.2874355063066) + -184.60509290671104) +
              -162.39666946257347) + -62.375332450326006) + -10.558626225323291)
                          + -0.69385857270718176) + -0.0098649440348471482;
            logx = xsq * (xsq * (xsq * (xsq * (xsq * (xsq * (xsq * (xsq *
              -0.0604244152148581 + 6.5702497703192817) + 108.63500554177944) +
              429.00814002756783) + 645.38727173326788) + 434.56587747522923) +
                                 137.65775414351904) + 19.651271667439257) + 1.0;
          } else {
            term = xsq * (xsq * (xsq * (xsq * (xsq * (xsq * -483.5191916086514 +
              -1025.0951316110772) + -637.56644336838963) + -160.63638485582192)
                                 + -17.757954917754752) + -0.799283237680523) +
              -0.0098649429247001;
            logx = xsq * (xsq * (xsq * (xsq * (xsq * (xsq * (xsq *
              -22.440952446585818 + 474.52854120695537) + 2553.0504064331644) +
              3199.8582195085955) + 1536.729586084437) + 325.79251299657392) +
                          30.338060743482458) + 1.0;
          }

          if ((!rtIsInf(log1mx)) && (!rtIsNaN(log1mx))) {
            xsq = frexp(log1mx, &eint);
            b = eint;
          } else {
            xsq = log1mx;
            b = 0;
          }

          xsq = floor(xsq * 2.097152E+6) / 2.097152E+6 * rt_powd_snf(2.0, b);
          xsq = exp(-xsq * xsq - 0.5625) * exp((xsq - log1mx) * (xsq + log1mx) +
            term / logx) / log1mx;
          if (x < 0.0) {
            xsq = 2.0 - xsq;
          }
        }

        p_data[0] = 0.5 * xsq;
      } else if (v == 1.0) {
        xsq = atan(1.0 / -x_data[0]) / 3.1415926535897931;
        p_data[0] = xsq;
        if (x_data[0] > 0.0) {
          xsq++;
          p_data[0] = xsq;
        }
      } else {
        xsq = x_data[0] * x_data[0];
        if (v < xsq) {
          x = v / (v + xsq);
          term = v / 2.0;
          tsq = 0.5;
          gammaln(&tsq);
          xsq = term;
          gammaln(&xsq);
          logx = term + 0.5;
          gammaln(&logx);
          xsq = (xsq + tsq) - logx;
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
              xsq = 1.0 - exp(((term * logx + 0.5 * log1mx) -
                               -0.69314718055994529) - xsq) * betainc_cf(1.0 - x,
                0.5, term);
            }

            if (!(xsq == xsq)) {
              xsq = rt_powd_snf(0.5 * x, 0.33333333333333331);
              logx = rt_powd_snf(term * (1.0 - x), 0.33333333333333331);
              if (((term + 0.5) - 1.0) * (1.0 - x) > 0.8) {
                x = 0.70710678118654746 * -(3.0 * (0.77777777777777779 * xsq -
                  (1.0 - 1.0 / (9.0 * term)) * logx) / sqrt(xsq * xsq / 0.5 +
                  logx * logx / term));
                t = 3.97886080735226 / (fabs(x) + 3.97886080735226);
                xsq = 0.5 * ((((((((((((((((((((((0.0012710976495261409 * (t -
                  0.5) + 0.00011931402283834095) * (t - 0.5) +
                  -0.0039638509736051354) * (t - 0.5) + -0.00087077963531729586)
                  * (t - 0.5) + 0.0077367252831352668) * (t - 0.5) +
                  0.0038333512626488732) * (t - 0.5) + -0.012722381378212275) *
                  (t - 0.5) + -0.013382364453346007) * (t - 0.5) +
                  0.016131532973325226) * (t - 0.5) + 0.039097684558848406) * (t
                  - 0.5) + 0.0024936720005350331) * (t - 0.5) +
                  -0.0838864557023002) * (t - 0.5) + -0.11946395996432542) * (t
                  - 0.5) + 0.016620792496936737) * (t - 0.5) +
                                     0.35752427444953105) * (t - 0.5) +
                                    0.80527640875291062) * (t - 0.5) +
                                   1.1890298290927332) * (t - 0.5) +
                                  1.3704021768233816) * (t - 0.5) +
                                 1.313146538310231) * (t - 0.5) +
                                1.0792551515585667) * (t - 0.5) +
                               0.77436819911953858) * (t - 0.5) +
                              0.49016508058531844) * (t - 0.5) +
                             0.27537474159737679) * t * exp(-x * x);
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
                } else if (rtIsInf(x)) {
                  xsq = 0.0;
                } else {
                  if (fabs(0.5 - x) > 0.1 * (x + 0.5)) {
                    if ((x < 1.0) && (0.5 > 1.7976931348623157E+308 * x)) {
                      xD0 = (-0.34657359027997264 - 0.5 * log(x)) - 0.5;
                    } else {
                      xD0 = (0.5 * log(0.5 / x) + x) - 0.5;
                    }
                  } else {
                    t = x / 0.5;
                    xsq = (1.0 - t) / (t + 1.0);
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
                    sqrtx = sqrt(x);
                    t = fabs((0.5 - x) - 1.0) / sqrtx;
                    tsq = t * t;
                    if (t < 15.0) {
                      xsq = 0.70710678118654746 * t;
                      logx = 3.97886080735226 / (xsq + 3.97886080735226);
                      logx = 0.5 * ((((((((((((((((((((((0.0012710976495261409 *
                        (logx - 0.5) + 0.00011931402283834095) * (logx - 0.5) +
                        -0.0039638509736051354) * (logx - 0.5) +
                        -0.00087077963531729586) * (logx - 0.5) +
                        0.0077367252831352668) * (logx - 0.5) +
                        0.0038333512626488732) * (logx - 0.5) +
                        -0.012722381378212275) * (logx - 0.5) +
                        -0.013382364453346007) * (logx - 0.5) +
                        0.016131532973325226) * (logx - 0.5) +
                        0.039097684558848406) * (logx - 0.5) +
                        0.0024936720005350331) * (logx - 0.5) +
                        -0.0838864557023002) * (logx - 0.5) +
                        -0.11946395996432542) * (logx - 0.5) +
                        0.016620792496936737) * (logx - 0.5) +
                                            0.35752427444953105) * (logx - 0.5)
                                           + 0.80527640875291062) * (logx - 0.5)
                                          + 1.1890298290927332) * (logx - 0.5) +
                                         1.3704021768233816) * (logx - 0.5) +
                                        1.313146538310231) * (logx - 0.5) +
                                       1.0792551515585667) * (logx - 0.5) +
                                      0.77436819911953858) * (logx - 0.5) +
                                     0.49016508058531844) * (logx - 0.5) +
                                    0.27537474159737679) * logx * exp(-xsq * xsq)
                        * 2.5066282746310002 * exp(0.5 * tsq);
                      log1mx = (logx * ((tsq - 3.0) * t) - (tsq - 4.0)) / 6.0;
                      term = (logx * ((tsq * tsq - 9.0) * tsq + 6.0) - ((tsq -
                                1.0) * tsq - 6.0) * t) / 72.0;
                      xsq = (logx * (((((5.0 * tsq + 45.0) * tsq - 81.0) * tsq -
                                       315.0) * tsq + 270.0) * t) - ((((5.0 *
                                 tsq + 40.0) * tsq - 111.0) * tsq - 174.0) * tsq
                              + 192.0)) / 6480.0;
                    } else {
                      logx = (((3.0 - 15.0 / tsq) / tsq + -1.0) / tsq + 1.0) / t;
                      log1mx = (((25.0 - 210.0 / tsq) / tsq + -4.0) / tsq + 1.0)
                        / tsq;
                      term = (((130.0 - 1750.0 / tsq) / tsq + -11.0) / tsq + 1.0)
                        / (tsq * t);
                      xsq = (((546.0 - 11368.0 / tsq) / tsq + -26.0) / tsq + 1.0)
                        / (tsq * tsq);
                    }

                    xsq = 0.5 * (((logx / sqrtx + log1mx / x) + term / (x *
                      sqrtx)) + xsq / (x * x));
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

                    xsq = 0.5 * log(x) - tsq;
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
                      t = 3.97886080735226 / (xsq + 3.97886080735226);
                      xsq = sqrt(3.1415926535897931 * x) * exp(x) * (2.0 * (0.5 *
                        ((((((((((((((((((((((0.0012710976495261409 * (t - 0.5)
                        + 0.00011931402283834095) * (t - 0.5) +
                        -0.0039638509736051354) * (t - 0.5) +
                        -0.00087077963531729586) * (t - 0.5) +
                        0.0077367252831352668) * (t - 0.5) +
                        0.0038333512626488732) * (t - 0.5) +
                                         -0.012722381378212275) * (t - 0.5) +
                                        -0.013382364453346007) * (t - 0.5) +
                                       0.016131532973325226) * (t - 0.5) +
                                      0.039097684558848406) * (t - 0.5) +
                                     0.0024936720005350331) * (t - 0.5) +
                                    -0.0838864557023002) * (t - 0.5) +
                                   -0.11946395996432542) * (t - 0.5) +
                                  0.016620792496936737) * (t - 0.5) +
                                 0.35752427444953105) * (t - 0.5) +
                                0.80527640875291062) * (t - 0.5) +
                               1.1890298290927332) * (t - 0.5) +
                              1.3704021768233816) * (t - 0.5) +
                             1.313146538310231) * (t - 0.5) + 1.0792551515585667)
                           * (t - 0.5) + 0.77436819911953858) * (t - 0.5) +
                          0.49016508058531844) * (t - 0.5) + 0.27537474159737679)
                        * t * exp(-xsq * xsq)));
                      logx = 1.0;
                    }

                    b = (int)(((-1.0 - (logx - 1.0)) + 1.0) / -1.0);
                    for (b_i = 0; b_i < b; b_i++) {
                      xsq = (0.5 - ((logx - 1.0) + -(double)b_i)) * xsq / x +
                        1.0;
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

          xsq /= 2.0;
          p_data[0] = xsq;
        } else {
          xsq = (betainc(xsq / (v + xsq), v / 2.0)).re / 2.0;
          p_data[0] = xsq;
        }

        if (x_data[0] > 0.0) {
          xsq = 1.0 - xsq;
          p_data[0] = xsq;
        }
      }
    } else {
      p_data[0] = rtNaN;
    }
  }
}

/* End of code generation (tcdf.c) */
