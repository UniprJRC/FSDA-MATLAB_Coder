/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chi2inv.c
 *
 * Code generation for function 'chi2inv'
 *
 */

/* Include files */
#include "chi2inv.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "gammainc.h"
#include "gammaincinv.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo lbb_emlrtRSI = {
    43,       /* lineNo */
    "gaminv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m" /* pathName
                                                                        */
};

static emlrtBCInfo aq_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    34,       /* lineNo */
    32,       /* colNo */
    "",       /* aName */
    "gaminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo bq_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    81,       /* lineNo */
    9,        /* colNo */
    "",       /* aName */
    "gaminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo cq_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    69,       /* lineNo */
    17,       /* colNo */
    "",       /* aName */
    "gaminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo dq_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    73,       /* lineNo */
    17,       /* colNo */
    "",       /* aName */
    "gaminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo eq_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    71,       /* lineNo */
    17,       /* colNo */
    "",       /* aName */
    "gaminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtBCInfo fq_emlrtBCI = {
    -1,       /* iFirst */
    -1,       /* iLast */
    47,       /* lineNo */
    13,       /* colNo */
    "",       /* aName */
    "gaminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m", /* pName
                                                                         */
    0 /* checkKind */
};

static emlrtRTEInfo mt_emlrtRTEI = {
    27,       /* lineNo */
    5,        /* colNo */
    "gaminv", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m" /* pName
                                                                        */
};

/* Function Definitions */
void b_chi2inv(const emlrtStack *sp, const emxArray_real_T *p, real_T v,
               emxArray_real_T *x)
{
  static const int32_T b_iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 6};
  static const int32_T iv2[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '2', '.', '4', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  creal_T dc;
  creal_T dc1;
  real_T a;
  int32_T i;
  int32_T i1;
  int32_T k;
  char_T b_str[12];
  char_T c_str[12];
  char_T str[12];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  a = v / 2.0;
  st.site = &mn_emlrtRSI;
  i = x->size[0] * x->size[1];
  x->size[0] = p->size[0];
  x->size[1] = p->size[1];
  emxEnsureCapacity_real_T(&st, x, i, &mt_emlrtRTEI);
  i = p->size[0] * p->size[1];
  for (k = 0; k < i; k++) {
    i1 = p->size[0] * p->size[1];
    if ((k + 1 < 1) || (k + 1 > i1)) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, i1, &aq_emlrtBCI, &st);
    }
    if ((!muDoubleScalarIsInf(a)) && (p->data[k] >= 0.0) &&
        (p->data[k] <= 1.0)) {
      if ((p->data[k] > 0.0) && (p->data[k] < 1.0) && (a > 0.0)) {
        b_st.site = &qn_emlrtRSI;
        dc = gammaincinv(&b_st, p->data[k], a);
        b_st.site = &pn_emlrtRSI;
        dc1 = gammainc(&b_st, dc.re, a);
        b_st.site = &pn_emlrtRSI;
        if (muDoubleScalarHypot(dc1.re - p->data[k], dc1.im) >
            p->data[k] * 1.4901161193847656E-8) {
          b_st.site = &lbb_emlrtRSI;
          y = NULL;
          m = emlrtCreateCharArray(2, &b_iv[0]);
          emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
          emlrtAssign(&y, m);
          b_y = NULL;
          m = emlrtCreateDoubleScalar(a);
          emlrtAssign(&b_y, m);
          c_st.site = &uqb_emlrtRSI;
          e_emlrt_marshallIn(&c_st, d_sprintf(&c_st, y, b_y, &u_emlrtMCI),
                             "<output of sprintf>", str);
          b_st.site = &on_emlrtRSI;
          c_y = NULL;
          m = emlrtCreateCharArray(2, &iv1[0]);
          emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
          emlrtAssign(&c_y, m);
          d_y = NULL;
          m = emlrtCreateDoubleScalar(2.0);
          emlrtAssign(&d_y, m);
          c_st.site = &uqb_emlrtRSI;
          e_emlrt_marshallIn(&c_st, d_sprintf(&c_st, c_y, d_y, &u_emlrtMCI),
                             "<output of sprintf>", b_str);
          b_st.site = &kbb_emlrtRSI;
          e_y = NULL;
          m = emlrtCreateCharArray(2, &iv2[0]);
          emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
          emlrtAssign(&e_y, m);
          f_y = NULL;
          m = emlrtCreateDoubleScalar(p->data[k]);
          emlrtAssign(&f_y, m);
          c_st.site = &uqb_emlrtRSI;
          e_emlrt_marshallIn(&c_st, d_sprintf(&c_st, e_y, f_y, &u_emlrtMCI),
                             "<output of sprintf>", c_str);
          b_st.site = &nn_emlrtRSI;
          i_warning(&b_st, str, b_str, c_str);
        }
        i1 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &fq_emlrtBCI,
                                        &st);
        }
        x->data[k] = dc.re * 2.0;
      } else if ((a == 0.0) || (p->data[k] == 0.0)) {
        i1 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &cq_emlrtBCI,
                                        &st);
        }
        x->data[k] = 0.0;
      } else if (p->data[k] == 1.0) {
        i1 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &eq_emlrtBCI,
                                        &st);
        }
        x->data[k] = rtInf;
      } else {
        i1 = x->size[0] * x->size[1];
        if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &dq_emlrtBCI,
                                        &st);
        }
        x->data[k] = rtNaN;
      }
    } else {
      i1 = x->size[0] * x->size[1];
      if (((int32_T)(k + 1U) < 1) || ((int32_T)(k + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(k + 1U), 1, i1, &bq_emlrtBCI,
                                      &st);
      }
      x->data[k] = rtNaN;
    }
  }
}

