/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mkl_cblas.h"

/* Function Definitions */
void b_mtimes(const emxArray_real_T *A, const emxArray_real_T *B,
              emxArray_real_T *C)
{
  int i;
  int loop_ub;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) ||
      (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[1] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[1];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    cblas_dgemm(CblasColMajor, CblasTrans, CblasNoTrans, (MKL_INT)A->size[1],
                (MKL_INT)B->size[1], (MKL_INT)A->size[0], 1.0, &A->data[0],
                (MKL_INT)A->size[0], &B->data[0], (MKL_INT)B->size[0], 0.0,
                &C->data[0], (MKL_INT)A->size[1]);
  }
}

void mtimes(const emxArray_real_T *A, const emxArray_real_T *B,
            emxArray_real_T *C)
{
  int i;
  int loop_ub;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) ||
      (B->size[1] == 0)) {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    loop_ub = A->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C->data[i] = 0.0;
    }
  } else {
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(C, i);
    cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, (MKL_INT)A->size[0],
                (MKL_INT)B->size[1], (MKL_INT)A->size[1], 1.0, &A->data[0],
                (MKL_INT)A->size[0], &B->data[0], (MKL_INT)B->size[0], 0.0,
                &C->data[0], (MKL_INT)A->size[0]);
  }
}

/* End of code generation (mtimes.c) */
