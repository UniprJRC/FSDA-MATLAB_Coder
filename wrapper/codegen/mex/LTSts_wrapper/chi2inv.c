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
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_mexutil.h"
#include "eml_gammainc.h"
#include "gammainc.h"
#include "gammaln.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo yv_emlrtRSI = {
    17,        /* lineNo */
    "chi2inv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\chi2inv.m" /* pathName
                                                                         */
};

static emlrtRSInfo aw_emlrtRSI = {
    42,       /* lineNo */
    "gaminv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m" /* pathName
                                                                        */
};

static emlrtRSInfo bw_emlrtRSI = {
    44,       /* lineNo */
    "gaminv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m" /* pathName
                                                                        */
};

static emlrtRSInfo cw_emlrtRSI = {
    41,       /* lineNo */
    "gaminv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m" /* pathName
                                                                        */
};

static emlrtRSInfo dw_emlrtRSI = {
    39,       /* lineNo */
    "gaminv", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\gaminv.m" /* pathName
                                                                        */
};

static emlrtRSInfo ew_emlrtRSI =
    {
        29,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo fw_emlrtRSI =
    {
        30,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo gw_emlrtRSI =
    {
        31,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo hw_emlrtRSI =
    {
        34,            /* lineNo */
        "gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo nw_emlrtRSI =
    {
        322,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo ow_emlrtRSI =
    {
        323,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo pw_emlrtRSI =
    {
        308,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo qw_emlrtRSI =
    {
        291,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo rw_emlrtRSI =
    {
        284,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo sw_emlrtRSI =
    {
        266,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo tw_emlrtRSI =
    {
        262,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo uw_emlrtRSI =
    {
        233,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo vw_emlrtRSI =
    {
        230,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo ww_emlrtRSI =
    {
        207,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo xw_emlrtRSI =
    {
        196,               /* lineNo */
        "eml_gammaincinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

static emlrtRSInfo yw_emlrtRSI =
    {
        405,      /* lineNo */
        "PHIinv", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\gammaincinv"
        ".m" /* pathName */
};

/* Function Declarations */
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                char_T ret[23]);

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                char_T ret[12]);

static void i_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[23]);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[23]);

static void k_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[12]);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[12]);

/* Function Definitions */
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[23])
{
  static const int32_T dims[2] = {1, 23};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 23);
  emlrtDestroyArray(&src);
}

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId, char_T ret[12])
{
  static const int32_T dims[2] = {1, 12};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 12);
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[23])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[23])
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[12])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[12])
{
  gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

real_T chi2inv(const emlrtStack *sp)
{
  static const int32_T iv[2] = {1, 6};
  static const int32_T iv1[2] = {1, 7};
  static const int32_T iv2[2] = {1, 7};
  static const char_T b_rfmt[7] = {'%', '2', '3', '.', '1', '5', 'e'};
  static const char_T rfmt[6] = {'%', '1', '2', '.', '4', 'e'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  creal_T b;
  real_T f;
  real_T lga;
  real_T lgap1;
  real_T oldf;
  real_T oldz;
  real_T x;
  real_T z;
  real_T zhi;
  real_T zlo;
  int32_T i;
  char_T b_str[23];
  char_T c_str[23];
  char_T str[12];
  boolean_T exitg1;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yv_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &dw_emlrtRSI;
  c_st.site = &ew_emlrtRSI;
  lga = 0.5;
  c_st.site = &fw_emlrtRSI;
  gammaln(&c_st, &lga);
  lgap1 = 1.5;
  c_st.site = &gw_emlrtRSI;
  gammaln(&c_st, &lgap1);
  c_st.site = &hw_emlrtRSI;
  if (lga == rtInf) {
    z = 0.5;
  } else {
    d_st.site = &xw_emlrtRSI;
    d_st.site = &ww_emlrtRSI;
    d_st.site = &vw_emlrtRSI;
    e_st.site = &yw_emlrtRSI;
    e_st.site = &yw_emlrtRSI;
    d_st.site = &uw_emlrtRSI;
    z = 3.2928848298257778;
    oldf = rtInf;
    oldz = rtInf;
    zlo = 0.0;
    zhi = 1.7976931348623157E+308;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 1000)) {
      d_st.site = &tw_emlrtRSI;
      f = -(eml_gammainc(&d_st, z, lgap1, true) - 0.010000000000000009);
      if ((f * oldf < 0.0) &&
          (muDoubleScalarAbs(oldf) <= muDoubleScalarAbs(f))) {
        z = 0.5 * z + 0.5 * oldz;
        d_st.site = &sw_emlrtRSI;
        f = -(eml_gammainc(&d_st, z, lgap1, true) - 0.010000000000000009);
      }
      if (f > 0.0) {
        zhi = z;
      } else {
        zlo = z;
      }
      if ((muDoubleScalarAbs(f) < 2.2204460492503151E-16) ||
          (muDoubleScalarAbs(z - oldz) <
           2.2204460492503131E-16 * z + 2.2250738585072014E-308)) {
        exitg1 = true;
      } else {
        oldz = z;
        oldf = f;
        guard1 = false;
        if (i < 500) {
          d_st.site = &rw_emlrtRSI;
          if (z < 0.0) {
            emlrtErrorWithMessageIdR2018a(
                &d_st, &dc_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
                "Coder:toolbox:ElFunDomainError", 3, 4, 3, "log");
          }
          z *= 1.0 - f / (z * muDoubleScalarExp(
                                  (-0.5 * muDoubleScalarLog(z) - z) - lga) +
                          f * ((z + 1.0) - 0.5) / 2.0);
          if (z <= zlo) {
            if (zlo == 0.0) {
              d_st.site = &qw_emlrtRSI;
              x = eml_gammainc(&d_st, 2.2250738585072014E-308, lgap1, true) -
                  0.010000000000000009;
              if (0.99 < muDoubleScalarAbs(x)) {
                z = 0.0;
                exitg1 = true;
              } else {
                zlo = 2.2250738585072014E-308;
                guard1 = true;
              }
            } else {
              guard1 = true;
            }
          } else {
            if (z >= zhi) {
              z = 0.01 * zlo + 0.99 * zhi;
            }
            i++;
          }
        } else {
          if (1.0E+8 * zlo < zhi) {
            oldz = 1.0E+8 * zlo;
            d_st.site = &pw_emlrtRSI;
            oldf = -(eml_gammainc(&d_st, oldz, lgap1, true) -
                     0.010000000000000009);
            if (oldf > 0.0) {
              zhi = oldz;
            } else {
              zlo = oldz;
            }
          }
          z = 0.5 * zlo + 0.5 * zhi;
          i++;
        }
        if (guard1) {
          z = 0.99 * zlo + 0.01 * zhi;
          i++;
        }
      }
    }
    if ((i >= 1000) && (!emlrtSetWarningFlag(&c_st))) {
      d_st.site = &ow_emlrtRSI;
      c_y = NULL;
      m = emlrtCreateCharArray(2, &iv1[0]);
      emlrtInitCharArrayR2013a(&d_st, 7, m, &b_rfmt[0]);
      emlrtAssign(&c_y, m);
      d_y = NULL;
      m = emlrtCreateDoubleScalar(0.99);
      emlrtAssign(&d_y, m);
      e_st.site = &yeb_emlrtRSI;
      i_emlrt_marshallIn(&e_st, c_sprintf(&e_st, c_y, d_y, &p_emlrtMCI),
                         "<output of sprintf>", b_str);
      d_st.site = &ow_emlrtRSI;
      e_y = NULL;
      m = emlrtCreateCharArray(2, &iv2[0]);
      emlrtInitCharArrayR2013a(&d_st, 7, m, &b_rfmt[0]);
      emlrtAssign(&e_y, m);
      f_y = NULL;
      m = emlrtCreateDoubleScalar(0.5);
      emlrtAssign(&f_y, m);
      e_st.site = &yeb_emlrtRSI;
      i_emlrt_marshallIn(&e_st, c_sprintf(&e_st, e_y, f_y, &p_emlrtMCI),
                         "<output of sprintf>", c_str);
      d_st.site = &nw_emlrtRSI;
      c_warning(&d_st, b_str, c_str);
    }
  }
  b_st.site = &cw_emlrtRSI;
  c_st.site = &mx_emlrtRSI;
  zlo = 1.5;
  c_st.site = &nx_emlrtRSI;
  gammaln(&c_st, &zlo);
  c_st.site = &ox_emlrtRSI;
  b = scalar_gammainc(&c_st, z, 0.5, -0.69314718055994529, zlo);
  b.re -= 0.99;
  b_st.site = &cw_emlrtRSI;
  if (muDoubleScalarHypot(b.re, b.im) > 1.475214958190918E-8) {
    b_st.site = &bw_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(2.0);
    emlrtAssign(&b_y, m);
    c_st.site = &yeb_emlrtRSI;
    k_emlrt_marshallIn(&c_st, c_sprintf(&c_st, y, b_y, &p_emlrtMCI),
                       "<output of sprintf>", str);
    b_st.site = &aw_emlrtRSI;
    d_warning(&b_st, str);
  }
  return z * 2.0;
}

/* End of code generation (chi2inv.c) */
