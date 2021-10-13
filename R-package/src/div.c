/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * div.c
 *
 * Code generation for function 'div'
 *
 */

/* Include files */
#include "div.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_rdivide(emxArray_real_T *nums, const emxArray_real_T *dens)
{
  emxArray_real_T *b_nums;
  const double *dens_data;
  double *b_nums_data;
  double *nums_data;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  dens_data = dens->data;
  nums_data = nums->data;
  emxInit_real_T(&b_nums, 2);
  i = b_nums->size[0] * b_nums->size[1];
  b_nums->size[0] = 1;
  if (dens->size[1] == 1) {
    b_nums->size[1] = nums->size[1];
  } else {
    b_nums->size[1] = dens->size[1];
  }
  emxEnsureCapacity_real_T(b_nums, i);
  b_nums_data = b_nums->data;
  stride_0_1 = (nums->size[1] != 1);
  stride_1_1 = (dens->size[1] != 1);
  if (dens->size[1] == 1) {
    loop_ub = nums->size[1];
  } else {
    loop_ub = dens->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_nums_data[i] = nums_data[i * stride_0_1] / dens_data[i * stride_1_1];
  }
  i = nums->size[0] * nums->size[1];
  nums->size[0] = 1;
  nums->size[1] = b_nums->size[1];
  emxEnsureCapacity_real_T(nums, i);
  nums_data = nums->data;
  loop_ub = b_nums->size[1];
  for (i = 0; i < loop_ub; i++) {
    nums_data[i] = b_nums_data[i];
  }
  emxFree_real_T(&b_nums);
}

void c_rdivide(emxArray_real_T *MinSca, const emxArray_real_T *mm)
{
  emxArray_real_T *b_MinSca;
  const double *mm_data;
  double *MinSca_data;
  double *b_MinSca_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  mm_data = mm->data;
  MinSca_data = MinSca->data;
  emxInit_real_T(&b_MinSca, 2);
  i = b_MinSca->size[0] * b_MinSca->size[1];
  if (mm->size[0] == 1) {
    b_MinSca->size[0] = MinSca->size[0];
  } else {
    b_MinSca->size[0] = mm->size[0];
  }
  b_MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(b_MinSca, i);
  b_MinSca_data = b_MinSca->data;
  stride_0_0 = (MinSca->size[0] != 1);
  stride_1_0 = (mm->size[0] != 1);
  if (mm->size[0] == 1) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  for (i = 0; i < 7; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_MinSca_data[i1 + b_MinSca->size[0] * i] =
          MinSca_data[i1 * stride_0_0 + MinSca->size[0] * i] /
          mm_data[i1 * stride_1_0 + mm->size[0] * i];
    }
  }
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = b_MinSca->size[0];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  loop_ub = b_MinSca->size[0];
  for (i = 0; i < 7; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      MinSca_data[i1 + MinSca->size[0] * i] =
          b_MinSca_data[i1 + b_MinSca->size[0] * i];
    }
  }
  emxFree_real_T(&b_MinSca);
}

void d_rdivide(emxArray_real_T *MinSca, const emxArray_real_T *mm)
{
  emxArray_real_T *b_MinSca;
  const double *mm_data;
  double *MinSca_data;
  double *b_MinSca_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  mm_data = mm->data;
  MinSca_data = MinSca->data;
  emxInit_real_T(&b_MinSca, 2);
  i = b_MinSca->size[0] * b_MinSca->size[1];
  if (mm->size[0] == 1) {
    b_MinSca->size[0] = MinSca->size[0];
  } else {
    b_MinSca->size[0] = mm->size[0];
  }
  b_MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(b_MinSca, i);
  b_MinSca_data = b_MinSca->data;
  stride_0_0 = (MinSca->size[0] != 1);
  stride_1_0 = (mm->size[0] != 1);
  if (mm->size[0] == 1) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_MinSca_data[i1 + b_MinSca->size[0] * i] =
          MinSca_data[i1 * stride_0_0 + MinSca->size[0] * i] /
          mm_data[i1 * stride_1_0 + mm->size[0] * i];
    }
  }
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = b_MinSca->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  loop_ub = b_MinSca->size[0];
  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      MinSca_data[i1 + MinSca->size[0] * i] =
          b_MinSca_data[i1 + b_MinSca->size[0] * i];
    }
  }
  emxFree_real_T(&b_MinSca);
}

