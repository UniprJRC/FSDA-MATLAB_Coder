/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.h
 *
 * Code generation for function 'find'
 *
 */

#ifndef FIND_H
#define FIND_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i);

void c_eml_find(const emxArray_uint8_T *x, emxArray_int32_T *i,
                emxArray_int32_T *j);

void d_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i);

void eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i);

void f_eml_find(const emxArray_boolean_T *x, int i_data[], int i_size[2]);

void gc_binary_expand_op(int _data[], int _size[2], const emxArray_real_T *beta,
                         const emxArray_real_T *good);

void hb_binary_expand_op(emxArray_int32_T *r1, const emxArray_real_T *constcols,
                         const emxArray_real_T *r2);

void m_binary_expand_op(emxArray_int32_T *iidx, const emxArray_real_T *tieloc,
                        int i1, const emxArray_int8_T *epsx, int i2, int i3,
                        int i4, int i5, int i6);

void r_binary_expand_op(emxArray_int32_T *r, const emxArray_boolean_T *bsbT,
                        const emxArray_boolean_T *oldbsbT);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (find.h) */
