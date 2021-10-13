/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ScoreYJ.c
 *
 * Code generation for function 'ScoreYJ'
 *
 */

/* Include files */
#include "ScoreYJ.h"
#include "FSRmdr.h"
#include "Score.h"
#include "blockedSummation.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "mldivide.h"
#include "rt_nonfinite.h"
#include "xnrm2.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void cd_binary_expand_op(emxArray_real_T *znonnegs,
                                const emxArray_real_T *vpos, double logG);

/* Function Definitions */
static void cd_binary_expand_op(emxArray_real_T *znonnegs,
                                const emxArray_real_T *vpos, double logG)
{
  emxArray_real_T *b_znonnegs;
  const double *vpos_data;
  double *b_znonnegs_data;
  double *znonnegs_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  vpos_data = vpos->data;
  znonnegs_data = znonnegs->data;
  emxInit_real_T(&b_znonnegs, 1);
  i = b_znonnegs->size[0];
  if (vpos->size[0] == 1) {
    b_znonnegs->size[0] = znonnegs->size[0];
  } else {
    b_znonnegs->size[0] = vpos->size[0];
  }
  emxEnsureCapacity_real_T(b_znonnegs, i);
  b_znonnegs_data = b_znonnegs->data;
  stride_0_0 = (znonnegs->size[0] != 1);
  stride_1_0 = (vpos->size[0] != 1);
  if (vpos->size[0] == 1) {
    loop_ub = znonnegs->size[0];
  } else {
    loop_ub = vpos->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_znonnegs_data[i] = znonnegs_data[i * stride_0_0] *
                         (vpos_data[i * stride_1_0] / 2.0 - logG);
  }
  i = znonnegs->size[0];
  znonnegs->size[0] = b_znonnegs->size[0];
  emxEnsureCapacity_real_T(znonnegs, i);
  znonnegs_data = znonnegs->data;
  loop_ub = b_znonnegs->size[0];
  for (i = 0; i < loop_ub; i++) {
    znonnegs_data[i] = b_znonnegs_data[i];
  }
  emxFree_real_T(&b_znonnegs);
}

