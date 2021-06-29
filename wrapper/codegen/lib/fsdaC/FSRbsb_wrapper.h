/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRbsb_wrapper.h
 *
 * Code generation for function 'FSRbsb_wrapper'
 *
 */

#ifndef FSRBSB_WRAPPER_H
#define FSRBSB_WRAPPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSRbsb_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                           const emxArray_real_T *bsb,
                           const emxArray_real_T *bsbsteps, double init,
                           bool intercept, bool msg, bool nocheck,
                           emxArray_real_T *Un, emxArray_real32_T *BB);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSRbsb_wrapper.h) */
