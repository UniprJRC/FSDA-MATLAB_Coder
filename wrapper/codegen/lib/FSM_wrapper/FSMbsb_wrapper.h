/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMbsb_wrapper.h
 *
 * Code generation for function 'FSMbsb_wrapper'
 *
 */

#ifndef FSMBSB_WRAPPER_H
#define FSMBSB_WRAPPER_H

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
extern void FSMbsb_wrapper(const emxArray_real_T *Y, const emxArray_real_T *bsb,
                           const emxArray_real_T *bsbsteps, double init,
                           bool msg, bool nocheck, emxArray_real_T *Un,
                           emxArray_real_T *BB);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSMbsb_wrapper.h) */
