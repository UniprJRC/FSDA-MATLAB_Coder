/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * median.c
 *
 * Code generation for function 'median'
 *
 */

/* Include files */
#include "median.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "quickselect.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo kj_emlrtRSI = {
    88,       /* lineNo */
    "median", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\median.m" /* pathName
                                                                           */
};

static emlrtRSInfo lj_emlrtRSI = {
    87,        /* lineNo */
    "vmedian", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" /* pathName */
};

static emlrtRSInfo mj_emlrtRSI = {
    108,       /* lineNo */
    "vmedian", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" /* pathName */
};

static emlrtRSInfo nj_emlrtRSI = {
    113,       /* lineNo */
    "vmedian", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" /* pathName */
};

static emlrtRSInfo oj_emlrtRSI = {
    119,       /* lineNo */
    "vmedian", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" /* pathName */
};

static emlrtRTEInfo oj_emlrtRTEI = {
    119,       /* lineNo */
    15,        /* colNo */
    "vmedian", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" /* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = {
    108,       /* lineNo */
    15,        /* colNo */
    "vmedian", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\vmedia"
    "n.m" /* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = {
    1,        /* lineNo */
    14,       /* colNo */
    "median", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\median.m" /* pName
                                                                           */
};

/* Function Definitions */
real_T median(const emlrtStack *sp, const emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *a__4;
  real_T b;
  real_T y;
  int32_T a__6;
  int32_T exitg1;
  int32_T k;
  int32_T midm1;
  int32_T vlen;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  vlen = x->size[0];
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    st.site = &kj_emlrtRSI;
    b_st.site = &lj_emlrtRSI;
    if (x->size[0] > 2147483646) {
      c_st.site = &hc_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    k = 0;
    emxInit_real_T(&st, &a__4, 1, &qj_emlrtRTEI, true);
    do {
      exitg1 = 0;
      if (k <= vlen - 1) {
        if (muDoubleScalarIsNaN(x->data[k])) {
          y = rtNaN;
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        if (vlen <= 4) {
          if (vlen == 0) {
            y = rtNaN;
          } else if (vlen == 1) {
            y = x->data[0];
          } else if (vlen == 2) {
            if (((x->data[0] < 0.0) != (x->data[1] < 0.0)) ||
                muDoubleScalarIsInf(x->data[0])) {
              y = (x->data[0] + x->data[1]) / 2.0;
            } else {
              y = x->data[0] + (x->data[1] - x->data[0]) / 2.0;
            }
          } else if (vlen == 3) {
            if (x->data[0] < x->data[1]) {
              if (x->data[1] < x->data[2]) {
                a__6 = 1;
              } else if (x->data[0] < x->data[2]) {
                a__6 = 2;
              } else {
                a__6 = 0;
              }
            } else if (x->data[0] < x->data[2]) {
              a__6 = 0;
            } else if (x->data[1] < x->data[2]) {
              a__6 = 2;
            } else {
              a__6 = 1;
            }
            y = x->data[a__6];
          } else {
            if (x->data[0] < x->data[1]) {
              if (x->data[1] < x->data[2]) {
                k = 0;
                a__6 = 1;
                vlen = 2;
              } else if (x->data[0] < x->data[2]) {
                k = 0;
                a__6 = 2;
                vlen = 1;
              } else {
                k = 2;
                a__6 = 0;
                vlen = 1;
              }
            } else if (x->data[0] < x->data[2]) {
              k = 1;
              a__6 = 0;
              vlen = 2;
            } else if (x->data[1] < x->data[2]) {
              k = 1;
              a__6 = 2;
              vlen = 0;
            } else {
              k = 2;
              a__6 = 1;
              vlen = 0;
            }
            if (x->data[k] < x->data[3]) {
              if (x->data[3] < x->data[vlen]) {
                if (((x->data[a__6] < 0.0) != (x->data[3] < 0.0)) ||
                    muDoubleScalarIsInf(x->data[a__6])) {
                  y = (x->data[a__6] + x->data[3]) / 2.0;
                } else {
                  y = x->data[a__6] + (x->data[3] - x->data[a__6]) / 2.0;
                }
              } else if (((x->data[a__6] < 0.0) != (x->data[vlen] < 0.0)) ||
                         muDoubleScalarIsInf(x->data[a__6])) {
                y = (x->data[a__6] + x->data[vlen]) / 2.0;
              } else {
                y = x->data[a__6] + (x->data[vlen] - x->data[a__6]) / 2.0;
              }
            } else if (((x->data[k] < 0.0) != (x->data[a__6] < 0.0)) ||
                       muDoubleScalarIsInf(x->data[k])) {
              y = (x->data[k] + x->data[a__6]) / 2.0;
            } else {
              y = x->data[k] + (x->data[a__6] - x->data[k]) / 2.0;
            }
          }
        } else {
          midm1 = vlen >> 1;
          if ((vlen & 1) == 0) {
            a__6 = a__4->size[0];
            a__4->size[0] = x->size[0];
            emxEnsureCapacity_real_T(&st, a__4, a__6, &pj_emlrtRTEI);
            k = x->size[0];
            for (a__6 = 0; a__6 < k; a__6++) {
              a__4->data[a__6] = x->data[a__6];
            }
            b_st.site = &mj_emlrtRSI;
            quickselect(a__4, midm1 + 1, vlen, &y, &k, &a__6);
            if (midm1 < k) {
              b_st.site = &nj_emlrtRSI;
              quickselect(a__4, midm1, a__6 - 1, &b, &k, &vlen);
              if (((y < 0.0) != (b < 0.0)) || muDoubleScalarIsInf(y)) {
                y = (y + b) / 2.0;
              } else {
                y += (b - y) / 2.0;
              }
            }
          } else {
            a__6 = a__4->size[0];
            a__4->size[0] = x->size[0];
            emxEnsureCapacity_real_T(&st, a__4, a__6, &oj_emlrtRTEI);
            k = x->size[0];
            for (a__6 = 0; a__6 < k; a__6++) {
              a__4->data[a__6] = x->data[a__6];
            }
            b_st.site = &oj_emlrtRSI;
            quickselect(a__4, midm1 + 1, vlen, &y, &k, &a__6);
          }
        }
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    emxFree_real_T(&a__4);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (median.c) */
