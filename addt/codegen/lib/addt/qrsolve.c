/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * qrsolve.c
 *
 * Code generation for function 'qrsolve'
 *
 */

/* Include files */
#include "qrsolve.h"
#include "addt_emxutil.h"
#include "addt_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <math.h>

/* Function Definitions */
void qrsolve(const emxArray_real_T *A, const emxArray_real_T *B,
             emxArray_real_T *Y)
{
  emxArray_int32_T *jpvt;
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
  int k;
  int m;
  int ma;
  int minmana;
  int minmn;
  int mmi;
  int mn;
  int n;
  int nmi;
  int pvt;
  int u0;
  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  minmana = A->size[0] * A->size[1];
  for (i = 0; i < minmana; i++) {
    b_A->data[i] = A->data[i];
  }
  emxInit_real_T(&tau, 1);
  m = A->size[0];
  n = A->size[1];
  u0 = A->size[0];
  minmana = A->size[1];
  if (u0 < minmana) {
    minmana = u0;
  }
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, i);
  for (i = 0; i < minmana; i++) {
    tau->data[i] = 0.0;
  }
  emxInit_int32_T(&jpvt, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = A->size[1];
    emxEnsureCapacity_int32_T(jpvt, i);
    minmana = A->size[1];
    for (i = 0; i < minmana; i++) {
      jpvt->data[i] = 0;
    }
    for (u0 = 0; u0 < n; u0++) {
      jpvt->data[u0] = u0 + 1;
    }
  } else {
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = A->size[1];
    emxEnsureCapacity_int32_T(jpvt, i);
    minmana = A->size[1];
    for (i = 0; i < minmana; i++) {
      jpvt->data[i] = 0;
    }
    for (k = 0; k < n; k++) {
      jpvt->data[k] = k + 1;
    }
    emxInit_real_T(&work, 1);
    ma = A->size[0];
    u0 = A->size[0];
    minmn = A->size[1];
    if (u0 < minmn) {
      minmn = u0;
    }
    i = work->size[0];
    work->size[0] = A->size[1];
    emxEnsureCapacity_real_T(work, i);
    minmana = A->size[1];
    for (i = 0; i < minmana; i++) {
      work->data[i] = 0.0;
    }
    emxInit_real_T(&vn1, 1);
    i = vn1->size[0];
    vn1->size[0] = A->size[1];
    emxEnsureCapacity_real_T(vn1, i);
    minmana = A->size[1];
    for (i = 0; i < minmana; i++) {
      vn1->data[i] = 0.0;
    }
    emxInit_real_T(&vn2, 1);
    i = vn2->size[0];
    vn2->size[0] = A->size[1];
    emxEnsureCapacity_real_T(vn2, i);
    minmana = A->size[1];
    for (i = 0; i < minmana; i++) {
      vn2->data[i] = 0.0;
    }
    for (u0 = 0; u0 < n; u0++) {
      d = xnrm2(m, A, u0 * ma + 1);
      vn1->data[u0] = d;
      vn2->data[u0] = d;
    }
    for (b_i = 0; b_i < minmn; b_i++) {
      ip1 = b_i + 2;
      mn = b_i * ma;
      ii = mn + b_i;
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
          u0 = minmana + k;
          smax = b_A->data[u0];
          i = mn + k;
          b_A->data[u0] = b_A->data[i];
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
      for (u0 = ip1; u0 <= n; u0++) {
        minmana = b_i + (u0 - 1) * ma;
        d = vn1->data[u0 - 1];
        if (d != 0.0) {
          smax = fabs(b_A->data[minmana]) / d;
          smax = 1.0 - smax * smax;
          if (smax < 0.0) {
            smax = 0.0;
          }
          s = d / vn2->data[u0 - 1];
          s = smax * (s * s);
          if (s <= 1.4901161193847656E-8) {
            if (b_i + 1 < m) {
              d = xnrm2(mmi - 1, b_A, minmana + 2);
              vn1->data[u0 - 1] = d;
              vn2->data[u0 - 1] = d;
            } else {
              vn1->data[u0 - 1] = 0.0;
              vn2->data[u0 - 1] = 0.0;
            }
          } else {
            vn1->data[u0 - 1] = d * sqrt(smax);
          }
        }
      }
    }
    emxFree_real_T(&vn2);
    emxFree_real_T(&vn1);
    emxFree_real_T(&work);
  }
  ii = 0;
  if (b_A->size[0] < b_A->size[1]) {
    minmn = b_A->size[0];
    minmana = b_A->size[1];
  } else {
    minmn = b_A->size[1];
    minmana = b_A->size[0];
  }
  if (minmn > 0) {
    smax =
        fmin(1.4901161193847656E-8, 2.2204460492503131E-15 * (double)minmana) *
        fabs(b_A->data[0]);
    while ((ii < minmn) &&
           (!(fabs(b_A->data[ii + b_A->size[0] * ii]) <= smax))) {
      ii++;
    }
  }
  emxInit_real_T(&b_B, 2);
  i = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = B->size[1];
  emxEnsureCapacity_real_T(b_B, i);
  minmana = B->size[0] * B->size[1];
  for (i = 0; i < minmana; i++) {
    b_B->data[i] = B->data[i];
  }
  pvt = B->size[1];
  i = Y->size[0] * Y->size[1];
  Y->size[0] = b_A->size[1];
  Y->size[1] = B->size[1];
  emxEnsureCapacity_real_T(Y, i);
  minmana = b_A->size[1] * B->size[1];
  for (i = 0; i < minmana; i++) {
    Y->data[i] = 0.0;
  }
  m = b_A->size[0];
  minmana = B->size[1];
  u0 = b_A->size[0];
  mn = b_A->size[1];
  if (u0 < mn) {
    mn = u0;
  }
  for (u0 = 0; u0 < mn; u0++) {
    if (tau->data[u0] != 0.0) {
      for (k = 0; k < minmana; k++) {
        smax = b_B->data[u0 + b_B->size[0] * k];
        i = u0 + 2;
        for (b_i = i; b_i <= m; b_i++) {
          smax += b_A->data[(b_i + b_A->size[0] * u0) - 1] *
                  b_B->data[(b_i + b_B->size[0] * k) - 1];
        }
        smax *= tau->data[u0];
        if (smax != 0.0) {
          b_B->data[u0 + b_B->size[0] * k] -= smax;
          i = u0 + 2;
          for (b_i = i; b_i <= m; b_i++) {
            b_B->data[(b_i + b_B->size[0] * k) - 1] -=
                b_A->data[(b_i + b_A->size[0] * u0) - 1] * smax;
          }
        }
      }
    }
  }
  emxFree_real_T(&tau);
  for (k = 0; k < pvt; k++) {
    for (b_i = 0; b_i < ii; b_i++) {
      Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] =
          b_B->data[b_i + b_B->size[0] * k];
    }
    for (u0 = ii; u0 >= 1; u0--) {
      i = jpvt->data[u0 - 1];
      Y->data[(i + Y->size[0] * k) - 1] /=
          b_A->data[(u0 + b_A->size[0] * (u0 - 1)) - 1];
      for (b_i = 0; b_i <= u0 - 2; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] -=
            Y->data[(jpvt->data[u0 - 1] + Y->size[0] * k) - 1] *
            b_A->data[b_i + b_A->size[0] * (u0 - 1)];
      }
    }
  }
  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
}

/* End of code generation (qrsolve.c) */
