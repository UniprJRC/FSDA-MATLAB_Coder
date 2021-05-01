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
#include "FSRfan_wrapper_emxutil.h"
#include "FSRfan_wrapper_internal_types.h"
#include "FSRfan_wrapper_types.h"
#include "int2str.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void chkinputR(emxArray_real_T *y, emxArray_real_T *X, bool vvarargin_f2,
               bool vvarargin_f4, double *n, double *p)
{
  emxArray_boolean_T *b;
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *na_y;
  emxArray_boolean_T *r;
  emxArray_char_T_1x10 c_X;
  emxArray_int32_T *ii;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *b_X;
  emxArray_real_T *b_y;
  emxArray_real_T *constcols;
  emxArray_real_T *r3;
  double a;
  double b_tmp;
  int aoffset;
  int b_i;
  int b_n;
  int i;
  int k;
  int m;
  int ncolx;
  bool b_p;
  bool exitg1;
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
  if (vvarargin_f4) {
    *p = X->size[1];
    *n = X->size[0];
  } else {
    emxInit_real_T(&b_y, 1);
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    b_n = X->size[0] - 1;
    m = X->size[1];
    i = b_y->size[0];
    b_y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (b_i = 0; b_i <= b_n; b_i++) {
      b_y->data[b_i] = 0.0;
    }
    for (k = 0; k < m; k++) {
      aoffset = k * X->size[0];
      for (b_i = 0; b_i <= b_n; b_i++) {
        b_y->data[b_i] += X->data[aoffset + b_i];
      }
    }
    emxInit_boolean_T(&na_y, 1);
    i = na_y->size[0];
    na_y->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(na_y, i);
    aoffset = b_y->size[0];
    for (i = 0; i < aoffset; i++) {
      na_y->data[i] = rtIsInf(b_y->data[i]);
    }
    emxInit_boolean_T(&r, 1);
    i = r->size[0];
    r->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    aoffset = b_y->size[0];
    for (i = 0; i < aoffset; i++) {
      r->data[i] = rtIsNaN(b_y->data[i]);
    }
    emxInit_boolean_T(&na_X, 1);
    i = na_X->size[0];
    na_X->size[0] = na_y->size[0];
    emxEnsureCapacity_boolean_T(na_X, i);
    aoffset = na_y->size[0];
    for (i = 0; i < aoffset; i++) {
      na_X->data[i] = (na_y->data[i] || r->data[i]);
    }
    i = na_y->size[0];
    na_y->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(na_y, i);
    aoffset = y->size[0];
    for (i = 0; i < aoffset; i++) {
      na_y->data[i] = rtIsInf(y->data[i]);
    }
    i = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    aoffset = y->size[0];
    for (i = 0; i < aoffset; i++) {
      r->data[i] = rtIsNaN(y->data[i]);
    }
    aoffset = na_y->size[0];
    for (i = 0; i < aoffset; i++) {
      na_y->data[i] = (na_y->data[i] || r->data[i]);
    }
    emxFree_boolean_T(&r);
    /*  Observations with missing or infinite values are removed from X and y */
    m = na_X->size[0] - 1;
    aoffset = 0;
    for (b_i = 0; b_i <= m; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r1, i);
    aoffset = 0;
    for (b_i = 0; b_i <= m; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r1->data[aoffset] = b_i + 1;
        aoffset++;
      }
    }
    emxInit_real_T(&b_X, 2);
    m = X->size[1] - 1;
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r1->size[0];
    b_X->size[1] = m + 1;
    emxEnsureCapacity_real_T(b_X, i);
    for (i = 0; i <= m; i++) {
      aoffset = r1->size[0];
      for (ncolx = 0; ncolx < aoffset; ncolx++) {
        b_X->data[ncolx + b_X->size[0] * i] =
            X->data[(r1->data[ncolx] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    i = X->size[0] * X->size[1];
    X->size[0] = b_X->size[0];
    X->size[1] = b_X->size[1];
    emxEnsureCapacity_real_T(X, i);
    aoffset = b_X->size[1];
    for (i = 0; i < aoffset; i++) {
      b_n = b_X->size[0];
      for (ncolx = 0; ncolx < b_n; ncolx++) {
        X->data[ncolx + X->size[0] * i] = b_X->data[ncolx + b_X->size[0] * i];
      }
    }
    m = na_X->size[0] - 1;
    aoffset = 0;
    for (b_i = 0; b_i <= m; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r2, i);
    aoffset = 0;
    for (b_i = 0; b_i <= m; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r2->data[aoffset] = b_i + 1;
        aoffset++;
      }
    }
    emxFree_boolean_T(&na_y);
    emxFree_boolean_T(&na_X);
    i = b_y->size[0];
    b_y->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    aoffset = r2->size[0];
    for (i = 0; i < aoffset; i++) {
      b_y->data[i] = y->data[r2->data[i] - 1];
    }
    emxFree_int32_T(&r2);
    i = y->size[0];
    y->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(y, i);
    aoffset = b_y->size[0];
    for (i = 0; i < aoffset; i++) {
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
    if (vvarargin_f2) {
      i = b_X->size[0] * b_X->size[1];
      b_X->size[0] = X->size[0];
      b_X->size[1] = X->size[1];
      emxEnsureCapacity_real_T(b_X, i);
      aoffset = X->size[0] * X->size[1];
      for (i = 0; i < aoffset; i++) {
        b_X->data[i] = X->data[i];
      }
      aoffset = X->size[1] + 1;
      i = X->size[0] * X->size[1];
      X->size[0] = y->size[0];
      X->size[1] = aoffset;
      emxEnsureCapacity_real_T(X, i);
      i = y->size[0];
      for (aoffset = 0; aoffset < i; aoffset++) {
        X->data[aoffset] = 1.0;
      }
      ncolx = b_X->size[0] * b_X->size[1];
      for (aoffset = 0; aoffset < ncolx; aoffset++) {
        X->data[i + aoffset] = b_X->data[aoffset];
      }
    }
    emxFree_real_T(&b_X);
    emxInit_real_T(&constcols, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    m = X->size[0];
    b_n = X->size[1];
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = X->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    if (X->size[1] >= 1) {
      for (aoffset = 0; aoffset < b_n; aoffset++) {
        constcols->data[aoffset] = X->data[X->size[0] * aoffset];
        for (b_i = 2; b_i <= m; b_i++) {
          a = constcols->data[aoffset];
          b_tmp = X->data[(b_i + X->size[0] * aoffset) - 1];
          if (rtIsNaN(b_tmp)) {
            b_p = false;
          } else if (rtIsNaN(a)) {
            b_p = true;
          } else {
            b_p = (a < b_tmp);
          }
          if (b_p) {
            constcols->data[aoffset] = b_tmp;
          }
        }
      }
    }
    emxInit_real_T(&r3, 2);
    m = X->size[0];
    b_n = X->size[1];
    i = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    r3->size[1] = X->size[1];
    emxEnsureCapacity_real_T(r3, i);
    if (X->size[1] >= 1) {
      for (aoffset = 0; aoffset < b_n; aoffset++) {
        r3->data[aoffset] = X->data[X->size[0] * aoffset];
        for (b_i = 2; b_i <= m; b_i++) {
          a = r3->data[aoffset];
          b_tmp = X->data[(b_i + X->size[0] * aoffset) - 1];
          if (rtIsNaN(b_tmp)) {
            b_p = false;
          } else if (rtIsNaN(a)) {
            b_p = true;
          } else {
            b_p = (a > b_tmp);
          }
          if (b_p) {
            r3->data[aoffset] = b_tmp;
          }
        }
      }
    }
    emxInit_boolean_T(&b, 2);
    i = b->size[0] * b->size[1];
    b->size[0] = 1;
    b->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b, i);
    aoffset = constcols->size[1];
    for (i = 0; i < aoffset; i++) {
      b->data[i] = (constcols->data[i] - r3->data[i] == 0.0);
    }
    emxFree_real_T(&r3);
    emxInit_int32_T(&ii, 2);
    m = b->size[1];
    b_n = 0;
    i = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = b->size[1];
    emxEnsureCapacity_int32_T(ii, i);
    aoffset = 0;
    exitg1 = false;
    while ((!exitg1) && (aoffset <= m - 1)) {
      if (b->data[aoffset]) {
        b_n++;
        ii->data[b_n - 1] = aoffset + 1;
        if (b_n >= m) {
          exitg1 = true;
        } else {
          aoffset++;
        }
      } else {
        aoffset++;
      }
    }
    if (b->size[1] == 1) {
      if (b_n == 0) {
        ii->size[0] = 1;
        ii->size[1] = 0;
      }
    } else {
      i = ii->size[0] * ii->size[1];
      if (1 > b_n) {
        ii->size[1] = 0;
      } else {
        ii->size[1] = b_n;
      }
      emxEnsureCapacity_int32_T(ii, i);
    }
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    aoffset = ii->size[1];
    for (i = 0; i < aoffset; i++) {
      constcols->data[i] = ii->data[i];
    }
    if (constcols->size[1] > 1) {
      aoffset = constcols->size[1] - 2;
      i = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(ii, i);
      for (i = 0; i <= aoffset; i++) {
        ii->data[i] = (int)(unsigned int)constcols->data[i + 1];
      }
      m = X->size[0] - 1;
      ncolx = X->size[1];
      if (ii->size[1] == 1) {
        b_n = X->size[1] - 1;
        i = ii->data[0];
        for (aoffset = i; aoffset <= b_n; aoffset++) {
          for (b_i = 0; b_i <= m; b_i++) {
            X->data[b_i + X->size[0] * (aoffset - 1)] =
                X->data[b_i + X->size[0] * aoffset];
          }
        }
      } else {
        i = b->size[0] * b->size[1];
        b->size[0] = 1;
        b->size[1] = X->size[1];
        emxEnsureCapacity_boolean_T(b, i);
        aoffset = X->size[1];
        for (i = 0; i < aoffset; i++) {
          b->data[i] = false;
        }
        i = ii->size[1];
        for (k = 0; k < i; k++) {
          b->data[ii->data[k] - 1] = true;
        }
        b_n = 0;
        i = b->size[1];
        for (k = 0; k < i; k++) {
          b_n += b->data[k];
        }
        b_n = X->size[1] - b_n;
        aoffset = 0;
        for (k = 0; k < ncolx; k++) {
          if ((k + 1 > b->size[1]) || (!b->data[k])) {
            for (b_i = 0; b_i <= m; b_i++) {
              X->data[b_i + X->size[0] * aoffset] =
                  X->data[b_i + X->size[0] * k];
            }
            aoffset++;
          }
        }
      }
      if (1 > b_n) {
        aoffset = 0;
      } else {
        aoffset = b_n;
      }
      m = X->size[0] - 1;
      b_n = X->size[0];
      for (i = 0; i < aoffset; i++) {
        for (ncolx = 0; ncolx < b_n; ncolx++) {
          X->data[ncolx + (m + 1) * i] = X->data[ncolx + X->size[0] * i];
        }
      }
      i = X->size[0] * X->size[1];
      X->size[0] = m + 1;
      X->size[1] = aoffset;
      emxEnsureCapacity_real_T(X, i);
    }
    emxFree_boolean_T(&b);
    emxFree_int32_T(&ii);
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
