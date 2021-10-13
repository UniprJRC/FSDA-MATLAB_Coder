/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * addt.c
 *
 * Code generation for function 'addt'
 *
 */

/* Include files */
#include "addt.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void ef_binary_expand_op(emxArray_real_T *E, const double _data[],
                         const int *_size)
{
  emxArray_real_T *b_E;
  double *E_data;
  double *b_E_data;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int unnamed_idx_0;
  E_data = E->data;
  emxInit_real_T(&b_E, 2);
  unnamed_idx_0 = *_size;
  i = b_E->size[0] * b_E->size[1];
  if (unnamed_idx_0 == 1) {
    b_E->size[0] = E->size[0];
  } else {
    b_E->size[0] = unnamed_idx_0;
  }
  b_E->size[1] = E->size[1];
  emxEnsureCapacity_real_T(b_E, i);
  b_E_data = b_E->data;
  stride_0_0 = (E->size[0] != 1);
  stride_1_0 = (unnamed_idx_0 != 1);
  loop_ub = E->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (unnamed_idx_0 == 1) {
      b_loop_ub = E->size[0];
    } else {
      b_loop_ub = unnamed_idx_0;
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_E_data[i1 + b_E->size[0] * i] =
          E_data[i1 * stride_0_0 + E->size[0] * i] - _data[i1 * stride_1_0];
    }
  }
  i = E->size[0] * E->size[1];
  E->size[0] = b_E->size[0];
  E->size[1] = b_E->size[1];
  emxEnsureCapacity_real_T(E, i);
  E_data = E->data;
  loop_ub = b_E->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_E->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      E_data[i1 + E->size[0] * i] = b_E_data[i1 + b_E->size[0] * i];
    }
  }
  emxFree_real_T(&b_E);
}

/* End of code generation (addt.c) */
