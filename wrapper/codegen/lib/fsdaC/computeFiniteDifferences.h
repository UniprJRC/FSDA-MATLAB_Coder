/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * computeFiniteDifferences.h
 *
 * Code generation for function 'computeFiniteDifferences'
 *
 */

#ifndef COMPUTEFINITEDIFFERENCES_H
#define COMPUTEFINITEDIFFERENCES_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool computeFiniteDifferences(h_struct_T *obj,
                              const emxArray_real_T *cEqCurrent,
                              emxArray_real_T *xk, emxArray_real_T *JacCeqTrans,
                              int ldJE);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (computeFiniteDifferences.h) */
