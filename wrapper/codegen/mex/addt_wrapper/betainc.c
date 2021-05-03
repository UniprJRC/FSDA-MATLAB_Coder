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
#include "addt_wrapper_data.h"
#include "eml_betainc.h"
#include "eml_gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo oh_emlrtRSI = {
    22,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo ph_emlrtRSI = {
    33,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo qh_emlrtRSI = {
    37,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo rh_emlrtRSI = {
    40,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo sh_emlrtRSI = {
    98,        /* lineNo */
    "betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pathName
                                                                            */
};

static emlrtRSInfo xh_emlrtRSI = {
    128,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo yh_emlrtRSI = {
    126,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo ai_emlrtRSI = {
    125,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo bi_emlrtRSI = {
    118,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    115,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    114,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    102,           /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo fi_emlrtRSI = {
    97,            /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo gi_emlrtRSI = {
    92,            /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRSInfo hi_emlrtRSI = {
    89,            /* lineNo */
    "eml_betainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "betainc.m" /* pathName */
};

static emlrtRTEInfo o_emlrtRTEI = {
    117,                    /* lineNo */
    9,                      /* colNo */
    "check_betainc_inputs", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\betainc.m" /* pName
                                                                            */
};

/* Function Definitions */
creal_T b_betainc(const emlrtStack *sp, real_T x, real_T b)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal_T y;
  real_T glna1;
  real_T glnb1;
  real_T log1mx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &oh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((!(0.0 <= x)) || (!(x <= 1.0))) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:MATLAB:betainc_XOutOfRange",
                                  "Coder:MATLAB:betainc_XOutOfRange", 0);
  }
  glna1 = 0.5;
  st.site = &ph_emlrtRSI;
  gammaln(&st, &glna1);
  glnb1 = b;
  st.site = &qh_emlrtRSI;
  gammaln(&st, &glnb1);
  log1mx = b + 0.5;
  st.site = &rh_emlrtRSI;
  gammaln(&st, &log1mx);
  glna1 = (glna1 + glnb1) - log1mx;
  st.site = &sh_emlrtRSI;
  if ((0.0 < x) && (x < 1.0)) {
    if (muDoubleScalarIsInf(b)) {
      glna1 = 0.0;
    } else {
      b_st.site = &hi_emlrtRSI;
      glnb1 = muDoubleScalarLog(x);
      if (1.0 - x != 1.0) {
        b_st.site = &gi_emlrtRSI;
        log1mx = muDoubleScalarLog(1.0 - x) * (-x / ((1.0 - x) - 1.0));
      } else {
        log1mx = -x;
      }
      if (x < 1.5 / ((b + 0.5) + 2.0)) {
        b_st.site = &fi_emlrtRSI;
        glna1 = 1.0 - muDoubleScalarExp(
                          ((0.5 * glnb1 + b * log1mx) - -0.69314718055994529) -
                          glna1) *
                          betainc_cf(x, 0.5, b);
      } else {
        b_st.site = &ei_emlrtRSI;
        if (b < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        glna1 =
            muDoubleScalarExp(
                ((0.5 * glnb1 + b * log1mx) - muDoubleScalarLog(b)) - glna1) *
            betainc_cf(1.0 - x, b, 0.5);
      }
      if (!(glna1 == glna1)) {
        b_st.site = &di_emlrtRSI;
        glna1 = b * x;
        c_st.site = &hg_emlrtRSI;
        glnb1 = muDoubleScalarPower(glna1, 0.33333333333333331);
        if (glna1 < 0.0) {
          emlrtErrorWithMessageIdR2018a(&c_st, &m_emlrtRTEI,
                                        "Coder:toolbox:power_domainError",
                                        "Coder:toolbox:power_domainError", 0);
        }
        b_st.site = &ci_emlrtRSI;
        glna1 = muDoubleScalarPower(0.5 * (1.0 - x), 0.33333333333333331);
        if (((b + 0.5) - 1.0) * (1.0 - x) > 0.8) {
          b_st.site = &bi_emlrtRSI;
          log1mx = glnb1 * glnb1 / b + glna1 * glna1 / 0.5;
          if (log1mx < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          log1mx = muDoubleScalarSqrt(log1mx);
          log1mx =
              0.70710678118654746 *
              (3.0 *
               ((1.0 - 1.0 / (9.0 * b)) * glnb1 - 0.77777777777777779 * glna1) /
               log1mx);
          glna1 =
              3.97886080735226 / (muDoubleScalarAbs(log1mx) + 3.97886080735226);
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
                  glna1 * muDoubleScalarExp(-log1mx * log1mx);
          if (log1mx < 0.0) {
            glna1 = 1.0 - glna1;
          }
        } else {
          b_st.site = &ai_emlrtRSI;
          if (b < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          glna1 = b;
          b_st.site = &yh_emlrtRSI;
          gammaln(&b_st, &glna1);
          b_st.site = &xh_emlrtRSI;
          glna1 = b_eml_gammainc(
              &b_st,
              0.5 * (((b + 0.5) - 1.0) * (3.0 - x) - (b - 1.0)) * (1.0 - x), b,
              muDoubleScalarLog(b), glna1);
        }
      }
    }
  } else if (x == 0.0) {
    glna1 = 1.0;
  } else {
    glna1 = 0.0;
  }
  y.re = glna1;
  y.im = 0.0;
  return y;
}

creal_T betainc(const emlrtStack *sp, real_T x, real_T a)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal_T y;
  real_T b_x;
  real_T glna1;
  real_T glnb1;
  real_T log1mx;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &oh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((!(0.0 <= x)) || (!(x <= 1.0))) {
    emlrtErrorWithMessageIdR2018a(&st, &o_emlrtRTEI,
                                  "Coder:MATLAB:betainc_XOutOfRange",
                                  "Coder:MATLAB:betainc_XOutOfRange", 0);
  }
  glna1 = a;
  st.site = &ph_emlrtRSI;
  gammaln(&st, &glna1);
  glnb1 = 0.5;
  st.site = &qh_emlrtRSI;
  gammaln(&st, &glnb1);
  log1mx = a + 0.5;
  st.site = &rh_emlrtRSI;
  gammaln(&st, &log1mx);
  glna1 = (glna1 + glnb1) - log1mx;
  st.site = &sh_emlrtRSI;
  if ((0.0 < x) && (x < 1.0)) {
    if (muDoubleScalarIsInf(a)) {
      glna1 = 0.0;
    } else {
      b_st.site = &hi_emlrtRSI;
      glnb1 = muDoubleScalarLog(x);
      if (1.0 - x != 1.0) {
        b_st.site = &gi_emlrtRSI;
        log1mx = muDoubleScalarLog(1.0 - x) * (-x / ((1.0 - x) - 1.0));
      } else {
        log1mx = -x;
      }
      if (x < (a + 1.0) / ((a + 0.5) + 2.0)) {
        b_st.site = &fi_emlrtRSI;
        if (a < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &p_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
        }
        glna1 =
            muDoubleScalarExp(
                ((a * glnb1 + 0.5 * log1mx) - muDoubleScalarLog(a)) - glna1) *
            betainc_cf(x, a, 0.5);
      } else {
        b_st.site = &ei_emlrtRSI;
        glna1 = 1.0 - muDoubleScalarExp(
                          ((a * glnb1 + 0.5 * log1mx) - -0.69314718055994529) -
                          glna1) *
                          betainc_cf(1.0 - x, 0.5, a);
      }
      if (!(glna1 == glna1)) {
        b_st.site = &di_emlrtRSI;
        glnb1 = muDoubleScalarPower(0.5 * x, 0.33333333333333331);
        b_st.site = &ci_emlrtRSI;
        glna1 = a * (1.0 - x);
        c_st.site = &hg_emlrtRSI;
        log1mx = muDoubleScalarPower(glna1, 0.33333333333333331);
        if (glna1 < 0.0) {
          emlrtErrorWithMessageIdR2018a(&c_st, &m_emlrtRTEI,
                                        "Coder:toolbox:power_domainError",
                                        "Coder:toolbox:power_domainError", 0);
        }
        if (((a + 0.5) - 1.0) * (1.0 - x) > 0.8) {
          b_st.site = &bi_emlrtRSI;
          b_x = glnb1 * glnb1 / 0.5 + log1mx * log1mx / a;
          if (b_x < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
          }
          b_x = muDoubleScalarSqrt(b_x);
          b_x = 0.70710678118654746 * -(3.0 *
                                        (0.77777777777777779 * glnb1 -
                                         (1.0 - 1.0 / (9.0 * a)) * log1mx) /
                                        b_x);
          glna1 =
              3.97886080735226 / (muDoubleScalarAbs(b_x) + 3.97886080735226);
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
                  glna1 * muDoubleScalarExp(-b_x * b_x);
          if (b_x < 0.0) {
            glna1 = 1.0 - glna1;
          }
        } else {
          b_st.site = &ai_emlrtRSI;
          glna1 = 0.5;
          b_st.site = &yh_emlrtRSI;
          gammaln(&b_st, &glna1);
          b_st.site = &xh_emlrtRSI;
          glna1 = eml_gammainc(
              &b_st, 0.5 * (((a + 0.5) - 1.0) * (3.0 - x) - -0.5) * (1.0 - x),
              glna1);
        }
      }
    }
  } else if (x == 0.0) {
    glna1 = 0.0;
  } else {
    glna1 = 1.0;
  }
  y.re = glna1;
  y.im = 0.0;
  return y;
}

/* End of code generation (betainc.c) */
