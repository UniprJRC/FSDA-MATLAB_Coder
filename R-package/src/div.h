/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * div.h
 *
 * Code generation for function 'div'
 *
 */

#ifndef DIV_H
#define DIV_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_rdivide(emxArray_real_T *nums, const emxArray_real_T *dens);

void c_rdivide(emxArray_real_T *MinSca, const emxArray_real_T *mm);

void d_rdivide(emxArray_real_T *MinSca, const emxArray_real_T *mm);

void pf_binary_expand_op(emxArray_real_T *diageigunsorted,
                         const emxArray_real_T *eyep, int j);

void qd_binary_expand_op(struct_LTSts_T *out, const c_captured_var *beta,
                         const emxArray_real_T *beta0);

void rdivide(emxArray_real_T *b_tmp, const emxArray_real_T *b);

void ue_binary_expand_op(emxArray_real_T *absu, double a,
                         const emxArray_real_T *x, const emxArray_real_T *r2,
                         const emxArray_real_T *u, const emxArray_int32_T *r3);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (div.h) */
