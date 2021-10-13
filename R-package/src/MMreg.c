/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMreg.c
 *
 * Code generation for function 'MMreg'
 *
 */

/* Include files */
#include "MMreg.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void le_binary_expand_op(struct_MMreg_T *out, const emxArray_real_T *y,
                         double ss)
{
  const double *y_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  y_data = y->data;
  i = out->residuals->size[0];
  if (out->fittedvalues->size[0] == 1) {
    out->residuals->size[0] = y->size[0];
  } else {
    out->residuals->size[0] = out->fittedvalues->size[0];
  }
  emxEnsureCapacity_real_T(out->residuals, i);
  stride_0_0 = (y->size[0] != 1);
  stride_1_0 = (out->fittedvalues->size[0] != 1);
  if (out->fittedvalues->size[0] == 1) {
    loop_ub = y->size[0];
  } else {
    loop_ub = out->fittedvalues->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] =
        (y_data[i * stride_0_0] - out->fittedvalues->data[i * stride_1_0]) / ss;
  }
}

/* End of code generation (MMreg.c) */
