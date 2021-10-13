/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * randperm.c
 *
 * Code generation for function 'randperm'
 *
 */

/* Include files */
#include "randperm.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "mod.h"
#include "rand.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_randperm(double n, double k, emxArray_real_T *p)
{
  emxArray_real_T *hashTbl;
  emxArray_real_T *link;
  emxArray_real_T *loc;
  emxArray_real_T *val;
  double b_i;
  double j;
  double newEntry;
  double nleftm1;
  double selectedLoc;
  double t;
  double *hashTbl_data;
  double *link_data;
  double *loc_data;
  double *p_data;
  double *val_data;
  int i;
  int loop_ub_tmp;
  int m;
  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  loop_ub_tmp = (int)k;
  p->size[1] = (int)k;
  emxEnsureCapacity_real_T(p, i);
  p_data = p->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    p_data[i] = 0.0;
  }
  if (!(k == 0.0)) {
    if (k >= n) {
      p_data[0] = 1.0;
      i = (int)(n - 1.0);
      for (loop_ub_tmp = 0; loop_ub_tmp < i; loop_ub_tmp++) {
        j = c_rand() * (((double)loop_ub_tmp + 1.0) + 1.0);
        j = floor(j);
        p_data[loop_ub_tmp + 1] = p_data[(int)(j + 1.0) - 1];
        p_data[(int)(j + 1.0) - 1] = ((double)loop_ub_tmp + 1.0) + 1.0;
      }
    } else if (k >= n / 4.0) {
      t = 0.0;
      i = (int)((k - 1.0) + 1.0);
      for (m = 0; m < i; m++) {
        selectedLoc = k - (double)m;
        b_i = n - t;
        newEntry = selectedLoc / b_i;
        nleftm1 = c_rand();
        while (nleftm1 > newEntry) {
          t++;
          b_i--;
          newEntry += (1.0 - newEntry) * (selectedLoc / b_i);
        }
        t++;
        j = c_rand() * ((double)m + 1.0);
        j = floor(j);
        p_data[m] = p_data[(int)(j + 1.0) - 1];
        p_data[(int)(j + 1.0) - 1] = t;
      }
    } else {
      emxInit_real_T(&hashTbl, 1);
      i = hashTbl->size[0];
      hashTbl->size[0] = (int)k;
      emxEnsureCapacity_real_T(hashTbl, i);
      hashTbl_data = hashTbl->data;
      for (i = 0; i < loop_ub_tmp; i++) {
        hashTbl_data[i] = 0.0;
      }
      emxInit_real_T(&link, 1);
      i = link->size[0];
      link->size[0] = (int)k;
      emxEnsureCapacity_real_T(link, i);
      link_data = link->data;
      for (i = 0; i < loop_ub_tmp; i++) {
        link_data[i] = 0.0;
      }
      emxInit_real_T(&val, 1);
      i = val->size[0];
      val->size[0] = (int)k;
      emxEnsureCapacity_real_T(val, i);
      val_data = val->data;
      for (i = 0; i < loop_ub_tmp; i++) {
        val_data[i] = 0.0;
      }
      emxInit_real_T(&loc, 1);
      i = loc->size[0];
      loc->size[0] = (int)k;
      emxEnsureCapacity_real_T(loc, i);
      loc_data = loc->data;
      for (i = 0; i < loop_ub_tmp; i++) {
        loc_data[i] = 0.0;
      }
      newEntry = 1.0;
      for (m = 0; m < loop_ub_tmp; m++) {
        nleftm1 = n - ((double)m + 1.0);
        selectedLoc = c_rand() * (nleftm1 + 1.0);
        selectedLoc = floor(selectedLoc);
        b_i = c_mod(selectedLoc, k) + 1.0;
        j = hashTbl_data[(int)b_i - 1];
        while ((j > 0.0) && (loc_data[(int)j - 1] != selectedLoc)) {
          j = link_data[(int)j - 1];
        }
        if (j > 0.0) {
          p_data[m] = val_data[(int)j - 1] + 1.0;
        } else {
          p_data[m] = selectedLoc + 1.0;
          j = newEntry;
          newEntry++;
          loc_data[(int)j - 1] = selectedLoc;
          link_data[(int)j - 1] = hashTbl_data[(int)b_i - 1];
          hashTbl_data[(int)b_i - 1] = j;
        }
        if ((double)m + 1.0 < k) {
          selectedLoc = hashTbl_data[(int)(c_mod(nleftm1, k) + 1.0) - 1];
          while ((selectedLoc > 0.0) &&
                 (loc_data[(int)selectedLoc - 1] != nleftm1)) {
            selectedLoc = link_data[(int)selectedLoc - 1];
          }
          if (selectedLoc > 0.0) {
            val_data[(int)j - 1] = val_data[(int)selectedLoc - 1];
          } else {
            val_data[(int)j - 1] = nleftm1;
          }
        }
      }
      emxFree_real_T(&loc);
      emxFree_real_T(&val);
      emxFree_real_T(&link);
      emxFree_real_T(&hashTbl);
    }
  }
}

