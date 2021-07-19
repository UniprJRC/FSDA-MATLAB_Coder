/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * scanfornan.c
 *
 * Code generation for function 'scanfornan'
 *
 */

/* Include files */
#include "scanfornan.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo xu_emlrtRSI = {
    8,            /* lineNo */
    "scanfornan", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\private\\scanfornan.m" /* pathName
                                                                         */
};

static emlrtBCInfo rn_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    11,           /* lineNo */
    23,           /* colNo */
    "",           /* aName */
    "scanfornan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\private\\scanfornan.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtBCInfo sn_emlrtBCI = {
    -1,           /* iFirst */
    -1,           /* iLast */
    17,           /* lineNo */
    9,            /* colNo */
    "",           /* aName */
    "scanfornan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\private\\scanfornan.m", /* pName
                                                                          */
    0 /* checkKind */
};

static emlrtRTEInfo fu_emlrtRTEI = {
    7,            /* lineNo */
    1,            /* colNo */
    "scanfornan", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\stats\\eml\\private\\scanfornan.m" /* pName
                                                                         */
};

/* Function Definitions */
void scanfornan(const emlrtStack *sp, const emxArray_real_T *X, real_T nx,
                emxArray_boolean_T *nanobs)
{
  jmp_buf emlrtJBEnviron;
  jmp_buf *volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub_tmp;
  int32_T qq;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  i = nanobs->size[0] * nanobs->size[1];
  nanobs->size[0] = 1;
  loop_ub_tmp = (int32_T)nx;
  nanobs->size[1] = (int32_T)nx;
  emxEnsureCapacity_boolean_T(sp, nanobs, i, &fu_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    nanobs->data[i] = true;
  }
  st.site = &xu_emlrtRSI;
  if ((1 <= (int32_T)nx) && ((int32_T)nx > 2147483646)) {
    b_st.site = &qf_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  loop_ub_tmp = (int32_T)nx - 1;
  emlrtEnterParallelRegion((emlrtCTX)sp, omp_in_parallel());
  emlrtPushJmpBuf((emlrtCTX)sp, &emlrtJBStack);
#pragma omp parallel num_threads(emlrtAllocRegionTLSs(                         \
    sp->tls, omp_in_parallel(), omp_get_max_threads(),                         \
    omp_get_num_procs())) private(c_st, emlrtJBEnviron, qq)                    \
    firstprivate(emlrtHadParallelError)
  {
    if (setjmp(emlrtJBEnviron) == 0) {

      c_st.prev = sp;
      c_st.tls = emlrtAllocTLS((emlrtCTX)sp, omp_get_thread_num());
      c_st.site = NULL;
      emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
    } else {
      emlrtHadParallelError = true;
    }
#pragma omp for nowait
    for (qq = 0; qq <= loop_ub_tmp; qq++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {

        if ((qq + 1 < 1) || (qq + 1 > X->size[1])) {
          emlrtDynamicBoundsCheckR2012b(qq + 1, 1, X->size[1], &rn_emlrtBCI,
                                        &c_st);
        }
        if (muDoubleScalarIsNaN(X->data[qq])) {
          if (qq + 1 > nanobs->size[1]) {
            emlrtDynamicBoundsCheckR2012b(qq + 1, 1, nanobs->size[1],
                                          &sn_emlrtBCI, &c_st);
          }
          nanobs->data[qq] = false;
        }
      } else {
        emlrtHadParallelError = true;
      }
    }
  }
  emlrtPopJmpBuf((emlrtCTX)sp, &emlrtJBStack);
  emlrtExitParallelRegion((emlrtCTX)sp, omp_in_parallel());
}

/* End of code generation (scanfornan.c) */
