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

#pragma once

/* Include files */
#include "LTSts_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void array2table(const emlrtStack *sp, const emxArray_real_T *x,
                 const char_T varargin_2_Value_data[],
                 const int32_T varargin_2_Value_size[2],
                 real_T *t_metaDim_length, cell_wrap_1 *t_rowDim_labels,
                 real_T *t_rowDim_length,
                 f_matlab_internal_coder_tabular *t_varDim,
                 cell_wrap_4 t_data[4],
                 int32_T t_arrayProps_Description_size[2]);

/* End of code generation (array2table.h) */
