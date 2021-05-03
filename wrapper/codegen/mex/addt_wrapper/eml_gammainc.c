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
#include "addt_wrapper_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ii_emlrtRSI = {
    374,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRSInfo li_emlrtRSI = {
    294,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRSInfo mi_emlrtRSI = {
    242,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRSInfo ni_emlrtRSI = {
    220,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRSInfo oi_emlrtRSI = {
    198,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRSInfo ri_emlrtRSI = {
    128,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRSInfo si_emlrtRSI = {
    126,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRSInfo ui_emlrtRSI = {
    180,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    356,            /* lineNo */
    13,             /* colNo */
    "eml_gammainc", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    276,            /* lineNo */
    13,             /* colNo */
    "eml_gammainc", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pName */
};

/* Function Definitions */
real_T b_eml_gammainc(const emlrtStack *sp, real_T x, real_T a, real_T la,
                      real_T lgap1)
{
  static const real_T dv[31] = {0.0,
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
  emlrtStack st;
  real_T a1;
  real_T asq;
  real_T d;
  real_T dj;
  real_T logpax;
  real_T n;
  real_T old;
  real_T rval;
  real_T stirlerr;
  real_T t;
  real_T vsq;
  real_T xD0;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  if (!(x > 0.0)) {
    if (x == 0.0) {
      rval = 0.0;
    } else {
      rval = rtNaN;
    }
  } else if (muDoubleScalarIsInf(a)) {
    if (muDoubleScalarIsInf(x)) {
      rval = rtNaN;
    } else {
      rval = 0.0;
    }
  } else if (muDoubleScalarIsInf(x)) {
    rval = 1.0;
  } else {
    if (a <= 15.0) {
      asq = 2.0 * a;
      if (asq == muDoubleScalarFloor(asq)) {
        stirlerr = dv[(int32_T)(asq + 1.0) - 1];
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
    if (muDoubleScalarAbs(d) > 0.1 * a1) {
      if ((x < 1.0) && (a > 1.7976931348623157E+308 * x)) {
        st.site = &si_emlrtRSI;
        if (x < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        xD0 = (a * la - a * muDoubleScalarLog(x)) - a;
      } else {
        asq = a / x;
        st.site = &ri_emlrtRSI;
        if (asq < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        asq = muDoubleScalarLog(asq);
        xD0 = (a * asq + x) - a;
      }
    } else {
      t = x / a;
      asq = (1.0 - t) / (t + 1.0);
      vsq = asq * asq;
      xD0 = d * asq;
      old = xD0;
      asq = 2.0 * (a * asq);
      dj = 3.0;
      do {
        exitg1 = 0;
        asq *= vsq;
        xD0 += asq / dj;
        if (xD0 == old) {
          exitg1 = 1;
        } else {
          old = xD0;
          dj += 2.0;
        }
      } while (exitg1 == 0);
    }
    logpax = (-0.5 * (la + 1.8378770664093453) - stirlerr) - xD0;
    if (x > 1.0E+6) {
      old = muDoubleScalarSqrt(x);
      t = muDoubleScalarAbs(d - 1.0) / old;
      xD0 = t * t;
      if (t < 15.0) {
        dj = 0.70710678118654746 * t;
        asq = 3.97886080735226 / (dj + 3.97886080735226);
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
             asq * muDoubleScalarExp(-dj * dj) * 2.5066282746310002 *
             muDoubleScalarExp(0.5 * xD0);
        dj = (a1 * ((xD0 - 3.0) * t) - (xD0 - 4.0)) / 6.0;
        vsq = (a1 * ((xD0 * xD0 - 9.0) * xD0 + 6.0) -
               ((xD0 - 1.0) * xD0 - 6.0) * t) /
              72.0;
        asq = (a1 * (((((5.0 * xD0 + 45.0) * xD0 - 81.0) * xD0 - 315.0) * xD0 +
                      270.0) *
                     t) -
               ((((5.0 * xD0 + 40.0) * xD0 - 111.0) * xD0 - 174.0) * xD0 +
                192.0)) /
              6480.0;
      } else {
        a1 = (((3.0 - 15.0 / xD0) / xD0 + -1.0) / xD0 + 1.0) / t;
        dj = (((25.0 - 210.0 / xD0) / xD0 + -4.0) / xD0 + 1.0) / xD0;
        vsq = (((130.0 - 1750.0 / xD0) / xD0 + -11.0) / xD0 + 1.0) / (xD0 * t);
        asq =
            (((546.0 - 11368.0 / xD0) / xD0 + -26.0) / xD0 + 1.0) / (xD0 * xD0);
      }
      if (x < a - 1.0) {
        asq = a * (((a1 / old - dj / x) + vsq / (x * old)) - asq / (x * x));
        if (logpax < 709.782712893384) {
          rval = muDoubleScalarExp(logpax) * asq;
        } else {
          st.site = &ui_emlrtRSI;
          if (asq < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          rval = muDoubleScalarExp(logpax + muDoubleScalarLog(asq));
        }
      } else {
        asq = a * (((a1 / old + dj / x) + vsq / (x * old)) + asq / (x * x));
        if (logpax < 709.782712893384) {
          rval = muDoubleScalarExp(logpax) * asq;
        } else {
          st.site = &oi_emlrtRSI;
          if (asq < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          rval = muDoubleScalarExp(logpax + muDoubleScalarLog(asq));
        }
        rval = 1.0 - rval;
      }
    } else if (x < a) {
      n = 1.0;
      if (x > 2.2204460492503131E-16 * a) {
        t = x / a;
        n = 2.0;
        do {
          exitg1 = 0;
          t = x * t / (a + (n - 1.0));
          if (t < 2.2204460492503131E-16) {
            exitg1 = 1;
          } else {
            n++;
          }
        } while (exitg1 == 0);
      }
      asq = 0.0;
      i = (int32_T)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
      emlrtForLoopVectorCheckR2021a(n - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i,
                                    &r_emlrtRTEI, (emlrtCTX)sp);
      for (b_i = 0; b_i < i; b_i++) {
        asq = x * (asq + 1.0) / (a + ((n - 1.0) + -(real_T)b_i));
      }
      asq++;
      if (logpax < 709.782712893384) {
        rval = muDoubleScalarExp(logpax) * asq;
      } else {
        st.site = &li_emlrtRSI;
        if (asq < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        rval = muDoubleScalarExp(logpax + muDoubleScalarLog(asq));
      }
      if (rval > 1.0) {
        rval = 1.0;
      }
    } else {
      t = 1.0;
      n = 1.0;
      do {
        exitg1 = 0;
        d = muDoubleScalarFloor(a1);
        if (n <= d) {
          t = (a - n) * t / x;
          if (muDoubleScalarAbs(t) < 2.2204460492503131E-16) {
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
        n = muDoubleScalarFloor(a);
        dj = a - n;
        if (dj == 0.0) {
          asq = 1.0;
        } else if (dj == 0.5) {
          dj = 0.70710678118654746 * muDoubleScalarSqrt(2.0 * x);
          t = 3.97886080735226 / (dj + 3.97886080735226);
          asq =
              muDoubleScalarSqrt(3.1415926535897931 * x) *
              muDoubleScalarExp(x) *
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
                      t * muDoubleScalarExp(-dj * dj)));
          n++;
        } else {
          vsq = 1.0;
          a1 = x;
          xD0 = 0.0;
          old = 1.0;
          t = 1.0 / x;
          n = 1.0;
          asq = t;
          stirlerr = 0.0;
          while (muDoubleScalarAbs(asq - stirlerr) >
                 2.2204460492503131E-16 * asq) {
            stirlerr = asq;
            asq = n - dj;
            vsq = (a1 + vsq * asq) * t;
            xD0 = (old + xD0 * asq) * t;
            asq = n * t;
            a1 = x * vsq + asq * a1;
            old = x * xD0 + asq * old;
            t = 1.0 / a1;
            asq = old * t;
            n++;
          }
          asq *= x;
          n = muDoubleScalarFloor(a) + 1.0;
        }
      }
      i = (int32_T)(((-1.0 - (n - 1.0)) + 1.0) / -1.0);
      emlrtForLoopVectorCheckR2021a(n - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i,
                                    &q_emlrtRTEI, (emlrtCTX)sp);
      for (b_i = 0; b_i < i; b_i++) {
        asq = (a - ((n - 1.0) + -(real_T)b_i)) * asq / x + 1.0;
      }
      asq = asq * a / x;
      if (logpax < 709.782712893384) {
        rval = muDoubleScalarExp(logpax) * asq;
      } else {
        st.site = &ii_emlrtRSI;
        if (asq < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        rval = muDoubleScalarExp(logpax + muDoubleScalarLog(asq));
      }
      if (rval > 1.0) {
        rval = 1.0;
      }
      rval = 1.0 - rval;
    }
  }
  return rval;
}

real_T eml_gammainc(const emlrtStack *sp, real_T x, real_T lgap1)
{
  emlrtStack st;
  real_T dj;
  real_T old;
  real_T rval;
  real_T sqrtx;
  real_T t;
  real_T tsq;
  real_T v;
  real_T vsq;
  real_T xD0;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  if (!(x > 0.0)) {
    if (x == 0.0) {
      rval = 1.0;
    } else {
      rval = rtNaN;
    }
  } else if (muDoubleScalarIsInf(x)) {
    rval = 0.0;
  } else {
    if (muDoubleScalarAbs(0.5 - x) > 0.1 * (x + 0.5)) {
      if ((x < 1.0) && (0.5 > 1.7976931348623157E+308 * x)) {
        st.site = &si_emlrtRSI;
        if (x < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        xD0 = (-0.34657359027997264 - 0.5 * muDoubleScalarLog(x)) - 0.5;
      } else {
        v = 0.5 / x;
        st.site = &ri_emlrtRSI;
        if (v < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        v = muDoubleScalarLog(v);
        xD0 = (0.5 * v + x) - 0.5;
      }
    } else {
      t = x / 0.5;
      v = (1.0 - t) / (t + 1.0);
      vsq = v * v;
      xD0 = (0.5 - x) * v;
      old = xD0;
      t = 2.0 * (0.5 * v);
      dj = 3.0;
      do {
        exitg1 = 0;
        t *= vsq;
        xD0 += t / dj;
        if (xD0 == old) {
          exitg1 = 1;
        } else {
          old = xD0;
          dj += 2.0;
        }
      } while (exitg1 == 0);
    }
    if (x > 1.0E+6) {
      sqrtx = muDoubleScalarSqrt(x);
      t = muDoubleScalarAbs((0.5 - x) - 1.0) / sqrtx;
      tsq = t * t;
      if (t < 15.0) {
        v = 0.70710678118654746 * t;
        dj = 3.97886080735226 / (v + 3.97886080735226);
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
             dj * muDoubleScalarExp(-v * v) * 2.5066282746310002 *
             muDoubleScalarExp(0.5 * tsq);
        vsq = (dj * ((tsq - 3.0) * t) - (tsq - 4.0)) / 6.0;
        old = (dj * ((tsq * tsq - 9.0) * tsq + 6.0) -
               ((tsq - 1.0) * tsq - 6.0) * t) /
              72.0;
        v = (dj * (((((5.0 * tsq + 45.0) * tsq - 81.0) * tsq - 315.0) * tsq +
                    270.0) *
                   t) -
             ((((5.0 * tsq + 40.0) * tsq - 111.0) * tsq - 174.0) * tsq +
              192.0)) /
            6480.0;
      } else {
        dj = (((3.0 - 15.0 / tsq) / tsq + -1.0) / tsq + 1.0) / t;
        vsq = (((25.0 - 210.0 / tsq) / tsq + -4.0) / tsq + 1.0) / tsq;
        old = (((130.0 - 1750.0 / tsq) / tsq + -11.0) / tsq + 1.0) / (tsq * t);
        v = (((546.0 - 11368.0 / tsq) / tsq + -26.0) / tsq + 1.0) / (tsq * tsq);
      }
      v = 0.5 * (((dj / sqrtx + vsq / x) + old / (x * sqrtx)) + v / (x * x));
      if (-0.72579135264472727 - xD0 < 709.782712893384) {
        rval = muDoubleScalarExp(-0.72579135264472727 - xD0) * v;
      } else {
        st.site = &oi_emlrtRSI;
        if (v < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        rval = muDoubleScalarExp((-0.72579135264472727 - xD0) +
                                 muDoubleScalarLog(v));
      }
    } else if (x < 1.0) {
      v = 0.5 * -x;
      vsq = v / 1.5;
      dj = 2.0;
      do {
        exitg1 = 0;
        v = -x * v / dj;
        t = v / (dj + 0.5);
        vsq += t;
        if (muDoubleScalarAbs(t) <=
            muDoubleScalarAbs(vsq) * 2.2204460492503131E-16) {
          exitg1 = 1;
        } else {
          dj++;
        }
      } while (exitg1 == 0);
      st.site = &ni_emlrtRSI;
      if (x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      v = 0.5 * muDoubleScalarLog(x) - lgap1;
      dj = muDoubleScalarExp(v);
      if (dj - 1.0 == -1.0) {
        v = -1.0;
      } else {
        st.site = &mi_emlrtRSI;
        if (dj < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        v = (dj - 1.0) * v / muDoubleScalarLog(dj);
      }
      rval = -((vsq + v) + vsq * v);
      if (rval < 0.0) {
        rval = 0.0;
      }
    } else {
      v = 1.0;
      dj = 1.0;
      do {
        exitg1 = 0;
        i = (int32_T)muDoubleScalarFloor(x + 0.5);
        if ((int32_T)dj <= i) {
          v = (0.5 - dj) * v / x;
          if (muDoubleScalarAbs(v) < 2.2204460492503131E-16) {
            exitg1 = 1;
          } else {
            dj++;
          }
        } else {
          exitg1 = 1;
        }
      } while (exitg1 == 0);
      if ((int32_T)dj <= i) {
        v = 1.0;
      } else {
        v = 0.70710678118654746 * muDoubleScalarSqrt(2.0 * x);
        t = 3.97886080735226 / (v + 3.97886080735226);
        v = muDoubleScalarSqrt(3.1415926535897931 * x) * muDoubleScalarExp(x) *
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
                    t * muDoubleScalarExp(-v * v)));
        dj = 1.0;
      }
      i = (int32_T)(((-1.0 - (dj - 1.0)) + 1.0) / -1.0);
      emlrtForLoopVectorCheckR2021a(dj - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i,
                                    &q_emlrtRTEI, (emlrtCTX)sp);
      for (b_i = 0; b_i < i; b_i++) {
        v = (0.5 - ((dj - 1.0) + -(real_T)b_i)) * v / x + 1.0;
      }
      v = v * 0.5 / x;
      if (-0.72579135264472727 - xD0 < 709.782712893384) {
        rval = muDoubleScalarExp(-0.72579135264472727 - xD0) * v;
      } else {
        st.site = &ii_emlrtRSI;
        if (v < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        rval = muDoubleScalarExp((-0.72579135264472727 - xD0) +
                                 muDoubleScalarLog(v));
      }
      if (rval > 1.0) {
        rval = 1.0;
      }
    }
  }
  return rval;
}

/* End of code generation (eml_gammainc.c) */
