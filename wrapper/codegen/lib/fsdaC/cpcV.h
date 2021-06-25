/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: cpcV.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef CPCV_H
#define CPCV_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void cpcV(const emxArray_real_T *lmdc, const emxArray_real_T *GAMc,
          const emxArray_real_T *Omega2D, const emxArray_real_T *Wk,
          const emxArray_real_T *wk, double pa_k, double pa_maxiterR,
          double pa_tolR, double pa_v, emxArray_real_T *Omega);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for cpcV.h
 *
 * [EOF]
 */
