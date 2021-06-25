/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: repmat.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef REPMAT_H
#define REPMAT_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b);

void c_repmat(const emxArray_real_T *a, double varargin_3, emxArray_real_T *b);

void d_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b);

void e_repmat(const emxArray_real_T *a, const double varargin_1[3],
              emxArray_real_T *b);

void repmat(const double a_data[], const int a_size[2], double varargin_1,
            emxArray_real_T *b);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for repmat.h
 *
 * [EOF]
 */
