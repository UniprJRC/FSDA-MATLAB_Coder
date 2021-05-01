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
#include "FSMbsb_wrapper_data.h"
#include "FSMbsb_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <math.h>

/* Variable Definitions */
static emlrtRSInfo of_emlrtRSI = {
    252,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = {
    250,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    218,          /* lineNo */
    "do_vectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRSInfo
    rf_emlrtRSI =
        {
            74,         /* lineNo */
            "issorted", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\issorte"
            "d.m" /* pathName */
};

static emlrtRSInfo
    sf_emlrtRSI =
        {
            112,      /* lineNo */
            "looper", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\issorte"
            "d.m" /* pathName */
};

static emlrtRSInfo
    tf_emlrtRSI =
        {
            95,       /* lineNo */
            "looper", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\issorte"
            "d.m" /* pathName */
};

static emlrtRSInfo
    uf_emlrtRSI =
        {
            40,       /* lineNo */
            "safeEq", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\safeEq.m" /* pathName */
};

static emlrtRSInfo vf_emlrtRSI = {
    450,                        /* lineNo */
    "skip_to_last_equal_value", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pathName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    219,          /* lineNo */
    13,           /* colNo */
    "do_vectors", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop."
    "m" /* pName */
};

/* Function Definitions */
void do_vectors(const emlrtStack *sp, real_T a, const emxArray_real_T *b,
                real_T c_data[], int32_T *c_size, int32_T ia_data[],
                int32_T *ia_size, int32_T ib_data[], int32_T *ib_size)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T absx;
  real_T bk;
  int32_T subs[2];
  int32_T b_exponent;
  int32_T b_n;
  int32_T dim;
  int32_T exponent;
  int32_T iblast;
  int32_T n;
  int32_T nb;
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
  nb = b->size[0];
  *c_size = muIntScalarMin_sint32(1, nb);
  *ia_size = (int8_T)*c_size;
  *ib_size = (int8_T)*c_size;
  st.site = &qf_emlrtRSI;
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
      b_st.site = &rf_emlrtRSI;
      if (dim == 2) {
        n = -1;
      } else {
        n = 0;
      }
      c_st.site = &tf_emlrtRSI;
      iblast = 0;
      exitg1 = false;
      while ((!exitg1) && (iblast <= n)) {
        c_st.site = &sf_emlrtRSI;
        if (dim == 1) {
          b_n = b->size[0] - 1;
        } else {
          b_n = b->size[0];
        }
        d_st.site = &tf_emlrtRSI;
        if ((1 <= b_n) && (b_n > 2147483646)) {
          e_st.site = &mc_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        iblast = 0;
        exitg2 = false;
        while ((!exitg2) && (iblast <= b_n - 1)) {
          subs[0] = iblast + 1;
          subs[1] = 1;
          subs[dim - 1]++;
          absx = b->data[subs[0] - 1];
          if ((b->data[iblast] <= absx) || muDoubleScalarIsNaN(absx)) {
            iblast++;
          } else {
            y = false;
            exitg2 = true;
          }
        }
        if (!y) {
          exitg1 = true;
        } else {
          iblast = 1;
        }
      }
    }
  }
  if (!y) {
    emlrtErrorWithMessageIdR2018a(sp, &q_emlrtRTEI,
                                  "Coder:toolbox:eml_setop_unsortedB",
                                  "Coder:toolbox:eml_setop_unsortedB", 0);
  }
  dim = 0;
  n = 0;
  iblast = 1;
  exitg1 = false;
  while ((!exitg1) && (iblast <= nb)) {
    st.site = &pf_emlrtRSI;
    b_n = iblast;
    bk = b->data[iblast - 1];
    exitg2 = false;
    while ((!exitg2) && (b_n < b->size[0])) {
      b_st.site = &vf_emlrtRSI;
      c_st.site = &uf_emlrtRSI;
      d_st.site = &ee_emlrtRSI;
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
      if ((muDoubleScalarAbs(bk - b->data[b_n]) < absx) ||
          (muDoubleScalarIsInf(b->data[b_n]) && muDoubleScalarIsInf(bk) &&
           ((b->data[b_n] > 0.0) == (bk > 0.0)))) {
        y = true;
      } else {
        y = false;
      }
      if (y) {
        b_n++;
      } else {
        exitg2 = true;
      }
    }
    st.site = &of_emlrtRSI;
    b_st.site = &uf_emlrtRSI;
    c_st.site = &ee_emlrtRSI;
    absx = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &b_exponent);
        absx = ldexp(1.0, b_exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    if ((muDoubleScalarAbs(bk - a) < absx) ||
        (muDoubleScalarIsInf(a) && muDoubleScalarIsInf(bk) &&
         ((a > 0.0) == (bk > 0.0)))) {
      y = true;
    } else {
      y = false;
    }
    if (y) {
      dim = 1;
      c_data[0] = a;
      ia_data[0] = 1;
      ib_data[0] = n + 1;
      exitg1 = true;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        y = !muDoubleScalarIsNaN(a);
      } else if (muDoubleScalarIsNaN(a)) {
        y = false;
      } else {
        y = (a < bk);
      }
      if (y) {
        exitg1 = true;
      } else {
        iblast = b_n + 1;
        n = b_n;
      }
    }
  }
  if (*c_size > 0) {
    *ia_size = (1 <= dim);
    *ib_size = (1 <= dim);
    *c_size = (1 <= dim);
  }
}

/* End of code generation (eml_setop.c) */