void ScoreYJ(const emxArray_real_T *y, const emxArray_real_T *X,
             double varargin_2, double outSC_Score_data[],
             int *outSC_Score_size, double *outSC_Lik)
{
  emxArray_real_T *Xw;
  emxArray_real_T *vneg;
  emxArray_real_T *vpos;
  emxArray_real_T *vposlai;
  emxArray_real_T *w;
  emxArray_real_T *z;
  emxArray_real_T *znonnegs;
  const double *X_data;
  const double *y_data;
  double G;
  double Glaminus1;
  double k;
  double logG;
  double q;
  double *vneg_data;
  double *vpos_data;
  double *vposlai_data;
  double *w_data;
  double *z_data;
  double *znonnegs_data;
  int end;
  int i;
  int inner;
  int loop_ub;
  int mc;
  int nx;
  signed char b_i;
  bool empty_non_axis_sizes;
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&vposlai, 1);
  /* Computes the score test for Yeo and Johnson transformation */
  /*  */
  /* <a href="matlab: docsearchFS('ScoreYJ')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. A vector with n elements that */
  /*                contains the response */
  /*                variable.  It can be either a row or a column vector. */
  /*     X :        Predictor variables. Matrix. Data matrix of explanatory */
  /*                variables (also called 'regressors') */
  /*                of dimension (n x p-1). Rows of X represent observations,
   * and */
  /*                columns represent variables. */
  /*                Missing values (NaN's) and infinite values (Inf's) are
   * allowed, */
  /*                since observations (rows) with missing or infinite values
   * will */
  /*                automatically be excluded from the computations. */
  /*  */
  /*   Optional input arguments: */
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
  /*            la  :transformation parameter. Vector. It specifies for which
   * values of the */
  /*                  transformation parameter it is necessary to compute the */
  /*                  score test. */
  /*                  Default value of lambda is la=[-1 -0.5 0 0.5 1]; that */
  /*                  is the five most common values of lambda */
  /*                Example - 'la',[0 0.5] */
  /*                Data Types - double */
  /*  */
  /*            Lik : likelihood for the augmented model. Boolean. */
  /*                    If true the value of the likelihood for the augmented */
  /*                    model will be produced */
  /*                  else (default) only the value of the score test will be */
  /*                  given */
  /*                Example - 'Lik',false */
  /*                Data Types - logical */
  /*  */
  /*        nocheck : Check input arguments. Boolean. */
  /*                If nocheck is equal to true no check is performed on */
  /*                  matrix y and matrix X. Notice that y and X are left */
  /*                  unchanged. In other words the additional column of ones */
  /*                  for the intercept is not added. As default nocheck=false.
   */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outSC' containing the following
   * fields: */
  /*  */
  /*         outSC.Score    =    score test. Scalar. t test for additional */
  /*                             constructed variable */
  /*         outSC.Lik      =    value of the likelihood. Scalar. This output */
  /*                            is produced only if input value Lik =1 */
  /*  */
  /*  See also: FSRfan, Score, normBoxCox, normYJ, ScoreYJpn */
  /*  */
  /*  References: */
  /*  */
  /*  Yeo, I.K. and Johnson, R. (2000), A new family of power */
  /*  transformations to improve normality or symmetry, "Biometrika", Vol. 87,
   */
  /*  pp. 954-959. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('ScoreYJ')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples */
  /* { */
  /*     % Score with all default options for the wool data. */
  /*     % Load the wool data. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Score test using the five most common values of lambda */
  /*     [outSc]=ScoreYJ(y,X); */
  /*     disp(outSc.Score) */
  /* } */
  /* { */
  /*     % Score with optional arguments. */
  /*     % Loyalty cards data. */
  /*     load('loyalty.txt'); */
  /*     y=loyalty(:,4); */
  /*     X=loyalty(:,1:3); */
  /*     % la = vector containing the values of the transformation */
  /*     % parameters which have to be tested */
  /*     la=[0.25 1/3 0.4 0.5]; */
  /*     [outSc]=ScoreYJ(y,X,'la',la,'intercept',true); */
  /* } */
  /* { */
  /*     % Compare Score test using BoxCox and YeoJohnson for the wool data. */
  /*     % Wool data. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Define vector of transformation parameters */
  /*     la=[-1:0.01:1]; */
  /*     % Score test using YeoJohnson transformation */
  /*     [outYJ]=ScoreYJ(y,X,'la',la); */
  /*     % Score test using YeoJohnson transformation */
  /*     [outBC]=Score(y,X,'la',la); */
  /*     plot(la',[outBC.Score outYJ.Score]) */
  /*     xlabel('\lambda') */
  /*     ylabel('Value of the score test') */
  /*     legend({'BoxCox' 'YeoJohnson'}) */
  /* } */
  /* { */
  /*     %% Score test using Darwin data given by Yeo and Yohnson. */
  /*      y=[6.1, -8.4, 1.0, 2.0,
   * 0.7, 2.9, 3.5, 5.1, 1.8, 3.6, 7.0, 3.0, 9.3, 7.5 -6.0]'; */
  /*      n=length(y); */
  /*      X=ones(n,1); */
  /*      la=-1:0.01:2.5; */
  /*      % Given that there are no explanatory variables the test must be */
  /*      % called with intercept false */
  /*      out=ScoreYJ(y,X,'intercept',false,'la',la,'Lik',1); */
  /*      plot(la',out.Score) */
  /*      xax=axis; */
  /*      line(xax(1:2),zeros(1,2)) */
  /*      xlabel('\lambda') */
  /*      ylabel('Value of the score test') */
  /*      title('Value of the score test is 0 in correspondence of $\hat \lambda
   * =1.305$','Interpreter','Latex') */
  /* } */
  /*  Beginning of code */
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
  /*  Write in structure 'options' the options chosen by the user */
  /*  mingreater0=options.mingreater0; */
  /*   Sc= vector which contains the t test for constructed variables for the */
  /*   values of \lambda specified in vector la */
  /*  Lik is a vector which contains the likelihoods for diff. values of la */
  /*  value related to the Jacobian */
  i = vposlai->size[0];
  vposlai->size[0] = y->size[0];
  emxEnsureCapacity_real_T(vposlai, i);
  vposlai_data = vposlai->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    vposlai_data[i] = y_data[i];
  }
  nx = y->size[0];
  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    G = vposlai_data[loop_ub];
    if (vposlai_data[loop_ub] < 0.0) {
      G = -1.0;
    } else if (vposlai_data[loop_ub] > 0.0) {
      G = 1.0;
    } else if (vposlai_data[loop_ub] == 0.0) {
      G = 0.0;
    }
    vposlai_data[loop_ub] = G;
  }
  emxInit_real_T(&znonnegs, 1);
  nx = y->size[0];
  i = znonnegs->size[0];
  znonnegs->size[0] = y->size[0];
  emxEnsureCapacity_real_T(znonnegs, i);
  znonnegs_data = znonnegs->data;
  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    znonnegs_data[loop_ub] = fabs(y_data[loop_ub]);
  }
  loop_ub = znonnegs->size[0];
  for (i = 0; i < loop_ub; i++) {
    znonnegs_data[i]++;
  }
  nx = znonnegs->size[0];
  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    znonnegs_data[loop_ub] = log(znonnegs_data[loop_ub]);
  }
  if (vposlai->size[0] == znonnegs->size[0]) {
    loop_ub = vposlai->size[0];
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] *= znonnegs_data[i];
    }
  } else {
    times(vposlai, znonnegs);
  }
  logG = blockedSummation(vposlai, vposlai->size[0]) / (double)X->size[0];
  end = y->size[0] - 1;
  nx = 0;
  for (i = 0; i <= end; i++) {
    if (!(y_data[i] >= 0.0)) {
      nx++;
    }
  }
  emxInit_real_T(&vneg, 1);
  i = vneg->size[0];
  vneg->size[0] = nx;
  emxEnsureCapacity_real_T(vneg, i);
  vneg_data = vneg->data;
  nx = 0;
  for (i = 0; i <= end; i++) {
    if (!(y_data[i] >= 0.0)) {
      vneg_data[nx] = -y_data[i] + 1.0;
      nx++;
    }
  }
  end = y->size[0] - 1;
  nx = 0;
  for (i = 0; i <= end; i++) {
    if (y_data[i] >= 0.0) {
      nx++;
    }
  }
  emxInit_real_T(&vpos, 1);
  i = vpos->size[0];
  vpos->size[0] = nx;
  emxEnsureCapacity_real_T(vpos, i);
  vpos_data = vpos->data;
  nx = 0;
  for (i = 0; i <= end; i++) {
    if (y_data[i] >= 0.0) {
      vpos_data[nx] = y_data[i] + 1.0;
      nx++;
    }
  }
  nx = vpos->size[0];
  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    vpos_data[loop_ub] = log(vpos_data[loop_ub]);
  }
  nx = vneg->size[0];
  for (loop_ub = 0; loop_ub < nx; loop_ub++) {
    vneg_data[loop_ub] = log(vneg_data[loop_ub]);
  }
  emxInit_real_T(&z, 1);
  emxInit_real_T(&w, 1);
  G = exp(logG);
  /*  loop over the values of \lambda */
  *outSC_Score_size = 1;
  loop_ub = y->size[0];
  Glaminus1 = exp((varargin_2 - 1.0) * logG);
  mc = X->size[0] - 1;
  inner = X->size[1];
  i = z->size[0];
  z->size[0] = y->size[0];
  emxEnsureCapacity_real_T(z, i);
  z_data = z->data;
  /*  Initialized z and w */
  i = w->size[0];
  w->size[0] = y->size[0];
  emxEnsureCapacity_real_T(w, i);
  w_data = w->data;
  for (i = 0; i < loop_ub; i++) {
    z_data[i] = y_data[i];
    w_data[i] = y_data[i];
  }
  /*  Glaminus1=G^(lai-1); */
  /*  Define transformed and constructed variable */
  /*  transformation for non negative values */
  /*  Compute transformed values and constructed variables depending on lambda
   */
  /*  transformation for non negative values */
  if (fabs(varargin_2) > 1.0E-8) {
    /*  if la is different from 0 */
    q = varargin_2 * Glaminus1;
    /*  vposlai=vpos.^lai; */
    loop_ub = vpos->size[0];
    i = vposlai->size[0];
    vposlai->size[0] = vpos->size[0];
    emxEnsureCapacity_real_T(vposlai, i);
    vposlai_data = vposlai->data;
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = varargin_2 * vpos_data[i];
    }
    nx = vposlai->size[0];
    for (loop_ub = 0; loop_ub < nx; loop_ub++) {
      vposlai_data[loop_ub] = exp(vposlai_data[loop_ub]);
    }
    i = znonnegs->size[0];
    znonnegs->size[0] = vposlai->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    loop_ub = vposlai->size[0];
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = (vposlai_data[i] - 1.0) / q;
    }
    end = y->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (y_data[i] >= 0.0) {
        z_data[i] = znonnegs_data[nx];
        nx++;
      }
    }
    k = 1.0 / varargin_2 + logG;
    if (vposlai->size[0] == vpos->size[0]) {
      loop_ub = vposlai->size[0];
      for (i = 0; i < loop_ub; i++) {
        vposlai_data[i] = (vposlai_data[i] * (vpos_data[i] - k) + k) / q;
      }
    } else {
      bd_binary_expand_op(vposlai, vpos, k, q);
      vposlai_data = vposlai->data;
    }
    end = y->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (y_data[i] >= 0.0) {
        w_data[i] = vposlai_data[nx];
        nx++;
      }
    }
  } else {
    /*  if la is equal to 0 */
    loop_ub = vpos->size[0];
    i = znonnegs->size[0];
    znonnegs->size[0] = vpos->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = G * vpos_data[i];
    }
    end = y->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (y_data[i] >= 0.0) {
        z_data[i] = znonnegs_data[nx];
        nx++;
      }
    }
    if (znonnegs->size[0] == vpos->size[0]) {
      loop_ub = znonnegs->size[0];
      for (i = 0; i < loop_ub; i++) {
        znonnegs_data[i] *= vpos_data[i] / 2.0 - logG;
      }
    } else {
      cd_binary_expand_op(znonnegs, vpos, logG);
      znonnegs_data = znonnegs->data;
    }
    end = y->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (y_data[i] >= 0.0) {
        w_data[i] = znonnegs_data[nx];
        nx++;
      }
    }
  }
  emxFree_real_T(&vpos);
  /*  Transformation and constructed variables for negative values */
  if (fabs(varargin_2 - 2.0) > 1.0E-8) {
    /*  la not equal 2 */
    /*  vnegtwomlambdai=vneg.^twomlambdai; */
    loop_ub = vneg->size[0];
    i = vposlai->size[0];
    vposlai->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(vposlai, i);
    vposlai_data = vposlai->data;
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = (2.0 - varargin_2) * vneg_data[i];
    }
    nx = vposlai->size[0];
    for (loop_ub = 0; loop_ub < nx; loop_ub++) {
      vposlai_data[loop_ub] = exp(vposlai_data[loop_ub]);
    }
    G = (2.0 - varargin_2) * Glaminus1;
    i = znonnegs->size[0];
    znonnegs->size[0] = vposlai->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    loop_ub = vposlai->size[0];
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = (1.0 - vposlai_data[i]) / G;
    }
    end = y->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (!(y_data[i] >= 0.0)) {
        z_data[i] = znonnegs_data[nx];
        nx++;
      }
    }
    k = logG - 1.0 / (2.0 - varargin_2);
    if (vposlai->size[0] == vneg->size[0]) {
      loop_ub = vposlai->size[0];
      for (i = 0; i < loop_ub; i++) {
        vposlai_data[i] = (vposlai_data[i] * (vneg_data[i] + k) - k) / G;
      }
    } else {
      ad_binary_expand_op(vposlai, vneg, k, G);
      vposlai_data = vposlai->data;
    }
    end = y->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (!(y_data[i] >= 0.0)) {
        w_data[i] = vposlai_data[nx];
        nx++;
      }
    }
  } else {
    /*  la equals 2 */
    loop_ub = vneg->size[0];
    i = znonnegs->size[0];
    znonnegs->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = -vneg_data[i] / G;
    }
    end = y->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (!(y_data[i] >= 0.0)) {
        z_data[i] = znonnegs_data[nx];
        nx++;
      }
    }
    loop_ub = vneg->size[0];
    i = vposlai->size[0];
    vposlai->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(vposlai, i);
    vposlai_data = vposlai->data;
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = vneg_data[i] * (vneg_data[i] / 2.0 + logG) / G;
    }
    end = y->size[0];
    nx = 0;
    for (i = 0; i < end; i++) {
      if (!(y_data[i] >= 0.0)) {
        w_data[i] = vposlai_data[nx];
        nx++;
      }
    }
  }
  emxFree_real_T(&vneg);
  /*  Compute residual sum of squares for null (reduced) model */
  mldivide(X, z, znonnegs);
  znonnegs_data = znonnegs->data;
  i = vposlai->size[0];
  vposlai->size[0] = X->size[0];
  emxEnsureCapacity_real_T(vposlai, i);
  vposlai_data = vposlai->data;
  for (i = 0; i <= mc; i++) {
    vposlai_data[i] = 0.0;
  }
  for (loop_ub = 0; loop_ub < inner; loop_ub++) {
    nx = loop_ub * X->size[0];
    for (i = 0; i <= mc; i++) {
      vposlai_data[i] += X_data[nx + i] * znonnegs_data[loop_ub];
    }
  }
  if (z->size[0] == vposlai->size[0]) {
    i = vposlai->size[0];
    vposlai->size[0] = z->size[0];
    emxEnsureCapacity_real_T(vposlai, i);
    vposlai_data = vposlai->data;
    loop_ub = z->size[0];
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = z_data[i] - vposlai_data[i];
    }
  } else {
    b_minus(vposlai, z);
  }
  /*  Sum of squares of residuals */
  if (vposlai->size[0] == 0) {
    q = 0.0;
  } else {
    q = b_xnrm2(vposlai->size[0], vposlai);
  }
  /*  Define augmented X matrix for overall constructed variable */
  if ((X->size[0] != 0) && (X->size[1] != 0)) {
    nx = X->size[0];
  } else if (w->size[0] != 0) {
    nx = w->size[0];
  } else {
    nx = X->size[0];
  }
  empty_non_axis_sizes = (nx == 0);
  if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
    loop_ub = X->size[1];
  } else {
    loop_ub = 0;
  }
  if (empty_non_axis_sizes || (w->size[0] != 0)) {
    b_i = 1;
  } else {
    b_i = 0;
  }
  emxInit_real_T(&Xw, 2);
  i = Xw->size[0] * Xw->size[1];
  Xw->size[0] = nx;
  Xw->size[1] = loop_ub + b_i;
  emxEnsureCapacity_real_T(Xw, i);
  vneg_data = Xw->data;
  for (i = 0; i < loop_ub; i++) {
    for (mc = 0; mc < nx; mc++) {
      vneg_data[mc + Xw->size[0] * i] = X_data[mc + nx * i];
    }
  }
  end = b_i;
  for (i = 0; i < end; i++) {
    for (mc = 0; mc < nx; mc++) {
      vneg_data[mc + Xw->size[0] * loop_ub] = w_data[mc];
    }
  }
  emxFree_real_T(&w);
  /*  New code */
  mldivide(Xw, z, vposlai);
  vposlai_data = vposlai->data;
  mc = Xw->size[0] - 1;
  inner = Xw->size[1];
  i = znonnegs->size[0];
  znonnegs->size[0] = Xw->size[0];
  emxEnsureCapacity_real_T(znonnegs, i);
  znonnegs_data = znonnegs->data;
  for (i = 0; i <= mc; i++) {
    znonnegs_data[i] = 0.0;
  }
  for (loop_ub = 0; loop_ub < inner; loop_ub++) {
    nx = loop_ub * Xw->size[0];
    for (i = 0; i <= mc; i++) {
      znonnegs_data[i] += vneg_data[nx + i] * vposlai_data[loop_ub];
    }
  }
  emxFree_real_T(&Xw);
  if (z->size[0] == znonnegs->size[0]) {
    loop_ub = z->size[0];
    for (i = 0; i < loop_ub; i++) {
      z_data[i] -= znonnegs_data[i];
    }
  } else {
    c_minus(z, znonnegs);
  }
  emxFree_real_T(&znonnegs);
  /*  Sum of squares of residuals */
  if (z->size[0] == 0) {
    G = 0.0;
  } else {
    G = b_xnrm2(z->size[0], z);
  }
  emxFree_real_T(&z);
  Glaminus1 = G * G;
  G = vposlai_data[vposlai->size[0] - 1];
  if (vposlai_data[vposlai->size[0] - 1] < 0.0) {
    G = -1.0;
  } else if (vposlai_data[vposlai->size[0] - 1] > 0.0) {
    G = 1.0;
  } else if (vposlai_data[vposlai->size[0] - 1] == 0.0) {
    G = 0.0;
  }
  emxFree_real_T(&vposlai);
  outSC_Score_data[0] =
      -G * sqrt((q * q - Glaminus1) /
                (Glaminus1 / ((double)(X->size[0] - X->size[1]) - 1.0)));
  /*  Store the value of the likelihood for the model which also contains */
  /*  the constructed variable */
  /*  Store values of the score test inside structure outSC */
  /*  Store values of the likelihood inside structure outSC */
  *outSC_Lik = rtNaN;
}

