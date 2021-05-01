/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tinv.c
 *
 * Code generation for function 'tinv'
 *
 */

/* Include files */
#include "tinv.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "betaincinv.h"
#include "erfcinv.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo cgb_emlrtRSI = {
    48,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo dgb_emlrtRSI = {
    47,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo egb_emlrtRSI = {
    46,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo fgb_emlrtRSI = {
    44,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo ggb_emlrtRSI = {
    43,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo hgb_emlrtRSI = {
    42,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo igb_emlrtRSI = {
    41,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo jgb_emlrtRSI = {
    38,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo kgb_emlrtRSI = {
    35,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo lgb_emlrtRSI = {
    32,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo dlb_emlrtRSI = {
    10,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo elb_emlrtRSI = {
    29,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtBCInfo veb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    40,     /* lineNo */
    24,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo web_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    14,     /* lineNo */
    32,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo xeb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    13,     /* lineNo */
    32,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo yeb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    52,     /* lineNo */
    9,      /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo afb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    18,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo bfb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    20,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo cfb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    22,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo dfb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    38,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo efb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    35,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ffb_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    45,     /* lineNo */
    17,     /* colNo */
    "",     /* aName */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtRTEInfo heb_emlrtRTEI = {
    10,     /* lineNo */
    5,      /* colNo */
    "tinv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pName */
};

/* Function Definitions */
void b_tinv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T dc;
  real_T xn3;
  real_T xn5;
  real_T xn7;
  int32_T z_size[2];
  int32_T csz_idx_0;
  int32_T csz_idx_1;
  int32_T i;
  int32_T k;
  boolean_T b_p;
  boolean_T c_p;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dlb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &cbb_emlrtRSI;
  if (p->size[0] <= v->size[0]) {
    csz_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v->size[0];
  }
  if (p->size[1] <= v->size[1]) {
    csz_idx_1 = p->size[1];
  } else {
    csz_idx_1 = v->size[1];
  }
  if (p->size[0] <= v->size[0]) {
    z_size[0] = p->size[0];
  } else {
    z_size[0] = v->size[0];
  }
  if (p->size[1] <= v->size[1]) {
    z_size[1] = p->size[1];
  } else {
    z_size[1] = v->size[1];
  }
  b_p = true;
  c_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (z_size[k] != p->size[k]) {
      c_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  if (c_p) {
    c_p = true;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k < 2)) {
      if (z_size[k] != v->size[k]) {
        c_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
    if (!c_p) {
      b_p = false;
    }
  } else {
    b_p = false;
  }
  if (!b_p) {
    emlrtErrorWithMessageIdR2018a(&b_st, &s_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(&st, x, i, &heb_emlrtRTEI);
  i = csz_idx_0 * csz_idx_1;
  for (k = 0; k < i; k++) {
    csz_idx_0 = p->size[0] * p->size[1];
    if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &xeb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    csz_idx_0 = v->size[0] * v->size[1];
    if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &web_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((v->data[k] > 0.0) && (0.0 <= p->data[k]) && (p->data[k] <= 1.0)) {
      if (p->data[k] == 0.0) {
        csz_idx_0 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &afb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = rtMinusInf;
      } else if (p->data[k] == 1.0) {
        csz_idx_0 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &bfb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = rtInf;
      } else if (v->data[k] == 1.0) {
        csz_idx_0 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &cfb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarTan(3.1415926535897931 * (p->data[k] - 0.5));
      } else if (v->data[k] < 1000.0) {
        xn3 = muDoubleScalarAbs(p->data[k] - 0.5);
        if (xn3 < 0.25) {
          st.site = &elb_emlrtRSI;
          dc = b_betaincinv(&st, 2.0 * xn3, 0.5, v->data[k] / 2.0);
          xn5 = dc.re;
          xn3 = 1.0 - dc.re;
        } else {
          st.site = &lgb_emlrtRSI;
          dc = betaincinv(&st, 2.0 * xn3, v->data[k] / 2.0, 0.5);
          xn3 = dc.re;
          xn5 = 1.0 - dc.re;
        }
        st.site = &kgb_emlrtRSI;
        xn3 = v->data[k] * (xn5 / xn3);
        if (xn3 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &ac_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        xn3 = muDoubleScalarSqrt(xn3);
        csz_idx_0 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &efb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarSign(p->data[k] - 0.5) * xn3;
      } else {
        st.site = &jgb_emlrtRSI;
        if ((p->data[k] >= 0.0) && (p->data[k] <= 1.0)) {
          csz_idx_0 = x->size[0] * x->size[1];
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &dfb_emlrtBCI, &st);
          }
          b_st.site = &seb_emlrtRSI;
          x->data[k] = -1.4142135623730951 * erfcinv(&b_st, 2.0 * p->data[k]);
        } else {
          csz_idx_0 = x->size[0] * x->size[1];
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &dfb_emlrtBCI, &st);
          }
          x->data[k] = rtNaN;
        }
        if (v->data[k] < 6.6457388829771584E+75) {
          csz_idx_0 = x->size[0] * x->size[1];
          if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &veb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          st.site = &igb_emlrtRSI;
          xn3 = muDoubleScalarPower(x->data[k], 3.0);
          st.site = &hgb_emlrtRSI;
          xn5 = muDoubleScalarPower(x->data[k], 5.0);
          st.site = &ggb_emlrtRSI;
          xn7 = muDoubleScalarPower(x->data[k], 7.0);
          st.site = &fgb_emlrtRSI;
          st.site = &egb_emlrtRSI;
          st.site = &dgb_emlrtRSI;
          st.site = &cgb_emlrtRSI;
          csz_idx_0 = x->size[0] * x->size[1];
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &ffb_emlrtBCI, (emlrtCTX)sp);
          }
          x->data[k] =
              (((x->data[k] + (xn3 + x->data[k]) / (4.0 * v->data[k])) +
                ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x->data[k]) /
                    (96.0 * (v->data[k] * v->data[k]))) +
               (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) - 15.0 * x->data[k]) /
                   (384.0 * muDoubleScalarPower(v->data[k], 3.0))) +
              ((((79.0 * muDoubleScalarPower(x->data[k], 9.0) + 776.0 * xn7) +
                 1482.0 * xn5) -
                1920.0 * xn3) -
               945.0 * x->data[k]) /
                  (92160.0 * muDoubleScalarPower(v->data[k], 4.0));
        }
      }
    } else {
      csz_idx_0 = x->size[0] * x->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                      &yeb_emlrtBCI, (emlrtCTX)sp);
      }
      x->data[k] = rtNaN;
    }
  }
}

real_T tinv(const emlrtStack *sp, real_T v)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T dc;
  real_T x;
  real_T xn3;
  real_T xn5;
  real_T xn7;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (v > 0.0) {
    if (v == 1.0) {
      x = 25.451699579357186;
    } else if (v < 1000.0) {
      st.site = &lgb_emlrtRSI;
      dc = betaincinv(&st, 0.97500000000000009, v / 2.0, 0.5);
      st.site = &kgb_emlrtRSI;
      x = v * ((1.0 - dc.re) / dc.re);
      if (x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &ac_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      x = muDoubleScalarSqrt(x);
    } else {
      st.site = &jgb_emlrtRSI;
      b_st.site = &seb_emlrtRSI;
      x = -1.4142135623730951 * erfcinv(&b_st, 1.975);
      if (v < 6.6457388829771584E+75) {
        st.site = &igb_emlrtRSI;
        xn3 = muDoubleScalarPower(x, 3.0);
        st.site = &hgb_emlrtRSI;
        xn5 = muDoubleScalarPower(x, 5.0);
        st.site = &ggb_emlrtRSI;
        xn7 = muDoubleScalarPower(x, 7.0);
        st.site = &fgb_emlrtRSI;
        st.site = &egb_emlrtRSI;
        st.site = &dgb_emlrtRSI;
        st.site = &cgb_emlrtRSI;
        x = (((x + (xn3 + x) / (4.0 * v)) +
              ((5.0 * xn5 + 16.0 * xn3) + 3.0 * x) / (96.0 * (v * v))) +
             (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) - 15.0 * x) /
                 (384.0 * muDoubleScalarPower(v, 3.0))) +
            ((((79.0 * muDoubleScalarPower(x, 9.0) + 776.0 * xn7) +
               1482.0 * xn5) -
              1920.0 * xn3) -
             945.0 * x) /
                (92160.0 * muDoubleScalarPower(v, 4.0));
      }
    }
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (tinv.c) */
