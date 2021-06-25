/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: tinv.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef TINV_H
#define TINV_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_tinv(const emxArray_real_T *p, const emxArray_real_T *v,
            emxArray_real_T *x);

double tinv(double p, double v);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for tinv.h
 *
 * [EOF]
 */
