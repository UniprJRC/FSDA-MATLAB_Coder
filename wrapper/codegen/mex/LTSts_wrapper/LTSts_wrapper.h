/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper.h
 *
 * Code generation for function 'LTSts_wrapper'
 *
 */

#pragma once

/* Include files */
#include "LTSts_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void LTSts_wrapper(const emlrtStack *sp, const emxArray_real_T *y,
                   real_T conflev, boolean_T dispresults, real_T h,
                   boolean_T intercept, const struct0_T *lshiftlocref,
                   const struct1_T *lts, const struct2_T *model, boolean_T msg,
                   real_T nbestindexes, boolean_T nocheck,
                   const real_T nsamp_data[], const int32_T nsamp_size[2],
                   real_T refstepsALS, real_T reftolALS, real_T SmallSampleCor,
                   boolean_T yxsave, struct3_T *out, emxArray_real_T *C);

emlrtCTX emlrtGetRootTLSGlobal(void);

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS,
                         void *aData);

/* End of code generation (LTSts_wrapper.h) */
