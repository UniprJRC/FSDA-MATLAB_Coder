/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unsafeSxfun.h
 *
 * Code generation for function 'unsafeSxfun'
 *
 */

#ifndef UNSAFESXFUN_H
#define UNSAFESXFUN_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void ce_binary_expand_op(emxArray_real_T *r2, const emxArray_real_T *y,
                         const c_captured_var *yhat);

void jb_binary_expand_op(emxArray_real_T *r2, const emxArray_real_T *y);

void md_binary_expand_op(emxArray_real_T *y, const c_captured_var *yin,
                         const c_captured_var *bsb, const c_captured_var *yhat);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (unsafeSxfun.h) */
