/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: LTSts_wrapper.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef LTSTS_WRAPPER_H
#define LTSTS_WRAPPER_H

/* Include Files */
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
                          const struct_LTStslshiftlocref_T *lshiftlocref,
                          const struct_LXSlms_T *lts,
                          const struct_LTStsmodel_T *model, bool msg,
                          double nbestindexes, bool nocheck,
                          const double nsamp_data[], const int nsamp_size[2],
                          double refstepsALS, double reftolALS,
                          double SmallSampleCor, bool yxsave,
                          struct_LTSts_T *out, emxArray_real_T *C);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for LTSts_wrapper.h
 *
 * [EOF]
 */
