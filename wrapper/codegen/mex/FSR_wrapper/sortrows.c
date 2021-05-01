/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortrows.c
 *
 * Code generation for function 'sortrows'
 *
 */

/* Include files */
#include "sortrows.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortrowsLE.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    ws_emlrtRSI =
        {
            27,         /* lineNo */
            "sortrows", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrow"
            "s.m" /* pathName */
};

static emlrtRSInfo
    xs_emlrtRSI =
        {
            28,         /* lineNo */
            "sortrows", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrow"
            "s.m" /* pathName */
};

static emlrtRSInfo
    ys_emlrtRSI =
        {
            82,        /* lineNo */
            "sortIdx", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    at_emlrtRSI =
        {
            86,        /* lineNo */
            "sortIdx", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    bt_emlrtRSI =
        {
            39,                      /* lineNo */
            "apply_row_permutation", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrow"
            "s.m" /* pathName */
};

static emlrtRSInfo
    ct_emlrtRSI =
        {
            42,                      /* lineNo */
            "apply_row_permutation", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrow"
            "s.m" /* pathName */
};

static emlrtRTEInfo
    yhb_emlrtRTEI =
        {
            27,         /* lineNo */
            1,          /* colNo */
            "sortrows", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrow"
            "s.m" /* pName */
};

static emlrtRTEInfo
    aib_emlrtRTEI =
        {
            37,         /* lineNo */
            23,         /* colNo */
            "sortrows", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrow"
            "s.m" /* pName */
};

static emlrtRTEInfo
    bib_emlrtRTEI =
        {
            37,         /* lineNo */
            1,          /* colNo */
            "sortrows", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sortrow"
            "s.m" /* pName */
};

/* Function Declarations */
static void apply_row_permutation(const emlrtStack *sp, emxArray_real_T *y,
                                  const emxArray_int32_T *idx);

/* Function Definitions */
static void apply_row_permutation(const emlrtStack *sp, emxArray_real_T *y,
                                  const emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *ycol;
  int32_T i;
  int32_T j;
  int32_T m;
  boolean_T b_overflow;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_real_T(sp, &ycol, 1, &bib_emlrtRTEI, true);
  m = y->size[0];
  j = ycol->size[0];
  ycol->size[0] = y->size[0];
  emxEnsureCapacity_real_T(sp, ycol, j, &aib_emlrtRTEI);
  overflow = ((1 <= m) && (m > 2147483646));
  b_overflow = ((1 <= m) && (m > 2147483646));
  for (j = 0; j < 4; j++) {
    st.site = &bt_emlrtRSI;
    if (overflow) {
      b_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (i = 0; i < m; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * j) - 1];
    }
    st.site = &ct_emlrtRSI;
    if (b_overflow) {
      b_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (i = 0; i < m; i++) {
      y->data[i + y->size[0] * j] = ycol->data[i];
    }
  }
  emxFree_real_T(&ycol);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void b_sortrows(const emlrtStack *sp, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T kEnd;
  int32_T n;
  int32_T p;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int32_T(sp, &idx, 1, &yhb_emlrtRTEI, true);
  st.site = &ws_emlrtRSI;
  n = y->size[0] + 1;
  i = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(&st, idx, i, &yhb_emlrtRTEI);
  b_i = y->size[0];
  for (i = 0; i < b_i; i++) {
    idx->data[i] = 0;
  }
  if (y->size[0] == 0) {
    b_st.site = &ys_emlrtRSI;
    if ((1 <= y->size[0]) && (y->size[0] > 2147483646)) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k <= n - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&st, &iwork, 1, &qk_emlrtRTEI, true);
    b_st.site = &at_emlrtRSI;
    i = iwork->size[0];
    iwork->size[0] = y->size[0];
    emxEnsureCapacity_int32_T(&b_st, iwork, i, &pk_emlrtRTEI);
    b_i = y->size[0] - 1;
    c_st.site = &mk_emlrtRSI;
    if ((1 <= y->size[0] - 1) && (y->size[0] - 1 > 2147483645)) {
      d_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    if (1 <= b_i) {
      b_iv[0] = 3;
      b_iv[1] = 4;
    }
    for (k = 1; k <= b_i; k += 2) {
      if (sortrowsLE(y, b_iv, k, k + 1)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((y->size[0] & 1) != 0) {
      idx->data[y->size[0] - 1] = y->size[0];
    }
    b_i = 2;
    while (b_i < n - 1) {
      i2 = b_i << 1;
      j = 1;
      for (pEnd = b_i + 1; pEnd < n; pEnd = qEnd + b_i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        if (1 <= qEnd - j) {
          b_iv[0] = 3;
          b_iv[1] = 4;
        }
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          i = idx->data[q - 1];
          i1 = idx->data[p - 1];
          if (sortrowsLE(y, b_iv, i1, i)) {
            iwork->data[k] = i1;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        c_st.site = &nk_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      b_i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  st.site = &xs_emlrtRSI;
  apply_row_permutation(&st, y, idx);
  emxFree_int32_T(&idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_sortrows(const emlrtStack *sp, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T kEnd;
  int32_T n;
  int32_T p;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int32_T(sp, &idx, 1, &yhb_emlrtRTEI, true);
  st.site = &ws_emlrtRSI;
  n = y->size[0] + 1;
  i = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(&st, idx, i, &yhb_emlrtRTEI);
  b_i = y->size[0];
  for (i = 0; i < b_i; i++) {
    idx->data[i] = 0;
  }
  if (y->size[0] == 0) {
    b_st.site = &ys_emlrtRSI;
    if ((1 <= y->size[0]) && (y->size[0] > 2147483646)) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k <= n - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&st, &iwork, 1, &qk_emlrtRTEI, true);
    b_st.site = &at_emlrtRSI;
    i = iwork->size[0];
    iwork->size[0] = y->size[0];
    emxEnsureCapacity_int32_T(&b_st, iwork, i, &pk_emlrtRTEI);
    b_i = y->size[0] - 1;
    c_st.site = &mk_emlrtRSI;
    if ((1 <= y->size[0] - 1) && (y->size[0] - 1 > 2147483645)) {
      d_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    if (1 <= b_i) {
      b_iv[0] = 2;
      b_iv[1] = 4;
    }
    for (k = 1; k <= b_i; k += 2) {
      if (sortrowsLE(y, b_iv, k, k + 1)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((y->size[0] & 1) != 0) {
      idx->data[y->size[0] - 1] = y->size[0];
    }
    b_i = 2;
    while (b_i < n - 1) {
      i2 = b_i << 1;
      j = 1;
      for (pEnd = b_i + 1; pEnd < n; pEnd = qEnd + b_i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        if (1 <= qEnd - j) {
          b_iv[0] = 2;
          b_iv[1] = 4;
        }
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          i = idx->data[q - 1];
          i1 = idx->data[p - 1];
          if (sortrowsLE(y, b_iv, i1, i)) {
            iwork->data[k] = i1;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        c_st.site = &nk_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      b_i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  st.site = &xs_emlrtRSI;
  apply_row_permutation(&st, y, idx);
  emxFree_int32_T(&idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void d_sortrows(const emlrtStack *sp, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *ycol;
  real_T v1;
  real_T v2;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T kEnd;
  int32_T n;
  int32_T p;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  int32_T v1_tmp;
  int32_T v2_tmp;
  boolean_T b_overflow;
  boolean_T overflow;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int32_T(sp, &idx, 1, &yhb_emlrtRTEI, true);
  st.site = &ws_emlrtRSI;
  n = y->size[0] + 1;
  pEnd = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(&st, idx, pEnd, &yhb_emlrtRTEI);
  i2 = y->size[0];
  for (pEnd = 0; pEnd < i2; pEnd++) {
    idx->data[pEnd] = 0;
  }
  if (y->size[0] == 0) {
    b_st.site = &ys_emlrtRSI;
    if ((1 <= y->size[0]) && (y->size[0] > 2147483646)) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k <= n - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&st, &iwork, 1, &qk_emlrtRTEI, true);
    b_st.site = &at_emlrtRSI;
    pEnd = iwork->size[0];
    iwork->size[0] = y->size[0];
    emxEnsureCapacity_int32_T(&b_st, iwork, pEnd, &pk_emlrtRTEI);
    i2 = y->size[0] - 1;
    c_st.site = &mk_emlrtRSI;
    if ((1 <= y->size[0] - 1) && (y->size[0] - 1 > 2147483645)) {
      d_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 1; k <= i2; k += 2) {
      v1 = y->data[(k + y->size[0]) - 1];
      v2 = y->data[k + y->size[0]];
      if ((v1 == v2) || (muDoubleScalarIsNaN(v1) && muDoubleScalarIsNaN(v2)) ||
          (v1 <= v2) || muDoubleScalarIsNaN(v2)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((y->size[0] & 1) != 0) {
      idx->data[y->size[0] - 1] = y->size[0];
    }
    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = i + 1; pEnd < n; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          v1_tmp = idx->data[p - 1];
          v1 = y->data[(v1_tmp + y->size[0]) - 1];
          v2_tmp = idx->data[q - 1];
          v2 = y->data[(v2_tmp + y->size[0]) - 1];
          if ((v1 == v2) ||
              (muDoubleScalarIsNaN(v1) && muDoubleScalarIsNaN(v2)) ||
              (v1 <= v2) || muDoubleScalarIsNaN(v2)) {
            iwork->data[k] = v1_tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = v2_tmp;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        c_st.site = &nk_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  emxInit_real_T(&st, &ycol, 1, &bib_emlrtRTEI, true);
  st.site = &xs_emlrtRSI;
  i2 = y->size[0];
  pEnd = ycol->size[0];
  ycol->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, ycol, pEnd, &aib_emlrtRTEI);
  overflow = ((1 <= i2) && (i2 > 2147483646));
  b_overflow = ((1 <= i2) && (i2 > 2147483646));
  for (j = 0; j < 2; j++) {
    b_st.site = &bt_emlrtRSI;
    if (overflow) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (i = 0; i < i2; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * j) - 1];
    }
    b_st.site = &ct_emlrtRSI;
    if (b_overflow) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (i = 0; i < i2; i++) {
      y->data[i + y->size[0] * j] = ycol->data[i];
    }
  }
  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void sortrows(const emlrtStack *sp, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  real_T v1;
  real_T v2;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T kEnd;
  int32_T n;
  int32_T p;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  int32_T v1_tmp;
  int32_T v2_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int32_T(sp, &idx, 1, &yhb_emlrtRTEI, true);
  st.site = &ws_emlrtRSI;
  n = y->size[0] + 1;
  i2 = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(&st, idx, i2, &yhb_emlrtRTEI);
  i = y->size[0];
  for (i2 = 0; i2 < i; i2++) {
    idx->data[i2] = 0;
  }
  if (y->size[0] == 0) {
    b_st.site = &ys_emlrtRSI;
    if ((1 <= y->size[0]) && (y->size[0] > 2147483646)) {
      c_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }
    for (k = 0; k <= n - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&st, &iwork, 1, &qk_emlrtRTEI, true);
    b_st.site = &at_emlrtRSI;
    i2 = iwork->size[0];
    iwork->size[0] = y->size[0];
    emxEnsureCapacity_int32_T(&b_st, iwork, i2, &pk_emlrtRTEI);
    i = y->size[0] - 1;
    c_st.site = &mk_emlrtRSI;
    if ((1 <= y->size[0] - 1) && (y->size[0] - 1 > 2147483645)) {
      d_st.site = &ab_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 1; k <= i; k += 2) {
      v1 = y->data[(k + y->size[0] * 3) - 1];
      v2 = y->data[k + y->size[0] * 3];
      if ((v1 == v2) || (muDoubleScalarIsNaN(v1) && muDoubleScalarIsNaN(v2)) ||
          (v1 <= v2) || muDoubleScalarIsNaN(v2)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((y->size[0] & 1) != 0) {
      idx->data[y->size[0] - 1] = y->size[0];
    }
    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = i + 1; pEnd < n; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          v1_tmp = idx->data[p - 1];
          v1 = y->data[(v1_tmp + y->size[0] * 3) - 1];
          v2_tmp = idx->data[q - 1];
          v2 = y->data[(v2_tmp + y->size[0] * 3) - 1];
          if ((v1 == v2) ||
              (muDoubleScalarIsNaN(v1) && muDoubleScalarIsNaN(v2)) ||
              (v1 <= v2) || muDoubleScalarIsNaN(v2)) {
            iwork->data[k] = v1_tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = v2_tmp;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        c_st.site = &nk_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  st.site = &xs_emlrtRSI;
  apply_row_permutation(&st, y, idx);
  emxFree_int32_T(&idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (sortrows.c) */
