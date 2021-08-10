/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * jacobianFiniteDifference.c
 *
 * Code generation for function 'jacobianFiniteDifference'
 *
 */

/* Include files */
#include "jacobianFiniteDifference.h"
#include "computeFiniteDifferences.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
bool b_jacobianFiniteDifference(emxArray_real_T *augJacobian,
                                const emxArray_real_T *fCurrent, int *funcCount,
                                const emxArray_real_T *x,
                                const char options_FiniteDifferenceType[7],
                                const h_struct_T *FiniteDifferences)
{
  static const char b_cv[7] = {'f', 'o', 'r', 'w', 'a', 'r', 'd'};
  static const char cv1[7] = {'c', 'e', 'n', 't', 'r', 'a', 'l'};
  emxArray_real_T *JacCeqTrans;
  emxArray_real_T *a__3;
  h_struct_T b_FiniteDifferences;
  int b_loop_ub;
  int exitg1;
  int i;
  int i1;
  int loop_ub;
  bool b_bool;
  bool evalOK;
  emxInit_real_T(&JacCeqTrans, 2);
  emxInit_real_T(&a__3, 1);
  emxInitStruct_struct_T3(&b_FiniteDifferences);
  i = JacCeqTrans->size[0] * JacCeqTrans->size[1];
  JacCeqTrans->size[0] = x->size[0];
  JacCeqTrans->size[1] = fCurrent->size[0];
  emxEnsureCapacity_real_T(JacCeqTrans, i);
  i = a__3->size[0];
  a__3->size[0] = x->size[0];
  emxEnsureCapacity_real_T(a__3, i);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    a__3->data[i] = x->data[i];
  }
  emxCopyStruct_struct_T(&b_FiniteDifferences, FiniteDifferences);
  evalOK = computeFiniteDifferences(&b_FiniteDifferences, fCurrent, a__3,
                                    JacCeqTrans, x->size[0]);
  b_bool = false;
  loop_ub = 0;
  emxFree_real_T(&a__3);
  do {
    exitg1 = 0;
    if (loop_ub < 7) {
      if (cv[(unsigned char)options_FiniteDifferenceType[loop_ub]] !=
          cv[(int)b_cv[loop_ub]]) {
        exitg1 = 1;
      } else {
        loop_ub++;
      }
    } else {
      b_bool = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  if (b_bool) {
    *funcCount += b_FiniteDifferences.numEvals;
  } else {
    b_bool = false;
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 7) {
        if (cv[(unsigned char)options_FiniteDifferenceType[loop_ub]] !=
            cv[(int)cv1[loop_ub]]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    if (b_bool) {
      *funcCount += b_FiniteDifferences.numEvals;
    }
  }
  loop_ub = JacCeqTrans->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = JacCeqTrans->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      augJacobian->data[i1 + augJacobian->size[0] * i] =
          JacCeqTrans->data[i + JacCeqTrans->size[0] * i1];
    }
  }
  emxFree_real_T(&JacCeqTrans);
  emxFreeStruct_struct_T5(&b_FiniteDifferences);
  return evalOK;
}

void jacobianFiniteDifference(emxArray_real_T *augJacobian,
                              const emxArray_real_T *fCurrent,
                              const emxArray_real_T *x,
                              const char options_FiniteDifferenceType[7],
                              h_struct_T *FiniteDifferences, int *funcCount,
                              bool *evalOK)
{
  static const char b_cv[7] = {'f', 'o', 'r', 'w', 'a', 'r', 'd'};
  static const char cv1[7] = {'c', 'e', 'n', 't', 'r', 'a', 'l'};
  emxArray_real_T *JacCeqTrans;
  emxArray_real_T *a__3;
  h_struct_T b_FiniteDifferences;
  int b_loop_ub;
  int exitg1;
  int i;
  int i1;
  int loop_ub;
  bool b_bool;
  emxInit_real_T(&JacCeqTrans, 2);
  emxInit_real_T(&a__3, 1);
  emxInitStruct_struct_T3(&b_FiniteDifferences);
  *funcCount = 1;
  i = JacCeqTrans->size[0] * JacCeqTrans->size[1];
  JacCeqTrans->size[0] = x->size[0];
  JacCeqTrans->size[1] = fCurrent->size[0];
  emxEnsureCapacity_real_T(JacCeqTrans, i);
  i = a__3->size[0];
  a__3->size[0] = x->size[0];
  emxEnsureCapacity_real_T(a__3, i);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    a__3->data[i] = x->data[i];
  }
  emxCopyStruct_struct_T(&b_FiniteDifferences, FiniteDifferences);
  *evalOK = computeFiniteDifferences(&b_FiniteDifferences, fCurrent, a__3,
                                     JacCeqTrans, x->size[0]);
  emxCopyStruct_struct_T(FiniteDifferences, &b_FiniteDifferences);
  b_bool = false;
  loop_ub = 0;
  emxFree_real_T(&a__3);
  do {
    exitg1 = 0;
    if (loop_ub < 7) {
      if (cv[(unsigned char)options_FiniteDifferenceType[loop_ub]] !=
          cv[(int)b_cv[loop_ub]]) {
        exitg1 = 1;
      } else {
        loop_ub++;
      }
    } else {
      b_bool = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  if (b_bool) {
    *funcCount = b_FiniteDifferences.numEvals + 1;
  } else {
    b_bool = false;
    loop_ub = 0;
    do {
      exitg1 = 0;
      if (loop_ub < 7) {
        if (cv[(unsigned char)options_FiniteDifferenceType[loop_ub]] !=
            cv[(int)cv1[loop_ub]]) {
          exitg1 = 1;
        } else {
          loop_ub++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    if (b_bool) {
      *funcCount = b_FiniteDifferences.numEvals + 1;
    }
  }
  loop_ub = JacCeqTrans->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = JacCeqTrans->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      augJacobian->data[i1 + augJacobian->size[0] * i] =
          JacCeqTrans->data[i + JacCeqTrans->size[0] * i1];
    }
  }
  emxFree_real_T(&JacCeqTrans);
  emxFreeStruct_struct_T5(&b_FiniteDifferences);
}

/* End of code generation (jacobianFiniteDifference.c) */
