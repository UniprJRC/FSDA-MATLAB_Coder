/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mahalFS.c
 *
 * Code generation for function 'mahalFS'
 *
 */

/* Include files */
#include "mahalFS.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "sum.h"
#include <string.h>

/* Function Definitions */
void binary_expand_op(emxArray_real_T *bs, const emxArray_real_T *bb,
                      const emxArray_real_T *Ytilde)
{
  emxArray_real_T *b_bb;
  const double *Ytilde_data;
  const double *bb_data;
  double *b_bb_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  Ytilde_data = Ytilde->data;
  bb_data = bb->data;
  emxInit_real_T(&b_bb, 2);
  i = b_bb->size[0] * b_bb->size[1];
  if (Ytilde->size[0] == 1) {
    b_bb->size[0] = bb->size[0];
  } else {
    b_bb->size[0] = Ytilde->size[0];
  }
  if (Ytilde->size[1] == 1) {
    b_bb->size[1] = bb->size[1];
  } else {
    b_bb->size[1] = Ytilde->size[1];
  }
  emxEnsureCapacity_real_T(b_bb, i);
  b_bb_data = b_bb->data;
  stride_0_0 = (bb->size[0] != 1);
  stride_0_1 = (bb->size[1] != 1);
  stride_1_0 = (Ytilde->size[0] != 1);
  stride_1_1 = (Ytilde->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (Ytilde->size[1] == 1) {
    loop_ub = bb->size[1];
  } else {
    loop_ub = Ytilde->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (Ytilde->size[0] == 1) {
      b_loop_ub = bb->size[0];
    } else {
      b_loop_ub = Ytilde->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_bb_data[i1 + b_bb->size[0] * i] =
          bb_data[i1 * stride_0_0 + bb->size[0] * aux_0_1] *
          Ytilde_data[i1 * stride_1_0 + Ytilde->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  sum(b_bb, bs);
  emxFree_real_T(&b_bb);
}

/* End of code generation (mahalFS.c) */
