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
#include "betainc.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo xg_emlrtRSI = {
    44,     /* lineNo */
    "tcdf", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m" /* pathName
                                                                      */
};

static emlrtRSInfo yg_emlrtRSI = {
    46,     /* lineNo */
    "tcdf", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m" /* pathName
                                                                      */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    21,     /* lineNo */
    36,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    26,     /* lineNo */
    15,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    29,     /* lineNo */
    15,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    34,     /* lineNo */
    15,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    36,     /* lineNo */
    26,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    36,     /* lineNo */
    19,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    44,     /* lineNo */
    19,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    46,     /* lineNo */
    19,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    49,     /* lineNo */
    19,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    53,     /* lineNo */
    11,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

/* Function Definitions */
void tcdf(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2],
          real_T v, real_T p_data[], int32_T p_size[2])
{
  emlrtStack st;
  creal_T dc;
  real_T R;
  real_T S;
  real_T absx;
  real_T x;
  real_T xsq;
  int32_T eint;
  int32_T exponent;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  p_size[0] = (int8_T)x_size[0];
  p_size[1] = (int8_T)x_size[1];
  i = (int8_T)x_size[0] * (int8_T)x_size[1];
  for (k = 0; k < i; k++) {
    exponent = x_size[0] * x_size[1];
    if (1 > exponent) {
      emlrtDynamicBoundsCheckR2012b(1, 1, exponent, &c_emlrtBCI, (emlrtCTX)sp);
    }
    if ((v > 0.0) && (!muDoubleScalarIsNaN(x_data[0]))) {
      if (x_data[0] == 0.0) {
        exponent = p_size[0] * p_size[1];
        if (1 > exponent) {
          emlrtDynamicBoundsCheckR2012b(1, 1, exponent, &d_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        p_data[0] = 0.5;
      } else if (v > 1.0E+7) {
        exponent = p_size[0] * p_size[1];
        if (1 > exponent) {
          emlrtDynamicBoundsCheckR2012b(1, 1, exponent, &e_emlrtBCI,
                                        (emlrtCTX)sp);
        }
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
        absx = muDoubleScalarAbs(x);
        if (muDoubleScalarIsNaN(x)) {
          xsq = x;
        } else if (muDoubleScalarIsInf(x)) {
          if (x < 0.0) {
            xsq = 2.0;
          } else {
            xsq = 0.0;
          }
        } else if (absx < 0.84375) {
          if (absx < 1.3877787807814457E-17) {
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
        } else if (absx < 1.25) {
          xsq =
              (((absx - 1.0) *
                    ((absx - 1.0) *
                         ((absx - 1.0) *
                              ((absx - 1.0) *
                                   ((absx - 1.0) *
                                        ((absx - 1.0) * -0.0021663755948687908 +
                                         0.035478304325618236) +
                                    -0.11089469428239668) +
                               0.31834661990116175) +
                          -0.37220787603570132) +
                     0.41485611868374833) +
                -0.0023621185607526594) /
                   ((absx - 1.0) *
                        ((absx - 1.0) *
                             ((absx - 1.0) *
                                  ((absx - 1.0) *
                                       ((absx - 1.0) *
                                            ((absx - 1.0) *
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
          xsq = 1.0 / (absx * absx);
          if (absx < 2.8571414947509766) {
            R = xsq *
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
            S = xsq *
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
            R = xsq * (xsq * (xsq * (xsq * (xsq * (xsq * -483.5191916086514 +
                                                   -1025.0951316110772) +
                                            -637.56644336838963) +
                                     -160.63638485582192) +
                              -17.757954917754752) +
                       -0.799283237680523) +
                -0.0098649429247001;
            S = xsq *
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
          if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
            xsq = frexp(absx, &eint);
            exponent = eint;
          } else {
            xsq = absx;
            exponent = 0;
          }
          xsq = muDoubleScalarFloor(xsq * 2.097152E+6) / 2.097152E+6 *
                muDoubleScalarPower(2.0, exponent);
          xsq = muDoubleScalarExp(-xsq * xsq - 0.5625) *
                muDoubleScalarExp((xsq - absx) * (xsq + absx) + R / S) / absx;
          if (x < 0.0) {
            xsq = 2.0 - xsq;
          }
        }
        p_data[0] = 0.5 * xsq;
      } else if (v == 1.0) {
        exponent = p_size[0] * p_size[1];
        if (1 > exponent) {
          emlrtDynamicBoundsCheckR2012b(1, 1, exponent, &f_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        xsq = muDoubleScalarAtan(1.0 / -x_data[0]) / 3.1415926535897931;
        p_data[0] = xsq;
        if (x_data[0] > 0.0) {
          exponent = p_size[0] * p_size[1];
          if (1 > exponent) {
            emlrtDynamicBoundsCheckR2012b(1, 1, exponent, &h_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          exponent = p_size[0] * p_size[1];
          if (1 > exponent) {
            emlrtDynamicBoundsCheckR2012b(1, 1, exponent, &g_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          xsq++;
          p_data[0] = xsq;
        }
      } else {
        xsq = x_data[0] * x_data[0];
        if (v < xsq) {
          exponent = p_size[0];
          i1 = p_size[1];
          i2 = p_size[0] * p_size[1];
          if (1 > i2) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i2, &i_emlrtBCI, (emlrtCTX)sp);
          }
          st.site = &xg_emlrtRSI;
          dc = betainc(&st, v / (v + xsq), v / 2.0);
          xsq = dc.re / 2.0;
          p_data[0] = xsq;
        } else {
          exponent = p_size[0];
          i1 = p_size[1];
          i2 = p_size[0] * p_size[1];
          if (1 > i2) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i2, &j_emlrtBCI, (emlrtCTX)sp);
          }
          st.site = &yg_emlrtRSI;
          dc = b_betainc(&st, xsq / (v + xsq), v / 2.0);
          xsq = dc.re / 2.0;
          p_data[0] = xsq;
        }
        if (x_data[0] > 0.0) {
          exponent *= i1;
          if (1 > exponent) {
            emlrtDynamicBoundsCheckR2012b(1, 1, exponent, &k_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          xsq = 1.0 - xsq;
          p_data[0] = xsq;
        }
      }
    } else {
      exponent = p_size[0] * p_size[1];
      if (1 > exponent) {
        emlrtDynamicBoundsCheckR2012b(1, 1, exponent, &l_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      p_data[0] = rtNaN;
    }
  }
}

/* End of code generation (tcdf.c) */
