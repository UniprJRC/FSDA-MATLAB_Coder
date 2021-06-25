/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chol.c
 *
 * Code generation for function 'chol'
 *
 */

/* Include files */
#include "chol.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
int cholesky(emxArray_real_T *A)
{
  double c;
  double ssq;
  int b_info;
  int i;
  int i1;
  int ia;
  int ia0;
  int iac;
  int idxA1j;
  int idxAjj;
  int info;
  int j;
  int jmax;
  int n;
  int nmj;
  bool exitg1;
  n = A->size[1];
  info = 0;
  if (A->size[1] != 0) {
    b_info = -1;
    j = 0;
    exitg1 = false;
    while ((!exitg1) && (j <= n - 1)) {
      idxA1j = j * n;
      idxAjj = idxA1j + j;
      ssq = 0.0;
      if (j >= 1) {
        for (nmj = 0; nmj < j; nmj++) {
          jmax = idxA1j + nmj;
          ssq += A->data[jmax] * A->data[jmax];
        }
      }
      ssq = A->data[idxAjj] - ssq;
      if (ssq > 0.0) {
        ssq = sqrt(ssq);
        A->data[idxAjj] = ssq;
        if (j + 1 < n) {
          nmj = (n - j) - 2;
          ia0 = (idxA1j + n) + 1;
          idxAjj += n;
          if ((j != 0) && (nmj + 1 != 0)) {
            jmax = idxAjj;
            i = ia0 + n * nmj;
            for (iac = ia0; n < 0 ? iac >= i : iac <= i; iac += n) {
              c = 0.0;
              i1 = (iac + j) - 1;
              for (ia = iac; ia <= i1; ia++) {
                c += A->data[ia - 1] * A->data[(idxA1j + ia) - iac];
              }
              A->data[jmax] += -c;
              jmax += n;
            }
          }
          ssq = 1.0 / ssq;
          i = (idxAjj + n * nmj) + 1;
          for (nmj = idxAjj + 1; n < 0 ? nmj >= i : nmj <= i; nmj += n) {
            A->data[nmj - 1] *= ssq;
          }
        }
        j++;
      } else {
        A->data[idxAjj] = ssq;
        b_info = j;
        exitg1 = true;
      }
    }
    info = b_info + 1;
    if (b_info + 1 == 0) {
      jmax = n;
    } else {
      jmax = b_info;
    }
    for (j = 0; j < jmax; j++) {
      i = j + 2;
      for (idxAjj = i; idxAjj <= jmax; idxAjj++) {
        A->data[(idxAjj + A->size[0] * j) - 1] = 0.0;
      }
    }
    if (1 > jmax) {
      idxAjj = 0;
      jmax = 0;
    } else {
      idxAjj = jmax;
    }
    for (i = 0; i < jmax; i++) {
      for (i1 = 0; i1 < idxAjj; i1++) {
        A->data[i1 + idxAjj * i] = A->data[i1 + A->size[0] * i];
      }
    }
    i = A->size[0] * A->size[1];
    A->size[0] = idxAjj;
    A->size[1] = jmax;
    emxEnsureCapacity_real_T(A, i);
  }
  return info;
}

/* End of code generation (chol.c) */
