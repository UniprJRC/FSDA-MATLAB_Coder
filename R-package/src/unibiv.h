/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unibiv.h
 *
 * Code generation for function 'unibiv'
 *
 */

#ifndef UNIBIV_H
#define UNIBIV_H

/* Include files */
#include "fsdaC_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_plus(emxArray_real_T *yrank, const emxArray_real_T *Xs,
            const emxArray_real_T *Ys);

void b_unibiv(const emxArray_real_T *Y, emxArray_real_T *fre);

void j_binary_expand_op(emxArray_real_T *bivT, const emxArray_real_T *biv);

void k_binary_expand_op(emxArray_real_T *yrank, const emxArray_real_T *xrank,
                        double a, const emxArray_real_T *Xs,
                        const emxArray_real_T *Ys, double c);

void l_binary_expand_op(emxArray_boolean_T *r1, const emxArray_real_T *datax,
                        double uq, double lq, const emxArray_real_T *xrank);

void mf_binary_expand_op(emxArray_real_T *outy, const emxArray_real_T *datax,
                         const emxArray_int32_T *jj,
                         const emxArray_int32_T *ii);

void minus(emxArray_real_T *yrank, const emxArray_real_T *Xs,
           const emxArray_real_T *Ys);

void nf_binary_expand_op(emxArray_real_T *yrank, const emxArray_real_T *Y,
                         unsigned int jl, double Tx, const emxArray_real_T *y,
                         double Ty);

void plus(emxArray_real_T *MDbiv, const emxArray_real_T *yrank);

void tiedrankFS(const emxArray_real_T *x, emxArray_real_T *r);

void unibiv(const emxArray_real_T *Y, double varargin_2, emxArray_real_T *fre);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (unibiv.h) */
