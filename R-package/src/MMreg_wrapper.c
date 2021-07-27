/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMreg_wrapper.c
 *
 * Code generation for function 'MMreg_wrapper'
 *
 */

/* Include files */
#include "MMreg_wrapper.h"
#include "MMregcore.h"
#include "Sreg.h"
#include "find.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "int2str.h"
#include "minOrMax.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void MMreg_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                   double conflev, double eff, const struct2_T *InitialEst,
                   bool intercept, bool msg, bool nocheck, double refsteps,
                   const emxArray_char_T *rhofunc,
                   const emxArray_real_T *rhofuncparam, double Sbdp,
                   double Sbestr, double Sminsctol, double Snsamp,
                   double Srefsteps, double Srefstepsbestr, double Sreftol,
                   double Sreftolbestr, const emxArray_char_T *Srhofunc,
                   const emxArray_real_T *Srhofuncparam, double tol,
                   bool yxsave, struct_MMreg_T *out, emxArray_real_T *C)
{
  static const char b_cv[5] = {'M', 'M', 'r', 'e', 'g'};
  e_struct_T expl_temp;
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *r;
  emxArray_boolean_T *x;
  emxArray_char_T_1x310 b_out;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *b_y;
  emxArray_real_T *constcols;
  emxArray_real_T *r3;
  emxArray_real_T *varargin_2;
  j_struct_T Sresult;
  double ss;
  int aoffset;
  int b_i;
  int i;
  int k;
  int loop_ub;
  int mc;
  bool c_y;
  bool exitg1;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  /*  wrapper function for MMreg. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  conflev a scalar double */
  /*  eff a scalar double */
  /*  InitialEst: a struct (with 2 fields) */
  /*  assert(length(InitialEst) <=1); */
  /*  field beta a column vector of type double */
  /*  field scale a scalar of type double */
  /*  intercept a boolean */
  /*  msg is a boolean */
  /*  nocheck is a boolean */
  /*  refsteps: a scalar of type double */
  /*  rhofunc: a character */
  /*  rhofuncparam */
  /*  assert(size(rhofuncparam,2) == 1); */
  /*  Sbdp a scalar double */
  /*  Sbestr a scalar double */
  /*  Sminsctol a scalar double */
  /*  Snsamp a scalar double */
  /*  Srefsteps: a scalar of type double */
  /*  Srefstepsbestr: a scalar of type double */
  /*  Sreftol: a scalar of type double */
  /*  Sreftolbestr: a scalar of type double */
  /*  Srhofunc: a character */
  /*  Srhofuncparam */
  /*  assert(size(rhofuncparam,2) == 1); */
  /*  tol: a scalar of type double */
  /*  yxsave is a boolean */
  /* MMreg computes MM estimator of regression coefficients */
  /*  */
  /* <a href="matlab: docsearchFS('MMreg')">Link to the help function</a> */
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
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*  */
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar. */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
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
  /*      effshape : location or scale efficiency. dummy scalar. */
  /*                 If effshape=1 efficiency refers to shape */
  /*                 efficiency else (default) efficiency refers to location */
  /*                  Example - 'effshape',1 */
  /*                  Data Types - double */
  /*  */
  /*   InitialEst : starting values of the MM-estimator. [] (default) or
   * structure. */
  /*                InitialEst must contain the following fields */
  /*                InitialEst.beta =  v x 1 vector (estimate of the initial
   * regression coefficients) */
  /*                InitialEst.scale = scalar (estimate of the scale parameter).
   */
  /*                If InitialEst is empty (default) or InitialEst.beta */
  /*                program uses S estimators. In this last case it is */
  /*                possible to specify the options given in function Sreg. */
  /*                Example - 'InitialEst',[] */
  /*                Data Types - struct */
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
  /*        msg    :  Level of output to display. Scalar. It controls whether */
  /*                  to display or not messages on the screen */
  /*                  If msg==1 (default) messages are displayed on the screen
   * about */
  /*                    step in which signal took place */
  /*                  else no message is displayed on the screen. */
  /*                Example - 'msg',1 */
  /*                Data Types - double */
  /*  */
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
  /*      refsteps  : Maximum iterations. Scalar. */
  /*                  Scalar defining maximum number of iterations in the MM */
  /*                  loop. Default value is 100. */
  /*                  Example - 'refsteps',10 */
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
  /*  */
  /*  rhofuncparam: Additional parameters for the specified rho function. */
  /*                Scalar or vector. */
  /*                For hyperbolic rho function it is possible to set up the */
  /*                value of k = sup CVC (the default value of k is 4.5). */
  /*                For Hampel rho function it is possible to define parameters
   */
  /*                a, b and c (the default values are a=2, b=4, c=8) */
  /*                  Example - 'rhofuncparam',5 */
  /*                  Data Types - single | double */
  /*  */
  /*   Soptions  :  options to pass to Sreg for initial S estimator. Name value
   * pairs. */
  /*                Options if initial estimator is S and InitialEst is empty.
   */
  /*                The options are: Snsamp,Srefsteps,Srefstepsbestr, */
  /*                Srhofunc,Srhofuncparam, Sreftol,Sreftolbestr, Sminsctol,
   * Sbestr. */
  /*                See function Sreg.m for more details on these options. */
  /*                It is necessary to add to the S options the letter */
  /*                S at the beginning. For example, if you want to use the */
  /*                optimal rho function the supplied option is */
  /*                'Srhofunc','optimal'. For example, if you want to use 3000
   */
  /*                subsets, the supplied option is 'Snsamp',3000 */
  /*                Example - 'Snsamp',1000 */
  /*                Data Types - single | double */
  /*  */
  /*  */
  /*        tol    : Tolerance. Scalar. */
  /*                  Scalar controlling tolerance in the MM loop. */
  /*                  Default value is 1e-7 */
  /*                  Example - 'tol',1e-10 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*        yxsave : the response vector y and data matrix X are saved into the
   * output */
  /*                 structure out. Scalar. */
  /*                Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - double */
  /*  */
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
  /*   Output: */
  /*  */
  /*  */
  /*   out :     A structure containing the following fields: */
  /*        out.beta        =   p x 1 vector containing MM estimate of */
  /*                            regression coefficients. */
  /*        out.auxscale    =   scalar, S estimate of the scale (or supplied */
  /*                            external estimate of scale, if option InitialEst
   */
  /*                            is not empty). */
  /*        out.residuals	=   n x 1 vector containing standardized MM */
  /*                            residuals. */
  /*       out.fittedvalues =   n x 1 vector containing the fitted values. */
  /*                            out.residuals=(y-X*out.beta)/out.auxscale */
  /*        out.weights     =   n x 1 vector. Weights assigned to each
   * observation */
  /*        out.Sbeta       :   p x 1 vector containing S estimate of regression
   */
  /*                            coefficients (or supplied initial external */
  /*                            estimate of regression coefficients, if option
   */
  /*                            InitialEst is not empty) */
  /*        out.Ssingsub    =   Number of subsets without full rank in the S */
  /*                            preliminary part. Notice that */
  /*                            out.singsub > 0.1*(number of subsamples) */
  /*                            produces a warning */
  /*        out.outliers    :   1 x k vectors containing the outliers which */
  /*                            have been found */
  /*        out.conflev     =   Confidence level that was used to declare
   * outliers */
  /*            out.rhofuncS =   string identifying the rho function which has
   * been */
  /*                            used in the S initial step. This field is empty
   * if */
  /*                            input option InitialEst is not empty */
  /*       out.rhofuncparamS =   vector which contains the additional parameters
   */
  /*                            for the specified rho function which have been
   */
  /*                            used in the S initial step. This field is empty
   * if */
  /*                            input option InitialEst is not empty. */
  /*            out.rhofunc =   string identifying the rho function which has
   * been */
  /*                            used in the MM loop. */
  /*       out.rhofuncparam =   vector which contains the additional parameters
   */
  /*                            for the specified rho function which have been
   */
  /*                            used in the MM loop. */
  /*             out.y      =   response vector Y. The field is present if
   * option */
  /*                            yxsave is set to 1. */
  /*             out.X      =   data matrix X. The field is present if option */
  /*                            yxsave is set to 1. */
  /*        out.class       =   'MMreg' */
  /*  */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : matrix containing the indices of the subsamples */
  /*                        extracted for computing the estimate (the so called
   */
  /*                        elemental sets). */
  /*  */
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
  /*  and the R library robustbase http://robustbase.r-forge.r-project.org/ */
  /*  The core of these routines, e.g. the resampling approach, however, has */
  /*  been completely redesigned, with considerable increase of the */
  /*  computational performance. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('MMreg')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % MMreg with all default options. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=MMreg(ycont,X); */
  /* } */
  /* { */
  /*     % MMreg with optional input arguments. */
  /*     % MMreg using the hyperbolic rho function. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=MMreg(ycont,X,'Srhofunc','optimal'); */
  /* } */
  /* { */
  /*     % MMreg with optional input arguments. */
  /*     % MMreg using the OLS estimates ac InitialEst. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     % OLS estimates */
  /*     bols=[ones(n,1) X]\y; */
  /*     res=y-[ones(n,1) X]*bols; */
  /*     sols=sqrt((res'*res)/(n-p-1)); */
  /*     InitialEst.beta=bols; */
  /*     InitialEst.scale=sols; */
  /*     [out]=MMreg(ycont,X,'InitialEst',InitialEst); */
  /* } */
  /* { */
  /*     %% Comparing the output of different MMreg runs. */
  /*     state=100; */
  /*     randn('state', state); */
  /*     n=100; */
  /*     X=randn(n,3); */
  /*     bet=[3;4;5]; */
  /*     y=3*randn(n,1)+X*bet; */
  /*     y(1:20)=y(1:20)+13; */
  /*  */
  /*     %For outlier detection we consider both the nominal individual 1% */
  /*     %significance level and the simultaneous Bonferroni confidence level.
   */
  /*  */
  /*     % Define nominal confidence level */
  /*     conflev=[0.99,1-0.01/length(y)]; */
  /*     % Define number of subsets */
  /*     nsamp=3000; */
  /*     % Define the main title of the plots */
  /*     titl=''; */
  /*  */
  /*     % MM  estimators */
  /*     [outMM]=MMreg(y,X,'conflev',conflev(1)); */
  /*     laby='Scaled MM residuals'; */
  /*     resindexplot(outMM.residuals,'title',titl,'laby',laby,'numlab','','conflev',conflev)
   */
  /*     % In this example MM estimator seems to detect half of the outlier with
   * a Bonferroni significance level. */
  /*     % By simply changing the seed to 543 (state=543), using a Bonferroni
   * size */
  /*     %of 1%, no unit is declared as outlier and just half of them using the
   * 99% */
  /*     %band. */
  /* } */
  /* { */
  /*     % Comparison between direct call to MMreg and call to Sreg and
   * MMregcore. */
  /*     n=30; */
  /*     p=3; */
  /*     randn('state', 123456); */
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
  /* { */
  /*     %%  Example of the use of Power Divergence estimator. */
  /*     n=200; */
  /*     p=3; */
  /*     rng('default') */
  /*     rng(100); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     % mdpd is used both in the S and in MM step. */
  /*     [out]=MMreg(ycont,X,'Srhofunc','mdpd','rhofunc','mdpd','plots',1); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X->data[i];
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
  emxInit_boolean_T(&x, 1);
  if (!nocheck) {
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    mc = X->size[0] - 1;
    loop_ub = X->size[1];
    i = b_y->size[0];
    b_y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(b_y, i);
    for (b_i = 0; b_i <= mc; b_i++) {
      b_y->data[b_i] = 0.0;
    }
    for (k = 0; k < loop_ub; k++) {
      aoffset = k * X->size[0];
      for (b_i = 0; b_i <= mc; b_i++) {
        b_y->data[b_i] += X->data[aoffset + b_i];
      }
    }
    i = x->size[0];
    x->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = rtIsInf(b_y->data[i]);
    }
    emxInit_boolean_T(&r, 1);
    i = r->size[0];
    r->size[0] = b_y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = rtIsNaN(b_y->data[i]);
    }
    emxInit_boolean_T(&na_X, 1);
    i = na_X->size[0];
    na_X->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(na_X, i);
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_X->data[i] = (x->data[i] || r->data[i]);
    }
    i = x->size[0];
    x->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = rtIsInf(y->data[i]);
    }
    i = r->size[0];
    r->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = rtIsNaN(y->data[i]);
    }
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = (x->data[i] || r->data[i]);
    }
    emxFree_boolean_T(&r);
    /*  Observations with missing or infinite values are removed from X and y */
    mc = na_X->size[0] - 1;
    aoffset = 0;
    for (b_i = 0; b_i <= mc; b_i++) {
      if ((!na_X->data[b_i]) && (!x->data[b_i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r1, i);
    aoffset = 0;
    for (b_i = 0; b_i <= mc; b_i++) {
      if ((!na_X->data[b_i]) && (!x->data[b_i])) {
        r1->data[aoffset] = b_i + 1;
        aoffset++;
      }
    }
    loop_ub = X->size[1];
    i = out->X->size[0] * out->X->size[1];
    out->X->size[0] = r1->size[0];
    out->X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(out->X, i);
    for (i = 0; i < loop_ub; i++) {
      aoffset = r1->size[0];
      for (b_i = 0; b_i < aoffset; b_i++) {
        out->X->data[b_i + out->X->size[0] * i] =
            X->data[(r1->data[b_i] + X->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r1);
    mc = na_X->size[0] - 1;
    aoffset = 0;
    for (b_i = 0; b_i <= mc; b_i++) {
      if ((!na_X->data[b_i]) && (!x->data[b_i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r2, i);
    aoffset = 0;
    for (b_i = 0; b_i <= mc; b_i++) {
      if ((!na_X->data[b_i]) && (!x->data[b_i])) {
        r2->data[aoffset] = b_i + 1;
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
      emxInit_real_T(&varargin_2, 2);
      i = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = out->X->size[0];
      varargin_2->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(varargin_2, i);
      loop_ub = out->X->size[0] * out->X->size[1];
      for (i = 0; i < loop_ub; i++) {
        varargin_2->data[i] = out->X->data[i];
      }
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = r2->size[0];
      out->X->size[1] = X->size[1] + 1;
      emxEnsureCapacity_real_T(out->X, i);
      i = r2->size[0];
      for (aoffset = 0; aoffset < i; aoffset++) {
        out->X->data[aoffset] = 1.0;
      }
      b_i = varargin_2->size[0] * varargin_2->size[1];
      for (aoffset = 0; aoffset < b_i; aoffset++) {
        out->X->data[i + aoffset] = varargin_2->data[aoffset];
      }
      emxFree_real_T(&varargin_2);
    }
    emxInit_real_T(&constcols, 2);
    emxInit_real_T(&r3, 2);
    emxInit_boolean_T(&b_constcols, 2);
    /*  constcols = scalar vector of the indices of possible constant columns.
     */
    maximum(out->X, constcols);
    minimum(out->X, r3);
    i = b_constcols->size[0] * b_constcols->size[1];
    b_constcols->size[0] = 1;
    b_constcols->size[1] = constcols->size[1];
    emxEnsureCapacity_boolean_T(b_constcols, i);
    loop_ub = constcols->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_constcols->data[i] = (constcols->data[i] - r3->data[i] == 0.0);
    }
    emxFree_real_T(&r3);
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
      nullAssignment(out->X, c_constcols);
    }
    emxFree_int32_T(&c_constcols);
    emxFree_real_T(&constcols);
    /*  p is the number of parameters to be estimated */
    if (r2->size[0] < out->X->size[1]) {
      int2str(out->X->size[0], b_out.data, b_out.size);
      int2str(out->X->size[1], b_out.data, b_out.size);
    }
    emxFree_int32_T(&r2);
    local_rank(out->X);
  }
  /*  default values for the initial S estimate: */
  /*  default value of break down point */
  /*  default values of subsamples to extract */
  /*  default value of number of refining iterations (C steps) for each
   * extracted subset */
  /*  default value of tolerance for the refining steps convergence for  each
   * extracted subset */
  /*  default value of number of best locs to remember */
  /*  default value of number of refining iterations (C steps) for best subsets
   */
  /*  default value of tolerance for the refining steps convergence for best
   * subsets */
  /*  default value of tolerance for finding the minimum value of the scale */
  /*  both for each extracted subset and each of the best subsets */
  /*  rho (psi) function which has to be used to weight the residuals */
  /*  Write in structure 'options' the options chosen by the user */
  /*  intercept=options.intercept; */
  /*  InitialEst = structure which contains initial estimate of beta and sigma
   */
  /*  If InitialEst is empty then initial estimates of beta and sigma come from
   */
  /*  S-estimation */
  i = x->size[0];
  x->size[0] = InitialEst->beta->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  loop_ub = InitialEst->beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = rtIsNaN(InitialEst->beta->data[i]);
  }
  c_y = false;
  aoffset = 1;
  exitg1 = false;
  while ((!exitg1) && (aoffset <= x->size[0])) {
    if (!x->data[aoffset - 1]) {
      aoffset++;
    } else {
      c_y = true;
      exitg1 = true;
    }
  }
  emxFree_boolean_T(&x);
  emxInitStruct_struct_T6(&Sresult);
  if (c_y) {
    /*  break down point */
    /*  refining steps */
    /*  best locs for refining steps till convergence */
    /*  subsamples to extract */
    /*  tolerance for refining steps */
    /*  tolerance for finding minimum value of the scale for each subset */
    /*  refining steps for the best subsets */
    /*  tolerance for refining steps for the best subsets */
    i = out->rhofuncS->size[0] * out->rhofuncS->size[1];
    out->rhofuncS->size[0] = Srhofunc->size[0];
    out->rhofuncS->size[1] = Srhofunc->size[1];
    emxEnsureCapacity_char_T(out->rhofuncS, i);
    loop_ub = Srhofunc->size[0] * Srhofunc->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->rhofuncS->data[i] = Srhofunc->data[i];
    }
    /*  rho function which must be used for S estimator */
    i = out->rhofuncparamS->size[0] * out->rhofuncparamS->size[1];
    out->rhofuncparamS->size[0] = Srhofuncparam->size[0];
    out->rhofuncparamS->size[1] = Srhofuncparam->size[1];
    emxEnsureCapacity_real_T(out->rhofuncparamS, i);
    loop_ub = Srhofuncparam->size[0] * Srhofuncparam->size[1];
    for (i = 0; i < loop_ub; i++) {
      out->rhofuncparamS->data[i] = Srhofuncparam->data[i];
    }
    /*  eventual additional parameters associated to the rho function for S
     * estimator */
    /*  first compute S-estimator with a fixed breakdown point */
    /*  SR is the routine which computes S estimates of beta and sigma in
     * regression */
    /*  Note that intercept is taken care of by chkinputR call. */
    Sreg(b_y, out->X, Snsamp, Sbdp, Srefsteps, Sbestr, Sreftol, Sminsctol,
         Srefstepsbestr, Sreftolbestr, Srhofunc, Srhofuncparam, msg, &Sresult,
         C);
    ss = Sresult.scale;
    out->Ssingsub = Sresult.singsub;
  } else {
    i = Sresult.beta->size[0];
    Sresult.beta->size[0] = InitialEst->beta->size[0];
    emxEnsureCapacity_real_T(Sresult.beta, i);
    loop_ub = InitialEst->beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      Sresult.beta->data[i] = InitialEst->beta->data[i];
    }
    ss = InitialEst->scale;
    out->Ssingsub = 0.0;
    /*  In this case there is no preliminary S estimator */
    out->rhofuncS->size[0] = 1;
    out->rhofuncS->size[1] = 0;
    out->rhofuncparamS->size[0] = 0;
    out->rhofuncparamS->size[1] = 0;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = 1;
    emxEnsureCapacity_real_T(C, i);
    C->data[0] = 0.0;
  }
  emxInitStruct_struct_T7(&expl_temp);
  /*  rho function which must be used for MM loop */
  /*  eventual additional parameters associated to the rho function for MM loop
   */
  /*  Asymptotic nominal efficiency (for location or shape) */
  /*  effshape = scalar which specifies whether nominal efficiency refers to
   * location or scale */
  /*  refsteps = maximum number of iteration in the MM step */
  /*  tol = tolerance to declare convergence in the MM step */
  /*  MMregcore = function which does IRWLS steps from initialbeta (bs) and
   * sigma (ss) */
  /*  Notice that the estimate of sigma (scale) remains fixed */
  MMregcore(b_y, out->X, Sresult.beta, ss, eff, rhofunc, rhofuncparam, refsteps,
            tol, conflev, &expl_temp);
  i = out->beta->size[0];
  out->beta->size[0] = expl_temp.beta->size[0];
  emxEnsureCapacity_real_T(out->beta, i);
  loop_ub = expl_temp.beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = expl_temp.beta->data[i];
  }
  out->auxscale = ss;
  mc = out->X->size[0] - 1;
  loop_ub = out->X->size[1];
  i = out->fittedvalues->size[0];
  out->fittedvalues->size[0] = out->X->size[0];
  emxEnsureCapacity_real_T(out->fittedvalues, i);
  for (b_i = 0; b_i <= mc; b_i++) {
    out->fittedvalues->data[b_i] = 0.0;
  }
  for (k = 0; k < loop_ub; k++) {
    aoffset = k * out->X->size[0];
    for (b_i = 0; b_i <= mc; b_i++) {
      out->fittedvalues->data[b_i] +=
          out->X->data[aoffset + b_i] * expl_temp.beta->data[k];
    }
  }
  i = out->residuals->size[0];
  out->residuals->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(out->residuals, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = (b_y->data[i] - out->fittedvalues->data[i]) / ss;
  }
  /*  MM scaled residuals */
  i = out->Sbeta->size[0];
  out->Sbeta->size[0] = Sresult.beta->size[0];
  emxEnsureCapacity_real_T(out->Sbeta, i);
  loop_ub = Sresult.beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Sbeta->data[i] = Sresult.beta->data[i];
  }
  emxFreeStruct_struct_T6(&Sresult);
  i = out->weights->size[0] * out->weights->size[1];
  out->weights->size[0] = expl_temp.weights->size[0];
  out->weights->size[1] = expl_temp.weights->size[1];
  emxEnsureCapacity_real_T(out->weights, i);
  loop_ub = expl_temp.weights->size[0] * expl_temp.weights->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->weights->data[i] = expl_temp.weights->data[i];
  }
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = expl_temp.outliers->size[1];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = expl_temp.outliers->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = expl_temp.outliers->data[i];
  }
  out->conflev = conflev;
  for (i = 0; i < 5; i++) {
    out->class[i] = b_cv[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  i = out->rhofunc->size[0] * out->rhofunc->size[1];
  out->rhofunc->size[0] = expl_temp.rhofunc->size[0];
  out->rhofunc->size[1] = expl_temp.rhofunc->size[1];
  emxEnsureCapacity_char_T(out->rhofunc, i);
  loop_ub = expl_temp.rhofunc->size[0] * expl_temp.rhofunc->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->rhofunc->data[i] = expl_temp.rhofunc->data[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
  out->rhofuncparam->size[0] = expl_temp.rhofuncparam->size[0];
  out->rhofuncparam->size[1] = expl_temp.rhofuncparam->size[1];
  emxEnsureCapacity_real_T(out->rhofuncparam, i);
  loop_ub = expl_temp.rhofuncparam->size[0] * expl_temp.rhofuncparam->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->rhofuncparam->data[i] = expl_temp.rhofuncparam->data[i];
  }
  emxFreeStruct_struct_T7(&expl_temp);
  if (yxsave) {
    if (intercept) {
      /*  Store X (without the column of ones if there is an intercept) */
      if (2 > out->X->size[1]) {
        i = 0;
        b_i = 0;
      } else {
        i = 1;
        b_i = out->X->size[1];
      }
      aoffset = out->X->size[0] - 1;
      loop_ub = out->X->size[0];
      mc = b_i - i;
      for (b_i = 0; b_i < mc; b_i++) {
        for (k = 0; k < loop_ub; k++) {
          out->X->data[k + (aoffset + 1) * b_i] =
              out->X->data[k + out->X->size[0] * (i + b_i)];
        }
      }
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = aoffset + 1;
      out->X->size[1] = mc;
      emxEnsureCapacity_real_T(out->X, i);
    }
    /*  Store response */
    i = out->y->size[0] * out->y->size[1];
    out->y->size[0] = b_y->size[0];
    out->y->size[1] = 1;
    emxEnsureCapacity_real_T(out->y, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->y->data[i] = b_y->data[i];
    }
  } else {
    out->X->size[0] = 0;
    out->X->size[1] = 0;
    out->y->size[0] = 0;
    out->y->size[1] = 0;
  }
  emxFree_real_T(&b_y);
}

/* End of code generation (MMreg_wrapper.c) */
