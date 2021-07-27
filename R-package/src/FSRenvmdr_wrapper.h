/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRenvmdr_wrapper.h
 *
 * Code generation for function 'FSRenvmdr_wrapper'
 *
 */

#ifndef FSRENVMDR_WRAPPER_H
#define FSRENVMDR_WRAPPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSRenvmdr_wrapper(double n, double p, double init,
                              const emxArray_real_T *prob,
                              emxArray_real_T *MDRenv);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSRenvmdr_wrapper.h) */
