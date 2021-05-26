/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randsample.c
 *
 * Code generation for function 'randsample'
 *
 */

/* Include files */
#include "randsample.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo iv_emlrtRSI = {
    117,          /* lineNo */
    "randsample", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pathName
                                                                            */
};

static emlrtRSInfo jv_emlrtRSI = {
    126,          /* lineNo */
    "randsample", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pathName
                                                                            */
};

static emlrtRSInfo kv_emlrtRSI = {
    138,          /* lineNo */
    "randsample", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pathName
                                                                            */
};

static emlrtRSInfo
    lv_emlrtRSI =
        {
            16,         /* lineNo */
            "randperm", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pathName */
};

static emlrtRSInfo
    mv_emlrtRSI =
        {
            15,         /* lineNo */
            "randperm", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pathName */
};

static emlrtRSInfo nv_emlrtRSI = {
    61,      /* lineNo */
    "randi", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m" /* pathName
                                                                          */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    109,          /* lineNo */
    9,            /* colNo */
    "randsample", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pName
                                                                            */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    25,           /* lineNo */
    27,           /* colNo */
    "randsample", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pName
                                                                            */
};

static emlrtBCInfo
    po_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            142,          /* lineNo */
            17,           /* colNo */
            "",           /* aName */
            "randsample", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtDCInfo
    ub_emlrtDCI =
        {
            142,          /* lineNo */
            17,           /* colNo */
            "randsample", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m", /* pName
                                                                         */
            1 /* checkKind */
};

static emlrtBCInfo
    qo_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            143,          /* lineNo */
            17,           /* colNo */
            "",           /* aName */
            "randsample", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtBCInfo
    ro_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            148,          /* lineNo */
            21,           /* colNo */
            "",           /* aName */
            "randsample", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtBCInfo
    so_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            127,          /* lineNo */
            24,           /* colNo */
            "",           /* aName */
            "randsample", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtBCInfo
    to_emlrtBCI =
        {
            -1,           /* iFirst */
            -1,           /* iLast */
            127,          /* lineNo */
            17,           /* colNo */
            "",           /* aName */
            "randsample", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m", /* pName
                                                                         */
            0 /* checkKind */
};

static emlrtRTEInfo so_emlrtRTEI = {
    75,           /* lineNo */
    24,           /* colNo */
    "randsample", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pName
                                                                            */
};

static emlrtRTEInfo to_emlrtRTEI = {
    134,          /* lineNo */
    9,            /* colNo */
    "randsample", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pName
                                                                            */
};

static emlrtRTEInfo
    uo_emlrtRTEI =
        {
            16,         /* lineNo */
            5,          /* colNo */
            "randperm", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\randfun\\randper"
            "m.m" /* pName */
};

static emlrtRTEInfo vo_emlrtRTEI = {
    117,          /* lineNo */
    13,           /* colNo */
    "randsample", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pName
                                                                            */
};

