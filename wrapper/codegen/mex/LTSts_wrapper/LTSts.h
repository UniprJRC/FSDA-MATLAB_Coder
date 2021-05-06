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

#pragma once

/* Include files */
#include "LTSts_wrapper_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void ALS(const emlrtStack *sp, const c_captured_var *Seq,
         const c_captured_var *bsb, const c_captured_var *Xseaso,
         const c_captured_var *Xtrend, const c_captured_var *yin,
         const captured_var *trend, const captured_var *nexpl,
         const captured_var *varampl, const b_captured_var *isemptyX,
         const captured_var *lshiftYN, const c_captured_var *Xlshift,
         const c_captured_var *X, const captured_var *reftolALS,
         const captured_var *refstepsALS, const c_captured_var *indlinsc,
         const c_captured_var *otherind, const emxArray_real_T *beta0,
         emxArray_real_T *newbeta);

void IRWLSreg(const emlrtStack *sp, const captured_var *reftolALS,
              const captured_var *refstepsALS, const c_captured_var *indlinsc,
              const c_captured_var *Xseaso, c_captured_var *bsb,
              const b_captured_var *isemptyX, const captured_var *lshiftYN,
              const c_captured_var *Xtrend, const c_captured_var *Seq,
              const captured_var *varampl, const c_captured_var *Xlshift,
              const c_captured_var *X, const c_captured_var *yin,
              const captured_var *trend, const captured_var *nexpl,
              const c_captured_var *otherind, const captured_var *seasonal,
              const captured_var *s, c_captured_var *yhatseaso,
              c_captured_var *yhat, c_captured_var *beta,
              const captured_var *constr, const c_captured_var *Xsel,
              const b_captured_var *verLess2016b, const c_captured_var *seq,
              d_captured_var *weights, const d_captured_var *zerT1,
              const emxArray_real_T *y, const emxArray_real_T *initialbeta,
              real_T refsteps, real_T reftol, real_T h, struct_T *outIRWLS);

real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha);

real_T corfactorREW(const emlrtStack *sp, real_T n, real_T alpha);

void lik(const emlrtStack *sp, const c_captured_var *Xtrend,
         const c_captured_var *bsb, const captured_var *trend,
         const captured_var *seasonal, const captured_var *s,
         c_captured_var *yhatseaso, const c_captured_var *Xseaso,
         const captured_var *varampl, const c_captured_var *Seq,
         const captured_var *nexpl, const b_captured_var *isemptyX,
         const c_captured_var *X, const captured_var *lshiftYN,
         const c_captured_var *Xlshift, c_captured_var *yhat,
         const c_captured_var *yin, const emxArray_real_T *beta0);

void likyhat(const emlrtStack *sp, const captured_var *trend,
             const captured_var *seasonal, const captured_var *s,
             c_captured_var *yhatseaso, const c_captured_var *Xseasof,
             const captured_var *varampl, const c_captured_var *Seqf,
             const captured_var *nexpl, const b_captured_var *isemptyX,
             const c_captured_var *Xf, const captured_var *lshiftYN,
             const c_captured_var *Xlshiftf, const emxArray_real_T *beta0,
             const emxArray_real_T *Xtrendf, emxArray_real_T *objyhat);

/* End of code generation (LTSts.h) */
