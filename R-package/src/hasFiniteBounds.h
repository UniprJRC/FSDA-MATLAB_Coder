/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * hasFiniteBounds.h
 *
 * Code generation for function 'hasFiniteBounds'
 *
 */

#ifndef HASFINITEBOUNDS_H
#define HASFINITEBOUNDS_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool hasFiniteBounds(int nvar, emxArray_boolean_T *hasLB,
                     emxArray_boolean_T *hasUB, const emxArray_real_T *lb,
                     const emxArray_real_T *ub);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (hasFiniteBounds.h) */
