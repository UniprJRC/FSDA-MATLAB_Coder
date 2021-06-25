/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: checkStoppingCriteria.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef CHECKSTOPPINGCRITERIA_H
#define CHECKSTOPPINGCRITERIA_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
int b_checkStoppingCriteria(double options_MaxFunctionEvaluations,
                            const emxArray_real_T *gradf, double relFactor,
                            double funDiff, const emxArray_real_T *x,
                            const emxArray_real_T *dx, int funcCount,
                            bool stepSuccessful, int *iter,
                            double projSteepestDescentInfNorm,
                            bool b_hasFiniteBounds);

int checkStoppingCriteria(double options_MaxFunctionEvaluations,
                          const emxArray_real_T *gradf, double relFactor,
                          const emxArray_real_T *x, const emxArray_real_T *dx,
                          int funcCount, double projSteepestDescentInfNorm,
                          bool b_hasFiniteBounds);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for checkStoppingCriteria.h
 *
 * [EOF]
 */
