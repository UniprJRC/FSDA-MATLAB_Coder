/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR_wrapper1.h
 *
 * Code generation for function 'FSR_wrapper1'
 *
 */

#ifndef FSR_WRAPPER1_H
#define FSR_WRAPPER1_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSR_wrapper1(const emxArray_real_T *y, const emxArray_real_T *X,
                         bool bsbmfullrank, const double bonflev_data[],
                         const int bonflev_size[2], double h, double init,
                         bool intercept, const struct_FSRlms_T *lms, bool msg,
                         bool nocheck, double nsamp,
                         const double threshoutX_data[],
                         const int threshoutX_size[2], bool weak,
                         struct_FSR_T *out);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSR_wrapper1.h) */