void ad_binary_expand_op(emxArray_real_T *vposlai, const emxArray_real_T *vneg,
                         double k, double qneg)
{
  emxArray_real_T *b_vposlai;
  const double *vneg_data;
  double *b_vposlai_data;
  double *vposlai_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  vneg_data = vneg->data;
  vposlai_data = vposlai->data;
  emxInit_real_T(&b_vposlai, 1);
  i = b_vposlai->size[0];
  if (vneg->size[0] == 1) {
    b_vposlai->size[0] = vposlai->size[0];
  } else {
    b_vposlai->size[0] = vneg->size[0];
  }
  emxEnsureCapacity_real_T(b_vposlai, i);
  b_vposlai_data = b_vposlai->data;
  stride_0_0 = (vposlai->size[0] != 1);
  stride_1_0 = (vneg->size[0] != 1);
  if (vneg->size[0] == 1) {
    loop_ub = vposlai->size[0];
  } else {
    loop_ub = vneg->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_vposlai_data[i] =
        (vposlai_data[i * stride_0_0] * (vneg_data[i * stride_1_0] + k) - k) /
        qneg;
  }
  i = vposlai->size[0];
  vposlai->size[0] = b_vposlai->size[0];
  emxEnsureCapacity_real_T(vposlai, i);
  vposlai_data = vposlai->data;
  loop_ub = b_vposlai->size[0];
  for (i = 0; i < loop_ub; i++) {
    vposlai_data[i] = b_vposlai_data[i];
  }
  emxFree_real_T(&b_vposlai);
}

