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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void xgeqp3(emxArray_real_T *A, emxArray_real_T *tau, emxArray_int32_T *jpvt)
{
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  emxArray_real_T *work;
  double d;
  double s;
  double smax;
  double *A_data;
  double *tau_data;
  double *vn2_data;
  double *work_data;
  int b_i;
  int i;
  int ii;
  int ii_tmp;
  int ip1;
  int k;
  int m;
  int ma;
  int minmana;
  int minmn;
  int mmi;
  int n;
  int nmi;
  int pvt;
  int u0;
  int *jpvt_data;
  bool guard1 = false;
  A_data = A->data;
  m = A->size[0];
  n = A->size[1];
  u0 = A->size[0];
  minmana = A->size[1];
  if (u0 <= minmana) {
    minmana = u0;
  }
  i = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, i);
  tau_data = tau->data;
  for (i = 0; i < minmana; i++) {
    tau_data[i] = 0.0;
  }
  emxInit_real_T(&work, 1);
  emxInit_real_T(&vn1, 1);
  emxInit_real_T(&vn2, 1);
  guard1 = false;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    guard1 = true;
  } else {
    u0 = A->size[0];
    minmana = A->size[1];
    if (u0 <= minmana) {
      minmana = u0;
    }
    if (minmana < 1) {
      guard1 = true;
    } else {
      i = jpvt->size[0] * jpvt->size[1];
      jpvt->size[0] = 1;
      jpvt->size[1] = A->size[1];
      emxEnsureCapacity_int32_T(jpvt, i);
      jpvt_data = jpvt->data;
      minmana = A->size[1];
      for (i = 0; i < minmana; i++) {
        jpvt_data[i] = 0;
      }
      for (k = 0; k < n; k++) {
        jpvt_data[k] = k + 1;
      }
      ma = A->size[0];
      u0 = A->size[0];
      minmn = A->size[1];
      if (u0 <= minmn) {
        minmn = u0;
      }
      i = work->size[0];
      work->size[0] = A->size[1];
      emxEnsureCapacity_real_T(work, i);
      work_data = work->data;
      minmana = A->size[1];
      for (i = 0; i < minmana; i++) {
        work_data[i] = 0.0;
      }
      i = vn1->size[0];
      vn1->size[0] = A->size[1];
      emxEnsureCapacity_real_T(vn1, i);
      work_data = vn1->data;
      minmana = A->size[1];
      for (i = 0; i < minmana; i++) {
        work_data[i] = 0.0;
      }
      i = vn2->size[0];
      vn2->size[0] = A->size[1];
      emxEnsureCapacity_real_T(vn2, i);
      vn2_data = vn2->data;
      minmana = A->size[1];
      for (i = 0; i < minmana; i++) {
        vn2_data[i] = 0.0;
      }
      for (u0 = 0; u0 < n; u0++) {
        d = xnrm2(m, A, u0 * ma + 1);
        work_data[u0] = d;
        vn2_data[u0] = d;
      }
      for (b_i = 0; b_i < minmn; b_i++) {
        ip1 = b_i + 2;
        ii_tmp = b_i * ma;
        ii = ii_tmp + b_i;
        nmi = n - b_i;
        mmi = m - b_i;
        if (nmi < 1) {
          minmana = -1;
        } else {
          minmana = 0;
          if (nmi > 1) {
            smax = fabs(work_data[b_i]);
            for (k = 2; k <= nmi; k++) {
              s = fabs(work_data[(b_i + k) - 1]);
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
            smax = A_data[u0];
            i = ii_tmp + k;
            A_data[u0] = A_data[i];
            A_data[i] = smax;
          }
          minmana = jpvt_data[pvt];
          jpvt_data[pvt] = jpvt_data[b_i];
          jpvt_data[b_i] = minmana;
          work_data[pvt] = work_data[b_i];
          vn2_data[pvt] = vn2_data[b_i];
        }
        if (b_i + 1 < m) {
          smax = A_data[ii];
          d = b_xzlarfg(mmi, &smax, A, ii + 2);
          A_data = A->data;
          tau_data[b_i] = d;
          A_data[ii] = smax;
        } else {
          d = 0.0;
          tau_data[b_i] = 0.0;
        }
        if (b_i + 1 < n) {
          smax = A_data[ii];
          A_data[ii] = 1.0;
          xzlarf(mmi, nmi - 1, ii + 1, d, A, (ii + ma) + 1, ma, work);
          A_data = A->data;
          A_data[ii] = smax;
        }
        for (u0 = ip1; u0 <= n; u0++) {
          minmana = b_i + (u0 - 1) * ma;
          d = work_data[u0 - 1];
          if (d != 0.0) {
            smax = fabs(A_data[minmana]) / d;
            smax = 1.0 - smax * smax;
            if (smax < 0.0) {
              smax = 0.0;
            }
            s = d / vn2_data[u0 - 1];
            s = smax * (s * s);
            if (s <= 1.4901161193847656E-8) {
              if (b_i + 1 < m) {
                d = xnrm2(mmi - 1, A, minmana + 2);
                work_data[u0 - 1] = d;
                vn2_data[u0 - 1] = d;
              } else {
                work_data[u0 - 1] = 0.0;
                vn2_data[u0 - 1] = 0.0;
              }
            } else {
              work_data[u0 - 1] = d * sqrt(smax);
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
    jpvt_data = jpvt->data;
    minmana = A->size[1];
    for (i = 0; i < minmana; i++) {
      jpvt_data[i] = 0;
    }
    for (u0 = 0; u0 < n; u0++) {
      jpvt_data[u0] = u0 + 1;
    }
  }
  emxFree_real_T(&vn2);
  emxFree_real_T(&vn1);
  emxFree_real_T(&work);
}

/* End of code generation (xgeqp3.c) */
