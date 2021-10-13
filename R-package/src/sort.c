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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "relop.h"
#include "rt_nonfinite.h"
#include "sortIdx.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void b_sort(creal_T x[2])
{
  double tmp_im;
  double tmp_re;
  bool p;
  if (rtIsNaN(x[1].re) || rtIsNaN(x[1].im)) {
    p = (rtIsNaN(x[0].re) || rtIsNaN(x[0].im));
  } else if (rtIsNaN(x[0].re) || rtIsNaN(x[0].im)) {
    p = true;
  } else {
    absRelopProxies(x[0], x[1], &tmp_re, &tmp_im);
    p = (tmp_re >= tmp_im);
  }
  if (!p) {
    tmp_re = x[0].re;
    tmp_im = x[0].im;
    x[0] = x[1];
    x[1].re = tmp_re;
    x[1].im = tmp_im;
  }
}

void c_sort(emxArray_real_T *x)
{
  emxArray_int32_T *b_vwork;
  emxArray_real_T *vwork;
  double *vwork_data;
  double *x_data;
  int dim;
  int j;
  int k;
  int vlen;
  int vstride;
  x_data = x->data;
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(&vwork, 1);
  if (dim + 2 <= 1) {
    vstride = x->size[0];
  } else {
    vstride = 1;
  }
  vlen = vstride - 1;
  j = vwork->size[0];
  vwork->size[0] = vstride;
  emxEnsureCapacity_real_T(vwork, j);
  vwork_data = vwork->data;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  emxInit_int32_T(&b_vwork, 1);
  for (j = 0; j < vstride; j++) {
    for (k = 0; k <= vlen; k++) {
      vwork_data[k] = x_data[j + k * vstride];
    }
    b_sortIdx(vwork, b_vwork);
    vwork_data = vwork->data;
    for (k = 0; k <= vlen; k++) {
      x_data[j + k * vstride] = vwork_data[k];
    }
  }
  emxFree_int32_T(&b_vwork);
  emxFree_real_T(&vwork);
}

