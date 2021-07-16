/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * array2table.h
 *
 * Code generation for function 'array2table'
 *
 */

#ifndef ARRAY2TABLE_H
#define ARRAY2TABLE_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void array2table(const emxArray_real_T *x, const char varargin_2_Value_data[],
                 const int varargin_2_Value_size[2], double *t_metaDim_length,
                 cell_wrap_50 *t_rowDim_labels, double *t_rowDim_length,
                 f_matlab_internal_coder_tabular *t_varDim,
                 cell_wrap_6 t_data[4], int t_arrayProps_Description_size[2]);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (array2table.h) */
