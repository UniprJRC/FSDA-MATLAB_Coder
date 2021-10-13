/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSM.h
 *
 * Code generation for function 'FSM'
 *
 */

#ifndef FSM_H
#define FSM_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSM(emxArray_real_T *Y, const double varargin_4_data[],
         const int varargin_4_size[2], double varargin_8,
         const char varargin_10_data[], const int varargin_10_size[2],
         double varargin_12, emxArray_real_T *out_outliers,
         emxArray_real_T *out_loc, emxArray_real_T *out_cov,
         emxArray_real_T *out_md, emxArray_real_T *out_mmd,
         emxArray_real_T *out_Un, emxArray_real_T *out_nout,
         char out_class_data[], int out_class_size[2]);

void c_binary_expand_op(emxArray_boolean_T *x, const emxArray_real_T *gmin1,
                        int i1, int i2, const struct_FSM_T *out, int i3,
                        int i4);

void d_binary_expand_op(emxArray_boolean_T *x, const struct_FSM_T *out, int i1,
                        int i2, const emxArray_real_T *gmin, int i3, int i4,
                        int c001);

void e_binary_expand_op(emxArray_boolean_T *r1, const struct_FSM_T *out,
                        const emxArray_real_T *gmin);

void f_binary_expand_op(emxArray_boolean_T *r1, const struct_FSM_T *out,
                        const emxArray_real_T *gmin);

void g_binary_expand_op(emxArray_boolean_T *r1, const struct_FSM_T *out,
                        const emxArray_real_T *gmin);

void h_binary_expand_op(emxArray_boolean_T *r1, const struct_FSM_T *out,
                        const emxArray_real_T *gmin);

void i_binary_expand_op(emxArray_boolean_T *x, const struct_FSM_T *out,
                        const emxArray_real_T *gmin);

void nb_binary_expand_op(emxArray_boolean_T *x, const emxArray_real_T *gmin1,
                         int i1, int i2, const emxArray_real_T *out_mmd, int i3,
                         int i4);

void ob_binary_expand_op(emxArray_boolean_T *x, const emxArray_real_T *out_mmd,
                         int i1, int i2, const emxArray_real_T *gmin, int i3,
                         int i4, int c001);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSM.h) */