void bd_binary_expand_op(emxArray_real_T *vposlai, const emxArray_real_T *vpos,
                         double k, double q)
{
  emxArray_real_T *b_vposlai;
  const double *vpos_data;
  double *b_vposlai_data;
  double *vposlai_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  vpos_data = vpos->data;
  vposlai_data = vposlai->data;
  emxInit_real_T(&b_vposlai, 1);
  i = b_vposlai->size[0];
  if (vpos->size[0] == 1) {
    b_vposlai->size[0] = vposlai->size[0];
  } else {
    b_vposlai->size[0] = vpos->size[0];
  }
  emxEnsureCapacity_real_T(b_vposlai, i);
  b_vposlai_data = b_vposlai->data;
  stride_0_0 = (vposlai->size[0] != 1);
  stride_1_0 = (vpos->size[0] != 1);
  if (vpos->size[0] == 1) {
    loop_ub = vposlai->size[0];
  } else {
    loop_ub = vpos->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_vposlai_data[i] =
        (vposlai_data[i * stride_0_0] * (vpos_data[i * stride_1_0] - k) + k) /
        q;
  }
  i = vposlai->size[0];
  vposlai->size[0] = b_vposlai->size[0];
  emxEnsureCapacity_real_T(vposlai, i);
  vposlai_data = vposlai->data;
  loop_ub = b_vposlai->size[0];
  for (i = 0; i < loop_ub; i++) {
    vposlai_data[i] = b_vposlai_data[i];
  }
  emxFree_real_T(&b_vposlai);
}

