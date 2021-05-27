/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * chkinputM.c
 *
 * Code generation for function 'chkinputM'
 *
 */

/* Include files */
#include "chkinputM.h"
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

/* Function Definitions */
void b_chkinputM(emxArray_real_T *X)
{
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *ok;
  emxArray_boolean_T *r;
  emxArray_char_T_1x310 c_X;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r1;
  emxArray_real_T *b_X;
  emxArray_real_T *constcols;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  int aoffset;
  int i;
  int inner;
  int k;
  int mc;
  emxInit_real_T(&y, 1);
  /* chkinputM makes some input parameters and user options checking in
   * multivariate analysis */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  X :          Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                X represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
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
  /*  X:            Data matrix without missing and infs. Matrix. */
  /*                The new matrix of variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of variable in the input data matrix. */
  /*  */
  /*  See also */
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
  /*     %% example_producing_error */
  /*     %To examplify the behaviour of chkinputM, we call function FSM with a
   */
  /*     %X with more columns then rows. */
  /*     n=3; */
  /*     p=200; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSM(X); */
  /* } */
  /*  Beginning of code */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  If nocheck=1, then skip checks on y and X */
  /*  The second argument which is passed is X */
  /*  Check dimension consistency of X and y */
  mc = X->size[0] - 1;
  inner = X->size[1];
  k = y->size[0];
  y->size[0] = X->size[0];
  emxEnsureCapacity_real_T(y, k);
  for (i = 0; i <= mc; i++) {
    y->data[i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * X->size[0];
    for (i = 0; i <= mc; i++) {
      y->data[i] += X->data[aoffset + i];
    }
  }
  emxInit_boolean_T(&ok, 1);
  /*  Observations with missing or infinite values are removed from X and y */
  k = ok->size[0];
  ok->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(ok, k);
  inner = y->size[0];
  for (k = 0; k < inner; k++) {
    ok->data[k] = rtIsInf(y->data[k]);
  }
  emxInit_boolean_T(&r, 1);
  k = r->size[0];
  r->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(r, k);
  inner = y->size[0];
  for (k = 0; k < inner; k++) {
    r->data[k] = rtIsNaN(y->data[k]);
  }
  emxFree_real_T(&y);
  inner = ok->size[0];
  for (k = 0; k < inner; k++) {
    ok->data[k] = ((!ok->data[k]) && (!r->data[k]));
  }
  emxFree_boolean_T(&r);
  mc = ok->size[0] - 1;
  aoffset = 0;
  for (i = 0; i <= mc; i++) {
    if (ok->data[i]) {
      aoffset++;
    }
  }
  emxInit_int32_T(&r1, 1);
  k = r1->size[0];
  r1->size[0] = aoffset;
  emxEnsureCapacity_int32_T(r1, k);
  aoffset = 0;
  for (i = 0; i <= mc; i++) {
    if (ok->data[i]) {
      r1->data[aoffset] = i + 1;
      aoffset++;
    }
  }
  emxFree_boolean_T(&ok);
  emxInit_real_T(&b_X, 2);
  aoffset = X->size[1] - 1;
  k = b_X->size[0] * b_X->size[1];
  b_X->size[0] = r1->size[0];
  b_X->size[1] = aoffset + 1;
  emxEnsureCapacity_real_T(b_X, k);
  for (k = 0; k <= aoffset; k++) {
    inner = r1->size[0];
    for (mc = 0; mc < inner; mc++) {
      b_X->data[mc + b_X->size[0] * k] =
          X->data[(r1->data[mc] + X->size[0] * k) - 1];
    }
  }
  emxFree_int32_T(&r1);
  k = X->size[0] * X->size[1];
  X->size[0] = b_X->size[0];
  X->size[1] = b_X->size[1];
  emxEnsureCapacity_real_T(X, k);
  inner = b_X->size[1];
  for (k = 0; k < inner; k++) {
    aoffset = b_X->size[0];
    for (mc = 0; mc < aoffset; mc++) {
      X->data[mc + X->size[0] * k] = b_X->data[mc + b_X->size[0] * k];
    }
  }
  emxFree_real_T(&b_X);
  /*  Now n is the new number of non missing observations */
  if ((X->size[0] == 0) || (X->size[1] == 0)) {
    mc = 0;
  } else {
    aoffset = X->size[0];
    mc = X->size[1];
    if (aoffset > mc) {
      mc = aoffset;
    }
  }
  emxInit_real_T(&constcols, 2);
  emxInit_real_T(&r2, 2);
  emxInit_boolean_T(&b_constcols, 2);
  /*  constcols = scalar vector of the indices of possible constant columns. */
  maximum(X, constcols);
  minimum(X, r2);
  k = b_constcols->size[0] * b_constcols->size[1];
  b_constcols->size[0] = 1;
  b_constcols->size[1] = constcols->size[1];
  emxEnsureCapacity_boolean_T(b_constcols, k);
  inner = constcols->size[1];
  for (k = 0; k < inner; k++) {
    b_constcols->data[k] = (constcols->data[k] - r2->data[k] == 0.0);
  }
  emxFree_real_T(&r2);
  emxInit_int32_T(&c_constcols, 2);
  eml_find(b_constcols, c_constcols);
  k = constcols->size[0] * constcols->size[1];
  constcols->size[0] = 1;
  constcols->size[1] = c_constcols->size[1];
  emxEnsureCapacity_real_T(constcols, k);
  inner = c_constcols->size[1];
  emxFree_boolean_T(&b_constcols);
  for (k = 0; k < inner; k++) {
    constcols->data[k] = c_constcols->data[k];
  }
  if (constcols->size[1] >= 1) {
    inner = constcols->size[1];
    k = c_constcols->size[0] * c_constcols->size[1];
    c_constcols->size[0] = 1;
    c_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_int32_T(c_constcols, k);
    for (k = 0; k < inner; k++) {
      c_constcols->data[k] = (int)constcols->data[k];
    }
    nullAssignment(X, c_constcols);
  }
  emxFree_int32_T(&c_constcols);
  emxFree_real_T(&constcols);
  /*  p is the number of parameters to be estimated */
  if (mc < X->size[1]) {
    int2str(X->size[0], c_X.data, c_X.size);
    int2str(X->size[1], c_X.data, c_X.size);
  }
  local_rank(X);
}

void chkinputM(emxArray_real_T *X, bool vvarargin_f12)
{
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *ok;
  emxArray_boolean_T *r;
  emxArray_char_T_1x310 c_X;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r1;
  emxArray_real_T *b_X;
  emxArray_real_T *constcols;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  int aoffset;
  int i;
  int inner;
  int k;
  int mc;
  /* chkinputM makes some input parameters and user options checking in
   * multivariate analysis */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  X :          Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                X represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
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
  /*  X:            Data matrix without missing and infs. Matrix. */
  /*                The new matrix of variables, with missing or */
  /*                infinite values excluded. */
  /*  n:            Number of rows of X (observations). Scalar.  Number of */
  /*                rows after listwise exclusion. */
  /*  p:            Number of columns of X (variables). Scalar. */
  /*                Number of variable in the input data matrix. */
  /*  */
  /*  See also */
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
  /*     %% example_producing_error */
  /*     %To examplify the behaviour of chkinputM, we call function FSM with a
   */
  /*     %X with more columns then rows. */
  /*     n=3; */
  /*     p=200; */
  /*     state1=123498; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     [out]=FSM(X); */
  /* } */
  /*  Beginning of code */
  /*  chkchk is the position of the option nocheck in vector chklist */
  /*  chkchk = strmatch('nocheck',chklist,'exact'); */
  /*  If nocheck=1, then skip checks on y and X */
  if (!vvarargin_f12) {
    emxInit_real_T(&y, 1);
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    mc = X->size[0] - 1;
    inner = X->size[1];
    k = y->size[0];
    y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(y, k);
    for (i = 0; i <= mc; i++) {
      y->data[i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * X->size[0];
      for (i = 0; i <= mc; i++) {
        y->data[i] += X->data[aoffset + i];
      }
    }
    emxInit_boolean_T(&ok, 1);
    /*  Observations with missing or infinite values are removed from X and y */
    k = ok->size[0];
    ok->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(ok, k);
    inner = y->size[0];
    for (k = 0; k < inner; k++) {
      ok->data[k] = rtIsInf(y->data[k]);
    }
    emxInit_boolean_T(&r, 1);
    k = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r, k);
    inner = y->size[0];
    for (k = 0; k < inner; k++) {
      r->data[k] = rtIsNaN(y->data[k]);
    }
    emxFree_real_T(&y);
    inner = ok->size[0];
    for (k = 0; k < inner; k++) {
      ok->data[k] = ((!ok->data[k]) && (!r->data[k]));
    }
    emxFree_boolean_T(&r);
    mc = ok->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if (ok->data[i]) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r1, 1);
    k = r1->size[0];
    r1->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r1, k);
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if (ok->data[i]) {
        r1->data[aoffset] = i + 1;
        aoffset++;
      }
    }
    emxFree_boolean_T(&ok);
    emxInit_real_T(&b_X, 2);
    aoffset = X->size[1] - 1;
    k = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r1->size[0];
    b_X->size[1] = aoffset + 1;
    emxEnsureCapacity_real_T(b_X, k);
    for (k = 0; k <= aoffset; k++) {
      inner = r1->size[0];
      for (mc = 0; mc < inner; mc++) {
        b_X->data[mc + b_X->size[0] * k] =
            X->data[(r1->data[mc] + X->size[0] * k) - 1];
      }
    }
    emxFree_int32_T(&r1);
    k = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(X, k);
    inner = b_X->size[1];
    for (k = 0; k < inner; k++) {
      aoffset = b_X->size[0];
      for (mc = 0; mc < aoffset; mc++) {
        X->data[mc + X->size[0] * k] = b_X->data[mc + b_X->size[0] * k];
      }
    }
    emxFree_real_T(&b_X);
    /*  Now n is the new number of non missing observations */
    if ((X->size[0] == 0) || (X->size[1] == 0)) {
      mc = 0;
    } else {
      aoffset = X->size[0];
      mc = X->size[1];
      if (aoffset > mc) {
        mc = aoffset;
      }
    }
    emxInit_real_T(&constcols, 2);
    emxInit_real_T(&r2, 2);
    emxInit_boolean_T(&b_constcols, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(X, constcols);
    minimum(X, r2);
    k = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b_constcols, k);
    inner = constcols->size[1];
    for (k = 0; k < inner; k++) {
      b_constcols->data[k] = (constcols->data[k] - r2->data[k] == 0.0);
    }
    emxFree_real_T(&r2);
    emxInit_int32_T(&c_constcols, 2);
    eml_find(b_constcols, c_constcols);
    k = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = c_constcols->size[1];
    emxEnsureCapacity_real_T(constcols, k);
    inner = c_constcols->size[1];
    emxFree_boolean_T(&b_constcols);
    for (k = 0; k < inner; k++) {
      constcols->data[k] = c_constcols->data[k];
    }
    if (constcols->size[1] >= 1) {
      inner = constcols->size[1];
      k = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1];
      emxEnsureCapacity_int32_T(c_constcols, k);
      for (k = 0; k < inner; k++) {
        c_constcols->data[k] = (int)constcols->data[k];
      }
      nullAssignment(X, c_constcols);
    }
    emxFree_int32_T(&c_constcols);
    emxFree_real_T(&constcols);
    /*  p is the number of parameters to be estimated */
    if (mc < X->size[1]) {
      int2str(X->size[0], c_X.data, c_X.size);
      int2str(X->size[1], c_X.data, c_X.size);
    }
    local_rank(X);
  }
}

/* End of code generation (chkinputM.c) */
