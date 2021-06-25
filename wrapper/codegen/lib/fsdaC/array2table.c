/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: array2table.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "array2table.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : const emxArray_real_T *x
 *                const char varargin_2_Value_data[]
 *                const int varargin_2_Value_size[2]
 *                double *t_metaDim_length
 *                cell_wrap_48 *t_rowDim_labels
 *                double *t_rowDim_length
 *                f_matlab_internal_coder_tabular *t_varDim
 *                cell_wrap_6 t_data[4]
 *                int t_arrayProps_Description_size[2]
 * Return Type  : void
 */
void array2table(const emxArray_real_T *x, const char varargin_2_Value_data[],
                 const int varargin_2_Value_size[2], double *t_metaDim_length,
                 cell_wrap_48 *t_rowDim_labels, double *t_rowDim_length,
                 f_matlab_internal_coder_tabular *t_varDim,
                 cell_wrap_6 t_data[4], int t_arrayProps_Description_size[2])
{
  int b_j1;
  int b_t_rowDim_length;
  int i;
  int j2;
  j2 = x->size[0];
  i = t_data[0].f1->size[0];
  t_data[0].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(t_data[0].f1, i);
  for (i = 0; i < j2; i++) {
    t_data[0].f1->data[i] = x->data[i];
  }
  j2 = x->size[0];
  i = t_data[1].f1->size[0];
  t_data[1].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(t_data[1].f1, i);
  for (i = 0; i < j2; i++) {
    t_data[1].f1->data[i] = x->data[i + x->size[0]];
  }
  j2 = x->size[0];
  i = t_data[2].f1->size[0];
  t_data[2].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(t_data[2].f1, i);
  for (i = 0; i < j2; i++) {
    t_data[2].f1->data[i] = x->data[i + x->size[0] * 2];
  }
  j2 = x->size[0];
  i = t_data[3].f1->size[0];
  t_data[3].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(t_data[3].f1, i);
  for (i = 0; i < j2; i++) {
    t_data[3].f1->data[i] = x->data[i + x->size[0] * 3];
  }
  b_t_rowDim_length = x->size[0];
  b_j1 = 0;
  while ((b_j1 + 1 <= varargin_2_Value_size[1]) &&
         bv[(unsigned char)varargin_2_Value_data[b_j1] & 127]) {
    b_j1++;
  }
  j2 = varargin_2_Value_size[1];
  while ((j2 > 0) && bv[(unsigned char)varargin_2_Value_data[j2 - 1] & 127]) {
    j2--;
  }
  if (b_j1 + 1 > j2) {
    b_j1 = 0;
    j2 = 0;
  }
  t_rowDim_labels->f1.size[0] = 1;
  j2 -= b_j1;
  t_rowDim_labels->f1.size[1] = j2;
  for (i = 0; i < j2; i++) {
    t_rowDim_labels->f1.data[i] = varargin_2_Value_data[b_j1 + i];
  }
  t_varDim->length = 4.0;
  t_varDim->hasUnits = false;
  t_varDim->units[0].f1.size[0] = 1;
  t_varDim->units[0].f1.size[1] = 0;
  t_varDim->units[1].f1.size[0] = 1;
  t_varDim->units[1].f1.size[1] = 0;
  t_varDim->units[2].f1.size[0] = 1;
  t_varDim->units[2].f1.size[1] = 0;
  t_varDim->units[3].f1.size[0] = 1;
  t_varDim->units[3].f1.size[1] = 0;
  t_varDim->hasDescrs = false;
  t_varDim->descrs[0].f1.size[0] = 1;
  t_varDim->descrs[0].f1.size[1] = 0;
  t_varDim->descrs[1].f1.size[0] = 1;
  t_varDim->descrs[1].f1.size[1] = 0;
  t_varDim->descrs[2].f1.size[0] = 1;
  t_varDim->descrs[2].f1.size[1] = 0;
  t_varDim->descrs[3].f1.size[0] = 1;
  t_varDim->descrs[3].f1.size[1] = 0;
  t_varDim->hasContinuity = false;
  t_varDim->continuity[0] = unset;
  t_varDim->continuity[1] = unset;
  t_varDim->continuity[2] = unset;
  t_varDim->continuity[3] = unset;
  t_varDim->hasCustomProps = false;
  t_arrayProps_Description_size[0] = 1;
  t_arrayProps_Description_size[1] = 0;
  *t_metaDim_length = 2.0;
  *t_rowDim_length = b_t_rowDim_length;
}

/*
 * File trailer for array2table.c
 *
 * [EOF]
 */
