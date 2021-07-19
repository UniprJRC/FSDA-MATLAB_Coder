/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "FSRmdr_wrapper_data.h"
#include "FSRmdr_wrapper_emxutil.h"
#include "FSRmdr_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "infocheck.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "xgeqp3.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo lg_emlrtRSI = {
    18,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo
    xh_emlrtRSI =
        {
            72,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    yh_emlrtRSI =
        {
            173,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    ai_emlrtRSI =
        {
            172,          /* lineNo */
            "rankFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo
    bi_emlrtRSI =
        {
            126,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

static emlrtRSInfo ci_emlrtRSI = {
    108,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

static emlrtRSInfo di_emlrtRSI = {
    21,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo ei_emlrtRSI = {
    23,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtRSInfo fi_emlrtRSI = {
    29,          /* lineNo */
    "xzunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "reflapack\\xzunormqr.m" /* pathName */
};

static emlrtMCInfo
    r_emlrtMCI =
        {
            53,        /* lineNo */
            19,        /* colNo */
            "flt2str", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\flt2str.m" /* pName */
};

static emlrtRTEInfo
    sg_emlrtRTEI =
        {
            1,         /* lineNo */
            24,        /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

static emlrtRSInfo
    yk_emlrtRSI =
        {
            53,        /* lineNo */
            "flt2str", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\flt2str.m" /* pathName */
};

/* Function Declarations */
static const mxArray *d_sprintf(const emlrtStack *sp, const mxArray *b,
                                const mxArray *c, emlrtMCInfo *location);

static void g_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[14]);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               char_T y[14]);

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14]);

/* Function Definitions */
static const mxArray *d_sprintf(const emlrtStack *sp, const mxArray *b,
                                const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b((emlrtCTX)sp, 1, &m, 2, &pArrays[0],
                               (const char_T *)"sprintf", true, location);
}

static void g_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *a__output_of_sprintf_,
                               const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId, char_T y[14])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId, char_T ret[14])
{
  static const int32_T dims[2] = {1, 14};
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"char",
                          false, 2U, (void *)&dims[0]);
  emlrtImportCharArrayR2015b((emlrtCTX)sp, src, &ret[0], 14);
  emlrtDestroyArray(&src);
}

void qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
             const emxArray_real_T *B, emxArray_real_T *Y)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t nrc_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  emxArray_int32_T *jpvt;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T tol;
  int32_T a_tmp;
  int32_T i;
  int32_T j;
  int32_T k;
  int32_T maxmn;
  int32_T minmn;
  int32_T mn;
  int32_T nb;
  int32_T rankA;
  char_T str[14];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &b_A, 2, &sg_emlrtRTEI, true);
  mn = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, b_A, mn, &yf_emlrtRTEI);
  minmn = A->size[0] * A->size[1];
  for (mn = 0; mn < minmn; mn++) {
    b_A->data[mn] = A->data[mn];
  }
  emxInit_real_T(sp, &tau, 1, &sg_emlrtRTEI, true);
  emxInit_int32_T(sp, &jpvt, 2, &sg_emlrtRTEI, true);
  st.site = &uf_emlrtRSI;
  xgeqp3(&st, b_A, tau, jpvt);
  st.site = &xh_emlrtRSI;
  rankA = 0;
  tol = 0.0;
  if (b_A->size[0] < b_A->size[1]) {
    minmn = b_A->size[0];
    maxmn = b_A->size[1];
  } else {
    minmn = b_A->size[1];
    maxmn = b_A->size[0];
  }
  if (minmn > 0) {
    tol = muDoubleScalarMin(1.4901161193847656E-8,
                            2.2204460492503131E-15 * (real_T)maxmn) *
          muDoubleScalarAbs(b_A->data[0]);
    while ((rankA < minmn) &&
           (!(muDoubleScalarAbs(b_A->data[rankA + b_A->size[0] * rankA]) <=
              tol))) {
      rankA++;
    }
  }
  if (rankA < minmn) {
    b_st.site = &yh_emlrtRSI;
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
    emlrtAssign(&y, m);
    b_y = NULL;
    m = emlrtCreateDoubleScalar(tol);
    emlrtAssign(&b_y, m);
    c_st.site = &yk_emlrtRSI;
    g_emlrt_marshallIn(&c_st, d_sprintf(&c_st, y, b_y, &r_emlrtMCI),
                       "<output of sprintf>", str);
    b_st.site = &ai_emlrtRSI;
    b_warning(&b_st, rankA, str);
  }
  emxInit_real_T(&st, &b_B, 2, &ag_emlrtRTEI, true);
  st.site = &vf_emlrtRSI;
  mn = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = B->size[1];
  emxEnsureCapacity_real_T(&st, b_B, mn, &ag_emlrtRTEI);
  minmn = B->size[0] * B->size[1];
  for (mn = 0; mn < minmn; mn++) {
    b_B->data[mn] = B->data[mn];
  }
  nb = b_B->size[1];
  mn = Y->size[0] * Y->size[1];
  Y->size[0] = b_A->size[1];
  Y->size[1] = b_B->size[1];
  emxEnsureCapacity_real_T(&st, Y, mn, &bg_emlrtRTEI);
  minmn = b_A->size[1] * b_B->size[1];
  for (mn = 0; mn < minmn; mn++) {
    Y->data[mn] = 0.0;
  }
  b_st.site = &gg_emlrtRSI;
  c_st.site = &jg_emlrtRSI;
  if ((b_A->size[0] != 0) && (b_A->size[1] != 0) &&
      ((b_B->size[0] != 0) && (b_B->size[1] != 0))) {
    nrc_t = (ptrdiff_t)b_B->size[0];
    nrc_t = LAPACKE_dormqr(
        102, 'L', 'T', nrc_t, (ptrdiff_t)b_B->size[1],
        (ptrdiff_t)muIntScalarMin_sint32(b_A->size[0], b_A->size[1]),
        &b_A->data[0], (ptrdiff_t)b_A->size[0], &tau->data[0], &b_B->data[0],
        nrc_t);
    minmn = (int32_T)nrc_t;
    d_st.site = &kg_emlrtRSI;
    if (infocheck(&d_st, minmn)) {
      if ((minmn == -10) && (b_B->size[1] > 1)) {
        d_st.site = &ci_emlrtRSI;
        minmn = b_A->size[0];
        maxmn = b_B->size[1];
        mn = muIntScalarMin_sint32(b_A->size[0], b_A->size[1]);
        e_st.site = &lg_emlrtRSI;
        if (mn > 2147483646) {
          f_st.site = &oc_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }
        for (j = 0; j < mn; j++) {
          if (tau->data[j] != 0.0) {
            e_st.site = &di_emlrtRSI;
            if (maxmn > 2147483646) {
              f_st.site = &oc_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }
            for (k = 0; k < maxmn; k++) {
              tol = b_B->data[j + b_B->size[0] * k];
              a_tmp = j + 2;
              e_st.site = &ei_emlrtRSI;
              if ((j + 2 <= minmn) && (minmn > 2147483646)) {
                f_st.site = &oc_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }
              for (i = a_tmp; i <= minmn; i++) {
                tol += b_A->data[(i + b_A->size[0] * j) - 1] *
                       b_B->data[(i + b_B->size[0] * k) - 1];
              }
              tol *= tau->data[j];
              if (tol != 0.0) {
                b_B->data[j + b_B->size[0] * k] -= tol;
                e_st.site = &fi_emlrtRSI;
                for (i = a_tmp; i <= minmn; i++) {
                  b_B->data[(i + b_B->size[0] * k) - 1] -=
                      b_A->data[(i + b_A->size[0] * j) - 1] * tol;
                }
              }
            }
          }
        }
      } else {
        minmn = b_B->size[0];
        maxmn = b_B->size[1];
        mn = b_B->size[0] * b_B->size[1];
        b_B->size[0] = minmn;
        b_B->size[1] = maxmn;
        emxEnsureCapacity_real_T(&c_st, b_B, mn, &cg_emlrtRTEI);
        minmn *= maxmn;
        for (mn = 0; mn < minmn; mn++) {
          b_B->data[mn] = rtNaN;
        }
      }
    }
  }
  emxFree_real_T(&tau);
  b_st.site = &bi_emlrtRSI;
  if ((1 <= nb) && (nb > 2147483646)) {
    c_st.site = &oc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 0; k < nb; k++) {
    b_st.site = &hg_emlrtRSI;
    if ((1 <= rankA) && (rankA > 2147483646)) {
      c_st.site = &oc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (i = 0; i < rankA; i++) {
      Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] =
          b_B->data[i + b_B->size[0] * k];
    }
    for (j = rankA; j >= 1; j--) {
      mn = jpvt->data[j - 1];
      Y->data[(mn + Y->size[0] * k) - 1] /=
          b_A->data[(j + b_A->size[0] * (j - 1)) - 1];
      b_st.site = &ig_emlrtRSI;
      for (i = 0; i <= j - 2; i++) {
        Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] -=
            Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] *
            b_A->data[i + b_A->size[0] * (j - 1)];
      }
    }
  }
  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (qrsolve.c) */
