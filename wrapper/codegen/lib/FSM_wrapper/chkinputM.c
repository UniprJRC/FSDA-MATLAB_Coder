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
void b_chkinputM(emxArray_real_T *X)
{
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *ok;
  emxArray_boolean_T *r;
  emxArray_char_T_1x310 c_X;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r1;
  emxArray_real_T *B;
  emxArray_real_T *b_X;
  emxArray_real_T *constcols;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  int end;
  int i;
  int loop_ub;
  int trueCount;
  emxInit_real_T(&y, 1);
  emxInit_real_T(&B, 1);
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
  i = B->size[0];
  B->size[0] = X->size[1];
  emxEnsureCapacity_real_T(B, i);
  loop_ub = X->size[1];
  for (i = 0; i < loop_ub; i++) {
    B->data[i] = 1.0;
  }
  if ((X->size[0] == 0) || (X->size[1] == 0) || (X->size[1] == 0)) {
    i = y->size[0];
    y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(y, i);
    loop_ub = X->size[0];
    for (i = 0; i < loop_ub; i++) {
      y->data[i] = 0.0;
    }
  } else {
    i = y->size[0];
    y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(y, i);
    cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans, (MKL_INT)X->size[0],
                (MKL_INT)1, (MKL_INT)X->size[1], 1.0, &X->data[0],
                (MKL_INT)X->size[0], &B->data[0], (MKL_INT)X->size[1], 0.0,
                &y->data[0], (MKL_INT)X->size[0]);
  }
  emxFree_real_T(&B);
  emxInit_boolean_T(&ok, 1);
  /*  Observations with missing or infinite values are removed from X and y */
  i = ok->size[0];
  ok->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(ok, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    ok->data[i] = rtIsInf(y->data[i]);
  }
  emxInit_boolean_T(&r, 1);
  i = r->size[0];
  r->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtIsNaN(y->data[i]);
  }
  emxFree_real_T(&y);
  loop_ub = ok->size[0];
  for (i = 0; i < loop_ub; i++) {
    ok->data[i] = ((!ok->data[i]) && (!r->data[i]));
  }
  emxFree_boolean_T(&r);
  end = ok->size[0] - 1;
  trueCount = 0;
  for (loop_ub = 0; loop_ub <= end; loop_ub++) {
    if (ok->data[loop_ub]) {
      trueCount++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = trueCount;
  emxEnsureCapacity_int32_T(r1, i);
  trueCount = 0;
  for (loop_ub = 0; loop_ub <= end; loop_ub++) {
    if (ok->data[loop_ub]) {
      r1->data[trueCount] = loop_ub + 1;
      trueCount++;
    }
  }
  emxFree_boolean_T(&ok);
  emxInit_real_T(&b_X, 2);
  trueCount = X->size[1] - 1;
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = r1->size[0];
  b_X->size[1] = trueCount + 1;
  emxEnsureCapacity_real_T(b_X, i);
  for (i = 0; i <= trueCount; i++) {
    loop_ub = r1->size[0];
    for (end = 0; end < loop_ub; end++) {
      b_X->data[end + b_X->size[0] * i] =
          X->data[(r1->data[end] + X->size[0] * i) - 1];
    }
  }
  emxFree_int32_T(&r1);
  i = X->size[0] * X->size[1];
  X->size[0] = b_X->size[0];
  X->size[1] = b_X->size[1];
  emxEnsureCapacity_real_T(X, i);
  loop_ub = b_X->size[1];
  for (i = 0; i < loop_ub; i++) {
    trueCount = b_X->size[0];
    for (end = 0; end < trueCount; end++) {
      X->data[end + X->size[0] * i] = b_X->data[end + b_X->size[0] * i];
    }
  }
  emxFree_real_T(&b_X);
  /*  Now n is the new number of non missing observations */
  if ((X->size[0] == 0) || (X->size[1] == 0)) {
    end = 0;
  } else {
    trueCount = X->size[0];
    end = X->size[1];
    if (trueCount > end) {
      end = trueCount;
    }
  }
  emxInit_real_T(&constcols, 2);
  emxInit_real_T(&r2, 2);
  emxInit_boolean_T(&b_constcols, 2);
  /*  constcols = scalar vector of the indices of possible constant columns. */
  maximum(X, constcols);
  minimum(X, r2);
  i = b_constcols->size[0] * b_constcols->size[1];
  b_constcols->size[0] = 1;
  b_constcols->size[1] = constcols->size[1];
  emxEnsureCapacity_boolean_T(b_constcols, i);
  loop_ub = constcols->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_constcols->data[i] = (constcols->data[i] - r2->data[i] == 0.0);
  }
  emxFree_real_T(&r2);
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
  if (constcols->size[1] >= 1) {
    loop_ub = constcols->size[1];
    i = c_constcols->size[0] * c_constcols->size[1];
    c_constcols->size[0] = 1;
    c_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_int32_T(c_constcols, i);
    for (i = 0; i < loop_ub; i++) {
      c_constcols->data[i] = (int)constcols->data[i];
    }
    nullAssignment(X, c_constcols);
  }
  emxFree_int32_T(&c_constcols);
  emxFree_real_T(&constcols);
  /*  p is the number of parameters to be estimated */
  if (end < X->size[1]) {
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
  emxArray_real_T *B;
  emxArray_real_T *b_X;
  emxArray_real_T *constcols;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  int end;
  int i;
  int loop_ub;
  int trueCount;
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
    emxInit_real_T(&B, 1);
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
      i = y->size[0];
      y->size[0] = X->size[0];
      emxEnsureCapacity_real_T(y, i);
      loop_ub = X->size[0];
      for (i = 0; i < loop_ub; i++) {
        y->data[i] = 0.0;
      }
    } else {
      i = y->size[0];
      y->size[0] = X->size[0];
      emxEnsureCapacity_real_T(y, i);
      cblas_dgemm(CblasColMajor, CblasNoTrans, CblasNoTrans,
                  (MKL_INT)X->size[0], (MKL_INT)1, (MKL_INT)X->size[1], 1.0,
                  &X->data[0], (MKL_INT)X->size[0], &B->data[0],
                  (MKL_INT)X->size[1], 0.0, &y->data[0], (MKL_INT)X->size[0]);
    }
    emxFree_real_T(&B);
    emxInit_boolean_T(&ok, 1);
    /*  Observations with missing or infinite values are removed from X and y */
    i = ok->size[0];
    ok->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(ok, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      ok->data[i] = rtIsInf(y->data[i]);
    }
    emxInit_boolean_T(&r, 1);
    i = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = rtIsNaN(y->data[i]);
    }
    emxFree_real_T(&y);
    loop_ub = ok->size[0];
    for (i = 0; i < loop_ub; i++) {
      ok->data[i] = ((!ok->data[i]) && (!r->data[i]));
    }
    emxFree_boolean_T(&r);
    end = ok->size[0] - 1;
    trueCount = 0;
    for (loop_ub = 0; loop_ub <= end; loop_ub++) {
      if (ok->data[loop_ub]) {
        trueCount++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r1, i);
    trueCount = 0;
    for (loop_ub = 0; loop_ub <= end; loop_ub++) {
      if (ok->data[loop_ub]) {
        r1->data[trueCount] = loop_ub + 1;
        trueCount++;
      }
    }
    emxFree_boolean_T(&ok);
    emxInit_real_T(&b_X, 2);
    trueCount = X->size[1] - 1;
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r1->size[0];
    b_X->size[1] = trueCount + 1;
    emxEnsureCapacity_real_T(b_X, i);
    for (i = 0; i <= trueCount; i++) {
      loop_ub = r1->size[0];
      for (end = 0; end < loop_ub; end++) {
        b_X->data[end + b_X->size[0] * i] =
            X->data[(r1->data[end] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    i = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(X, i);
    loop_ub = b_X->size[1];
    for (i = 0; i < loop_ub; i++) {
      trueCount = b_X->size[0];
      for (end = 0; end < trueCount; end++) {
        X->data[end + X->size[0] * i] = b_X->data[end + b_X->size[0] * i];
      }
    }
    emxFree_real_T(&b_X);
    /*  Now n is the new number of non missing observations */
    if ((X->size[0] == 0) || (X->size[1] == 0)) {
      end = 0;
    } else {
      trueCount = X->size[0];
      end = X->size[1];
      if (trueCount > end) {
        end = trueCount;
      }
    }
    emxInit_real_T(&constcols, 2);
    emxInit_real_T(&r2, 2);
    emxInit_boolean_T(&b_constcols, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(X, constcols);
    minimum(X, r2);
    i = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b_constcols, i);
    loop_ub = constcols->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_constcols->data[i] = (constcols->data[i] - r2->data[i] == 0.0);
    }
    emxFree_real_T(&r2);
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
    if (constcols->size[1] >= 1) {
      loop_ub = constcols->size[1];
      i = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1];
      emxEnsureCapacity_int32_T(c_constcols, i);
      for (i = 0; i < loop_ub; i++) {
        c_constcols->data[i] = (int)constcols->data[i];
      }
      nullAssignment(X, c_constcols);
    }
    emxFree_int32_T(&c_constcols);
    emxFree_real_T(&constcols);
    /*  p is the number of parameters to be estimated */
    if (end < X->size[1]) {
      int2str(X->size[0], c_X.data, c_X.size);
      int2str(X->size[1], c_X.data, c_X.size);
    }
    local_rank(X);
  }
}

/* End of code generation (chkinputM.c) */
