/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pdist.c
 *
 * Code generation for function 'pdist'
 *
 */

/* Include files */
#include "pdist.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "scanfornan.h"
#include <math.h>

/* Function Definitions */
void pdist(const emxArray_real_T *Xin, emxArray_real_T *Y)
{
  emxArray_boolean_T *logIndX;
  emxArray_real_T *X;
  emxArray_real_T *b_Xin;
  double ii;
  double qq;
  int i;
  int kk;
  int loop_ub;
  int nd;
  int nx;
  nx = Xin->size[0];
  nd = Xin->size[0] * (Xin->size[0] - 1) / 2;
  if (Xin->size[0] == 0) {
    Y->size[0] = 1;
    Y->size[1] = 0;
  } else {
    emxInit_real_T(&X, 2);
    i = X->size[0] * X->size[1];
    X->size[0] = 1;
    X->size[1] = Xin->size[0];
    emxEnsureCapacity_real_T(X, i);
    loop_ub = Xin->size[0];
    for (i = 0; i < loop_ub; i++) {
      X->data[i] = Xin->data[i];
    }
    emxInit_real_T(&b_Xin, 2);
    i = b_Xin->size[0] * b_Xin->size[1];
    b_Xin->size[0] = 1;
    b_Xin->size[1] = Xin->size[0];
    emxEnsureCapacity_real_T(b_Xin, i);
    loop_ub = Xin->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_Xin->data[i] = Xin->data[i];
    }
    emxInit_boolean_T(&logIndX, 2);
    scanfornan(b_Xin, Xin->size[0], logIndX);
    i = Y->size[0] * Y->size[1];
    Y->size[0] = 1;
    Y->size[1] = nd;
    emxEnsureCapacity_real_T(Y, i);
    emxFree_real_T(&b_Xin);
    for (i = 0; i < nd; i++) {
      Y->data[i] = rtNaN;
    }
    nd--;
#pragma omp parallel for num_threads(omp_get_max_threads()) private(qq, ii)

    for (kk = 0; kk <= nd; kk++) {
      ii = (((double)nx - 2.0) -
            floor(sqrt((-8.0 * (((double)kk + 1.0) - 1.0) +
                        4.0 * (double)nx * ((double)nx - 1.0)) -
                       7.0) /
                      2.0 -
                  0.5)) +
           1.0;
      qq = (double)nx - ii;
      qq = ((((double)kk + 1.0) + ii) - (double)nx * ((double)nx - 1.0) / 2.0) +
           qq * (qq + 1.0) / 2.0;
      if (logIndX->data[(int)ii - 1] && logIndX->data[(int)qq - 1]) {
        qq = fabs(X->data[(int)ii - 1] - X->data[(int)qq - 1]);
        Y->data[kk] = qq;
      }
    }
    emxFree_boolean_T(&logIndX);
    emxFree_real_T(&X);
  }
}

/* End of code generation (pdist.c) */
