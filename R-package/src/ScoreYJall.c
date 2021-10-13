/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ScoreYJall.c
 *
 * Code generation for function 'ScoreYJall'
 *
 */

/* Include files */
#include "ScoreYJall.h"
#include "FSRmdr.h"
#include "Score.h"
#include "ScoreYJ.h"
#include "blockedSummation.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sign.h"
#include "xnrm2.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void dd_binary_expand_op(emxArray_real_T *r1,
                                const emxArray_real_T *znonnegs,
                                const emxArray_real_T *logvneg, double kN,
                                double qneg);

static void ed_binary_expand_op(emxArray_real_T *r1,
                                const emxArray_real_T *logvneg, double logG,
                                double G);

static void fd_binary_expand_op(emxArray_real_T *vposlai,
                                const emxArray_real_T *logvneg,
                                const emxArray_real_T *r1, double logGneg,
                                double G);

static void gd_binary_expand_op(emxArray_real_T *r1,
                                const emxArray_real_T *vposlai,
                                const emxArray_real_T *logvpos, double kpos,
                                double q);

static void hd_binary_expand_op(emxArray_real_T *znonnegs,
                                const emxArray_real_T *r1, double logG);

static void id_binary_expand_op(emxArray_real_T *vposlai,
                                const emxArray_real_T *znonnegs,
                                const emxArray_real_T *r1, double logGpos);

/* Function Definitions */
static void dd_binary_expand_op(emxArray_real_T *r1,
                                const emxArray_real_T *znonnegs,
                                const emxArray_real_T *logvneg, double kN,
                                double qneg)
{
  const double *logvneg_data;
  const double *znonnegs_data;
  double *r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  logvneg_data = logvneg->data;
  znonnegs_data = znonnegs->data;
  i = r1->size[0];
  if (logvneg->size[0] == 1) {
    r1->size[0] = znonnegs->size[0];
  } else {
    r1->size[0] = logvneg->size[0];
  }
  emxEnsureCapacity_real_T(r1, i);
  r = r1->data;
  stride_0_0 = (znonnegs->size[0] != 1);
  stride_1_0 = (logvneg->size[0] != 1);
  if (logvneg->size[0] == 1) {
    loop_ub = znonnegs->size[0];
  } else {
    loop_ub = logvneg->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] =
        (znonnegs_data[i * stride_0_0] * (logvneg_data[i * stride_1_0] + kN) -
         kN) /
        qneg;
  }
}

