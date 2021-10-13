/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzgeqp3.c
 *
 * Code generation for function 'xzgeqp3'
 *
 */

/* Include files */
#include "xzgeqp3.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xzlarf.h"
#include "xzlarfg.h"
#include <string.h>

/* Function Definitions */
void qrf(emxArray_real_T *A, int m, int n, int nfxd, emxArray_real_T *tau)
{
  emxArray_real_T *work;
  double atmp;
  double *A_data;
  double *tau_data;
  double *work_data;
  int i;
  int ii;
  int lda;
  int mmi;
  tau_data = tau->data;
  A_data = A->data;
  emxInit_real_T(&work, 1);
  lda = A->size[0];
  mmi = work->size[0];
  work->size[0] = A->size[1];
  emxEnsureCapacity_real_T(work, mmi);
  work_data = work->data;
  ii = A->size[1];
  for (mmi = 0; mmi < ii; mmi++) {
    work_data[mmi] = 0.0;
  }
  for (i = 0; i < nfxd; i++) {
    ii = i * lda + i;
    mmi = m - i;
    if (i + 1 < m) {
      atmp = A_data[ii];
      tau_data[i] = b_xzlarfg(mmi, &atmp, A, ii + 2);
      A_data = A->data;
      A_data[ii] = atmp;
    } else {
      tau_data[i] = 0.0;
    }
    if (i + 1 < n) {
      atmp = A_data[ii];
      A_data[ii] = 1.0;
      xzlarf(mmi, (n - i) - 1, ii + 1, tau_data[i], A, (ii + lda) + 1, lda,
             work);
      A_data = A->data;
      A_data[ii] = atmp;
    }
  }
  emxFree_real_T(&work);
}

/* End of code generation (xzgeqp3.c) */
