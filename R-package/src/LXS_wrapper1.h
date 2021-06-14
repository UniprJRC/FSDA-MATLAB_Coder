/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper1.h
 *
 * Code generation for function 'LXS_wrapper1'
 *
 */

#ifndef LXS_WRAPPER1_H
#define LXS_WRAPPER1_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void LXS_wrapper1(const emxArray_real_T *y, const emxArray_real_T *X,
                         const double bonflevoutX_data[],
                         const int bonflevoutX_size[2], double conflev,
                         double h, bool intercept, const struct_LXSlms_T *lms,
                         bool msg, bool nocheck, bool nomes, double nsamp,
                         bool rew, bool yxsave, struct_LXS_T *out,
                         emxArray_real_T *C);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LXS_wrapper1.h) */
