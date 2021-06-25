/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: diag.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef DIAG_H
#define DIAG_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_diag(const emxArray_creal_T *v, emxArray_creal_T *d);

void c_diag(const emxArray_real_T *v, emxArray_real_T *d);

void diag(const emxArray_real_T *v, emxArray_real_T *d);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for diag.h
 *
 * [EOF]
 */
