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
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ek_emlrtRSI = {
    117,          /* lineNo */
    "randsample", /* fcnName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pathName
                                                                            */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    109,          /* lineNo */
    9,            /* colNo */
    "randsample", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pName
                                                                            */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    25,           /* lineNo */
    27,           /* colNo */
    "randsample", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pName
                                                                            */
};

static emlrtDCInfo
    ce_emlrtDCI =
        {
            134,          /* lineNo */
            28,           /* colNo */
            "randsample", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m", /* pName
                                                                         */
            1 /* checkKind */
};

static emlrtDCInfo
    de_emlrtDCI =
        {
            134,          /* lineNo */
            9,            /* colNo */
            "randsample", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m", /* pName
                                                                         */
            1 /* checkKind */
};

static emlrtBCInfo
    vg_emlrtBCI =
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
    ee_emlrtDCI =
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
    wg_emlrtBCI =
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

static emlrtRTEInfo ql_emlrtRTEI = {
    134,          /* lineNo */
    9,            /* colNo */
    "randsample", /* fName */
    "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\randsample.m" /* pName
                                                                            */
};

/* Function Definitions */
real_T randsample(const emlrtStack *sp, real_T varargin_1)
{
  emlrtStack st;
  emxArray_boolean_T *selected;
  real_T rp_data[3];
  real_T n;
  real_T r;
  real_T y;
  int32_T idx_data[3];
  int32_T iwork_data[3];
  int32_T rp_size[2];
  int32_T i;
  int32_T k;
  int32_T kEnd;
  int32_T p;
  int32_T pEnd;
  int32_T q;
  int32_T qEnd;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  n = muDoubleScalarFloor(varargin_1);
  if (!(n == varargin_1)) {
    emlrtErrorWithMessageIdR2018a(sp, &pb_emlrtRTEI,
                                  "Coder:stats:RandsampleBadN",
                                  "Coder:stats:RandsampleBadN", 0);
  }
  if (!(1.0 <= n)) {
    emlrtErrorWithMessageIdR2018a(sp, &ob_emlrtRTEI,
                                  "stats:randsample:SampleTooLarge",
                                  "stats:randsample:SampleTooLarge", 2, 6, n);
  }
  if (4.0 > n) {
    st.site = &ek_emlrtRSI;
    if (!(n == n)) {
      emlrtErrorWithMessageIdR2018a(&st, &bb_emlrtRTEI,
                                    "MATLAB:randperm:inputType",
                                    "MATLAB:randperm:inputType", 0);
    }
    c_rand(n, rp_data, rp_size);
    i = rp_size[1];
    if (0 <= i - 1) {
      memset(&idx_data[0], 0, i * sizeof(int32_T));
    }
    if (1 <= rp_size[1] - 1) {
      if ((rp_data[0] <= rp_data[1]) || muDoubleScalarIsNaN(rp_data[1])) {
        idx_data[0] = 1;
        idx_data[1] = 2;
      } else {
        idx_data[0] = 2;
        idx_data[1] = 1;
      }
    }
    if ((rp_size[1] & 1) != 0) {
      idx_data[rp_size[1] - 1] = rp_size[1];
    }
    i = 2;
    while (i < rp_size[1]) {
      i = 0;
      for (pEnd = 3; pEnd < 4; pEnd = qEnd + 2) {
        p = i;
        q = pEnd - 1;
        qEnd = i + 5;
        if (i + 5 > 4) {
          qEnd = 4;
        }
        k = 0;
        kEnd = (qEnd - i) - 1;
        while (k + 1 <= kEnd) {
          r = rp_data[idx_data[q] - 1];
          if ((rp_data[idx_data[p] - 1] <= r) || muDoubleScalarIsNaN(r)) {
            iwork_data[k] = idx_data[p];
            p++;
            if (p + 1 == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork_data[k] = idx_data[q];
                q++;
              }
            }
          } else {
            iwork_data[k] = idx_data[q];
            q++;
            if (q + 1 == qEnd) {
              while (p + 1 < pEnd) {
                k++;
                iwork_data[k] = idx_data[p];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx_data[i + k] = iwork_data[k];
        }
        i = qEnd - 1;
      }
      i = 4;
    }
    i = rp_size[1];
    for (pEnd = 0; pEnd < i; pEnd++) {
      rp_data[pEnd] = idx_data[pEnd];
    }
    y = rp_data[0];
  } else {
    emxInit_boolean_T(sp, &selected, 2, &ql_emlrtRTEI, true);
    pEnd = selected->size[0] * selected->size[1];
    selected->size[0] = 1;
    emxEnsureCapacity_boolean_T(sp, selected, pEnd, &ql_emlrtRTEI);
    if (n != (int32_T)n) {
      emlrtIntegerCheckR2012b(n, &ce_emlrtDCI, (emlrtCTX)sp);
    }
    pEnd = selected->size[0] * selected->size[1];
    selected->size[1] = (int32_T)n;
    emxEnsureCapacity_boolean_T(sp, selected, pEnd, &ql_emlrtRTEI);
    if (n != (int32_T)n) {
      emlrtIntegerCheckR2012b(n, &de_emlrtDCI, (emlrtCTX)sp);
    }
    i = (int32_T)n;
    for (pEnd = 0; pEnd < i; pEnd++) {
      selected->data[pEnd] = false;
    }
    do {
      r = b_rand();
      r = muDoubleScalarFloor(r * n);
      if (r + 1.0 != (int32_T)(r + 1.0)) {
        emlrtIntegerCheckR2012b(r + 1.0, &ee_emlrtDCI, (emlrtCTX)sp);
      }
      if (((int32_T)(r + 1.0) < 1) ||
          ((int32_T)(r + 1.0) > selected->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(r + 1.0), 1, selected->size[1],
                                      &vg_emlrtBCI, (emlrtCTX)sp);
      }
    } while (!!selected->data[(int32_T)(r + 1.0) - 1]);
    if (((int32_T)(r + 1.0) < 1) || ((int32_T)(r + 1.0) > selected->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(r + 1.0), 1, selected->size[1],
                                    &wg_emlrtBCI, (emlrtCTX)sp);
    }
    emxFree_boolean_T(&selected);
    y = r + 1.0;
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
  return y;
}

/* End of code generation (randsample.c) */