/* Function Definitions */
void randsample(const emlrtStack *sp, real_T varargin_1, real_T varargin_2,
                emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_boolean_T *selected;
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *rp;
  real_T n;
  real_T r;
  real_T x_tmp;
  int32_T b_n;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T k;
  int32_T kEnd;
  int32_T k_tmp_tmp;
  int32_T nsel;
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
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  n = muDoubleScalarFloor(varargin_1);
  if (!(n == varargin_1)) {
    emlrtErrorWithMessageIdR2018a(sp, &xb_emlrtRTEI,
                                  "Coder:stats:RandsampleBadN",
                                  "Coder:stats:RandsampleBadN", 0);
  }
  x_tmp = muDoubleScalarFloor(varargin_2);
  k_tmp_tmp = (int32_T)muDoubleScalarFloor(varargin_2);
  i = y->size[0];
  y->size[0] = (int32_T)x_tmp;
  emxEnsureCapacity_real_T(sp, y, i, &so_emlrtRTEI);
  if (!((int32_T)x_tmp <= n)) {
    emlrtErrorWithMessageIdR2018a(sp, &wb_emlrtRTEI,
                                  "stats:randsample:SampleTooLarge",
                                  "stats:randsample:SampleTooLarge", 2, 6, n);
  }
  if (((int32_T)x_tmp << 2) > n) {
    st.site = &iv_emlrtRSI;
    if (!(n == n)) {
      emlrtErrorWithMessageIdR2018a(&st, &u_emlrtRTEI,
                                    "MATLAB:randperm:inputType",
                                    "MATLAB:randperm:inputType", 0);
    }
    emxInit_real_T(&st, &rp, 2, &vo_emlrtRTEI, true);
    emxInit_int32_T(&st, &idx, 2, &uo_emlrtRTEI, true);
    b_st.site = &mv_emlrtRSI;
    c_rand(&b_st, n, rp);
    b_st.site = &lv_emlrtRSI;
    b_n = rp->size[1] + 1;
    i = idx->size[0] * idx->size[1];
    idx->size[0] = 1;
    idx->size[1] = rp->size[1];
    emxEnsureCapacity_int32_T(&b_st, idx, i, &uo_emlrtRTEI);
    nsel = rp->size[1];
    for (i = 0; i < nsel; i++) {
      idx->data[i] = 0;
    }
    emxInit_int32_T(&b_st, &iwork, 1, &qj_emlrtRTEI, true);
    c_st.site = &nk_emlrtRSI;
    i = iwork->size[0];
    iwork->size[0] = rp->size[1];
    emxEnsureCapacity_int32_T(&c_st, iwork, i, &pj_emlrtRTEI);
    nsel = rp->size[1] - 1;
    d_st.site = &ok_emlrtRSI;
    if ((1 <= rp->size[1] - 1) && (rp->size[1] - 1 > 2147483645)) {
      e_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }
    for (k = 1; k <= nsel; k += 2) {
      r = rp->data[k];
      if ((rp->data[k - 1] <= r) || muDoubleScalarIsNaN(r)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((rp->size[1] & 1) != 0) {
      idx->data[rp->size[1] - 1] = rp->size[1];
    }
    nsel = 2;
    while (nsel < b_n - 1) {
      i2 = nsel << 1;
      j = 1;
      for (pEnd = nsel + 1; pEnd < b_n; pEnd = qEnd + nsel) {
        p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > b_n) {
          qEnd = b_n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          r = rp->data[idx->data[q] - 1];
          i = idx->data[p - 1];
          if ((rp->data[i - 1] <= r) || muDoubleScalarIsNaN(r)) {
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
        d_st.site = &pk_emlrtRSI;
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      nsel = i2;
    }
    emxFree_int32_T(&iwork);
    nsel = rp->size[1];
    i = rp->size[0] * rp->size[1];
    rp->size[0] = 1;
    rp->size[1] = nsel;
    emxEnsureCapacity_real_T(&st, rp, i, &vo_emlrtRTEI);
    for (i = 0; i < nsel; i++) {
      rp->data[i] = idx->data[i];
    }
    emxFree_int32_T(&idx);
    st.site = &jv_emlrtRSI;
    if ((1 <= (int32_T)x_tmp) && ((int32_T)x_tmp > 2147483646)) {
      b_st.site = &ic_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }
    for (j = 0; j < k_tmp_tmp; j++) {
      if ((j + 1 < 1) || (j + 1 > rp->size[1])) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, rp->size[1], &so_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      if (j + 1 > y->size[0]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, y->size[0], &to_emlrtBCI,
                                      (emlrtCTX)sp);
      }
      y->data[j] = (int32_T)rp->data[j];
    }
    emxFree_real_T(&rp);
  } else {
    emxInit_boolean_T(sp, &selected, 2, &to_emlrtRTEI, true);
    i = selected->size[0] * selected->size[1];
    selected->size[0] = 1;
    nsel = (int32_T)n;
    selected->size[1] = (int32_T)n;
    emxEnsureCapacity_boolean_T(sp, selected, i, &to_emlrtRTEI);
    for (i = 0; i < nsel; i++) {
      selected->data[i] = false;
    }
    nsel = 0;
    while (nsel < (int32_T)x_tmp) {
      st.site = &kv_emlrtRSI;
      b_st.site = &nv_emlrtRSI;
      r = b_rand();
      r = muDoubleScalarFloor(r * n);
      if (r + 1.0 != (int32_T)(r + 1.0)) {
        emlrtIntegerCheckR2012b(r + 1.0, &ub_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)(r + 1.0) < 1) ||
          ((int32_T)(r + 1.0) > selected->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(r + 1.0), 1, selected->size[1],
                                      &po_emlrtBCI, (emlrtCTX)sp);
      }
      if (!selected->data[(int32_T)(r + 1.0) - 1]) {
        if (((int32_T)(r + 1.0) < 1) ||
            ((int32_T)(r + 1.0) > selected->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(r + 1.0), 1,
                                        selected->size[1], &qo_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        selected->data[(int32_T)(r + 1.0) - 1] = true;
        nsel++;
        if (nsel > y->size[0]) {
          emlrtDynamicBoundsCheckR2012b(nsel, 1, y->size[0], &ro_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        y->data[nsel - 1] = r + 1.0;
      }
    }
    emxFree_boolean_T(&selected);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (randsample.c) */
