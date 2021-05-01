/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "FSMmmd_wrapper_emxutil.h"
#include "FSMmmd_wrapper_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "xzgetrf.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <math.h>

/* Function Definitions */
void mrdiv(emxArray_real_T *A, const emxArray_real_T *B)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *Y;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  emxArray_real_T *work;
  double d;
  double s;
  double smax;
  int b_i;
  int i;
  int ii;
  int ip1;
  int j;
  int k;
  int kBcol;
  int m;
  int ma;
  int minmana;
  int minmn;
  int mmi;
  int mn;
  int n;
  int nmi;
  int pvt;
  emxInit_real_T(&Y, 2);
  emxInit_real_T(&b_B, 2);
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  emxInit_real_T(&work, 1);
  emxInit_real_T(&vn1, 1);
  emxInit_real_T(&vn2, 1);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    minmana = A->size[0];
    i = A->size[0] * A->size[1];
    A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(A, i);
    kBcol = B->size[0];
    for (i = 0; i < kBcol; i++) {
      for (nmi = 0; nmi < minmana; nmi++) {
        A->data[nmi + A->size[0] * i] = 0.0;
      }
    }
  } else if (B->size[0] == B->size[1]) {
    n = B->size[1];
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    kBcol = B->size[0] * B->size[1];
    for (i = 0; i < kBcol; i++) {
      b_A->data[i] = B->data[i];
    }
    xzgetrf(B->size[1], B->size[1], b_A, B->size[1], jpvt, &minmana);
    ii = A->size[0];
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      for (j = 0; j < n; j++) {
        minmana = ii * j - 1;
        mn = n * j;
        for (k = 0; k < j; k++) {
          kBcol = ii * k;
          i = k + mn;
          if (b_A->data[i] != 0.0) {
            for (b_i = 0; b_i < ii; b_i++) {
              nmi = (b_i + minmana) + 1;
              A->data[nmi] -= b_A->data[i] * A->data[b_i + kBcol];
            }
          }
        }
        smax = 1.0 / b_A->data[j + mn];
        for (b_i = 0; b_i < ii; b_i++) {
          i = (b_i + minmana) + 1;
          A->data[i] *= smax;
        }
      }
    }
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      for (j = n; j >= 1; j--) {
        minmana = ii * (j - 1) - 1;
        mn = n * (j - 1) - 1;
        i = j + 1;
        for (k = i; k <= n; k++) {
          kBcol = ii * (k - 1);
          nmi = k + mn;
          if (b_A->data[nmi] != 0.0) {
            for (b_i = 0; b_i < ii; b_i++) {
              pvt = (b_i + minmana) + 1;
              A->data[pvt] -= b_A->data[nmi] * A->data[b_i + kBcol];
            }
          }
        }
      }
    }
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      nmi = jpvt->data[j - 1];
      if (nmi != j) {
        for (b_i = 0; b_i < ii; b_i++) {
          smax = A->data[b_i + A->size[0] * (j - 1)];
          A->data[b_i + A->size[0] * (j - 1)] =
              A->data[b_i + A->size[0] * (nmi - 1)];
          A->data[b_i + A->size[0] * (nmi - 1)] = smax;
        }
      }
    }
  } else {
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[1];
    b_A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(b_A, i);
    kBcol = B->size[0];
    for (i = 0; i < kBcol; i++) {
      minmana = B->size[1];
      for (nmi = 0; nmi < minmana; nmi++) {
        b_A->data[nmi + b_A->size[0] * i] = B->data[i + B->size[0] * nmi];
      }
    }
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = A->size[1];
    b_B->size[1] = A->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    kBcol = A->size[0];
    for (i = 0; i < kBcol; i++) {
      minmana = A->size[1];
      for (nmi = 0; nmi < minmana; nmi++) {
        b_B->data[nmi + b_B->size[0] * i] = A->data[i + A->size[0] * nmi];
      }
    }
    m = b_A->size[0];
    n = b_A->size[1];
    kBcol = b_A->size[0];
    minmana = b_A->size[1];
    if (kBcol < minmana) {
      minmana = kBcol;
    }
    i = tau->size[0];
    tau->size[0] = minmana;
    emxEnsureCapacity_real_T(tau, i);
    for (i = 0; i < minmana; i++) {
      tau->data[i] = 0.0;
    }
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = b_A->size[1];
    emxEnsureCapacity_int32_T(jpvt, i);
    kBcol = b_A->size[1];
    for (i = 0; i < kBcol; i++) {
      jpvt->data[i] = 0;
    }
    for (k = 0; k < n; k++) {
      jpvt->data[k] = k + 1;
    }
    ma = b_A->size[0];
    kBcol = b_A->size[0];
    minmn = b_A->size[1];
    if (kBcol < minmn) {
      minmn = kBcol;
    }
    i = work->size[0];
    work->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(work, i);
    kBcol = b_A->size[1];
    for (i = 0; i < kBcol; i++) {
      work->data[i] = 0.0;
    }
    i = vn1->size[0];
    vn1->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(vn1, i);
    kBcol = b_A->size[1];
    for (i = 0; i < kBcol; i++) {
      vn1->data[i] = 0.0;
    }
    i = vn2->size[0];
    vn2->size[0] = b_A->size[1];
    emxEnsureCapacity_real_T(vn2, i);
    kBcol = b_A->size[1];
    for (i = 0; i < kBcol; i++) {
      vn2->data[i] = 0.0;
    }
    for (j = 0; j < n; j++) {
      d = xnrm2(m, b_A, j * ma + 1);
      vn1->data[j] = d;
      vn2->data[j] = d;
    }
    for (b_i = 0; b_i < minmn; b_i++) {
      ip1 = b_i + 2;
      kBcol = b_i * ma;
      ii = kBcol + b_i;
      nmi = n - b_i;
      mmi = m - b_i;
      if (nmi < 1) {
        minmana = -1;
      } else {
        minmana = 0;
        if (nmi > 1) {
          smax = fabs(vn1->data[b_i]);
          for (k = 2; k <= nmi; k++) {
            s = fabs(vn1->data[(b_i + k) - 1]);
            if (s > smax) {
              minmana = k - 1;
              smax = s;
            }
          }
        }
      }
      pvt = b_i + minmana;
      if (pvt + 1 != b_i + 1) {
        minmana = pvt * ma;
        for (k = 0; k < m; k++) {
          mn = minmana + k;
          smax = b_A->data[mn];
          i = kBcol + k;
          b_A->data[mn] = b_A->data[i];
          b_A->data[i] = smax;
        }
        minmana = jpvt->data[pvt];
        jpvt->data[pvt] = jpvt->data[b_i];
        jpvt->data[b_i] = minmana;
        vn1->data[pvt] = vn1->data[b_i];
        vn2->data[pvt] = vn2->data[b_i];
      }
      if (b_i + 1 < m) {
        smax = b_A->data[ii];
        d = xzlarfg(mmi, &smax, b_A, ii + 2);
        tau->data[b_i] = d;
        b_A->data[ii] = smax;
      } else {
        d = 0.0;
        tau->data[b_i] = 0.0;
      }
      if (b_i + 1 < n) {
        smax = b_A->data[ii];
        b_A->data[ii] = 1.0;
        xzlarf(mmi, nmi - 1, ii + 1, d, b_A, (ii + ma) + 1, ma, work);
        b_A->data[ii] = smax;
      }
      for (j = ip1; j <= n; j++) {
        minmana = b_i + (j - 1) * ma;
        d = vn1->data[j - 1];
        if (d != 0.0) {
          smax = fabs(b_A->data[minmana]) / d;
          smax = 1.0 - smax * smax;
          if (smax < 0.0) {
            smax = 0.0;
          }
          s = d / vn2->data[j - 1];
          s = smax * (s * s);
          if (s <= 1.4901161193847656E-8) {
            if (b_i + 1 < m) {
              d = xnrm2(mmi - 1, b_A, minmana + 2);
              vn1->data[j - 1] = d;
              vn2->data[j - 1] = d;
            } else {
              vn1->data[j - 1] = 0.0;
              vn2->data[j - 1] = 0.0;
            }
          } else {
            vn1->data[j - 1] = d * sqrt(smax);
          }
        }
      }
    }
    pvt = 0;
    if (b_A->size[0] < b_A->size[1]) {
      minmn = b_A->size[0];
      minmana = b_A->size[1];
    } else {
      minmn = b_A->size[1];
      minmana = b_A->size[0];
    }
    if (minmn > 0) {
      smax = fmin(1.4901161193847656E-8,
                  2.2204460492503131E-15 * (double)minmana) *
             fabs(b_A->data[0]);
      while ((pvt < minmn) &&
             (!(fabs(b_A->data[pvt + b_A->size[0] * pvt]) <= smax))) {
        pvt++;
      }
    }
    ii = b_B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    kBcol = b_A->size[1] * b_B->size[1];
    for (i = 0; i < kBcol; i++) {
      Y->data[i] = 0.0;
    }
    m = b_A->size[0];
    minmana = b_B->size[1];
    kBcol = b_A->size[0];
    mn = b_A->size[1];
    if (kBcol < mn) {
      mn = kBcol;
    }
    for (j = 0; j < mn; j++) {
      if (tau->data[j] != 0.0) {
        for (k = 0; k < minmana; k++) {
          smax = b_B->data[j + b_B->size[0] * k];
          i = j + 2;
          for (b_i = i; b_i <= m; b_i++) {
            smax += b_A->data[(b_i + b_A->size[0] * j) - 1] *
                    b_B->data[(b_i + b_B->size[0] * k) - 1];
          }
          smax *= tau->data[j];
          if (smax != 0.0) {
            b_B->data[j + b_B->size[0] * k] -= smax;
            for (b_i = i; b_i <= m; b_i++) {
              b_B->data[(b_i + b_B->size[0] * k) - 1] -=
                  b_A->data[(b_i + b_A->size[0] * j) - 1] * smax;
            }
          }
        }
      }
    }
    for (k = 0; k < ii; k++) {
      for (b_i = 0; b_i < pvt; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] =
            b_B->data[b_i + b_B->size[0] * k];
      }
      for (j = pvt; j >= 1; j--) {
        i = jpvt->data[j - 1];
        Y->data[(i + Y->size[0] * k) - 1] /=
            b_A->data[(j + b_A->size[0] * (j - 1)) - 1];
        for (b_i = 0; b_i <= j - 2; b_i++) {
          Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] -=
              Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] *
              b_A->data[b_i + b_A->size[0] * (j - 1)];
        }
      }
    }
    i = A->size[0] * A->size[1];
    A->size[0] = Y->size[1];
    A->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(A, i);
    kBcol = Y->size[0];
    for (i = 0; i < kBcol; i++) {
      minmana = Y->size[1];
      for (nmi = 0; nmi < minmana; nmi++) {
        A->data[nmi + A->size[0] * i] = Y->data[i + Y->size[0] * nmi];
      }
    }
  }
  emxFree_real_T(&vn2);
  emxFree_real_T(&vn1);
  emxFree_real_T(&work);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emxFree_real_T(&Y);
}

/* End of code generation (mrdivide_helper.c) */
