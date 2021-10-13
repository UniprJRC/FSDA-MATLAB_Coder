/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * find.c
 *
 * Code generation for function 'find'
 *
 */

/* Include files */
#include "find.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void e_eml_find(const emxArray_boolean_T *x, int i_data[],
                       int i_size[2]);

/* Function Definitions */
static void e_eml_find(const emxArray_boolean_T *x, int i_data[], int i_size[2])
{
  emxArray_int32_T *i;
  int idx;
  int ii;
  int k;
  int *b_i_data;
  const bool *x_data;
  bool exitg1;
  x_data = x->data;
  emxInit_int32_T(&i, 2);
  k = (1 <= x->size[1]);
  idx = 0;
  ii = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = k;
  emxEnsureCapacity_int32_T(i, ii);
  b_i_data = i->data;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= x->size[1] - 1)) {
    if (x_data[ii]) {
      idx++;
      b_i_data[idx - 1] = ii + 1;
      if (idx >= k) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (k == 1) {
    if (idx == 0) {
      i->size[0] = 1;
      i->size[1] = 0;
    }
  } else {
    ii = i->size[0] * i->size[1];
    i->size[1] = (1 <= idx);
    emxEnsureCapacity_int32_T(i, ii);
    b_i_data = i->data;
  }
  i_size[0] = 1;
  i_size[1] = i->size[1];
  ii = i->size[1];
  if (0 <= ii - 1) {
    i_data[0] = b_i_data[0];
  }
  emxFree_int32_T(&i);
}

void b_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i)
{
  int idx;
  int ii;
  int nx;
  int *i_data;
  const bool *x_data;
  bool exitg1;
  x_data = x->data;
  nx = x->size[0];
  idx = 0;
  ii = i->size[0];
  i->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(i, ii);
  i_data = i->data;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x_data[ii]) {
      idx++;
      i_data[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (x->size[0] == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    ii = i->size[0];
    if (1 > idx) {
      i->size[0] = 0;
    } else {
      i->size[0] = idx;
    }
    emxEnsureCapacity_int32_T(i, ii);
  }
}

void c_eml_find(const emxArray_uint8_T *x, emxArray_int32_T *i,
                emxArray_int32_T *j)
{
  int idx;
  int ii;
  int jj;
  int nx;
  int *i_data;
  int *j_data;
  const unsigned char *x_data;
  bool exitg1;
  bool guard1 = false;
  x_data = x->data;
  nx = x->size[0] * x->size[1];
  if (nx == 0) {
    i->size[0] = 0;
    j->size[0] = 0;
  } else {
    idx = 0;
    ii = i->size[0];
    i->size[0] = nx;
    emxEnsureCapacity_int32_T(i, ii);
    i_data = i->data;
    ii = j->size[0];
    j->size[0] = nx;
    emxEnsureCapacity_int32_T(j, ii);
    j_data = j->data;
    ii = 1;
    jj = 1;
    exitg1 = false;
    while ((!exitg1) && (jj <= x->size[1])) {
      guard1 = false;
      if (x_data[(ii + x->size[0] * (jj - 1)) - 1] != 0) {
        idx++;
        i_data[idx - 1] = ii;
        j_data[idx - 1] = jj;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
      if (guard1) {
        ii++;
        if (ii > x->size[0]) {
          ii = 1;
          jj++;
        }
      }
    }
    if (nx == 1) {
      if (idx == 0) {
        i->size[0] = 0;
        j->size[0] = 0;
      }
    } else {
      ii = i->size[0];
      if (1 > idx) {
        i->size[0] = 0;
      } else {
        i->size[0] = idx;
      }
      emxEnsureCapacity_int32_T(i, ii);
      ii = j->size[0];
      if (1 > idx) {
        j->size[0] = 0;
      } else {
        j->size[0] = idx;
      }
      emxEnsureCapacity_int32_T(j, ii);
    }
  }
}

void d_eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i)
{
  int idx;
  int ii;
  int k;
  int *i_data;
  const bool *x_data;
  bool exitg1;
  x_data = x->data;
  k = (1 <= x->size[0]);
  idx = 0;
  ii = i->size[0];
  i->size[0] = k;
  emxEnsureCapacity_int32_T(i, ii);
  i_data = i->data;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= x->size[0] - 1)) {
    if (x_data[ii]) {
      idx++;
      i_data[idx - 1] = ii + 1;
      if (idx >= k) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (k == 1) {
    if (idx == 0) {
      i->size[0] = 0;
    }
  } else {
    ii = i->size[0];
    i->size[0] = (1 <= idx);
    emxEnsureCapacity_int32_T(i, ii);
  }
}

void eml_find(const emxArray_boolean_T *x, emxArray_int32_T *i)
{
  int idx;
  int ii;
  int nx;
  int *i_data;
  const bool *x_data;
  bool exitg1;
  x_data = x->data;
  nx = x->size[1];
  idx = 0;
  ii = i->size[0] * i->size[1];
  i->size[0] = 1;
  i->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(i, ii);
  i_data = i->data;
  ii = 0;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx - 1)) {
    if (x_data[ii]) {
      idx++;
      i_data[idx - 1] = ii + 1;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        ii++;
      }
    } else {
      ii++;
    }
  }
  if (x->size[1] == 1) {
    if (idx == 0) {
      i->size[0] = 1;
      i->size[1] = 0;
    }
  } else {
    ii = i->size[0] * i->size[1];
    if (1 > idx) {
      i->size[1] = 0;
    } else {
      i->size[1] = idx;
    }
    emxEnsureCapacity_int32_T(i, ii);
  }
}