void pf_binary_expand_op(emxArray_real_T *diageigunsorted,
                         const emxArray_real_T *eyep, int j)
{
  emxArray_real_T *b_diageigunsorted;
  const double *eyep_data;
  double *b_diageigunsorted_data;
  double *diageigunsorted_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  eyep_data = eyep->data;
  diageigunsorted_data = diageigunsorted->data;
  emxInit_real_T(&b_diageigunsorted, 1);
  i = eyep->size[0];
  stride_0_0 = b_diageigunsorted->size[0];
  if (i == 1) {
    b_diageigunsorted->size[0] = diageigunsorted->size[0];
  } else {
    b_diageigunsorted->size[0] = i;
  }
  emxEnsureCapacity_real_T(b_diageigunsorted, stride_0_0);
  b_diageigunsorted_data = b_diageigunsorted->data;
  stride_0_0 = (diageigunsorted->size[0] != 1);
  stride_1_0 = (i != 1);
  if (i == 1) {
    loop_ub = diageigunsorted->size[0];
  } else {
    loop_ub = i;
  }
  for (i = 0; i < loop_ub; i++) {
    b_diageigunsorted_data[i] = diageigunsorted_data[i * stride_0_0] /
                                eyep_data[i * stride_1_0 + eyep->size[0] * j];
  }
  i = diageigunsorted->size[0];
  diageigunsorted->size[0] = b_diageigunsorted->size[0];
  emxEnsureCapacity_real_T(diageigunsorted, i);
  diageigunsorted_data = diageigunsorted->data;
  loop_ub = b_diageigunsorted->size[0];
  for (i = 0; i < loop_ub; i++) {
    diageigunsorted_data[i] = b_diageigunsorted_data[i];
  }
  emxFree_real_T(&b_diageigunsorted);
}

void qd_binary_expand_op(struct_LTSts_T *out, const c_captured_var *beta,
                         const emxArray_real_T *beta0)
{
  const double *beta0_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  beta0_data = beta0->data;
  i = out->residuals->size[0];
  if (beta0->size[0] == 1) {
    out->residuals->size[0] = beta->contents->size[0];
  } else {
    out->residuals->size[0] = beta0->size[0];
  }
  emxEnsureCapacity_real_T(out->residuals, i);
  stride_0_0 = (beta->contents->size[0] != 1);
  stride_1_0 = (beta0->size[0] != 1);
  if (beta0->size[0] == 1) {
    loop_ub = beta->contents->size[0];
  } else {
    loop_ub = beta0->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] =
        beta->contents->data[i * stride_0_0] / beta0_data[i * stride_1_0];
  }
}

void rdivide(emxArray_real_T *b_tmp, const emxArray_real_T *b)
{
  emxArray_real_T *b_b_tmp;
  const double *b_data;
  double *b_b_tmp_data;
  double *b_tmp_data;
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
  b_data = b->data;
  b_tmp_data = b_tmp->data;
  emxInit_real_T(&b_b_tmp, 2);
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  if (b->size[0] == 1) {
    b_b_tmp->size[0] = b_tmp->size[0];
  } else {
    b_b_tmp->size[0] = b->size[0];
  }
  if (b->size[1] == 1) {
    b_b_tmp->size[1] = b_tmp->size[1];
  } else {
    b_b_tmp->size[1] = b->size[1];
  }
  emxEnsureCapacity_real_T(b_b_tmp, i);
  b_b_tmp_data = b_b_tmp->data;
  stride_0_0 = (b_tmp->size[0] != 1);
  stride_0_1 = (b_tmp->size[1] != 1);
  stride_1_0 = (b->size[0] != 1);
  stride_1_1 = (b->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (b->size[1] == 1) {
    loop_ub = b_tmp->size[1];
  } else {
    loop_ub = b->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (b->size[0] == 1) {
      b_loop_ub = b_tmp->size[0];
    } else {
      b_loop_ub = b->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_b_tmp_data[i1 + b_b_tmp->size[0] * i] =
          b_tmp_data[i1 * stride_0_0 + b_tmp->size[0] * aux_0_1] /
          b_data[i1 * stride_1_0 + b->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b_b_tmp->size[0];
  b_tmp->size[1] = b_b_tmp->size[1];
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  loop_ub = b_b_tmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_b_tmp->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_tmp_data[i1 + b_tmp->size[0] * i] =
          b_b_tmp_data[i1 + b_b_tmp->size[0] * i];
    }
  }
  emxFree_real_T(&b_b_tmp);
}

void ue_binary_expand_op(emxArray_real_T *absu, double a,
                         const emxArray_real_T *x, const emxArray_real_T *r2,
                         const emxArray_real_T *u, const emxArray_int32_T *r3)
{
  const double *r1;
  const double *u_data;
  const double *x_data;
  double *absu_data;
  const int *r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  r = r3->data;
  u_data = u->data;
  r1 = r2->data;
  x_data = x->data;
  i = absu->size[0];
  if (r3->size[0] == 1) {
    if (r2->size[0] == 1) {
      absu->size[0] = x->size[0];
    } else {
      absu->size[0] = r2->size[0];
    }
  } else {
    absu->size[0] = r3->size[0];
  }
  emxEnsureCapacity_real_T(absu, i);
  absu_data = absu->data;
  stride_0_0 = (x->size[0] != 1);
  stride_1_0 = (r2->size[0] != 1);
  stride_2_0 = (r3->size[0] != 1);
  if (r3->size[0] == 1) {
    if (r2->size[0] == 1) {
      loop_ub = x->size[0];
    } else {
      loop_ub = r2->size[0];
    }
  } else {
    loop_ub = r3->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    absu_data[i] = a * x_data[i * stride_0_0] * r1[i * stride_1_0] /
                   u_data[r[i * stride_2_0] - 1];
  }
}

/* End of code generation (div.c) */
