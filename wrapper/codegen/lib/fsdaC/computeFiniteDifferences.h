/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: computeFiniteDifferences.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef COMPUTEFINITEDIFFERENCES_H
#define COMPUTEFINITEDIFFERENCES_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool computeFiniteDifferences(h_struct_T *obj,
                              const emxArray_real_T *cEqCurrent,
                              emxArray_real_T *xk, emxArray_real_T *JacCeqTrans,
                              int ldJE);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for computeFiniteDifferences.h
 *
 * [EOF]
 */
