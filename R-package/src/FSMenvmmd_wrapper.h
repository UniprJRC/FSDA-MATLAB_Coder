/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMenvmmd_wrapper.h
 *
 * Code generation for function 'FSMenvmmd_wrapper'
 *
 */

#ifndef FSMENVMMD_WRAPPER_H
#define FSMENVMMD_WRAPPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSMenvmmd_wrapper(double n, double v, double init,
                              const emxArray_real_T *prob, bool scaled,
                              emxArray_real_T *MMDenv);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSMenvmmd_wrapper.h) */
