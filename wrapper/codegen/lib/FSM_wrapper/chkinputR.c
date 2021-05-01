/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chkinputR.c
 *
 * Code generation for function 'chkinputR'
 *
 */

/* Include files */
#include "chkinputR.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_internal_types.h"
#include "FSM_wrapper_types.h"
#include "find.h"
#include "int2str.h"
#include "minOrMax.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "mkl_cblas.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void chkinputR(emxArray_real_T *y, emxArray_real_T *X, bool vvarargin_f10,
               bool vvarargin_f16, double *n, double *p)
{
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *na_y;
  emxArray_boolean_T *r;
  emxArray_char_T_1x310 c_X;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *B;
  emxArray_real_T *b_X;
  emxArray_real_T *b_y;
  emxArray_real_T *constcols;
  emxArray_real_T *r3;
  int b_i;
  int i;
  int loop_ub;
  int ysize_idx_1;
  /* chkinputR makes some input parameters and user options checking in
   * regression */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  y:            Response variable. Vector. */
  /*                A vector with n elements that contains the response */
  /*                variables, possibly with missing values (NaN's) and */
  /*                infinite values (Inf's). */
  /*  X :           Predictor variables. Matrix. */
  /*                Data matrix of explanatory variables (also called */
  /*                'regressors') of dimension (n x p-1), possibly with missing
   */
  /*                values (NaN's) and infinite values (Inf's). Rows of X */
  /*                represent observations, and columns represent variables. */
  /*  nnargin:      nargin. Scalar. The number of input arguments specified for
   * the caller */
  /*                function. */
  /*  vvarargin:    nvarargin. Scalar. The variable length input argument list
   */
  /*                specified for the */
  /*                caller function. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*  y:            response without missing and infs. Vector. The new response
   * variable, with observations (rows) with */
  /*                missing or infinite values excluded. */
  /*  X:            Predictor variables without infs and missings. Matrix. */
  /*                The new matrix of explanatory variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of parameters to be estimated. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  This routines preforms the following operations: */
  /*  1) If y is a row vector it is transformed in a column vector; */
  /*  2) Checks that X is a matrix that has not more than two dimensions; */
  /*  3) Checks dimension consistency of X and y; */
  /*  4) Removes observations with missing or infinite values from X or y */
  /*  (listwise exclusion); */
  /*  5) Adds to matrix X a column of ones if option intercept is 1; */
  /*  6) Checks if there are constant columns in matrix X. In other words, if */
  /*  Xj is a generic column of X (excluding the column which contains the */
  /*  intercept) it removes it if max(Xj)=min(Xj) and produces a warning. */
  /*  7) Computes final values of n and p after previous operations; */
  /*  8) Makes sure than n>=p; */
  /*  9) Makes sure that new X is full rank */
  /*  */
  /*  See also chkinputRB */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Example: */
  /* { */
  /*  example_producing_error */
  /*     %To examplify the behaviour of chkinputR, we call function FSR without
   * a */
  /*     %compulsory parameter ('y'). */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSR(X); */
  /* } */
  /*  Beginning of code */
  /*  chklist is the vector containing the names of optional arguments */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  chkint is the position of the option intercept in vector chklist */
  /*  chkint = strmatch('intercept',chklist,'exact'); */
  /*  If nocheck=true, then skip checks on y and X */
  if (vvarargin_f16) {
    *p = X->size[1];
    *n = X->size[0];
  } else {
    emxInit_real_T(&b_y, 1);
    emxInit_real_T(&B, 1);
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    i = B->size[0];
    B->size[0] = X->size[1];
    emxEnsureCapacity_real_T(B, i);
    loop_ub = X->size[1];
    for (i = 0; i < loop_ub; i++) {
      B->data[i] = 1.0;
    }
    if ((X->size[0] == 0) || (X->size[1] == 0) || (X->size[1] == 0)) {
      i = b_y->size[0];
      b_y->size[0] = X->size[0];
      emxEnsureCapacity_real_T(b_y, i);
      loop_ub = X->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_y->data[i] = 0.0;
      }
    } else {
      i = b_y->size[0];
      b_y->size[0] = X->size[0];
      emxEnsureCapacity_real_T(b_y, i);
      cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans,
                  (MKL_INT)X->size[0], (MKL_INT)1, (MKL_INT)X->size[1], 1.0,
                  &X->data[0], (MKL_INT)X->size[0], &B->data[0],
                  (MKL_INT)X->size[1], 0.0, &b_y->data[0], (MKL_INT)X->size[0]);
    }
    emxFree_real_T(&B);
    emxInit_boolean_T(&na_y, 1);
    i = na_y->size[0];
    na_y->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(na_y, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = rtIsInf(b_y->data[i]);
    }
    emxInit_boolean_T(&r, 1);
    i = r->size[0];
    r->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = rtIsNaN(b_y->data[i]);
    }
    emxInit_boolean_T(&na_X, 1);
    i = na_X->size[0];
    na_X->size[0] = na_y->size[0];
    emxEnsureCapacity_boolean_T(na_X, i);
    loop_ub = na_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_X->data[i] = (na_y->data[i] || r->data[i]);
    }
    i = na_y->size[0];
    na_y->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(na_y, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = rtIsInf(y->data[i]);
    }
    i = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = rtIsNaN(y->data[i]);
    }
    loop_ub = na_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_y->data[i] = (na_y->data[i] || r->data[i]);
    }
    emxFree_boolean_T(&r);
    /*  Observations with missing or infinite values are removed from X and y */
    loop_ub = na_X->size[0] - 1;
    ysize_idx_1 = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        ysize_idx_1++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = ysize_idx_1;
    emxEnsureCapacity_int32_T(r1, i);
    ysize_idx_1 = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r1->data[ysize_idx_1] = b_i + 1;
        ysize_idx_1++;
      }
    }
    emxInit_real_T(&b_X, 2);
    ysize_idx_1 = X->size[1] - 1;
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r1->size[0];
    b_X->size[1] = ysize_idx_1 + 1;
    emxEnsureCapacity_real_T(b_X, i);
    for (i = 0; i <= ysize_idx_1; i++) {
      loop_ub = r1->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        b_X->data[b_i + b_X->size[0] * i] =
            X->data[(r1->data[b_i] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    i = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(X, i);
    loop_ub = b_X->size[1];
    for (i = 0; i < loop_ub; i++) {
      ysize_idx_1 = b_X->size[0];
      for (b_i = 0; b_i < ysize_idx_1; b_i++) {
        X->data[b_i + X->size[0] * i] = b_X->data[b_i + b_X->size[0] * i];
      }
    }
    loop_ub = na_X->size[0] - 1;
    ysize_idx_1 = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        ysize_idx_1++;
      }
    }
    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = ysize_idx_1;
    emxEnsureCapacity_int32_T(r2, i);
    ysize_idx_1 = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r2->data[ysize_idx_1] = b_i + 1;
        ysize_idx_1++;
      }
    }
    emxFree_boolean_T(&na_y);
    emxFree_boolean_T(&na_X);
    i = b_y->size[0];
    b_y->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_y->data[i] = y->data[r2->data[i] - 1];
    }
    emxFree_int32_T(&r2);
    i = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(y, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      y->data[i] = b_y->data[i];
    }
    emxFree_real_T(&b_y);
    /*  Now n is the new number of non missing observations */
    *n = y->size[0];
    /*  Now add to matrix X a column of ones for the intercept. */
    /*  If a value for the intercept has not been specified or if this value is
     */
    /*  equal to 1, add to matrix X the column of ones. The position of */
    /*  the option intercept in chklist, which contains the optional is */
    /*  given in chkint. chkint is empty if the option intercept is not */
    /*  specified. */
    /* if coder.target('MATLAB') */
    /* else */
    /*     interceptPresent=vvarargin{2*chkint}==true; */
    /* end */
    if (vvarargin_f10) {
      i = b_X->size[0] * b_X->size[1];
      b_X->size[0] = X->size[0];
      b_X->size[1] = X->size[1];
      emxEnsureCapacity_real_T(b_X, i);
      loop_ub = X->size[0] * X->size[1];
      for (i = 0; i < loop_ub; i++) {
        b_X->data[i] = X->data[i];
      }
      ysize_idx_1 = X->size[1] + 1;
      i = X->size[0] * X->size[1];
      X->size[0] = y->size[0];
      X->size[1] = ysize_idx_1;
      emxEnsureCapacity_real_T(X, i);
      i = y->size[0];
      for (ysize_idx_1 = 0; ysize_idx_1 < i; ysize_idx_1++) {
        X->data[ysize_idx_1] = 1.0;
      }
      b_i = b_X->size[0] * b_X->size[1];
      for (ysize_idx_1 = 0; ysize_idx_1 < b_i; ysize_idx_1++) {
        X->data[i + ysize_idx_1] = b_X->data[ysize_idx_1];
      }
    }
    emxFree_real_T(&b_X);
    emxInit_real_T(&constcols, 2);
    emxInit_real_T(&r3, 2);
    emxInit_boolean_T(&b_constcols, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(X, constcols);
    minimum(X, r3);
    i = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b_constcols, i);
    loop_ub = constcols->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_constcols->data[i] = (constcols->data[i] - r3->data[i] == 0.0);
    }
    emxFree_real_T(&r3);
    emxInit_int32_T(&c_constcols, 2);
    eml_find(b_constcols, c_constcols);
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = c_constcols->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    loop_ub = c_constcols->size[1];
    emxFree_boolean_T(&b_constcols);
    for (i = 0; i < loop_ub; i++) {
      constcols->data[i] = c_constcols->data[i];
    }
    if (constcols->size[1] > 1) {
      loop_ub = constcols->size[1] - 2;
      i = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(c_constcols, i);
      for (i = 0; i <= loop_ub; i++) {
        c_constcols->data[i] = (int)constcols->data[i + 1];
      }
      nullAssignment(X, c_constcols);
    }
    emxFree_int32_T(&c_constcols);
    emxFree_real_T(&constcols);
    /*  p is the number of parameters to be estimated */
    *p = X->size[1];
    if (y->size[0] < X->size[1]) {
      int2str(X->size[0], c_X.data, c_X.size);
      int2str(X->size[1], c_X.data, c_X.size);
    }
    local_rank(X);
  }
}

/* End of code generation (chkinputR.c) */