void f_eml_find(const emxArray_boolean_T *x, int i_data[], int i_size[2])
{
  int idx;
  int ii;
  int k;
  const bool *x_data;
  bool exitg1;
  x_data = x->data;
  k = (1 <= x->size[1]);
  ii = x->size[1];
  idx = 0;
  i_size[0] = 1;
  i_size[1] = k;
  exitg1 = false;
  while ((!exitg1) && (ii > 0)) {
    if (x_data[ii - 1]) {
      idx = 1;
      i_data[0] = ii;
      exitg1 = true;
    } else {
      ii--;
    }
  }
  if (k == 1) {
    if (idx == 0) {
      i_size[0] = 1;
      i_size[1] = 0;
    }
  } else {
    i_size[1] = (1 <= idx);
  }
}

void gc_binary_expand_op(int _data[], int _size[2], const emxArray_real_T *beta,
                         const emxArray_real_T *good)
{
  emxArray_boolean_T *b_beta;
  const double *beta_data;
  const double *good_data;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  bool *b_beta_data;
  good_data = good->data;
  beta_data = beta->data;
  emxInit_boolean_T(&b_beta, 2);
  i = b_beta->size[0] * b_beta->size[1];
  b_beta->size[0] = 1;
  if (good->size[1] == 1) {
    b_beta->size[1] = beta->size[1];
  } else {
    b_beta->size[1] = good->size[1];
  }
  emxEnsureCapacity_boolean_T(b_beta, i);
  b_beta_data = b_beta->data;
  stride_0_1 = (beta->size[1] != 1);
  stride_1_1 = (good->size[1] != 1);
  if (good->size[1] == 1) {
    loop_ub = beta->size[1];
  } else {
    loop_ub = good->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_beta_data[i] =
        (beta_data[i * stride_0_1] - good_data[i * stride_1_1] == 0.0);
  }
  e_eml_find(b_beta, _data, _size);
  emxFree_boolean_T(&b_beta);
}

void hb_binary_expand_op(emxArray_int32_T *r1, const emxArray_real_T *constcols,
                         const emxArray_real_T *r2)
{
  emxArray_boolean_T *b_constcols;
  const double *constcols_data;
  const double *r;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  bool *b_constcols_data;
  r = r2->data;
  constcols_data = constcols->data;
  emxInit_boolean_T(&b_constcols, 2);
  i = b_constcols->size[0] * b_constcols->size[1];
  b_constcols->size[0] = 1;
  if (r2->size[1] == 1) {
    b_constcols->size[1] = constcols->size[1];
  } else {
    b_constcols->size[1] = r2->size[1];
  }
  emxEnsureCapacity_boolean_T(b_constcols, i);
  b_constcols_data = b_constcols->data;
  stride_0_1 = (constcols->size[1] != 1);
  stride_1_1 = (r2->size[1] != 1);
  if (r2->size[1] == 1) {
    loop_ub = constcols->size[1];
  } else {
    loop_ub = r2->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_constcols_data[i] =
        (constcols_data[i * stride_0_1] - r[i * stride_1_1] == 0.0);
  }
  eml_find(b_constcols, r1);
  emxFree_boolean_T(&b_constcols);
}

