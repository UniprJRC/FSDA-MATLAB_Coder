/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM_wrapper.h
 *
 * Code generation for function 'FSM_wrapper'
 *
 */

#ifndef FSM_WRAPPER_H
#define FSM_WRAPPER_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include "omp.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
extern void FSM_wrapper(const emxArray_real_T *Y, const double bonflev_data[],
                        const int bonflev_size[2], const char crit_data[],
                        const int crit_size[2], double init,
                        const emxArray_real_T *m0, bool msg, bool nocheck,
                        double rf, struct0_T *out);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSM_wrapper.h) */
