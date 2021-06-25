/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: hasFiniteBounds.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef HASFINITEBOUNDS_H
#define HASFINITEBOUNDS_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
bool hasFiniteBounds(int nvar, emxArray_boolean_T *hasLB,
                     emxArray_boolean_T *hasUB, const emxArray_real_T *lb,
                     const emxArray_real_T *ub);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for hasFiniteBounds.h
 *
 * [EOF]
 */