void m_binary_expand_op(emxArray_int32_T *iidx, const emxArray_real_T *tieloc,
                        int i1, const emxArray_int8_T *epsx, int i2, int i3,
                        int i4, int i5, int i6)
{
  emxArray_boolean_T *b_tieloc;
  const double *tieloc_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  const signed char *epsx_data;
  bool *b_tieloc_data;
  epsx_data = epsx->data;
  tieloc_data = tieloc->data;
  emxInit_boolean_T(&b_tieloc, 1);
  i = b_tieloc->size[0];
  if ((i6 - i5) + 1 == 1) {
    stride_0_0 = (i4 - i3) + 1;
  } else {
    stride_0_0 = (i6 - i5) + 1;
  }
  if (stride_0_0 == 1) {
    if (i2 + 1 == 1) {
      b_tieloc->size[0] = i1 + 1;
    } else {
      b_tieloc->size[0] = i2 + 1;
    }
  } else if ((i6 - i5) + 1 == 1) {
    b_tieloc->size[0] = (i4 - i3) + 1;
  } else {
    b_tieloc->size[0] = (i6 - i5) + 1;
  }
  emxEnsureCapacity_boolean_T(b_tieloc, i);
  b_tieloc_data = b_tieloc->data;
  stride_0_0 = (i1 + 1 != 1);
  stride_1_0 = (i2 + 1 != 1);
  stride_2_0 = ((i4 - i3) + 1 != 1);
  stride_3_0 = ((i6 - i5) + 1 != 1);
  if ((i6 - i5) + 1 == 1) {
    i = (i4 - i3) + 1;
  } else {
    i = (i6 - i5) + 1;
  }
  if (i == 1) {
    if (i2 + 1 == 1) {
      loop_ub = i1 + 1;
    } else {
      loop_ub = i2 + 1;
    }
  } else if ((i6 - i5) + 1 == 1) {
    loop_ub = (i4 - i3) + 1;
  } else {
    loop_ub = (i6 - i5) + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    b_tieloc_data[i] =
        (tieloc_data[i * stride_0_0] + (double)epsx_data[i * stride_1_0] >=
         tieloc_data[i3 + i * stride_2_0] -
             (double)epsx_data[i5 + i * stride_3_0]);
  }
  b_eml_find(b_tieloc, iidx);
  emxFree_boolean_T(&b_tieloc);
}

void r_binary_expand_op(emxArray_int32_T *r, const emxArray_boolean_T *bsbT,
                        const emxArray_boolean_T *oldbsbT)
{
  emxArray_boolean_T *b_bsbT;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  const bool *bsbT_data;
  const bool *oldbsbT_data;
  bool *b_bsbT_data;
  oldbsbT_data = oldbsbT->data;
  bsbT_data = bsbT->data;
  emxInit_boolean_T(&b_bsbT, 1);
  i = b_bsbT->size[0];
  if (oldbsbT->size[0] == 1) {
    b_bsbT->size[0] = bsbT->size[0];
  } else {
    b_bsbT->size[0] = oldbsbT->size[0];
  }
  emxEnsureCapacity_boolean_T(b_bsbT, i);
  b_bsbT_data = b_bsbT->data;
  stride_0_0 = (bsbT->size[0] != 1);
  stride_1_0 = (oldbsbT->size[0] != 1);
  if (oldbsbT->size[0] == 1) {
    loop_ub = bsbT->size[0];
  } else {
    loop_ub = oldbsbT->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_bsbT_data[i] =
        (bsbT_data[i * stride_0_0] && (!oldbsbT_data[i * stride_1_0]));
  }
  b_eml_find(b_bsbT, r);
  emxFree_boolean_T(&b_bsbT);
}

/* End of code generation (find.c) */
