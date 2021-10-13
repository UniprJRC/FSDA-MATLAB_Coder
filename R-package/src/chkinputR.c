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
#include "find.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "int2str.h"
#include "minOrMax.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void chkinputR(emxArray_real_T *y, emxArray_real_T *X, bool vvarargin_f6,
               bool vvarargin_f10, double *n, double *p)
{
  emxArray_boolean_T *c_constcols;
  emxArray_boolean_T *ok;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_char_T_1x310 c_X;
  emxArray_int32_T *b_constcols;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_real_T *b_X;
  emxArray_real_T *b_y;
  emxArray_real_T *constcols;
  emxArray_real_T *r8;
  double *X_data;
  double *constcols_data;
  double *y_data;
  int aoffset;
  int i;
  int inner;
  int k;
  int mc;
  int *b_constcols_data;
  bool *ok_data;
  bool *r1;
  bool *r3;
  bool *r5;
  X_data = X->data;
  y_data = y->data;
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
  if (vvarargin_f10) {
    *p = X->size[1];
    *n = X->size[0];
  } else {
    emxInit_real_T(&b_y, 1);
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    mc = X->size[0] - 1;
    inner = X->size[1];
    k = b_y->size[0];
    b_y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(b_y, k);
    constcols_data = b_y->data;
    for (i = 0; i <= mc; i++) {
      constcols_data[i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * X->size[0];
      for (i = 0; i <= mc; i++) {
        constcols_data[i] += X_data[aoffset + i];
      }
    }
    emxInit_boolean_T(&ok, 1);
    /*  Observations with missing or infinite values are removed from X and y */
    k = ok->size[0];
    ok->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(ok, k);
    ok_data = ok->data;
    mc = b_y->size[0];
    for (k = 0; k < mc; k++) {
      ok_data[k] = rtIsInf(constcols_data[k]);
    }
    emxInit_boolean_T(&r, 1);
    k = r->size[0];
    r->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(r, k);
    r1 = r->data;
    mc = b_y->size[0];
    for (k = 0; k < mc; k++) {
      r1[k] = rtIsNaN(constcols_data[k]);
    }
    emxInit_boolean_T(&r2, 1);
    k = r2->size[0];
    r2->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r2, k);
    r3 = r2->data;
    mc = y->size[0];
    for (k = 0; k < mc; k++) {
      r3[k] = rtIsInf(y_data[k]);
    }
    emxInit_boolean_T(&r4, 1);
    k = r4->size[0];
    r4->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r4, k);
    r5 = r4->data;
    mc = y->size[0];
    for (k = 0; k < mc; k++) {
      r5[k] = rtIsNaN(y_data[k]);
    }
    if (ok->size[0] == r2->size[0]) {
      mc = ok->size[0];
      for (k = 0; k < mc; k++) {
        ok_data[k] = ((!ok_data[k]) && (!r1[k]) && ((!r3[k]) && (!r5[k])));
      }
    } else {
      ib_binary_expand_op(ok, r, r2, r4);
      ok_data = ok->data;
    }
    emxFree_boolean_T(&r4);
    emxFree_boolean_T(&r2);
    emxFree_boolean_T(&r);
    mc = ok->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if (ok_data[i]) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r6, 1);
    k = r6->size[0];
    r6->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r6, k);
    b_constcols_data = r6->data;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if (ok_data[i]) {
        b_constcols_data[aoffset] = i + 1;
        aoffset++;
      }
    }
    emxInit_real_T(&b_X, 2);
    aoffset = X->size[1] - 1;
    k = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r6->size[0];
    b_X->size[1] = aoffset + 1;
    emxEnsureCapacity_real_T(b_X, k);
    constcols_data = b_X->data;
    for (k = 0; k <= aoffset; k++) {
      mc = r6->size[0];
      for (inner = 0; inner < mc; inner++) {
        constcols_data[inner + b_X->size[0] * k] =
            X_data[(b_constcols_data[inner] + X->size[0] * k) - 1];
      }
    }
    emxFree_int32_T(&r6);
    k = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(X, k);
    X_data = X->data;
    mc = b_X->size[1];
    for (k = 0; k < mc; k++) {
      aoffset = b_X->size[0];
      for (inner = 0; inner < aoffset; inner++) {
        X_data[inner + X->size[0] * k] =
            constcols_data[inner + b_X->size[0] * k];
      }
    }
    mc = ok->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if (ok_data[i]) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r7, 1);
    k = r7->size[0];
    r7->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r7, k);
    b_constcols_data = r7->data;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if (ok_data[i]) {
        b_constcols_data[aoffset] = i + 1;
        aoffset++;
      }
    }
    emxFree_boolean_T(&ok);
    k = b_y->size[0];
    b_y->size[0] = r7->size[0];
    emxEnsureCapacity_real_T(b_y, k);
    constcols_data = b_y->data;
    mc = r7->size[0];
    for (k = 0; k < mc; k++) {
      constcols_data[k] = y_data[b_constcols_data[k] - 1];
    }
    emxFree_int32_T(&r7);
    k = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(y, k);
    y_data = y->data;
    mc = b_y->size[0];
    for (k = 0; k < mc; k++) {
      y_data[k] = constcols_data[k];
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
    if (vvarargin_f6) {
      k = b_X->size[0] * b_X->size[1];
      b_X->size[0] = X->size[0];
      b_X->size[1] = X->size[1];
      emxEnsureCapacity_real_T(b_X, k);
      constcols_data = b_X->data;
      mc = X->size[0] * X->size[1];
      for (k = 0; k < mc; k++) {
        constcols_data[k] = X_data[k];
      }
      aoffset = X->size[1] + 1;
      k = X->size[0] * X->size[1];
      X->size[0] = y->size[0];
      X->size[1] = aoffset;
      emxEnsureCapacity_real_T(X, k);
      X_data = X->data;
      k = y->size[0];
      for (aoffset = 0; aoffset < k; aoffset++) {
        X_data[aoffset] = 1.0;
      }
      inner = b_X->size[0] * b_X->size[1];
      for (aoffset = 0; aoffset < inner; aoffset++) {
        X_data[k + aoffset] = constcols_data[aoffset];
      }
    }
    emxFree_real_T(&b_X);
    emxInit_real_T(&constcols, 2);
    emxInit_real_T(&r8, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(X, constcols);
    constcols_data = constcols->data;
    minimum(X, r8);
    X_data = r8->data;
    emxInit_int32_T(&b_constcols, 2);
    if (constcols->size[1] == r8->size[1]) {
      emxInit_boolean_T(&c_constcols, 2);
      k = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1];
      emxEnsureCapacity_boolean_T(c_constcols, k);
      ok_data = c_constcols->data;
      mc = constcols->size[1];
      for (k = 0; k < mc; k++) {
        ok_data[k] = (constcols_data[k] - X_data[k] == 0.0);
      }
      eml_find(c_constcols, b_constcols);
      b_constcols_data = b_constcols->data;
      emxFree_boolean_T(&c_constcols);
    } else {
      hb_binary_expand_op(b_constcols, constcols, r8);
      b_constcols_data = b_constcols->data;
    }
    emxFree_real_T(&r8);
    k = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = b_constcols->size[1];
    emxEnsureCapacity_real_T(constcols, k);
    constcols_data = constcols->data;
    mc = b_constcols->size[1];
    for (k = 0; k < mc; k++) {
      constcols_data[k] = b_constcols_data[k];
    }
    if (constcols->size[1] > 1) {
      mc = constcols->size[1] - 2;
      k = b_constcols->size[0] * b_constcols->size[1];
      b_constcols->size[0] = 1;
      b_constcols->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(b_constcols, k);
      b_constcols_data = b_constcols->data;
      for (k = 0; k <= mc; k++) {
        b_constcols_data[k] = (int)constcols_data[k + 1];
      }
      nullAssignment(X, b_constcols);
    }
    emxFree_int32_T(&b_constcols);
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

void ib_binary_expand_op(emxArray_boolean_T *ok, const emxArray_boolean_T *bT,
                         const emxArray_boolean_T *aT,
                         const emxArray_boolean_T *c)
{
  emxArray_boolean_T *b_ok;
  int i;
  int loop_ub;
  int ok_tmp;
  int stride_0_0;
  int stride_1_0;
  const bool *aT_data;
  const bool *bT_data;
  const bool *c_data;
  bool *b_ok_data;
  bool *ok_data;
  c_data = c->data;
  aT_data = aT->data;
  bT_data = bT->data;
  ok_data = ok->data;
  emxInit_boolean_T(&b_ok, 1);
  i = b_ok->size[0];
  if (aT->size[0] == 1) {
    b_ok->size[0] = ok->size[0];
  } else {
    b_ok->size[0] = aT->size[0];
  }
  emxEnsureCapacity_boolean_T(b_ok, i);
  b_ok_data = b_ok->data;
  stride_0_0 = (ok->size[0] != 1);
  stride_1_0 = (aT->size[0] != 1);
  if (aT->size[0] == 1) {
    loop_ub = ok->size[0];
  } else {
    loop_ub = aT->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    ok_tmp = i * stride_1_0;
    b_ok_data[i] = ((!ok_data[i * stride_0_0]) && (!bT_data[i * stride_0_0]) &&
                    ((!aT_data[ok_tmp]) && (!c_data[ok_tmp])));
  }
  i = ok->size[0];
  ok->size[0] = b_ok->size[0];
  emxEnsureCapacity_boolean_T(ok, i);
  ok_data = ok->data;
  loop_ub = b_ok->size[0];
  for (i = 0; i < loop_ub; i++) {
    ok_data[i] = b_ok_data[i];
  }
  emxFree_boolean_T(&b_ok);
}

/* End of code generation (chkinputR.c) */
