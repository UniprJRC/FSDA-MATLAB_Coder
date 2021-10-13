/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cat1.c
 *
 * Code generation for function 'cat1'
 *
 */

/* Include files */
#include "cat1.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_binary_expand_op(emxArray_real_T *gfind, const emxArray_real_T *gmin1,
                        int i1, int i2, int i3, int i4, const struct_FSM_T *out,
                        int i5, int i6)
{
  emxArray_real_T *b_gmin1;
  const double *gmin1_data;
  double *b_gmin1_data;
  double *gfind_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  gmin1_data = gmin1->data;
  emxInit_real_T(&b_gmin1, 1);
  i = b_gmin1->size[0];
  if ((i6 - i5) + 1 == 1) {
    b_gmin1->size[0] = (i4 - i3) + 1;
  } else {
    b_gmin1->size[0] = (i6 - i5) + 1;
  }
  emxEnsureCapacity_real_T(b_gmin1, i);
  b_gmin1_data = b_gmin1->data;
  stride_0_0 = ((i4 - i3) + 1 != 1);
  stride_1_0 = ((i6 - i5) + 1 != 1);
  if ((i6 - i5) + 1 == 1) {
    loop_ub = (i4 - i3) + 1;
  } else {
    loop_ub = (i6 - i5) + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    b_gmin1_data[i] =
        (gmin1_data[(i3 + i * stride_0_0) + gmin1->size[0] * 3] >
         out->mmd->data[(i5 + i * stride_1_0) + out->mmd->size[0]]);
  }
  loop_ub = i2 - i1;
  i = gfind->size[0] * gfind->size[1];
  gfind->size[0] = loop_ub + 1;
  gfind->size[1] = 2;
  emxEnsureCapacity_real_T(gfind, i);
  gfind_data = gfind->data;
  for (i = 0; i <= loop_ub; i++) {
    gfind_data[i] = gmin1_data[i1 + i];
  }
  loop_ub = b_gmin1->size[0];
  for (i = 0; i < loop_ub; i++) {
    gfind_data[i + gfind->size[0]] = b_gmin1_data[i];
  }
  emxFree_real_T(&b_gmin1);
}

