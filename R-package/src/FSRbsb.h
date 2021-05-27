/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRbsb.h
 *
 * Code generation for function 'FSRbsb'
 *
 */

#ifndef FSRBSB_H
#define FSRBSB_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSRbsb(const emxArray_real_T *y, const emxArray_real_T *X,
            emxArray_real_T *bsb, double varargin_4, emxArray_real_T *Un,
            emxArray_real32_T *BB);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSRbsb.h) */
