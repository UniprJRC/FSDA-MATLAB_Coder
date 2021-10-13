/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts.h
 *
 * Code generation for function 'LTSts'
 *
 */

#ifndef LTSTS_H
#define LTSTS_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void LTSts(const emxArray_real_T *y, double varargin_2, bool varargin_4,
           double varargin_6, bool varargin_8, double varargin_10_wlength,
           double varargin_10_typeres, double varargin_10_huberc,
           double varargin_12_bestr, double varargin_12_refsteps,
           double varargin_12_refstepsbestr, double varargin_12_reftol,
           double varargin_12_reftolbestr,
           const struct_LTStsmodel_T varargin_14, bool varargin_16,
           double varargin_18, const double varargin_22_data[],
           const int varargin_22_size[2], double varargin_24,
           double varargin_26, double varargin_28, bool varargin_30,
           struct_LTSts_T *out);

double corfactorREW(double n, double alpha);

void likyhat(const captured_var *trend, const captured_var *seasonal,
             const captured_var *s, c_captured_var *yhatseaso,
             const c_captured_var *Xseasof, const captured_var *varampl,
             const c_captured_var *Seqf, const captured_var *nexpl,
             const b_captured_var *isemptyX, const c_captured_var *Xf,
             const captured_var *lshiftYN, const c_captured_var *Xlshiftf,
             const emxArray_real_T *beta0, const emxArray_real_T *Xtrendf,
             emxArray_real_T *objyhat);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (LTSts.h) */
