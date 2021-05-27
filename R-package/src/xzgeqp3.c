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

/* Function Definitions */
void qrf(emxArray_real_T *A, int m, int n, int nfxd, emxArray_real_T *tau)
{
  emxArray_real_T *work;
  double atmp;
  int i;
  int ii;
  int lda;
  int mmi;
  emxInit_real_T(&work, 1);
  lda = A->size[0];
  mmi = work->size[0];
  work->size[0] = A->size[1];
  emxEnsureCapacity_real_T(work, mmi);
  ii = A->size[1];
  for (mmi = 0; mmi < ii; mmi++) {
    work->data[mmi] = 0.0;
  }
  for (i = 0; i < nfxd; i++) {
    ii = i * lda + i;
    mmi = m - i;
    if (i + 1 < m) {
      atmp = A->data[ii];
      tau->data[i] = xzlarfg(mmi, &atmp, A, ii + 2);
      A->data[ii] = atmp;
    } else {
      tau->data[i] = 0.0;
    }
    if (i + 1 < n) {
      atmp = A->data[ii];
      A->data[ii] = 1.0;
      xzlarf(mmi, (n - i) - 1, ii + 1, tau->data[i], A, (ii + lda) + 1, lda,
             work);
      A->data[ii] = atmp;
    }
  }
  emxFree_real_T(&work);
}

/* End of code generation (xzgeqp3.c) */
