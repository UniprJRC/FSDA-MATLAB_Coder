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
#include "LTSts_wrapper_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    px_emlrtRSI =
        {
            89,                /* lineNo */
            "scalar_gammainc", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammain"
            "c.m" /* pathName */
};

static emlrtRSInfo
    qx_emlrtRSI =
        {
            91,                /* lineNo */
            "scalar_gammainc", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammain"
            "c.m" /* pathName */
};

/* Function Definitions */
creal_T scalar_gammainc(const emlrtStack *sp, real_T x, real_T a, real_T la,
                        real_T lgap1)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T b;
  real_T Iax;
  real_T d;
  real_T d1;
  real_T i;
  real_T logpax;
  real_T old;
  real_T pax_modulus;
  real_T stirlerr;
  real_T t;
  real_T term;
  int32_T b_i;
  int32_T c_i;
  int32_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!(x < 0.0)) {
    st.site = &px_emlrtRSI;
    if (!(x > 0.0)) {
      if (x == 0.0) {
        i = 0.0;
      } else {
        i = rtNaN;
      }
    } else if (muDoubleScalarIsInf(a)) {
      if (muDoubleScalarIsInf(x)) {
        i = rtNaN;
      } else {
        i = 0.0;
      }
    } else if (muDoubleScalarIsInf(x)) {
      i = 1.0;
    } else {
      i = 2.0 * a;
      if (i == muDoubleScalarFloor(i)) {
        stirlerr = dv[(int32_T)(i + 1.0) - 1];
      } else {
        stirlerr = ((lgap1 - (a + 0.5) * la) + a) - 0.91893853320467267;
      }
      d = a - x;
      d1 = a + x;
      if (muDoubleScalarAbs(d) > 0.1 * d1) {
        if (a < 2.2250738585072014E-308 * x) {
          Iax = x;
        } else if ((x < 1.0) && (a > 1.7976931348623157E+308 * x)) {
          Iax = (a * la - a * muDoubleScalarLog(x)) - a;
        } else {
          Iax = (a * muDoubleScalarLog(a / x) + x) - a;
        }
      } else {
        t = x / a;
        i = (1.0 - t) / (t + 1.0);
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
        term = muDoubleScalarSqrt(x);
        t = muDoubleScalarAbs(d - 1.0) / term;
        stirlerr = t * t;
        if (t < 15.0) {
          i = 0.70710678118654746 * t;
          Iax = 3.97886080735226 / (i + 3.97886080735226);
          pax_modulus =
              0.5 *
              ((((((((((((((((((((((0.0012710976495261409 * (Iax - 0.5) +
                                    0.00011931402283834095) *
                                       (Iax - 0.5) +
                                   -0.0039638509736051354) *
                                      (Iax - 0.5) +
                                  -0.00087077963531729586) *
                                     (Iax - 0.5) +
                                 0.0077367252831352668) *
                                    (Iax - 0.5) +
                                0.0038333512626488732) *
                                   (Iax - 0.5) +
                               -0.012722381378212275) *
                                  (Iax - 0.5) +
                              -0.013382364453346007) *
                                 (Iax - 0.5) +
                             0.016131532973325226) *
                                (Iax - 0.5) +
                            0.039097684558848406) *
                               (Iax - 0.5) +
                           0.0024936720005350331) *
                              (Iax - 0.5) +
                          -0.0838864557023002) *
                             (Iax - 0.5) +
                         -0.11946395996432542) *
                            (Iax - 0.5) +
                        0.016620792496936737) *
                           (Iax - 0.5) +
                       0.35752427444953105) *
                          (Iax - 0.5) +
                      0.80527640875291062) *
                         (Iax - 0.5) +
                     1.1890298290927332) *
                        (Iax - 0.5) +
                    1.3704021768233816) *
                       (Iax - 0.5) +
                   1.313146538310231) *
                      (Iax - 0.5) +
                  1.0792551515585667) *
                     (Iax - 0.5) +
                 0.77436819911953858) *
                    (Iax - 0.5) +
                0.49016508058531844) *
                   (Iax - 0.5) +
               0.27537474159737679) *
              Iax * muDoubleScalarExp(-i * i) * 2.5066282746310002 *
              muDoubleScalarExp(0.5 * stirlerr);
          Iax = (pax_modulus * ((stirlerr - 3.0) * t) - (stirlerr - 4.0)) / 6.0;
          old = (pax_modulus * ((stirlerr * stirlerr - 9.0) * stirlerr + 6.0) -
                 ((stirlerr - 1.0) * stirlerr - 6.0) * t) /
                72.0;
          i = (pax_modulus *
                   (((((5.0 * stirlerr + 45.0) * stirlerr - 81.0) * stirlerr -
                      315.0) *
                         stirlerr +
                     270.0) *
                    t) -
               ((((5.0 * stirlerr + 40.0) * stirlerr - 111.0) * stirlerr -
                 174.0) *
                    stirlerr +
                192.0)) /
              6480.0;
        } else {
          pax_modulus =
              (((3.0 - 15.0 / stirlerr) / stirlerr + -1.0) / stirlerr + 1.0) /
              t;
          Iax =
              (((25.0 - 210.0 / stirlerr) / stirlerr + -4.0) / stirlerr + 1.0) /
              stirlerr;
          old = (((130.0 - 1750.0 / stirlerr) / stirlerr + -11.0) / stirlerr +
                 1.0) /
                (stirlerr * t);
          i = (((546.0 - 11368.0 / stirlerr) / stirlerr + -26.0) / stirlerr +
               1.0) /
              (stirlerr * stirlerr);
        }
        i = a *
            (((pax_modulus / term + Iax / x) + old / (x * term)) + i / (x * x));
        if (logpax < 709.782712893384) {
          i *= muDoubleScalarExp(logpax);
        } else {
          b_st.site = &gx_emlrtRSI;
          if (i < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &cc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          i = muDoubleScalarExp(logpax + muDoubleScalarLog(i));
        }
        i = 1.0 - i;
      } else if ((x < a) || (x < 1.0)) {
        pax_modulus = 1.0;
        if (x > 2.2204460492503131E-16 * a) {
          Iax = x / a;
          pax_modulus = 2.0;
          do {
            exitg1 = 0;
            Iax = x * Iax / (a + (pax_modulus - 1.0));
            if (Iax < 2.2204460492503131E-16) {
              exitg1 = 1;
            } else {
              pax_modulus++;
            }
          } while (exitg1 == 0);
        }
        Iax = 0.0;
        b_i = (int32_T)(((-1.0 - (pax_modulus - 1.0)) + 1.0) / -1.0);
        emlrtForLoopVectorCheckR2021a(pax_modulus - 1.0, -1.0, 1.0,
                                      mxDOUBLE_CLASS, b_i, &dc_emlrtRTEI, &st);
        for (c_i = 0; c_i < b_i; c_i++) {
          Iax = x * (Iax + 1.0) / (a + ((pax_modulus - 1.0) + -(real_T)c_i));
        }
        Iax++;
        if (logpax < 709.782712893384) {
          i = muDoubleScalarExp(logpax) * Iax;
        } else {
          b_st.site = &dx_emlrtRSI;
          if (Iax < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &cc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          i = muDoubleScalarExp(logpax + muDoubleScalarLog(Iax));
        }
        if (i > 1.0) {
          i = 1.0;
        }
      } else {
        Iax = 1.0;
        pax_modulus = 1.0;
        do {
          exitg1 = 0;
          d = muDoubleScalarFloor(d1);
          if (pax_modulus <= d) {
            Iax = (a - pax_modulus) * Iax / x;
            if (muDoubleScalarAbs(Iax) < 2.2204460492503131E-16) {
              exitg1 = 1;
            } else {
              pax_modulus++;
            }
          } else {
            exitg1 = 1;
          }
        } while (exitg1 == 0);
        if (pax_modulus <= d) {
          i = 1.0;
        } else if (a - muDoubleScalarFloor(a) == 0.0) {
          i = 1.0;
          pax_modulus = 1.0;
        } else {
          i = 0.70710678118654746 * muDoubleScalarSqrt(2.0 * x);
          t = 3.97886080735226 / (i + 3.97886080735226);
          i = muDoubleScalarSqrt(3.1415926535897931 * x) *
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
                      t * muDoubleScalarExp(-i * i)));
          pax_modulus = 1.0;
        }
        b_i = (int32_T)(((-1.0 - (pax_modulus - 1.0)) + 1.0) / -1.0);
        emlrtForLoopVectorCheckR2021a(pax_modulus - 1.0, -1.0, 1.0,
                                      mxDOUBLE_CLASS, b_i, &ec_emlrtRTEI, &st);
        for (c_i = 0; c_i < b_i; c_i++) {
          i = (a - ((pax_modulus - 1.0) + -(real_T)c_i)) * i / x + 1.0;
        }
        i = i * a / x;
        if (logpax < 709.782712893384) {
          i *= muDoubleScalarExp(logpax);
        } else {
          b_st.site = &ax_emlrtRSI;
          if (i < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &cc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          i = muDoubleScalarExp(logpax + muDoubleScalarLog(i));
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
    st.site = &qx_emlrtRSI;
    if (x == rtMinusInf) {
      Iax = rtNaN;
      i = rtNaN;
    } else {
      pax_modulus =
          muDoubleScalarExp((-x + 0.5 * muDoubleScalarLog(-x)) - lgap1);
      Iax = 1.0;
      term = 1.0;
      i = 1.0;
      do {
        exitg1 = 0;
        term = term * x / (i + 0.5);
        Iax += term;
        d = muDoubleScalarAbs(Iax);
        if (muDoubleScalarAbs(term) <= 2.2204460492503131E-16 * d) {
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
