/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tclust.c
 *
 * Code generation for function 'tclust'
 *
 */

/* Include files */
#include "tclust.h"
#include "abs.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void ff_binary_expand_op(emxArray_real_T *r, const struct_tclust_T *out,
                         const emxArray_real_T *postprobold)
{
  emxArray_real_T *b_out;
  const double *postprobold_data;
  double *out_data;
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
  postprobold_data = postprobold->data;
  emxInit_real_T(&b_out, 2);
  i = b_out->size[0] * b_out->size[1];
  if (postprobold->size[0] == 1) {
    b_out->size[0] = out->postprob->size[0];
  } else {
    b_out->size[0] = postprobold->size[0];
  }
  if (postprobold->size[1] == 1) {
    b_out->size[1] = out->postprob->size[1];
  } else {
    b_out->size[1] = postprobold->size[1];
  }
  emxEnsureCapacity_real_T(b_out, i);
  out_data = b_out->data;
  stride_0_0 = (out->postprob->size[0] != 1);
  stride_0_1 = (out->postprob->size[1] != 1);
  stride_1_0 = (postprobold->size[0] != 1);
  stride_1_1 = (postprobold->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (postprobold->size[1] == 1) {
    loop_ub = out->postprob->size[1];
  } else {
    loop_ub = postprobold->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (postprobold->size[0] == 1) {
      b_loop_ub = out->postprob->size[0];
    } else {
      b_loop_ub = postprobold->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      out_data[i1 + b_out->size[0] * i] =
          out->postprob
              ->data[i1 * stride_0_0 + out->postprob->size[0] * aux_0_1] -
          postprobold_data[i1 * stride_1_0 + postprobold->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  b_abs(b_out, r);
  emxFree_real_T(&b_out);
}

void gf_binary_expand_op(emxArray_real_T *x, const emxArray_int32_T *indold,
                         const emxArray_int32_T *ind)
{
  double *x_data;
  const int *ind_data;
  const int *indold_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  ind_data = ind->data;
  indold_data = indold->data;
  i = x->size[0];
  if (ind->size[0] == 1) {
    x->size[0] = indold->size[0];
  } else {
    x->size[0] = ind->size[0];
  }
  emxEnsureCapacity_real_T(x, i);
  x_data = x->data;
  stride_0_0 = (indold->size[0] != 1);
  stride_1_0 = (ind->size[0] != 1);
  if (ind->size[0] == 1) {
    loop_ub = indold->size[0];
  } else {
    loop_ub = ind->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    x_data[i] =
        (double)indold_data[i * stride_0_0] - (double)ind_data[i * stride_1_0];
  }
}

/* End of code generation (tclust.c) */