void kc_binary_expand_op(emxArray_real_T *MDRenv, const emxArray_real_T *m,
                         const emxArray_real_T *MinSca,
                         const emxArray_real_T *mm)
{
  emxArray_real_T *b_MinSca;
  const double *MinSca_data;
  const double *m_data;
  const double *mm_data;
  double *MDRenv_data;
  double *b_MinSca_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  mm_data = mm->data;
  MinSca_data = MinSca->data;
  m_data = m->data;
  emxInit_real_T(&b_MinSca, 1);
  i = b_MinSca->size[0];
  if (mm->size[0] == 1) {
    b_MinSca->size[0] = MinSca->size[0];
  } else {
    b_MinSca->size[0] = mm->size[0];
  }
  emxEnsureCapacity_real_T(b_MinSca, i);
  b_MinSca_data = b_MinSca->data;
  stride_0_0 = (MinSca->size[0] != 1);
  stride_1_0 = (mm->size[0] != 1);
  if (mm->size[0] == 1) {
    loop_ub = MinSca->size[0];
  } else {
    loop_ub = mm->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_MinSca_data[i] = MinSca_data[i * stride_0_0] / mm_data[i * stride_1_0];
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = m->size[0];
  MDRenv->size[1] = 2;
  emxEnsureCapacity_real_T(MDRenv, i);
  MDRenv_data = MDRenv->data;
  loop_ub = m->size[0];
  for (i = 0; i < loop_ub; i++) {
    MDRenv_data[i] = m_data[i];
  }
  loop_ub = b_MinSca->size[0];
  for (i = 0; i < loop_ub; i++) {
    MDRenv_data[i + MDRenv->size[0]] = b_MinSca_data[i];
  }
  emxFree_real_T(&b_MinSca);
}

void mb_binary_expand_op(emxArray_real_T *gfind, const emxArray_real_T *gmin1,
                         int i1, int i2, int i3, int i4,
                         const emxArray_real_T *out_mmd, int i5, int i6)
{
  emxArray_real_T *b_gmin1;
  const double *gmin1_data;
  const double *out_mmd_data;
  double *b_gmin1_data;
  double *gfind_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  out_mmd_data = out_mmd->data;
  gmin1_data = gmin1->data;
  emxInit_real_T(&b_gmin1, 1);
  i = b_gmin1->size[0];
  if ((i6 - i5) + 1 == 1) {
    b_gmin1->size[0] = (i4 - i3) + 1;
  } else {
    b_gmin1->size[0] = (i6 - i5) + 1;
  }
  emxEnsureCapacity_real_T(b_gmin1, i);
  b_gmin1_data = b_gmin1->data;
  stride_0_0 = ((i4 - i3) + 1 != 1);
  stride_1_0 = ((i6 - i5) + 1 != 1);
  if ((i6 - i5) + 1 == 1) {
    loop_ub = (i4 - i3) + 1;
  } else {
    loop_ub = (i6 - i5) + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    b_gmin1_data[i] = (gmin1_data[(i3 + i * stride_0_0) + gmin1->size[0] * 3] >
                       out_mmd_data[(i5 + i * stride_1_0) + out_mmd->size[0]]);
  }
  loop_ub = i2 - i1;
  i = gfind->size[0] * gfind->size[1];
  gfind->size[0] = loop_ub + 1;
  gfind->size[1] = 2;
  emxEnsureCapacity_real_T(gfind, i);
  gfind_data = gfind->data;
  for (i = 0; i <= loop_ub; i++) {
    gfind_data[i] = gmin1_data[i1 + i];
  }
  loop_ub = b_gmin1->size[0];
  for (i = 0; i < loop_ub; i++) {
    gfind_data[i + gfind->size[0]] = b_gmin1_data[i];
  }
  emxFree_real_T(&b_gmin1);
}

void vb_binary_expand_op(emxArray_real_T *ord, const emxArray_real_T *r,
                         const emxArray_real_T *ncl, const emxArray_real_T *b,
                         const emxArray_real_T *e)
{
  emxArray_real_T *b_r;
  const double *b_data;
  const double *e_data;
  const double *ncl_data;
  const double *r_data;
  double *b_r_data;
  double *ord_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  e_data = e->data;
  b_data = b->data;
  ncl_data = ncl->data;
  r_data = r->data;
  emxInit_real_T(&b_r, 1);
  i = b_r->size[0];
  if (b->size[0] == 1) {
    b_r->size[0] = ncl->size[0];
  } else {
    b_r->size[0] = b->size[0];
  }
  emxEnsureCapacity_real_T(b_r, i);
  b_r_data = b_r->data;
  stride_0_0 = (ncl->size[0] != 1);
  stride_1_0 = (b->size[0] != 1);
  if (b->size[0] == 1) {
    loop_ub = ncl->size[0];
  } else {
    loop_ub = b->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_r_data[i] = r_data[((int)ncl_data[i * stride_0_0] + r->size[0]) - 1] /
                  (b_data[i * stride_1_0] + 1.0);
  }
  i = ord->size[0] * ord->size[1];
  ord->size[0] = b_r->size[0];
  ord->size[1] = 2;
  emxEnsureCapacity_real_T(ord, i);
  ord_data = ord->data;
  loop_ub = b_r->size[0];
  for (i = 0; i < loop_ub; i++) {
    ord_data[i] = b_r_data[i];
  }
  emxFree_real_T(&b_r);
  loop_ub = ncl->size[0];
  for (i = 0; i < loop_ub; i++) {
    ord_data[i + ord->size[0]] = e_data[(int)ncl_data[i] - 1];
  }
}

void xb_binary_expand_op(emxArray_real_T *gval, const emxArray_real_T *gmin1,
                         int i1, int i2, int i3, int i4, const struct_T *out,
                         int i5, int i6)
{
  emxArray_real_T *b_gmin1;
  const double *gmin1_data;
  double *b_gmin1_data;
  double *gval_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  gmin1_data = gmin1->data;
  emxInit_real_T(&b_gmin1, 1);
  i = b_gmin1->size[0];
  if ((i6 - i5) + 1 == 1) {
    b_gmin1->size[0] = (i4 - i3) + 1;
  } else {
    b_gmin1->size[0] = (i6 - i5) + 1;
  }
  emxEnsureCapacity_real_T(b_gmin1, i);
  b_gmin1_data = b_gmin1->data;
  stride_0_0 = ((i4 - i3) + 1 != 1);
  stride_1_0 = ((i6 - i5) + 1 != 1);
  if ((i6 - i5) + 1 == 1) {
    loop_ub = (i4 - i3) + 1;
  } else {
    loop_ub = (i6 - i5) + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    b_gmin1_data[i] =
        (gmin1_data[(i3 + i * stride_0_0) + gmin1->size[0] * 3] >
         out->mdr->data[(i5 + i * stride_1_0) + out->mdr->size[0]]);
  }
  loop_ub = i2 - i1;
  i = gval->size[0] * gval->size[1];
  gval->size[0] = loop_ub + 1;
  gval->size[1] = 2;
  emxEnsureCapacity_real_T(gval, i);
  gval_data = gval->data;
  for (i = 0; i <= loop_ub; i++) {
    gval_data[i] = gmin1_data[i1 + i];
  }
  loop_ub = b_gmin1->size[0];
  for (i = 0; i < loop_ub; i++) {
    gval_data[i + gval->size[0]] = b_gmin1_data[i];
  }
  emxFree_real_T(&b_gmin1);
}

/* End of code generation (cat1.c) */
