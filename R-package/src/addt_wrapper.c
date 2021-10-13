/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * addt_wrapper.c
 *
 * Code generation for function 'addt_wrapper'
 *
 */

/* Include files */
#include "addt_wrapper.h"
#include "addt.h"
#include "betainc.h"
#include "blockedSummation.h"
#include "chkinputR.h"
#include "eml_erfcore.h"
#include "find.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "int2str.h"
#include "minOrMax.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "nullAssignment.h"
#include "qr.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void addt_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                  const emxArray_real_T *w, bool intercept,
                  const double la_data[], const int la_size[2], bool nocheck,
                  struct_addt_T *out)
{
  emxArray_boolean_T *c_constcols;
  emxArray_boolean_T *ok;
  emxArray_boolean_T *r;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *x;
  emxArray_char_T_1x310 c_X;
  emxArray_int32_T *b_constcols;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_real_T *A;
  emxArray_real_T *Aw;
  emxArray_real_T *E;
  emxArray_real_T *R;
  emxArray_real_T *b_A;
  emxArray_real_T *b_X;
  emxArray_real_T *b_p;
  emxArray_real_T *b_y;
  emxArray_real_T *constcols;
  emxArray_real_T *la;
  emxArray_real_T *r8;
  emxArray_real_T *z;
  const double *X_data;
  const double *w_data;
  const double *y_data;
  double G;
  double b;
  double n_tmp;
  double varargin_1;
  double *A_data;
  double *Aw_data;
  double *E_data;
  double *b_A_data;
  double *b_X_data;
  double *b_y_data;
  double *constcols_data;
  double *z_data;
  int aoffset;
  int i;
  int inner;
  int k;
  int n;
  int nx;
  int p;
  unsigned int siz_idx_0;
  int *b_constcols_data;
  bool c_y;
  bool exitg1;
  bool *ok_data;
  bool *r1;
  bool *r3;
  bool *r5;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  w_data = w->data;
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&b_X, 2);
  /*  Example wrapper function for addt. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  w: a column vector of doubles of any length */
  /*  ARGS{1}{3} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  Optional input arguments (name / pairs) */
  /*  intercept = a scalar boolean (first varargin) */
  /*  ARGS{1}{4} = coder.Constant('intercept'); */
  /*  ARGS{1}{5} = coder.typeof(true); */
  /*  la a scalar of type double or empty value (second varargin) */
  /*  ARGS{1}{6} = coder.Constant('la'); */
  /*  ARGS{1}{7} = coder.typeof(1,[1 1],[1 1]); */
  /*  nocheck a logical */
  /* addt produces the t test for an additional explanatory variable */
  /*  */
  /* <a href="matlab: docsearchFS('addt')">Link to the help page for this
   * function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*        y:  A vector with n elements that contains the response variable. */
  /*            y can be both a row of column vector. */
  /*        X:  Data matrix of explanatory variables (also called */
  /*            'regressors'). */
  /*            Rows of X represent observations and columns represent */
  /*            variables. */
  /*            Missing values (NaN's) and infinite values (Inf's) are allowed,
   */
  /*            since observations (rows) with missing or infinite values will
   */
  /*            automatically be excluded from the computations. */
  /*        w:  added variable. Vector. n-times-1 vector containing the
   * additional */
  /*            explanatory variable whose t test must be computed. */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false. */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove
   */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*    la:         Transformation parameter. Scalar | '' (empty value). */
  /*                It specifies for which Box Cox */
  /*                transformation parameter it is necessary to compute the t */
  /*                statistic for the additional variable. If la is an empty */
  /*                value (default) no transformation is used. */
  /*                Example - 'la',0.5 tests square root transformation */
  /*                Data Types - double */
  /*  */
  /*  nocheck :     Check input arguments. Boolean. */
  /*                If nocheck is equal to true no check is performed on */
  /*                matrix y and matrix X. Notice that y and X are left */
  /*                unchanged. In other words the additional column of ones */
  /*                for the intercept is not added. As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - logical */
  /*  */
  /*    plots:      Plot on the screen. Scalar. */
  /*                If plots=1 the added variable */
  /*                plot is produced else (default) no plot is produced. */
  /*                Example - 'plots',1 */
  /*                Data Types - double */
  /*  */
  /*    FontSize:   Label font size inside plot. Scalar. It controls the */
  /*                fontsize of the labels of the axes and eventual plot */
  /*                labels. Default value is 10 */
  /*                Example - 'FontSize',14 */
  /*                Data Types - double */
  /*  */
  /*    SizeAxesNum: Font size of axes numbers. Scalar. It controls the */
  /*                fontsize of the numbers of the */
  /*                axes. Default value is 10 */
  /*                Example - SizeAxesNum,12 */
  /*                Data Types - double */
  /*    textlab:    Labels of units in the plot. Boolean. If textlab=false */
  /*                (default) no text label is written on the plot */
  /*                for units else text label of units are added on the plot */
  /*                Example - 'textlab',true */
  /*                Data Types - boolean */
  /*  */
  /*    units:      Units to remove. Vector. */
  /*                Vector containing the list of */
  /*                units which has to be removed in the computation of the */
  /*                test. The default is to use all units */
  /*                Example - 'units',[1,3] removes units 1 and 3 */
  /*                Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /*        out.b=          estimate of the slope for additional explanatory */
  /*                        variable */
  /*        out.S2add=  estimate of $s^2$ of the model which contains the */
  /*                        additional explanatory variable */
  /*        out.Tadd=         t statistic for additional explanatory variable */
  /*        out.pval=         p-value of the t statistic */
  /*  */
  /*  See also FSRaddt */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('addt')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% addt with all default options. */
  /*     % Compute the t test for an additional regressor. */
  /*     XX=load('wool.txt'); */
  /*     y=log(XX(:,end)); */
  /*     X=XX(:,1:end-2); */
  /*     w=XX(:,end-1); */
  /*     [out]=addt(y,X,w); */
  /*      */
  /*     % out.Tadd (equal to -8.9707) is exactly equal to stats.tstat.t(4) */
  /*     % obtained as */
  /*      */
  /*     whichstats = {'tstat','mse'}; */
  /*     stats = regstats(y,XX(:,1:end-1),'linear',whichstats); */
  /*      */
  /*     % Similarly out.S2add (equal to 0.0345) is exactly equal to stats.mse
   * (estimate of */
  /*     % \sigma^2 for augmented model) */
  /* } */
  /* { */
  /*     %% addt with optional arguments. */
  /*     % Excluding one observation from the sample; compare the added variable
   * plot */
  /*     % based on all units with that which excludes unit 43. */
  /*     load('multiple_regression.txt'); */
  /*     y=multiple_regression(:,4); */
  /*     X=multiple_regression(:,1:3); */
  /*     [out]=addt(y,X(:,2:3),X(:,1),'plots',1,'units',[43],'textlab',true); */
  /* } */
  /* { */
  /*     %% Excluding more than one observation from the sample. */
  /*     % Compare the added variable plot based on all units with that which
   * excludes units */
  /*     % 9,21,30,31,38 and 47. */
  /*     load('multiple_regression.txt'); */
  /*     y=multiple_regression(:,4); */
  /*     X=multiple_regression(:,1:3); */
  /*     [out]=addt(y,X(:,2:3),X(:,1),'plots',1,'units',[9 21 30 31 38
   * 47]','textlab',true); */
  /* } */
  /*  */
  /*  Beginning of code */
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = X->size[0];
  b_X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(b_X, i);
  b_X_data = b_X->data;
  nx = X->size[0] * X->size[1];
  for (i = 0; i < nx; i++) {
    b_X_data[i] = X_data[i];
  }
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    b_y_data[i] = y_data[i];
  }
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
  emxInit_real_T(&A, 2);
  emxInit_real_T(&constcols, 2);
  if (nocheck) {
    p = X->size[1];
    n = X->size[0];
  } else {
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    nx = X->size[0] - 1;
    inner = X->size[1];
    i = b_y->size[0];
    b_y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    b_y_data = b_y->data;
    for (i = 0; i <= nx; i++) {
      b_y_data[i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * X->size[0];
      for (i = 0; i <= nx; i++) {
        b_y_data[i] += X_data[aoffset + i];
      }
    }
    emxInit_boolean_T(&ok, 1);
    /*  Observations with missing or infinite values are removed from X and y */
    i = ok->size[0];
    ok->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(ok, i);
    ok_data = ok->data;
    nx = b_y->size[0];
    for (i = 0; i < nx; i++) {
      ok_data[i] = rtIsInf(b_y_data[i]);
    }
    emxInit_boolean_T(&r, 1);
    i = r->size[0];
    r->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    r1 = r->data;
    nx = b_y->size[0];
    for (i = 0; i < nx; i++) {
      r1[i] = rtIsNaN(b_y_data[i]);
    }
    emxInit_boolean_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r2, i);
    r3 = r2->data;
    nx = y->size[0];
    for (i = 0; i < nx; i++) {
      r3[i] = rtIsInf(y_data[i]);
    }
    emxInit_boolean_T(&r4, 1);
    i = r4->size[0];
    r4->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r4, i);
    r5 = r4->data;
    nx = y->size[0];
    for (i = 0; i < nx; i++) {
      r5[i] = rtIsNaN(y_data[i]);
    }
    if (ok->size[0] == r2->size[0]) {
      nx = ok->size[0];
      for (i = 0; i < nx; i++) {
        ok_data[i] = ((!ok_data[i]) && (!r1[i]) && ((!r3[i]) && (!r5[i])));
      }
    } else {
      ib_binary_expand_op(ok, r, r2, r4);
      ok_data = ok->data;
    }
    emxFree_boolean_T(&r4);
    emxFree_boolean_T(&r2);
    emxFree_boolean_T(&r);
    aoffset = ok->size[0] - 1;
    nx = 0;
    for (i = 0; i <= aoffset; i++) {
      if (ok_data[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r6, 1);
    i = r6->size[0];
    r6->size[0] = nx;
    emxEnsureCapacity_int32_T(r6, i);
    b_constcols_data = r6->data;
    nx = 0;
    for (i = 0; i <= aoffset; i++) {
      if (ok_data[i]) {
        b_constcols_data[nx] = i + 1;
        nx++;
      }
    }
    nx = X->size[1];
    i = b_X->size[0] * b_X->size[1];
    b_X->size[0] = r6->size[0];
    b_X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(b_X, i);
    b_X_data = b_X->data;
    for (i = 0; i < nx; i++) {
      aoffset = r6->size[0];
      for (inner = 0; inner < aoffset; inner++) {
        b_X_data[inner + b_X->size[0] * i] =
            X_data[(b_constcols_data[inner] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r6);
    aoffset = ok->size[0] - 1;
    nx = 0;
    for (i = 0; i <= aoffset; i++) {
      if (ok_data[i]) {
        nx++;
      }
    }
    emxInit_int32_T(&r7, 1);
    i = r7->size[0];
    r7->size[0] = nx;
    emxEnsureCapacity_int32_T(r7, i);
    b_constcols_data = r7->data;
    nx = 0;
    for (i = 0; i <= aoffset; i++) {
      if (ok_data[i]) {
        b_constcols_data[nx] = i + 1;
        nx++;
      }
    }
    emxFree_boolean_T(&ok);
    i = b_y->size[0];
    b_y->size[0] = r7->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    b_y_data = b_y->data;
    nx = r7->size[0];
    for (i = 0; i < nx; i++) {
      b_y_data[i] = y_data[b_constcols_data[i] - 1];
    }
    /*  Now n is the new number of non missing observations */
    n = r7->size[0];
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
    if (intercept) {
      i = A->size[0] * A->size[1];
      A->size[0] = b_X->size[0];
      A->size[1] = b_X->size[1];
      emxEnsureCapacity_real_T(A, i);
      A_data = A->data;
      nx = b_X->size[0] * b_X->size[1];
      for (i = 0; i < nx; i++) {
        A_data[i] = b_X_data[i];
      }
      i = b_X->size[0] * b_X->size[1];
      b_X->size[0] = r7->size[0];
      b_X->size[1] = X->size[1] + 1;
      emxEnsureCapacity_real_T(b_X, i);
      b_X_data = b_X->data;
      i = r7->size[0];
      for (nx = 0; nx < i; nx++) {
        b_X_data[nx] = 1.0;
      }
      inner = A->size[0] * A->size[1];
      for (nx = 0; nx < inner; nx++) {
        b_X_data[i + nx] = A_data[nx];
      }
    }
    emxInit_real_T(&r8, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(b_X, constcols);
    constcols_data = constcols->data;
    minimum(b_X, r8);
    b_A_data = r8->data;
    emxInit_int32_T(&b_constcols, 2);
    if (constcols->size[1] == r8->size[1]) {
      emxInit_boolean_T(&c_constcols, 2);
      i = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1];
      emxEnsureCapacity_boolean_T(c_constcols, i);
      ok_data = c_constcols->data;
      nx = constcols->size[1];
      for (i = 0; i < nx; i++) {
        ok_data[i] = (constcols_data[i] - b_A_data[i] == 0.0);
      }
      eml_find(c_constcols, b_constcols);
      b_constcols_data = b_constcols->data;
      emxFree_boolean_T(&c_constcols);
    } else {
      hb_binary_expand_op(b_constcols, constcols, r8);
      b_constcols_data = b_constcols->data;
    }
    emxFree_real_T(&r8);
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = b_constcols->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    constcols_data = constcols->data;
    nx = b_constcols->size[1];
    for (i = 0; i < nx; i++) {
      constcols_data[i] = b_constcols_data[i];
    }
    if (constcols->size[1] > 1) {
      nx = constcols->size[1] - 2;
      i = b_constcols->size[0] * b_constcols->size[1];
      b_constcols->size[0] = 1;
      b_constcols->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(b_constcols, i);
      b_constcols_data = b_constcols->data;
      for (i = 0; i <= nx; i++) {
        b_constcols_data[i] = (int)constcols_data[i + 1];
      }
      nullAssignment(b_X, b_constcols);
    }
    emxFree_int32_T(&b_constcols);
    /*  p is the number of parameters to be estimated */
    p = b_X->size[1];
    if (r7->size[0] < b_X->size[1]) {
      int2str(b_X->size[0], c_X.data, c_X.size);
      int2str(b_X->size[1], c_X.data, c_X.size);
    }
    emxFree_int32_T(&r7);
    local_rank(b_X);
  }
  emxInit_real_T(&E, 2);
  emxInit_real_T(&R, 2);
  /*  Insert code for intercept */
  /*  t test for an additional explanatory variable */
  qr(b_X, A, R);
  mrdiv(b_X, R, E);
  E_data = E->data;
  i = b_X->size[0] * b_X->size[1];
  b_X->size[0] = E->size[0];
  b_X->size[1] = E->size[1];
  emxEnsureCapacity_real_T(b_X, i);
  b_X_data = b_X->data;
  nx = E->size[0] * E->size[1];
  for (i = 0; i < nx; i++) {
    b_X_data[i] = -E_data[i];
  }
  d_mtimes(b_X, E, A);
  A_data = A->data;
  if (n < 1) {
    constcols->size[1] = 0;
  } else {
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = n;
    emxEnsureCapacity_real_T(constcols, i);
    constcols_data = constcols->data;
    nx = n - 1;
    for (i = 0; i <= nx; i++) {
      constcols_data[i] = (double)i + 1.0;
    }
  }
  siz_idx_0 = (unsigned int)A->size[0];
  /*  Find linear indexes */
  /*  It is better to compute linind directly rather than calling sub2ind */
  /*  linind=sub2ind(siz,sel,sel); */
  nx = constcols->size[1] - 1;
  i = constcols->size[0] * constcols->size[1];
  constcols->size[0] = 1;
  emxEnsureCapacity_real_T(constcols, i);
  constcols_data = constcols->data;
  for (i = 0; i <= nx; i++) {
    G = constcols_data[i];
    G += (G - 1.0) * (double)siz_idx_0;
    constcols_data[i] = G;
  }
  emxInit_real_T(&b_A, 1);
  nx = constcols->size[1];
  i = b_A->size[0];
  b_A->size[0] = constcols->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  b_A_data = b_A->data;
  for (i = 0; i < nx; i++) {
    b_A_data[i] = A_data[(int)constcols_data[i] - 1] + 1.0;
  }
  nx = b_A->size[0];
  for (i = 0; i < nx; i++) {
    A_data[(int)constcols_data[i] - 1] = b_A_data[i];
  }
  emxFree_real_T(&constcols);
  /*  Notice that: */
  /*  -E*E' = matrix -H = -X*inv(X'X)*X' computed through qr decomposition */
  /*  A = Matrix I - H */
  emxInit_real_T(&z, 2);
  emxInit_boolean_T(&x, 2);
  emxInit_real_T(&la, 2);
  if ((la_size[0] != 0) && (la_size[1] != 0)) {
    /* geometric mean of the y */
    i = b_A->size[0];
    b_A->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(b_A, i);
    b_A_data = b_A->data;
    nx = b_y->size[0];
    for (i = 0; i < nx; i++) {
      b_A_data[i] = b_y_data[i];
    }
    nx = b_y->size[0];
    for (k = 0; k < nx; k++) {
      b_A_data[k] = log(b_A_data[k]);
    }
    G = exp(blockedSummation(b_A, b_A->size[0]) / (double)b_A->size[0]);
    /*   if la1==0 */
    i = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = 1;
    emxEnsureCapacity_boolean_T(x, i);
    ok_data = x->data;
    ok_data[0] = (la_data[0] == 0.0);
    if (!ok_data[0]) {
      i = b_A->size[0];
      b_A->size[0] = b_y->size[0];
      emxEnsureCapacity_real_T(b_A, i);
      b_A_data = b_A->data;
      nx = b_y->size[0];
      for (i = 0; i < nx; i++) {
        varargin_1 = b_y_data[i];
        b_A_data[i] = rt_powd_snf(varargin_1, la_data[0]);
      }
      nx = b_A->size[0];
      for (i = 0; i < nx; i++) {
        b_A_data[i]--;
      }
      i = la->size[0] * la->size[1];
      la->size[0] = 1;
      la->size[1] = 1;
      emxEnsureCapacity_real_T(la, i);
      b_A_data = la->data;
      b_A_data[0] = la_data[0] * rt_powd_snf(G, la_data[0] - 1.0);
      b_mrdiv(b_A, la, R);
      constcols_data = R->data;
      i = z->size[0] * z->size[1];
      z->size[0] = R->size[0];
      z->size[1] = R->size[1];
      emxEnsureCapacity_real_T(z, i);
      z_data = z->data;
      nx = R->size[0] * R->size[1];
      for (i = 0; i < nx; i++) {
        z_data[i] = constcols_data[i];
      }
    } else {
      nx = b_A->size[0];
      for (i = 0; i < nx; i++) {
        b_A_data[i] *= G;
      }
      i = z->size[0] * z->size[1];
      z->size[0] = b_A->size[0];
      z->size[1] = 1;
      emxEnsureCapacity_real_T(z, i);
      z_data = z->data;
      nx = b_A->size[0];
      for (i = 0; i < nx; i++) {
        z_data[i] = b_A_data[i];
      }
    }
  } else {
    i = z->size[0] * z->size[1];
    z->size[0] = b_y->size[0];
    z->size[1] = 1;
    emxEnsureCapacity_real_T(z, i);
    z_data = z->data;
    nx = b_y->size[0];
    for (i = 0; i < nx; i++) {
      z_data[i] = b_y_data[i];
    }
  }
  emxInit_real_T(&Aw, 1);
  nx = A->size[0] - 1;
  inner = A->size[1];
  i = Aw->size[0];
  Aw->size[0] = A->size[0];
  emxEnsureCapacity_real_T(Aw, i);
  Aw_data = Aw->data;
  for (i = 0; i <= nx; i++) {
    Aw_data[i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * A->size[0];
    for (i = 0; i <= nx; i++) {
      Aw_data[i] += A_data[aoffset + i] * w_data[k];
    }
  }
  nx = z->size[1] - 1;
  inner = z->size[0];
  i = b_y->size[0];
  b_y->size[0] = z->size[1];
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  if (0 <= z->size[1] - 1) {
    b_y_data[0] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    for (i = 0; i <= nx; i++) {
      b_y_data[0] += z_data[k] * Aw_data[k];
    }
  }
  varargin_1 = 0.0;
  nx = w->size[0];
  for (i = 0; i < nx; i++) {
    varargin_1 += w_data[i] * Aw_data[i];
  }
  if (varargin_1 < 1.0E-12) {
    i = out->S2add->size[0] * out->S2add->size[1];
    out->S2add->size[0] = 1;
    out->S2add->size[1] = 1;
    emxEnsureCapacity_real_T(out->S2add, i);
    out->S2add->data[0] = rtNaN;
    i = out->Tadd->size[0] * out->Tadd->size[1];
    out->Tadd->size[0] = 1;
    out->Tadd->size[1] = 1;
    emxEnsureCapacity_real_T(out->Tadd, i);
    out->Tadd->data[0] = rtNaN;
    out->b.size[0] = 1;
    out->b.data[0] = rtNaN;
    i = out->pval->size[0] * out->pval->size[1];
    out->pval->size[0] = 1;
    out->pval->size[1] = 1;
    emxEnsureCapacity_real_T(out->pval, i);
    out->pval->data[0] = rtNaN;
  } else {
    /*  b=regress(Az,Aw); */
    out->b.size[0] = z->size[1];
    nx = z->size[1];
    for (i = 0; i < nx; i++) {
      out->b.data[0] = b_y_data[0] / varargin_1;
    }
    aoffset = z->size[1];
    nx = z->size[1];
    for (i = 0; i < nx; i++) {
      G = b_y_data[0] * b_y_data[0] / varargin_1;
    }
    b_mtimes(A, z, b_X);
    c_mtimes(z, b_X, E);
    E_data = E->data;
    if (E->size[0] == z->size[1]) {
      i = b_X->size[0] * b_X->size[1];
      b_X->size[0] = E->size[0];
      b_X->size[1] = E->size[1];
      emxEnsureCapacity_real_T(b_X, i);
      b_X_data = b_X->data;
      nx = E->size[1];
      for (i = 0; i < nx; i++) {
        aoffset = E->size[0];
        for (inner = 0; inner < aoffset; inner++) {
          b_X_data[b_X->size[0] * i] = E_data[E->size[0] * i] - G;
        }
      }
      i = E->size[0] * E->size[1];
      E->size[0] = b_X->size[0];
      E->size[1] = b_X->size[1];
      emxEnsureCapacity_real_T(E, i);
      E_data = E->data;
      nx = b_X->size[0] * b_X->size[1];
      for (i = 0; i < nx; i++) {
        E_data[i] = b_X_data[i];
      }
    } else {
      ef_binary_expand_op(E, (double *)&G, &aoffset);
      E_data = E->data;
    }
    nx = E->size[0] * E->size[1];
    for (k = 0; k < nx; k++) {
      E_data[k] = sqrt(E_data[k]);
    }
    /*  See Atkinson (1985) p. 98 */
    b_mtimes(E, E, R);
    constcols_data = R->data;
    i = out->S2add->size[0] * out->S2add->size[1];
    out->S2add->size[0] = R->size[0];
    out->S2add->size[1] = R->size[1];
    emxEnsureCapacity_real_T(out->S2add, i);
    n_tmp = ((double)n - (double)p) - 1.0;
    nx = R->size[0] * R->size[1];
    for (i = 0; i < nx; i++) {
      out->S2add->data[i] = constcols_data[i] / n_tmp;
    }
    nx = E->size[0] * E->size[1];
    i = A->size[0] * A->size[1];
    A->size[0] = E->size[0];
    A->size[1] = E->size[1];
    emxEnsureCapacity_real_T(A, i);
    A_data = A->data;
    for (k = 0; k < nx; k++) {
      A_data[k] = fabs(E_data[k]);
    }
    i = x->size[0] * x->size[1];
    x->size[0] = A->size[0];
    x->size[1] = A->size[1];
    emxEnsureCapacity_boolean_T(x, i);
    ok_data = x->data;
    nx = A->size[0] * A->size[1];
    for (i = 0; i < nx; i++) {
      ok_data[i] = (A_data[i] > 1.0E-7);
    }
    c_y = ((x->size[0] != 0) && (x->size[1] != 0));
    if (c_y) {
      i = x->size[0] * x->size[1];
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= i - 1)) {
        if (!ok_data[k]) {
          c_y = false;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (c_y) {
      /*  Compute t-statistic */
      b = sqrt(n_tmp);
      G = sqrt(varargin_1);
      nx = z->size[1];
      for (i = 0; i < nx; i++) {
        b_y_data[0] *= b;
      }
      i = la->size[0] * la->size[1];
      la->size[0] = E->size[0];
      la->size[1] = E->size[1];
      emxEnsureCapacity_real_T(la, i);
      b_A_data = la->data;
      nx = E->size[0] * E->size[1];
      for (i = 0; i < nx; i++) {
        b_A_data[i] = E_data[i] * G;
      }
      b_mrdiv(b_y, la, b_X);
      b_X_data = b_X->data;
      nx = z->size[1] - 1;
      inner = z->size[0];
      i = b_A->size[0];
      b_A->size[0] = z->size[1];
      emxEnsureCapacity_real_T(b_A, i);
      b_A_data = b_A->data;
      if (0 <= z->size[1] - 1) {
        b_A_data[0] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        for (i = 0; i <= nx; i++) {
          b_A_data[0] += z_data[k] * Aw_data[k];
        }
      }
      nx = z->size[1];
      for (i = 0; i < nx; i++) {
        b_A_data[0] *= b;
      }
      i = la->size[0] * la->size[1];
      la->size[0] = E->size[0];
      la->size[1] = E->size[1];
      emxEnsureCapacity_real_T(la, i);
      b_A_data = la->data;
      nx = E->size[0] * E->size[1];
      for (i = 0; i < nx; i++) {
        b_A_data[i] = E_data[i] * G;
      }
      b_mrdiv(b_A, la, R);
      constcols_data = R->data;
      i = out->Tadd->size[0] * out->Tadd->size[1];
      out->Tadd->size[0] = R->size[0];
      out->Tadd->size[1] = R->size[1];
      emxEnsureCapacity_real_T(out->Tadd, i);
      nx = R->size[0] * R->size[1];
      for (i = 0; i < nx; i++) {
        out->Tadd->data[i] = constcols_data[i];
      }
      /*  Compute p-value of t-statistic */
      nx = out->Tadd->size[0] * out->Tadd->size[1];
      i = A->size[0] * A->size[1];
      A->size[0] = out->Tadd->size[0];
      A->size[1] = out->Tadd->size[1];
      emxEnsureCapacity_real_T(A, i);
      A_data = A->data;
      for (k = 0; k < nx; k++) {
        A_data[k] = fabs(b_X_data[k]);
      }
      emxInit_real_T(&b_p, 2);
      i = b_p->size[0] * b_p->size[1];
      b_p->size[0] = A->size[0];
      b_p->size[1] = A->size[1];
      emxEnsureCapacity_real_T(b_p, i);
      b_A_data = b_p->data;
      i = A->size[0] * A->size[1];
      for (k = 0; k < i; k++) {
        if ((n_tmp > 0.0) && (!rtIsNaN(A_data[k]))) {
          if (A_data[k] == 0.0) {
            b_A_data[k] = 0.5;
          } else if (n_tmp > 1.0E+7) {
            G = eml_erfcore(-A_data[k] / 1.4142135623730951);
            b_A_data[k] = 0.5 * G;
          } else if (n_tmp == 1.0) {
            b_A_data[k] = atan(1.0 / -A_data[k]) / 3.1415926535897931;
            if (A_data[k] > 0.0) {
              b_A_data[k]++;
            }
          } else {
            G = A_data[k] * A_data[k];
            if (n_tmp < G) {
              b_A_data[k] =
                  (betainc(n_tmp / (n_tmp + G), n_tmp / 2.0, 0.5)).re / 2.0;
            } else {
              b_A_data[k] =
                  (b_betainc(G / (n_tmp + G), 0.5, n_tmp / 2.0)).re / 2.0;
            }
            if (A_data[k] > 0.0) {
              b_A_data[k] = 1.0 - b_A_data[k];
            }
          }
        } else {
          b_A_data[k] = rtNaN;
        }
      }
      i = out->pval->size[0] * out->pval->size[1];
      out->pval->size[0] = b_p->size[0];
      out->pval->size[1] = b_p->size[1];
      emxEnsureCapacity_real_T(out->pval, i);
      nx = b_p->size[0] * b_p->size[1];
      for (i = 0; i < nx; i++) {
        out->pval->data[i] = 2.0 * (1.0 - b_A_data[i]);
      }
      emxFree_real_T(&b_p);
    } else {
      i = out->Tadd->size[0] * out->Tadd->size[1];
      out->Tadd->size[0] = 1;
      out->Tadd->size[1] = 1;
      emxEnsureCapacity_real_T(out->Tadd, i);
      out->Tadd->data[0] = rtNaN;
      i = out->pval->size[0] * out->pval->size[1];
      out->pval->size[0] = 1;
      out->pval->size[1] = 1;
      emxEnsureCapacity_real_T(out->pval, i);
      out->pval->data[0] = rtNaN;
    }
  }
  emxFree_real_T(&la);
  emxFree_real_T(&b_A);
  emxFree_boolean_T(&x);
  emxFree_real_T(&R);
  emxFree_real_T(&b_X);
  emxFree_real_T(&b_y);
  emxFree_real_T(&Aw);
  emxFree_real_T(&z);
  emxFree_real_T(&A);
  emxFree_real_T(&E);
  /*  Store results in structure out. */
  /*  Added variable plot */
}

/* End of code generation (addt_wrapper.c) */
