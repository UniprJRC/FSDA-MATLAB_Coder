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
void b_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b)
{
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
  tile_size[0] = 1;
  tile_size[1] = 1;
  tile_size[2] = (int)varargin_1[2];
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = a->size[0];
  b->size[1] = a->size[1];
  b->size[2] = (int)varargin_1[2];
  emxEnsureCapacity_real_T(b, ibtile);
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
        b->data[(ibmat + k) + 1] = a->data[iacol_tmp + k];
      }
    }
  }
}

void c_repmat(const emxArray_real_T *a, double varargin_3, emxArray_real_T *b)
{
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
  tile_size[0] = 1;
  tile_size[1] = 1;
  tile_size[2] = (int)varargin_3;
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = a->size[0];
  b->size[1] = a->size[1];
  b->size[2] = (int)varargin_3;
  emxEnsureCapacity_real_T(b, ibtile);
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
        b->data[(ibmat + k) + 1] = a->data[iacol_tmp + k];
      }
    }
  }
}

void d_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b)
{
  int tile_size[3];
  int b_k;
  int jcol;
  int k;
  int ncols;
  int ntilecols;
  tile_size[0] = 1;
  tile_size[1] = 1;
  tile_size[2] = (int)varargin_1[2];
  k = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = 1;
  b->size[1] = a->size[1];
  b->size[2] = (int)varargin_1[2];
  emxEnsureCapacity_real_T(b, k);
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
      b->data[k + jcol] = a->data[jcol];
    }
  }
}

void e_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b)
{
  int tile_size[3];
  int ibtile;
  int jtilecol;
  int k;
  int nrows;
  int ntilecols;
  tile_size[0] = 1;
  tile_size[1] = 1;
  tile_size[2] = (int)varargin_1[2];
  ibtile = b->size[0] * b->size[1] * b->size[2];
  b->size[0] = a->size[0];
  b->size[1] = 1;
  b->size[2] = (int)varargin_1[2];
  emxEnsureCapacity_real_T(b, ibtile);
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
      b->data[ibtile + k] = a->data[k];
    }
  }
}

void repmat(const double a_data[], const int a_size[2], double varargin_1,
            emxArray_real_T *b)
{
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
  nrows = a_size[0];
  ncols = a_size[1];
  ntilerows = (int)varargin_1;
  for (jcol = 0; jcol < ncols; jcol++) {
    iacol = jcol * nrows;
    ibmat = jcol * (nrows * (int)varargin_1);
    for (itilerow = 0; itilerow < ntilerows; itilerow++) {
      ibcol = ibmat + itilerow * nrows;
      for (k = 0; k < nrows; k++) {
        b->data[ibcol] = a_data[iacol];
      }
    }
  }
}

/* End of code generation (repmat.c) */
