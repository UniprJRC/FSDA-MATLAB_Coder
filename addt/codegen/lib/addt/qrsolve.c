/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
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
void qrsolve(const emxArray_real_T *A, const emxArray_real_T *B, emxArray_real_T
             *Y)
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
  int i;
  int ii;
  int ip1;
  int ix;
  int iy;
  int k;
  int m;
  int ma;
  int minmana;
  int minmn;
  int mmi;
  int n;
  int nmi;
  int pvt;
  bool guard1 = false;
  emxInit_real_T(&b_A, 2);
  pvt = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, pvt);
  minmana = A->size[0] * A->size[1];
  for (pvt = 0; pvt < minmana; pvt++) {
    b_A->data[pvt] = A->data[pvt];
  }

  emxInit_real_T(&tau, 1);
  m = A->size[0];
  n = A->size[1];
  pvt = A->size[0];
  minmana = A->size[1];
  if (pvt < minmana) {
    minmana = pvt;
  }

  pvt = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, pvt);
  for (pvt = 0; pvt < minmana; pvt++) {
    tau->data[pvt] = 0.0;
  }

  emxInit_int32_T(&jpvt, 2);
  emxInit_real_T(&work, 1);
  emxInit_real_T(&vn1, 1);
  emxInit_real_T(&vn2, 1);
  guard1 = false;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    guard1 = true;
  } else {
    pvt = A->size[0];
    minmana = A->size[1];
    if (pvt < minmana) {
      minmana = pvt;
    }

    if (minmana < 1) {
      guard1 = true;
    } else {
      pvt = jpvt->size[0] * jpvt->size[1];
      jpvt->size[0] = 1;
      jpvt->size[1] = A->size[1];
      emxEnsureCapacity_int32_T(jpvt, pvt);
      minmana = A->size[1];
      for (pvt = 0; pvt < minmana; pvt++) {
        jpvt->data[pvt] = 0;
      }

      for (k = 0; k < n; k++) {
        jpvt->data[k] = k + 1;
      }

      ma = A->size[0];
      pvt = A->size[0];
      minmn = A->size[1];
      if (pvt < minmn) {
        minmn = pvt;
      }

      pvt = work->size[0];
      work->size[0] = A->size[1];
      emxEnsureCapacity_real_T(work, pvt);
      minmana = A->size[1];
      for (pvt = 0; pvt < minmana; pvt++) {
        work->data[pvt] = 0.0;
      }

      pvt = vn1->size[0];
      vn1->size[0] = A->size[1];
      emxEnsureCapacity_real_T(vn1, pvt);
      minmana = A->size[1];
      for (pvt = 0; pvt < minmana; pvt++) {
        vn1->data[pvt] = 0.0;
      }

      pvt = vn2->size[0];
      vn2->size[0] = A->size[1];
      emxEnsureCapacity_real_T(vn2, pvt);
      minmana = A->size[1];
      for (pvt = 0; pvt < minmana; pvt++) {
        vn2->data[pvt] = 0.0;
      }

      for (nmi = 0; nmi < n; nmi++) {
        d = xnrm2(m, A, nmi * ma + 1);
        vn1->data[nmi] = d;
        vn2->data[nmi] = d;
      }

      for (i = 0; i < minmn; i++) {
        ip1 = i + 2;
        iy = i * ma;
        ii = iy + i;
        nmi = n - i;
        mmi = m - i;
        if (nmi < 1) {
          minmana = -1;
        } else {
          minmana = 0;
          if (nmi > 1) {
            ix = i;
            smax = fabs(vn1->data[i]);
            for (k = 2; k <= nmi; k++) {
              ix++;
              s = fabs(vn1->data[ix]);
              if (s > smax) {
                minmana = k - 1;
                smax = s;
              }
            }
          }
        }

        pvt = i + minmana;
        if (pvt + 1 != i + 1) {
          ix = pvt * ma;
          for (k = 0; k < m; k++) {
            smax = b_A->data[ix];
            b_A->data[ix] = b_A->data[iy];
            b_A->data[iy] = smax;
            ix++;
            iy++;
          }

          minmana = jpvt->data[pvt];
          jpvt->data[pvt] = jpvt->data[i];
          jpvt->data[i] = minmana;
          vn1->data[pvt] = vn1->data[i];
          vn2->data[pvt] = vn2->data[i];
        }

        if (i + 1 < m) {
          smax = b_A->data[ii];
          d = xzlarfg(mmi, &smax, b_A, ii + 2);
          tau->data[i] = d;
          b_A->data[ii] = smax;
        } else {
          d = 0.0;
          tau->data[i] = 0.0;
        }

        if (i + 1 < n) {
          smax = b_A->data[ii];
          b_A->data[ii] = 1.0;
          xzlarf(mmi, nmi - 1, ii + 1, d, b_A, (ii + ma) + 1, ma, work);
          b_A->data[ii] = smax;
        }

        for (nmi = ip1; nmi <= n; nmi++) {
          minmana = i + (nmi - 1) * ma;
          d = vn1->data[nmi - 1];
          if (d != 0.0) {
            smax = fabs(b_A->data[minmana]) / d;
            smax = 1.0 - smax * smax;
            if (smax < 0.0) {
              smax = 0.0;
            }

            s = d / vn2->data[nmi - 1];
            s = smax * (s * s);
            if (s <= 1.4901161193847656E-8) {
              if (i + 1 < m) {
                d = xnrm2(mmi - 1, b_A, minmana + 2);
                vn1->data[nmi - 1] = d;
                vn2->data[nmi - 1] = d;
              } else {
                vn1->data[nmi - 1] = 0.0;
                vn2->data[nmi - 1] = 0.0;
              }
            } else {
              vn1->data[nmi - 1] = d * sqrt(smax);
            }
          }
        }
      }
    }
  }

  if (guard1) {
    pvt = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = A->size[1];
    emxEnsureCapacity_int32_T(jpvt, pvt);
    minmana = A->size[1];
    for (pvt = 0; pvt < minmana; pvt++) {
      jpvt->data[pvt] = 0;
    }

    for (nmi = 0; nmi < n; nmi++) {
      jpvt->data[nmi] = nmi + 1;
    }
  }

  emxFree_real_T(&vn2);
  emxFree_real_T(&vn1);
  emxFree_real_T(&work);
  ii = 0;
  if (b_A->size[0] < b_A->size[1]) {
    minmn = b_A->size[0];
    minmana = b_A->size[1];
  } else {
    minmn = b_A->size[1];
    minmana = b_A->size[0];
  }

  if (minmn > 0) {
    smax = fmin(1.4901161193847656E-8, 2.2204460492503131E-15 * (double)minmana)
      * fabs(b_A->data[0]);
    while ((ii < minmn) && (!(fabs(b_A->data[ii + b_A->size[0] * ii]) <= smax)))
    {
      ii++;
    }
  }

  emxInit_real_T(&b_B, 2);
  pvt = b_B->size[0] * b_B->size[1];
  b_B->size[0] = B->size[0];
  b_B->size[1] = B->size[1];
  emxEnsureCapacity_real_T(b_B, pvt);
  minmana = B->size[0] * B->size[1];
  for (pvt = 0; pvt < minmana; pvt++) {
    b_B->data[pvt] = B->data[pvt];
  }

  iy = B->size[1];
  pvt = Y->size[0] * Y->size[1];
  Y->size[0] = b_A->size[1];
  Y->size[1] = B->size[1];
  emxEnsureCapacity_real_T(Y, pvt);
  minmana = b_A->size[1] * B->size[1];
  for (pvt = 0; pvt < minmana; pvt++) {
    Y->data[pvt] = 0.0;
  }

  m = b_A->size[0];
  minmana = B->size[1];
  pvt = b_A->size[0];
  ix = b_A->size[1];
  if (pvt < ix) {
    ix = pvt;
  }

  for (nmi = 0; nmi < ix; nmi++) {
    if (tau->data[nmi] != 0.0) {
      for (k = 0; k < minmana; k++) {
        smax = b_B->data[nmi + b_B->size[0] * k];
        pvt = nmi + 2;
        for (i = pvt; i <= m; i++) {
          smax += b_A->data[(i + b_A->size[0] * nmi) - 1] * b_B->data[(i +
            b_B->size[0] * k) - 1];
        }

        smax *= tau->data[nmi];
        if (smax != 0.0) {
          b_B->data[nmi + b_B->size[0] * k] -= smax;
          pvt = nmi + 2;
          for (i = pvt; i <= m; i++) {
            b_B->data[(i + b_B->size[0] * k) - 1] -= b_A->data[(i + b_A->size[0]
              * nmi) - 1] * smax;
          }
        }
      }
    }
  }

  emxFree_real_T(&tau);
  for (k = 0; k < iy; k++) {
    for (i = 0; i < ii; i++) {
      Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] = b_B->data[i + b_B->size[0]
        * k];
    }

    for (nmi = ii; nmi >= 1; nmi--) {
      pvt = jpvt->data[nmi - 1];
      Y->data[(pvt + Y->size[0] * k) - 1] /= b_A->data[(nmi + b_A->size[0] *
        (nmi - 1)) - 1];
      for (i = 0; i <= nmi - 2; i++) {
        Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] -= Y->data[(jpvt->data[nmi
          - 1] + Y->size[0] * k) - 1] * b_A->data[i + b_A->size[0] * (nmi - 1)];
      }
    }
  }

  emxFree_real_T(&b_B);
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
}

/* End of code generation (qrsolve.c) */
