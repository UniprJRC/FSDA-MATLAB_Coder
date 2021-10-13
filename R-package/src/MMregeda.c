/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMregeda.c
 *
 * Code generation for function 'MMregeda'
 *
 */

/* Include files */
#include "MMregeda.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void ve_binary_expand_op(struct_MMregeda_T *out, int jj,
                         const emxArray_real_T *C, double ss)
{
  const double *C_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  C_data = C->data;
  stride_0_0 = (out->y->size[0] != 1);
  stride_1_0 = (C->size[0] != 1);
  if (C->size[0] == 1) {
    loop_ub = out->y->size[0];
  } else {
    loop_ub = C->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    out->RES->data[i + out->RES->size[0] * jj] =
        (out->y->data[i * stride_0_0] - C_data[i * stride_1_0]) / ss;
  }
}

/* End of code generation (MMregeda.c) */
