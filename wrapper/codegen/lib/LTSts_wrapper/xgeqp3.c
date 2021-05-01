/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xgeqp3.c
 *
 * Code generation for function 'xgeqp3'
 *
 */

/* Include files */
#include "xgeqp3.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_rtwutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include <math.h>

/* Function Definitions */
void xgeqp3(emxArray_real_T *A, emxArray_real_T *tau, emxArray_int32_T *jpvt)
{
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  emxArray_real_T *work;
  double s;
  double smax;
  double temp2;
  int b_i;
  int exitg1;
  int i;
  int ia;
  int ii;
  int ip1;
  int j;
  int jA;
  int knt;
  int m;
  int ma;
  int minmana;
  int minmn;
  int mmi;
  int n;
  int nmi;
  int pvt;
  bool exitg2;
  bool guard1 = false;
  m = A->size[0];
  n = A->size[1];
  knt = A->size[0];
  minmana = A->size[1];
  if (knt < minmana) {
    minmana = knt;
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
  guard1 = false;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    guard1 = true;
  } else {
    knt = A->size[0];
    minmana = A->size[1];
    if (knt < minmana) {
      minmana = knt;
    }
    if (minmana < 1) {
      guard1 = true;
    } else {
      i = jpvt->size[0] * jpvt->size[1];
      jpvt->size[0] = 1;
      jpvt->size[1] = A->size[1];
      emxEnsureCapacity_int32_T(jpvt, i);
      minmana = A->size[1];
      for (i = 0; i < minmana; i++) {
        jpvt->data[i] = 0;
      }
      for (jA = 0; jA < n; jA++) {
        jpvt->data[jA] = jA + 1;
      }
      ma = A->size[0];
      knt = A->size[0];
      minmn = A->size[1];
      if (knt < minmn) {
        minmn = knt;
      }
      i = work->size[0];
      work->size[0] = A->size[1];
      emxEnsureCapacity_real_T(work, i);
      minmana = A->size[1];
      for (i = 0; i < minmana; i++) {
        work->data[i] = 0.0;
      }
      i = vn1->size[0];
      vn1->size[0] = A->size[1];
      emxEnsureCapacity_real_T(vn1, i);
      minmana = A->size[1];
      for (i = 0; i < minmana; i++) {
        vn1->data[i] = 0.0;
      }
      i = vn2->size[0];
      vn2->size[0] = A->size[1];
      emxEnsureCapacity_real_T(vn2, i);
      minmana = A->size[1];
      for (i = 0; i < minmana; i++) {
        vn2->data[i] = 0.0;
      }
      for (j = 0; j < n; j++) {
        smax = xnrm2(m, A, j * ma + 1);
        vn1->data[j] = smax;
        vn2->data[j] = smax;
      }
      for (b_i = 0; b_i < minmn; b_i++) {
        ip1 = b_i + 2;
        j = b_i * ma;
        ii = j + b_i;
        nmi = n - b_i;
        mmi = m - b_i;
        if (nmi < 1) {
          minmana = -1;
        } else {
          minmana = 0;
          if (nmi > 1) {
            smax = fabs(vn1->data[b_i]);
            for (jA = 2; jA <= nmi; jA++) {
              s = fabs(vn1->data[(b_i + jA) - 1]);
              if (s > smax) {
                minmana = jA - 1;
                smax = s;
              }
            }
          }
        }
        pvt = b_i + minmana;
        if (pvt + 1 != b_i + 1) {
          minmana = pvt * ma;
          for (jA = 0; jA < m; jA++) {
            knt = minmana + jA;
            smax = A->data[knt];
            i = j + jA;
            A->data[knt] = A->data[i];
            A->data[i] = smax;
          }
          minmana = jpvt->data[pvt];
          jpvt->data[pvt] = jpvt->data[b_i];
          jpvt->data[b_i] = minmana;
          vn1->data[pvt] = vn1->data[b_i];
          vn2->data[pvt] = vn2->data[b_i];
        }
        if (b_i + 1 < m) {
          temp2 = A->data[ii];
          minmana = ii + 2;
          tau->data[b_i] = 0.0;
          if (mmi > 0) {
            smax = xnrm2(mmi - 1, A, ii + 2);
            if (smax != 0.0) {
              s = rt_hypotd_snf(A->data[ii], smax);
              if (A->data[ii] >= 0.0) {
                s = -s;
              }
              if (fabs(s) < 1.0020841800044864E-292) {
                knt = -1;
                i = ii + mmi;
                do {
                  knt++;
                  for (jA = minmana; jA <= i; jA++) {
                    A->data[jA - 1] *= 9.9792015476736E+291;
                  }
                  s *= 9.9792015476736E+291;
                  temp2 *= 9.9792015476736E+291;
                } while (!(fabs(s) >= 1.0020841800044864E-292));
                s = rt_hypotd_snf(temp2, xnrm2(mmi - 1, A, ii + 2));
                if (temp2 >= 0.0) {
                  s = -s;
                }
                tau->data[b_i] = (s - temp2) / s;
                smax = 1.0 / (temp2 - s);
                for (jA = minmana; jA <= i; jA++) {
                  A->data[jA - 1] *= smax;
                }
                for (jA = 0; jA <= knt; jA++) {
                  s *= 1.0020841800044864E-292;
                }
                temp2 = s;
              } else {
                tau->data[b_i] = (s - A->data[ii]) / s;
                smax = 1.0 / (A->data[ii] - s);
                i = ii + mmi;
                for (jA = minmana; jA <= i; jA++) {
                  A->data[jA - 1] *= smax;
                }
                temp2 = s;
              }
            }
          }
          A->data[ii] = temp2;
        } else {
          tau->data[b_i] = 0.0;
        }
        if (b_i + 1 < n) {
          temp2 = A->data[ii];
          A->data[ii] = 1.0;
          jA = (ii + ma) + 1;
          if (tau->data[b_i] != 0.0) {
            pvt = mmi - 1;
            minmana = (ii + mmi) - 1;
            while ((pvt + 1 > 0) && (A->data[minmana] == 0.0)) {
              pvt--;
              minmana--;
            }
            knt = nmi - 2;
            exitg2 = false;
            while ((!exitg2) && (knt + 1 > 0)) {
              minmana = jA + knt * ma;
              ia = minmana;
              do {
                exitg1 = 0;
                if (ia <= minmana + pvt) {
                  if (A->data[ia - 1] != 0.0) {
                    exitg1 = 1;
                  } else {
                    ia++;
                  }
                } else {
                  knt--;
                  exitg1 = 2;
                }
              } while (exitg1 == 0);
              if (exitg1 == 1) {
                exitg2 = true;
              }
            }
          } else {
            pvt = -1;
            knt = -1;
          }
          if (pvt + 1 > 0) {
            if (knt + 1 != 0) {
              for (j = 0; j <= knt; j++) {
                work->data[j] = 0.0;
              }
              j = 0;
              i = jA + ma * knt;
              for (nmi = jA; ma < 0 ? nmi >= i : nmi <= i; nmi += ma) {
                smax = 0.0;
                minmana = nmi + pvt;
                for (ia = nmi; ia <= minmana; ia++) {
                  smax += A->data[ia - 1] * A->data[(ii + ia) - nmi];
                }
                work->data[j] += smax;
                j++;
              }
            }
            if (!(-tau->data[b_i] == 0.0)) {
              for (j = 0; j <= knt; j++) {
                if (work->data[j] != 0.0) {
                  smax = work->data[j] * -tau->data[b_i];
                  i = pvt + jA;
                  for (minmana = jA; minmana <= i; minmana++) {
                    A->data[minmana - 1] += A->data[(ii + minmana) - jA] * smax;
                  }
                }
                jA += ma;
              }
            }
          }
          A->data[ii] = temp2;
        }
        for (j = ip1; j <= n; j++) {
          minmana = b_i + (j - 1) * ma;
          smax = vn1->data[j - 1];
          if (smax != 0.0) {
            s = fabs(A->data[minmana]) / smax;
            s = 1.0 - s * s;
            if (s < 0.0) {
              s = 0.0;
            }
            temp2 = smax / vn2->data[j - 1];
            temp2 = s * (temp2 * temp2);
            if (temp2 <= 1.4901161193847656E-8) {
              if (b_i + 1 < m) {
                smax = xnrm2(mmi - 1, A, minmana + 2);
                vn1->data[j - 1] = smax;
                vn2->data[j - 1] = smax;
              } else {
                vn1->data[j - 1] = 0.0;
                vn2->data[j - 1] = 0.0;
              }
            } else {
              vn1->data[j - 1] = smax * sqrt(s);
            }
          }
        }
      }
    }
  }
  if (guard1) {
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = A->size[1];
    emxEnsureCapacity_int32_T(jpvt, i);
    minmana = A->size[1];
    for (i = 0; i < minmana; i++) {
      jpvt->data[i] = 0;
    }
    for (j = 0; j < n; j++) {
      jpvt->data[j] = j + 1;
    }
  }
  emxFree_real_T(&vn2);
  emxFree_real_T(&vn1);
  emxFree_real_T(&work);
}

/* End of code generation (xgeqp3.c) */
