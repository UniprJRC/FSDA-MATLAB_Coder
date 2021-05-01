/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xzlarf.c
 *
 * Code generation for function 'xzlarf'
 *
 */

/* Include files */
#include "xzlarf.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mkl_cblas.h"

/* Function Definitions */
void xzlarf(int m, int n, int iv0, double tau, emxArray_real_T *C, int ic0,
            int ldc, emxArray_real_T *work)
{
  int coltop;
  int exitg1;
  int ia;
  int lastc;
  int lastv;
  bool exitg2;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C->data[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }
    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      coltop = ic0 + (lastc - 1) * ldc;
      ia = coltop;
      do {
        exitg1 = 0;
        if (ia <= (coltop + lastv) - 1) {
          if (C->data[ia - 1] != 0.0) {
            exitg1 = 1;
          } else {
            ia++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }
  if ((lastv > 0) && (lastc >= 1)) {
    cblas_dgemv(CblasColMajor, CblasConjTrans, (MKL_INT)lastv, (MKL_INT)lastc,
                1.0, &C->data[ic0 - 1], (MKL_INT)ldc, &C->data[iv0 - 1],
                (MKL_INT)1, 0.0, &work->data[0], (MKL_INT)1);
    cblas_dger(CblasColMajor, (MKL_INT)lastv, (MKL_INT)lastc, -tau,
               &C->data[iv0 - 1], (MKL_INT)1, &work->data[0], (MKL_INT)1,
               &C->data[ic0 - 1], (MKL_INT)ldc);
  }
}

/* End of code generation (xzlarf.c) */
