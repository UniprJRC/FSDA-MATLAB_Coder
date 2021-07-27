/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unibiv_wrapper.h
 *
 * Code generation for function 'unibiv_wrapper'
 *
 */

#ifndef UNIBIV_WRAPPER_H
#define UNIBIV_WRAPPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void unibiv_wrapper(const emxArray_real_T *Y, double madcoef,
                           double robscale, double rf, emxArray_real_T *fre);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (unibiv_wrapper.h) */
