/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sort.c
 *
 * Code generation for function 'sort'
 *
 */

/* Include files */
#include "sort.h"
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_rtwutil.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Declarations */
static double rt_atan2d_snf(double u0, double u1);

/* Function Definitions */
static double rt_atan2d_snf(double u0, double u1)
{
  double y;
  int b_u0;
  int b_u1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      b_u0 = 1;
    } else {
      b_u0 = -1;
    }
    if (u1 > 0.0) {
      b_u1 = 1;
    } else {
      b_u1 = -1;
    }
    y = atan2(b_u0, b_u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }
  return y;
}

void b_sort(creal_T x[2])
{
  double ai;
  double ar;
  double b_x;
  double bi;
  double br;
  bool SCALEA;
  bool SCALEB;
  if (rtIsNaN(x[1].re) || rtIsNaN(x[1].im)) {
    SCALEA = (rtIsNaN(x[0].re) || rtIsNaN(x[0].im));
  } else if (rtIsNaN(x[0].re) || rtIsNaN(x[0].im)) {
    SCALEA = true;
  } else {
    if ((fabs(x[0].re) > 8.9884656743115785E+307) ||
        (fabs(x[0].im) > 8.9884656743115785E+307)) {
      SCALEA = true;
    } else {
      SCALEA = false;
    }
    if ((fabs(x[1].re) > 8.9884656743115785E+307) ||
        (fabs(x[1].im) > 8.9884656743115785E+307)) {
      SCALEB = true;
    } else {
      SCALEB = false;
    }
    if (SCALEA || SCALEB) {
      b_x = rt_hypotd_snf(x[0].re / 2.0, x[0].im / 2.0);
      bi = rt_hypotd_snf(x[1].re / 2.0, x[1].im / 2.0);
    } else {
      b_x = rt_hypotd_snf(x[0].re, x[0].im);
      bi = rt_hypotd_snf(x[1].re, x[1].im);
    }
    if (b_x == bi) {
      b_x = rt_atan2d_snf(x[0].im, x[0].re);
      bi = rt_atan2d_snf(x[1].im, x[1].re);
      if (b_x == bi) {
        ar = x[0].re;
        ai = x[0].im;
        br = x[1].re;
        bi = x[1].im;
        if (ar != br) {
          if (b_x >= 0.0) {
            b_x = br;
            bi = ar;
          } else {
            b_x = ar;
            bi = br;
          }
        } else if (ar < 0.0) {
          b_x = bi;
          bi = ai;
        } else {
          b_x = ai;
        }
        if (b_x == bi) {
          b_x = 0.0;
          bi = 0.0;
        }
      }
    }
    SCALEA = (b_x >= bi);
  }
  if (!SCALEA) {
    ar = x[0].re;
    ai = x[0].im;
    x[0] = x[1];
    x[1].re = ar;
    x[1].im = ai;
  }
}

