/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * array2table.c
 *
 * Code generation for function 'array2table'
 *
 */

/* Include files */
#include "array2table.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void array2table(const emxArray_real_T *x, double *t_metaDim_length,
                 double *t_rowDim_length,
                 f_matlab_internal_coder_tabular *t_varDim,
                 cell_wrap_6 t_data[4], int t_arrayProps_Description_size[2])
{
  const double *x_data;
  int i;
  int loop_ub;
  x_data = x->data;
  loop_ub = x->size[0];
  i = t_data[0].f1->size[0];
  t_data[0].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(t_data[0].f1, i);
  for (i = 0; i < loop_ub; i++) {
    t_data[0].f1->data[i] = x_data[i];
  }
  loop_ub = x->size[0];
  i = t_data[1].f1->size[0];
  t_data[1].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(t_data[1].f1, i);
  for (i = 0; i < loop_ub; i++) {
    t_data[1].f1->data[i] = x_data[i + x->size[0]];
  }
  loop_ub = x->size[0];
  i = t_data[2].f1->size[0];
  t_data[2].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(t_data[2].f1, i);
  for (i = 0; i < loop_ub; i++) {
    t_data[2].f1->data[i] = x_data[i + x->size[0] * 2];
  }
  loop_ub = x->size[0];
  i = t_data[3].f1->size[0];
  t_data[3].f1->size[0] = x->size[0];
  emxEnsureCapacity_real_T(t_data[3].f1, i);
  for (i = 0; i < loop_ub; i++) {
    t_data[3].f1->data[i] = x_data[i + x->size[0] * 3];
  }
  loop_ub = x->size[0];
  t_varDim->length = 4.0;
  t_varDim->hasUnits = false;
  t_varDim->units[0].f1->size[0] = 1;
  t_varDim->units[0].f1->size[1] = 0;
  t_varDim->units[1].f1->size[0] = 1;
  t_varDim->units[1].f1->size[1] = 0;
  t_varDim->units[2].f1->size[0] = 1;
  t_varDim->units[2].f1->size[1] = 0;
  t_varDim->units[3].f1->size[0] = 1;
  t_varDim->units[3].f1->size[1] = 0;
  t_varDim->hasDescrs = false;
  t_varDim->descrs[0].f1->size[0] = 1;
  t_varDim->descrs[0].f1->size[1] = 0;
  t_varDim->descrs[1].f1->size[0] = 1;
  t_varDim->descrs[1].f1->size[1] = 0;
  t_varDim->descrs[2].f1->size[0] = 1;
  t_varDim->descrs[2].f1->size[1] = 0;
  t_varDim->descrs[3].f1->size[0] = 1;
  t_varDim->descrs[3].f1->size[1] = 0;
  t_varDim->hasContinuity = false;
  t_varDim->continuity[0] = unset;
  t_varDim->continuity[1] = unset;
  t_varDim->continuity[2] = unset;
  t_varDim->continuity[3] = unset;
  t_varDim->hasCustomProps = false;
  t_arrayProps_Description_size[0] = 1;
  t_arrayProps_Description_size[1] = 0;
  *t_metaDim_length = 2.0;
  *t_rowDim_length = loop_ub;
}

/* End of code generation (array2table.c) */
