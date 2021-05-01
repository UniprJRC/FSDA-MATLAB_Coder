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
#include "LTSts_wrapper_internal_types.h"
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
void ALS(const emlrtStack *sp, const d_captured_var *Seq,
         const d_captured_var *bsb, const d_captured_var *Xseaso,
         const d_captured_var *Xtrend, const d_captured_var *yin,
         const captured_var *trend, const captured_var *nexpl,
         const captured_var *varampl, const b_captured_var *isemptyX,
         const captured_var *lshiftYN, const d_captured_var *Xlshift,
         const d_captured_var *X, const captured_var *reftolALS,
         const captured_var *refstepsALS, const d_captured_var *indlinsc,
         const d_captured_var *otherind, const emxArray_real_T *beta0,
         emxArray_real_T *newbeta);

void IRWLSreg(const emlrtStack *sp, const captured_var *reftolALS,
              const captured_var *refstepsALS, const d_captured_var *indlinsc,
              const d_captured_var *Xseaso, d_captured_var *bsb,
              const b_captured_var *isemptyX, const captured_var *lshiftYN,
              const d_captured_var *Xtrend, const d_captured_var *Seq,
              const captured_var *varampl, const d_captured_var *Xlshift,
              const d_captured_var *X, const d_captured_var *yin,
              const captured_var *trend, const captured_var *nexpl,
              const d_captured_var *otherind, const captured_var *seasonal,
              const captured_var *s, d_captured_var *yhatseaso,
              d_captured_var *yhat, d_captured_var *beta,
              const captured_var *constr, const d_captured_var *Xsel,
              const b_captured_var *verLess2016b, const d_captured_var *seq,
              c_captured_var *weights, const c_captured_var *zerT1,
              const emxArray_real_T *y, const emxArray_real_T *initialbeta,
              real_T refsteps, real_T reftol, real_T h, struct_T *outIRWLS);

real_T corfactorRAW(const emlrtStack *sp, real_T n, real_T alpha);

real_T corfactorREW(const emlrtStack *sp, real_T n, real_T alpha);

void lik(const emlrtStack *sp, const d_captured_var *Xtrend,
         const d_captured_var *bsb, const captured_var *trend,
         const captured_var *seasonal, const captured_var *s,
         d_captured_var *yhatseaso, const d_captured_var *Xseaso,
         const captured_var *varampl, const d_captured_var *Seq,
         const captured_var *nexpl, const b_captured_var *isemptyX,
         const d_captured_var *X, const captured_var *lshiftYN,
         const d_captured_var *Xlshift, d_captured_var *yhat,
         const d_captured_var *yin, const emxArray_real_T *beta0);

/* End of code generation (LTSts.h) */
