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
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "issorted.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo wdb_emlrtRSI = {
    218,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    219,          /* lineNo */
    13,           /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    216,          /* lineNo */
    13,           /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    383,          /* lineNo */
    5,            /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    421,          /* lineNo */
    5,            /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    394,          /* lineNo */
    9,            /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo bw_emlrtRTEI = {
    197,         /* lineNo */
    24,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo cw_emlrtRTEI = {
    198,         /* lineNo */
    25,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo dw_emlrtRTEI = {
    199,         /* lineNo */
    25,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo ew_emlrtRTEI = {
    389,         /* lineNo */
    9,           /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo fw_emlrtRTEI = {
    400,         /* lineNo */
    13,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo gw_emlrtRTEI = {
    425,         /* lineNo */
    9,           /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo hw_emlrtRTEI = {
    185,         /* lineNo */
    24,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo iw_emlrtRTEI = {
    192,         /* lineNo */
    29,          /* colNo */
    "eml_setop", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

static emlrtRTEInfo jw_emlrtRTEI = {
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
  emxEnsureCapacity_real_T(sp, c, iblast, &hw_emlrtRTEI);
  iblast = ia->size[0];
  ia->size[0] = a->size[1];
  emxEnsureCapacity_int32_T(sp, ia, iblast, &iw_emlrtRTEI);
  *ib_size = 0;
  if (!b_issorted(a)) {
    emlrtErrorWithMessageIdR2018a(sp, &dc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  st.site = &wdb_emlrtRSI;
  if (!issorted(&st, b)) {
    emlrtErrorWithMessageIdR2018a(sp, &cc_emlrtRTEI,
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
      emlrtErrorWithMessageIdR2018a(sp, &ec_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iblast = ia->size[0];
    if (1 > nia) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nia;
    }
    emxEnsureCapacity_int32_T(sp, ia, iblast, &ew_emlrtRTEI);
    if (nc > a->size[1]) {
      emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iblast = c->size[0] * c->size[1];
    if (1 > nc) {
      c->size[1] = 0;
    } else {
      c->size[1] = nc;
    }
    emxEnsureCapacity_real_T(sp, c, iblast, &jw_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, c, iafirst, &bw_emlrtRTEI);
  iafirst = ia->size[0];
  ia->size[0] = ncmax;
  emxEnsureCapacity_int32_T(sp, ia, iafirst, &cw_emlrtRTEI);
  iafirst = ib->size[0];
  ib->size[0] = ncmax;
  emxEnsureCapacity_int32_T(sp, ib, iafirst, &dw_emlrtRTEI);
  if (!b_issorted(a)) {
    emlrtErrorWithMessageIdR2018a(sp, &dc_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedA",
                                  "Coder:toolbox:eml_setop_unsortedA", 0);
  }
  st.site = &wdb_emlrtRSI;
  if (!issorted(&st, b)) {
    emlrtErrorWithMessageIdR2018a(sp, &cc_emlrtRTEI,
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
      emlrtErrorWithMessageIdR2018a(sp, &ec_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iafirst = ia->size[0];
    if (1 > nc) {
      ia->size[0] = 0;
    } else {
      ia->size[0] = nc;
    }
    emxEnsureCapacity_int32_T(sp, ia, iafirst, &ew_emlrtRTEI);
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(sp, &ic_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iafirst = ib->size[0];
    if (1 > nc) {
      ib->size[0] = 0;
    } else {
      ib->size[0] = nc;
    }
    emxEnsureCapacity_int32_T(sp, ib, iafirst, &fw_emlrtRTEI);
    if (nc > ncmax) {
      emlrtErrorWithMessageIdR2018a(sp, &fc_emlrtRTEI,
                                    "Coder:builtins:AssertionFailed",
                                    "Coder:builtins:AssertionFailed", 0);
    }
    iafirst = c->size[0];
    if (1 > nc) {
      c->size[0] = 0;
    } else {
      c->size[0] = nc;
    }
    emxEnsureCapacity_real_T(sp, c, iafirst, &gw_emlrtRTEI);
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
  st.site = &wdb_emlrtRSI;
  if (!issorted(&st, b)) {
    emlrtErrorWithMessageIdR2018a(sp, &cc_emlrtRTEI,
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

/* End of code generation (eml_setop.c) */
