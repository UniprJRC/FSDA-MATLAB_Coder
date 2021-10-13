/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "repmat.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_repmat(double a, double varargin_1, emxArray_real_T *b)
{
  double *b_data;
  int i;
  int loop_ub_tmp;
  loop_ub_tmp = (int)varargin_1;
  i = b->size[0];
  b->size[0] = (int)varargin_1;
  emxEnsureCapacity_real_T(b, i);
  b_data = b->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    b_data[i] = a;
  }
}

void c_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b)
{
  const double *a_data;
  double *b_data;
  int tile_size[3];
  int iacol_tmp;
  int ibmat;
  int ibtile;
  int jcol;
  int jtilecol;
  int k;
  int ncols;
  int nrows;
  int ntilecols;
  a_data = a->data;
  tile_size[0] = 1;
  tile_size[1] = 1;
  tile_size[2] = (int)varargin_1[2];
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = a->size[0];
  b->size[1] = a->size[1];
  b->size[2] = (int)varargin_1[2];
  emxEnsureCapacity_real_T(b, ibtile);
  b_data = b->data;
  nrows = a->size[0];
  ncols = a->size[1];
  ntilecols = 1;
  k = 3;
  if ((int)varargin_1[2] == 1) {
    k = 2;
  }
  for (ibtile = 2; ibtile <= k; ibtile++) {
    ntilecols *= tile_size[ibtile - 1];
  }
  for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
    ibtile = jtilecol * (nrows * ncols) - 1;
    for (jcol = 0; jcol < ncols; jcol++) {
      iacol_tmp = jcol * nrows;
      ibmat = ibtile + iacol_tmp;
      for (k = 0; k < nrows; k++) {
        b_data[(ibmat + k) + 1] = a_data[iacol_tmp + k];
      }
    }
  }
}

void d_repmat(const emxArray_real_T *a, double varargin_3, emxArray_real_T *b)
{
  const double *a_data;
  double *b_data;
  int tile_size[3];
  int iacol_tmp;
  int ibmat;
  int ibtile;
  int jcol;
  int jtilecol;
  int k;
  int ncols;
  int nrows;
  int ntilecols;
  a_data = a->data;
  tile_size[0] = 1;
  tile_size[1] = 1;
  tile_size[2] = (int)varargin_3;
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = a->size[0];
  b->size[1] = a->size[1];
  b->size[2] = (int)varargin_3;
  emxEnsureCapacity_real_T(b, ibtile);
  b_data = b->data;
  nrows = a->size[0];
  ncols = a->size[1];
  ntilecols = 1;
  k = 3;
  if ((int)varargin_3 == 1) {
    k = 2;
  }
  for (ibtile = 2; ibtile <= k; ibtile++) {
    ntilecols *= tile_size[ibtile - 1];
  }
  for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
    ibtile = jtilecol * (nrows * ncols) - 1;
    for (jcol = 0; jcol < ncols; jcol++) {
      iacol_tmp = jcol * nrows;
      ibmat = ibtile + iacol_tmp;
      for (k = 0; k < nrows; k++) {
        b_data[(ibmat + k) + 1] = a_data[iacol_tmp + k];
      }
    }
  }
}

void e_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b)
{
  const double *a_data;
  double *b_data;
  int tile_size[3];
  int b_k;
  int jcol;
  int k;
  int ncols;
  int ntilecols;
  a_data = a->data;
  tile_size[0] = 1;
  tile_size[1] = 1;
  tile_size[2] = (int)varargin_1[2];
  k = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = a->size[1];
  b->size[2] = (int)varargin_1[2];
  emxEnsureCapacity_real_T(b, k);
  b_data = b->data;
  ncols = a->size[1];
  ntilecols = 1;
  k = 3;
  if ((int)varargin_1[2] == 1) {
    k = 2;
  }
  for (b_k = 2; b_k <= k; b_k++) {
    ntilecols *= tile_size[b_k - 1];
  }
  for (b_k = 0; b_k < ntilecols; b_k++) {
    k = b_k * ncols;
    for (jcol = 0; jcol < ncols; jcol++) {
      b_data[k + jcol] = a_data[jcol];
    }
  }
}

void f_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b)
{
  const double *a_data;
  double *b_data;
  int tile_size[3];
  int ibtile;
  int jtilecol;
  int k;
  int nrows;
  int ntilecols;
  a_data = a->data;
  tile_size[0] = 1;
  tile_size[1] = 1;
  tile_size[2] = (int)varargin_1[2];
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = a->size[0];
  b->size[1] = 1;
  b->size[2] = (int)varargin_1[2];
  emxEnsureCapacity_real_T(b, ibtile);
  b_data = b->data;
  nrows = a->size[0];
  ntilecols = 1;
  k = 3;
  if ((int)varargin_1[2] == 1) {
    k = 2;
  }
  for (ibtile = 2; ibtile <= k; ibtile++) {
    ntilecols *= tile_size[ibtile - 1];
  }
  for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
    ibtile = jtilecol * nrows;
    for (k = 0; k < nrows; k++) {
      b_data[ibtile + k] = a_data[k];
    }
  }
}

void repmat(const double a_data[], const int a_size[2], double varargin_1,
            emxArray_real_T *b)
{
  double *b_data;
  int iacol;
  int ibcol;
  int ibmat;
  int itilerow;
  int jcol;
  int k;
  int ncols;
  int nrows;
  int ntilerows;
  nrows = b->size[0] * b->size[1];
  b->size[0] = a_size[0] * (int)varargin_1;
  b->size[1] = a_size[1];
  emxEnsureCapacity_real_T(b, nrows);
  b_data = b->data;
  nrows = a_size[0];
  ncols = a_size[1];
  ntilerows = (int)varargin_1;
  for (jcol = 0; jcol < ncols; jcol++) {
    iacol = jcol * nrows;
    ibmat = jcol * (nrows * (int)varargin_1);
    for (itilerow = 0; itilerow < ntilerows; itilerow++) {
      ibcol = ibmat + itilerow * nrows;
      for (k = 0; k < nrows; k++) {
        b_data[ibcol] = a_data[iacol];
      }
    }
  }
}

/* End of code generation (repmat.c) */
