/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * linearLeastSquares.c
 *
 * Code generation for function 'linearLeastSquares'
 *
 */

/* Include files */
#include "linearLeastSquares.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "xunormqr.h"
#include "xzgeqp3.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void linearLeastSquares(emxArray_real_T *lhs, emxArray_real_T *rhs,
                        const emxArray_real_T *dx, int m, int n,
                        emxArray_real_T *b_dx)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *tau;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  emxArray_real_T *work;
  double d;
  double s;
  double temp;
  int b_i;
  int i;
  int ii;
  int ij;
  int ip1;
  int ix;
  int k;
  int ma;
  int minmana;
  int minmn_tmp;
  int mmi;
  int nfxd;
  int nmi;
  int temp_tmp;
  emxInit_int32_T(&jpvt, 1);
  i = jpvt->size[0];
  jpvt->size[0] = n;
  emxEnsureCapacity_int32_T(jpvt, i);
  for (i = 0; i < n; i++) {
    jpvt->data[i] = 0;
  }
  emxInit_real_T(&tau, 1);
  ma = lhs->size[0];
  ij = lhs->size[0];
  minmana = lhs->size[1];
  if (ij < minmana) {
    minmana = ij;
  }
  if (m < n) {
    minmn_tmp = m;
  } else {
    minmn_tmp = n;
  }
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, i);
  for (i = 0; i < minmana; i++) {
    tau->data[i] = 0.0;
  }
  emxInit_real_T(&work, 1);
  emxInit_real_T(&vn1, 1);
  emxInit_real_T(&vn2, 1);
  if ((lhs->size[0] == 0) || (lhs->size[1] == 0) || (minmn_tmp < 1)) {
    for (ii = 0; ii < n; ii++) {
      jpvt->data[ii] = ii + 1;
    }
  } else {
    nfxd = 0;
    for (ii = 0; ii < n; ii++) {
      if (jpvt->data[ii] != 0) {
        nfxd++;
        if (ii + 1 != nfxd) {
          ix = ii * ma;
          minmana = (nfxd - 1) * ma;
          for (k = 0; k < m; k++) {
            temp_tmp = ix + k;
            temp = lhs->data[temp_tmp];
            i = minmana + k;
            lhs->data[temp_tmp] = lhs->data[i];
            lhs->data[i] = temp;
          }
          jpvt->data[ii] = jpvt->data[nfxd - 1];
          jpvt->data[nfxd - 1] = ii + 1;
        } else {
          jpvt->data[ii] = ii + 1;
        }
      } else {
        jpvt->data[ii] = ii + 1;
      }
    }
    if (nfxd >= minmn_tmp) {
      nfxd = minmn_tmp;
    }
    qrf(lhs, m, n, nfxd, tau);
    if (nfxd < minmn_tmp) {
      ma = lhs->size[0];
      i = work->size[0];
      work->size[0] = lhs->size[1];
      emxEnsureCapacity_real_T(work, i);
      ij = lhs->size[1];
      for (i = 0; i < ij; i++) {
        work->data[i] = 0.0;
      }
      i = vn1->size[0];
      vn1->size[0] = lhs->size[1];
      emxEnsureCapacity_real_T(vn1, i);
      ij = lhs->size[1];
      for (i = 0; i < ij; i++) {
        vn1->data[i] = 0.0;
      }
      i = vn2->size[0];
      vn2->size[0] = lhs->size[1];
      emxEnsureCapacity_real_T(vn2, i);
      ij = lhs->size[1];
      for (i = 0; i < ij; i++) {
        vn2->data[i] = 0.0;
      }
      i = nfxd + 1;
      for (ii = i; ii <= n; ii++) {
        d = xnrm2(m - nfxd, lhs, (nfxd + (ii - 1) * ma) + 1);
        vn1->data[ii - 1] = d;
        vn2->data[ii - 1] = d;
      }
      for (b_i = i; b_i <= minmn_tmp; b_i++) {
        ip1 = b_i + 1;
        ij = (b_i - 1) * ma;
        ii = (ij + b_i) - 1;
        nmi = (n - b_i) + 1;
        mmi = m - b_i;
        if (nmi < 1) {
          minmana = -2;
        } else {
          minmana = -1;
          if (nmi > 1) {
            temp = fabs(vn1->data[b_i - 1]);
            for (k = 2; k <= nmi; k++) {
              s = fabs(vn1->data[(b_i + k) - 2]);
              if (s > temp) {
                minmana = k - 2;
                temp = s;
              }
            }
          }
        }
        nfxd = b_i + minmana;
        if (nfxd + 1 != b_i) {
          ix = nfxd * ma;
          for (k = 0; k < m; k++) {
            temp_tmp = ix + k;
            temp = lhs->data[temp_tmp];
            minmana = ij + k;
            lhs->data[temp_tmp] = lhs->data[minmana];
            lhs->data[minmana] = temp;
          }
          minmana = jpvt->data[nfxd];
          jpvt->data[nfxd] = jpvt->data[b_i - 1];
          jpvt->data[b_i - 1] = minmana;
          vn1->data[nfxd] = vn1->data[b_i - 1];
          vn2->data[nfxd] = vn2->data[b_i - 1];
        }
        if (b_i < m) {
          temp = lhs->data[ii];
          d = b_xzlarfg(mmi + 1, &temp, lhs, ii + 2);
          tau->data[b_i - 1] = d;
          lhs->data[ii] = temp;
        } else {
          d = 0.0;
          tau->data[b_i - 1] = 0.0;
        }
        if (b_i < n) {
          temp = lhs->data[ii];
          lhs->data[ii] = 1.0;
          xzlarf(mmi + 1, nmi - 1, ii + 1, d, lhs, (ii + ma) + 1, ma, work);
          lhs->data[ii] = temp;
        }
        for (ii = ip1; ii <= n; ii++) {
          ij = b_i + (ii - 1) * ma;
          d = vn1->data[ii - 1];
          if (d != 0.0) {
            temp = fabs(lhs->data[ij - 1]) / d;
            temp = 1.0 - temp * temp;
            if (temp < 0.0) {
              temp = 0.0;
            }
            s = d / vn2->data[ii - 1];
            s = temp * (s * s);
            if (s <= 1.4901161193847656E-8) {
              if (b_i < m) {
                d = xnrm2(mmi, lhs, ij + 1);
                vn1->data[ii - 1] = d;
                vn2->data[ii - 1] = d;
              } else {
                vn1->data[ii - 1] = 0.0;
                vn2->data[ii - 1] = 0.0;
              }
            } else {
              vn1->data[ii - 1] = d * sqrt(temp);
            }
          }
        }
      }
    }
  }
  emxFree_real_T(&vn2);
  emxFree_real_T(&vn1);
  emxFree_real_T(&work);
  xunormqr(lhs, rhs, tau);
  if (1 > n) {
    ij = 0;
  } else {
    ij = n;
  }
  i = tau->size[0];
  tau->size[0] = ij;
  emxEnsureCapacity_real_T(tau, i);
  for (i = 0; i < ij; i++) {
    tau->data[i] = rhs->data[i];
  }
  if ((lhs->size[0] != 0) && (lhs->size[1] != 0) && (ij != 0) && (n != 0)) {
    for (ii = n; ii >= 1; ii--) {
      ij = (ii + (ii - 1) * m) - 1;
      tau->data[ii - 1] /= lhs->data[ij];
      for (b_i = 0; b_i <= ii - 2; b_i++) {
        ix = (ii - b_i) - 2;
        tau->data[ix] -= tau->data[ii - 1] * lhs->data[(ij - b_i) - 1];
      }
    }
  }
  i = b_dx->size[0] * b_dx->size[1];
  b_dx->size[0] = dx->size[0];
  b_dx->size[1] = 1;
  emxEnsureCapacity_real_T(b_dx, i);
  ij = dx->size[0];
  for (i = 0; i < ij; i++) {
    b_dx->data[i] = tau->data[i];
  }
  ij = jpvt->size[0];
  for (i = 0; i < ij; i++) {
    b_dx->data[jpvt->data[i] - 1] = tau->data[i];
  }
  emxFree_real_T(&tau);
  emxFree_int32_T(&jpvt);
}

/* End of code generation (linearLeastSquares.c) */
