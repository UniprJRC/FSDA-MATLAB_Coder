/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tcdf.c
 *
 * Code generation for function 'tcdf'
 *
 */

/* Include files */
#include "tcdf.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "betainc.h"
#include "eml_erfcore.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo ybb_emlrtRSI = {
    29,     /* lineNo */
    "tcdf", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m" /* pathName
                                                                      */
};

static emlrtBCInfo ap_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    21,     /* lineNo */
    36,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo bp_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    53,     /* lineNo */
    9,      /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo cp_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    26,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo dp_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    34,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ep_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    46,     /* lineNo */
    17,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo fp_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    44,     /* lineNo */
    17,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo gp_emlrtBCI = {
    -1,     /* iFirst */
    -1,     /* iLast */
    29,     /* lineNo */
    13,     /* colNo */
    "",     /* aName */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtRTEInfo xw_emlrtRTEI = {
    16,     /* lineNo */
    5,      /* colNo */
    "tcdf", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\tcdf.m" /* pName */
};

/* Function Definitions */
void tcdf(const emlrtStack *sp, const emxArray_real_T *x, real_T v,
          emxArray_real_T *p)
{
  emlrtStack st;
  creal_T dc;
  real_T xsq;
  int32_T i;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  i = p->size[0];
  p->size[0] = x->size[0];
  emxEnsureCapacity_real_T(sp, p, i, &xw_emlrtRTEI);
  i = x->size[0];
  for (k = 0; k < i; k++) {
    if (k + 1 > x->size[0]) {
      emlrtDynamicBoundsCheckR2012b(k + 1, 1, x->size[0], &ap_emlrtBCI,
                                    (emlrtCTX)sp);
    }
    if ((v > 0.0) && (!muDoubleScalarIsNaN(x->data[k]))) {
      if (x->data[k] == 0.0) {
        if (k + 1 > p->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, p->size[0], &cp_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        p->data[k] = 0.5;
      } else if (v > 1.0E+7) {
        st.site = &ybb_emlrtRSI;
        xsq = eml_erfcore(-x->data[k] / 1.4142135623730951);
        if (k + 1 > p->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, p->size[0], &gp_emlrtBCI,
                                        &st);
        }
        p->data[k] = 0.5 * xsq;
      } else if (v == 1.0) {
        if (k + 1 > p->size[0]) {
          emlrtDynamicBoundsCheckR2012b(k + 1, 1, p->size[0], &dp_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        p->data[k] = muDoubleScalarAtan(1.0 / -x->data[k]) / 3.1415926535897931;
      } else {
        xsq = x->data[k] * x->data[k];
        if (v < xsq) {
          st.site = &xbb_emlrtRSI;
          dc = betainc(&st, v / (v + xsq), v / 2.0, 0.5);
          if (k + 1 > p->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, p->size[0], &fp_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          p->data[k] = dc.re / 2.0;
        } else {
          st.site = &wbb_emlrtRSI;
          dc = b_betainc(&st, xsq / (v + xsq), 0.5, v / 2.0);
          if (k + 1 > p->size[0]) {
            emlrtDynamicBoundsCheckR2012b(k + 1, 1, p->size[0], &ep_emlrtBCI,
                                          (emlrtCTX)sp);
          }
          p->data[k] = dc.re / 2.0;
        }
      }
    } else {
      if (k + 1 > p->size[0]) {
        emlrtDynamicBoundsCheckR2012b(k + 1, 1, p->size[0], &bp_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      p->data[k] = rtNaN;
    }
  }
}

/* End of code generation (tcdf.c) */