void sort(emxArray_real_T *x, emxArray_int32_T *idx)
{
  emxArray_int32_T *b_iwork;
  emxArray_int32_T *iidx;
  emxArray_int32_T *iwork;
  emxArray_real_T *b_xwork;
  emxArray_real_T *vwork;
  emxArray_real_T *xwork;
  double c_xwork[256];
  double x4[4];
  double d;
  double d1;
  int c_iwork[256];
  int idx4[4];
  int b;
  int bLen;
  int b_b;
  int b_n;
  int dim;
  int exitg1;
  int i1;
  int i2;
  int i3;
  int i4;
  int iidx_tmp;
  int j;
  int k;
  int n;
  int nBlocks;
  int nNonNaN;
  int vlen;
  int vstride;
  signed char perm[4];
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(&vwork, 1);
  if (dim + 2 <= 1) {
    i2 = x->size[0];
  } else {
    i2 = 1;
  }
  vlen = i2 - 1;
  i1 = vwork->size[0];
  vwork->size[0] = i2;
  emxEnsureCapacity_real_T(vwork, i1);
  i2 = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(idx, i2);
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  emxInit_int32_T(&iidx, 1);
  emxInit_int32_T(&iwork, 1);
  emxInit_real_T(&xwork, 1);
  emxInit_int32_T(&b_iwork, 1);
  emxInit_real_T(&b_xwork, 1);
  for (j = 0; j < vstride; j++) {
    for (k = 0; k <= vlen; k++) {
      vwork->data[k] = x->data[j + k * vstride];
    }
    i2 = iidx->size[0];
    iidx->size[0] = vwork->size[0];
    emxEnsureCapacity_int32_T(iidx, i2);
    dim = vwork->size[0];
    for (i2 = 0; i2 < dim; i2++) {
      iidx->data[i2] = 0;
    }
    if (vwork->size[0] != 0) {
      n = vwork->size[0];
      b_n = vwork->size[0];
      x4[0] = 0.0;
      idx4[0] = 0;
      x4[1] = 0.0;
      idx4[1] = 0;
      x4[2] = 0.0;
      idx4[2] = 0;
      x4[3] = 0.0;
      idx4[3] = 0;
      i2 = iwork->size[0];
      iwork->size[0] = vwork->size[0];
      emxEnsureCapacity_int32_T(iwork, i2);
      dim = vwork->size[0];
      for (i2 = 0; i2 < dim; i2++) {
        iwork->data[i2] = 0;
      }
      i2 = xwork->size[0];
      xwork->size[0] = vwork->size[0];
      emxEnsureCapacity_real_T(xwork, i2);
      dim = vwork->size[0];
      for (i2 = 0; i2 < dim; i2++) {
        xwork->data[i2] = 0.0;
      }
      bLen = 0;
      dim = -1;
      for (k = 0; k < b_n; k++) {
        if (rtIsNaN(vwork->data[k])) {
          iidx_tmp = (b_n - bLen) - 1;
          iidx->data[iidx_tmp] = k + 1;
          xwork->data[iidx_tmp] = vwork->data[k];
          bLen++;
        } else {
          dim++;
          idx4[dim] = k + 1;
          x4[dim] = vwork->data[k];
          if (dim + 1 == 4) {
            dim = k - bLen;
            if (x4[0] <= x4[1]) {
              i1 = 1;
              i2 = 2;
            } else {
              i1 = 2;
              i2 = 1;
            }
            if (x4[2] <= x4[3]) {
              i3 = 3;
              i4 = 4;
            } else {
              i3 = 4;
              i4 = 3;
            }
            d = x4[i1 - 1];
            d1 = x4[i3 - 1];
            if (d <= d1) {
              d = x4[i2 - 1];
              if (d <= d1) {
                perm[0] = (signed char)i1;
                perm[1] = (signed char)i2;
                perm[2] = (signed char)i3;
                perm[3] = (signed char)i4;
              } else if (d <= x4[i4 - 1]) {
                perm[0] = (signed char)i1;
                perm[1] = (signed char)i3;
                perm[2] = (signed char)i2;
                perm[3] = (signed char)i4;
              } else {
                perm[0] = (signed char)i1;
                perm[1] = (signed char)i3;
                perm[2] = (signed char)i4;
                perm[3] = (signed char)i2;
              }
            } else {
              d1 = x4[i4 - 1];
              if (d <= d1) {
                if (x4[i2 - 1] <= d1) {
                  perm[0] = (signed char)i3;
                  perm[1] = (signed char)i1;
                  perm[2] = (signed char)i2;
                  perm[3] = (signed char)i4;
                } else {
                  perm[0] = (signed char)i3;
                  perm[1] = (signed char)i1;
                  perm[2] = (signed char)i4;
                  perm[3] = (signed char)i2;
                }
              } else {
                perm[0] = (signed char)i3;
                perm[1] = (signed char)i4;
                perm[2] = (signed char)i1;
                perm[3] = (signed char)i2;
              }
            }
            iidx->data[dim - 3] = idx4[perm[0] - 1];
            iidx->data[dim - 2] = idx4[perm[1] - 1];
            iidx->data[dim - 1] = idx4[perm[2] - 1];
            iidx->data[dim] = idx4[perm[3] - 1];
            vwork->data[dim - 3] = x4[perm[0] - 1];
            vwork->data[dim - 2] = x4[perm[1] - 1];
            vwork->data[dim - 1] = x4[perm[2] - 1];
            vwork->data[dim] = x4[perm[3] - 1];
            dim = -1;
          }
        }
      }
      i3 = (b_n - bLen) - 1;
      if (dim + 1 > 0) {
        perm[1] = 0;
        perm[2] = 0;
        perm[3] = 0;
        if (dim + 1 == 1) {
          perm[0] = 1;
        } else if (dim + 1 == 2) {
          if (x4[0] <= x4[1]) {
            perm[0] = 1;
            perm[1] = 2;
          } else {
            perm[0] = 2;
            perm[1] = 1;
          }
        } else if (x4[0] <= x4[1]) {
          if (x4[1] <= x4[2]) {
            perm[0] = 1;
            perm[1] = 2;
            perm[2] = 3;
          } else if (x4[0] <= x4[2]) {
            perm[0] = 1;
            perm[1] = 3;
            perm[2] = 2;
          } else {
            perm[0] = 3;
            perm[1] = 1;
            perm[2] = 2;
          }
        } else if (x4[0] <= x4[2]) {
          perm[0] = 2;
          perm[1] = 1;
          perm[2] = 3;
        } else if (x4[1] <= x4[2]) {
          perm[0] = 2;
          perm[1] = 3;
          perm[2] = 1;
        } else {
          perm[0] = 3;
          perm[1] = 2;
          perm[2] = 1;
        }
        for (k = 0; k <= dim; k++) {
          iidx_tmp = perm[k] - 1;
          i1 = (i3 - dim) + k;
          iidx->data[i1] = idx4[iidx_tmp];
          vwork->data[i1] = x4[iidx_tmp];
        }
      }
      dim = (bLen >> 1) + 1;
      for (k = 0; k <= dim - 2; k++) {
        i1 = (i3 + k) + 1;
        i2 = iidx->data[i1];
        iidx_tmp = (b_n - k) - 1;
        iidx->data[i1] = iidx->data[iidx_tmp];
        iidx->data[iidx_tmp] = i2;
        vwork->data[i1] = xwork->data[iidx_tmp];
        vwork->data[iidx_tmp] = xwork->data[i1];
      }
      if ((bLen & 1) != 0) {
        i1 = i3 + dim;
        vwork->data[i1] = xwork->data[i1];
      }
      nNonNaN = n - bLen;
      i1 = 2;
      if (nNonNaN > 1) {
        if (n >= 256) {
          nBlocks = nNonNaN >> 8;
          if (nBlocks > 0) {
            for (b = 0; b < nBlocks; b++) {
              i4 = (b << 8) - 1;
              for (b_b = 0; b_b < 6; b_b++) {
                bLen = 1 << (b_b + 2);
                b_n = bLen << 1;
                n = 256 >> (b_b + 3);
                for (k = 0; k < n; k++) {
                  i2 = (i4 + k * b_n) + 1;
                  for (i1 = 0; i1 < b_n; i1++) {
                    dim = i2 + i1;
                    c_iwork[i1] = iidx->data[dim];
                    c_xwork[i1] = vwork->data[dim];
                  }
                  i3 = 0;
                  i1 = bLen;
                  dim = i2 - 1;
                  do {
                    exitg1 = 0;
                    dim++;
                    if (c_xwork[i3] <= c_xwork[i1]) {
                      iidx->data[dim] = c_iwork[i3];
                      vwork->data[dim] = c_xwork[i3];
                      if (i3 + 1 < bLen) {
                        i3++;
                      } else {
                        exitg1 = 1;
                      }
                    } else {
                      iidx->data[dim] = c_iwork[i1];
                      vwork->data[dim] = c_xwork[i1];
                      if (i1 + 1 < b_n) {
                        i1++;
                      } else {
                        dim -= i3;
                        for (i1 = i3 + 1; i1 <= bLen; i1++) {
                          iidx_tmp = dim + i1;
                          iidx->data[iidx_tmp] = c_iwork[i1 - 1];
                          vwork->data[iidx_tmp] = c_xwork[i1 - 1];
                        }
                        exitg1 = 1;
                      }
                    }
                  } while (exitg1 == 0);
                }
              }
            }
            dim = nBlocks << 8;
            i1 = nNonNaN - dim;
            if (i1 > 0) {
              merge_block(iidx, vwork, dim, i1, 2, iwork, xwork);
            }
            i1 = 8;
          }
        }
        dim = iwork->size[0];
        i2 = b_iwork->size[0];
        b_iwork->size[0] = iwork->size[0];
        emxEnsureCapacity_int32_T(b_iwork, i2);
        for (i2 = 0; i2 < dim; i2++) {
          b_iwork->data[i2] = iwork->data[i2];
        }
        i2 = b_xwork->size[0];
        b_xwork->size[0] = xwork->size[0];
        emxEnsureCapacity_real_T(b_xwork, i2);
        dim = xwork->size[0];
        for (i2 = 0; i2 < dim; i2++) {
          b_xwork->data[i2] = xwork->data[i2];
        }
        merge_block(iidx, vwork, 0, nNonNaN, i1, b_iwork, b_xwork);
      }
    }
    for (k = 0; k <= vlen; k++) {
      i2 = j + k * vstride;
      x->data[i2] = vwork->data[k];
      idx->data[i2] = iidx->data[k];
    }
  }
  emxFree_real_T(&b_xwork);
  emxFree_int32_T(&b_iwork);
  emxFree_real_T(&xwork);
  emxFree_int32_T(&iwork);
  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
}

/* End of code generation (sort.c) */
