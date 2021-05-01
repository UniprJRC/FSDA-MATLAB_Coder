/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * scanfornan.c
 *
 * Code generation for function 'scanfornan'
 *
 */

/* Include files */
#include "scanfornan.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void scanfornan(const emxArray_real_T *X, double nx, emxArray_boolean_T *nanobs)
{
  int i;
  int loop_ub_tmp;
  int qq;
  i = nanobs->size[0] * nanobs->size[1];
  nanobs->size[0] = 1;
  loop_ub_tmp = (int)nx;
  nanobs->size[1] = (int)nx;
  emxEnsureCapacity_boolean_T(nanobs, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    nanobs->data[i] = true;
  }
  loop_ub_tmp = (int)nx - 1;
#pragma omp parallel for num_threads(omp_get_max_threads())

  for (qq = 0; qq <= loop_ub_tmp; qq++) {
    if (rtIsNaN(X->data[qq])) {
      nanobs->data[qq] = false;
    }
  }
}

/* End of code generation (scanfornan.c) */
