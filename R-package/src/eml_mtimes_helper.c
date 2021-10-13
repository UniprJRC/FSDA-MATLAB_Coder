/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void jc_binary_expand_op(emxArray_real_T *b_tmp, const emxArray_real_T *mm,
                         const emxArray_real_T *MinSca,
                         const emxArray_real_T *quant)
{
  emxArray_real_T *r;
  const double *MinSca_data;
  const double *mm_data;
  const double *quant_data;
  double *b_tmp_data;
  double *r1;
  int b_quant;
  int i;
  int i1;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  quant_data = quant->data;
  MinSca_data = MinSca->data;
  mm_data = mm->data;
  b_tmp_data = b_tmp->data;
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  if (quant->size[0] == 1) {
    b_quant = MinSca->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = mm->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = MinSca->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    r->size[0] = b_tmp->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = MinSca->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      r->size[0] = mm->size[0];
    } else if (quant->size[0] == 1) {
      r->size[0] = MinSca->size[0];
    } else {
      r->size[0] = quant->size[0];
    }
  }
  r->size[1] = 7;
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  stride_0_0 = (b_tmp->size[0] != 1);
  stride_1_0 = (mm->size[0] != 1);
  stride_2_0 = (MinSca->size[0] != 1);
  stride_3_0 = (quant->size[0] != 1);
  if (quant->size[0] == 1) {
    b_quant = MinSca->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = mm->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = MinSca->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = b_tmp->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = MinSca->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = mm->size[0];
    } else if (quant->size[0] == 1) {
      b_quant = MinSca->size[0];
    } else {
      b_quant = quant->size[0];
    }
  }
  for (i = 0; i < 7; i++) {
    for (i1 = 0; i1 < b_quant; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (b_tmp_data[i1 * stride_0_0 + b_tmp->size[0] * i] /
                     ((mm_data[i1 * stride_1_0 + mm->size[0] * i] + 1.0) +
                      MinSca_data[i1 * stride_2_0 + MinSca->size[0] * i] *
                          quant_data[i1 * stride_3_0 + quant->size[0] * i]) +
                 1.0);
    }
  }
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = r->size[0];
  b_tmp->size[1] = 7;
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  b_quant = r->size[0];
  for (i = 0; i < 7; i++) {
    for (i1 = 0; i1 < b_quant; i1++) {
      b_tmp_data[i1 + b_tmp->size[0] * i] = r1[i1 + r->size[0] * i];
    }
  }
  emxFree_real_T(&r);
}

void mc_binary_expand_op(emxArray_real_T *b_tmp, const emxArray_real_T *mm,
                         const emxArray_real_T *MinSca,
                         const emxArray_real_T *quant)
{
  emxArray_real_T *r;
  const double *MinSca_data;
  const double *mm_data;
  const double *quant_data;
  double *b_tmp_data;
  double *r1;
  int b_quant;
  int i;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  quant_data = quant->data;
  MinSca_data = MinSca->data;
  mm_data = mm->data;
  b_tmp_data = b_tmp->data;
  emxInit_real_T(&r, 1);
  i = r->size[0];
  if (quant->size[0] == 1) {
    b_quant = MinSca->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = mm->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = MinSca->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    r->size[0] = b_tmp->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = MinSca->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      r->size[0] = mm->size[0];
    } else if (quant->size[0] == 1) {
      r->size[0] = MinSca->size[0];
    } else {
      r->size[0] = quant->size[0];
    }
  }
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  stride_0_0 = (b_tmp->size[0] != 1);
  stride_1_0 = (mm->size[0] != 1);
  stride_2_0 = (MinSca->size[0] != 1);
  stride_3_0 = (quant->size[0] != 1);
  if (quant->size[0] == 1) {
    b_quant = MinSca->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = mm->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = MinSca->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = b_tmp->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = MinSca->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = mm->size[0];
    } else if (quant->size[0] == 1) {
      b_quant = MinSca->size[0];
    } else {
      b_quant = quant->size[0];
    }
  }
  for (i = 0; i < b_quant; i++) {
    r1[i] =
        0.5 * (b_tmp_data[i * stride_0_0] /
                   ((mm_data[i * stride_1_0] + 1.0) +
                    MinSca_data[i * stride_2_0] * quant_data[i * stride_3_0]) +
               1.0);
  }
  i = b_tmp->size[0];
  b_tmp->size[0] = r->size[0];
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  b_quant = r->size[0];
  for (i = 0; i < b_quant; i++) {
    b_tmp_data[i] = r1[i];
  }
  emxFree_real_T(&r);
}

void s_binary_expand_op(emxArray_real_T *zi, double a,
                        const emxArray_real_T *mi,
                        const emxArray_real_T *mibsbr)
{
  const double *mi_data;
  const double *mibsbr_data;
  double *zi_data;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  mibsbr_data = mibsbr->data;
  mi_data = mi->data;
  i = zi->size[0] * zi->size[1];
  zi->size[0] = 1;
  if (mibsbr->size[1] == 1) {
    zi->size[1] = mi->size[1];
  } else {
    zi->size[1] = mibsbr->size[1];
  }
  emxEnsureCapacity_real_T(zi, i);
  zi_data = zi->data;
  stride_0_1 = (mi->size[1] != 1);
  stride_1_1 = (mibsbr->size[1] != 1);
  if (mibsbr->size[1] == 1) {
    loop_ub = mi->size[1];
  } else {
    loop_ub = mibsbr->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    zi_data[i] = a * (mi_data[i * stride_0_1] - mibsbr_data[i * stride_1_1]);
  }
}

/* End of code generation (eml_mtimes_helper.c) */
