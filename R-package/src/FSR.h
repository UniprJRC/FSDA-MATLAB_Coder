/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR.h
 *
 * Code generation for function 'FSR'
 *
 */

#ifndef FSR_H
#define FSR_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void gb_binary_expand_op(emxArray_real_T *y, const emxArray_real_T *constr,
                         double outPREL_scale);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSR.h) */
