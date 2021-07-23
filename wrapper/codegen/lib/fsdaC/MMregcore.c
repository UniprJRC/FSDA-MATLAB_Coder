/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMregcore.c
 *
 * Code generation for function 'MMregcore'
 *
 */

/* Include files */
#include "MMregcore.h"
#include "HAwei.h"
#include "HYPwei.h"
#include "OPTwei.h"
#include "TBwei.h"
#include "bsxfun.h"
#include "chi2inv.h"
#include "find.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "gammainc.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void MMregcore(const emxArray_real_T *y, const emxArray_real_T *X,
               const emxArray_real_T *b0, double auxscale, double varargin_2,
               const emxArray_char_T *varargin_6,
               const emxArray_real_T *varargin_8, double varargin_10,
               double varargin_12, double varargin_14, e_struct_T *out)
{
  static const char b_cv[5] = {'M', 'M', 'r', 'e', 'g'};
  emxArray_boolean_T *c_y;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T *b1;
  emxArray_real_T *b_y;
  emxArray_real_T *c;
  emxArray_real_T *r1;
  emxArray_real_T *x;
  creal_T a_tmp_tmp;
  creal_T b_a_tmp;
  creal_T bet_tmp;
  creal_T c_a_tmp;
  double A2=0;
  double F;
  double a;
  double a2=0;
  double a_tmp;
  double b;
  double b2=0;
  double b_a;
  double b_c;
  double b_step;
  double c2=0;
  double c2_tmp;
  double ctun;
  int psifunc_class_size[2];
  int i;
  int k;
  int nx;
  char psifunc_class_data[3];
  /* MMregcore computes MM regression estimators for a selected fixed scale. */
  /*  */
  /* <a href="matlab: docsearchFS('MMregcore')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y: Response variable. Vector. A vector with n elements that contains */
  /*        the response variable. y can be either a row or a column vector. */
  /*     X: Data matrix of explanatory variables (also called 'regressors') of
   */
  /*        dimension (n x p-1). Rows of X represent observations, and columns
   */
  /*        represent variables. */
  /*        Missing values (NaN's) and infinite values (Inf's) are allowed, */
  /*        since observations (rows) with missing or infinite values will */
  /*        automatically be excluded from the computations. */
  /*     b0:        Initial estimate of beta. Vector. Vector containing initial
   */
  /*                estimate of beta (generally an S estimate with high */
  /*                breakdown point (e.g. 0.5) */
  /*  auxscale:     scale estimate. Scalar. */
  /*                Scalar containing estimate of the scale (generally an S */
  /*                estimate with high breakdown point (e.g. .5) */
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
  /*       eff     : nominal efficiency. Scalar. */
  /*                 Scalar defining nominal efficiency (i.e. a number between
   */
  /*                  0.5 and 0.99). The default value is 0.95 */
  /*                  Asymptotic nominal efficiency is: */
  /*                  $(\int \psi' d\Phi)^2 / (\psi^2 d\Phi)$ */
  /*                  Example - 'eff',0.99 */
  /*                  Data Types - double */
  /*  */
  /*      effshape : locacation or scale effiicency. dummy scalar. */
  /*                 If effshape=1 efficiency refers to shape */
  /*                 efficiency else (default) efficiency refers to location */
  /*                  Example - 'effshape',1 */
  /*                  Data Types - double */
  /*  */
  /*      refsteps  : Maximum iterations. Scalar. */
  /*                  Scalar defining maximum number of iterations in the MM */
  /*                  loop. Default value is 100. */
  /*                  Example - 'refsteps',10 */
  /*                  Data Types - double */
  /*  */
  /*       reftol: Tolerance. Scalar. */
  /*                  Scalar controlling tolerance in the MM loop. */
  /*                  Default value is 1e-7 */
  /*                  Example - 'tol',1e-10 */
  /*                  Data Types - double */
  /*  */
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar. */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*      rhofunc : rho function. String. String which specifies the rho */
  /*                function which must be used to weight the residuals. */
  /*                Possible values are */
  /*                'bisquare'; */
  /*                'optimal'; */
  /*                'hyperbolic'; */
  /*                'hampel'; */
  /*                'mdpd'. */
  /*                'bisquare' uses Tukey's $\rho$ and $\psi$ functions. */
  /*                See TBrho and TBpsi. */
  /*                'optimal' uses optimal $\rho$ and $\psi$ functions. */
  /*                See OPTrho and OPTpsi. */
  /*                'hyperbolic' uses hyperbolic $\rho$ and $\psi$ functions. */
  /*                See HYPrho and HYPpsi. */
  /*                'hampel' uses Hampel $\rho$ and $\psi$ functions. */
  /*                See HArho and HApsi. */
  /*                'mdpd' uses Minimum Density Power Divergence $\rho$ and
   * $\psi$ functions. */
  /*                See PDrho.m and PDpsi.m. */
  /*                The default is bisquare */
  /*                  Example - 'rhofunc','optimal' */
  /*                  Data Types - char */
  /*  */
  /*  rhofuncparam: Additional parameters for the specified rho function. */
  /*                Scalar or vector or empty  value. */
  /*                For hyperbolic rho function it is possible to set up the */
  /*                value of k = sup CVC (the default value of k is 4.5). */
  /*                For Hampel rho function it is possible to define parameters
   */
  /*                a, b and c (the default values are a=2, b=4, c=8). For the
   */
  /*                other rho functions (Tuhey, PD and optimal) it is an empty
   */
  /*                value. */
  /*                  Example - 'rhofuncparam',5 */
  /*                  Data Types - single | double */
  /*  */
  /*        nocheck : Check input arguments. Boolean. If nocheck is equal to */
  /*                true no check is performed on matrix y and matrix X. Notice
   */
  /*                that y and X are left unchanged. In other words the */
  /*                additional column of ones for the intercept is not added. */
  /*                As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*        plots : Plot on the screen. Scalar or structure. */
  /*                If plots = 1, generates a plot with the robust residuals */
  /*                against index number. The confidence level used to draw the
   */
  /*                confidence bands for the residuals is given by the input */
  /*                option conflev. If conflev is not specified a nominal 0.975
   */
  /*                confidence interval will be used. */
  /*                  Example - 'plots',0 */
  /*                  Data Types - single | double */
  /*  */
  /*        yxsave : the response vector y and data matrix X are saved into the
   * output */
  /*                 structure out. Scalar. */
  /*                Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*       out :     A structure containing the following fields */
  /*  */
  /*        out.beta  = p x 1 vector. Estimate of beta coefficients after */
  /*                    refsteps refining steps */
  /*    out.residuals = n x 1 vector containing the estimates of the robust */
  /*                    scaled residuals */
  /*    out.outliers  = A vector containing the list of the units declared as */
  /*                    outliers using confidence level specified in input */
  /*                    scalar conflev */
  /*    out.conflev   = Confidence level that was used to declare outliers */
  /*    out.weights   = n x 1 vector. Weights assigned to each observation */
  /*      out.rhofunc = string identifying the rho function which has been */
  /*                    used. */
  /*  out.rhofuncparam= vector which contains the additional parameters */
  /*                    for the specified rho function which have been */
  /*                    used. For hyperbolic rho function the value of */
  /*                    k =sup CVC. For Hampel rho function the parameters */
  /*                    a, b and c. This field is empty if rhofunc is not */
  /*                    'hampel' or 'hyperbolic'. */
  /*      out.y       = response vector y. The field is present only if option
   */
  /*                    yxsave is set to 1. */
  /*      out.X       = data matrix X. The field is present only if option */
  /*                    yxsave is set to 1. */
  /*      out.class   = 'MMreg' */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*  It does iterative reweighted least squares (IRWLS) steps from "initial */
  /*  beta" (b0) keeping the estimate of the scale (auxscale) fixed. */
  /*  */
  /*  See also: Sreg */
  /*  */
  /*  References: */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  */
  /*  Acknowledgements: */
  /*  */
  /*  This function follows the lines of MATLAB/R code developed during the */
  /*  years by many authors. */
  /*  For more details see http://www.econ.kuleuven.be/public/NDBAE06/programs/
   */
  /*  and the R library robustbase http://robustbase.r-forge.r-project.org/. */
  /*  The core of these routines, e.g. the resampling approach, however, has */
  /*  been completely redesigned, with considerable increase of the */
  /*  computational performance. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('MMregcore')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     % MMregcore with all default options. */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123456; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=10; */
  /*     ycont = y; */
  /*     ycont(1:kk)=ycont(1:kk)+7; */
  /*     [outS]=Sreg(ycont,X); */
  /*     outMM=MMregcore(ycont,X,outS.beta,outS.scale) */
  /* } */
  /* { */
  /*     %% MMregcore with optional input arguments. */
  /*     % Determine, e.g., an S estimate and extract the required arguments for
   * the MM estimate. */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123456; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=10; */
  /*     ycont = y; */
  /*     ycont(1:kk)=ycont(1:kk)+7; */
  /*     [outS]=Sreg(ycont,X); */
  /*     out=MMregcore(ycont,X,outS.beta,outS.scale,'plots',1) */
  /* } */
  /* { */
  /*     % Weighting the residuals with a rho function. */
  /*     % Determine, e.g., an S estimate and extract the required arguments for
   * the MM estimate. */
  /*     % This time use a Tukey biweight for S estimation and HA rho function
   */
  /*     % for MM loop */
  /*     n=200; */
  /*     p=3; */
  /*     state1=123456; */
  /*     randn('state', state1); */
  /*     X=randn(n,p); */
  /*     y=randn(n,1); */
  /*     kk=10; */
  /*     ycont = y; */
  /*     ycont(1:kk)=ycont(1:kk)+7; */
  /*     [outS]=Sreg(ycont,X); */
  /*     rhofunc='hampel'; */
  /*     outMM1=MMregcore(ycont,X,outS.beta,outS.scale,'rhofunc',rhofunc,'plots',1)
   */
  /* } */
  /* { */
  /*     % Comparison between direct call to MMreg and call to Sreg and
   * MMregcore. */
  /*     % In this example two different rho functions are used for S and MM */
  /*     n=30; */
  /*     p=3; */
  /*     randn('state', 16); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     % Two different rho functions are used for S and MM */
  /*     rhofuncS='hyperbolic'; */
  /*     rhofuncMM='hampel'; */
  /*     % Direct call to MMreg */
  /*     [out]=MMreg(ycont,X,'Srhofunc',rhofuncS,'rhofunc',rhofuncMM,'Snsamp',0);
   */
  /*  */
  /*     % Call to Sreg and then to MMregcore */
  /*     [outS]=Sreg(ycont,X,'rhofunc',rhofuncS,'nsamp',0); */
  /*     outMM=MMregcore(ycont,X,outS.beta,outS.scale,'rhofunc',rhofuncMM); */
  /*     disp('Difference between direct call to S and the calls to Sreg and
   * MMregcore') */
  /*     max(abs([out.beta-outMM.beta])) */
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
  /*  default nominal efficiency */
  /*  by default the nominal efficiency refers to location efficiency */
  /*  default value of number of maximum refining iterations */
  /*  default value of tolerance for the refining steps convergence */
  /*  rho (psi) function which has to be used to weight the residuals */
  /*  MATLAB c coder initialization */
  /*  Write in structure 'options' the options chosen by the user */
  /*  nominal efficiency */
  /*  nominal efficiency refers to shape or location */
  /*  maximum refining iterations */
  /*  tolerance for refining iterations covergence */
  /*  String which specifies the function to use to weight the residuals */
  emxInit_real_T(&c, 2);
  if (l_strcmp(varargin_6)) {
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c = consistency factor for a given value of efficiency */
    /* Tbeff finds the constant c which is associated to the requested
     * efficiency for Tukey's biweight */
    /*  */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('TBeff')">Link to the help function</a> */
    /*  */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*     eff:       required efficienty. Scalar. */
    /*                Scalar which contains the required efficiency (of location
     */
    /*                or scale estimator). */
    /*                Data Types - single|double */
    /*                Generally eff=0.85, 0.9 or 0.95 */
    /*     v :        Number of response variables. Scalar. e.g. in regression
     * p=1 */
    /*                Data Types - single|double|int32|int64 */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*    shapeeff : Location or shape efficiency. Scalar. */
    /*               If 1, the efficiency is referred to shape else (default) */
    /*               is referred to location */
    /*                Example - 'shapeeff',1 */
    /*                Data Types - double */
    /*  */
    /*  approxsheff: approximate or exact calculations. Dummy scalar. */
    /*               If 1, when p > 1 the approximate formula for scale */
    /*               efficiency is used else (default) the exact formula of the
     */
    /*               variance of the robust estimator of the scale is used */
    /*                Example - 'approxsheff',1 */
    /*                Data Types - double */
    /*  */
    /*  */
    /*  Output: */
    /*  */
    /*   ceff : Requested tuning constant. Scalar. Tuning constatnt of Tukey
     * Biweigh rho */
    /*          function associated to requested value of efficiency */
    /*  */
    /*  See also: OPTeff, HYPeff, HAeff */
    /*  */
    /*  References: */
    /*   */
    /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics,
     * Theory */
    /*  and Methods", Wiley, New York. */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('TBeff')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  */
    /*  Examples: */
    /*  */
    /* { */
    /*     % Find c for a given efficiency. */
    /*     % The constant c associated to a nominal location efficiency of 95%
     * in regression is */
    /*     % c = 4.685064948559557 */
    /*     c=TBeff(0.95,1) */
    /* } */
    /* { */
    /*     % Find c associated to a fixed shape efficiency  */
    /*     % c= 5.490249208447494 */
    /*     c=TBeff(0.95,1,1) */
    /* } */
    /*  */
    /*  */
    /*  */
    /* { */
    /*     % Find shape efficiency. */
    /*     % Compare constant c for the range of values of p from 1 to 200 using
     */
    /*     % approximate and exact formula for fixed shape efficiency */
    /*     % Number of variables */
    /*     p=200; */
    /*     pp=1:1:p; */
    /*     % Initialize the matrix which stores the values of c for the two */
    /*     % methods */
    /*     cc=[pp' zeros(p,2)]; */
    /*  */
    /*     eff=0.75; */
    /*     % eff=0.99; */
    /*     for i=pp */
    /*         % Use exact formula for finding the value of c associated to a
     * fixed */
    /*         % level of shape efficiency */
    /*         cc(i,2)=TBeff(eff,i,1); */
    /*         % Use approximate formula for finding the value of c associated
     * to a fixed */
    /*         % level of shape efficiency */
    /*         cc(i,3)=TBeff(eff,i,1,1); */
    /*     end */
    /*     figure */
    /*     plot(cc(:,1),cc(:,2),'LineStyle','-','LineWidth',2) */
    /*     hold('on') */
    /*     plot(cc(:,1),cc(:,3),'LineStyle','-.','LineWidth',2) */
    /*     legend('True value of c', 'Approximate value of c','Location','best')
     */
    /*     xlabel('Number of variables') */
    /*     ylabel('Value of c') */
    /* } */
    /*  */
    /*  Beginning of code */
    /*  LOCATION EFFICIENCY */
    b_c = 2.0;
    /*  c = starting point of the iteration */
    /*  Remark: the more refined approximation for the starting value of */
    /*  sqrt(chi2inv(eff,p))+2; does not seem to be necessary in the case of */
    /*  location efficiency */
    /*  step = width of the dichotomic search (it decreases by half at each */
    /*  iteration). */
    b_step = 30.0;
    /*  Convergence condition is  */
    /*   ....... */
    /*  bet  = \int_{-c}^c  \psi'(x) d \Phi(x) */
    /*  alph = \int_{-c}^c  \psi^2(x) d \Phi(x) */
    /*  empeff = bet^2/alph = 1 / [var (robust estimator of location)] */
    F = 10.0;
    while (fabs(F - varargin_2) > 1.0E-12) {
      F = b_c * b_c;
      b2 = F / 2.0;
      b_a_tmp = gammainc(b2, 2.5);
      c_a_tmp = gammainc(b2, 1.5);
      b = 15.0 * b_a_tmp.re;
      A2 = rt_powd_snf(b_c, 4.0);
      if (15.0 * b_a_tmp.im == 0.0) {
        c2_tmp = b / A2;
      } else if (b == 0.0) {
        c2_tmp = 0.0;
      } else {
        c2_tmp = b / A2;
      }
      b = 6.0 * c_a_tmp.re;
      if (6.0 * c_a_tmp.im == 0.0) {
        a2 = b / F;
      } else if (b == 0.0) {
        a2 = 0.0;
      } else {
        a2 = b / F;
      }
      a = (c2_tmp - a2) + (gammainc(b2, 0.5)).re;
      a_tmp_tmp = gammainc(b2, 5.5);
      b = 945.0 * a_tmp_tmp.re;
      F = rt_powd_snf(b_c, 8.0);
      if (945.0 * a_tmp_tmp.im == 0.0) {
        c2_tmp = b / F;
      } else if (b == 0.0) {
        c2_tmp = 0.0;
      } else {
        c2_tmp = b / F;
      }
      a_tmp_tmp = gammainc(b2, 4.5);
      b = 420.0 * a_tmp_tmp.re;
      F = rt_powd_snf(b_c, 6.0);
      if (420.0 * a_tmp_tmp.im == 0.0) {
        a2 = b / F;
      } else if (b == 0.0) {
        a2 = 0.0;
      } else {
        a2 = b / F;
      }
      a_tmp_tmp = gammainc(b2, 3.5);
      b = 90.0 * a_tmp_tmp.re;
      if (90.0 * a_tmp_tmp.im == 0.0) {
        A2 = b / A2;
      } else if (b == 0.0) {
        A2 = 0.0;
      } else {
        A2 = b / A2;
      }
      b = 6.0 * b_a_tmp.re;
      if (6.0 * b_a_tmp.im == 0.0) {
        F = b / b2;
      } else if (b == 0.0) {
        F = 0.0;
      } else {
        F = b / b2;
      }
      F = a * a / ((((c2_tmp - a2) + A2) - F) + c_a_tmp.re);
      b_step /= 2.0;
      if (F < varargin_2) {
        b_c += b_step;
      } else if (F > varargin_2) {
        b_c = fmax(b_c - b_step, 0.1);
      }
    }
    /*  Remark: */
    /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
    i = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = 1;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = b_c;
    /* TODO:MMregcore:shapeff */
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'T';
    psifunc_class_data[1] = 'B';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else if (m_strcmp(varargin_6)) {
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c2 = consistency factor for a given value of efficiency */
    /*  Remark: given that in function OPTeff rho function is defined in the
     * interval 0---2c/3, 2c/3---3c/3, >3c/3 */
    /*  it is necessary to divide the output of OPTeff by 3 */
    /* OPTeff finds the constant c which is associated to the requested
     * efficiency */
    /*  */
    /* <a href="matlab: docsearchFS('OPTeff')">Link to the help function</a> */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*     eff:       required efficienty. Scalar. */
    /*                Scalar which contains the required efficiency (of location
     */
    /*                or scale estimator). */
    /*                Generally eff=0.85, 0.9 or 0.95 */
    /*                Data Types - single|double */
    /*     v :        Number of response variables. Scalar. e.g. in regression
     * p=1 */
    /*                Data Types - single|double|int32|int64 */
    /*                 */
    /*  */
    /*   Optional input arguments: TODO_OPTeff_INPUT_OPTIONS */
    /*    */
    /*  */
    /*  */
    /*  Output: */
    /*  */
    /*   ceff : Requested tuning constant. Scalar. Tuning constatnt of optimal
     * rho */
    /*          function associated to requested value of efficiency */
    /*  */
    /*  More About: */
    /*  */
    /*  */
    /*     $\rho$ ($\psi$) function which is considered is standardized  */
    /*     using intervals 0---(2/3)c , (2/3)c---c, >c.    */
    /*     $\rho$ function is */
    /*  */
    /*  \[ */
    /*  TBrho(u)= \left\{ */
    /*     \begin{array}{lr} */
    /*      1.3846 \left(\frac{u}{c}\right)^2                      &
     * |\frac{u}{c}| \leq  \frac{2}{3} \\ */
    /*     0.5514-2.6917 \left(\frac{u}{c}\right)^2
     * +10.7668\left(\frac{u}{c}\right)^4-11.6640\left(\frac{u}{c}\right)^6+4.0375\left(\frac{u}{c}\right)^8
     * & \qquad \frac{2}{3} \leq  |\frac{u}{c}|\leq  1 \\ */
    /*     1                                                    &
     * |\frac{u}{c}|>1 \\ */
    /*  \end{array} */
    /*     \right. */
    /*   \] */
    /*                                                                       |t/c|>1
     */
    /*  */
    /*    Therefore, to obtain the value of c for the (rho) psi function defined
     * in the */
    /*    interval 0---2c, 2c---3c, >3c it is necessary to divide the output of
     */
    /*    function OPTeff by 3. */
    /*  */
    /*  See also: TBeff, HYPeff, HAeff */
    /*  */
    /*  References: */
    /*   */
    /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics,
     * Theory */
    /*  and Methods", Wiley, New York. */
    /*  */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('OPTeff')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  Examples: */
    /*  */
    /* { */
    /*     % Find c given a value of efficiency. */
    /*     % The constant c associated to a nominal location efficiency of 95%
     * in regression is */
    /*     % c = 3.180662196584308 */
    /*     c=OPTeff(0.95,1) */
    /* } */
    /*  */
    /* { */
    /*     % Find the value of c for efficiency which goes to 1. */
    /*     ef=0.75:0.01:0.99; */
    /*     CC=[ef' zeros(length(ef),1)]; */
    /*     jk=0; */
    /*     for j=ef */
    /*         jk=jk+1; */
    /*         CC(jk,2)=OPTeff(j,1); */
    /*     end */
    /*  */
    /* } */
    /*  Beginning of code */
    /*  LOCATION EFFICIENCY */
    b_c = 2.0;
    /*  c = starting point of the iteration */
    /*  Remark: the more refined approximation for the starting value of */
    /*  sqrt(chi2inv(eff,p))+2; does not seem to be necessary in the case of */
    /*  location efficiency */
    /*  step = width of the dichotomic search (it decreases by half at each */
    /*  iteration). */
    b_step = 10.0;
    /*      p4=(p+4)*(p+2); */
    /*      p6=(p+6)*(p+4)*(p+2); */
    /*      p8=(p+8)*(p+6)*(p+4)*(p+2); */
    /*  Coefficients of optimal psi standardized using intervals  */
    /*  0---(2/3)c , (2/3)c---c, >c   */
    /*  Epsisq = E( \psi(x)^2)  */
    /*  Epsidivx = E( \psi(x)/x) */
    /*  Epsider = E( \psi'(x)) */
    /*  bet=(1-1/p)*Epsidivx+(1/p)*Epsider;    */
    /*  [var (robust estimator of location using optimal rho function)] =
     * (Epsisq/p) / (bet^2) */
    F = 10.0;
    while (fabs(F - varargin_2) > 1.0E-12) {
      F = b_c * b_c;
      b = F / 2.0;
      a = 2.0 * F / 9.0;
      bet_tmp = gammainc(a, 1.5);
      a_tmp_tmp = gammainc(a, 0.5);
      b2 = rt_powd_snf(b_c, 4.0);
      c2_tmp = rt_powd_snf(b_c, 6.0);
      ctun = rt_powd_snf(b_c, 8.0);
      a_tmp = (gammainc(b, 1.5)).re - bet_tmp.re;
      F = 2.7692 / F * a_tmp_tmp.re +
          -5.3834 / F * ((gammainc(b, 0.5)).re - a_tmp_tmp.re);
      A2 = (gammainc(b, 2.5)).re - (gammainc(a, 2.5)).re;
      a2 = (gammainc(b, 3.5)).re - (gammainc(a, 3.5)).re;
      b_a = 0.0 * (((F + 43.0672 / b2 * a_tmp) + -69.984 / c2_tmp * 3.0 * A2) +
                   32.3 / ctun * 5.0 * 3.0 * a2) +
            (((F + 129.20159999999998 / b2 * a_tmp) +
              -349.91999999999996 / c2_tmp * 3.0 * A2) +
             226.09999999999997 / ctun * 5.0 * 3.0 * a2);
      F = b_a * b_a /
          ((((((((7.66846864 / b2 * bet_tmp.re + 28.98099556 / b2 * a_tmp) +
                 1854.78371584 / ctun * 5.0 * 3.0 * a2) +
                7679.901376 / rt_powd_snf(b_c, 12.0) * 9.0 * 7.0 * 5.0 * 3.0 *
                    ((gammainc(b, 5.5)).re - (gammainc(a, 5.5)).re)) +
               1043.2899999999997 / rt_powd_snf(b_c, 16.0) * 13.0 * 11.0 * 9.0 *
                   7.0 * 5.0 * 3.0 *
                   ((gammainc(b, 7.5)).re - (gammainc(a, 7.5)).re)) +
              -463.69592896 / c2_tmp * 3.0 * A2) +
             753.5037312 / ctun * 5.0 * 3.0 * a2) +
            -6375.7974896 / rt_powd_snf(b_c, 10.0) * 7.0 * 5.0 * 3.0 *
                ((gammainc(b, 4.5)).re - (gammainc(a, 4.5)).re)) +
           -4520.9663999999993 / rt_powd_snf(b_c, 14.0) * 11.0 * 9.0 * 7.0 *
               5.0 * 3.0 * ((gammainc(b, 6.5)).re - (gammainc(a, 6.5)).re));
      b_step *= 0.5;
      /*  disp([step c empeff]) */
      if (F < varargin_2) {
        b_c += b_step;
      } else if (F > varargin_2) {
        b_c = fmax(b_c - b_step, 0.1);
      }
      /*  disp([step c empeff]) */
    }
    /*  Remark: */
    /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
    i = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = 1;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = b_c / 3.0;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 3;
    psifunc_class_data[0] = 'O';
    psifunc_class_data[1] = 'P';
    psifunc_class_data[2] = 'T';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else if (n_strcmp(varargin_6)) {
    if ((varargin_8->size[0] == 0) || (varargin_8->size[1] == 0)) {
      F = 4.5;
    } else {
      F = varargin_8->data[0];
      /*  Instruction necessary for Ccoder */
    }
    i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
    out->rhofuncparam->size[0] = 1;
    out->rhofuncparam->size[1] = 1;
    emxEnsureCapacity_real_T(out->rhofuncparam, i);
    out->rhofuncparam->data[0] = F;
    if ((F == 4.0) && (varargin_2 == 0.85)) {
      c2 = 3.2128009796142578;
      A2 = 0.570183575755717;
      a2 = 0.696172437281084;
      b2 = 1.205900263786317;
    } else if ((F == 4.5) && (varargin_2 == 0.85)) {
      c2 = 3.0323877334594731;
      A2 = 0.615717108822885;
      a2 = 0.723435958485131;
      b2 = 1.32198760509491;
    } else if ((F == 5.0) && (varargin_2 == 0.85)) {
      c2 = 2.911890029907227;
      A2 = 0.650228046997054;
      a2 = 0.743433840145084;
      b2 = 1.419320821762087;
    } else if ((F == 4.0) && (varargin_2 == 0.9)) {
      c2 = 3.5443330407142639;
      A2 = 0.655651252372878;
      a2 = 0.768170638356071;
      b2 = 1.3305601477623;
    } else if ((F == 4.5) && (varargin_2 == 0.9)) {
      c2 = 3.31389194726944;
      A2 = 0.697965573395585;
      a2 = 0.792571144662011;
      b2 = 1.4522208333015449;
    } else if ((F == 5.0) && (varargin_2 == 0.9)) {
      c2 = 3.167660615756176;
      A2 = 0.729727894789617;
      a2 = 0.810404284656104;
      b2 = 1.5553258180618306;
    } else if ((F == 4.0) && (varargin_2 == 0.95)) {
      c2 = 4.331634521484375;
      A2 = 0.754327484845243;
      a2 = 0.846528826589308;
      b2 = 1.4800991296768189;
    } else if ((F == 4.5) && (varargin_2 == 0.95)) {
      c2 = 3.8663902282714839;
      A2 = 0.791281464739131;
      a2 = 0.86701632935563;
      b2 = 1.61062150001526;
    } else if ((F == 5.0) && (varargin_2 == 0.95)) {
      c2 = 3.6294994354248051;
      A2 = 0.81887645206688;
      a2 = 0.882004888111327;
      b2 = 1.7237689495086681;
    }
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 3;
    psifunc_class_data[0] = 'H';
    psifunc_class_data[1] = 'Y';
    psifunc_class_data[2] = 'P';
    i = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = 5;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = c2;
    c->data[1] = F;
    c->data[2] = A2;
    c->data[3] = a2;
    c->data[4] = b2;
  } else if (o_strcmp(varargin_6)) {
    if ((varargin_8->size[0] == 0) || (varargin_8->size[1] == 0)) {
      i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
      out->rhofuncparam->size[0] = 1;
      out->rhofuncparam->size[1] = 3;
      emxEnsureCapacity_real_T(out->rhofuncparam, i);
      out->rhofuncparam->data[0] = 2.0;
      out->rhofuncparam->data[1] = 4.0;
      out->rhofuncparam->data[2] = 8.0;
    } else {
      i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
      out->rhofuncparam->size[0] = varargin_8->size[0];
      out->rhofuncparam->size[1] = 1;
      emxEnsureCapacity_real_T(out->rhofuncparam, i);
      nx = varargin_8->size[0];
      for (i = 0; i < nx; i++) {
        out->rhofuncparam->data[i] = varargin_8->data[i];
      }
    }
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c2 = consistency factor for a given value of efficiency */
    /* HAeff finds the tuning constant that guarrantees a requested asymptotic
     * efficiency */
    /*  */
    /* <a href="matlab: docsearchFS('HAeff')">Link to the help function</a> */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*     eff:       efficiency. Scalar.  Scalar which contains the required */
    /*                efficiency (of location or scale estimator). */
    /*                Generally eff=0.85, 0.9 or 0.95. */
    /*     v :        number of response variables. Scalar. Number of variables
     * of */
    /*                the  dataset (for regression v=1) */
    /*                UP TO NOW v=1 (JUST REGRESSION) TO DO FOR MULTIVARIATE */
    /*                ANALYSIS */
    /*  */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*      abc     : parameters of Hampel estimator. Vector. Vector of length 3
     */
    /*                which contains the parameters of Hampel estimator. If */
    /*                vector abc is not specified it is set equal to [2, 4, 8]
     */
    /*                Example - [1.5,3.5,8] */
    /*                Data Types - double */
    /*  */
    /*  */
    /*  Output: */
    /*  */
    /*   ceff : Requested tuning constant. Scalar. Tuning constatnt of Hampel
     * rho */
    /*          function associated to requested value of efficiency */
    /*  */
    /*  */
    /*  More About: */
    /*  */
    /*  Function HApsi transforms vector u as follows. */
    /*   \[ */
    /*   HApsi(u)  = \left\{ */
    /*   \begin{array}{cc} */
    /*     u & |u| <= a                                       \\ */
    /*     a \times sign(u) & a <= |u| < b                    \\ */
    /*     a \frac{c-|u|}{c-b} \times sign(u) & b <= |u| <  c \\ */
    /*     0 & |u| >= c */
    /*   \end{array} \right. */
    /*  \] */
    /*  */
    /*              where $a$= ctun *param(1). */
    /*                    $b$= ctun *param(2). */
    /*                    $c$= ctun *param(3). */
    /*  */
    /*              The default is */
    /*                    $a$= 2*ctun. */
    /*                    $b$= 4*ctun. */
    /*                    $c$= 8*ctun. */
    /*  */
    /* 	It is necessary to have 0 <= a <= b <= c. */
    /*  */
    /*  Parameter ctun multiplies parameters (a,b,c) of Hampel estimator. */
    /*  */
    /*  */
    /*  See also: TBeff, HYPeff, OPTeff, RKeff, HUeff */
    /*  */
    /*  References: */
    /*  */
    /*  Hoaglin, D.C., Mosteller, F., Tukey, J.W. (1982), "Understanding Robust
     * and */
    /*  Exploratory Data Analysis", Wiley, New York. */
    /*  */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('HAeff')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  */
    /*  */
    /*  Examples: */
    /*  */
    /* { */
    /*     % Find c for fixed efficiency. */
    /*     % The constant c associated to a nominal location efficiency of 95%
     * in regression is */
    /*     % c = 0.690998716841394 */
    /*     c=HAeff(0.95,1) */
    /* } */
    /* { */
    /*     % Example where three input parameters are supplied. */
    /*     % Find constant c associated to a nominal location efficiency of 95
     * per */
    /*     % cent in regression when tun=[1.5,3.5,8]. */
    /*      tun=[1.5,3,8]; */
    /*     c=HAeff(0.95,1,tun); */
    /* } */
    /*  */
    /*  */
    /*  Beginning of code */
    /*  LOCATION EFFICIENCY */
    /*  ctun = starting point of the iteration */
    ctun = 0.57;
    /*  c = starting point of the iteration */
    /*  Remark: the more refined approximation for the starting value of */
    /*  sqrt(chi2inv(eff,p))+2; does not seem to be necessary in the case of */
    /*  location efficiency */
    /*  step = width of the dichotomic search (it decreases by half at each */
    /*  iteration). */
    b_step = 0.5;
    /*  Convergence condition is */
    /*   ....... */
    /*  ctun=(0:0.01:1)'; */
    F = 1.0;
    while (fabs(F - varargin_2) > 1.0E-14) {
      a = out->rhofuncparam->data[0] * ctun;
      b = out->rhofuncparam->data[1] * ctun;
      b_c = out->rhofuncparam->data[2] * ctun;
      A2 = a * a;
      a2 = A2 / 2.0;
      b2 = b * b / 2.0;
      c2_tmp = b_c * b_c;
      c2 = c2_tmp / 2.0;
      /*  bet  = \int  \psi'(x) d \Phi(x) */
      /*  bet = \int_-a^a d \Phi(x) +2* \int_b^c -a/(c-b) */
      b_a_tmp = gammainc(b2, 0.5);
      c_a_tmp = gammainc(c2, 0.5);
      bet_tmp = gammainc(a2, 0.5);
      /*  alph = \int \psi^2(x) d \Phi(x) */
      a_tmp = b_c - b;
      b_a = a / a_tmp;
      /*                                         % 2* \int_0^a x^2 f(x) dx */
      /*                      % 2* a^2 \int_a^b f(x) dx */
      /*     %(a./(c-b)).^2 (2 c^2 \int_b^c f(x) dx */
      /*                 %   + 2*  \int_b^c x^2 f(x) dx */
      /*  +2 *2* \int_b^c |x| f(x) */
      /*  Remark: if v=1 */
      /*  -2*c*v*sqrt(2/pi)*(gammainc(c2,(v+1)/2)-gammainc(b2,(v+1)/2))); */
      /*      -4*c.*(normpdf(b)-normpdf(c))  ); */
      /*  empeff = bet^2/alph = 1 / [var (robust estimator of location)] */
      b = (b_a_tmp.re - c_a_tmp.re) * a;
      if ((b_a_tmp.im - c_a_tmp.im) * a == 0.0) {
        F = b / a_tmp;
      } else if (b == 0.0) {
        F = 0.0;
      } else {
        F = b / a_tmp;
      }
      a = bet_tmp.re + F;
      F = a * a /
          (((gammainc(a2, 1.5)).re + A2 * (b_a_tmp.re - bet_tmp.re)) +
           b_a * b_a *
               ((c2_tmp * (c_a_tmp.re - b_a_tmp.re) +
                 ((gammainc(c2, 1.5)).re - (gammainc(b2, 1.5)).re)) -
                2.0 * b_c * 0.79788456080286541 *
                    ((gammainc(c2, 1.0)).re - (gammainc(b2, 1.0)).re)));
      b_step /= 2.0;
      if (F < varargin_2) {
        ctun += b_step;
      } else if (F > varargin_2) {
        ctun = fmax(ctun - b_step, 0.01);
      }
      /*  disp([empeff eff ctun]) */
    }
    /*  Remark: */
    /*  chi2cdf(x,v) = gamcdf(x,v/2,2) = gammainc(x ./ 2, v/2); */
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'H';
    psifunc_class_data[1] = 'A';
    i = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = (signed char)out->rhofuncparam->size[1] + 1;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = ctun;
    nx = (signed char)out->rhofuncparam->size[1];
    for (i = 0; i < nx; i++) {
      c->data[i + 1] = out->rhofuncparam->data[i];
    }
  } else if (p_strcmp(varargin_6)) {
    /*  Compute tuning constant associated to the requested nominal efficiency
     */
    /*  c = consistency factor for a given value of efficiency */
    /* PDeff finds the constant alpha which is associated to the requested
     * efficiency for minimum power divergence estimator */
    /*  */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('PDeff')">Link to the help function</a> */
    /*  */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*     eff:       required efficienty. Scalar. */
    /*                Scalar which contains the required efficiency (of location
     */
    /*                or scale estimator). */
    /*                Generally eff=0.85, 0.9 or 0.95 */
    /*                Data Types - single|double */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*  */
    /*  */
    /*  Output: */
    /*  */
    /*   alpha : Requested tuning constant. Scalar. Tuning constant for minimum
     */
    /*            power divergence estimator associated to requested value of */
    /*            efficiency */
    /*  */
    /*  See also: TBeff, OPTeff, HYPeff, HAeff */
    /*  */
    /*  References: */
    /*  */
    /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020), Robust
     */
    /*   Regression with Density Power Divergence: Theory, Comparisons and Data
     */
    /*   Analysis, submitted. */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('PDeff')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  */
    /*  Examples: */
    /*  */
    /* { */
    /*     % Find tuning constant alpha for a given efficiency. */
    /*     % The constant alpha associated to a nominal location efficiency of
     * 95% in regression is */
    /*     % alpha= 0.224515798935881 */
    /*     c=PDeff(0.95); */
    /* } */
    /*  */
    /*  */
    /*  Beginning of code */
    F = rt_powd_snf(varargin_2, 0.66666666666666663);
    /*  Alternative more complicated way to find alpha */
    /*  F=eff^2; */
    /*  coeff=[F, 6*F, 15*F, 20*F-8, 15*F-12, 6*F-6, F-1]; */
    /*  r=roots(coeff); */
    /*  r = r(imag(r)==0); % Save only the real roots */
    /*  alpha = r(r>0); */
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'P';
    psifunc_class_data[1] = 'D';
    i = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = 1;
    emxEnsureCapacity_real_T(c, i);
    c->data[0] = ((1.0 - F) + sqrt(1.0 - F)) / F;
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  }
  emxInit_real_T(&b1, 1);
  A2 = 0.0;
  F = rtInf;
  i = b1->size[0];
  b1->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(b1, i);
  nx = b0->size[0];
  for (i = 0; i < nx; i++) {
    b1->data[i] = b0->data[i];
  }
  i = out->beta->size[0];
  out->beta->size[0] = b0->size[0];
  emxEnsureCapacity_real_T(out->beta, i);
  nx = b0->size[0];
  for (i = 0; i < nx; i++) {
    out->beta->data[i] = b0->data[i];
  }
  i = out->weights->size[0] * out->weights->size[1];
  out->weights->size[0] = y->size[0];
  out->weights->size[1] = 1;
  emxEnsureCapacity_real_T(out->weights, i);
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    out->weights->data[i] = y->data[i];
  }
  /*  MATLAB Ccoder initialization */
  emxInit_real_T(&b_y, 1);
  emxInit_real_T(&x, 2);
  emxInit_int32_T(&r, 1);
  emxInit_boolean_T(&c_y, 1);
  emxInit_real_T(&r1, 2);
  while ((A2 <= varargin_10) && (F > varargin_12)) {
    mtimes(X, b1, out->beta);
    i = out->beta->size[0];
    out->beta->size[0] = y->size[0];
    emxEnsureCapacity_real_T(out->beta, i);
    nx = y->size[0];
    for (i = 0; i < nx; i++) {
      out->beta->data[i] = (y->data[i] - out->beta->data[i]) / auxscale;
    }
    nx = out->beta->size[0];
    i = b_y->size[0];
    b_y->size[0] = out->beta->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (k = 0; k < nx; k++) {
      b_y->data[k] = fabs(out->beta->data[k]);
    }
    i = c_y->size[0];
    c_y->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(c_y, i);
    nx = b_y->size[0];
    for (i = 0; i < nx; i++) {
      c_y->data[i] = (b_y->data[i] <= 2.2204460492503131E-16);
    }
    b_eml_find(c_y, r);
    i = out->residuals->size[0];
    out->residuals->size[0] = r->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    nx = r->size[0];
    for (i = 0; i < nx; i++) {
      out->residuals->data[i] = r->data[i];
    }
    if (out->residuals->size[0] != 0) {
      i = r->size[0];
      r->size[0] = out->residuals->size[0];
      emxEnsureCapacity_int32_T(r, i);
      nx = out->residuals->size[0];
      for (i = 0; i < nx; i++) {
        r->data[i] = (int)out->residuals->data[i];
      }
      nx = r->size[0];
      for (i = 0; i < nx; i++) {
        out->beta->data[r->data[i] - 1] = 2.2204460492503131E-16;
      }
    }
    /*  w is the weight vector \psi(x)/x Each observations receives a */
    /*  weight. Units associated to outliers tend to have 0 weight */
    /*  OLD INSTRUCTION */
    /*  w=TBwei(r1,c); */
    if (q_strcmp(psifunc_class_data, psifunc_class_size)) {
      TBwei(out->beta, (double *)c->data, out->residuals);
      nx = out->residuals->size[0];
      i = out->weights->size[0] * out->weights->size[1];
      out->weights->size[0] = out->residuals->size[0];
      out->weights->size[1] = 1;
      emxEnsureCapacity_real_T(out->weights, i);
      for (i = 0; i < 1; i++) {
        for (k = 0; k < nx; k++) {
          out->weights->data[k] = out->residuals->data[k];
        }
      }
    } else if (r_strcmp(psifunc_class_data, psifunc_class_size)) {
      OPTwei(out->beta, (double *)c->data, *(int(*)[2])c->size, out->weights);
    } else if (s_strcmp(psifunc_class_data, psifunc_class_size)) {
      HAwei(out->beta, (double *)c->data, *(int(*)[2])c->size, out->residuals);
      nx = out->residuals->size[0];
      i = out->weights->size[0] * out->weights->size[1];
      out->weights->size[0] = out->residuals->size[0];
      out->weights->size[1] = 1;
      emxEnsureCapacity_real_T(out->weights, i);
      for (i = 0; i < 1; i++) {
        for (k = 0; k < nx; k++) {
          out->weights->data[k] = out->residuals->data[k];
        }
      }
    } else if (t_strcmp(psifunc_class_data, psifunc_class_size)) {
      HYPwei(out->beta, (double *)c->data, *(int(*)[2])c->size, out->residuals);
      nx = out->residuals->size[0];
      i = out->weights->size[0] * out->weights->size[1];
      out->weights->size[0] = out->residuals->size[0];
      out->weights->size[1] = 1;
      emxEnsureCapacity_real_T(out->weights, i);
      for (i = 0; i < 1; i++) {
        for (k = 0; k < nx; k++) {
          out->weights->data[k] = out->residuals->data[k];
        }
      }
    } else if (u_strcmp(psifunc_class_data, psifunc_class_size)) {
      /* PDwei computes weight function psi(u)/u for  for minimum density power
       * divergence estimator   */
      /*  */
      /* <a href="matlab: docsearchFS('PDwei')">Link to the help function</a> */
      /*  */
      /*  */
      /*  Required input arguments: */
      /*  */
      /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1
       */
      /*                vector containing residuals or Mahalanobis distances */
      /*                for the n units of the sample */
      /*     alpha :    tuning parameter. Scalar. Scalar in the interval (0,1]
       * which */
      /*                controls the robustness/efficiency of the estimator */
      /*                (beta in regression or mu in the location case ...). The
       */
      /*                greater is alpha the greater is the bdp and smaller is
       * the */
      /*                efficiency. */
      /*  */
      /*   Optional input arguments: */
      /*  */
      /*   Output: */
      /*  */
      /*     w :         n x 1 vector which contains the Tukey's biweight
       * weights */
      /*                 associated to the scaled residuals or Mahalanobis */
      /*                 distances for the n units of the sample. */
      /*  */
      /*  More About: */
      /*  */
      /*  function PDwei transforms vector u as follows */
      /*  \[ */
      /*  PDwei(u,alpha)=  \alpha \exp(-\alpha (u^2/2)); */
      /*       \] */
      /*  */
      /*  */
      /*  */
      /*  */
      /*  See also: TBwei, HYPwei, HAwei, OPTwei */
      /*  */
      /*  References: */
      /*  */
      /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020),
       * Robust */
      /*   Regression with Density Power Divergence: Theory, Comparisons and
       * Data */
      /*   Analysis, submitted. */
      /*  */
      /*  */
      /*  Copyright 2008-2021. */
      /*  Written by FSDA team */
      /*  */
      /*  */
      /* <a href="matlab: docsearchFS('PDwei')">Link to the help page for this
       * function</a> */
      /*  */
      /* $LastChangedDate::                      $: Date of the last commit */
      /*  Examples: */
      /* { */
      /*     % Weight function for minimum density power divergence estimator.
       */
      /*     x=-6:0.01:6; */
      /*     alpha=0.01; */
      /*     weiPD=PDwei(x,alpha); */
      /*     plot(x,weiPD) */
      /*     xlabel('x','Interpreter','Latex') */
      /*     ylabel('$W (x) =\psi(x)/x$','Interpreter','Latex') */
      /*  */
      /* } */
      /* { */
      /*     % Comparing two weight functions for two values of bdp. */
      /*     close all */
      /*     x=-6:0.01:6; */
      /*     lwd=2; */
      /*     hold('on') */
      /*     bdp1=0.25; */
      /*     alpha1=PDbdp(bdp1);     */
      /*     weiPD=PDwei(x,alpha1); */
      /*     weiPD=weiPD/max(weiPD); */
      /*     plot(x,weiPD,'LineStyle','-','LineWidth',lwd) */
      /*     bdp2=0.01; */
      /*     c=PDbdp(bdp2); */
      /*     weiPD=PDwei(x,c); */
      /*     weiPD=weiPD/max(weiPD); */
      /*     plot(x,weiPD,'LineStyle','-.','LineWidth',lwd) */
      /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
      /*     ylabel('PD weight function
       * $\psi_\alpha(x)/x$','Interpreter','Latex','FontSize',20) */
      /*     legend({['bdp=' num2str(bdp1,2)],  ['bdp=' num2str(bdp2,2)]},... */
      /*     'Interpreter','Latex','Location','SouthEast','FontSize',12) */
      /* } */
      /* { */
      /*     %% Compare five different weight functions in each of them eff is
       * 95 per cent. */
      /*     % Initialize graphical parameters. */
      /*     FontSize=14; */
      /*     x=-6:0.01:6; */
      /*     ylim1=-0.05; */
      /*     ylim2=1.05; */
      /*     xlim1=min(x); */
      /*     xlim2=max(x); */
      /*     LineWidth=2; */
      /*  */
      /*     subplot(2,3,1) */
      /*     ceff095HU=HUeff(0.95,1); */
      /*     weiHU=HUwei(x,ceff095HU); */
      /*     plot(x,weiHU,'LineWidth',LineWidth) */
      /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
      /*     title('Huber','FontSize',FontSize) */
      /*     ylim([ylim1 ylim2]) */
      /*     xlim([xlim1 xlim2]) */
      /*  */
      /*     subplot(2,3,2) */
      /*     ceff095HA=HAeff(0.95,1); */
      /*     weiHA=HAwei(x,ceff095HA); */
      /*     plot(x,weiHA,'LineWidth',LineWidth) */
      /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
      /*     title('Hampel','FontSize',FontSize) */
      /*     ylim([ylim1 ylim2]) */
      /*     xlim([xlim1 xlim2]) */
      /*  */
      /*  */
      /*     subplot(2,3,3) */
      /*     ceff095TB=TBeff(0.95,1); */
      /*     weiTB=TBwei(x,ceff095TB); */
      /*     plot(x,weiTB,'LineWidth',LineWidth) */
      /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
      /*     title('Tukey biweight','FontSize',FontSize) */
      /*     ylim([ylim1 ylim2]) */
      /*     xlim([xlim1 xlim2]) */
      /*  */
      /*     subplot(2,3,4) */
      /*     ceff095HYP=HYPeff(0.95,1); */
      /*     ktuning=4.5; */
      /*     weiHYP=HYPwei(x,[ceff095HYP,ktuning]); */
      /*     plot(x,weiHYP,'LineWidth',LineWidth) */
      /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
      /*     title('Hyperbolic','FontSize',FontSize) */
      /*     ylim([ylim1 ylim2]) */
      /*     xlim([xlim1 xlim2]) */
      /*  */
      /*     subplot(2,3,5) */
      /*     ceff095PD=PDeff(0.95); */
      /*     weiPD=PDwei(x,ceff095PD); */
      /*     weiPD=weiPD/max(weiPD); */
      /*     plot(x,weiPD,'LineWidth',LineWidth) */
      /*     xlabel('$u$','Interpreter','Latex','FontSize',FontSize) */
      /*     title('Power divergence','FontSize',FontSize) */
      /*     ylim([ylim1 ylim2]) */
      /*     xlim([xlim1 xlim2]) */
      /* } */
      /*  Beginning of code */
      /*  normalized wights in such a way that when u=0 w=1 */
      i = b_y->size[0];
      b_y->size[0] = out->beta->size[0];
      emxEnsureCapacity_real_T(b_y, i);
      nx = out->beta->size[0];
      for (k = 0; k < nx; k++) {
        b_y->data[k] = out->beta->data[k] * out->beta->data[k];
      }
      b_c = 0.0;
      nx = c->size[1];
      for (i = 0; i < nx; i++) {
        b_c += -c->data[i] * (b_y->data[i] / 2.0);
      }
      /*  Unnormalized weights are */
      /*  w = alpha * exp(- alpha *(u.^2/2)); */
      i = out->weights->size[0] * out->weights->size[1];
      out->weights->size[0] = 1;
      out->weights->size[1] = 1;
      emxEnsureCapacity_real_T(out->weights, i);
      out->weights->data[0] = exp(b_c);
    }
    /*  Every column of matrix X and vector y is multiplied by the sqrt root of
     * the n x 1 */
    /*  weight vector w, then weighted regression is performed */
    i = x->size[0] * x->size[1];
    x->size[0] = out->weights->size[0];
    x->size[1] = out->weights->size[1];
    emxEnsureCapacity_real_T(x, i);
    nx = out->weights->size[0] * out->weights->size[1];
    for (i = 0; i < nx; i++) {
      x->data[i] = out->weights->data[i];
    }
    nx = out->weights->size[0] * out->weights->size[1];
    for (k = 0; k < nx; k++) {
      x->data[k] = sqrt(x->data[k]);
    }
    /*  b2 = inv(X'W*X)*X'W*y where W=w*ones(1,k) */
    i = b_y->size[0];
    b_y->size[0] = y->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    nx = y->size[0];
    for (i = 0; i < nx; i++) {
      b_y->data[i] = y->data[i] * x->data[i];
    }
    b_bsxfun(X, x, r1);
    mldivide(r1, b_y, out->beta);
    /*  disp([b2-b22]) */
    i = b1->size[0];
    b1->size[0] = out->beta->size[0];
    emxEnsureCapacity_real_T(b1, i);
    nx = out->beta->size[0];
    for (i = 0; i < nx; i++) {
      b1->data[i] = out->beta->data[i] - b1->data[i];
    }
    nx = b1->size[0];
    i = b_y->size[0];
    b_y->size[0] = b1->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (k = 0; k < nx; k++) {
      b_y->data[k] = fabs(b1->data[k]);
    }
    F = b_maximum(b_y);
    A2++;
    i = b1->size[0];
    b1->size[0] = out->beta->size[0];
    emxEnsureCapacity_real_T(b1, i);
    nx = out->beta->size[0];
    for (i = 0; i < nx; i++) {
      b1->data[i] = out->beta->data[i];
    }
  }
  emxFree_real_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&x);
  emxFree_real_T(&b1);
  for (i = 0; i < 5; i++) {
    out->class[i] = b_cv[i];
  }
  mtimes(X, out->beta, out->residuals);
  i = out->residuals->size[0];
  out->residuals->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  nx = y->size[0];
  for (i = 0; i < nx; i++) {
    out->residuals->data[i] = (y->data[i] - out->residuals->data[i]) / auxscale;
  }
  /*  Store in output structure the outliers found with confidence level conflev
   */
  /*  which has been usedto declared the outliers */
  if (X->size[0] < 1) {
    c->size[0] = 1;
    c->size[1] = 0;
  } else {
    i = c->size[0] * c->size[1];
    c->size[0] = 1;
    c->size[1] = X->size[0];
    emxEnsureCapacity_real_T(c, i);
    nx = X->size[0] - 1;
    for (i = 0; i <= nx; i++) {
      c->data[i] = (double)i + 1.0;
    }
  }
  F = sqrt(c_chi2inv(varargin_14));
  nx = out->residuals->size[0];
  i = b_y->size[0];
  b_y->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  for (k = 0; k < nx; k++) {
    b_y->data[k] = fabs(out->residuals->data[k]);
  }
  i = c_y->size[0];
  c_y->size[0] = b_y->size[0];
  emxEnsureCapacity_boolean_T(c_y, i);
  nx = b_y->size[0];
  for (i = 0; i < nx; i++) {
    c_y->data[i] = (b_y->data[i] > F);
  }
  emxFree_real_T(&b_y);
  k = c_y->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (c_y->data[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = nx;
  emxEnsureCapacity_int32_T(r2, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (c_y->data[i]) {
      r2->data[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&c_y);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r2->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  nx = r2->size[0];
  for (i = 0; i < nx; i++) {
    out->outliers->data[i] = c->data[r2->data[i] - 1];
  }
  emxFree_int32_T(&r2);
  emxFree_real_T(&c);
  out->conflev = varargin_14;
  i = out->rhofunc->size[0] * out->rhofunc->size[1];
  out->rhofunc->size[0] = varargin_6->size[0];
  out->rhofunc->size[1] = varargin_6->size[1];
  emxEnsureCapacity_char_T(out->rhofunc, i);
  nx = varargin_6->size[0] * varargin_6->size[1];
  for (i = 0; i < nx; i++) {
    out->rhofunc->data[i] = varargin_6->data[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  /*  Store X (without the column of ones if there is an intercept) */
  /*  Plot of residual with outliers highlighted */
}

/* End of code generation (MMregcore.c) */
