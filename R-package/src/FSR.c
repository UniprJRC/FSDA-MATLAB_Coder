/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSR.c
 *
 * Code generation for function 'FSR'
 *
 */

/* Include files */
#include "FSR.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void gb_binary_expand_op(emxArray_real_T *y, const emxArray_real_T *constr,
                         double outPREL_scale)
{
  emxArray_real_T *b_y;
  const double *constr_data;
  double *b_y_data;
  double *y_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  constr_data = constr->data;
  y_data = y->data;
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  if (constr->size[0] == 1) {
    b_y->size[0] = y->size[0];
  } else {
    b_y->size[0] = constr->size[0];
  }
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  stride_0_0 = (y->size[0] != 1);
  stride_1_0 = (constr->size[0] != 1);
  if (constr->size[0] == 1) {
    loop_ub = y->size[0];
  } else {
    loop_ub = constr->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] =
        (y_data[i * stride_0_0] - constr_data[i * stride_1_0]) / outPREL_scale;
  }
  i = y->size[0];
  y->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(y, i);
  y_data = y->data;
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    y_data[i] = b_y_data[i];
  }
  emxFree_real_T(&b_y);
}

/* End of code generation (FSR.c) */
