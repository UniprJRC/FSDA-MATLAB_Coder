/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ixfun.h
 *
 * Code generation for function 'ixfun'
 *
 */

#ifndef IXFUN_H
#define IXFUN_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void expand_bitand(const emxArray_boolean_T *a, const emxArray_boolean_T *b,
                   emxArray_boolean_T *c);

void expand_bitxor(const emxArray_boolean_T *a, const emxArray_boolean_T *b,
                   emxArray_boolean_T *c);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (ixfun.h) */