real_T chi2inv(const emlrtStack *sp, real_T p, real_T v)
{
  static const int32_T b_iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 6};
  static const int32_T iv2[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '2', '.', '4', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  creal_T dc;
  creal_T dc1;
  real_T a;
  real_T x;
  char_T b_str[12];
  char_T c_str[12];
  char_T str[12];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  a = v / 2.0;
  st.site = &mn_emlrtRSI;
  if (!muDoubleScalarIsInf(a)) {
    if ((p > 0.0) && (p < 1.0) && (a > 0.0)) {
      b_st.site = &qn_emlrtRSI;
      dc = gammaincinv(&b_st, p, a);
      b_st.site = &pn_emlrtRSI;
      dc1 = gammainc(&b_st, dc.re, a);
      b_st.site = &pn_emlrtRSI;
      if (muDoubleScalarHypot(dc1.re - p, dc1.im) > p * 1.4901161193847656E-8) {
        b_st.site = &lbb_emlrtRSI;
        y = NULL;
        m = emlrtCreateCharArray(2, &b_iv[0]);
        emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
        emlrtAssign(&y, m);
        b_y = NULL;
        m = emlrtCreateDoubleScalar(a);
        emlrtAssign(&b_y, m);
        c_st.site = &uqb_emlrtRSI;
        e_emlrt_marshallIn(&c_st, d_sprintf(&c_st, y, b_y, &u_emlrtMCI),
                           "<output of sprintf>", str);
        b_st.site = &on_emlrtRSI;
        c_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
        emlrtAssign(&c_y, m);
        d_y = NULL;
        m = emlrtCreateDoubleScalar(2.0);
        emlrtAssign(&d_y, m);
        c_st.site = &uqb_emlrtRSI;
        e_emlrt_marshallIn(&c_st, d_sprintf(&c_st, c_y, d_y, &u_emlrtMCI),
                           "<output of sprintf>", b_str);
        b_st.site = &kbb_emlrtRSI;
        e_y = NULL;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
        emlrtAssign(&e_y, m);
        f_y = NULL;
        m = emlrtCreateDoubleScalar(p);
        emlrtAssign(&f_y, m);
        c_st.site = &uqb_emlrtRSI;
        e_emlrt_marshallIn(&c_st, d_sprintf(&c_st, e_y, f_y, &u_emlrtMCI),
                           "<output of sprintf>", c_str);
        b_st.site = &nn_emlrtRSI;
        i_warning(&b_st, str, b_str, c_str);
      }
      x = dc.re * 2.0;
    } else if ((a == 0.0) || (p == 0.0)) {
      x = 0.0;
    } else if (p == 1.0) {
      x = rtInf;
    } else {
      x = rtNaN;
    }
  } else {
    x = rtNaN;
  }
  return x;
}

/* End of code generation (chi2inv.c) */
