/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LXS_wrapper.h
 *
 * Code generation for function 'LXS_wrapper'
 *
 */

#ifndef LXS_WRAPPER_H
#define LXS_WRAPPER_H

/* Include files */
#include "FSM_wrapper_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void LXS_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                        const double bonflevoutX_data[],
                        const int bonflevoutX_size[2], double conflev, double h,
                        bool intercept, double lms, bool msg, bool nocheck,
                        bool nomes, double nsamp, bool rew, bool yxsave,
                        struct8_T *out, emxArray_real_T *C);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LXS_wrapper.h) */
