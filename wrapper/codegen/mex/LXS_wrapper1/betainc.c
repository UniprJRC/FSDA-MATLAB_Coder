/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * betainc.c
 *
 * Code generation for function 'betainc'
 *
 */

/* Include files */
#include "betainc.h"
#include "LXS_wrapper1_data.h"
#include "eml_betainc.h"
#include "eml_gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo gp_emlrtRSI = {
    22,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo hp_emlrtRSI = {
    33,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo ip_emlrtRSI = {
    37,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo jp_emlrtRSI = {
    40,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo kp_emlrtRSI = {
    98,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

/* Function Definitions */
creal_T betainc(const emlrtStack *sp, real_T a, real_T b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal_T y;
  real_T glna1;
  real_T glnb1;
  real_T w2;
  real_T x;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gp_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  glna1 = a;
  st.site = &hp_emlrtRSI;
  gammaln(&st, &glna1);
  glnb1 = b;
  st.site = &ip_emlrtRSI;
  gammaln(&st, &glnb1);
  x = a + b;
  w2 = x;
  st.site = &jp_emlrtRSI;
  gammaln(&st, &w2);
  glna1 = (glna1 + glnb1) - w2;
  st.site = &kp_emlrtRSI;
  if (a == 0.0) {
    if (b > 0.0) {
      glna1 = 1.0;
    } else {
      glna1 = rtNaN;
    }
  } else if (b == 0.0) {
    glna1 = 0.0;
  } else if (muDoubleScalarIsInf(a)) {
    if (!muDoubleScalarIsInf(b)) {
      glna1 = 0.0;
    } else {
      glna1 = rtNaN;
    }
  } else if (muDoubleScalarIsInf(b)) {
    glna1 = 1.0;
  } else {
    guard1 = false;
    if (x < 1.0E+7) {
      b_st.site = &up_emlrtRSI;
      b_st.site = &tp_emlrtRSI;
      if (0.5 < (a + 1.0) / (x + 2.0)) {
        b_st.site = &sp_emlrtRSI;
        if (a < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        glna1 = muDoubleScalarExp(
                    ((a * -0.69314718055994529 + b * -0.69314718055994529) -
                     muDoubleScalarLog(a)) -
                    glna1) *
                betainc_cf(0.5, a, b);
      } else {
        b_st.site = &rp_emlrtRSI;
        if (b < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        glna1 = 1.0 - muDoubleScalarExp(((a * -0.69314718055994529 +
                                          b * -0.69314718055994529) -
                                         muDoubleScalarLog(b)) -
                                        glna1) *
                          betainc_cf(0.5, b, a);
      }
      if (!(glna1 == glna1)) {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      b_st.site = &qp_emlrtRSI;
      glna1 = b * 0.5;
      c_st.site = &dl_emlrtRSI;
      glnb1 = muDoubleScalarPower(glna1, 0.33333333333333331);
      if (glna1 < 0.0) {
        emlrtErrorWithMessageIdR2018a(&c_st, &sb_emlrtRTEI,
                                      "Coder:toolbox:power_domainError",
                                      "Coder:toolbox:power_domainError", 0);
      }
      b_st.site = &pp_emlrtRSI;
      glna1 = a * 0.5;
      c_st.site = &dl_emlrtRSI;
      w2 = muDoubleScalarPower(glna1, 0.33333333333333331);
      if (glna1 < 0.0) {
        emlrtErrorWithMessageIdR2018a(&c_st, &sb_emlrtRTEI,
                                      "Coder:toolbox:power_domainError",
                                      "Coder:toolbox:power_domainError", 0);
      }
      if ((x - 1.0) * 0.5 > 0.8) {
        b_st.site = &op_emlrtRSI;
        x = glnb1 * glnb1 / b + w2 * w2 / a;
        if (x < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &tb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        x = muDoubleScalarSqrt(x);
        x = 0.70710678118654746 *
            -(3.0 *
              ((1.0 - 1.0 / (9.0 * b)) * glnb1 - (1.0 - 1.0 / (9.0 * a)) * w2) /
              x);
        glna1 = 3.97886080735226 / (muDoubleScalarAbs(x) + 3.97886080735226);
        glna1 = 0.5 *
                ((((((((((((((((((((((0.0012710976495261409 * (glna1 - 0.5) +
                                      0.00011931402283834095) *
                                         (glna1 - 0.5) +
                                     -0.0039638509736051354) *
                                        (glna1 - 0.5) +
                                    -0.00087077963531729586) *
                                       (glna1 - 0.5) +
                                   0.0077367252831352668) *
                                      (glna1 - 0.5) +
                                  0.0038333512626488732) *
                                     (glna1 - 0.5) +
                                 -0.012722381378212275) *
                                    (glna1 - 0.5) +
                                -0.013382364453346007) *
                                   (glna1 - 0.5) +
                               0.016131532973325226) *
                                  (glna1 - 0.5) +
                              0.039097684558848406) *
                                 (glna1 - 0.5) +
                             0.0024936720005350331) *
                                (glna1 - 0.5) +
                            -0.0838864557023002) *
                               (glna1 - 0.5) +
                           -0.11946395996432542) *
                              (glna1 - 0.5) +
                          0.016620792496936737) *
                             (glna1 - 0.5) +
                         0.35752427444953105) *
                            (glna1 - 0.5) +
                        0.80527640875291062) *
                           (glna1 - 0.5) +
                       1.1890298290927332) *
                          (glna1 - 0.5) +
                      1.3704021768233816) *
                         (glna1 - 0.5) +
                     1.313146538310231) *
                        (glna1 - 0.5) +
                    1.0792551515585667) *
                       (glna1 - 0.5) +
                   0.77436819911953858) *
                      (glna1 - 0.5) +
                  0.49016508058531844) *
                     (glna1 - 0.5) +
                 0.27537474159737679) *
                glna1 * muDoubleScalarExp(-x * x);
        if (x < 0.0) {
          glna1 = 1.0 - glna1;
        }
      } else {
        b_st.site = &np_emlrtRSI;
        if (b < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &rb_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        glna1 = b;
        b_st.site = &mp_emlrtRSI;
        gammaln(&b_st, &glna1);
        b_st.site = &lp_emlrtRSI;
        glna1 = c_eml_gammainc(&b_st,
                               0.5 * (((a + b) - 1.0) * 2.5 - (b - 1.0)) * 0.5,
                               b, muDoubleScalarLog(b), glna1);
      }
    }
  }
  y.re = glna1;
  y.im = 0.0;
  return y;
}

/* End of code generation (betainc.c) */
