/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr.h
 *
 * Code generation for function 'FSRmdr'
 *
 */

#ifndef FSRMDR_H
#define FSRMDR_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSRmdr(const emxArray_real_T *y, const emxArray_real_T *X,
            emxArray_real_T *bsb, double varargin_2, bool varargin_8,
            const emxArray_real_T *varargin_10, bool varargin_12,
            const double varargin_14_data[], const int varargin_14_size[2],
            const emxArray_real_T *varargin_18, emxArray_real_T *mdr,
            emxArray_real_T *Un, emxArray_real_T *BB, emxArray_real_T *Bols,
            emxArray_real_T *S2);

void b_minus(emxArray_real_T *e, const emxArray_real_T *y);

void ub_binary_expand_op(emxArray_boolean_T *oldbsbT,
                         const emxArray_boolean_T *bsbT);

void wb_binary_expand_op(emxArray_boolean_T *unitstopenalize,
                         const emxArray_real_T *b, const emxArray_real_T *r1);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSRmdr.h) */