static void ed_binary_expand_op(emxArray_real_T *r1,
                                const emxArray_real_T *logvneg, double logG,
                                double G)
{
  emxArray_real_T *b_logvneg;
  const double *logvneg_data;
  double *b_logvneg_data;
  double *r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  logvneg_data = logvneg->data;
  r = r1->data;
  emxInit_real_T(&b_logvneg, 1);
  i = b_logvneg->size[0];
  if (r1->size[0] == 1) {
    b_logvneg->size[0] = logvneg->size[0];
  } else {
    b_logvneg->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(b_logvneg, i);
  b_logvneg_data = b_logvneg->data;
  stride_0_0 = (logvneg->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = logvneg->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_logvneg_data[i] =
        logvneg_data[i * stride_0_0] * (r[i * stride_1_0] + logG) / G;
  }
  i = r1->size[0];
  r1->size[0] = b_logvneg->size[0];
  emxEnsureCapacity_real_T(r1, i);
  r = r1->data;
  loop_ub = b_logvneg->size[0];
  for (i = 0; i < loop_ub; i++) {
    r[i] = b_logvneg_data[i];
  }
  emxFree_real_T(&b_logvneg);
}

static void fd_binary_expand_op(emxArray_real_T *vposlai,
                                const emxArray_real_T *logvneg,
                                const emxArray_real_T *r1, double logGneg,
                                double G)
{
  const double *logvneg_data;
  const double *r;
  double *vposlai_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  r = r1->data;
  logvneg_data = logvneg->data;
  i = vposlai->size[0];
  if (r1->size[0] == 1) {
    vposlai->size[0] = logvneg->size[0];
  } else {
    vposlai->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(vposlai, i);
  vposlai_data = vposlai->data;
  stride_0_0 = (logvneg->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = logvneg->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    vposlai_data[i] =
        logvneg_data[i * stride_0_0] * (r[i * stride_1_0] + logGneg) / G;
  }
}

static void gd_binary_expand_op(emxArray_real_T *r1,
                                const emxArray_real_T *vposlai,
                                const emxArray_real_T *logvpos, double kpos,
                                double q)
{
  const double *logvpos_data;
  const double *vposlai_data;
  double *r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  logvpos_data = logvpos->data;
  vposlai_data = vposlai->data;
  i = r1->size[0];
  if (logvpos->size[0] == 1) {
    r1->size[0] = vposlai->size[0];
  } else {
    r1->size[0] = logvpos->size[0];
  }
  emxEnsureCapacity_real_T(r1, i);
  r = r1->data;
  stride_0_0 = (vposlai->size[0] != 1);
  stride_1_0 = (logvpos->size[0] != 1);
  if (logvpos->size[0] == 1) {
    loop_ub = vposlai->size[0];
  } else {
    loop_ub = logvpos->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] =
        (vposlai_data[i * stride_0_0] * (logvpos_data[i * stride_1_0] - kpos) +
         kpos) /
        q;
  }
}

static void hd_binary_expand_op(emxArray_real_T *znonnegs,
                                const emxArray_real_T *r1, double logG)
{
  emxArray_real_T *b_znonnegs;
  const double *r;
  double *b_znonnegs_data;
  double *znonnegs_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  r = r1->data;
  znonnegs_data = znonnegs->data;
  emxInit_real_T(&b_znonnegs, 1);
  i = b_znonnegs->size[0];
  if (r1->size[0] == 1) {
    b_znonnegs->size[0] = znonnegs->size[0];
  } else {
    b_znonnegs->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(b_znonnegs, i);
  b_znonnegs_data = b_znonnegs->data;
  stride_0_0 = (znonnegs->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = znonnegs->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_znonnegs_data[i] =
        znonnegs_data[i * stride_0_0] * (r[i * stride_1_0] - logG);
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

static void id_binary_expand_op(emxArray_real_T *vposlai,
                                const emxArray_real_T *znonnegs,
                                const emxArray_real_T *r1, double logGpos)
{
  const double *r;
  const double *znonnegs_data;
  double *vposlai_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  r = r1->data;
  znonnegs_data = znonnegs->data;
  i = vposlai->size[0];
  if (r1->size[0] == 1) {
    vposlai->size[0] = znonnegs->size[0];
  } else {
    vposlai->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(vposlai, i);
  vposlai_data = vposlai->data;
  stride_0_0 = (znonnegs->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = znonnegs->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    vposlai_data[i] =
        znonnegs_data[i * stride_0_0] * (r[i * stride_1_0] - logGpos);
  }
}

void ScoreYJall(const emxArray_real_T *y, const emxArray_real_T *X,
                double varargin_2, double outSC_Score_data[],
                int outSC_Score_size[2])
{
  emxArray_real_T *Xw;
  emxArray_real_T *logvneg;
  emxArray_real_T *logvpos;
  emxArray_real_T *r;
  emxArray_real_T *vneg;
  emxArray_real_T *vpos;
  emxArray_real_T *vposlai;
  emxArray_real_T *w;
  emxArray_real_T *wneg;
  emxArray_real_T *znonnegs;
  const double *X_data;
  const double *y_data;
  double G;
  double Glaminus1;
  double kpos;
  double logG;
  double logGneg;
  double logGpos;
  double q;
  double *logvneg_data;
  double *logvpos_data;
  double *r1;
  double *vneg_data;
  double *vpos_data;
  double *vposlai_data;
  double *w_data;
  double *wneg_data;
  double *znonnegs_data;
  int i;
  int i2;
  int k;
  int loop_ub;
  int n;
  int nx;
  signed char i1;
  signed char sizes_idx_1;
  bool empty_non_axis_sizes;
  bool vnegboo;
  bool vposboo;
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&vposlai, 1);
  /* Computes all the 4 score tests for YJ transformation */
  /*  */
  /* <a href="matlab: docsearchFS('ScoreYJall')">Link to the help function</a>
   */
  /*  */
  /*  The transformations for negative and positive responses were determined */
  /*  by Yeo and Johnson (2000) by imposing the smoothness condition that the */
  /*  second derivative of zYJ(λ) with respect to y be smooth at y = 0. However
   */
  /*  some authors, for example Weisberg (2005), query the physical */
  /*  interpretability of this constraint which is oftern violated in data */
  /*  analysis. Accordingly, Atkinson et al (2019) and (2020) extend the */
  /*  Yeo-Johnson transformation to allow two values of the transformations */
  /*  parameter: λN for negative observations and λP for non-negative ones. */
  /*  ScoreYJall computes: */
  /*  1) the global t test associated with the constructed variable for */
  /*  λ=λP=λN. */
  /*  2) the t test associated with the constructed variable computed assuming
   */
  /*  a different transformation for positive observations keeping the value of
   */
  /*  the transformation parameter for negative observations fixed. In short we
   */
  /*  call this test, "test for positive observations". */
  /*  3) the t test associated with the constructed variable computed assuming
   */
  /*  a different transformation for negative observations keeping the value of
   */
  /*  the transformation parameter for positive observations fixed. In short we
   */
  /*  call this test, "test for negative observations". */
  /*  4) the F test for the joint presence of the two constructed variables */
  /*  described in points 2) and 3. */
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
  /*         la  :  transformation parameter. Vector. It specifies for which */
  /*                values of the transformation parameter it is necessary to */
  /*                compute the score test. Default value of lambda is la=[-1 */
  /*                -0.5 0 0.5 1]; that is the five most common values of */
  /*                lambda */
  /*                Example - 'la',[0 0.5] */
  /*                Data Types - double */
  /*  */
  /*       scoremle: likelihood ratio test for the two different transformation
   */
  /*                 parameters $\lambda_P$ and $\lambda_N$. Boolean. */
  /*                 if scoremle is true it is possible to compute the */
  /*                 likelihood ratio test. In this case the residual sum of */
  /*                 squares of the null model bsaed on a single transformation
   */
  /*                 parameter $\lambda$ is compared with the residual sum of */
  /*                 squares of the model based on data transformed data using
   */
  /*                 MLE of $\lambda_P$ and $\lambda_N$. If scoremle is true it
   */
  /*                 is possible through following option usefmin, to control */
  /*                 the parameters of the optmization routine. */
  /*                Example - 'scoremle',true */
  /*                Data Types - logical */
  /*  */
  /*     usefmin :  use solver to find MLE of lambda. Boolean or struct. */
  /*                if usefmin is true or usefmin is a struct it is */
  /*                possible to use MATLAB solvers fminsearch or fminunc to */
  /*                find the maximum likelihood estimates of $\lambda_P$ and */
  /*                $\lambda_N$. The default value of usefmin is false that is
   */
  /*                solver is not used and the likelihood is evaluated at the */
  /*                grid of points with steps 0.01. */
  /*                If usefmin is a structure it may contain the following */
  /*                fields: */
  /*                usefmin.MaxIter = Maximum number of iterations (default is
   * 1000). */
  /*                usefmin.TolX   = Termination tolerance for the parameters */
  /*                    (default is 1e-7). */
  /*                usefmin.solver = name of the solver. Possible values are */
  /*                    'fminsearch' (default) and 'fminunc'. fminunc needs the
   */
  /*                    optimization toolbox. */
  /*                usefmin.displayLevel = amount of information displayed by */
  /*                    the algorithm. possible values are 'off' (displays no */
  /*                    information, this is the default), 'final' (displays */
  /*                    just the final output) and 'iter' (displays iterative */
  /*                    output to the command window). */
  /*                Example - 'usefmin',true */
  /*                Data Types - boolean or struct */
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
  /*         outSC.Score =       score tests. Matrix. */
  /*                             Matrix of size length(la)-by-5 which */
  /*                             contains the value of the score test for each
   */
  /*                             value of lambda specified in optional input */
  /*                             parameter la. The first column refers to the */
  /*                             global test, the second to the test for */
  /*                             positive observations, the third refers to the
   */
  /*                             test for negative observations and the fourth
   */
  /*                             column refers to the F test for the joint */
  /*                             presence of the two constructed variables. */
  /*                             If input option scoremle is true the fifth */
  /*                             column will contain the exact likelihod ratio
   */
  /*                             test based on the maximum likelihood estimates
   */
  /*                             of the $\lambda_P$ and $\lambda_N$. */
  /*                             If la is not specified, the number of rows of
   */
  /*                             outSc.Score is equal to 5 and will contain the
   */
  /*                             values of the score tests for the 5 most common
   */
  /*                             values of lambda. */
  /*         outSC.laMLE =       MLE of lambda. Vector. */
  /*                             Vector of dimension 2 which */
  /*                             contains the value of maximum likelihood */
  /*                             estimate of $\lambda_P$ and $\lambda_N$.  This
   */
  /*                             output is present only if input option */
  /*                             scoremle is true. */
  /*  */
  /*  See also: FSRfan, Score, ScoreYJ, ScoreYjpn, fanBIC */
  /*  */
  /*  References: */
  /*  */
  /*  Yeo, I.K. and Johnson, R. (2000), A new family of power */
  /*  transformations to improve normality or symmetry, "Biometrika", Vol. 87,
   */
  /*  pp. 954-959. */
  /*  Atkinson, A.C. Riani, M., Corbellini A. (2019), The analysis of */
  /*  transformations for profit-and-loss data, Journal of the Royal */
  /*  Statistical Society, Series C, "Applied Statistics", */
  /*  https://doi.org/10.1111/rssc.12389 */
  /*  Atkinson, A.C. Riani, M. and Corbellini A. (2020), The Box-Cox */
  /*  Transformation: Review and Extensions, "Statistical Science", in press. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('ScoreYJall')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate:: 2017-11-17 15:01:40 #$: Date of the last commit */
  /*  Examples */
  /* { */
  /*     %% Ex in which positive and negative observations require the same
   * lambda. */
  /*     rng('default') */
  /*     rng(100) */
  /*     n=100; */
  /*     y=randn(n,1); */
  /*     % Transform the value to find out if we can recover the true value of
   */
  /*     % the transformation parameter */
  /*     la=0.5; */
  /*     ytra=normYJ(y,[],la,'inverse',true); */
  /*     % Start the analysis */
  /*     X=ones(n,1); */
  /*     [outSC]=ScoreYJall(ytra,X,'intercept',false); */
  /*     la=[-1 -0.5 0 0.5 1]'; */
  /*     Sco=[la outSC.Score]; */
  /*     Scotable=array2table(Sco,'VariableNames',{'lambda','Tall','Tp','Tn','Ftest'});
   */
  /*     disp(Scotable) */
  /*     % Comment: if we consider the 5 most common values of lambda the value
   */
  /*     % of the score test when lambda=0.5 is the only one which is not */
  /*     % significant. Both values of the score test for positive and negative
   */
  /*     % observations and the Ftest confirm that this value of the */
  /*     % transformation parameter is OK for both sides of the distribution. */
  /* } */
  /* { */
  /*     %% Ex in which positive and negative observation require different
   * lambdas. */
  /*     rng(2000) */
  /*     n=100; */
  /*     y=randn(n,1); */
  /*     % Tranform in a different way positive and negative values */
  /*     lapos=0; */
  /*     ytrapos=normYJ(y(y>=0),[],lapos,'inverse',true); */
  /*     laneg=1; */
  /*     ytraneg=normYJ(y(y<0),[],laneg,'inverse',true); */
  /*     ytra=[ytrapos; ytraneg]; */
  /*  */
  /*     % Start the analysis */
  /*     X=ones(n,1); */
  /*     % also compute lik. ratio test based on MLE of laP and laN */
  /*     scoremle=true; */
  /*     [outSC]=ScoreYJall(ytra,X,'intercept',false,'scoremle',scoremle); */
  /*     la=[-1 -0.5 0 0.5 1]'; */
  /*     Sco=[la outSC.Score]; */
  /*     Scotable=array2table(Sco,'VariableNames',{'lambda','Tall','Tp','Tn','FtestPN'
   * 'FtestLR'}); */
  /*     disp(Scotable) */
  /*     % Comment: if we consider the 5 most common values of lambda */
  /*     % the value of the score test when lambda=0.5 is the only one which is
   * not */
  /*     % significant. However when lambda=0.5 the score test for negative */
  /*     % observations is highly significant. */
  /*     disp('Difference between the test for positive and the test for
   * negative') */
  /*     disp(abs(Scotable{4,3}-Scotable{4,4})), */
  /*     % which is very */
  /*     % large. This indicates that the two tails need a different value of
   * the */
  /*     % transformation parameter. */
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
  n = X->size[0];
  /*  Write in structure 'options' the options chosen by the user */
  /*  SSElaMLE = residual sum of squares of the regression model based on */
  /*  MLE of laPos and laNeg */
  /*  inizialize qunatities which do not depnd on la(i) */
  nx = y->size[0];
  i = vposlai->size[0];
  vposlai->size[0] = y->size[0];
  emxEnsureCapacity_real_T(vposlai, i);
  vposlai_data = vposlai->data;
  for (k = 0; k < nx; k++) {
    vposlai_data[k] = fabs(y_data[k]);
  }
  loop_ub = vposlai->size[0];
  for (i = 0; i < loop_ub; i++) {
    vposlai_data[i]++;
  }
  nx = vposlai->size[0];
  for (k = 0; k < nx; k++) {
    vposlai_data[k] = log(vposlai_data[k]);
  }
  emxInit_real_T(&znonnegs, 1);
  i = znonnegs->size[0];
  znonnegs->size[0] = y->size[0];
  emxEnsureCapacity_real_T(znonnegs, i);
  znonnegs_data = znonnegs->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    znonnegs_data[i] = y_data[i];
  }
  b_sign(znonnegs);
  znonnegs_data = znonnegs->data;
  if (znonnegs->size[0] == vposlai->size[0]) {
    loop_ub = znonnegs->size[0];
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] *= vposlai_data[i];
    }
  } else {
    times(znonnegs, vposlai);
  }
  logG = blockedSummation(znonnegs, znonnegs->size[0]) / (double)X->size[0];
  k = y->size[0] - 1;
  nx = 0;
  for (loop_ub = 0; loop_ub <= k; loop_ub++) {
    if (!(y_data[loop_ub] >= 0.0)) {
      nx++;
    }
  }
  emxInit_real_T(&vneg, 1);
  i = vneg->size[0];
  vneg->size[0] = nx;
  emxEnsureCapacity_real_T(vneg, i);
  vneg_data = vneg->data;
  nx = 0;
  for (loop_ub = 0; loop_ub <= k; loop_ub++) {
    if (!(y_data[loop_ub] >= 0.0)) {
      vneg_data[nx] = -y_data[loop_ub] + 1.0;
      nx++;
    }
  }
  k = y->size[0] - 1;
  nx = 0;
  for (loop_ub = 0; loop_ub <= k; loop_ub++) {
    if (y_data[loop_ub] >= 0.0) {
      nx++;
    }
  }
  emxInit_real_T(&vpos, 1);
  i = vpos->size[0];
  vpos->size[0] = nx;
  emxEnsureCapacity_real_T(vpos, i);
  vpos_data = vpos->data;
  nx = 0;
  for (loop_ub = 0; loop_ub <= k; loop_ub++) {
    if (y_data[loop_ub] >= 0.0) {
      vpos_data[nx] = y_data[loop_ub] + 1.0;
      nx++;
    }
  }
  emxInit_real_T(&logvpos, 1);
  i = logvpos->size[0];
  logvpos->size[0] = vpos->size[0];
  emxEnsureCapacity_real_T(logvpos, i);
  logvpos_data = logvpos->data;
  loop_ub = vpos->size[0];
  for (i = 0; i < loop_ub; i++) {
    logvpos_data[i] = vpos_data[i];
  }
  nx = vpos->size[0];
  for (k = 0; k < nx; k++) {
    logvpos_data[k] = log(logvpos_data[k]);
  }
  emxInit_real_T(&logvneg, 1);
  logGpos = blockedSummation(logvpos, logvpos->size[0]) / (double)X->size[0];
  i = logvneg->size[0];
  logvneg->size[0] = vneg->size[0];
  emxEnsureCapacity_real_T(logvneg, i);
  logvneg_data = logvneg->data;
  loop_ub = vneg->size[0];
  for (i = 0; i < loop_ub; i++) {
    logvneg_data[i] = vneg_data[i];
  }
  nx = vneg->size[0];
  for (k = 0; k < nx; k++) {
    logvneg_data[k] = log(logvneg_data[k]);
  }
  i = znonnegs->size[0];
  znonnegs->size[0] = logvneg->size[0];
  emxEnsureCapacity_real_T(znonnegs, i);
  znonnegs_data = znonnegs->data;
  loop_ub = logvneg->size[0];
  for (i = 0; i < loop_ub; i++) {
    znonnegs_data[i] = -logvneg_data[i];
  }
  logGneg = blockedSummation(znonnegs, znonnegs->size[0]) / (double)X->size[0];
  G = exp(logG);
  /* Gpos=exp(logGpos); */
  /* Gneg=exp(logGneg); */
  /*  Note that Gpos*Gneg=G */
  /*   Sc= matrix lla-by-5 which contain: */
  /*  1st col = global t test */
  /*  2nd col = t test for pos */
  /*  3rd col = t test for neg */
  /*  4th col = F test for both */
  /*  5th col = Lik. ratio test for both (if input option scoremle is true) */
  /*   for the values of \lambda specified in vector la */
  outSC_Score_size[0] = 1;
  outSC_Score_size[1] = 4;
  /*  The identity matrix of size p+1 can be */
  /*  computed once and for all */
  /*  eyep1=eye(p+1); */
  /*  loop over the values of \lambda */
  loop_ub = y->size[0];
  Glaminus1 = rt_powd_snf(G, varargin_2 - 1.0);
  q = varargin_2 * Glaminus1;
  vposboo = (vpos->size[0] != 0);
  vnegboo = (vneg->size[0] != 0);
  i = vneg->size[0];
  vneg->size[0] = y->size[0];
  emxEnsureCapacity_real_T(vneg, i);
  vneg_data = vneg->data;
  for (i = 0; i < loop_ub; i++) {
    vneg_data[i] = y_data[i];
  }
  emxInit_real_T(&wneg, 1);
  emxInit_real_T(&w, 1);
  /*  Initialized z and w */
  i = vpos->size[0];
  vpos->size[0] = X->size[0];
  emxEnsureCapacity_real_T(vpos, i);
  vpos_data = vpos->data;
  i = wneg->size[0];
  wneg->size[0] = X->size[0];
  emxEnsureCapacity_real_T(wneg, i);
  wneg_data = wneg->data;
  i = w->size[0];
  w->size[0] = X->size[0];
  emxEnsureCapacity_real_T(w, i);
  w_data = w->data;
  for (i = 0; i < n; i++) {
    vpos_data[i] = rtNaN;
    wneg_data[i] = rtNaN;
    w_data[i] = rtNaN;
  }
  /*  Compute transformed values and constructed variables depending on lambda
   */
  /*  transformation for non negative values */
  emxInit_real_T(&r, 1);
  if (fabs(varargin_2) > 1.0E-8) {
    /*  if la is different from 0 */
    /*  vposlai=vpos.^lai; */
    loop_ub = logvpos->size[0];
    i = vposlai->size[0];
    vposlai->size[0] = logvpos->size[0];
    emxEnsureCapacity_real_T(vposlai, i);
    vposlai_data = vposlai->data;
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = varargin_2 * logvpos_data[i];
    }
    nx = vposlai->size[0];
    for (k = 0; k < nx; k++) {
      vposlai_data[k] = exp(vposlai_data[k]);
    }
    kpos = 1.0 / varargin_2 + logGpos;
    i = znonnegs->size[0];
    znonnegs->size[0] = vposlai->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    loop_ub = vposlai->size[0];
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = (vposlai_data[i] - 1.0) / q;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (y_data[loop_ub] >= 0.0) {
        vneg_data[loop_ub] = znonnegs_data[nx];
        nx++;
      }
    }
    if (vposlai->size[0] == logvpos->size[0]) {
      i = r->size[0];
      r->size[0] = vposlai->size[0];
      emxEnsureCapacity_real_T(r, i);
      r1 = r->data;
      loop_ub = vposlai->size[0];
      for (i = 0; i < loop_ub; i++) {
        r1[i] = (vposlai_data[i] * (logvpos_data[i] - kpos) + kpos) / q;
      }
    } else {
      gd_binary_expand_op(r, vposlai, logvpos, kpos, q);
      r1 = r->data;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (y_data[loop_ub] >= 0.0) {
        vpos_data[loop_ub] = r1[nx];
        nx++;
      }
    }
    loop_ub = znonnegs->size[0];
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = -znonnegs_data[i] * logGneg;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (y_data[loop_ub] >= 0.0) {
        wneg_data[loop_ub] = znonnegs_data[nx];
        nx++;
      }
    }
    kpos = 1.0 / varargin_2 + logG;
    if (vposlai->size[0] == logvpos->size[0]) {
      loop_ub = vposlai->size[0];
      for (i = 0; i < loop_ub; i++) {
        vposlai_data[i] =
            (vposlai_data[i] * (logvpos_data[i] - kpos) + kpos) / q;
      }
    } else {
      bd_binary_expand_op(vposlai, logvpos, kpos, q);
      vposlai_data = vposlai->data;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (y_data[loop_ub] >= 0.0) {
        w_data[loop_ub] = vposlai_data[nx];
        nx++;
      }
    }
  } else {
    /*  if la is equal to 0 */
    loop_ub = logvpos->size[0];
    i = znonnegs->size[0];
    znonnegs->size[0] = logvpos->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = G * logvpos_data[i];
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (y_data[loop_ub] >= 0.0) {
        vneg_data[loop_ub] = znonnegs_data[nx];
        nx++;
      }
    }
    loop_ub = logvpos->size[0];
    i = r->size[0];
    r->size[0] = logvpos->size[0];
    emxEnsureCapacity_real_T(r, i);
    r1 = r->data;
    for (i = 0; i < loop_ub; i++) {
      r1[i] = logvpos_data[i] / 2.0;
    }
    if (znonnegs->size[0] == r->size[0]) {
      i = vposlai->size[0];
      vposlai->size[0] = znonnegs->size[0];
      emxEnsureCapacity_real_T(vposlai, i);
      vposlai_data = vposlai->data;
      loop_ub = znonnegs->size[0];
      for (i = 0; i < loop_ub; i++) {
        vposlai_data[i] = znonnegs_data[i] * (r1[i] - logGpos);
      }
    } else {
      id_binary_expand_op(vposlai, znonnegs, r, logGpos);
      vposlai_data = vposlai->data;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (y_data[loop_ub] >= 0.0) {
        vpos_data[loop_ub] = vposlai_data[nx];
        nx++;
      }
    }
    i = vposlai->size[0];
    vposlai->size[0] = znonnegs->size[0];
    emxEnsureCapacity_real_T(vposlai, i);
    vposlai_data = vposlai->data;
    loop_ub = znonnegs->size[0];
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = -znonnegs_data[i] * logGneg;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (y_data[loop_ub] >= 0.0) {
        wneg_data[loop_ub] = vposlai_data[nx];
        nx++;
      }
    }
    if (znonnegs->size[0] == r->size[0]) {
      loop_ub = znonnegs->size[0];
      for (i = 0; i < loop_ub; i++) {
        znonnegs_data[i] *= r1[i] - logG;
      }
    } else {
      hd_binary_expand_op(znonnegs, r, logG);
      znonnegs_data = znonnegs->data;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (y_data[loop_ub] >= 0.0) {
        w_data[loop_ub] = znonnegs_data[nx];
        nx++;
      }
    }
  }
  emxFree_real_T(&logvpos);
  /*  Transformation and constructed variables for negative values */
  if (fabs(2.0 - varargin_2) > 1.0E-8) {
    /*  la not equal 2 */
    /*  vnegtwomlambdai=vneg.^twomlambdai; */
    loop_ub = logvneg->size[0];
    i = znonnegs->size[0];
    znonnegs->size[0] = logvneg->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = (2.0 - varargin_2) * logvneg_data[i];
    }
    nx = znonnegs->size[0];
    for (k = 0; k < nx; k++) {
      znonnegs_data[k] = exp(znonnegs_data[k]);
    }
    Glaminus1 *= 2.0 - varargin_2;
    G = 1.0 / (2.0 - varargin_2);
    kpos = logGneg - G;
    i = vposlai->size[0];
    vposlai->size[0] = znonnegs->size[0];
    emxEnsureCapacity_real_T(vposlai, i);
    vposlai_data = vposlai->data;
    loop_ub = znonnegs->size[0];
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = (1.0 - znonnegs_data[i]) / Glaminus1;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (!(y_data[loop_ub] >= 0.0)) {
        vneg_data[loop_ub] = vposlai_data[nx];
        nx++;
      }
    }
    loop_ub = vposlai->size[0];
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = -vposlai_data[i] * logGpos;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (!(y_data[loop_ub] >= 0.0)) {
        vpos_data[loop_ub] = vposlai_data[nx];
        nx++;
      }
    }
    if (znonnegs->size[0] == logvneg->size[0]) {
      i = r->size[0];
      r->size[0] = znonnegs->size[0];
      emxEnsureCapacity_real_T(r, i);
      r1 = r->data;
      loop_ub = znonnegs->size[0];
      for (i = 0; i < loop_ub; i++) {
        r1[i] =
            (znonnegs_data[i] * (logvneg_data[i] + kpos) - kpos) / Glaminus1;
      }
    } else {
      dd_binary_expand_op(r, znonnegs, logvneg, kpos, Glaminus1);
      r1 = r->data;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (!(y_data[loop_ub] >= 0.0)) {
        wneg_data[loop_ub] = r1[nx];
        nx++;
      }
    }
    kpos = logG - G;
    if (znonnegs->size[0] == logvneg->size[0]) {
      loop_ub = znonnegs->size[0];
      for (i = 0; i < loop_ub; i++) {
        znonnegs_data[i] =
            (znonnegs_data[i] * (logvneg_data[i] + kpos) - kpos) / Glaminus1;
      }
    } else {
      ad_binary_expand_op(znonnegs, logvneg, kpos, Glaminus1);
      znonnegs_data = znonnegs->data;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (!(y_data[loop_ub] >= 0.0)) {
        w_data[loop_ub] = znonnegs_data[nx];
        nx++;
      }
    }
  } else {
    /*  la equals 2 */
    loop_ub = logvneg->size[0];
    i = vposlai->size[0];
    vposlai->size[0] = logvneg->size[0];
    emxEnsureCapacity_real_T(vposlai, i);
    vposlai_data = vposlai->data;
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = -logvneg_data[i] / G;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (!(y_data[loop_ub] >= 0.0)) {
        vneg_data[loop_ub] = vposlai_data[nx];
        nx++;
      }
    }
    loop_ub = vposlai->size[0];
    for (i = 0; i < loop_ub; i++) {
      vposlai_data[i] = -vposlai_data[i] * logGpos;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (!(y_data[loop_ub] >= 0.0)) {
        vpos_data[loop_ub] = vposlai_data[nx];
        nx++;
      }
    }
    loop_ub = logvneg->size[0];
    i = r->size[0];
    r->size[0] = logvneg->size[0];
    emxEnsureCapacity_real_T(r, i);
    r1 = r->data;
    for (i = 0; i < loop_ub; i++) {
      r1[i] = logvneg_data[i] / 2.0;
    }
    loop_ub = logvneg->size[0];
    if (logvneg->size[0] == r->size[0]) {
      i = vposlai->size[0];
      vposlai->size[0] = logvneg->size[0];
      emxEnsureCapacity_real_T(vposlai, i);
      vposlai_data = vposlai->data;
      for (i = 0; i < loop_ub; i++) {
        vposlai_data[i] = logvneg_data[i] * (r1[i] + logGneg) / G;
      }
    } else {
      fd_binary_expand_op(vposlai, logvneg, r, logGneg, G);
      vposlai_data = vposlai->data;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (!(y_data[loop_ub] >= 0.0)) {
        wneg_data[loop_ub] = vposlai_data[nx];
        nx++;
      }
    }
    loop_ub = logvneg->size[0];
    if (logvneg->size[0] == r->size[0]) {
      i = r->size[0];
      r->size[0] = logvneg->size[0];
      emxEnsureCapacity_real_T(r, i);
      r1 = r->data;
      for (i = 0; i < loop_ub; i++) {
        r1[i] = logvneg_data[i] * (r1[i] + logG) / G;
      }
    } else {
      ed_binary_expand_op(r, logvneg, logG, G);
      r1 = r->data;
    }
    k = y->size[0];
    nx = 0;
    for (loop_ub = 0; loop_ub < k; loop_ub++) {
      if (!(y_data[loop_ub] >= 0.0)) {
        w_data[loop_ub] = r1[nx];
        nx++;
      }
    }
  }
  emxFree_real_T(&logvneg);
  /*  Compute residual sum of squares for null (reduced) model */
  mldivide(X, vneg, r);
  mtimes(X, r, znonnegs);
  if (vneg->size[0] == znonnegs->size[0]) {
    i = znonnegs->size[0];
    znonnegs->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    loop_ub = vneg->size[0];
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = vneg_data[i] - znonnegs_data[i];
    }
  } else {
    b_minus(znonnegs, vneg);
  }
  /*  Sum of squares of residuals */
  if (znonnegs->size[0] == 0) {
    kpos = 0.0;
  } else {
    kpos = b_xnrm2(znonnegs->size[0], znonnegs);
  }
  Glaminus1 = kpos * kpos;
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
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 0;
  }
  emxInit_real_T(&Xw, 2);
  i = Xw->size[0] * Xw->size[1];
  Xw->size[0] = nx;
  Xw->size[1] = loop_ub + sizes_idx_1;
  emxEnsureCapacity_real_T(Xw, i);
  vposlai_data = Xw->data;
  for (i = 0; i < loop_ub; i++) {
    for (n = 0; n < nx; n++) {
      vposlai_data[n + Xw->size[0] * i] = X_data[n + nx * i];
    }
  }
  k = sizes_idx_1;
  for (i = 0; i < k; i++) {
    for (n = 0; n < nx; n++) {
      vposlai_data[n + Xw->size[0] * loop_ub] = w_data[n];
    }
  }
  emxFree_real_T(&w);
  /*  New code */
  mldivide(Xw, vneg, vposlai);
  vposlai_data = vposlai->data;
  mtimes(Xw, vposlai, znonnegs);
  if (vneg->size[0] == znonnegs->size[0]) {
    i = znonnegs->size[0];
    znonnegs->size[0] = vneg->size[0];
    emxEnsureCapacity_real_T(znonnegs, i);
    znonnegs_data = znonnegs->data;
    loop_ub = vneg->size[0];
    for (i = 0; i < loop_ub; i++) {
      znonnegs_data[i] = vneg_data[i] - znonnegs_data[i];
    }
  } else {
    b_minus(znonnegs, vneg);
  }
  /*  Sum of squares of residuals */
  if (znonnegs->size[0] == 0) {
    kpos = 0.0;
  } else {
    kpos = b_xnrm2(znonnegs->size[0], znonnegs);
  }
  kpos *= kpos;
  G = vposlai_data[vposlai->size[0] - 1];
  if (vposlai_data[vposlai->size[0] - 1] < 0.0) {
    G = -1.0;
  } else if (vposlai_data[vposlai->size[0] - 1] > 0.0) {
    G = 1.0;
  } else if (vposlai_data[vposlai->size[0] - 1] == 0.0) {
    G = 0.0;
  }
  outSC_Score_data[0] =
      -G * sqrt((Glaminus1 - kpos) /
                (kpos / ((double)(X->size[0] - X->size[1]) - 1.0)));
  /*  if vpos is empty all the observations are negative */
  if (vposboo) {
    /*  Define augmented X matrix */
    if ((X->size[0] != 0) && (X->size[1] != 0)) {
      nx = X->size[0];
    } else if (vpos->size[0] != 0) {
      nx = vpos->size[0];
    } else {
      nx = X->size[0];
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
      loop_ub = X->size[1];
    } else {
      loop_ub = 0;
    }
    if (empty_non_axis_sizes || (vpos->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    i = Xw->size[0] * Xw->size[1];
    Xw->size[0] = nx;
    Xw->size[1] = loop_ub + sizes_idx_1;
    emxEnsureCapacity_real_T(Xw, i);
    vposlai_data = Xw->data;
    for (i = 0; i < loop_ub; i++) {
      for (n = 0; n < nx; n++) {
        vposlai_data[n + Xw->size[0] * i] = X_data[n + nx * i];
      }
    }
    k = sizes_idx_1;
    for (i = 0; i < k; i++) {
      for (n = 0; n < nx; n++) {
        vposlai_data[n + Xw->size[0] * loop_ub] = vpos_data[n];
      }
    }
    /*  OLD slow code */
    /*          [Q,R] = qr(Xw,0); */
    /*          beta = R\(Q'*z); */
    /*          residuals = z - Xw*beta; */
    /*          % Sum of squares of residuals */
    /*          sse = norm(residuals)^2; */
    /*          % Compute t stat for constructed added variable */
    /*          ri = R\eyep1; */
    /*          xtxi = ri*ri'; */
    /*          se = sqrt(diag(xtxi*sse/(n-p-1))); */
    /*          Sc(i,1) = -beta(end)/se(end); */
    /*  New code */
    mldivide(Xw, vneg, vposlai);
    vposlai_data = vposlai->data;
    mtimes(Xw, vposlai, znonnegs);
    if (vneg->size[0] == znonnegs->size[0]) {
      i = znonnegs->size[0];
      znonnegs->size[0] = vneg->size[0];
      emxEnsureCapacity_real_T(znonnegs, i);
      znonnegs_data = znonnegs->data;
      loop_ub = vneg->size[0];
      for (i = 0; i < loop_ub; i++) {
        znonnegs_data[i] = vneg_data[i] - znonnegs_data[i];
      }
    } else {
      b_minus(znonnegs, vneg);
    }
    /*  Sum of squares of residuals */
    if (znonnegs->size[0] == 0) {
      kpos = 0.0;
    } else {
      kpos = b_xnrm2(znonnegs->size[0], znonnegs);
    }
    kpos *= kpos;
    G = vposlai_data[vposlai->size[0] - 1];
    if (vposlai_data[vposlai->size[0] - 1] < 0.0) {
      G = -1.0;
    } else if (vposlai_data[vposlai->size[0] - 1] > 0.0) {
      G = 1.0;
    } else if (vposlai_data[vposlai->size[0] - 1] == 0.0) {
      G = 0.0;
    }
    outSC_Score_data[1] =
        -G * sqrt((Glaminus1 - kpos) /
                  (kpos / ((double)(X->size[0] - X->size[1]) - 1.0)));
  } else {
    outSC_Score_data[1] = rtNaN;
  }
  /*  if vneg is empty all the observations are negative */
  if (vnegboo) {
    /*  Define augmented X matrix */
    if ((X->size[0] != 0) && (X->size[1] != 0)) {
      nx = X->size[0];
    } else if (wneg->size[0] != 0) {
      nx = wneg->size[0];
    } else {
      nx = X->size[0];
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
      loop_ub = X->size[1];
    } else {
      loop_ub = 0;
    }
    if (empty_non_axis_sizes || (wneg->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    i = Xw->size[0] * Xw->size[1];
    Xw->size[0] = nx;
    Xw->size[1] = loop_ub + sizes_idx_1;
    emxEnsureCapacity_real_T(Xw, i);
    vposlai_data = Xw->data;
    for (i = 0; i < loop_ub; i++) {
      for (n = 0; n < nx; n++) {
        vposlai_data[n + Xw->size[0] * i] = X_data[n + nx * i];
      }
    }
    k = sizes_idx_1;
    for (i = 0; i < k; i++) {
      for (n = 0; n < nx; n++) {
        vposlai_data[n + Xw->size[0] * loop_ub] = wneg_data[n];
      }
    }
    /*  OLD slow code */
    /*          [Q,R] = qr(Xw,0); */
    /*          beta = R\(Q'*z); */
    /*          residuals = z - Xw*beta; */
    /*          % Sum of squares of residuals */
    /*          sse = norm(residuals)^2; */
    /*          % Compute t stat for constructed added variable */
    /*          ri = R\eyep1; */
    /*          xtxi = ri*ri'; */
    /*          se = sqrt(diag(xtxi*sse/(n-p-1))); */
    /*          Sc(i,2) = -beta(end)/se(end); */
    /*  New code */
    mldivide(Xw, vneg, vposlai);
    vposlai_data = vposlai->data;
    mtimes(Xw, vposlai, znonnegs);
    if (vneg->size[0] == znonnegs->size[0]) {
      i = znonnegs->size[0];
      znonnegs->size[0] = vneg->size[0];
      emxEnsureCapacity_real_T(znonnegs, i);
      znonnegs_data = znonnegs->data;
      loop_ub = vneg->size[0];
      for (i = 0; i < loop_ub; i++) {
        znonnegs_data[i] = vneg_data[i] - znonnegs_data[i];
      }
    } else {
      b_minus(znonnegs, vneg);
    }
    /*  Sum of squares of residuals */
    if (znonnegs->size[0] == 0) {
      kpos = 0.0;
    } else {
      kpos = b_xnrm2(znonnegs->size[0], znonnegs);
    }
    kpos *= kpos;
    G = vposlai_data[vposlai->size[0] - 1];
    if (vposlai_data[vposlai->size[0] - 1] < 0.0) {
      G = -1.0;
    } else if (vposlai_data[vposlai->size[0] - 1] > 0.0) {
      G = 1.0;
    } else if (vposlai_data[vposlai->size[0] - 1] == 0.0) {
      G = 0.0;
    }
    kpos = -G * sqrt((Glaminus1 - kpos) /
                     (kpos / ((double)(X->size[0] - X->size[1]) - 1.0)));
    outSC_Score_data[2] = kpos;
  } else {
    kpos = rtNaN;
    outSC_Score_data[2] = rtNaN;
  }
  emxFree_real_T(&znonnegs);
  /*  Compute the F test for the joint presence of both constructed */
  /*  variables */
  if (vposboo && vnegboo) {
    /*  Compute residual sum of squares for full model */
    if ((X->size[0] != 0) && (X->size[1] != 0)) {
      nx = X->size[0];
    } else if (vpos->size[0] != 0) {
      nx = vpos->size[0];
    } else if (wneg->size[0] != 0) {
      nx = wneg->size[0];
    } else {
      nx = X->size[0];
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || ((X->size[0] != 0) && (X->size[1] != 0))) {
      loop_ub = X->size[1];
    } else {
      loop_ub = 0;
    }
    if (empty_non_axis_sizes || (vpos->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || (wneg->size[0] != 0)) {
      i1 = 1;
    } else {
      i1 = 0;
    }
    i = Xw->size[0] * Xw->size[1];
    Xw->size[0] = nx;
    n = loop_ub + sizes_idx_1;
    Xw->size[1] = n + i1;
    emxEnsureCapacity_real_T(Xw, i);
    vposlai_data = Xw->data;
    for (i = 0; i < loop_ub; i++) {
      for (i2 = 0; i2 < nx; i2++) {
        vposlai_data[i2 + Xw->size[0] * i] = X_data[i2 + nx * i];
      }
    }
    k = sizes_idx_1;
    for (i = 0; i < k; i++) {
      for (i2 = 0; i2 < nx; i2++) {
        vposlai_data[i2 + Xw->size[0] * loop_ub] = vpos_data[i2];
      }
    }
    loop_ub = i1;
    for (i = 0; i < loop_ub; i++) {
      for (i2 = 0; i2 < nx; i2++) {
        vposlai_data[i2 + Xw->size[0] * n] = wneg_data[i2];
      }
    }
    mldivide(Xw, vneg, r);
    mtimes(Xw, r, vposlai);
    vposlai_data = vposlai->data;
    if (vneg->size[0] == vposlai->size[0]) {
      loop_ub = vneg->size[0];
      for (i = 0; i < loop_ub; i++) {
        vneg_data[i] -= vposlai_data[i];
      }
    } else {
      c_minus(vneg, vposlai);
    }
    /*  Sum of squares of residuals */
    if (vneg->size[0] == 0) {
      kpos = 0.0;
    } else {
      kpos = b_xnrm2(vneg->size[0], vneg);
    }
    kpos *= kpos;
    outSC_Score_data[3] = (Glaminus1 - kpos) / 2.0 /
                          (kpos / ((double)(X->size[0] - X->size[1]) - 2.0));
  } else if (vposboo) {
    /*  If there are just positive observations F test is the square of */
    /*  the t test for positive */
    outSC_Score_data[3] = outSC_Score_data[1] * outSC_Score_data[1];
  } else {
    /*  in this case there are just negative observations */
    outSC_Score_data[3] = kpos * kpos;
  }
  emxFree_real_T(&r);
  emxFree_real_T(&Xw);
  emxFree_real_T(&vposlai);
  emxFree_real_T(&wneg);
  emxFree_real_T(&vpos);
  emxFree_real_T(&vneg);
  /*  Store values of the score test inside structure outSC */
  /*  Also store MLE of lambda */
}

/* End of code generation (ScoreYJall.c) */