void d_sort(emxArray_real_T *x)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *xwork;
  double b_xwork[256];
  double x4[4];
  double d;
  double d1;
  double *x_data;
  double *xwork_data;
  int b_iwork[256];
  int idx4[4];
  int b;
  int bLen;
  int b_b;
  int b_n;
  int exitg1;
  int i2;
  int i3;
  int i4;
  int ib;
  int idx_tmp;
  int k;
  int n;
  int nBlocks;
  int nNonNaN;
  int quartetOffset;
  int *idx_data;
  int *iwork_data;
  signed char perm[4];
  x_data = x->data;
  emxInit_int32_T(&idx, 2);
  ib = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(idx, ib);
  idx_data = idx->data;
  quartetOffset = x->size[1];
  for (ib = 0; ib < quartetOffset; ib++) {
    idx_data[ib] = 0;
  }
  if (x->size[1] != 0) {
    emxInit_int32_T(&iwork, 1);
    n = x->size[1];
    b_n = x->size[1];
    x4[0] = 0.0;
    idx4[0] = 0;
    x4[1] = 0.0;
    idx4[1] = 0;
    x4[2] = 0.0;
    idx4[2] = 0;
    x4[3] = 0.0;
    idx4[3] = 0;
    quartetOffset = x->size[1];
    ib = iwork->size[0];
    iwork->size[0] = quartetOffset;
    emxEnsureCapacity_int32_T(iwork, ib);
    iwork_data = iwork->data;
    for (ib = 0; ib < quartetOffset; ib++) {
      iwork_data[ib] = 0;
    }
    emxInit_real_T(&xwork, 1);
    quartetOffset = x->size[1];
    ib = xwork->size[0];
    xwork->size[0] = quartetOffset;
    emxEnsureCapacity_real_T(xwork, ib);
    xwork_data = xwork->data;
    for (ib = 0; ib < quartetOffset; ib++) {
      xwork_data[ib] = 0.0;
    }
    bLen = 0;
    ib = -1;
    for (k = 0; k < b_n; k++) {
      if (rtIsNaN(x_data[k])) {
        idx_tmp = (b_n - bLen) - 1;
        idx_data[idx_tmp] = k + 1;
        xwork_data[idx_tmp] = x_data[k];
        bLen++;
      } else {
        ib++;
        idx4[ib] = k + 1;
        x4[ib] = x_data[k];
        if (ib + 1 == 4) {
          quartetOffset = k - bLen;
          if (x4[0] <= x4[1]) {
            ib = 1;
            i2 = 2;
          } else {
            ib = 2;
            i2 = 1;
          }
          if (x4[2] <= x4[3]) {
            i3 = 3;
            i4 = 4;
          } else {
            i3 = 4;
            i4 = 3;
          }
          d = x4[ib - 1];
          d1 = x4[i3 - 1];
          if (d <= d1) {
            d = x4[i2 - 1];
            if (d <= d1) {
              perm[0] = (signed char)ib;
              perm[1] = (signed char)i2;
              perm[2] = (signed char)i3;
              perm[3] = (signed char)i4;
            } else if (d <= x4[i4 - 1]) {
              perm[0] = (signed char)ib;
              perm[1] = (signed char)i3;
              perm[2] = (signed char)i2;
              perm[3] = (signed char)i4;
            } else {
              perm[0] = (signed char)ib;
              perm[1] = (signed char)i3;
              perm[2] = (signed char)i4;
              perm[3] = (signed char)i2;
            }
          } else {
            d1 = x4[i4 - 1];
            if (d <= d1) {
              if (x4[i2 - 1] <= d1) {
                perm[0] = (signed char)i3;
                perm[1] = (signed char)ib;
                perm[2] = (signed char)i2;
                perm[3] = (signed char)i4;
              } else {
                perm[0] = (signed char)i3;
                perm[1] = (signed char)ib;
                perm[2] = (signed char)i4;
                perm[3] = (signed char)i2;
              }
            } else {
              perm[0] = (signed char)i3;
              perm[1] = (signed char)i4;
              perm[2] = (signed char)ib;
              perm[3] = (signed char)i2;
            }
          }
          idx_data[quartetOffset - 3] = idx4[perm[0] - 1];
          idx_data[quartetOffset - 2] = idx4[perm[1] - 1];
          idx_data[quartetOffset - 1] = idx4[perm[2] - 1];
          idx_data[quartetOffset] = idx4[perm[3] - 1];
          x_data[quartetOffset - 3] = x4[perm[0] - 1];
          x_data[quartetOffset - 2] = x4[perm[1] - 1];
          x_data[quartetOffset - 1] = x4[perm[2] - 1];
          x_data[quartetOffset] = x4[perm[3] - 1];
          ib = -1;
        }
      }
    }
    i3 = (b_n - bLen) - 1;
    if (ib + 1 > 0) {
      perm[1] = 0;
      perm[2] = 0;
      perm[3] = 0;
      if (ib + 1 == 1) {
        perm[0] = 1;
      } else if (ib + 1 == 2) {
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
      for (k = 0; k <= ib; k++) {
        idx_tmp = perm[k] - 1;
        quartetOffset = (i3 - ib) + k;
        idx_data[quartetOffset] = idx4[idx_tmp];
        x_data[quartetOffset] = x4[idx_tmp];
      }
    }
    ib = (bLen >> 1) + 1;
    for (k = 0; k <= ib - 2; k++) {
      quartetOffset = (i3 + k) + 1;
      i2 = idx_data[quartetOffset];
      idx_tmp = (b_n - k) - 1;
      idx_data[quartetOffset] = idx_data[idx_tmp];
      idx_data[idx_tmp] = i2;
      x_data[quartetOffset] = xwork_data[idx_tmp];
      x_data[idx_tmp] = xwork_data[quartetOffset];
    }
    if ((bLen & 1) != 0) {
      ib += i3;
      x_data[ib] = xwork_data[ib];
    }
    nNonNaN = n - bLen;
    quartetOffset = 2;
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
                for (quartetOffset = 0; quartetOffset < b_n; quartetOffset++) {
                  ib = i2 + quartetOffset;
                  b_iwork[quartetOffset] = idx_data[ib];
                  b_xwork[quartetOffset] = x_data[ib];
                }
                i3 = 0;
                quartetOffset = bLen;
                ib = i2 - 1;
                do {
                  exitg1 = 0;
                  ib++;
                  if (b_xwork[i3] <= b_xwork[quartetOffset]) {
                    idx_data[ib] = b_iwork[i3];
                    x_data[ib] = b_xwork[i3];
                    if (i3 + 1 < bLen) {
                      i3++;
                    } else {
                      exitg1 = 1;
                    }
                  } else {
                    idx_data[ib] = b_iwork[quartetOffset];
                    x_data[ib] = b_xwork[quartetOffset];
                    if (quartetOffset + 1 < b_n) {
                      quartetOffset++;
                    } else {
                      ib -= i3;
                      for (quartetOffset = i3 + 1; quartetOffset <= bLen;
                           quartetOffset++) {
                        idx_tmp = ib + quartetOffset;
                        idx_data[idx_tmp] = b_iwork[quartetOffset - 1];
                        x_data[idx_tmp] = b_xwork[quartetOffset - 1];
                      }
                      exitg1 = 1;
                    }
                  }
                } while (exitg1 == 0);
              }
            }
          }
          quartetOffset = nBlocks << 8;
          ib = nNonNaN - quartetOffset;
          if (ib > 0) {
            merge_block(idx, x, quartetOffset, ib, 2, iwork, xwork);
          }
          quartetOffset = 8;
        }
      }
      merge_block(idx, x, 0, nNonNaN, quartetOffset, iwork, xwork);
    }
    emxFree_real_T(&xwork);
    emxFree_int32_T(&iwork);
  }
  emxFree_int32_T(&idx);
}

