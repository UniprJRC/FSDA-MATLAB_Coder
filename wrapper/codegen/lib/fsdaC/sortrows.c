/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sortrows.c
 *
 * Code generation for function 'sortrows'
 *
 */

/* Include files */
#include "sortrows.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "sortrowsLE.h"
#include "rt_nonfinite.h"

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Definitions */
void b_sortrows(emxArray_real_T *y)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *ycol;
  int b_iv[2];
  int b_i;
  int i;
  int i1;
  int i2;
  int j;
  int k;
  int kEnd;
  int n;
  int p;
  int pEnd;
  int q;
  int qEnd;
  emxInit_int32_T(&idx, 1);
  n = y->size[0] + 1;
  i = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(idx, i);
  i2 = y->size[0];
  for (i = 0; i < i2; i++) {
    idx->data[i] = 0;
  }
  if (y->size[0] == 0) {
    for (k = 0; k <= n - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&iwork, 1);
    i = iwork->size[0];
    iwork->size[0] = y->size[0];
    emxEnsureCapacity_int32_T(iwork, i);
    i = y->size[0] - 1;
    if (1 <= i) {
      b_iv[0] = 3;
      b_iv[1] = 4;
    }
    for (k = 1; k <= i; k += 2) {
      if (sortrowsLE(y, b_iv, k, k + 1)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((y->size[0] & 1) != 0) {
      idx->data[y->size[0] - 1] = y->size[0];
    }
    b_i = 2;
    while (b_i < n - 1) {
      i2 = b_i << 1;
      j = 1;
      for (pEnd = b_i + 1; pEnd < n; pEnd = qEnd + b_i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        if (1 <= qEnd - j) {
          b_iv[0] = 3;
          b_iv[1] = 4;
        }
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          i = idx->data[q - 1];
          i1 = idx->data[p - 1];
          if (sortrowsLE(y, b_iv, i1, i)) {
            iwork->data[k] = i1;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      b_i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  emxInit_real_T(&ycol, 1);
  i2 = y->size[0] - 1;
  i = ycol->size[0];
  ycol->size[0] = y->size[0];
  emxEnsureCapacity_real_T(ycol, i);
  for (j = 0; j < 4; j++) {
    for (b_i = 0; b_i <= i2; b_i++) {
      ycol->data[b_i] = y->data[(idx->data[b_i] + y->size[0] * j) - 1];
    }
    for (b_i = 0; b_i <= i2; b_i++) {
      y->data[b_i + y->size[0] * j] = ycol->data[b_i];
    }
  }
  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
}

void c_sortrows(emxArray_real_T *y)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *ycol;
  int b_iv[2];
  int b_i;
  int i;
  int i1;
  int i2;
  int j;
  int k;
  int kEnd;
  int n;
  int p;
  int pEnd;
  int q;
  int qEnd;
  emxInit_int32_T(&idx, 1);
  n = y->size[0] + 1;
  i = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(idx, i);
  i2 = y->size[0];
  for (i = 0; i < i2; i++) {
    idx->data[i] = 0;
  }
  if (y->size[0] == 0) {
    for (k = 0; k <= n - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&iwork, 1);
    i = iwork->size[0];
    iwork->size[0] = y->size[0];
    emxEnsureCapacity_int32_T(iwork, i);
    i = y->size[0] - 1;
    if (1 <= i) {
      b_iv[0] = 2;
      b_iv[1] = 4;
    }
    for (k = 1; k <= i; k += 2) {
      if (sortrowsLE(y, b_iv, k, k + 1)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((y->size[0] & 1) != 0) {
      idx->data[y->size[0] - 1] = y->size[0];
    }
    b_i = 2;
    while (b_i < n - 1) {
      i2 = b_i << 1;
      j = 1;
      for (pEnd = b_i + 1; pEnd < n; pEnd = qEnd + b_i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        if (1 <= qEnd - j) {
          b_iv[0] = 2;
          b_iv[1] = 4;
        }
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          i = idx->data[q - 1];
          i1 = idx->data[p - 1];
          if (sortrowsLE(y, b_iv, i1, i)) {
            iwork->data[k] = i1;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      b_i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  emxInit_real_T(&ycol, 1);
  i2 = y->size[0] - 1;
  i = ycol->size[0];
  ycol->size[0] = y->size[0];
  emxEnsureCapacity_real_T(ycol, i);
  for (j = 0; j < 4; j++) {
    for (b_i = 0; b_i <= i2; b_i++) {
      ycol->data[b_i] = y->data[(idx->data[b_i] + y->size[0] * j) - 1];
    }
    for (b_i = 0; b_i <= i2; b_i++) {
      y->data[b_i + y->size[0] * j] = ycol->data[b_i];
    }
  }
  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
}

void d_sortrows(emxArray_real_T *y)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *ycol;
  double v1;
  double v2;
  int i;
  int i2;
  int j;
  int k;
  int kEnd;
  int n;
  int p;
  int pEnd;
  int q;
  int qEnd;
  int v1_tmp;
  int v2_tmp;
  emxInit_int32_T(&idx, 1);
  n = y->size[0] + 1;
  pEnd = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(idx, pEnd);
  i2 = y->size[0];
  for (pEnd = 0; pEnd < i2; pEnd++) {
    idx->data[pEnd] = 0;
  }
  if (y->size[0] == 0) {
    for (k = 0; k <= n - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&iwork, 1);
    pEnd = iwork->size[0];
    iwork->size[0] = y->size[0];
    emxEnsureCapacity_int32_T(iwork, pEnd);
    pEnd = y->size[0] - 1;
    for (k = 1; k <= pEnd; k += 2) {
      v1 = y->data[(k + y->size[0]) - 1];
      v2 = y->data[k + y->size[0]];
      if ((v1 == v2) || (rtIsNaN(v1) && rtIsNaN(v2)) || (v1 <= v2) ||
          rtIsNaN(v2)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((y->size[0] & 1) != 0) {
      idx->data[y->size[0] - 1] = y->size[0];
    }
    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = i + 1; pEnd < n; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          v1_tmp = idx->data[p - 1];
          v1 = y->data[(v1_tmp + y->size[0]) - 1];
          v2_tmp = idx->data[q - 1];
          v2 = y->data[(v2_tmp + y->size[0]) - 1];
          if ((v1 == v2) || (rtIsNaN(v1) && rtIsNaN(v2)) || (v1 <= v2) ||
              rtIsNaN(v2)) {
            iwork->data[k] = v1_tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = v2_tmp;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  emxInit_real_T(&ycol, 1);
  i2 = y->size[0] - 1;
  pEnd = ycol->size[0];
  ycol->size[0] = y->size[0];
  emxEnsureCapacity_real_T(ycol, pEnd);
  for (j = 0; j < 2; j++) {
    for (i = 0; i <= i2; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * j) - 1];
    }
    for (i = 0; i <= i2; i++) {
      y->data[i + y->size[0] * j] = ycol->data[i];
    }
  }
  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
}

void sortrows(emxArray_real_T *y)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_real_T *ycol;
  double v1;
  double v2;
  int i;
  int i2;
  int j;
  int k;
  int kEnd;
  int n;
  int p;
  int pEnd;
  int q;
  int qEnd;
  int v1_tmp;
  int v2_tmp;
  emxInit_int32_T(&idx, 1);
  n = y->size[0] + 1;
  pEnd = idx->size[0];
  idx->size[0] = y->size[0];
  emxEnsureCapacity_int32_T(idx, pEnd);
  i2 = y->size[0];
  for (pEnd = 0; pEnd < i2; pEnd++) {
    idx->data[pEnd] = 0;
  }
  if (y->size[0] == 0) {
    for (k = 0; k <= n - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&iwork, 1);
    pEnd = iwork->size[0];
    iwork->size[0] = y->size[0];
    emxEnsureCapacity_int32_T(iwork, pEnd);
    pEnd = y->size[0] - 1;
    for (k = 1; k <= pEnd; k += 2) {
      v1 = y->data[(k + y->size[0] * 3) - 1];
      v2 = y->data[k + y->size[0] * 3];
      if ((v1 == v2) || (rtIsNaN(v1) && rtIsNaN(v2)) || (v1 <= v2) ||
          rtIsNaN(v2)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((y->size[0] & 1) != 0) {
      idx->data[y->size[0] - 1] = y->size[0];
    }
    i = 2;
    while (i < n - 1) {
      i2 = i << 1;
      j = 1;
      for (pEnd = i + 1; pEnd < n; pEnd = qEnd + i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > n) {
          qEnd = n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          v1_tmp = idx->data[p - 1];
          v1 = y->data[(v1_tmp + y->size[0] * 3) - 1];
          v2_tmp = idx->data[q - 1];
          v2 = y->data[(v2_tmp + y->size[0] * 3) - 1];
          if ((v1 == v2) || (rtIsNaN(v1) && rtIsNaN(v2)) || (v1 <= v2) ||
              rtIsNaN(v2)) {
            iwork->data[k] = v1_tmp;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = v2_tmp;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }
        j = qEnd;
      }
      i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  emxInit_real_T(&ycol, 1);
  i2 = y->size[0] - 1;
  pEnd = ycol->size[0];
  ycol->size[0] = y->size[0];
  emxEnsureCapacity_real_T(ycol, pEnd);
  for (j = 0; j < 4; j++) {
    for (i = 0; i <= i2; i++) {
      ycol->data[i] = y->data[(idx->data[i] + y->size[0] * j) - 1];
    }
    for (i = 0; i <= i2; i++) {
      y->data[i + y->size[0] * j] = ycol->data[i];
    }
  }
  emxFree_real_T(&ycol);
  emxFree_int32_T(&idx);
}

/* End of code generation (sortrows.c) */
