/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: FSMmmd.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

#ifndef FSMMMD_H
#define FSMMMD_H

/* Include Files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
            bool varargin_6, emxArray_real_T *mmd, emxArray_real_T *Un,
            emxArray_real_T *varargout_1);

void b_FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
              bool varargin_6, emxArray_real_T *mmd, emxArray_real_T *Un);

void c_FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
              emxArray_real_T *mmd, emxArray_real_T *Un,
              emxArray_real_T *varargout_1);

void d_FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
              emxArray_real_T *mmd, emxArray_real_T *Un);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for FSMmmd.h
 *
 * [EOF]
 */
