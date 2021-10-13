/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chkinputR.h
 *
 * Code generation for function 'chkinputR'
 *
 */

#ifndef CHKINPUTR_H
#define CHKINPUTR_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void chkinputR(emxArray_real_T *y, emxArray_real_T *X, bool vvarargin_f6,
               bool vvarargin_f10, double *n, double *p);

void ib_binary_expand_op(emxArray_boolean_T *ok, const emxArray_boolean_T *bT,
                         const emxArray_boolean_T *aT,
                         const emxArray_boolean_T *c);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (chkinputR.h) */