void times(emxArray_real_T *vposlai, const emxArray_real_T *znonnegs)
{
  emxArray_real_T *b_vposlai;
  const double *znonnegs_data;
  double *b_vposlai_data;
  double *vposlai_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  znonnegs_data = znonnegs->data;
  vposlai_data = vposlai->data;
  emxInit_real_T(&b_vposlai, 1);
  i = b_vposlai->size[0];
  if (znonnegs->size[0] == 1) {
    b_vposlai->size[0] = vposlai->size[0];
  } else {
    b_vposlai->size[0] = znonnegs->size[0];
  }
  emxEnsureCapacity_real_T(b_vposlai, i);
  b_vposlai_data = b_vposlai->data;
  stride_0_0 = (vposlai->size[0] != 1);
  stride_1_0 = (znonnegs->size[0] != 1);
  if (znonnegs->size[0] == 1) {
    loop_ub = vposlai->size[0];
  } else {
    loop_ub = znonnegs->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_vposlai_data[i] =
        vposlai_data[i * stride_0_0] * znonnegs_data[i * stride_1_0];
  }
  i = vposlai->size[0];
  vposlai->size[0] = b_vposlai->size[0];
  emxEnsureCapacity_real_T(vposlai, i);
  vposlai_data = vposlai->data;
  loop_ub = b_vposlai->size[0];
  for (i = 0; i < loop_ub; i++) {
    vposlai_data[i] = b_vposlai_data[i];
  }
  emxFree_real_T(&b_vposlai);
}

/* End of code generation (ScoreYJ.c) */
