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
#include "FSMmmd_wrapper_emxutil.h"
#include "FSMmmd_wrapper_internal_types.h"
#include "FSMmmd_wrapper_types.h"
#include "int2str.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void chkinputM(emxArray_real_T *X, bool vvarargin_f8)
{
  emxArray_boolean_T *b;
  emxArray_boolean_T *ok;
  emxArray_boolean_T *r;
  emxArray_char_T_1x10 c_X;
  emxArray_int32_T *ii;
  emxArray_int32_T *r1;
  emxArray_real_T *b_X;
  emxArray_real_T *constcols;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  double a;
  double b_tmp;
  int aoffset;
  int b_i;
  int i;
  int idx;
  int k;
  int n;
  int ncolx;
  int nrowx;
  int u1;
  bool exitg1;
  bool p;
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
  if (!vvarargin_f8) {
    emxInit_real_T(&y, 1);
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    n = X->size[0] - 1;
    idx = X->size[1];
    i = y->size[0];
    y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(y, i);
    for (b_i = 0; b_i <= n; b_i++) {
      y->data[b_i] = 0.0;
    }
    for (k = 0; k < idx; k++) {
      aoffset = k * X->size[0];
      for (b_i = 0; b_i <= n; b_i++) {
        y->data[b_i] += X->data[aoffset + b_i];
      }
    }
    emxInit_boolean_T(&ok, 1);
    /*  Observations with missing or infinite values are removed from X and y */
    i = ok->size[0];
    ok->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(ok, i);
    idx = y->size[0];
    for (i = 0; i < idx; i++) {
      ok->data[i] = rtIsInf(y->data[i]);
    }
    emxInit_boolean_T(&r, 1);
    i = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    idx = y->size[0];
    for (i = 0; i < idx; i++) {
      r->data[i] = rtIsNaN(y->data[i]);
    }
    emxFree_real_T(&y);
    idx = ok->size[0];
    for (i = 0; i < idx; i++) {
      ok->data[i] = ((!ok->data[i]) && (!r->data[i]));
    }
    emxFree_boolean_T(&r);
    n = ok->size[0] - 1;
    aoffset = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (ok->data[b_i]) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r1, i);
    aoffset = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if (ok->data[b_i]) {
        r1->data[aoffset] = b_i + 1;
        aoffset++;
      }
    }
    emxFree_boolean_T(&ok);
    emxInit_real_T(&b_X, 2);
    aoffset = X->size[1] - 1;
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r1->size[0];
    b_X->size[1] = aoffset + 1;
    emxEnsureCapacity_real_T(b_X, i);
    for (i = 0; i <= aoffset; i++) {
      idx = r1->size[0];
      for (nrowx = 0; nrowx < idx; nrowx++) {
        b_X->data[nrowx + b_X->size[0] * i] =
            X->data[(r1->data[nrowx] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    i = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(X, i);
    idx = b_X->size[1];
    for (i = 0; i < idx; i++) {
      n = b_X->size[0];
      for (nrowx = 0; nrowx < n; nrowx++) {
        X->data[nrowx + X->size[0] * i] = b_X->data[nrowx + b_X->size[0] * i];
      }
    }
    emxFree_real_T(&b_X);
    /*  Now n is the new number of non missing observations */
    if ((X->size[0] == 0) || (X->size[1] == 0)) {
      u1 = 0;
    } else {
      aoffset = X->size[0];
      u1 = X->size[1];
      if (aoffset > u1) {
        u1 = aoffset;
      }
    }
    emxInit_real_T(&constcols, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    aoffset = X->size[0];
    n = X->size[1];
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = X->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    if (X->size[1] >= 1) {
      for (idx = 0; idx < n; idx++) {
        constcols->data[idx] = X->data[X->size[0] * idx];
        for (b_i = 2; b_i <= aoffset; b_i++) {
          a = constcols->data[idx];
          b_tmp = X->data[(b_i + X->size[0] * idx) - 1];
          if (rtIsNaN(b_tmp)) {
            p = false;
          } else if (rtIsNaN(a)) {
            p = true;
          } else {
            p = (a < b_tmp);
          }
          if (p) {
            constcols->data[idx] = b_tmp;
          }
        }
      }
    }
    emxInit_real_T(&r2, 2);
    aoffset = X->size[0];
    n = X->size[1];
    i = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    r2->size[1] = X->size[1];
    emxEnsureCapacity_real_T(r2, i);
    if (X->size[1] >= 1) {
      for (idx = 0; idx < n; idx++) {
        r2->data[idx] = X->data[X->size[0] * idx];
        for (b_i = 2; b_i <= aoffset; b_i++) {
          a = r2->data[idx];
          b_tmp = X->data[(b_i + X->size[0] * idx) - 1];
          if (rtIsNaN(b_tmp)) {
            p = false;
          } else if (rtIsNaN(a)) {
            p = true;
          } else {
            p = (a > b_tmp);
          }
          if (p) {
            r2->data[idx] = b_tmp;
          }
        }
      }
    }
    emxInit_boolean_T(&b, 2);
    i = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b, i);
    idx = constcols->size[1];
    for (i = 0; i < idx; i++) {
      b->data[i] = (constcols->data[i] - r2->data[i] == 0.0);
    }
    emxFree_real_T(&r2);
    emxInit_int32_T(&ii, 2);
    n = b->size[1];
    idx = 0;
    i = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = b->size[1];
    emxEnsureCapacity_int32_T(ii, i);
    aoffset = 0;
    exitg1 = false;
    while ((!exitg1) && (aoffset <= n - 1)) {
      if (b->data[aoffset]) {
        idx++;
        ii->data[idx - 1] = aoffset + 1;
        if (idx >= n) {
          exitg1 = true;
        } else {
          aoffset++;
        }
      } else {
        aoffset++;
      }
    }
    if (b->size[1] == 1) {
      if (idx == 0) {
        ii->size[0] = 1;
        ii->size[1] = 0;
      }
    } else {
      i = ii->size[0] * ii->size[1];
      if (1 > idx) {
        ii->size[1] = 0;
      } else {
        ii->size[1] = idx;
      }
      emxEnsureCapacity_int32_T(ii, i);
    }
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    idx = ii->size[1];
    for (i = 0; i < idx; i++) {
      constcols->data[i] = ii->data[i];
    }
    if (constcols->size[1] >= 1) {
      idx = constcols->size[1];
      i = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = constcols->size[1];
      emxEnsureCapacity_int32_T(ii, i);
      for (i = 0; i < idx; i++) {
        ii->data[i] = (int)(unsigned int)constcols->data[i];
      }
      nrowx = X->size[0] - 1;
      ncolx = X->size[1];
      if (ii->size[1] == 1) {
        aoffset = X->size[1] - 1;
        i = ii->data[0];
        for (idx = i; idx <= aoffset; idx++) {
          for (b_i = 0; b_i <= nrowx; b_i++) {
            X->data[b_i + X->size[0] * (idx - 1)] =
                X->data[b_i + X->size[0] * idx];
          }
        }
      } else {
        i = b->size[0] * b->size[1];
        b->size[0] = 1;
        b->size[1] = X->size[1];
        emxEnsureCapacity_boolean_T(b, i);
        idx = X->size[1];
        for (i = 0; i < idx; i++) {
          b->data[i] = false;
        }
        i = ii->size[1];
        for (k = 0; k < i; k++) {
          b->data[ii->data[k] - 1] = true;
        }
        n = 0;
        i = b->size[1];
        for (k = 0; k < i; k++) {
          n += b->data[k];
        }
        aoffset = X->size[1] - n;
        idx = 0;
        for (k = 0; k < ncolx; k++) {
          if ((k + 1 > b->size[1]) || (!b->data[k])) {
            for (b_i = 0; b_i <= nrowx; b_i++) {
              X->data[b_i + X->size[0] * idx] = X->data[b_i + X->size[0] * k];
            }
            idx++;
          }
        }
      }
      if (1 > aoffset) {
        idx = 0;
      } else {
        idx = aoffset;
      }
      aoffset = X->size[0] - 1;
      n = X->size[0];
      for (i = 0; i < idx; i++) {
        for (nrowx = 0; nrowx < n; nrowx++) {
          X->data[nrowx + (aoffset + 1) * i] = X->data[nrowx + X->size[0] * i];
        }
      }
      i = X->size[0] * X->size[1];
      X->size[0] = aoffset + 1;
      X->size[1] = idx;
      emxEnsureCapacity_real_T(X, i);
    }
    emxFree_boolean_T(&b);
    emxFree_int32_T(&ii);
    emxFree_real_T(&constcols);
    /*  p is the number of parameters to be estimated */
    if (u1 < X->size[1]) {
      int2str(X->size[0], c_X.data, c_X.size);
      int2str(X->size[1], c_X.data, c_X.size);
    }
    local_rank(X);
  }
}

/* End of code generation (chkinputM.c) */
