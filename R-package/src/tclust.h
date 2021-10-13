/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tclust.h
 *
 * Code generation for function 'tclust'
 *
 */

#ifndef TCLUST_H
#define TCLUST_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void ff_binary_expand_op(emxArray_real_T *r, const struct_tclust_T *out,
                         const emxArray_real_T *postprobold);

void gf_binary_expand_op(emxArray_real_T *x, const emxArray_int32_T *indold,
                         const emxArray_int32_T *ind);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (tclust.h) */
