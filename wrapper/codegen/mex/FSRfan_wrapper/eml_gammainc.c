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
#include "FSRfan_wrapper_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo pn_emlrtRSI = {
    242,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

static emlrtRSInfo qn_emlrtRSI = {
    220,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

/* Function Definitions */
real_T eml_gammainc(const emlrtStack *sp, real_T x, real_T lgap1,
                    boolean_T upper)
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
      rval = upper;
    } else {
      rval = rtNaN;
    }
  } else if (muDoubleScalarIsInf(x)) {
    rval = 1.0 - (real_T)upper;
  } else {
    if (muDoubleScalarAbs(0.5 - x) > 0.1 * (x + 0.5)) {
      if (0.5 < 2.2250738585072014E-308 * x) {
        xD0 = x;
      } else if ((x < 1.0) && (0.5 > 1.7976931348623157E+308 * x)) {
        st.site = &vn_emlrtRSI;
        if (x < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        xD0 = (-0.34657359027997264 - 0.5 * muDoubleScalarLog(x)) - 0.5;
      } else {
        v = 0.5 / x;
        st.site = &un_emlrtRSI;
        if (v < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
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
        st.site = &rn_emlrtRSI;
        if (v < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        rval = muDoubleScalarExp((-0.72579135264472727 - xD0) +
                                 muDoubleScalarLog(v));
      }
      if (!upper) {
        rval = 1.0 - rval;
      }
    } else if (upper && (x < 1.0)) {
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
      st.site = &qn_emlrtRSI;
      if (x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
      }
      v = 0.5 * muDoubleScalarLog(x) - lgap1;
      dj = muDoubleScalarExp(v);
      if (!(dj == 1.0)) {
        if (dj - 1.0 == -1.0) {
          v = -1.0;
        } else {
          st.site = &pn_emlrtRSI;
          if (dj < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          v = (dj - 1.0) * v / muDoubleScalarLog(dj);
        }
      }
      rval = -((vsq + v) + vsq * v);
      if (rval < 0.0) {
        rval = 0.0;
      }
    } else if ((x < 0.5) || (x < 1.0)) {
      dj = 1.0;
      if (x > 1.1102230246251565E-16) {
        v = x / 0.5;
        dj = 2.0;
        do {
          exitg1 = 0;
          v = x * v / ((dj - 1.0) + 0.5);
          if (v < 2.2204460492503131E-16) {
            exitg1 = 1;
          } else {
            dj++;
          }
        } while (exitg1 == 0);
      }
      v = 0.0;
      i = (int32_T)(((-1.0 - (dj - 1.0)) + 1.0) / -1.0);
      emlrtForLoopVectorCheckR2021a(dj - 1.0, -1.0, 1.0, mxDOUBLE_CLASS, i,
                                    &lb_emlrtRTEI, (emlrtCTX)sp);
      for (b_i = 0; b_i < i; b_i++) {
        v = x * (v + 1.0) / (((dj - 1.0) + -(real_T)b_i) + 0.5);
      }
      v++;
      if (-0.72579135264472727 - xD0 < 709.782712893384) {
        rval = muDoubleScalarExp(-0.72579135264472727 - xD0) * v;
      } else {
        st.site = &on_emlrtRSI;
        if (v < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        rval = muDoubleScalarExp((-0.72579135264472727 - xD0) +
                                 muDoubleScalarLog(v));
      }
      if (rval > 1.0) {
        rval = 1.0;
      }
      if (upper) {
        rval = 1.0 - rval;
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
                                    &mb_emlrtRTEI, (emlrtCTX)sp);
      for (b_i = 0; b_i < i; b_i++) {
        v = (0.5 - ((dj - 1.0) + -(real_T)b_i)) * v / x + 1.0;
      }
      v = v * 0.5 / x;
      if (-0.72579135264472727 - xD0 < 709.782712893384) {
        rval = muDoubleScalarExp(-0.72579135264472727 - xD0) * v;
      } else {
        st.site = &ln_emlrtRSI;
        if (v < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &jb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        rval = muDoubleScalarExp((-0.72579135264472727 - xD0) +
                                 muDoubleScalarLog(v));
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
