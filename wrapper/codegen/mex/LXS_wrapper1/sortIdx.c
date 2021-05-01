/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortIdx.c
 *
 * Code generation for function 'sortIdx'
 *
 */

/* Include files */
#include "sortIdx.h"
#include "LXS_wrapper1_data.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo
    rl_emlrtRSI =
        {
            105,       /* lineNo */
            "sortIdx", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    sl_emlrtRSI =
        {
            308,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    tl_emlrtRSI =
        {
            316,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    ul_emlrtRSI =
        {
            317,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    vl_emlrtRSI =
        {
            325,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    wl_emlrtRSI =
        {
            333,                /* lineNo */
            "block_merge_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    xl_emlrtRSI =
        {
            392,                      /* lineNo */
            "initialize_vector_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    yl_emlrtRSI =
        {
            420,                      /* lineNo */
            "initialize_vector_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    am_emlrtRSI =
        {
            427,                      /* lineNo */
            "initialize_vector_sort", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    em_emlrtRSI =
        {
            499,           /* lineNo */
            "merge_block", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    gm_emlrtRSI =
        {
            507,           /* lineNo */
            "merge_block", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    hm_emlrtRSI =
        {
            514,           /* lineNo */
            "merge_block", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    im_emlrtRSI =
        {
            561,     /* lineNo */
            "merge", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRSInfo
    jm_emlrtRSI =
        {
            530,     /* lineNo */
            "merge", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pathName */
};

static emlrtRTEInfo
    uj_emlrtRTEI =
        {
            61,        /* lineNo */
            5,         /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    fab_emlrtRTEI =
        {
            386,       /* lineNo */
            1,         /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    gab_emlrtRTEI =
        {
            388,       /* lineNo */
            1,         /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    hab_emlrtRTEI =
        {
            308,       /* lineNo */
            14,        /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

static emlrtRTEInfo
    iab_emlrtRTEI =
        {
            308,       /* lineNo */
            20,        /* colNo */
            "sortIdx", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\sortIdx.m" /* pName */
};

/* Function Declarations */
static void merge(const emlrtStack *sp, emxArray_int32_T *idx,
                  emxArray_real_T *x, int32_T offset, int32_T np, int32_T nq,
                  emxArray_int32_T *iwork, emxArray_real_T *xwork);

static void merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
                        emxArray_real_T *x, int32_T offset, int32_T n,
                        int32_T preSortLevel, emxArray_int32_T *iwork,
                        emxArray_real_T *xwork);

static void merge_pow2_block(emxArray_int32_T *idx, emxArray_real_T *x,
                             int32_T offset);

/* Function Definitions */
static void merge(const emlrtStack *sp, emxArray_int32_T *idx,
                  emxArray_real_T *x, int32_T offset, int32_T np, int32_T nq,
                  emxArray_int32_T *iwork, emxArray_real_T *xwork)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T exitg1;
  int32_T iout;
  int32_T j;
  int32_T n_tmp;
  int32_T p;
  int32_T q;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (nq != 0) {
    n_tmp = np + nq;
    st.site = &jm_emlrtRSI;
    if ((1 <= n_tmp) && (n_tmp > 2147483646)) {
      b_st.site = &gc_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 0; j < n_tmp; j++) {
      iout = offset + j;
      iwork->data[j] = idx->data[iout];
      xwork->data[j] = x->data[iout];
    }
    p = 0;
    q = np;
    iout = offset - 1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork->data[p] <= xwork->data[q]) {
        idx->data[iout] = iwork->data[p];
        x->data[iout] = xwork->data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx->data[iout] = iwork->data[q];
        x->data[iout] = xwork->data[q];
        if (q + 1 < n_tmp) {
          q++;
        } else {
          q = iout - p;
          st.site = &im_emlrtRSI;
          if ((p + 1 <= np) && (np > 2147483646)) {
            b_st.site = &gc_emlrtRSI;
            check_forloop_overflow_error(&b_st);
          }
          for (j = p + 1; j <= np; j++) {
            iout = q + j;
            idx->data[iout] = iwork->data[j - 1];
            x->data[iout] = xwork->data[j - 1];
          }
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

static void merge_block(const emlrtStack *sp, emxArray_int32_T *idx,
                        emxArray_real_T *x, int32_T offset, int32_T n,
                        int32_T preSortLevel, emxArray_int32_T *iwork,
                        emxArray_real_T *xwork)
{
  emlrtStack st;
  int32_T bLen;
  int32_T nPairs;
  int32_T nTail;
  int32_T tailOffset;
  st.prev = sp;
  st.tls = sp->tls;
  nPairs = n >> preSortLevel;
  bLen = 1 << preSortLevel;
  while (nPairs > 1) {
    if ((nPairs & 1) != 0) {
      nPairs--;
      tailOffset = bLen * nPairs;
      nTail = n - tailOffset;
      if (nTail > bLen) {
        st.site = &em_emlrtRSI;
        merge(&st, idx, x, offset + tailOffset, bLen, nTail - bLen, iwork,
              xwork);
      }
    }
    tailOffset = bLen << 1;
    nPairs >>= 1;
    for (nTail = 0; nTail < nPairs; nTail++) {
      st.site = &gm_emlrtRSI;
      merge(&st, idx, x, offset + nTail * tailOffset, bLen, bLen, iwork, xwork);
    }
    bLen = tailOffset;
  }
  if (n > bLen) {
    st.site = &hm_emlrtRSI;
    merge(&st, idx, x, offset, bLen, n - bLen, iwork, xwork);
  }
}

static void merge_pow2_block(emxArray_int32_T *idx, emxArray_real_T *x,
                             int32_T offset)
{
  real_T xwork[256];
  int32_T iwork[256];
  int32_T b;
  int32_T bLen;
  int32_T bLen2;
  int32_T blockOffset;
  int32_T exitg1;
  int32_T iout;
  int32_T j;
  int32_T k;
  int32_T nPairs;
  int32_T p;
  int32_T q;
  for (b = 0; b < 6; b++) {
    bLen = 1 << (b + 2);
    bLen2 = bLen << 1;
    nPairs = 256 >> (b + 3);
    for (k = 0; k < nPairs; k++) {
      blockOffset = offset + k * bLen2;
      for (j = 0; j < bLen2; j++) {
        iout = blockOffset + j;
        iwork[j] = idx->data[iout];
        xwork[j] = x->data[iout];
      }
      p = 0;
      q = bLen;
      iout = blockOffset - 1;
      do {
        exitg1 = 0;
        iout++;
        if (xwork[p] <= xwork[q]) {
          idx->data[iout] = iwork[p];
          x->data[iout] = xwork[p];
          if (p + 1 < bLen) {
            p++;
          } else {
            exitg1 = 1;
          }
        } else {
          idx->data[iout] = iwork[q];
          x->data[iout] = xwork[q];
          if (q + 1 < bLen2) {
            q++;
          } else {
            iout -= p;
            for (j = p + 1; j <= bLen; j++) {
              q = iout + j;
              idx->data[q] = iwork[j - 1];
              x->data[q] = xwork[j - 1];
            }
            exitg1 = 1;
          }
        }
      } while (exitg1 == 0);
    }
  }
}

void b_sortIdx(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  ib = x->size[0];
  quartetOffset = idx->size[0];
  idx->size[0] = ib;
  emxEnsureCapacity_int32_T(sp, idx, quartetOffset, &uj_emlrtRTEI);
  for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
    idx->data[quartetOffset] = 0;
  }
  if (x->size[0] != 0) {
    emxInit_int32_T(sp, &iwork, 1, &hab_emlrtRTEI, true);
    st.site = &rl_emlrtRSI;
    n = x->size[0];
    b_st.site = &sl_emlrtRSI;
    b_n = x->size[0];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    quartetOffset = iwork->size[0];
    iwork->size[0] = ib;
    emxEnsureCapacity_int32_T(&b_st, iwork, quartetOffset, &fab_emlrtRTEI);
    for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
      iwork->data[quartetOffset] = 0;
    }
    emxInit_real_T(&b_st, &xwork, 1, &iab_emlrtRTEI, true);
    ib = x->size[0];
    quartetOffset = xwork->size[0];
    xwork->size[0] = ib;
    emxEnsureCapacity_real_T(&b_st, xwork, quartetOffset, &gab_emlrtRTEI);
    for (quartetOffset = 0; quartetOffset < ib; quartetOffset++) {
      xwork->data[quartetOffset] = 0.0;
    }
    nNaNs = 0;
    ib = -1;
    c_st.site = &xl_emlrtRSI;
    if ((1 <= x->size[0]) && (x->size[0] > 2147483646)) {
      d_st.site = &gc_emlrtRSI;
      check_forloop_overflow_error(&d_st);
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
      c_st.site = &yl_emlrtRSI;
      if (ib + 1 > 2147483646) {
        d_st.site = &gc_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (k = 0; k <= ib; k++) {
        i3 = perm[k] - 1;
        quartetOffset = (i4 - ib) + k;
        idx->data[quartetOffset] = idx4[i3];
        x->data[quartetOffset] = x4[i3];
      }
    }
    ib = (nNaNs >> 1) + 1;
    c_st.site = &am_emlrtRSI;
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
          b_st.site = &tl_emlrtRSI;
          for (ib = 0; ib < quartetOffset; ib++) {
            b_st.site = &ul_emlrtRSI;
            merge_pow2_block(idx, x, ib << 8);
          }
          ib = quartetOffset << 8;
          quartetOffset = i1 - ib;
          if (quartetOffset > 0) {
            b_st.site = &vl_emlrtRSI;
            merge_block(&b_st, idx, x, ib, quartetOffset, 2, iwork, xwork);
          }
          ib = 8;
        }
      }
      b_st.site = &wl_emlrtRSI;
      merge_block(&b_st, idx, x, 0, i1, ib, iwork, xwork);
    }
    emxFree_real_T(&xwork);
    emxFree_int32_T(&iwork);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

void sortIdx(const emlrtStack *sp, const emxArray_real_T *x,
             emxArray_int32_T *idx)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int32_T *iwork;
  real_T d;
  int32_T b_i;
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
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  n = x->size[0] + 1;
  i = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(sp, idx, i, &uj_emlrtRTEI);
  b_i = x->size[0];
  for (i = 0; i < b_i; i++) {
    idx->data[i] = 0;
  }
  emxInit_int32_T(sp, &iwork, 1, &wj_emlrtRTEI, true);
  st.site = &lk_emlrtRSI;
  i = iwork->size[0];
  iwork->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(&st, iwork, i, &vj_emlrtRTEI);
  b_i = x->size[0] - 1;
  b_st.site = &mk_emlrtRSI;
  if ((1 <= x->size[0] - 1) && (x->size[0] - 1 > 2147483645)) {
    c_st.site = &gc_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }
  for (k = 1; k <= b_i; k += 2) {
    if ((x->data[k - 1] <= x->data[k]) || muDoubleScalarIsNaN(x->data[k])) {
      idx->data[k - 1] = k;
      idx->data[k] = k + 1;
    } else {
      idx->data[k - 1] = k + 1;
      idx->data[k] = k;
    }
  }
  if ((x->size[0] & 1) != 0) {
    idx->data[x->size[0] - 1] = x->size[0];
  }
  b_i = 2;
  while (b_i < n - 1) {
    i2 = b_i << 1;
    j = 1;
    for (pEnd = b_i + 1; pEnd < n; pEnd = qEnd + b_i) {
      p = j;
      q = pEnd - 1;
      qEnd = j + i2;
      if (qEnd > n) {
        qEnd = n;
      }
      k = 0;
      kEnd = qEnd - j;
      while (k + 1 <= kEnd) {
        d = x->data[idx->data[q] - 1];
        i = idx->data[p - 1];
        if ((x->data[i - 1] <= d) || muDoubleScalarIsNaN(d)) {
          iwork->data[k] = i;
          p++;
          if (p == pEnd) {
            while (q + 1 < qEnd) {
              k++;
              iwork->data[k] = idx->data[q];
              q++;
            }
          }
        } else {
          iwork->data[k] = idx->data[q];
          q++;
          if (q + 1 == qEnd) {
            while (p < pEnd) {
              k++;
              iwork->data[k] = idx->data[p - 1];
              p++;
            }
          }
        }
        k++;
      }
      b_st.site = &nk_emlrtRSI;
      for (k = 0; k < kEnd; k++) {
        idx->data[(j + k) - 1] = iwork->data[k];
      }
      j = qEnd;
    }
    b_i = i2;
  }
  emxFree_int32_T(&iwork);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (sortIdx.c) */
