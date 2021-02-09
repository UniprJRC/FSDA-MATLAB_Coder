/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * addt.c
 *
 * Code generation for function 'addt'
 *
 */

/* Include files */
#include "addt.h"
#include "addt_emxutil.h"
#include "addt_rtwutil.h"
#include "addt_types.h"
#include "find.h"
#include "int2str.h"
#include "mean.h"
#include "minOrMax.h"
#include "mrdivide_helper.h"
#include "nullAssignment.h"
#include "qr.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "tcdf.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Type Definitions */
#ifndef struct_emxArray_char_T_1x10
#define struct_emxArray_char_T_1x10
struct emxArray_char_T_1x10 {
  char data[10];
  int size[2];
};
#endif /* struct_emxArray_char_T_1x10 */
#ifndef typedef_emxArray_char_T_1x10
#define typedef_emxArray_char_T_1x10
typedef struct emxArray_char_T_1x10 emxArray_char_T_1x10;
#endif /* typedef_emxArray_char_T_1x10 */

/* Function Definitions */
void addt(const emxArray_real_T *y, const emxArray_real_T *X,
          const emxArray_real_T *w, bool varargin_2,
          const double varargin_4_data[], const int varargin_4_size[2],
          double varargin_6, double varargin_8, double varargin_10,
          double varargin_12, bool varargin_14,
          const emxArray_real_T *varargin_16, struct0_T *out)
{
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *na_y;
  emxArray_boolean_T *r;
  emxArray_char_T_1x10 b_E;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *A;
  emxArray_real_T *Aw;
  emxArray_real_T *C;
  emxArray_real_T *E;
  emxArray_real_T *b_varargin_2;
  emxArray_real_T *b_y;
  emxArray_real_T *constcols;
  emxArray_real_T *r3;
  emxArray_real_T *z;
  double Sz_data;
  double b;
  double b_w;
  double bkj;
  double zAw_data;
  int b_varargin_4_size[2];
  int y_size[2];
  int aoffset;
  int b_i;
  int b_n;
  int coffset;
  int i;
  int j;
  int k;
  int m;
  int n;
  int nc;
  int p;
  unsigned int siz_idx_0;
  bool b_p;
  bool c_y;
  bool exitg1;
  (void)varargin_8;
  (void)varargin_10;
  (void)varargin_12;
  (void)varargin_14;
  (void)varargin_16;
  emxInit_real_T(&E, 2);
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
  /*        w:  added variable. Vector. n-x-1 vector containing the additional
   */
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
  /*    plots:      Plot on the screen. Scalar. */
  /*                If plots=1 the added variable */
  /*                plot is produced else (default) no plot is produced. */
  /*                Example - 'plots',1 */
  /*                Data Types - double */
  /*  */
  /*    units:      Units to remove. Vector. */
  /*                Vector containing the list of */
  /*                units which has to be removed in the computation of the */
  /*                test. The default is to use all units */
  /*                Example - 'units',[1,3] removes units 1 and 3 */
  /*                Data Types - double */
  /*  */
  /*    textlab:    Labels of units in the plot. Boolean. If textlab=false */
  /*                (default) no text label is written on the plot */
  /*                for units else text label of units are added on the plot */
  /*                Example - 'textlab',true */
  /*                Data Types - boolean */
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
  /*  */
  /*  nocheck :       Check input arguments. Scalar. */
  /*                If nocheck is equal to 1 no check is performed on */
  /*                matrix y and matrix X. Notice that y and X are left */
  /*                unchanged. In other words the additional column of ones */
  /*                for the intercept is not added. As default nocheck=0. */
  /*                Example - 'nocheck',1 */
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
  /*  User options */
  /*  FontSize = font size of the axes labels */
  /*  FontSizeAxes = font size for the axes numbers */
  /*  t test for an additional explanatory variable */
  i = E->size[0] * E->size[1];
  E->size[0] = X->size[0];
  E->size[1] = X->size[1];
  emxEnsureCapacity_real_T(E, i);
  n = X->size[0] * X->size[1];
  for (i = 0; i < n; i++) {
    E->data[i] = X->data[i];
  }
  emxInit_real_T(&b_y, 1);
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  n = y->size[0];
  for (i = 0; i < n; i++) {
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
  /*  If nocheck=1, then skip checks on y and X */
  emxInit_real_T(&constcols, 2);
  emxInit_real_T(&b_varargin_2, 2);
  if (varargin_6 == 1.0) {
    p = X->size[1];
    b_n = X->size[0];
  } else {
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    m = X->size[0] - 1;
    n = X->size[1];
    i = b_y->size[0];
    b_y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (b_i = 0; b_i <= m; b_i++) {
      b_y->data[b_i] = 0.0;
    }
    for (k = 0; k < n; k++) {
      aoffset = k * X->size[0];
      for (b_i = 0; b_i <= m; b_i++) {
        b_y->data[b_i] += X->data[aoffset + b_i];
      }
    }
    emxInit_boolean_T(&na_y, 1);
    i = na_y->size[0];
    na_y->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(na_y, i);
    n = b_y->size[0];
    for (i = 0; i < n; i++) {
      na_y->data[i] = rtIsInf(b_y->data[i]);
    }
    emxInit_boolean_T(&r, 1);
    i = r->size[0];
    r->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    n = b_y->size[0];
    for (i = 0; i < n; i++) {
      r->data[i] = rtIsNaN(b_y->data[i]);
    }
    emxInit_boolean_T(&na_X, 1);
    i = na_X->size[0];
    na_X->size[0] = na_y->size[0];
    emxEnsureCapacity_boolean_T(na_X, i);
    n = na_y->size[0];
    for (i = 0; i < n; i++) {
      na_X->data[i] = (na_y->data[i] || r->data[i]);
    }
    i = na_y->size[0];
    na_y->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(na_y, i);
    n = y->size[0];
    for (i = 0; i < n; i++) {
      na_y->data[i] = rtIsInf(y->data[i]);
    }
    i = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    n = y->size[0];
    for (i = 0; i < n; i++) {
      r->data[i] = rtIsNaN(y->data[i]);
    }
    n = na_y->size[0];
    for (i = 0; i < n; i++) {
      na_y->data[i] = (na_y->data[i] || r->data[i]);
    }
    emxFree_boolean_T(&r);
    /*  Observations with missing or infinite values are removed from X and y */
    n = na_X->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        m++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = m;
    emxEnsureCapacity_int32_T(r1, i);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r1->data[m] = b_i + 1;
        m++;
      }
    }
    n = X->size[1];
    i = E->size[0] * E->size[1];
    E->size[0] = r1->size[0];
    E->size[1] = X->size[1];
    emxEnsureCapacity_real_T(E, i);
    for (i = 0; i < n; i++) {
      m = r1->size[0];
      for (aoffset = 0; aoffset < m; aoffset++) {
        E->data[aoffset + E->size[0] * i] =
            X->data[(r1->data[aoffset] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    n = na_X->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        m++;
      }
    }
    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = m;
    emxEnsureCapacity_int32_T(r2, i);
    m = 0;
    for (b_i = 0; b_i <= n; b_i++) {
      if ((!na_X->data[b_i]) && (!na_y->data[b_i])) {
        r2->data[m] = b_i + 1;
        m++;
      }
    }
    emxFree_boolean_T(&na_y);
    emxFree_boolean_T(&na_X);
    i = b_y->size[0];
    b_y->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    n = r2->size[0];
    for (i = 0; i < n; i++) {
      b_y->data[i] = y->data[r2->data[i] - 1];
    }
    /*  Now n is the new number of non missing observations */
    b_n = r2->size[0];
    /*  Now add to matrix X a column of ones for the intercept. */
    /*  If a value for the intercept has not been specified or if this value is
     */
    /*  equal to 1, add to matrix X the column of ones. The position of */
    /*  the option intercept in chklist, which contains the optional is */
    /*  given in chkint. chkint is empty if the option intercept is not */
    /*  specified. */
    if (varargin_2) {
      i = b_varargin_2->size[0] * b_varargin_2->size[1];
      b_varargin_2->size[0] = E->size[0];
      b_varargin_2->size[1] = E->size[1];
      emxEnsureCapacity_real_T(b_varargin_2, i);
      n = E->size[0] * E->size[1];
      for (i = 0; i < n; i++) {
        b_varargin_2->data[i] = E->data[i];
      }
      i = E->size[0] * E->size[1];
      E->size[0] = r2->size[0];
      E->size[1] = X->size[1] + 1;
      emxEnsureCapacity_real_T(E, i);
      i = r2->size[0];
      for (j = 0; j < i; j++) {
        E->data[j] = 1.0;
      }
      aoffset = b_varargin_2->size[0] * b_varargin_2->size[1];
      for (j = 0; j < aoffset; j++) {
        E->data[i + j] = b_varargin_2->data[j];
      }
    }
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    m = E->size[0];
    n = E->size[1];
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = E->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    if (E->size[1] >= 1) {
      for (j = 0; j < n; j++) {
        constcols->data[j] = E->data[E->size[0] * j];
        for (b_i = 2; b_i <= m; b_i++) {
          bkj = constcols->data[j];
          b = E->data[(b_i + E->size[0] * j) - 1];
          if (rtIsNaN(b)) {
            b_p = false;
          } else if (rtIsNaN(bkj)) {
            b_p = true;
          } else {
            b_p = (bkj < b);
          }
          if (b_p) {
            constcols->data[j] = b;
          }
        }
      }
    }
    emxInit_real_T(&r3, 2);
    emxInit_boolean_T(&b_constcols, 2);
    minimum(E, r3);
    i = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b_constcols, i);
    n = constcols->size[1];
    for (i = 0; i < n; i++) {
      b_constcols->data[i] = (constcols->data[i] - r3->data[i] == 0.0);
    }
    emxFree_real_T(&r3);
    emxInit_int32_T(&c_constcols, 2);
    eml_find(b_constcols, c_constcols);
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = c_constcols->size[1];
    emxEnsureCapacity_real_T(constcols, i);
    n = c_constcols->size[1];
    emxFree_boolean_T(&b_constcols);
    for (i = 0; i < n; i++) {
      constcols->data[i] = c_constcols->data[i];
    }
    if (constcols->size[1] > 1) {
      n = constcols->size[1] - 2;
      i = c_constcols->size[0] * c_constcols->size[1];
      c_constcols->size[0] = 1;
      c_constcols->size[1] = constcols->size[1] - 1;
      emxEnsureCapacity_int32_T(c_constcols, i);
      for (i = 0; i <= n; i++) {
        c_constcols->data[i] = (int)constcols->data[i + 1];
      }
      nullAssignment(E, c_constcols);
    }
    emxFree_int32_T(&c_constcols);
    /*  p is the number of parameters to be estimated */
    p = E->size[1];
    if (r2->size[0] < E->size[1]) {
      int2str(E->size[0], b_E.data, b_E.size);
      int2str(E->size[1], b_E.data, b_E.size);
    }
    emxFree_int32_T(&r2);
    local_rank(E);
  }
  emxInit_real_T(&A, 2);
  qr(E, b_varargin_2, A);
  b_mrdiv(E, A);
  i = b_varargin_2->size[0] * b_varargin_2->size[1];
  b_varargin_2->size[0] = E->size[0];
  b_varargin_2->size[1] = E->size[1];
  emxEnsureCapacity_real_T(b_varargin_2, i);
  n = E->size[0] * E->size[1];
  for (i = 0; i < n; i++) {
    b_varargin_2->data[i] = -E->data[i];
  }
  m = b_varargin_2->size[0];
  n = b_varargin_2->size[1];
  nc = E->size[0];
  i = A->size[0] * A->size[1];
  A->size[0] = b_varargin_2->size[0];
  A->size[1] = E->size[0];
  emxEnsureCapacity_real_T(A, i);
  for (j = 0; j < nc; j++) {
    coffset = j * m;
    for (b_i = 0; b_i < m; b_i++) {
      A->data[coffset + b_i] = 0.0;
    }
    for (k = 0; k < n; k++) {
      aoffset = k * b_varargin_2->size[0];
      bkj = E->data[k * E->size[0] + j];
      for (b_i = 0; b_i < m; b_i++) {
        i = coffset + b_i;
        A->data[i] += b_varargin_2->data[aoffset + b_i] * bkj;
      }
    }
  }
  emxFree_real_T(&b_varargin_2);
  emxFree_real_T(&E);
  if (b_n < 1) {
    constcols->size[1] = 0;
  } else {
    i = constcols->size[0] * constcols->size[1];
    constcols->size[0] = 1;
    constcols->size[1] = b_n;
    emxEnsureCapacity_real_T(constcols, i);
    n = b_n - 1;
    for (i = 0; i <= n; i++) {
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
  n = constcols->size[1] - 1;
  for (i = 0; i <= n; i++) {
    bkj = constcols->data[i];
    bkj += (bkj - 1.0) * (double)siz_idx_0;
    constcols->data[i] = bkj;
  }
  emxInit_real_T(&Aw, 1);
  n = constcols->size[1];
  i = Aw->size[0];
  Aw->size[0] = constcols->size[1];
  emxEnsureCapacity_real_T(Aw, i);
  for (i = 0; i < n; i++) {
    Aw->data[i] = A->data[(int)constcols->data[i] - 1] + 1.0;
  }
  n = Aw->size[0];
  for (i = 0; i < n; i++) {
    A->data[(int)constcols->data[i] - 1] = Aw->data[i];
  }
  emxFree_real_T(&constcols);
  /*  Notice that: */
  /*  -E*E' = matrix -H = -X*inv(X'X)*X' computed through qr decomposition */
  /*  A = Matrix I - H */
  emxInit_real_T(&z, 2);
  if ((varargin_4_size[0] != 0) && (varargin_4_size[1] != 0)) {
    /* geometric mean of the y */
    i = Aw->size[0];
    Aw->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(Aw, i);
    n = b_y->size[0];
    for (i = 0; i < n; i++) {
      Aw->data[i] = b_y->data[i];
    }
    m = b_y->size[0];
    for (k = 0; k < m; k++) {
      Aw->data[k] = log(Aw->data[k]);
    }
    bkj = exp(mean(Aw));
    /* G is complex; */
    /*   if la1==0 */
    b_p = (varargin_4_data[0] == 0.0);
    if (!b_p) {
      b = rt_powd_snf(bkj, varargin_4_data[0] - 1.0);
      i = Aw->size[0];
      Aw->size[0] = b_y->size[0];
      emxEnsureCapacity_real_T(Aw, i);
      m = b_y->size[0];
      for (k = 0; k < m; k++) {
        Aw->data[k] = rt_powd_snf(b_y->data[k], varargin_4_data[0]);
      }
      n = Aw->size[0];
      for (i = 0; i < n; i++) {
        Aw->data[i]--;
      }
      b_varargin_4_size[0] = 1;
      b_varargin_4_size[1] = 1;
      bkj = varargin_4_data[0] * b;
      mrdiv(Aw, (double *)&bkj, b_varargin_4_size, z);
    } else {
      n = Aw->size[0];
      for (i = 0; i < n; i++) {
        Aw->data[i] *= bkj;
      }
      i = z->size[0] * z->size[1];
      z->size[0] = Aw->size[0];
      z->size[1] = 1;
      emxEnsureCapacity_real_T(z, i);
      n = Aw->size[0];
      for (i = 0; i < n; i++) {
        z->data[i] = Aw->data[i];
      }
    }
  } else {
    i = z->size[0] * z->size[1];
    z->size[0] = b_y->size[0];
    z->size[1] = 1;
    emxEnsureCapacity_real_T(z, i);
    n = b_y->size[0];
    for (i = 0; i < n; i++) {
      z->data[i] = b_y->data[i];
    }
  }
  emxFree_real_T(&b_y);
  emxInit_real_T(&C, 2);
  m = A->size[0] - 1;
  n = A->size[1];
  nc = z->size[1];
  i = C->size[0] * C->size[1];
  C->size[0] = A->size[0];
  C->size[1] = z->size[1];
  emxEnsureCapacity_real_T(C, i);
  for (j = 0; j < nc; j++) {
    for (b_i = 0; b_i <= m; b_i++) {
      C->data[b_i] = 0.0;
    }
    for (k = 0; k < n; k++) {
      aoffset = k * A->size[0];
      for (b_i = 0; b_i <= m; b_i++) {
        C->data[b_i] += A->data[aoffset + b_i] * z->data[k];
      }
    }
  }
  m = z->size[1] - 1;
  n = z->size[0];
  nc = C->size[1];
  out->Tadd.size[0] = z->size[1];
  out->Tadd.size[1] = C->size[1];
  for (j = 0; j < nc; j++) {
    if (0 <= m) {
      out->Tadd.data[0] = 0.0;
    }
    for (k = 0; k < n; k++) {
      for (b_i = 0; b_i <= m; b_i++) {
        out->Tadd.data[0] += z->data[k] * C->data[k];
      }
    }
  }
  emxFree_real_T(&C);
  m = A->size[0] - 1;
  n = A->size[1];
  i = Aw->size[0];
  Aw->size[0] = A->size[0];
  emxEnsureCapacity_real_T(Aw, i);
  for (b_i = 0; b_i <= m; b_i++) {
    Aw->data[b_i] = 0.0;
  }
  for (k = 0; k < n; k++) {
    aoffset = k * A->size[0];
    for (b_i = 0; b_i <= m; b_i++) {
      Aw->data[b_i] += A->data[aoffset + b_i] * w->data[k];
    }
  }
  emxFree_real_T(&A);
  m = z->size[1] - 1;
  n = z->size[0];
  if (0 <= z->size[1] - 1) {
    zAw_data = 0.0;
  }
  for (k = 0; k < n; k++) {
    for (b_i = 0; b_i <= m; b_i++) {
      zAw_data += z->data[k] * Aw->data[k];
    }
  }
  b_w = 0.0;
  n = w->size[0];
  for (i = 0; i < n; i++) {
    b_w += w->data[i] * Aw->data[i];
  }
  emxFree_real_T(&Aw);
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
    out->b.size[0] = z->size[1];
    n = z->size[1];
    for (i = 0; i < n; i++) {
      out->b.data[0] = zAw_data / b_w;
    }
    n = z->size[1];
    for (i = 0; i < n; i++) {
      Sz_data = out->Tadd.data[0] - zAw_data * zAw_data / b_w;
    }
    m = z->size[1];
    for (k = 0; k < m; k++) {
      Sz_data = sqrt(Sz_data);
    }
    /*  See Atkinson (1985) p. 98 */
    bkj = ((double)b_n - (double)p) - 1.0;
    out->S2add.size[0] = z->size[1];
    n = z->size[1];
    for (i = 0; i < n; i++) {
      out->S2add.data[0] = Sz_data * Sz_data / bkj;
    }
    if (0 <= z->size[1] - 1) {
      b = fabs(Sz_data);
    }
    m = z->size[1];
    n = z->size[1];
    for (i = 0; i < n; i++) {
      b_p = (b > 1.0E-7);
    }
    c_y = (z->size[1] != 0);
    if (c_y) {
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= m - 1)) {
        if (!b_p) {
          c_y = false;
          exitg1 = true;
        } else {
          k = 1;
        }
      }
    }
    if (c_y) {
      /*  Compute t-statistic */
      b = sqrt(bkj);
      n = z->size[1];
      for (i = 0; i < n; i++) {
        zAw_data *= b;
      }
      b = sqrt(b_w);
      n = z->size[1];
      for (i = 0; i < n; i++) {
        Sz_data *= b;
      }
      if (z->size[1] == 0) {
        out->Tadd.size[0] = z->size[1];
        out->Tadd.size[1] = z->size[1];
        n = z->size[1] * z->size[1];
        for (i = 0; i < n; i++) {
          out->Tadd.data[0] = 0.0;
        }
      } else {
        out->Tadd.size[0] = 1;
        out->Tadd.size[1] = 1;
        out->Tadd.data[0] = zAw_data / Sz_data;
      }
      /*  Compute p-value of t-statistic */
      y_size[0] = out->Tadd.size[0];
      y_size[1] = out->Tadd.size[1];
      if (0 <= out->Tadd.size[0] * out->Tadd.size[1] - 1) {
        b = fabs(out->Tadd.data[0]);
      }
      tcdf((double *)&b, y_size, ((double)b_n - (double)p) - 1.0,
           (double *)&bkj, b_varargin_4_size);
      m = b_varargin_4_size[0] * b_varargin_4_size[1];
      for (i = 0; i < m; i++) {
        bkj = 1.0 - bkj;
      }
      out->pval.size[0] = b_varargin_4_size[0];
      out->pval.size[1] = b_varargin_4_size[1];
      for (i = 0; i < m; i++) {
        out->pval.data[0] = 2.0 * bkj;
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
  emxFree_real_T(&z);
  /*  Store results in structure out. */
  /*  Added variable plot */
}

/* End of code generation (addt.c) */
