/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * mrdivide_helper.c
 *
 * Code generation for function 'mrdivide_helper'
 *
 */

/* Include files */
#include "mrdivide_helper.h"
#include "addt_emxutil.h"
#include "addt_types.h"
#include "qrsolve.h"
#include "rt_nonfinite.h"
#include "xgeqp3.h"
#include <math.h>

/* Function Definitions */
void b_mrdiv(emxArray_real_T *A, const emxArray_real_T *B)
{
  emxArray_int32_T *jpvt;
  emxArray_real_T *Y;
  emxArray_real_T *b_A;
  emxArray_real_T *b_B;
  emxArray_real_T *tau;
  double s;
  double wj;
  int b_i;
  int b_nb;
  int i;
  int j;
  int jj;
  int jp1j;
  int k;
  int ldap1;
  int m;
  int mn;
  int n;
  int nb;
  int u1;
  int yk;
  emxInit_real_T(&Y, 2);
  emxInit_real_T(&b_B, 2);
  emxInit_real_T(&b_A, 2);
  emxInit_real_T(&tau, 1);
  emxInit_int32_T(&jpvt, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) ||
      ((B->size[0] == 0) || (B->size[1] == 0))) {
    yk = A->size[0];
    i = A->size[0] * A->size[1];
    A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(A, i);
    m = B->size[0];
    for (i = 0; i < m; i++) {
      for (jp1j = 0; jp1j < yk; jp1j++) {
        A->data[jp1j + A->size[0] * i] = 0.0;
      }
    }
  } else if (B->size[0] == B->size[1]) {
    n = B->size[1];
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[0];
    b_A->size[1] = B->size[1];
    emxEnsureCapacity_real_T(b_A, i);
    m = B->size[0] * B->size[1];
    for (i = 0; i < m; i++) {
      b_A->data[i] = B->data[i];
    }
    m = B->size[1];
    i = jpvt->size[0] * jpvt->size[1];
    jpvt->size[0] = 1;
    jpvt->size[1] = B->size[1];
    emxEnsureCapacity_int32_T(jpvt, i);
    jpvt->data[0] = 1;
    yk = 1;
    for (k = 2; k <= m; k++) {
      yk++;
      jpvt->data[k - 1] = yk;
    }
    ldap1 = B->size[1];
    yk = B->size[1] - 1;
    u1 = B->size[1];
    if (yk < u1) {
      u1 = yk;
    }
    for (j = 0; j < u1; j++) {
      nb = n - j;
      mn = j * (n + 1);
      jj = j * (ldap1 + 1);
      jp1j = mn + 2;
      if (nb < 1) {
        yk = -1;
      } else {
        yk = 0;
        if (nb > 1) {
          wj = fabs(b_A->data[jj]);
          for (k = 2; k <= nb; k++) {
            s = fabs(b_A->data[(mn + k) - 1]);
            if (s > wj) {
              yk = k - 1;
              wj = s;
            }
          }
        }
      }
      if (b_A->data[jj + yk] != 0.0) {
        if (yk != 0) {
          m = j + yk;
          jpvt->data[j] = m + 1;
          for (k = 0; k < n; k++) {
            yk = k * n;
            b_nb = j + yk;
            wj = b_A->data[b_nb];
            i = m + yk;
            b_A->data[b_nb] = b_A->data[i];
            b_A->data[i] = wj;
          }
        }
        i = jj + nb;
        for (b_i = jp1j; b_i <= i; b_i++) {
          b_A->data[b_i - 1] /= b_A->data[jj];
        }
      }
      m = mn + n;
      b_nb = jj + ldap1;
      for (mn = 0; mn <= nb - 2; mn++) {
        yk = m + mn * n;
        wj = b_A->data[yk];
        if (b_A->data[yk] != 0.0) {
          i = b_nb + 2;
          jp1j = nb + b_nb;
          for (yk = i; yk <= jp1j; yk++) {
            b_A->data[yk - 1] += b_A->data[((jj + yk) - b_nb) - 1] * -wj;
          }
        }
        b_nb += n;
      }
    }
    nb = A->size[0];
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      for (j = 0; j < n; j++) {
        yk = nb * j - 1;
        m = n * j;
        for (k = 0; k < j; k++) {
          b_nb = nb * k;
          i = k + m;
          if (b_A->data[i] != 0.0) {
            for (b_i = 0; b_i < nb; b_i++) {
              jp1j = (b_i + yk) + 1;
              A->data[jp1j] -= b_A->data[i] * A->data[b_i + b_nb];
            }
          }
        }
        wj = 1.0 / b_A->data[j + m];
        for (b_i = 0; b_i < nb; b_i++) {
          i = (b_i + yk) + 1;
          A->data[i] *= wj;
        }
      }
    }
    if ((A->size[0] != 0) && (A->size[1] != 0)) {
      for (j = n; j >= 1; j--) {
        yk = nb * (j - 1) - 1;
        m = n * (j - 1) - 1;
        i = j + 1;
        for (k = i; k <= n; k++) {
          b_nb = nb * (k - 1);
          jp1j = k + m;
          if (b_A->data[jp1j] != 0.0) {
            for (b_i = 0; b_i < nb; b_i++) {
              mn = (b_i + yk) + 1;
              A->data[mn] -= b_A->data[jp1j] * A->data[b_i + b_nb];
            }
          }
        }
      }
    }
    i = B->size[1] - 1;
    for (j = i; j >= 1; j--) {
      jp1j = jpvt->data[j - 1];
      if (jp1j != j) {
        for (b_i = 0; b_i < nb; b_i++) {
          wj = A->data[b_i + A->size[0] * (j - 1)];
          A->data[b_i + A->size[0] * (j - 1)] =
              A->data[b_i + A->size[0] * (jp1j - 1)];
          A->data[b_i + A->size[0] * (jp1j - 1)] = wj;
        }
      }
    }
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = A->size[1];
    b_B->size[1] = A->size[0];
    emxEnsureCapacity_real_T(b_B, i);
    m = A->size[0];
    for (i = 0; i < m; i++) {
      yk = A->size[1];
      for (jp1j = 0; jp1j < yk; jp1j++) {
        b_B->data[jp1j + b_B->size[0] * i] = A->data[i + A->size[0] * jp1j];
      }
    }
    i = b_A->size[0] * b_A->size[1];
    b_A->size[0] = B->size[1];
    b_A->size[1] = B->size[0];
    emxEnsureCapacity_real_T(b_A, i);
    m = B->size[0];
    for (i = 0; i < m; i++) {
      yk = B->size[1];
      for (jp1j = 0; jp1j < yk; jp1j++) {
        b_A->data[jp1j + b_A->size[0] * i] = B->data[i + B->size[0] * jp1j];
      }
    }
    xgeqp3(b_A, tau, jpvt);
    jp1j = rankFromQR(b_A);
    nb = b_B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = b_A->size[1];
    Y->size[1] = b_B->size[1];
    emxEnsureCapacity_real_T(Y, i);
    m = b_A->size[1] * b_B->size[1];
    for (i = 0; i < m; i++) {
      Y->data[i] = 0.0;
    }
    m = b_A->size[0];
    b_nb = b_B->size[1];
    yk = b_A->size[0];
    mn = b_A->size[1];
    if (yk < mn) {
      mn = yk;
    }
    for (j = 0; j < mn; j++) {
      if (tau->data[j] != 0.0) {
        for (k = 0; k < b_nb; k++) {
          wj = b_B->data[j + b_B->size[0] * k];
          i = j + 2;
          for (b_i = i; b_i <= m; b_i++) {
            wj += b_A->data[(b_i + b_A->size[0] * j) - 1] *
                  b_B->data[(b_i + b_B->size[0] * k) - 1];
          }
          wj *= tau->data[j];
          if (wj != 0.0) {
            b_B->data[j + b_B->size[0] * k] -= wj;
            i = j + 2;
            for (b_i = i; b_i <= m; b_i++) {
              b_B->data[(b_i + b_B->size[0] * k) - 1] -=
                  b_A->data[(b_i + b_A->size[0] * j) - 1] * wj;
            }
          }
        }
      }
    }
    for (k = 0; k < nb; k++) {
      for (b_i = 0; b_i < jp1j; b_i++) {
        Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] =
            b_B->data[b_i + b_B->size[0] * k];
      }
      for (j = jp1j; j >= 1; j--) {
        i = jpvt->data[j - 1];
        Y->data[(i + Y->size[0] * k) - 1] /=
            b_A->data[(j + b_A->size[0] * (j - 1)) - 1];
        for (b_i = 0; b_i <= j - 2; b_i++) {
          Y->data[(jpvt->data[b_i] + Y->size[0] * k) - 1] -=
              Y->data[(jpvt->data[j - 1] + Y->size[0] * k) - 1] *
              b_A->data[b_i + b_A->size[0] * (j - 1)];
        }
      }
    }
    i = A->size[0] * A->size[1];
    A->size[0] = Y->size[1];
    A->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(A, i);
    m = Y->size[0];
    for (i = 0; i < m; i++) {
      yk = Y->size[1];
      for (jp1j = 0; jp1j < yk; jp1j++) {
        A->data[jp1j + A->size[0] * i] = Y->data[i + Y->size[0] * jp1j];
      }
    }
  }
  emxFree_int32_T(&jpvt);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emxFree_real_T(&b_B);
  emxFree_real_T(&Y);
}

void mrdiv(const emxArray_real_T *A, const double B_data[], const int B_size[2],
           emxArray_real_T *Y)
{
  emxArray_real_T *tau;
  double B;
  int i;
  int loop_ub;
  emxInit_real_T(&tau, 1);
  if ((A->size[0] == 0) || (B_size[0] == 0)) {
    i = Y->size[0] * Y->size[1];
    Y->size[0] = A->size[0];
    Y->size[1] = B_size[0];
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = A->size[0] * B_size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else {
    B = B_data[0];
    loop_ub = A->size[0];
    i = tau->size[0];
    tau->size[0] = A->size[0];
    emxEnsureCapacity_real_T(tau, i);
    for (i = 0; i < loop_ub; i++) {
      tau->data[i] = A->data[i] / B;
    }
    i = Y->size[0] * Y->size[1];
    Y->size[0] = tau->size[0];
    Y->size[1] = 1;
    emxEnsureCapacity_real_T(Y, i);
    loop_ub = tau->size[0];
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = tau->data[i];
    }
  }
  emxFree_real_T(&tau);
}

/* End of code generation (mrdivide_helper.c) */
