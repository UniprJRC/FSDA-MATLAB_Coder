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
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_types.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void xzgetrf(int m, int n, emxArray_real_T *A, int lda, emxArray_int32_T *ipiv,
             int *info)
{
  double s;
  double smax;
  int b_n;
  int b_tmp;
  int i;
  int ipiv_tmp;
  int j;
  int jA;
  int jp1j;
  int k;
  int mmj;
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
        yk = 0;
        if (mmj > 1) {
          smax = fabs(A->data[b_tmp]);
          for (k = 2; k <= mmj; k++) {
            s = fabs(A->data[(b_tmp + k) - 1]);
            if (s > smax) {
              yk = k - 1;
              smax = s;
            }
          }
        }
      }
      if (A->data[b_tmp + yk] != 0.0) {
        if (yk != 0) {
          ipiv_tmp = j + yk;
          ipiv->data[j] = ipiv_tmp + 1;
          for (k = 0; k < n; k++) {
            yk = k * lda;
            jA = j + yk;
            smax = A->data[jA];
            i = ipiv_tmp + yk;
            A->data[jA] = A->data[i];
            A->data[i] = smax;
          }
        }
        i = b_tmp + mmj;
        for (yk = jp1j; yk <= i; yk++) {
          A->data[yk - 1] /= A->data[b_tmp];
        }
      } else {
        *info = j + 1;
      }
      b_n = n - j;
      ipiv_tmp = b_tmp + lda;
      jA = ipiv_tmp;
      for (k = 0; k <= b_n - 2; k++) {
        yk = ipiv_tmp + k * lda;
        smax = A->data[yk];
        if (A->data[yk] != 0.0) {
          i = jA + 2;
          yk = mmj + jA;
          for (jp1j = i; jp1j <= yk; jp1j++) {
            A->data[jp1j - 1] += A->data[((b_tmp + jp1j) - jA) - 1] * -smax;
          }
        }
        jA += lda;
      }
    }
    if ((*info == 0) && (m <= n) &&
        (!(A->data[(m + A->size[0] * (m - 1)) - 1] != 0.0))) {
      *info = m;
    }
  }
}

/* End of code generation (xzgetrf.c) */
