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
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include "mkl_cblas.h"
#include <math.h>

/* Function Definitions */
void xgeqp3(emxArray_real_T *A, emxArray_real_T *tau, emxArray_int32_T *jpvt)
{
  MKL_INT idxmax_t;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  emxArray_real_T *work;
  double d;
  double temp;
  double temp2;
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
  bool guard1 = false;
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
  emxInit_real_T(&work, 1);
  emxInit_real_T(&vn1, 1);
  emxInit_real_T(&vn2, 1);
  guard1 = false;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    guard1 = true;
  } else {
    u0 = A->size[0];
    minmana = A->size[1];
    if (u0 < minmana) {
      minmana = u0;
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
      for (k = 0; k < n; k++) {
        jpvt->data[k] = k + 1;
      }
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
      for (u0 = 0; u0 < n; u0++) {
        if (m < 1) {
          d = 0.0;
          vn1->data[u0] = 0.0;
        } else {
          d = cblas_dnrm2((MKL_INT)m, &A->data[u0 * ma], (MKL_INT)1);
          vn1->data[u0] = d;
        }
        vn2->data[u0] = d;
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
          idxmax_t = cblas_idamax((MKL_INT)nmi, &vn1->data[b_i], (MKL_INT)1);
          minmana = (int)idxmax_t;
        }
        pvt = b_i + minmana;
        if (pvt + 1 != b_i + 1) {
          minmana = pvt * ma;
          for (k = 0; k < m; k++) {
            u0 = minmana + k;
            temp = A->data[u0];
            i = ii_tmp + k;
            A->data[u0] = A->data[i];
            A->data[i] = temp;
          }
          minmana = jpvt->data[pvt];
          jpvt->data[pvt] = jpvt->data[b_i];
          jpvt->data[b_i] = minmana;
          vn1->data[pvt] = vn1->data[b_i];
          vn2->data[pvt] = vn2->data[b_i];
        }
        if (b_i + 1 < m) {
          temp = A->data[ii];
          d = xzlarfg(mmi, &temp, A, ii + 2);
          tau->data[b_i] = d;
          A->data[ii] = temp;
        } else {
          d = 0.0;
          tau->data[b_i] = 0.0;
        }
        if (b_i + 1 < n) {
          temp = A->data[ii];
          A->data[ii] = 1.0;
          xzlarf(mmi, nmi - 1, ii + 1, d, A, (ii + ma) + 1, ma, work);
          A->data[ii] = temp;
        }
        for (u0 = ip1; u0 <= n; u0++) {
          minmana = b_i + (u0 - 1) * ma;
          d = vn1->data[u0 - 1];
          if (d != 0.0) {
            temp = fabs(A->data[minmana]) / d;
            temp = 1.0 - temp * temp;
            if (temp < 0.0) {
              temp = 0.0;
            }
            temp2 = d / vn2->data[u0 - 1];
            temp2 = temp * (temp2 * temp2);
            if (temp2 <= 1.4901161193847656E-8) {
              if (b_i + 1 < m) {
                if (mmi - 1 < 1) {
                  d = 0.0;
                  vn1->data[u0 - 1] = 0.0;
                } else {
                  d = cblas_dnrm2((MKL_INT)(mmi - 1), &A->data[minmana + 1],
                                  (MKL_INT)1);
                  vn1->data[u0 - 1] = d;
                }
                vn2->data[u0 - 1] = d;
              } else {
                vn1->data[u0 - 1] = 0.0;
                vn2->data[u0 - 1] = 0.0;
              }
            } else {
              vn1->data[u0 - 1] = d * sqrt(temp);
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
    for (u0 = 0; u0 < n; u0++) {
      jpvt->data[u0] = u0 + 1;
    }
  }
  emxFree_real_T(&vn2);
  emxFree_real_T(&vn1);
  emxFree_real_T(&work);
}

/* End of code generation (xgeqp3.c) */
