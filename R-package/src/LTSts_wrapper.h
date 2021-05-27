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

#ifndef LTSTS_WRAPPER_H
#define LTSTS_WRAPPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void LTSts_wrapper(const emxArray_real_T *y, double conflev,
                          bool dispresults, double h, bool intercept,
                          const struct0_T *lshiftlocref, const struct1_T *lts,
                          const struct2_T *model, bool msg, double nbestindexes,
                          bool nocheck, const double nsamp_data[],
                          const int nsamp_size[2], double refstepsALS,
                          double reftolALS, double SmallSampleCor, bool yxsave,
                          struct_LTSts_T *out, emxArray_real_T *C);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LTSts_wrapper.h) */
