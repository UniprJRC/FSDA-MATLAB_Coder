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
  int i;
  int loop_ub_tmp;
  int m;
  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  loop_ub_tmp = (int)k;
  p->size[1] = (int)k;
  emxEnsureCapacity_real_T(p, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    p->data[i] = 0.0;
  }
  if (!(k == 0.0)) {
    if (k >= n) {
      p->data[0] = 1.0;
      i = (int)(n - 1.0);
      for (loop_ub_tmp = 0; loop_ub_tmp < i; loop_ub_tmp++) {
        j = c_rand() * (((double)loop_ub_tmp + 1.0) + 1.0);
        j = floor(j);
        p->data[loop_ub_tmp + 1] = p->data[(int)(j + 1.0) - 1];
        p->data[(int)(j + 1.0) - 1] = ((double)loop_ub_tmp + 1.0) + 1.0;
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
        p->data[m] = p->data[(int)(j + 1.0) - 1];
        p->data[(int)(j + 1.0) - 1] = t;
      }
    } else {
      emxInit_real_T(&hashTbl, 1);
      i = hashTbl->size[0];
      hashTbl->size[0] = (int)k;
      emxEnsureCapacity_real_T(hashTbl, i);
      for (i = 0; i < loop_ub_tmp; i++) {
        hashTbl->data[i] = 0.0;
      }
      emxInit_real_T(&link, 1);
      i = link->size[0];
      link->size[0] = (int)k;
      emxEnsureCapacity_real_T(link, i);
      for (i = 0; i < loop_ub_tmp; i++) {
        link->data[i] = 0.0;
      }
      emxInit_real_T(&val, 1);
      i = val->size[0];
      val->size[0] = (int)k;
      emxEnsureCapacity_real_T(val, i);
      for (i = 0; i < loop_ub_tmp; i++) {
        val->data[i] = 0.0;
      }
      emxInit_real_T(&loc, 1);
      i = loc->size[0];
      loc->size[0] = (int)k;
      emxEnsureCapacity_real_T(loc, i);
      for (i = 0; i < loop_ub_tmp; i++) {
        loc->data[i] = 0.0;
      }
      newEntry = 1.0;
      for (m = 0; m < loop_ub_tmp; m++) {
        nleftm1 = n - ((double)m + 1.0);
        selectedLoc = c_rand() * (nleftm1 + 1.0);
        selectedLoc = floor(selectedLoc);
        b_i = c_mod(selectedLoc, k) + 1.0;
        j = hashTbl->data[(int)b_i - 1];
        while ((j > 0.0) && (loc->data[(int)j - 1] != selectedLoc)) {
          j = link->data[(int)j - 1];
        }
        if (j > 0.0) {
          p->data[m] = val->data[(int)j - 1] + 1.0;
        } else {
          p->data[m] = selectedLoc + 1.0;
          j = newEntry;
          newEntry++;
          loc->data[(int)j - 1] = selectedLoc;
          link->data[(int)j - 1] = hashTbl->data[(int)b_i - 1];
          hashTbl->data[(int)b_i - 1] = j;
        }
        if ((double)m + 1.0 < k) {
          selectedLoc = hashTbl->data[(int)(c_mod(nleftm1, k) + 1.0) - 1];
          while ((selectedLoc > 0.0) &&
                 (loc->data[(int)selectedLoc - 1] != nleftm1)) {
            selectedLoc = link->data[(int)selectedLoc - 1];
          }
          if (selectedLoc > 0.0) {
            val->data[(int)j - 1] = val->data[(int)selectedLoc - 1];
          } else {
            val->data[(int)j - 1] = nleftm1;
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
  emxInit_int32_T(&idx, 2);
  b_rand(n, p);
  b_n = p->size[1] + 1;
  i = idx->size[0] * idx->size[1];
  idx->size[0] = 1;
  idx->size[1] = p->size[1];
  emxEnsureCapacity_int32_T(idx, i);
  b_i = p->size[1];
  for (i = 0; i < b_i; i++) {
    idx->data[i] = 0;
  }
  if (p->size[1] != 0) {
    emxInit_int32_T(&iwork, 1);
    i = iwork->size[0];
    iwork->size[0] = p->size[1];
    emxEnsureCapacity_int32_T(iwork, i);
    i = p->size[1] - 1;
    for (k = 1; k <= i; k += 2) {
      d = p->data[k];
      if ((p->data[k - 1] <= d) || rtIsNaN(d)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }
    if ((p->size[1] & 1) != 0) {
      idx->data[p->size[1] - 1] = p->size[1];
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
          d = p->data[idx->data[q] - 1];
          i = idx->data[b_p - 1];
          if ((p->data[i - 1] <= d) || rtIsNaN(d)) {
            iwork->data[k] = i;
            b_p++;
            if (b_p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                iwork->data[k] = idx->data[q];
                q++;
              }
            }
          } else {
            iwork->data[k] = idx->data[q];
            q++;
            if (q + 1 == qEnd) {
              while (b_p < pEnd) {
                k++;
                iwork->data[k] = idx->data[b_p - 1];
                b_p++;
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
  b_i = p->size[1];
  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = b_i;
  emxEnsureCapacity_real_T(p, i);
  for (i = 0; i < b_i; i++) {
    p->data[i] = idx->data[i];
  }
  emxFree_int32_T(&idx);
}

/* End of code generation (randperm.c) */