void e_sort(emxArray_real_T *x)
{
  emxArray_int32_T *b_vwork;
  emxArray_real_T *vwork;
  double *vwork_data;
  double *x_data;
  int dim;
  int i;
  int idx0;
  int j;
  int k;
  int npages;
  int pageoffset;
  int vlen;
  int vstride;
  x_data = x->data;
  dim = 1;
  if (x->size[0] != 1) {
    dim = 0;
  }
  emxInit_real_T(&vwork, 1);
  vlen = x->size[dim] - 1;
  pageoffset = vwork->size[0];
  vwork->size[0] = x->size[dim];
  emxEnsureCapacity_real_T(vwork, pageoffset);
  vwork_data = vwork->data;
  vstride = 1;
  for (k = 0; k < dim; k++) {
    vstride *= x->size[0];
  }
  npages = 1;
  pageoffset = dim + 2;
  for (k = pageoffset; k < 3; k++) {
    npages *= x->size[1];
  }
  dim = x->size[dim] * vstride;
  emxInit_int32_T(&b_vwork, 1);
  for (i = 0; i < npages; i++) {
    pageoffset = i * dim;
    for (j = 0; j < vstride; j++) {
      idx0 = pageoffset + j;
      for (k = 0; k <= vlen; k++) {
        vwork_data[k] = x_data[idx0 + k * vstride];
      }
      b_sortIdx(vwork, b_vwork);
      vwork_data = vwork->data;
      for (k = 0; k <= vlen; k++) {
        x_data[idx0 + k * vstride] = vwork_data[k];
      }
    }
  }
  emxFree_int32_T(&b_vwork);
  emxFree_real_T(&vwork);
}

void f_sort(emxArray_real_T *x)
{
  emxArray_int32_T *b_vwork;
  emxArray_real_T *vwork;
  double *vwork_data;
  double *x_data;
  int dim;
  int j;
  int k;
  int vlen;
  int vstride;
  x_data = x->data;
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(&vwork, 1);
  if (dim + 2 <= 1) {
    vstride = x->size[0];
  } else {
    vstride = 1;
  }
  vlen = vstride - 1;
  j = vwork->size[0];
  vwork->size[0] = vstride;
  emxEnsureCapacity_real_T(vwork, j);
  vwork_data = vwork->data;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  emxInit_int32_T(&b_vwork, 1);
  for (j = 0; j < vstride; j++) {
    for (k = 0; k <= vlen; k++) {
      vwork_data[k] = x_data[j + k * vstride];
    }
    c_sortIdx(vwork, b_vwork);
    vwork_data = vwork->data;
    for (k = 0; k <= vlen; k++) {
      x_data[j + k * vstride] = vwork_data[k];
    }
  }
  emxFree_int32_T(&b_vwork);
  emxFree_real_T(&vwork);
}

