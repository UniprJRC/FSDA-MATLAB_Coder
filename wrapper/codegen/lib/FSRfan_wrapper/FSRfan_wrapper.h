/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRfan_wrapper.h
 *
 * Code generation for function 'FSRfan_wrapper'
 *
 */

#ifndef FSRFAN_WRAPPER_H
#define FSRFAN_WRAPPER_H

/* Include files */
#include "FSRfan_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSRfan_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                           bool intercept, bool nocheck,
                           const emxArray_real_T *la, double h, double nsamp,
                           const emxArray_real_T *lms, double init,
                           const emxArray_char_T *family, bool msg,
                           struct0_T *out);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSRfan_wrapper.h) */
