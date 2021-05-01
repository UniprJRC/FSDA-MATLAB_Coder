/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ScoreYJ.h
 *
 * Code generation for function 'ScoreYJ'
 *
 */

#ifndef SCOREYJ_H
#define SCOREYJ_H

/* Include files */
#include "FSRfan_wrapper_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void ScoreYJ(const emxArray_real_T *y, const emxArray_real_T *X,
             double varargin_2, double outSC_Score_data[],
             int *outSC_Score_size, double *outSC_Lik);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (ScoreYJ.h) */
