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
static emlrtRSInfo igb_emlrtRSI = {
    48,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo jgb_emlrtRSI = {
    47,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo kgb_emlrtRSI = {
    46,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo lgb_emlrtRSI = {
    44,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo mgb_emlrtRSI = {
    43,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo ngb_emlrtRSI = {
    42,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo ogb_emlrtRSI = {
    41,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo pgb_emlrtRSI = {
    38,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo qgb_emlrtRSI = {
    35,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo rgb_emlrtRSI = {
    32,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo slb_emlrtRSI = {
    10,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtRSInfo tlb_emlrtRSI = {
    29,     /* lineNo */
    "tinv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tinv.m" /* pathName
                                                                      */
};

static emlrtBCInfo sfb_emlrtBCI = {
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

static emlrtBCInfo tfb_emlrtBCI = {
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

static emlrtBCInfo ufb_emlrtBCI = {
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

static emlrtBCInfo vfb_emlrtBCI = {
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

static emlrtBCInfo wfb_emlrtBCI = {
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

static emlrtBCInfo xfb_emlrtBCI = {
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

static emlrtBCInfo yfb_emlrtBCI = {
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

static emlrtBCInfo agb_emlrtBCI = {
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

static emlrtBCInfo bgb_emlrtBCI = {
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

static emlrtBCInfo cgb_emlrtBCI = {
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

static emlrtRTEInfo bgb_emlrtRTEI = {
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
  st.site = &slb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &jbb_emlrtRSI;
  if (p->size[0] <= v->size[0]) {
    csz_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v->size[0];
  }
  if (p->size[1] <= v->size[1]) {
    csz_idx_1 = p->size[1];
  } else {
    csz_idx_1 = 0;
  }
  if (p->size[0] <= v->size[0]) {
    z_size[0] = p->size[0];
  } else {
    z_size[0] = v->size[0];
  }
  if (p->size[1] <= v->size[1]) {
    z_size[1] = p->size[1];
  } else {
    z_size[1] = 0;
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
    emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = csz_idx_1;
  emxEnsureCapacity_real_T(&st, x, i, &bgb_emlrtRTEI);
  i = csz_idx_0 * csz_idx_1;
  for (k = 0; k < i; k++) {
    csz_idx_0 = p->size[0] * p->size[1];
    if (k + 1 > csz_idx_0) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &ufb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    csz_idx_0 = v->size[0] * v->size[1];
    if (k + 1 > csz_idx_0) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &tfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((v->data[k] > 0.0) && (0.0 <= p->data[k]) && (p->data[k] <= 1.0)) {
      if (p->data[k] == 0.0) {
        csz_idx_0 = x->size[0] * x->size[1];
        if (k + 1 > csz_idx_0) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &wfb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        x->data[k] = rtMinusInf;
      } else if (p->data[k] == 1.0) {
        csz_idx_0 = x->size[0] * x->size[1];
        if (k + 1 > csz_idx_0) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &xfb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        x->data[k] = rtInf;
      } else if (v->data[k] == 1.0) {
        csz_idx_0 = x->size[0] * x->size[1];
        if (k + 1 > csz_idx_0) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &yfb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarTan(3.1415926535897931 * (p->data[k] - 0.5));
      } else if (v->data[k] < 1000.0) {
        xn3 = muDoubleScalarAbs(p->data[k] - 0.5);
        if (xn3 < 0.25) {
          st.site = &tlb_emlrtRSI;
          dc = b_betaincinv(&st, 2.0 * xn3, 0.5, v->data[k] / 2.0);
          xn5 = dc.re;
          xn3 = 1.0 - dc.re;
        } else {
          st.site = &rgb_emlrtRSI;
          dc = betaincinv(&st, 2.0 * xn3, v->data[k] / 2.0, 0.5);
          xn3 = dc.re;
          xn5 = 1.0 - dc.re;
        }
        st.site = &qgb_emlrtRSI;
        xn3 = v->data[k] * (xn5 / xn3);
        if (xn3 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        xn3 = muDoubleScalarSqrt(xn3);
        csz_idx_0 = x->size[0] * x->size[1];
        if (k + 1 > csz_idx_0) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &bgb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarSign(p->data[k] - 0.5) * xn3;
      } else {
        st.site = &pgb_emlrtRSI;
        if ((p->data[k] >= 0.0) && (p->data[k] <= 1.0)) {
          csz_idx_0 = x->size[0] * x->size[1];
          if (k + 1 > csz_idx_0) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &agb_emlrtBCI,
                                          &st);
          }
          b_st.site = &afb_emlrtRSI;
          x->data[k] = -1.4142135623730951 * erfcinv(&b_st, 2.0 * p->data[k]);
        } else {
          csz_idx_0 = x->size[0] * x->size[1];
          if (k + 1 > csz_idx_0) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &agb_emlrtBCI,
                                          &st);
          }
          x->data[k] = rtNaN;
        }
        if (v->data[k] < 6.6457388829771584E+75) {
          csz_idx_0 = x->size[0] * x->size[1];
          if (k + 1 > csz_idx_0) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &sfb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          st.site = &ogb_emlrtRSI;
          xn3 = muDoubleScalarPower(x->data[k], 3.0);
          st.site = &ngb_emlrtRSI;
          xn5 = muDoubleScalarPower(x->data[k], 5.0);
          st.site = &mgb_emlrtRSI;
          xn7 = muDoubleScalarPower(x->data[k], 7.0);
          st.site = &lgb_emlrtRSI;
          st.site = &kgb_emlrtRSI;
          st.site = &jgb_emlrtRSI;
          st.site = &igb_emlrtRSI;
          csz_idx_0 = x->size[0] * x->size[1];
          if (k + 1 > csz_idx_0) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &cgb_emlrtBCI,
                                          (emlrtCTX)sp);
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
      if (k + 1 > csz_idx_0) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &vfb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      x->data[k] = rtNaN;
    }
  }
}

void c_tinv(const emlrtStack *sp, const emxArray_real_T *p,
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
  int32_T i;
  int32_T k;
  boolean_T b_p;
  boolean_T c_p;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &slb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &jbb_emlrtRSI;
  if (p->size[0] <= v->size[0]) {
    csz_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v->size[0];
  }
  if (p->size[0] <= v->size[0]) {
    z_size[0] = p->size[0];
  } else {
    z_size[0] = v->size[0];
  }
  z_size[1] = 7;
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
    emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = 7;
  emxEnsureCapacity_real_T(&st, x, i, &bgb_emlrtRTEI);
  i = csz_idx_0 * 7;
  for (k = 0; k < i; k++) {
    csz_idx_0 = p->size[0] * 7;
    if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &ufb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    csz_idx_0 = v->size[0] * 7;
    if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &tfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((v->data[k] > 0.0) && (0.0 <= p->data[k]) && (p->data[k] <= 1.0)) {
      if (p->data[k] == 0.0) {
        csz_idx_0 = x->size[0] * 7;
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &wfb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = rtMinusInf;
      } else if (p->data[k] == 1.0) {
        csz_idx_0 = x->size[0] * 7;
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &xfb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = rtInf;
      } else if (v->data[k] == 1.0) {
        csz_idx_0 = x->size[0] * 7;
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &yfb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarTan(3.1415926535897931 * (p->data[k] - 0.5));
      } else if (v->data[k] < 1000.0) {
        xn3 = muDoubleScalarAbs(p->data[k] - 0.5);
        if (xn3 < 0.25) {
          st.site = &tlb_emlrtRSI;
          dc = b_betaincinv(&st, 2.0 * xn3, 0.5, v->data[k] / 2.0);
          xn5 = dc.re;
          xn3 = 1.0 - dc.re;
        } else {
          st.site = &rgb_emlrtRSI;
          dc = betaincinv(&st, 2.0 * xn3, v->data[k] / 2.0, 0.5);
          xn3 = dc.re;
          xn5 = 1.0 - dc.re;
        }
        st.site = &qgb_emlrtRSI;
        xn3 = v->data[k] * (xn5 / xn3);
        if (xn3 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        xn3 = muDoubleScalarSqrt(xn3);
        csz_idx_0 = x->size[0] * 7;
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &bgb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarSign(p->data[k] - 0.5) * xn3;
      } else {
        st.site = &pgb_emlrtRSI;
        if ((p->data[k] >= 0.0) && (p->data[k] <= 1.0)) {
          csz_idx_0 = x->size[0] * 7;
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &agb_emlrtBCI, &st);
          }
          b_st.site = &afb_emlrtRSI;
          x->data[k] = -1.4142135623730951 * erfcinv(&b_st, 2.0 * p->data[k]);
        } else {
          csz_idx_0 = x->size[0] * 7;
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &agb_emlrtBCI, &st);
          }
          x->data[k] = rtNaN;
        }
        if (v->data[k] < 6.6457388829771584E+75) {
          csz_idx_0 = x->size[0] * 7;
          if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &sfb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          st.site = &ogb_emlrtRSI;
          xn3 = muDoubleScalarPower(x->data[k], 3.0);
          st.site = &ngb_emlrtRSI;
          xn5 = muDoubleScalarPower(x->data[k], 5.0);
          st.site = &mgb_emlrtRSI;
          xn7 = muDoubleScalarPower(x->data[k], 7.0);
          st.site = &lgb_emlrtRSI;
          st.site = &kgb_emlrtRSI;
          st.site = &jgb_emlrtRSI;
          st.site = &igb_emlrtRSI;
          csz_idx_0 = x->size[0] * 7;
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &cgb_emlrtBCI, (emlrtCTX)sp);
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
      csz_idx_0 = x->size[0] * 7;
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                      &vfb_emlrtBCI, (emlrtCTX)sp);
      }
      x->data[k] = rtNaN;
    }
  }
}

void d_tinv(const emlrtStack *sp, const emxArray_real_T *p,
            const emxArray_real_T *v, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  creal_T dc;
  real_T xn3;
  real_T xn5;
  real_T xn7;
  int32_T csz_idx_0;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T z_size_idx_0;
  boolean_T b_p;
  boolean_T c_p;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &slb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &jbb_emlrtRSI;
  if (p->size[0] <= v->size[0]) {
    csz_idx_0 = p->size[0];
    z_size_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v->size[0];
    z_size_idx_0 = v->size[0];
  }
  b_p = true;
  c_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (k + 1 <= 1) {
      i = z_size_idx_0;
      i1 = p->size[0];
    } else {
      i = 1;
      i1 = 1;
    }
    if (i != i1) {
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
      if (k + 1 <= 1) {
        i = z_size_idx_0;
        i1 = v->size[0];
      } else {
        i = 1;
        i1 = 1;
      }
      if (i != i1) {
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
    emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  i = x->size[0];
  x->size[0] = csz_idx_0;
  emxEnsureCapacity_real_T(&st, x, i, &bgb_emlrtRTEI);
  for (k = 0; k < csz_idx_0; k++) {
    if (k + 1 > p->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, p->size[0], &ufb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if (k + 1 > v->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, v->size[0], &tfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((v->data[k] > 0.0) && (0.0 <= p->data[k]) && (p->data[k] <= 1.0)) {
      if (p->data[k] == 0.0) {
        if (k + 1 > x->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &wfb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        x->data[k] = rtMinusInf;
      } else if (p->data[k] == 1.0) {
        if (k + 1 > x->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &xfb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        x->data[k] = rtInf;
      } else if (v->data[k] == 1.0) {
        if (k + 1 > x->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &yfb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarTan(3.1415926535897931 * (p->data[k] - 0.5));
      } else if (v->data[k] < 1000.0) {
        xn3 = muDoubleScalarAbs(p->data[k] - 0.5);
        if (xn3 < 0.25) {
          st.site = &tlb_emlrtRSI;
          dc = b_betaincinv(&st, 2.0 * xn3, 0.5, v->data[k] / 2.0);
          xn5 = dc.re;
          xn3 = 1.0 - dc.re;
        } else {
          st.site = &rgb_emlrtRSI;
          dc = betaincinv(&st, 2.0 * xn3, v->data[k] / 2.0, 0.5);
          xn3 = dc.re;
          xn5 = 1.0 - dc.re;
        }
        st.site = &qgb_emlrtRSI;
        xn3 = v->data[k] * (xn5 / xn3);
        if (xn3 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        xn3 = muDoubleScalarSqrt(xn3);
        if (k + 1 > x->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &bgb_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarSign(p->data[k] - 0.5) * xn3;
      } else {
        st.site = &pgb_emlrtRSI;
        if ((p->data[k] >= 0.0) && (p->data[k] <= 1.0)) {
          if (k + 1 > x->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &agb_emlrtBCI,
                                          &st);
          }
          b_st.site = &afb_emlrtRSI;
          x->data[k] = -1.4142135623730951 * erfcinv(&b_st, 2.0 * p->data[k]);
        } else {
          if (k + 1 > x->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &agb_emlrtBCI,
                                          &st);
          }
          x->data[k] = rtNaN;
        }
        if (v->data[k] < 6.6457388829771584E+75) {
          if (k + 1 > x->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &sfb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          st.site = &ogb_emlrtRSI;
          xn3 = muDoubleScalarPower(x->data[k], 3.0);
          st.site = &ngb_emlrtRSI;
          xn5 = muDoubleScalarPower(x->data[k], 5.0);
          st.site = &mgb_emlrtRSI;
          xn7 = muDoubleScalarPower(x->data[k], 7.0);
          st.site = &lgb_emlrtRSI;
          st.site = &kgb_emlrtRSI;
          st.site = &jgb_emlrtRSI;
          st.site = &igb_emlrtRSI;
          if (k + 1 > x->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &cgb_emlrtBCI,
                                          (emlrtCTX)sp);
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
      if (k + 1 > x->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &vfb_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      x->data[k] = rtNaN;
    }
  }
}

void e_tinv(const emlrtStack *sp, const emxArray_real_T *p,
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
  int32_T i;
  int32_T k;
  boolean_T b_p;
  boolean_T c_p;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &slb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_st.site = &jbb_emlrtRSI;
  if (p->size[0] <= v->size[0]) {
    csz_idx_0 = p->size[0];
  } else {
    csz_idx_0 = v->size[0];
  }
  if (p->size[0] <= v->size[0]) {
    z_size[0] = p->size[0];
  } else {
    z_size[0] = v->size[0];
  }
  z_size[1] = 4;
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
    emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = 4;
  emxEnsureCapacity_real_T(&st, x, i, &bgb_emlrtRTEI);
  i = csz_idx_0 << 2;
  for (k = 0; k < i; k++) {
    csz_idx_0 = p->size[0] << 2;
    if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &ufb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    csz_idx_0 = v->size[0] << 2;
    if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &tfb_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((v->data[k] > 0.0) && (0.0 <= p->data[k]) && (p->data[k] <= 1.0)) {
      if (p->data[k] == 0.0) {
        csz_idx_0 = x->size[0] << 2;
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &wfb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = rtMinusInf;
      } else if (p->data[k] == 1.0) {
        csz_idx_0 = x->size[0] << 2;
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &xfb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = rtInf;
      } else if (v->data[k] == 1.0) {
        csz_idx_0 = x->size[0] << 2;
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &yfb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarTan(3.1415926535897931 * (p->data[k] - 0.5));
      } else if (v->data[k] < 1000.0) {
        xn3 = muDoubleScalarAbs(p->data[k] - 0.5);
        if (xn3 < 0.25) {
          st.site = &tlb_emlrtRSI;
          dc = b_betaincinv(&st, 2.0 * xn3, 0.5, v->data[k] / 2.0);
          xn5 = dc.re;
          xn3 = 1.0 - dc.re;
        } else {
          st.site = &rgb_emlrtRSI;
          dc = betaincinv(&st, 2.0 * xn3, v->data[k] / 2.0, 0.5);
          xn3 = dc.re;
          xn5 = 1.0 - dc.re;
        }
        st.site = &qgb_emlrtRSI;
        xn3 = v->data[k] * (xn5 / xn3);
        if (xn3 < 0.0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
              "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
        }
        xn3 = muDoubleScalarSqrt(xn3);
        csz_idx_0 = x->size[0] << 2;
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                        &bgb_emlrtBCI, (emlrtCTX)sp);
        }
        x->data[k] = muDoubleScalarSign(p->data[k] - 0.5) * xn3;
      } else {
        st.site = &pgb_emlrtRSI;
        if ((p->data[k] >= 0.0) && (p->data[k] <= 1.0)) {
          csz_idx_0 = x->size[0] << 2;
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &agb_emlrtBCI, &st);
          }
          b_st.site = &afb_emlrtRSI;
          x->data[k] = -1.4142135623730951 * erfcinv(&b_st, 2.0 * p->data[k]);
        } else {
          csz_idx_0 = x->size[0] << 2;
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &agb_emlrtBCI, &st);
          }
          x->data[k] = rtNaN;
        }
        if (v->data[k] < 6.6457388829771584E+75) {
          csz_idx_0 = x->size[0] << 2;
          if ((k + 1 < 1) || (k + 1 > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, csz_idx_0, &sfb_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          st.site = &ogb_emlrtRSI;
          xn3 = muDoubleScalarPower(x->data[k], 3.0);
          st.site = &ngb_emlrtRSI;
          xn5 = muDoubleScalarPower(x->data[k], 5.0);
          st.site = &mgb_emlrtRSI;
          xn7 = muDoubleScalarPower(x->data[k], 7.0);
          st.site = &lgb_emlrtRSI;
          st.site = &kgb_emlrtRSI;
          st.site = &jgb_emlrtRSI;
          st.site = &igb_emlrtRSI;
          csz_idx_0 = x->size[0] << 2;
          if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                          &cgb_emlrtBCI, (emlrtCTX)sp);
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
      csz_idx_0 = x->size[0] << 2;
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > csz_idx_0)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, csz_idx_0,
                                      &vfb_emlrtBCI, (emlrtCTX)sp);
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
      st.site = &rgb_emlrtRSI;
      dc = betaincinv(&st, 0.97500000000000009, v / 2.0, 0.5);
      st.site = &qgb_emlrtRSI;
      x = v * ((1.0 - dc.re) / dc.re);
      if (x < 0.0) {
        emlrtErrorWithMessageIdR2018a(
            &st, &bc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
            "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
      }
      x = muDoubleScalarSqrt(x);
    } else {
      st.site = &pgb_emlrtRSI;
      b_st.site = &afb_emlrtRSI;
      x = -1.4142135623730951 * erfcinv(&b_st, 1.975);
      if (v < 6.6457388829771584E+75) {
        st.site = &ogb_emlrtRSI;
        xn3 = muDoubleScalarPower(x, 3.0);
        st.site = &ngb_emlrtRSI;
        xn5 = muDoubleScalarPower(x, 5.0);
        st.site = &mgb_emlrtRSI;
        xn7 = muDoubleScalarPower(x, 7.0);
        st.site = &lgb_emlrtRSI;
        st.site = &kgb_emlrtRSI;
        st.site = &jgb_emlrtRSI;
        st.site = &igb_emlrtRSI;
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
