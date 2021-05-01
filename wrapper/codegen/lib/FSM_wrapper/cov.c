/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cov.c
 *
 * Code generation for function 'cov'
 *
 */

/* Include files */
#include "cov.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mkl_cblas.h"

/* Function Definitions */
void cov(const emxArray_real_T *x, emxArray_real_T *xy)
{
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  double c;
  double muj;
  int LDA;
  int i;
  int m;
  int n;
  if (x->size[0] == 1) {
    emxInit_real_T(&c_x, 1);
    LDA = x->size[1];
    i = c_x->size[0];
    c_x->size[0] = x->size[1];
    emxEnsureCapacity_real_T(c_x, i);
    for (i = 0; i < LDA; i++) {
      c_x->data[i] = x->data[x->size[0] * i];
    }
    m = c_x->size[0];
    c = 0.0;
    if (c_x->size[0] == 0) {
      c = rtNaN;
    } else {
      LDA = c_x->size[0];
      if (c_x->size[0] >= 2) {
        n = c_x->size[0];
        muj = 0.0;
        for (i = 0; i < m; i++) {
          muj += c_x->data[i];
        }
        muj /= (double)c_x->size[0];
        for (i = 0; i < m; i++) {
          c_x->data[i] -= muj;
        }
        cblas_dgemm(CblasColMajor, CblasConjTrans, CblasNoTrans, (MKL_INT)1,
                    (MKL_INT)1, (MKL_INT)m, 1.0 / ((double)n - 1.0),
                    &c_x->data[0], (MKL_INT)LDA, &c_x->data[0], (MKL_INT)LDA,
                    0.0, &c, (MKL_INT)1);
      }
    }
    emxFree_real_T(&c_x);
    i = xy->size[0] * xy->size[1];
    xy->size[0] = 1;
    xy->size[1] = 1;
    emxEnsureCapacity_real_T(xy, i);
    xy->data[0] = c;
  } else {
    emxInit_real_T(&b_x, 2);
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(b_x, i);
    LDA = x->size[0] * x->size[1];
    for (i = 0; i < LDA; i++) {
      b_x->data[i] = x->data[i];
    }
    m = x->size[0];
    n = x->size[1];
    i = xy->size[0] * xy->size[1];
    xy->size[0] = x->size[1];
    xy->size[1] = x->size[1];
    emxEnsureCapacity_real_T(xy, i);
    LDA = x->size[1] * x->size[1];
    for (i = 0; i < LDA; i++) {
      xy->data[i] = 0.0;
    }
    if ((x->size[0] == 0) || (x->size[1] == 0)) {
      i = xy->size[0] * xy->size[1];
      xy->size[0] = x->size[1];
      xy->size[1] = x->size[1];
      emxEnsureCapacity_real_T(xy, i);
      LDA = x->size[1] * x->size[1];
      for (i = 0; i < LDA; i++) {
        xy->data[i] = rtNaN;
      }
    } else if (x->size[0] >= 2) {
      for (LDA = 0; LDA < n; LDA++) {
        muj = 0.0;
        for (i = 0; i < m; i++) {
          muj += b_x->data[i + b_x->size[0] * LDA];
        }
        muj /= (double)m;
        for (i = 0; i < m; i++) {
          b_x->data[i + b_x->size[0] * LDA] -= muj;
        }
      }
      i = xy->size[0] * xy->size[1];
      xy->size[0] = x->size[1];
      xy->size[1] = x->size[1];
      emxEnsureCapacity_real_T(xy, i);
      LDA = x->size[1] * x->size[1];
      for (i = 0; i < LDA; i++) {
        xy->data[i] = 0.0;
      }
      cblas_dgemm(CblasColMajor, CblasConjTrans, CblasNoTrans,
                  (MKL_INT)x->size[1], (MKL_INT)x->size[1], (MKL_INT)x->size[0],
                  1.0 / ((double)x->size[0] - 1.0), &b_x->data[0],
                  (MKL_INT)x->size[0], &b_x->data[0], (MKL_INT)x->size[0], 0.0,
                  &xy->data[0], (MKL_INT)x->size[1]);
    }
    emxFree_real_T(&b_x);
  }
}

/* End of code generation (cov.c) */
