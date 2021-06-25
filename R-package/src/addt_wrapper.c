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
#include "betainc.h"
#include "blockedSummation.h"
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
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *b_r;
  emxArray_boolean_T *b_x;
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *x;
  emxArray_char_T_1x310 b_A;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *A;
  emxArray_real_T *Aw;
  emxArray_real_T *C;
  emxArray_real_T *E;
  emxArray_real_T *b_y;
  emxArray_real_T *constcols;
  emxArray_real_T *r;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *z;
  double G;
  double b_w;
  double n_tmp;
  int aoffset;
  int i;
  int inner;
  int k;
  int loop_ub;
  int n;
  int p;
  unsigned int siz_idx_0;
  bool c_y;
  bool exitg1;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  emxInit_real_T(&A, 2);
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
  /*  */
  /*  Beginning of code */
  i = A->size[0] * A->size[1];
  A->size[0] = X->size[0];
  A->size[1] = X->size[1];
  emxEnsureCapacity_real_T(A, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    A->data[i] = X->data[i];
  }
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y->data[i] = y->data[i];
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
  emxInit_real_T(&E, 2);
  emxInit_real_T(&constcols, 2);
  emxInit_boolean_T(&x, 1);
  if (nocheck) {
    p = X->size[1];
    n = X->size[0];
  } else {
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    loop_ub = X->size[0] - 1;
    inner = X->size[1];
    i = b_y->size[0];
    b_y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * X->size[0];
      for (i = 0; i <= loop_ub; i++) {
        b_y->data[i] += X->data[aoffset + i];
      }
    }
    i = x->size[0];
    x->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = rtIsInf(b_y->data[i]);
    }
    emxInit_boolean_T(&b_r, 1);
    i = b_r->size[0];
    b_r->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(b_r, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_r->data[i] = rtIsNaN(b_y->data[i]);
    }
    emxInit_boolean_T(&na_X, 1);
    i = na_X->size[0];
    na_X->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(na_X, i);
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_X->data[i] = (x->data[i] || b_r->data[i]);
    }
    i = x->size[0];
    x->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = rtIsInf(y->data[i]);
    }
    i = b_r->size[0];
    b_r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(b_r, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_r->data[i] = rtIsNaN(y->data[i]);
    }
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = (x->data[i] || b_r->data[i]);
    }
    emxFree_boolean_T(&b_r);
    /*  Observations with missing or infinite values are removed from X and y */
    loop_ub = na_X->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= loop_ub; i++) {
      if ((!na_X->data[i]) && (!x->data[i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r1, i);
    aoffset = 0;
    for (i = 0; i <= loop_ub; i++) {
      if ((!na_X->data[i]) && (!x->data[i])) {
        r1->data[aoffset] = i + 1;
        aoffset++;
      }
    }
    loop_ub = X->size[1];
    i = A->size[0] * A->size[1];
    A->size[0] = r1->size[0];
    A->size[1] = X->size[1];
    emxEnsureCapacity_real_T(A, i);
    for (i = 0; i < loop_ub; i++) {
      aoffset = r1->size[0];
      for (inner = 0; inner < aoffset; inner++) {
        A->data[inner + A->size[0] * i] =
            X->data[(r1->data[inner] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    loop_ub = na_X->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= loop_ub; i++) {
      if ((!na_X->data[i]) && (!x->data[i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r2, i);
    aoffset = 0;
    for (i = 0; i <= loop_ub; i++) {
      if ((!na_X->data[i]) && (!x->data[i])) {
        r2->data[aoffset] = i + 1;
        aoffset++;
      }
    }
    emxFree_boolean_T(&na_X);
    i = b_y->size[0];
    b_y->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_y->data[i] = y->data[r2->data[i] - 1];
    }
    /*  Now n is the new number of non missing observations */
    n = r2->size[0];
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
      i = E->size[0] * E->size[1];
      E->size[0] = A->size[0];
      E->size[1] = A->size[1];
      emxEnsureCapacity_real_T(E, i);
      loop_ub = A->size[0] * A->size[1];
      for (i = 0; i < loop_ub; i++) {
        E->data[i] = A->data[i];
      }
      i = A->size[0] * A->size[1];
      A->size[0] = r2->size[0];
      A->size[1] = X->size[1] + 1;
      emxEnsureCapacity_real_T(A, i);
      i = r2->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        A->data[loop_ub] = 1.0;
      }
      inner = E->size[0] * E->size[1];
      for (loop_ub = 0; loop_ub < inner; loop_ub++) {
        A->data[i + loop_ub] = E->data[loop_ub];
      }
    }
    emxInit_real_T(&r4, 2);
    emxInit_boolean_T(&b_constcols, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(A, constcols);
    minimum(A, r4);
    i = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b_constcols, i);
    loop_ub = constcols->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_constcols->data[i] = (constcols->data[i] - r4->data[i] == 0.0);
    }
    emxFree_real_T(&r4);
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
      nullAssignment(A, c_constcols);
    }
    emxFree_int32_T(&c_constcols);
    /*  p is the number of parameters to be estimated */
    p = A->size[1];
    if (r2->size[0] < A->size[1]) {
      int2str(A->size[0], b_A.data, b_A.size);
      int2str(A->size[1], b_A.data, b_A.size);
    }
    emxFree_int32_T(&r2);
    local_rank(A);
  }
  emxInit_real_T(&r, 2);
  /*  Insert code for intercept */
  /*  t test for an additional explanatory variable */
  qr(A, E, r);
  mrdiv(A, r, E);
  i = r->size[0] * r->size[1];
  r->size[0] = E->size[0];
  r->size[1] = E->size[1];
  emxEnsureCapacity_real_T(r, i);
  loop_ub = E->size[0] * E->size[1];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = -E->data[i];
  }
  d_mtimes(r, E, A);
  if (n < 1) {
    constcols->size[1] = 0;
  } else {
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = n;
    emxEnsureCapacity_real_T(constcols, i);
    loop_ub = n - 1;
    for (i = 0; i <= loop_ub; i++) {
      constcols->data[i] = (double)i + 1.0;
    }
  }
  siz_idx_0 = (unsigned int)A->size[0];
  /*  Find linear indexes */
  /*  It is better to compute linind directly rather than calling sub2ind */
  /*  linind=sub2ind(siz,sel,sel); */
  i = constcols->size[0] * constcols->size[1];
  constcols->size[0] = 1;
  emxEnsureCapacity_real_T(constcols, i);
  loop_ub = constcols->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    G = constcols->data[i];
    G += (G - 1.0) * (double)siz_idx_0;
    constcols->data[i] = G;
  }
  emxInit_real_T(&Aw, 1);
  loop_ub = constcols->size[1];
  i = Aw->size[0];
  Aw->size[0] = constcols->size[1];
  emxEnsureCapacity_real_T(Aw, i);
  for (i = 0; i < loop_ub; i++) {
    Aw->data[i] = A->data[(int)constcols->data[i] - 1] + 1.0;
  }
  loop_ub = Aw->size[0];
  for (i = 0; i < loop_ub; i++) {
    A->data[(int)constcols->data[i] - 1] = Aw->data[i];
  }
  emxFree_real_T(&constcols);
  /*  Notice that: */
  /*  -E*E' = matrix -H = -X*inv(X'X)*X' computed through qr decomposition */
  /*  A = Matrix I - H */
  emxInit_real_T(&z, 2);
  if ((la_size[0] != 0) && (la_size[1] != 0)) {
    /* geometric mean of the y */
    i = Aw->size[0];
    Aw->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(Aw, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      Aw->data[i] = b_y->data[i];
    }
    aoffset = b_y->size[0];
    for (k = 0; k < aoffset; k++) {
      Aw->data[k] = log(Aw->data[k]);
    }
    emxInit_boolean_T(&b_x, 2);
    G = exp(blockedSummation(Aw, Aw->size[0]) / (double)Aw->size[0]);
    /*   if la1==0 */
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = 1;
    b_x->size[1] = 1;
    emxEnsureCapacity_boolean_T(b_x, i);
    b_x->data[0] = (la_data[0] == 0.0);
    c_y = true;
    if (!b_x->data[0]) {
      c_y = false;
    }
    emxFree_boolean_T(&b_x);
    if (c_y) {
      loop_ub = Aw->size[0];
      for (i = 0; i < loop_ub; i++) {
        Aw->data[i] *= G;
      }
      i = z->size[0] * z->size[1];
      z->size[0] = Aw->size[0];
      z->size[1] = 1;
      emxEnsureCapacity_real_T(z, i);
      loop_ub = Aw->size[0];
      for (i = 0; i < loop_ub; i++) {
        z->data[i] = Aw->data[i];
      }
    } else {
      G = rt_powd_snf(G, la_data[0] - 1.0);
      i = Aw->size[0];
      Aw->size[0] = b_y->size[0];
      emxEnsureCapacity_real_T(Aw, i);
      aoffset = b_y->size[0];
      for (k = 0; k < aoffset; k++) {
        Aw->data[k] = rt_powd_snf(b_y->data[k], la_data[0]);
      }
      loop_ub = Aw->size[0];
      for (i = 0; i < loop_ub; i++) {
        Aw->data[i]--;
      }
      i = r->size[0] * r->size[1];
      r->size[0] = 1;
      r->size[1] = 1;
      emxEnsureCapacity_real_T(r, i);
      r->data[0] = la_data[0] * G;
      emxInit_real_T(&r3, 2);
      b_mrdiv(Aw, (double *)r->data, *(int(*)[2])r->size, r3);
      i = z->size[0] * z->size[1];
      z->size[0] = r3->size[0];
      z->size[1] = r3->size[1];
      emxEnsureCapacity_real_T(z, i);
      loop_ub = r3->size[0] * r3->size[1];
      for (i = 0; i < loop_ub; i++) {
        z->data[i] = r3->data[i];
      }
      emxFree_real_T(&r3);
    }
  } else {
    i = z->size[0] * z->size[1];
    z->size[0] = b_y->size[0];
    z->size[1] = 1;
    emxEnsureCapacity_real_T(z, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      z->data[i] = b_y->data[i];
    }
  }
  b_mtimes(A, z, E);
  c_mtimes(z, E, r);
  loop_ub = A->size[0] - 1;
  inner = A->size[1];
  i = Aw->size[0];
  Aw->size[0] = A->size[0];
  emxEnsureCapacity_real_T(Aw, i);
  for (i = 0; i <= loop_ub; i++) {
    Aw->data[i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * A->size[0];
    for (i = 0; i <= loop_ub; i++) {
      Aw->data[i] += A->data[aoffset + i] * w->data[k];
    }
  }
  emxFree_real_T(&A);
  emxInit_real_T(&C, 1);
  loop_ub = z->size[1] - 1;
  inner = z->size[0];
  i = C->size[0];
  C->size[0] = z->size[1];
  emxEnsureCapacity_real_T(C, i);
  if (0 <= z->size[1] - 1) {
    C->data[0] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    for (i = 0; i <= loop_ub; i++) {
      C->data[0] += z->data[k] * Aw->data[k];
    }
  }
  b_w = 0.0;
  loop_ub = w->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_w += w->data[i] * Aw->data[i];
  }
  if (b_w < 1.0E-12) {
    out->S2add.size[0] = 1;
    out->S2add.data[0] = rtNaN;
    out->Tadd.size[0] = 1;
    out->Tadd.size[1] = 1;
    out->Tadd.data[0] = rtNaN;
    out->b.size[0] = 1;
    out->b.data[0] = rtNaN;
    out->pval.size[0] = 1;
    out->pval.size[1] = 1;
    out->pval.data[0] = rtNaN;
  } else {
    /*  b=regress(Az,Aw); */
    loop_ub = z->size[1] - 1;
    inner = z->size[0];
    i = b_y->size[0];
    b_y->size[0] = z->size[1];
    emxEnsureCapacity_real_T(b_y, i);
    if (0 <= z->size[1] - 1) {
      b_y->data[0] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      for (i = 0; i <= loop_ub; i++) {
        b_y->data[0] += z->data[k] * Aw->data[k];
      }
    }
    out->b.size[0] = z->size[1];
    loop_ub = z->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->b.data[0] = b_y->data[0] / b_w;
    }
    i = Aw->size[0];
    Aw->size[0] = r->size[0];
    emxEnsureCapacity_real_T(Aw, i);
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      Aw->data[i] = r->data[i] - C->data[i] * C->data[0] / b_w;
    }
    aoffset = Aw->size[0];
    for (k = 0; k < aoffset; k++) {
      Aw->data[0] = sqrt(Aw->data[0]);
    }
    /*  See Atkinson (1985) p. 98 */
    n_tmp = ((double)n - (double)p) - 1.0;
    out->S2add.size[0] = Aw->size[0];
    loop_ub = Aw->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->S2add.data[i] = Aw->data[i] * Aw->data[0] / n_tmp;
    }
    i = b_y->size[0];
    b_y->size[0] = Aw->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    if (0 <= Aw->size[0] - 1) {
      b_y->data[0] = fabs(Aw->data[0]);
    }
    i = x->size[0];
    x->size[0] = Aw->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    loop_ub = Aw->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = (b_y->data[i] > 1.0E-7);
    }
    c_y = (x->size[0] != 0);
    if (c_y) {
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= x->size[0] - 1)) {
        if (!x->data[0]) {
          c_y = false;
          exitg1 = true;
        } else {
          k = 1;
        }
      }
    }
    if (c_y) {
      /*  Compute t-statistic */
      G = sqrt(n_tmp);
      loop_ub = z->size[1];
      for (i = 0; i < loop_ub; i++) {
        C->data[0] *= G;
      }
      G = sqrt(b_w);
      loop_ub = Aw->size[0];
      for (i = 0; i < loop_ub; i++) {
        Aw->data[i] *= G;
      }
      if ((z->size[1] == 0) || (Aw->size[0] == 0)) {
        out->Tadd.size[0] = z->size[1];
        out->Tadd.size[1] = Aw->size[0];
        loop_ub = Aw->size[0] * z->size[1];
        if (0 <= loop_ub - 1) {
          memset(&out->Tadd.data[0], 0, loop_ub * sizeof(double));
        }
      } else {
        out->Tadd.size[0] = 1;
        out->Tadd.size[1] = 1;
        out->Tadd.data[0] = C->data[0] / Aw->data[0];
      }
      /*  Compute p-value of t-statistic */
      aoffset = out->Tadd.size[0] * out->Tadd.size[1];
      i = E->size[0] * E->size[1];
      E->size[0] = out->Tadd.size[0];
      E->size[1] = out->Tadd.size[1];
      emxEnsureCapacity_real_T(E, i);
      for (k = 0; k < aoffset; k++) {
        E->data[0] = fabs(out->Tadd.data[0]);
      }
      aoffset = E->size[0];
      loop_ub = E->size[1];
      i = E->size[0] * E->size[1];
      for (k = 0; k < i; k++) {
        if ((n_tmp > 0.0) && (!rtIsNaN(E->data[0]))) {
          if (E->data[0] == 0.0) {
            G = 0.5;
          } else if (n_tmp > 1.0E+7) {
            G = eml_erfcore(-E->data[0] / 1.4142135623730951);
            G *= 0.5;
          } else if (n_tmp == 1.0) {
            G = atan(1.0 / -E->data[0]) / 3.1415926535897931;
            if (E->data[0] > 0.0) {
              G++;
            }
          } else {
            G = E->data[0] * E->data[0];
            if (n_tmp < G) {
              G = (betainc(n_tmp / (n_tmp + G), n_tmp / 2.0, 0.5)).re / 2.0;
            } else {
              G = (b_betainc(G / (n_tmp + G), 0.5, n_tmp / 2.0)).re / 2.0;
            }
            if (E->data[0] > 0.0) {
              G = 1.0 - G;
            }
          }
        } else {
          G = rtNaN;
        }
      }
      out->pval.size[0] = aoffset;
      out->pval.size[1] = loop_ub;
      loop_ub *= aoffset;
      for (i = 0; i < loop_ub; i++) {
        out->pval.data[0] = 2.0 * (1.0 - G);
      }
    } else {
      out->Tadd.size[0] = 1;
      out->Tadd.size[1] = 1;
      out->Tadd.data[0] = rtNaN;
      out->pval.size[0] = 1;
      out->pval.size[1] = 1;
      out->pval.data[0] = rtNaN;
    }
  }
  emxFree_real_T(&C);
  emxFree_boolean_T(&x);
  emxFree_real_T(&b_y);
  emxFree_real_T(&Aw);
  emxFree_real_T(&r);
  emxFree_real_T(&z);
  emxFree_real_T(&E);
  /*  Store results in structure out. */
  /*  Added variable plot */
}

/* End of code generation (addt_wrapper.c) */
