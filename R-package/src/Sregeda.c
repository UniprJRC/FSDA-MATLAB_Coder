/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Sregeda.c
 *
 * Code generation for function 'Sregeda'
 *
 */

/* Include files */
#include "Sregeda.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void cf_binary_expand_op(emxArray_real_T *resrw, const struct_Sregeda_T *out)
{
  emxArray_real_T *b_out;
  double *out_data;
  double *resrw_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  resrw_data = resrw->data;
  emxInit_real_T(&b_out, 1);
  i = b_out->size[0];
  if (resrw->size[0] == 1) {
    b_out->size[0] = out->y->size[0];
  } else {
    b_out->size[0] = resrw->size[0];
  }
  emxEnsureCapacity_real_T(b_out, i);
  out_data = b_out->data;
  stride_0_0 = (out->y->size[0] != 1);
  stride_1_0 = (resrw->size[0] != 1);
  if (resrw->size[0] == 1) {
    loop_ub = out->y->size[0];
  } else {
    loop_ub = resrw->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    out_data[i] = out->y->data[i * stride_0_0] - resrw_data[i * stride_1_0];
  }
  i = resrw->size[0];
  resrw->size[0] = b_out->size[0];
  emxEnsureCapacity_real_T(resrw, i);
  resrw_data = resrw->data;
  loop_ub = b_out->size[0];
  for (i = 0; i < loop_ub; i++) {
    resrw_data[i] = out_data[i];
  }
  emxFree_real_T(&b_out);
}

void df_binary_expand_op(emxArray_real_T *residuals,
                         const struct_Sregeda_T *out, double superbestscale)
{
  emxArray_real_T *b_out;
  double *out_data;
  double *residuals_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  residuals_data = residuals->data;
  emxInit_real_T(&b_out, 1);
  i = b_out->size[0];
  if (residuals->size[0] == 1) {
    b_out->size[0] = out->y->size[0];
  } else {
    b_out->size[0] = residuals->size[0];
  }
  emxEnsureCapacity_real_T(b_out, i);
  out_data = b_out->data;
  stride_0_0 = (out->y->size[0] != 1);
  stride_1_0 = (residuals->size[0] != 1);
  if (residuals->size[0] == 1) {
    loop_ub = out->y->size[0];
  } else {
    loop_ub = residuals->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    out_data[i] =
        (out->y->data[i * stride_0_0] - residuals_data[i * stride_1_0]) /
        superbestscale;
  }
  i = residuals->size[0];
  residuals->size[0] = b_out->size[0];
  emxEnsureCapacity_real_T(residuals, i);
  residuals_data = residuals->data;
  loop_ub = b_out->size[0];
  for (i = 0; i < loop_ub; i++) {
    residuals_data[i] = out_data[i];
  }
  emxFree_real_T(&b_out);
}

/* End of code generation (Sregeda.c) */
