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
#include "LXS_wrapper1_emxutil.h"
#include "LXS_wrapper1_internal_types.h"
#include "LXS_wrapper1_types.h"
#include "find.h"
#include "int2str.h"
#include "minOrMax.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void chkinputR(emxArray_real_T *y, emxArray_real_T *X, bool vvarargin_f8,
               bool vvarargin_f12, double *n, double *p)
{
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *na_y;
  emxArray_boolean_T *r;
  emxArray_char_T_1x310 c_X;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *b_X;
  emxArray_real_T *b_y;
  emxArray_real_T *constcols;
  emxArray_real_T *r3;
  int aoffset;
  int i;
  int inner;
  int k;
  int mc;
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
  if (vvarargin_f12) {
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
    for (i = 0; i <= mc; i++) {
      b_y->data[i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * X->size[0];
      for (i = 0; i <= mc; i++) {
        b_y->data[i] += X->data[aoffset + i];
      }
    }
    emxInit_boolean_T(&na_y, 1);
    k = na_y->size[0];
    na_y->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(na_y, k);
    mc = b_y->size[0];
    for (k = 0; k < mc; k++) {
      na_y->data[k] = rtIsInf(b_y->data[k]);
    }
    emxInit_boolean_T(&r, 1);
    k = r->size[0];
    r->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(r, k);
    mc = b_y->size[0];
    for (k = 0; k < mc; k++) {
      r->data[k] = rtIsNaN(b_y->data[k]);
    }
    emxInit_boolean_T(&na_X, 1);
    k = na_X->size[0];
    na_X->size[0] = na_y->size[0];
    emxEnsureCapacity_boolean_T(na_X, k);
    mc = na_y->size[0];
    for (k = 0; k < mc; k++) {
      na_X->data[k] = (na_y->data[k] || r->data[k]);
    }
    k = na_y->size[0];
    na_y->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(na_y, k);
    mc = y->size[0];
    for (k = 0; k < mc; k++) {
      na_y->data[k] = rtIsInf(y->data[k]);
    }
    k = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r, k);
    mc = y->size[0];
    for (k = 0; k < mc; k++) {
      r->data[k] = rtIsNaN(y->data[k]);
    }
    mc = na_y->size[0];
    for (k = 0; k < mc; k++) {
      na_y->data[k] = (na_y->data[k] || r->data[k]);
    }
    emxFree_boolean_T(&r);
    /*  Observations with missing or infinite values are removed from X and y */
    mc = na_X->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if ((!na_X->data[i]) && (!na_y->data[i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r1, 1);
    k = r1->size[0];
    r1->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r1, k);
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if ((!na_X->data[i]) && (!na_y->data[i])) {
        r1->data[aoffset] = i + 1;
        aoffset++;
      }
    }
    emxInit_real_T(&b_X, 2);
    aoffset = X->size[1] - 1;
    k = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r1->size[0];
    b_X->size[1] = aoffset + 1;
    emxEnsureCapacity_real_T(b_X, k);
    for (k = 0; k <= aoffset; k++) {
      mc = r1->size[0];
      for (inner = 0; inner < mc; inner++) {
        b_X->data[inner + b_X->size[0] * k] =
            X->data[(r1->data[inner] + X->size[0] * k) - 1];
      }
    }
    emxFree_int32_T(&r1);
    k = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(X, k);
    mc = b_X->size[1];
    for (k = 0; k < mc; k++) {
      aoffset = b_X->size[0];
      for (inner = 0; inner < aoffset; inner++) {
        X->data[inner + X->size[0] * k] = b_X->data[inner + b_X->size[0] * k];
      }
    }
    mc = na_X->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if ((!na_X->data[i]) && (!na_y->data[i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r2, 1);
    k = r2->size[0];
    r2->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r2, k);
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if ((!na_X->data[i]) && (!na_y->data[i])) {
        r2->data[aoffset] = i + 1;
        aoffset++;
      }
    }
    emxFree_boolean_T(&na_y);
    emxFree_boolean_T(&na_X);
    k = b_y->size[0];
    b_y->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(b_y, k);
    mc = r2->size[0];
    for (k = 0; k < mc; k++) {
      b_y->data[k] = y->data[r2->data[k] - 1];
    }
    emxFree_int32_T(&r2);
    k = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(y, k);
    mc = b_y->size[0];
    for (k = 0; k < mc; k++) {
      y->data[k] = b_y->data[k];
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
    if (vvarargin_f8) {
      k = b_X->size[0] * b_X->size[1];
      b_X->size[0] = X->size[0];
      b_X->size[1] = X->size[1];
      emxEnsureCapacity_real_T(b_X, k);
      mc = X->size[0] * X->size[1];
      for (k = 0; k < mc; k++) {
        b_X->data[k] = X->data[k];
      }
      aoffset = X->size[1] + 1;
      k = X->size[0] * X->size[1];
      X->size[0] = y->size[0];
      X->size[1] = aoffset;
      emxEnsureCapacity_real_T(X, k);
      k = y->size[0];
      for (aoffset = 0; aoffset < k; aoffset++) {
        X->data[aoffset] = 1.0;
      }
      inner = b_X->size[0] * b_X->size[1];
      for (aoffset = 0; aoffset < inner; aoffset++) {
        X->data[k + aoffset] = b_X->data[aoffset];
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
    k = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b_constcols, k);
    mc = constcols->size[1];
    for (k = 0; k < mc; k++) {
      b_constcols->data[k] = (constcols->data[k] - r3->data[k] == 0.0);
    }
    emxFree_real_T(&r3);
    emxInit_int32_T(&c_constcols, 2);
    eml_find(b_constcols, c_constcols);
    k = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = c_constcols->size[1];
    emxEnsureCapacity_real_T(constcols, k);
    mc = c_constcols->size[1];
    emxFree_boolean_T(&b_constcols);
    for (k = 0; k < mc; k++) {
      constcols->data[k] = c_constcols->data[k];
    }
    if (constcols->size[1] > 1) {
      mc = constcols->size[1] - 2;
      k = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(c_constcols, k);
      for (k = 0; k <= mc; k++) {
        c_constcols->data[k] = (int)constcols->data[k + 1];
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