void g_sort(emxArray_real_T *x, emxArray_int32_T *idx)
{
  emxArray_int32_T *iidx;
  emxArray_real_T *vwork;
  double *vwork_data;
  double *x_data;
  int dim;
  int i;
  int k;
  int vlen;
  int vstride;
  int *idx_data;
  int *iidx_data;
  x_data = x->data;
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(&vwork, 1);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  vstride = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(vwork, vstride);
  vwork_data = vwork->data;
  i = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(idx, i);
  idx_data = idx->data;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  emxInit_int32_T(&iidx, 1);
  for (dim = 0; dim < vstride; dim++) {
    for (k = 0; k <= vlen; k++) {
      vwork_data[k] = x_data[dim + k * vstride];
    }
    c_sortIdx(vwork, iidx);
    iidx_data = iidx->data;
    vwork_data = vwork->data;
    for (k = 0; k <= vlen; k++) {
      i = dim + k * vstride;
      x_data[i] = vwork_data[k];
      idx_data[i] = iidx_data[k];
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
}

void h_sort(emxArray_creal_T *x)
{
  emxArray_creal_T *vwork;
  emxArray_creal_T *xwork;
  emxArray_int32_T *iidx;
  emxArray_int32_T *iwork;
  creal_T b_vwork;
  creal_T c_vwork;
  creal_T *vwork_data;
  creal_T *x_data;
  creal_T *xwork_data;
  double b_x;
  double y;
  int b_j;
  int b_p;
  int dim;
  int i;
  int i2;
  int j;
  int k;
  int kEnd;
  int n;
  int pEnd;
  int q;
  int qEnd;
  int vlen;
  int vstride;
  int *iidx_data;
  int *iwork_data;
  bool p;
  bool p_tmp;
  x_data = x->data;
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_creal_T(&vwork, 1);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  i2 = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_creal_T(vwork, i2);
  vwork_data = vwork->data;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  emxInit_int32_T(&iidx, 1);
  emxInit_int32_T(&iwork, 1);
  emxInit_creal_T(&xwork, 1);
  for (j = 0; j < vstride; j++) {
    for (k = 0; k <= vlen; k++) {
      vwork_data[k] = x_data[j + k * vstride];
    }
    i = vwork->size[0];
    n = vwork->size[0] + 1;
    i2 = iidx->size[0];
    iidx->size[0] = vwork->size[0];
    emxEnsureCapacity_int32_T(iidx, i2);
    iidx_data = iidx->data;
    dim = vwork->size[0];
    for (i2 = 0; i2 < dim; i2++) {
      iidx_data[i2] = 0;
    }
    if (vwork->size[0] != 0) {
      i2 = iwork->size[0];
      iwork->size[0] = vwork->size[0];
      emxEnsureCapacity_int32_T(iwork, i2);
      iwork_data = iwork->data;
      i2 = vwork->size[0] - 1;
      for (k = 1; k <= i2; k += 2) {
        if (rtIsNaN(vwork_data[k].re) || rtIsNaN(vwork_data[k].im)) {
          p = rtIsNaN(vwork_data[k - 1].re);
          p_tmp = rtIsNaN(vwork_data[k - 1].im);
          p = (p || p_tmp || ((!p) && (!p_tmp)));
        } else {
          b_vwork = vwork_data[k - 1];
          if (rtIsNaN(b_vwork.re) || rtIsNaN(vwork_data[k - 1].im)) {
            p = false;
          } else {
            absRelopProxies(b_vwork, vwork_data[k], &b_x, &y);
            p = (b_x <= y);
          }
        }
        if (p) {
          iidx_data[k - 1] = k;
          iidx_data[k] = k + 1;
        } else {
          iidx_data[k - 1] = k + 1;
          iidx_data[k] = k;
        }
      }
      if ((vwork->size[0] & 1) != 0) {
        iidx_data[vwork->size[0] - 1] = vwork->size[0];
      }
      dim = 2;
      while (dim < i) {
        i2 = dim << 1;
        b_j = 1;
        for (pEnd = dim + 1; pEnd < i + 1; pEnd = qEnd + dim) {
          b_p = b_j - 1;
          q = pEnd - 1;
          qEnd = b_j + i2;
          if (qEnd > i + 1) {
            qEnd = i + 1;
          }
          k = 0;
          kEnd = qEnd - b_j;
          while (k + 1 <= kEnd) {
            b_vwork = vwork_data[iidx_data[q] - 1];
            if (rtIsNaN(b_vwork.re) ||
                rtIsNaN(vwork_data[iidx_data[q] - 1].im)) {
              p = rtIsNaN(vwork_data[iidx_data[b_p] - 1].re);
              p_tmp = rtIsNaN(vwork_data[iidx_data[b_p] - 1].im);
              p = (p || p_tmp || ((!p) && (!p_tmp)));
            } else {
              c_vwork = vwork_data[iidx_data[b_p] - 1];
              if (rtIsNaN(c_vwork.re) ||
                  rtIsNaN(vwork_data[iidx_data[b_p] - 1].im)) {
                p = false;
              } else {
                absRelopProxies(c_vwork, b_vwork, &b_x, &y);
                p = (b_x <= y);
              }
            }
            if (p) {
              iwork_data[k] = iidx_data[b_p];
              b_p++;
              if (b_p + 1 == pEnd) {
                while (q + 1 < qEnd) {
                  k++;
                  iwork_data[k] = iidx_data[q];
                  q++;
                }
              }
            } else {
              iwork_data[k] = iidx_data[q];
              q++;
              if (q + 1 == qEnd) {
                while (b_p + 1 < pEnd) {
                  k++;
                  iwork_data[k] = iidx_data[b_p];
                  b_p++;
                }
              }
            }
            k++;
          }
          for (k = 0; k < kEnd; k++) {
            iidx_data[(b_j + k) - 1] = iwork_data[k];
          }
          b_j = qEnd;
        }
        dim = i2;
      }
      i = xwork->size[0];
      xwork->size[0] = vwork->size[0];
      emxEnsureCapacity_creal_T(xwork, i);
      xwork_data = xwork->data;
      for (k = 0; k <= n - 2; k++) {
        xwork_data[k] = vwork_data[k];
      }
      for (k = 0; k <= n - 2; k++) {
        vwork_data[k] = xwork_data[iidx_data[k] - 1];
      }
    }
    for (k = 0; k <= vlen; k++) {
      x_data[j + k * vstride] = vwork_data[k];
    }
  }
  emxFree_creal_T(&xwork);
  emxFree_int32_T(&iwork);
  emxFree_int32_T(&iidx);
  emxFree_creal_T(&vwork);
}

void sort(emxArray_real_T *x, emxArray_int32_T *idx)
{
  emxArray_int32_T *iidx;
  emxArray_real_T *vwork;
  double *vwork_data;
  double *x_data;
  int dim;
  int i;
  int k;
  int vlen;
  int vstride;
  int *idx_data;
  int *iidx_data;
  x_data = x->data;
  dim = 0;
  if (x->size[0] != 1) {
    dim = -1;
  }
  emxInit_real_T(&vwork, 1);
  if (dim + 2 <= 1) {
    i = x->size[0];
  } else {
    i = 1;
  }
  vlen = i - 1;
  vstride = vwork->size[0];
  vwork->size[0] = i;
  emxEnsureCapacity_real_T(vwork, vstride);
  vwork_data = vwork->data;
  i = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(idx, i);
  idx_data = idx->data;
  vstride = 1;
  for (k = 0; k <= dim; k++) {
    vstride *= x->size[0];
  }
  emxInit_int32_T(&iidx, 1);
  for (dim = 0; dim < vstride; dim++) {
    for (k = 0; k <= vlen; k++) {
      vwork_data[k] = x_data[dim + k * vstride];
    }
    b_sortIdx(vwork, iidx);
    iidx_data = iidx->data;
    vwork_data = vwork->data;
    for (k = 0; k <= vlen; k++) {
      i = dim + k * vstride;
      x_data[i] = vwork_data[k];
      idx_data[i] = iidx_data[k];
    }
  }
  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
}

/* End of code generation (sort.c) */
