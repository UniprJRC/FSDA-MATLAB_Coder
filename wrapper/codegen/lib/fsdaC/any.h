/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * any.h
 *
 * Code generation for function 'any'
 *
 */

#ifndef ANY_H
#define ANY_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool any(const emxArray_boolean_T *x);

void b_any(const emxArray_boolean_T *x, emxArray_boolean_T *y);

bool c_any(const emxArray_boolean_T *x);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (any.h) */
