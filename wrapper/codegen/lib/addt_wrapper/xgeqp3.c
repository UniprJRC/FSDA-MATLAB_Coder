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
#include "addt_wrapper_emxutil.h"
#include "addt_wrapper_types.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <math.h>

/* Function Definitions */
void xgeqp3(emxArray_real_T *A, emxArray_real_T *tau, emxArray_int32_T *jpvt)
{
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
  m = A->size[0];
  n = A->size[1];
  ix = A->size[0];
  minmana = A->size[1];
  if (ix < minmana) {
    minmana = ix;
  }

  ix = tau->size[0];
  tau->size[0] = minmana;
  emxEnsureCapacity_real_T(tau, ix);
  for (ix = 0; ix < minmana; ix++) {
    tau->data[ix] = 0.0;
  }

  emxInit_real_T(&work, 1);
  emxInit_real_T(&vn1, 1);
  emxInit_real_T(&vn2, 1);
  guard1 = false;
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    guard1 = true;
  } else {
    ix = A->size[0];
    minmana = A->size[1];
    if (ix < minmana) {
      minmana = ix;
    }

    if (minmana < 1) {
      guard1 = true;
    } else {
      ix = jpvt->size[0] * jpvt->size[1];
      jpvt->size[0] = 1;
      jpvt->size[1] = A->size[1];
      emxEnsureCapacity_int32_T(jpvt, ix);
      minmana = A->size[1];
      for (ix = 0; ix < minmana; ix++) {
        jpvt->data[ix] = 0;
      }

      for (k = 0; k < n; k++) {
        jpvt->data[k] = k + 1;
      }

      ma = A->size[0];
      ix = A->size[0];
      minmn = A->size[1];
      if (ix < minmn) {
        minmn = ix;
      }

      ix = work->size[0];
      work->size[0] = A->size[1];
      emxEnsureCapacity_real_T(work, ix);
      minmana = A->size[1];
      for (ix = 0; ix < minmana; ix++) {
        work->data[ix] = 0.0;
      }

      ix = vn1->size[0];
      vn1->size[0] = A->size[1];
      emxEnsureCapacity_real_T(vn1, ix);
      minmana = A->size[1];
      for (ix = 0; ix < minmana; ix++) {
        vn1->data[ix] = 0.0;
      }

      ix = vn2->size[0];
      vn2->size[0] = A->size[1];
      emxEnsureCapacity_real_T(vn2, ix);
      minmana = A->size[1];
      for (ix = 0; ix < minmana; ix++) {
        vn2->data[ix] = 0.0;
      }

      for (ix = 0; ix < n; ix++) {
        d = xnrm2(m, A, ix * ma + 1);
        vn1->data[ix] = d;
        vn2->data[ix] = d;
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
            smax = A->data[ix];
            A->data[ix] = A->data[iy];
            A->data[iy] = smax;
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
          smax = A->data[ii];
          d = xzlarfg(mmi, &smax, A, ii + 2);
          tau->data[i] = d;
          A->data[ii] = smax;
        } else {
          d = 0.0;
          tau->data[i] = 0.0;
        }

        if (i + 1 < n) {
          smax = A->data[ii];
          A->data[ii] = 1.0;
          xzlarf(mmi, nmi - 1, ii + 1, d, A, (ii + ma) + 1, ma, work);
          A->data[ii] = smax;
        }

        for (ix = ip1; ix <= n; ix++) {
          minmana = i + (ix - 1) * ma;
          d = vn1->data[ix - 1];
          if (d != 0.0) {
            smax = fabs(A->data[minmana]) / d;
            smax = 1.0 - smax * smax;
            if (smax < 0.0) {
              smax = 0.0;
            }

            s = d / vn2->data[ix - 1];
            s = smax * (s * s);
            if (s <= 1.4901161193847656E-8) {
              if (i + 1 < m) {
                d = xnrm2(mmi - 1, A, minmana + 2);
                vn1->data[ix - 1] = d;
                vn2->data[ix - 1] = d;
              } else {
                vn1->data[ix - 1] = 0.0;
                vn2->data[ix - 1] = 0.0;
              }
            } else {
              vn1->data[ix - 1] = d * sqrt(smax);
            }
          }
        }
      }
    }
  }

  if (guard1) {
    ix = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = A->size[1];
    emxEnsureCapacity_int32_T(jpvt, ix);
    minmana = A->size[1];
    for (ix = 0; ix < minmana; ix++) {
      jpvt->data[ix] = 0;
    }

    for (ix = 0; ix < n; ix++) {
      jpvt->data[ix] = ix + 1;
    }
  }

  emxFree_real_T(&vn2);
  emxFree_real_T(&vn1);
  emxFree_real_T(&work);
}

/* End of code generation (xgeqp3.c) */
