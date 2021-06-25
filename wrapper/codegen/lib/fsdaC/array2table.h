/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: array2table.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef ARRAY2TABLE_H
#define ARRAY2TABLE_H

/* Include Files */
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
                 cell_wrap_48 *t_rowDim_labels, double *t_rowDim_length,
                 f_matlab_internal_coder_tabular *t_varDim,
                 cell_wrap_6 t_data[4], int t_arrayProps_Description_size[2]);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for array2table.h
 *
 * [EOF]
 */
