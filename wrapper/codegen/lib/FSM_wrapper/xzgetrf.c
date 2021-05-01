/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgetrf.c
 *
 * Code generation for function 'xzgetrf'
 *
 */

/* Include files */
#include "xzgetrf.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mkl_cblas.h"

/* Function Definitions */
void xzgetrf(int m, int n, emxArray_real_T *A, int lda, emxArray_int32_T *ipiv,
             int *info)
{
  MKL_INT idxmax_t;
  double temp;
  int b_n;
  int b_tmp;
  int i;
  int j;
  int jp1j;
  int k;
  int mmj;
  int temp_tmp;
  int u0;
  int yk;
  if (m < n) {
    yk = m;
  } else {
    yk = n;
  }
  if (yk < 1) {
    b_n = 0;
  } else {
    b_n = yk;
  }
  i = ipiv->size[0] * ipiv->size[1];
  ipiv->size[0] = 1;
  ipiv->size[1] = b_n;
  emxEnsureCapacity_int32_T(ipiv, i);
  if (b_n > 0) {
    ipiv->data[0] = 1;
    yk = 1;
    for (k = 2; k <= b_n; k++) {
      yk++;
      ipiv->data[k - 1] = yk;
    }
  }
  *info = 0;
  if ((m >= 1) && (n >= 1)) {
    u0 = m - 1;
    if (u0 >= n) {
      u0 = n;
    }
    for (j = 0; j < u0; j++) {
      mmj = m - j;
      b_tmp = j * (lda + 1);
      jp1j = b_tmp + 2;
      if (mmj < 1) {
        yk = -1;
      } else {
        idxmax_t = cblas_idamax((MKL_INT)mmj, &A->data[b_tmp], (MKL_INT)1);
        yk = (int)idxmax_t;
      }
      if (A->data[b_tmp + yk] != 0.0) {
        if (yk != 0) {
          b_n = j + yk;
          ipiv->data[j] = b_n + 1;
          for (k = 0; k < n; k++) {
            yk = k * lda;
            temp_tmp = j + yk;
            temp = A->data[temp_tmp];
            i = b_n + yk;
            A->data[temp_tmp] = A->data[i];
            A->data[i] = temp;
          }
        }
        i = b_tmp + mmj;
        for (yk = jp1j; yk <= i; yk++) {
          A->data[yk - 1] /= A->data[b_tmp];
        }
      } else {
        *info = j + 1;
      }
      b_n = (n - j) - 1;
      if ((mmj - 1 >= 1) && (b_n >= 1)) {
        cblas_dger(CblasColMajor, (MKL_INT)(mmj - 1), (MKL_INT)b_n, -1.0,
                   &A->data[b_tmp + 1], (MKL_INT)1, &A->data[b_tmp + lda],
                   (MKL_INT)lda, &A->data[(b_tmp + lda) + 1], (MKL_INT)lda);
      }
    }
    if ((*info == 0) && (m <= n) &&
        (!(A->data[(m + A->size[0] * (m - 1)) - 1] != 0.0))) {
      *info = m;
    }
  }
}

/* End of code generation (xzgetrf.c) */