void randperm(double n, emxArray_real_T *p)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  double d;
  double *p_data;
  int b_i;
  int b_n;
  int b_p;
  int i;
  int i2;
  int j;
  int k;
  int kEnd;
  int pEnd;
  int q;
  int qEnd;
  int *idx_data;
  int *iwork_data;
  emxInit_int32_T(&idx, 2);
  b_rand(n, p);
  p_data = p->data;
  b_n = p->size[1] + 1;
  i = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = p->size[1];
  emxEnsureCapacity_int32_T(idx, i);
  idx_data = idx->data;
  b_i = p->size[1];
  for (i = 0; i < b_i; i++) {
    idx_data[i] = 0;
  }
  if (p->size[1] != 0) {
    emxInit_int32_T(&iwork, 1);
    i = iwork->size[0];
    iwork->size[0] = p->size[1];
    emxEnsureCapacity_int32_T(iwork, i);
    iwork_data = iwork->data;
    i = p->size[1] - 1;
    for (k = 1; k <= i; k += 2) {
      d = p_data[k];
      if ((p_data[k - 1] <= d) || rtIsNaN(d)) {
        idx_data[k - 1] = k;
        idx_data[k] = k + 1;
      } else {
        idx_data[k - 1] = k + 1;
        idx_data[k] = k;
      }
    }
    if ((p->size[1] & 1) != 0) {
      idx_data[p->size[1] - 1] = p->size[1];
    }
    b_i = 2;
    while (b_i < b_n - 1) {
      i2 = b_i << 1;
      j = 1;
      for (pEnd = b_i + 1; pEnd < b_n; pEnd = qEnd + b_i) {
        b_p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > b_n) {
          qEnd = b_n;
        }
        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          d = p_data[idx_data[q] - 1];
          i = idx_data[b_p - 1];
          if ((p_data[i - 1] <= d) || rtIsNaN(d)) {
            iwork_data[k] = i;
            b_p++;
            if (b_p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork_data[k] = idx_data[q];
                q++;
              }
            }
          } else {
            iwork_data[k] = idx_data[q];
            q++;
            if (q + 1 == qEnd) {
              while (b_p < pEnd) {
                k++;
                iwork_data[k] = idx_data[b_p - 1];
                b_p++;
              }
            }
          }
          k++;
        }
        for (k = 0; k < kEnd; k++) {
          idx_data[(j + k) - 1] = iwork_data[k];
        }
        j = qEnd;
      }
      b_i = i2;
    }
    emxFree_int32_T(&iwork);
  }
  b_i = p->size[1];
  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = b_i;
  emxEnsureCapacity_real_T(p, i);
  p_data = p->data;
  for (i = 0; i < b_i; i++) {
    p_data[i] = idx_data[i];
  }
  emxFree_int32_T(&idx);
}

/* End of code generation (randperm.c) */
