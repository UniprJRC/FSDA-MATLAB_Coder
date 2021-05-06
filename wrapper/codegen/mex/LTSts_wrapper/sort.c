/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.c
 *
 * Code generation for function 'sort'
 *
 */

/* Include files */
#include "sort.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo dq_emlrtRSI = {
    76,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo eq_emlrtRSI = {
    79,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo fq_emlrtRSI = {
    81,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo gq_emlrtRSI = {
    84,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo hq_emlrtRSI = {
    87,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo iq_emlrtRSI = {
    90,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRSInfo yu_emlrtRSI = {
    72,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pathName
                                                                           */
};

static emlrtRTEInfo fx_emlrtRTEI = {
    56,     /* lineNo */
    24,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo gx_emlrtRTEI = {
    75,     /* lineNo */
    26,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo hx_emlrtRTEI = {
    56,     /* lineNo */
    1,      /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo ix_emlrtRTEI = {
    1,      /* lineNo */
    20,     /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m" /* pName
                                                                           */
};

static emlrtRTEInfo
    nx_emlrtRTEI =
        {
            56,        /* lineNo */
            5,         /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

/* Function Definitions */
void b_sort(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *bfb_emlrtRSI;
  emxArray_real_T *vwork;
  int32_T dim;
  int32_T i;
  int32_T k;
  int32_T vlen;
  int32_T vstride;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(sp, &vwork, 1, &hx_emlrtRTEI, true);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  vstride = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(sp, vwork, vstride, &fx_emlrtRTEI);
  st.site = &dq_emlrtRSI;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  st.site = &eq_emlrtRSI;
  st.site = &fq_emlrtRSI;
  if ((1 <= vstride) && (vstride > 2147483646)) {
    b_st.site = &qf_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  emxInit_int32_T(sp, &bfb_emlrtRSI, 1, &ix_emlrtRTEI, true);
  for (dim = 0; dim < vstride; dim++) {
    st.site = &gq_emlrtRSI;
    if ((1 <= i) && (i > 2147483646)) {
      b_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[dim + k * vstride];
    }
    st.site = &hq_emlrtRSI;
    b_sortIdx(&st, vwork, bfb_emlrtRSI);
    st.site = &iq_emlrtRSI;
    for (k = 0; k <= vlen; k++) {
      x->data[dim + k * vstride] = vwork->data[k];
    }
  }
  emxFree_int32_T(&bfb_emlrtRSI);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void c_sort(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *xwork;
  real_T x4[4];
  real_T d;
  real_T d1;
  int32_T idx4[4];
  int32_T b_n;
  int32_T i1;
  int32_T i3;
  int32_T i4;
  int32_T ib;
  int32_T k;
  int32_T n;
  int32_T nNaNs;
  int32_T quartetOffset;
  int8_T perm[4];
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInit_int32_T(sp, &idx, 2, &ix_emlrtRTEI, true);
  st.site = &yu_emlrtRSI;
  quartetOffset = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(&st, idx, quartetOffset, &nx_emlrtRTEI);
  ib = x->size[1];
  for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
    idx->data[quartetOffset] = 0;
  }
  if (x->size[1] != 0) {
    emxInit_int32_T(&st, &iwork, 1, &lx_emlrtRTEI, true);
    b_st.site = &kq_emlrtRSI;
    n = x->size[1];
    c_st.site = &lq_emlrtRSI;
    b_n = x->size[1];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    ib = x->size[1];
    quartetOffset = iwork->size[0];
    iwork->size[0] = ib;
    emxEnsureCapacity_int32_T(&c_st, iwork, quartetOffset, &jx_emlrtRTEI);
    for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
      iwork->data[quartetOffset] = 0;
    }
    emxInit_real_T(&c_st, &xwork, 1, &mx_emlrtRTEI, true);
    ib = x->size[1];
    quartetOffset = xwork->size[0];
    xwork->size[0] = ib;
    emxEnsureCapacity_real_T(&c_st, xwork, quartetOffset, &kx_emlrtRTEI);
    for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
      xwork->data[quartetOffset] = 0.0;
    }
    nNaNs = 0;
    ib = -1;
    d_st.site = &qq_emlrtRSI;
    if ((1 <= x->size[1]) && (x->size[1] > 2147483646)) {
      e_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (k = 0; k < b_n; k++) {
      if (muDoubleScalarIsNaN(x->data[k])) {
        i3 = (b_n - nNaNs) - 1;
        idx->data[i3] = k + 1;
        xwork->data[i3] = x->data[k];
        nNaNs++;
      } else {
        ib++;
        idx4[ib] = k + 1;
        x4[ib] = x->data[k];
        if (ib + 1 == 4) {
          quartetOffset = k - nNaNs;
          if (x4[0] <= x4[1]) {
            i1 = 1;
            ib = 2;
          } else {
            i1 = 2;
            ib = 1;
          }
          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[i1 - 1];
          d1 = x4[i3 - 1];
          if (d <= d1) {
            d = x4[ib - 1];
            if (d <= d1) {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)ib;
              perm[2] = (int8_T)i3;
              perm[3] = (int8_T)i4;
            } else if (d <= x4[i4 - 1]) {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)i3;
              perm[2] = (int8_T)ib;
              perm[3] = (int8_T)i4;
            } else {
              perm[0] = (int8_T)i1;
              perm[1] = (int8_T)i3;
              perm[2] = (int8_T)i4;
              perm[3] = (int8_T)ib;
            }
          } else {
            d1 = x4[i4 - 1];
            if (d <= d1) {
              if (x4[ib - 1] <= d1) {
                perm[0] = (int8_T)i3;
                perm[1] = (int8_T)i1;
                perm[2] = (int8_T)ib;
                perm[3] = (int8_T)i4;
              } else {
                perm[0] = (int8_T)i3;
                perm[1] = (int8_T)i1;
                perm[2] = (int8_T)i4;
                perm[3] = (int8_T)ib;
              }
            } else {
              perm[0] = (int8_T)i3;
              perm[1] = (int8_T)i4;
              perm[2] = (int8_T)i1;
              perm[3] = (int8_T)ib;
            }
          }
          idx->data[quartetOffset - 3] = idx4[perm[0] - 1];
          idx->data[quartetOffset - 2] = idx4[perm[1] - 1];
          idx->data[quartetOffset - 1] = idx4[perm[2] - 1];
          idx->data[quartetOffset] = idx4[perm[3] - 1];
          x->data[quartetOffset - 3] = x4[perm[0] - 1];
          x->data[quartetOffset - 2] = x4[perm[1] - 1];
          x->data[quartetOffset - 1] = x4[perm[2] - 1];
          x->data[quartetOffset] = x4[perm[3] - 1];
          ib = -1;
        }
      }
    }
    i4 = (b_n - nNaNs) - 1;
    if (ib + 1 > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib + 1 == 1) {
        perm[0] = 1;
      } else if (ib + 1 == 2) {
        if (x4[0] <= x4[1]) {
          perm[0] = 1;
          perm[1] = 2;
        } else {
          perm[0] = 2;
          perm[1] = 1;
        }
      } else if (x4[0] <= x4[1]) {
        if (x4[1] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 2;
          perm[2] = 3;
        } else if (x4[0] <= x4[2]) {
          perm[0] = 1;
          perm[1] = 3;
          perm[2] = 2;
        } else {
          perm[0] = 3;
          perm[1] = 1;
          perm[2] = 2;
        }
      } else if (x4[0] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 1;
        perm[2] = 3;
      } else if (x4[1] <= x4[2]) {
        perm[0] = 2;
        perm[1] = 3;
        perm[2] = 1;
      } else {
        perm[0] = 3;
        perm[1] = 2;
        perm[2] = 1;
      }
      d_st.site = &rq_emlrtRSI;
      if (ib + 1 > 2147483646) {
        e_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }
      for (k = 0; k <= ib; k++) {
        i3 = perm[k] - 1;
        quartetOffset = (i4 - ib) + k;
        idx->data[quartetOffset] = idx4[i3];
        x->data[quartetOffset] = x4[i3];
      }
    }
    ib = (nNaNs >> 1) + 1;
    d_st.site = &sq_emlrtRSI;
    for (k = 0; k <= ib - 2; k++) {
      quartetOffset = (i4 + k) + 1;
      i1 = idx->data[quartetOffset];
      i3 = (b_n - k) - 1;
      idx->data[quartetOffset] = idx->data[i3];
      idx->data[i3] = i1;
      x->data[quartetOffset] = xwork->data[i3];
      x->data[i3] = xwork->data[quartetOffset];
    }
    if ((nNaNs & 1) != 0) {
      quartetOffset = i4 + ib;
      x->data[quartetOffset] = xwork->data[quartetOffset];
    }
    i1 = n - nNaNs;
    ib = 2;
    if (i1 > 1) {
      if (n >= 256) {
        quartetOffset = i1 >> 8;
        if (quartetOffset > 0) {
          c_st.site = &mq_emlrtRSI;
          for (ib = 0; ib < quartetOffset; ib++) {
            c_st.site = &nq_emlrtRSI;
            merge_pow2_block(idx, x, ib << 8);
          }
          ib = quartetOffset << 8;
          quartetOffset = i1 - ib;
          if (quartetOffset > 0) {
            c_st.site = &oq_emlrtRSI;
            merge_block(&c_st, idx, x, ib, quartetOffset, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      c_st.site = &pq_emlrtRSI;
      merge_block(&c_st, idx, x, 0, i1, ib, iwork, xwork);
    }
    emxFree_real_T(&xwork);
    emxFree_int32_T(&iwork);
  }
  emxFree_int32_T(&idx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void d_sort(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *bfb_emlrtRSI;
  emxArray_real_T *vwork;
  int32_T b_i;
  int32_T dim;
  int32_T i;
  int32_T idx0;
  int32_T j;
  int32_T k;
  int32_T npages;
  int32_T pageoffset;
  int32_T vlen;
  int32_T vstride;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  dim = 1;
  if (x->size[0] != 1) {
    dim = 0;
  }
  emxInit_real_T(sp, &vwork, 1, &hx_emlrtRTEI, true);
  i = x->size[dim];
  vlen = x->size[dim] - 1;
  pageoffset = vwork->size[0];
  vwork->size[0] = x->size[dim];
  emxEnsureCapacity_real_T(sp, vwork, pageoffset, &fx_emlrtRTEI);
  st.site = &dq_emlrtRSI;
  vstride = 1;
  for (k = 0; k < dim; k++) {
    vstride *= x->size[0];
  }
  npages = 1;
  pageoffset = dim + 2;
  for (k = pageoffset; k < 3; k++) {
    npages *= x->size[1];
  }
  dim = x->size[dim] * vstride;
  st.site = &eq_emlrtRSI;
  if ((1 <= npages) && (npages > 2147483646)) {
    b_st.site = &qf_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  emxInit_int32_T(sp, &bfb_emlrtRSI, 1, &ix_emlrtRTEI, true);
  for (b_i = 0; b_i < npages; b_i++) {
    pageoffset = b_i * dim;
    st.site = &fq_emlrtRSI;
    if ((1 <= vstride) && (vstride > 2147483646)) {
      b_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 0; j < vstride; j++) {
      idx0 = pageoffset + j;
      st.site = &gq_emlrtRSI;
      if ((1 <= i) && (i > 2147483646)) {
        b_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (k = 0; k <= vlen; k++) {
        vwork->data[k] = x->data[idx0 + k * vstride];
      }
      st.site = &hq_emlrtRSI;
      b_sortIdx(&st, vwork, bfb_emlrtRSI);
      st.site = &iq_emlrtRSI;
      for (k = 0; k <= vlen; k++) {
        x->data[idx0 + k * vstride] = vwork->data[k];
      }
    }
  }
  emxFree_int32_T(&bfb_emlrtRSI);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *iidx;
  emxArray_real_T *vwork;
  int32_T dim;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T vlen;
  int32_T vstride;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(sp, &vwork, 1, &hx_emlrtRTEI, true);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  i1 = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(sp, vwork, i1, &fx_emlrtRTEI);
  i1 = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(sp, idx, i1, &gx_emlrtRTEI);
  st.site = &dq_emlrtRSI;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  st.site = &eq_emlrtRSI;
  st.site = &fq_emlrtRSI;
  if ((1 <= vstride) && (vstride > 2147483646)) {
    b_st.site = &qf_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  emxInit_int32_T(sp, &iidx, 1, &ix_emlrtRTEI, true);
  for (dim = 0; dim < vstride; dim++) {
    st.site = &gq_emlrtRSI;
    if ((1 <= i) && (i > 2147483646)) {
      b_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[dim + k * vstride];
    }
    st.site = &hq_emlrtRSI;
    b_sortIdx(&st, vwork, iidx);
    st.site = &iq_emlrtRSI;
    for (k = 0; k <= vlen; k++) {
      i1 = dim + k * vstride;
      x->data[i1] = vwork->data[k];
      idx->data[i1] = iidx->data[k];
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (sort.c) */
