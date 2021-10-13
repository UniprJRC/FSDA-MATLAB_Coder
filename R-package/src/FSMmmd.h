/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMmmd.h
 *
 * Code generation for function 'FSMmmd'
 *
 */

#ifndef FSMMMD_H
#define FSMMMD_H

/* Include files */
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

void and (emxArray_boolean_T * MDltminbsb, const emxArray_boolean_T *unitoutT,
          const emxArray_boolean_T *bsbT);

void b_FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
              bool varargin_6, emxArray_real_T *mmd, emxArray_real_T *Un);

void c_FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
              emxArray_real_T *mmd, emxArray_real_T *Un,
              emxArray_real_T *varargout_1);

void d_FSMmmd(const emxArray_real_T *Y, emxArray_real_T *bsb, double varargin_2,
              emxArray_real_T *mmd, emxArray_real_T *Un);

void n_binary_expand_op(emxArray_real_T *S, const emxArray_real_T *Szi,
                        double y);

void o_binary_expand_op(emxArray_real_T *zi, const emxArray_real_T *Y,
                        const emxArray_real_T *unitout, int i,
                        const emxArray_real_T *mi);

void p_binary_expand_op(emxArray_real_T *S, const emxArray_real_T *Szi,
                        double y);

void q_binary_expand_op(emxArray_real_T *zi, const emxArray_real_T *Y,
                        const emxArray_int32_T *unit, int i,
                        const emxArray_real_T *mi);

void t_binary_expand_op(emxArray_boolean_T *unitoutT,
                        const emxArray_boolean_T *oldbsbT,
                        const emxArray_boolean_T *bsbT);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (FSMmmd.h) */
