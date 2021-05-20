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

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
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
