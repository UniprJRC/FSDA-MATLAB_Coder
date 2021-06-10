/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include "eml_setop.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "issorted.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo qdb_emlrtRSI = {
    252,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo rdb_emlrtRSI = {
    250,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo sdb_emlrtRSI = {
    249,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo tdb_emlrtRSI = {
    218,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo xdb_emlrtRSI = {
    450,                        /* lineNo */
    "skip_to_last_equal_value", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo
    ydb_emlrtRSI =
        {
            40,       /* lineNo */
            "safeEq", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\safeEq.m" /* pathName */
};

static emlrtRSInfo beb_emlrtRSI = {
    215,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo ceb_emlrtRSI = {
    338,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo
    imb_emlrtRSI =
        {
            43,       /* lineNo */
            "safeEq", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\safeEq.m" /* pathName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    219,          /* lineNo */
    13,           /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    216,          /* lineNo */
    13,           /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    383,          /* lineNo */
    5,            /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    421,          /* lineNo */
    5,            /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    394,          /* lineNo */
    9,            /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo yw_emlrtRTEI = {
    197,         /* lineNo */
    24,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo ax_emlrtRTEI = {
    198,         /* lineNo */
    25,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo bx_emlrtRTEI = {
    199,         /* lineNo */
    25,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo cx_emlrtRTEI = {
    389,         /* lineNo */
    9,           /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo dx_emlrtRTEI = {
    400,         /* lineNo */
    13,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo ex_emlrtRTEI = {
    425,         /* lineNo */
    9,           /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo fx_emlrtRTEI = {
    185,         /* lineNo */
    24,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo gx_emlrtRTEI = {
    192,         /* lineNo */
    29,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo hx_emlrtRTEI = {
    423,         /* lineNo */
    9,           /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

/* Function Declarations */
static real_T b_skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x);

static real_T skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x);

/* Function Definitions */
static real_T b_skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x)
{
  real_T absx;
  real_T xk;
  int32_T exponent;
  boolean_T exitg1;
  boolean_T p;
  xk = x->data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x->size[1])) {
    absx = muDoubleScalarAbs(xk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(xk - x->data[*k]) < absx) ||
        (muDoubleScalarIsInf(x->data[*k]) && muDoubleScalarIsInf(xk) &&
         ((x->data[*k] > 0.0) == (xk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }
    if (p) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }
  return xk;
}

static real_T skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x)
{
  real_T absx;
  real_T xk;
  int32_T exponent;
  boolean_T exitg1;
  boolean_T p;
  xk = x->data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x->size[0])) {
    absx = muDoubleScalarAbs(xk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(xk - x->data[*k]) < absx) ||
        (muDoubleScalarIsInf(x->data[*k]) && muDoubleScalarIsInf(xk) &&
         ((x->data[*k] > 0.0) == (xk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }
    if (p) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }
  return xk;
}

void b_do_vectors(const emlrtStack *sp, const emxArray_real_T *a,
                  const emxArray_real_T *b, emxArray_real_T *c,
                  emxArray_int32_T *ia, int32_T *ib_size)
{
  emlrtStack st;
  real_T absx;
  real_T ak;
  real_T bk;
  int32_T b_ialast;
  int32_T exponent;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T na;
  int32_T nc;
  int32_T nia;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  na = a->size[1];
  iblast = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, c, iblast, &fx_emlrtRTEI);
  iblast = ia->size[0];
  ia->size[0] = a->size[1];
  emxEnsureCapacity_int32_T(sp, ia, iblast, &gx_emlrtRTEI);
  *ib_size = 0;
  if (!b_issorted(a)) {
    emlrtErrorWithMessageIdR2018a(sp, &kc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  st.site = &tdb_emlrtRSI;
  if (!issorted(&st, b)) {
    emlrtErrorWithMessageIdR2018a(sp, &jc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= na) && (iblast <= b->size[0])) {
    b_ialast = ialast;
    ak = b_skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = skip_to_last_equal_value(&iblast, b);
    absx = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(bk - ak) < absx) ||
        (muDoubleScalarIsInf(ak) && muDoubleScalarIsInf(bk) &&
         ((ak > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }
    if (p) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        p = !muDoubleScalarIsNaN(ak);
      } else if (muDoubleScalarIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        nc++;
        nia++;
        c->data[nc - 1] = ak;
        ia->data[nia - 1] = iafirst + 1;
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast++;
      }
    }
  }
  while (ialast <= na) {
    iblast = ialast;
    ak = b_skip_to_last_equal_value(&iblast, a);
    nc++;
    nia++;
    c->data[nc - 1] = ak;
    ia->data[nia - 1] = iafirst + 1;
    ialast = iblast + 1;
    iafirst = iblast;
  }
  if (a->size[1] > 0) {
    if (nia > a->size[1]) {
      emlrtErrorWithMessageIdR2018a(sp, &lc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iblast = ia->size[0];
    if (1 > nia) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nia;
    }
    emxEnsureCapacity_int32_T(sp, ia, iblast, &cx_emlrtRTEI);
    if (nc > a->size[1]) {
      emlrtErrorWithMessageIdR2018a(sp, &mc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iblast = c->size[0] * c->size[1];
    if (1 > nc) {
      c->size[1] = 0;
    } else {
      c->size[1] = nc;
    }
    emxEnsureCapacity_real_T(sp, c, iblast, &hx_emlrtRTEI);
  }
}

void c_do_vectors(const emlrtStack *sp, const emxArray_real_T *a,
                  const emxArray_real_T *b, emxArray_real_T *c,
                  emxArray_int32_T *ia, emxArray_int32_T *ib)
{
  emlrtStack st;
  real_T absx;
  real_T ak;
  real_T bk;
  int32_T b_ialast;
  int32_T b_iblast;
  int32_T exponent;
  int32_T iafirst;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T na;
  int32_T nb;
  int32_T nc;
  int32_T ncmax;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  na = a->size[1];
  nb = b->size[0];
  ncmax = muIntScalarMin_sint32(na, nb);
  iafirst = c->size[0];
  c->size[0] = ncmax;
  emxEnsureCapacity_real_T(sp, c, iafirst, &yw_emlrtRTEI);
  iafirst = ia->size[0];
  ia->size[0] = ncmax;
  emxEnsureCapacity_int32_T(sp, ia, iafirst, &ax_emlrtRTEI);
  iafirst = ib->size[0];
  ib->size[0] = ncmax;
  emxEnsureCapacity_int32_T(sp, ib, iafirst, &bx_emlrtRTEI);
  if (!b_issorted(a)) {
    emlrtErrorWithMessageIdR2018a(sp, &kc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  st.site = &tdb_emlrtRSI;
  if (!issorted(&st, b)) {
    emlrtErrorWithMessageIdR2018a(sp, &jc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= na) && (iblast <= nb)) {
    b_ialast = ialast;
    ak = b_skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b);
    iblast = b_iblast;
    absx = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(bk - ak) < absx) ||
        (muDoubleScalarIsInf(ak) && muDoubleScalarIsInf(bk) &&
         ((ak > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }
    if (p) {
      nc++;
      c->data[nc - 1] = ak;
      ia->data[nc - 1] = iafirst + 1;
      ib->data[nc - 1] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        p = !muDoubleScalarIsNaN(ak);
      } else if (muDoubleScalarIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }
  if (ncmax > 0) {
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(sp, &lc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iafirst = ia->size[0];
    if (1 > nc) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nc;
    }
    emxEnsureCapacity_int32_T(sp, ia, iafirst, &cx_emlrtRTEI);
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(sp, &pc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iafirst = ib->size[0];
    if (1 > nc) {
      ib->size[0] = 0;
    } else {
      ib->size[0] = nc;
    }
    emxEnsureCapacity_int32_T(sp, ib, iafirst, &dx_emlrtRTEI);
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(sp, &mc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iafirst = c->size[0];
    if (1 > nc) {
      c->size[0] = 0;
    } else {
      c->size[0] = nc;
    }
    emxEnsureCapacity_real_T(sp, c, iafirst, &ex_emlrtRTEI);
  }
}

void d_do_vectors(const emlrtStack *sp, real_T a, const emxArray_real_T *b,
                  real_T c_data[], int32_T c_size[2], int32_T ia_data[],
                  int32_T *ia_size, int32_T ib_data[], int32_T *ib_size)
{
  real_T absx;
  real_T bk;
  int32_T b_iblast;
  int32_T exponent;
  int32_T ibfirst;
  int32_T iblast;
  int32_T nb;
  int32_T nc;
  int32_T ncmax;
  boolean_T exitg1;
  boolean_T p;
  nb = b->size[1];
  ncmax = muIntScalarMin_sint32(1, nb);
  c_size[0] = 1;
  c_size[1] = ncmax;
  *ia_size = (int8_T)ncmax;
  *ib_size = (int8_T)ncmax;
  if (!b_issorted(b)) {
    emlrtErrorWithMessageIdR2018a(sp, &jc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  nc = 0;
  ibfirst = 0;
  iblast = 1;
  exitg1 = false;
  while ((!exitg1) && (iblast <= nb)) {
    b_iblast = iblast;
    bk = b_skip_to_last_equal_value(&b_iblast, b);
    absx = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(bk - a) < absx) ||
        (muDoubleScalarIsInf(a) && muDoubleScalarIsInf(bk) &&
         ((a > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }
    if (p) {
      nc = 1;
      c_data[0] = a;
      ia_data[0] = 1;
      ib_data[0] = ibfirst + 1;
      exitg1 = true;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        p = !muDoubleScalarIsNaN(a);
      } else if (muDoubleScalarIsNaN(a)) {
        p = false;
      } else {
        p = (a < bk);
      }
      if (p) {
        exitg1 = true;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }
  if (ncmax > 0) {
    *ia_size = (1 <= nc);
    *ib_size = (1 <= nc);
    c_size[1] = (1 <= nc);
  }
}

void do_vectors(const emlrtStack *sp, real_T a, const emxArray_real_T *b,
                real_T c_data[], int32_T *c_size, int32_T ia_data[],
                int32_T *ia_size, int32_T ib_data[], int32_T *ib_size)
{
  emlrtStack st;
  real_T absx;
  real_T bk;
  int32_T b_iblast;
  int32_T exponent;
  int32_T ibfirst;
  int32_T iblast;
  int32_T nb;
  int32_T nc;
  boolean_T exitg1;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  nb = b->size[0];
  *c_size = muIntScalarMin_sint32(1, nb);
  *ia_size = (int8_T)*c_size;
  *ib_size = (int8_T)*c_size;
  st.site = &tdb_emlrtRSI;
  if (!issorted(&st, b)) {
    emlrtErrorWithMessageIdR2018a(sp, &jc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  nc = 0;
  ibfirst = 0;
  iblast = 1;
  exitg1 = false;
  while ((!exitg1) && (iblast <= nb)) {
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b);
    absx = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(bk - a) < absx) ||
        (muDoubleScalarIsInf(a) && muDoubleScalarIsInf(bk) &&
         ((a > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }
    if (p) {
      nc = 1;
      c_data[0] = a;
      ia_data[0] = 1;
      ib_data[0] = ibfirst + 1;
      exitg1 = true;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        p = !muDoubleScalarIsNaN(a);
      } else if (muDoubleScalarIsNaN(a)) {
        p = false;
      } else {
        p = (a < bk);
      }
      if (p) {
        exitg1 = true;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }
  if (*c_size > 0) {
    *ia_size = (1 <= nc);
    *ib_size = (1 <= nc);
    *c_size = (1 <= nc);
  }
}

void e_do_vectors(const emlrtStack *sp, const emxArray_real_T *a,
                  const emxArray_real_T *b, emxArray_real_T *c,
                  emxArray_int32_T *ia, int32_T *ib_size)
{
  emlrtStack st;
  real_T absx;
  real_T ak;
  real_T bk;
  int32_T b_ialast;
  int32_T exponent;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T na;
  int32_T nc;
  int32_T nia;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  na = a->size[0];
  iblast = c->size[0];
  c->size[0] = a->size[0];
  emxEnsureCapacity_real_T(sp, c, iblast, &yw_emlrtRTEI);
  iblast = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity_int32_T(sp, ia, iblast, &ax_emlrtRTEI);
  *ib_size = 0;
  st.site = &beb_emlrtRSI;
  if (!issorted(&st, a)) {
    emlrtErrorWithMessageIdR2018a(sp, &kc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  st.site = &tdb_emlrtRSI;
  if (!issorted(&st, b)) {
    emlrtErrorWithMessageIdR2018a(sp, &jc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= na) && (iblast <= b->size[0])) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = skip_to_last_equal_value(&iblast, b);
    absx = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(bk - ak) < absx) ||
        (muDoubleScalarIsInf(ak) && muDoubleScalarIsInf(bk) &&
         ((ak > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }
    if (p) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        p = !muDoubleScalarIsNaN(ak);
      } else if (muDoubleScalarIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        nc++;
        nia++;
        c->data[nc - 1] = ak;
        ia->data[nia - 1] = iafirst + 1;
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast++;
      }
    }
  }
  while (ialast <= na) {
    iblast = ialast;
    ak = skip_to_last_equal_value(&iblast, a);
    nc++;
    nia++;
    c->data[nc - 1] = ak;
    ia->data[nia - 1] = iafirst + 1;
    ialast = iblast + 1;
    iafirst = iblast;
  }
  if (a->size[0] > 0) {
    if (nia > a->size[0]) {
      emlrtErrorWithMessageIdR2018a(sp, &lc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iblast = ia->size[0];
    if (1 > nia) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nia;
    }
    emxEnsureCapacity_int32_T(sp, ia, iblast, &cx_emlrtRTEI);
    if (nc > a->size[0]) {
      emlrtErrorWithMessageIdR2018a(sp, &mc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iblast = c->size[0];
    if (1 > nc) {
      c->size[0] = 0;
    } else {
      c->size[0] = nc;
    }
    emxEnsureCapacity_real_T(sp, c, iblast, &ex_emlrtRTEI);
  }
}

void f_do_vectors(const emlrtStack *sp, const emxArray_real_T *a,
                  const emxArray_real32_T *b, emxArray_real_T *c,
                  emxArray_int32_T *ia, int32_T *ib_size)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T ak;
  real_T b_absx;
  int32_T subs[2];
  int32_T b_exponent;
  int32_T b_n;
  int32_T dim;
  int32_T exponent;
  int32_T iafirst;
  int32_T n;
  int32_T na;
  int32_T nc;
  int32_T nia;
  real32_T absx;
  real32_T bk;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T y;
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
  na = a->size[1];
  dim = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, c, dim, &fx_emlrtRTEI);
  dim = ia->size[0];
  ia->size[0] = a->size[1];
  emxEnsureCapacity_int32_T(sp, ia, dim, &gx_emlrtRTEI);
  *ib_size = 0;
  st.site = &beb_emlrtRSI;
  if (!b_issorted(a)) {
    emlrtErrorWithMessageIdR2018a(sp, &kc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  st.site = &tdb_emlrtRSI;
  y = true;
  dim = 2;
  if (b->size[0] != 1) {
    dim = 1;
  }
  if (b->size[0] != 0) {
    if (dim <= 1) {
      n = b->size[0];
    } else {
      n = 1;
    }
    if (n != 1) {
      b_st.site = &udb_emlrtRSI;
      if (dim == 2) {
        n = -1;
      } else {
        n = 0;
      }
      c_st.site = &wdb_emlrtRSI;
      iafirst = 0;
      exitg1 = false;
      while ((!exitg1) && (iafirst <= n)) {
        c_st.site = &vdb_emlrtRSI;
        if (dim == 1) {
          b_n = b->size[0] - 1;
        } else {
          b_n = b->size[0];
        }
        d_st.site = &wdb_emlrtRSI;
        if ((1 <= b_n) && (b_n > 2147483646)) {
          e_st.site = &ab_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        iafirst = 0;
        exitg2 = false;
        while ((!exitg2) && (iafirst <= b_n - 1)) {
          subs[0] = iafirst + 1;
          subs[1] = 1;
          subs[dim - 1]++;
          absx = b->data[subs[0] - 1];
          if ((b->data[iafirst] <= absx) || muSingleScalarIsNaN(absx)) {
            iafirst++;
          } else {
            y = false;
            exitg2 = true;
          }
        }
        if (!y) {
          exitg1 = true;
        } else {
          iafirst = 1;
        }
      }
    }
  }
  if (!y) {
    emlrtErrorWithMessageIdR2018a(sp, &jc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  nc = 0;
  nia = 0;
  iafirst = 0;
  b_n = 1;
  dim = 1;
  while ((b_n <= na) && (dim <= b->size[0])) {
    n = b_n;
    st.site = &sdb_emlrtRSI;
    ak = b_skip_to_last_equal_value(&n, a);
    b_n = n;
    st.site = &rdb_emlrtRSI;
    bk = b->data[dim - 1];
    exitg1 = false;
    while ((!exitg1) && (dim < b->size[0])) {
      b_st.site = &xdb_emlrtRSI;
      c_st.site = &ydb_emlrtRSI;
      d_st.site = &tc_emlrtRSI;
      absx = muSingleScalarAbs(bk / 2.0F);
      if (!muSingleScalarIsNaN(absx)) {
        if (absx <= 1.17549435E-38F) {
          absx = 1.4013E-45F;
        } else {
          frexpf(absx, &exponent);
          absx = ldexpf(1.0F, exponent - 24);
        }
      } else {
        absx = rtNaNF;
      }
      if (muSingleScalarAbs(bk - b->data[dim]) < absx) {
        y = true;
      } else {
        y = false;
      }
      if (y) {
        dim++;
      } else {
        exitg1 = true;
      }
    }
    st.site = &qdb_emlrtRSI;
    b_st.site = &imb_emlrtRSI;
    c_st.site = &ydb_emlrtRSI;
    d_st.site = &tc_emlrtRSI;
    b_absx = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(b_absx)) && (!muDoubleScalarIsNaN(b_absx))) {
      if (b_absx <= 2.2250738585072014E-308) {
        b_absx = 4.94065645841247E-324;
      } else {
        frexp(b_absx, &b_exponent);
        b_absx = ldexp(1.0, b_exponent - 53);
      }
    } else {
      b_absx = rtNaN;
    }
    if ((muDoubleScalarAbs(bk - ak) < b_absx) ||
        (muDoubleScalarIsInf(ak) && muDoubleScalarIsInf(bk) &&
         ((ak > 0.0) == (bk > 0.0F)))) {
      y = true;
    } else {
      y = false;
    }
    if (y) {
      b_n = n + 1;
      iafirst = n;
      dim++;
    } else {
      if (muSingleScalarIsNaN(bk)) {
        y = !muDoubleScalarIsNaN(ak);
      } else if (muDoubleScalarIsNaN(ak)) {
        y = false;
      } else {
        y = (ak < bk);
      }
      if (y) {
        nc++;
        nia++;
        c->data[nc - 1] = ak;
        ia->data[nia - 1] = iafirst + 1;
        b_n = n + 1;
        iafirst = n;
      } else {
        dim++;
      }
    }
  }
  while (b_n <= na) {
    dim = b_n;
    st.site = &ceb_emlrtRSI;
    ak = b_skip_to_last_equal_value(&dim, a);
    nc++;
    nia++;
    c->data[nc - 1] = ak;
    ia->data[nia - 1] = iafirst + 1;
    b_n = dim + 1;
    iafirst = dim;
  }
  if (a->size[1] > 0) {
    if (nia > a->size[1]) {
      emlrtErrorWithMessageIdR2018a(sp, &lc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    dim = ia->size[0];
    if (1 > nia) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nia;
    }
    emxEnsureCapacity_int32_T(sp, ia, dim, &cx_emlrtRTEI);
    if (nc > a->size[1]) {
      emlrtErrorWithMessageIdR2018a(sp, &mc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    dim = c->size[0] * c->size[1];
    if (1 > nc) {
      c->size[1] = 0;
    } else {
      c->size[1] = nc;
    }
    emxEnsureCapacity_real_T(sp, c, dim, &hx_emlrtRTEI);
  }
}

void g_do_vectors(const emlrtStack *sp, const emxArray_real_T *a,
                  const emxArray_real_T *b, emxArray_real_T *c,
                  emxArray_int32_T *ia, int32_T *ib_size)
{
  real_T absx;
  real_T ak;
  real_T bk;
  int32_T b_ialast;
  int32_T exponent;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T na;
  int32_T nc;
  int32_T nia;
  boolean_T p;
  na = a->size[1];
  iblast = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = a->size[1];
  emxEnsureCapacity_real_T(sp, c, iblast, &fx_emlrtRTEI);
  iblast = ia->size[0];
  ia->size[0] = a->size[1];
  emxEnsureCapacity_int32_T(sp, ia, iblast, &gx_emlrtRTEI);
  *ib_size = 0;
  if (!b_issorted(a)) {
    emlrtErrorWithMessageIdR2018a(sp, &kc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  if (!b_issorted(b)) {
    emlrtErrorWithMessageIdR2018a(sp, &jc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= na) && (iblast <= b->size[1])) {
    b_ialast = ialast;
    ak = b_skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = b_skip_to_last_equal_value(&iblast, b);
    absx = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(bk - ak) < absx) ||
        (muDoubleScalarIsInf(ak) && muDoubleScalarIsInf(bk) &&
         ((ak > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }
    if (p) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        p = !muDoubleScalarIsNaN(ak);
      } else if (muDoubleScalarIsNaN(ak)) {
        p = false;
      } else {
        p = (ak < bk);
      }
      if (p) {
        nc++;
        nia++;
        c->data[nc - 1] = ak;
        ia->data[nia - 1] = iafirst + 1;
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast++;
      }
    }
  }
  while (ialast <= na) {
    iblast = ialast;
    ak = b_skip_to_last_equal_value(&iblast, a);
    nc++;
    nia++;
    c->data[nc - 1] = ak;
    ia->data[nia - 1] = iafirst + 1;
    ialast = iblast + 1;
    iafirst = iblast;
  }
  if (a->size[1] > 0) {
    if (nia > a->size[1]) {
      emlrtErrorWithMessageIdR2018a(sp, &lc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iblast = ia->size[0];
    if (1 > nia) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nia;
    }
    emxEnsureCapacity_int32_T(sp, ia, iblast, &cx_emlrtRTEI);
    if (nc > a->size[1]) {
      emlrtErrorWithMessageIdR2018a(sp, &mc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iblast = c->size[0] * c->size[1];
    if (1 > nc) {
      c->size[1] = 0;
    } else {
      c->size[1] = nc;
    }
    emxEnsureCapacity_real_T(sp, c, iblast, &hx_emlrtRTEI);
  }
}

/* End of code generation (eml_setop.c) */
