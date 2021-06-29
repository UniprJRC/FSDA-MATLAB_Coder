/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * jacobianFiniteDifference.h
 *
 * Code generation for function 'jacobianFiniteDifference'
 *
 */

#ifndef JACOBIANFINITEDIFFERENCE_H
#define JACOBIANFINITEDIFFERENCE_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool b_jacobianFiniteDifference(emxArray_real_T *augJacobian,
                                const emxArray_real_T *fCurrent, int *funcCount,
                                const emxArray_real_T *x,
                                const char options_FiniteDifferenceType[7],
                                const h_struct_T *FiniteDifferences);

void jacobianFiniteDifference(emxArray_real_T *augJacobian,
                              const emxArray_real_T *fCurrent,
                              const emxArray_real_T *x,
                              const char options_FiniteDifferenceType[7],
                              h_struct_T *FiniteDifferences, int *funcCount,
                              bool *evalOK);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (jacobianFiniteDifference.h) */
