/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * MMregeda_wrapper.c
 *
 * Code generation for function 'MMregeda_wrapper'
 *
 */

/* Include files */
#include "MMregeda_wrapper.h"
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
void MMregeda_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                      double conflev, const emxArray_real_T *eff,
                      const struct2_T *InitialEst, bool intercept, bool nocheck,
                      double refsteps, const emxArray_char_T *rhofunc,
                      const emxArray_real_T *rhofuncparam, double Sbdp,
                      double Sbestr, double Sminsctol, bool Smsg, double Snsamp,
                      double Srefsteps, double Srefstepsbestr, double Sreftol,
                      double Sreftolbestr, const emxArray_char_T *Srhofunc,
                      const emxArray_real_T *Srhofuncparam, double tol,
                      struct_MMregeda_T *out, emxArray_real_T *C)
{
  static const char b_cv[8] = {'M', 'M', 'r', 'e', 'g', 'e', 'd', 'a'};
  e_struct_T expl_temp;
  emxArray_boolean_T *b_constcols;
  emxArray_boolean_T *na_X;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *x;
  emxArray_char_T_1x310 b_out;
  emxArray_int32_T *c_constcols;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T *b_C;
  emxArray_real_T *constcols;
  emxArray_real_T *r3;
  j_struct_T Sresult;
  double ss;
  int aoffset;
  int i;
  int jj;
  int k;
  int loop_ub;
  int mc;
  int n;
  bool b_y;
  bool exitg1;
  (void)Smsg;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  /*  wrapper function for MMregeda. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  eff a scalar double */
  /*  eff a column vector of doubles of any length */
  /*  InitialEst: a struct (with 2 fields) */
  /*  assert(length(InitialEst) <=1); */
  /*  field beta a column vector of type double */
  /*  field scale a scalar of type double */
  /*  intercept a boolean */
  /*  nocheck is a boolean */
  /*  refsteps: a scalar of type double */
  /*  rhofunc: a character */
  /*  rhofuncparam */
  /*  assert(size(rhofuncparam,2) == 1); */
  /*  Sbdp a scalar double */
  /*  Sbestr a scalar double */
  /*  Sminsctol a scalar double */
  /*  Smsg is a boolean */
  /*  Snsamp a scalar double */
  /*  Srefsteps: a scalar of type double */
  /*  Srefstepsbestr: a scalar of type double */
  /*  Sreftol: a scalar of type double */
  /*  Sreftolbestr: a scalar of type double */
  /*  Srhofunc: a character */
  /*  Srhofuncparam */
  /*  assert(size(rhofuncparam,2) == 1); */
  /*  tol: a scalar of type double */
  /* MMregeda computes MM estimator in linear regression for a series of values
   * of efficiency */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('MMregeda')">Link to the help function</a> */
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
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar. */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*       eff     : nominal efficiency. Scalar or vector. */
  /*                 Vector defining nominal efficiency (i.e. a series of
   * numbers between */
  /*                  0.5 and 0.99). The default value is the sequence
   * 0.5:0.01:0.99 */
  /*                  Asymptotic nominal efficiency is: */
  /*                  $(\int \psi' d\Phi)^2 / (\psi^2 d\Phi)$ */
  /*                  Example - 'eff',[0.85 0.90 0.95 0.99] */
  /*                  Data Types - double */
  /*  */
  /*      effshape : location or scale effiicency. dummy scalar. */
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
  /*                continas NaN values, program uses S estimators. In this */
  /*                last case it is possible to specify the options given in */
  /*                function Sreg.  */
  /*                Example - 'InitialEst',[] */
  /*                Data Types - struct or empty value */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false.  */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove
   */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
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
  /*                function which must be used to weight the residuals in MM
   * step. */
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
  /*  rhofuncparam: Additional parameters for the specified rho function in the
   * MM step. */
  /*                Scalar or vector. */
  /*                For hyperbolic rho function it is possible to set up the */
  /*                value of k = sup CVC (the default value of k is 4.5). */
  /*                For Hampel rho function it is possible to define parameters
   */
  /*                a, b and c (the default values are a=2, b=4, c=8) */
  /*                  Example - 'rhofuncparam',5 */
  /*                  Data Types - single | double */
  /*   Soptions  :  options if initial estimator is S and InitialEst is empty.
   */
  /*                Srhofunc,Snsamp,Srefsteps, Sreftol, Srefstepsbestr, */
  /*                Sreftolbestr, Sminsctol, Sbestr. */
  /*                See function Sreg.m for more details on these options. */
  /*                It is necessary to add to the S options the letter */
  /*                S at the beginning. For example, if you want to use the */
  /*                optimal rho function the supplied option is */
  /*                'Srhofunc','optimal'. For example, if you want to use 3000
   */
  /*                subsets, the supplied option is 'Snsamp',3000. */
  /*                Note that the rho function which is used in the MMstep is */
  /*                the same as the one used in the S step. */
  /*                Example - 'Snsamp',1000 */
  /*                Data Types - single | double */
  /*  */
  /*        tol    : Tolerance. Scalar. */
  /*                  Scalar controlling tolerance in the MM loop. */
  /*                  Default value is 1e-7 */
  /*                  Example - 'tol',1e-10 */
  /*                  Data Types - double */
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
  /*   out :     A structure containing the following fields */
  /*        out.auxscale    =   scalar, S estimate of the scale (or supplied */
  /*                            external estimate of scale, if option InitialEst
   */
  /*                            is not empty) */
  /*        out.Beta        =   p x length(eff) matrix containing MM estimate of
   */
  /*                            regression coefficients for each value of eff */
  /*        out.RES	=           n x length(eff) matrix containing scaled MM
   */
  /*                            residuals for each value of eff */
  /*                            out.RES(:,jj)=(y-X*out.Beta(:,jj))/out.auxscale
   */
  /*        out.Weights     =   n x length(eff) matrix. Weights assigned to */
  /*                            each observation for each value of eff */
  /*        out.Outliers    :   n x length(eff) Boolean matrix containing the */
  /*                            outliers which have been found for each value */
  /*                            of eff. */
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
  /*        out.conflev     =   Confidence level that was used to declare
   * outliers */
  /*            out.rhofunc =   string identifying the rho function which has
   * been */
  /*                            used */
  /*       out.rhofuncparam =   vector which contains the additional parameters
   */
  /*                            for the specified rho function which have been
   */
  /*                            used. For hyperbolic rho function the value of
   */
  /*                            k =sup CVC. For Hampel rho function the
   * parameters */
  /*                            a, b and c */
  /*         out.Outliers = Boolean matrix containing the list of */
  /*                        the units declared as outliers for each value of eff
   * using confidence */
  /*                        level specified in input scalar conflev */
  /*             out.eff    =   vector containing the value of eff which have */
  /*                            been used. */
  /*            out.Sbeta   = vector.  S initial estimate of regression */
  /*                          coefficients. */
  /*             out.y      =   response vector y. */
  /*             out.X      =   data matrix X. */
  /*        out.class       =   'MMregeda'. */
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
  /*  Riani, M., Cerioli, A., Atkinson, A.C. and Perrotta, D. (2014), Monitoring
   */
  /*  Robust Regression, "Electronic Journal of Statistics", Vol. 8, pp.
   * 646-677. */
  /*  */
  /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics, Theory
   */
  /*  and Methods", Wiley, New York. */
  /*  */
  /*  Acknowledgements: */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('MMregeda')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % MMregeda with all default options. */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=MMregeda(ycont,X); */
  /* } */
  /* { */
  /*     % MMregeda with optional input arguments. */
  /*     % MMregeda using the optimal rho function */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=MMregeda(ycont,X,'Srhofunc','optimal','rhofunc','optimal'); */
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
  /*  */
  /*     % MM  estimators */
  /*     [out]=MMregeda(y,X,'conflev',conflev(1)); */
  /*     laby='Scaled MM residuals'; */
  /*     resfwdplot(out) */
  /* } */
  /*  Beginning of code  */
  /*  Input parameters checking */
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X->data[i];
  }
  i = out->y->size[0];
  out->y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->y, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->y->data[i] = y->data[i];
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
  emxInit_int32_T(&r, 1);
  emxInit_boolean_T(&x, 1);
  if (nocheck) {
    mc = X->size[1];
    n = X->size[0];
  } else {
    /*  The first argument which is passed is y */
    /*  The second argument which is passed is X */
    /*  Check dimension consistency of X and y */
    mc = X->size[0] - 1;
    loop_ub = X->size[1];
    i = out->y->size[0];
    out->y->size[0] = X->size[0];
    emxEnsureCapacity_real_T(out->y, i);
    for (i = 0; i <= mc; i++) {
      out->y->data[i] = 0.0;
    }
    for (k = 0; k < loop_ub; k++) {
      aoffset = k * X->size[0];
      for (i = 0; i <= mc; i++) {
        out->y->data[i] += X->data[aoffset + i];
      }
    }
    i = x->size[0];
    x->size[0] = out->y->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    loop_ub = out->y->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = rtIsInf(out->y->data[i]);
    }
    emxInit_boolean_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = out->y->size[0];
    emxEnsureCapacity_boolean_T(r1, i);
    loop_ub = out->y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = rtIsNaN(out->y->data[i]);
    }
    emxInit_boolean_T(&na_X, 1);
    i = na_X->size[0];
    na_X->size[0] = x->size[0];
    emxEnsureCapacity_boolean_T(na_X, i);
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      na_X->data[i] = (x->data[i] || r1->data[i]);
    }
    i = x->size[0];
    x->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = rtIsInf(y->data[i]);
    }
    i = r1->size[0];
    r1->size[0] = y->size[0];
    emxEnsureCapacity_boolean_T(r1, i);
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = rtIsNaN(y->data[i]);
    }
    loop_ub = x->size[0];
    for (i = 0; i < loop_ub; i++) {
      x->data[i] = (x->data[i] || r1->data[i]);
    }
    emxFree_boolean_T(&r1);
    /*  Observations with missing or infinite values are removed from X and y */
    mc = na_X->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if ((!na_X->data[i]) && (!x->data[i])) {
        aoffset++;
      }
    }
    i = r->size[0];
    r->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r, i);
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if ((!na_X->data[i]) && (!x->data[i])) {
        r->data[aoffset] = i + 1;
        aoffset++;
      }
    }
    loop_ub = X->size[1];
    i = out->X->size[0] * out->X->size[1];
    out->X->size[0] = r->size[0];
    out->X->size[1] = X->size[1];
    emxEnsureCapacity_real_T(out->X, i);
    for (i = 0; i < loop_ub; i++) {
      aoffset = r->size[0];
      for (k = 0; k < aoffset; k++) {
        out->X->data[k + out->X->size[0] * i] =
            X->data[(r->data[k] + X->size[0] * i) - 1];
      }
    }
    mc = na_X->size[0] - 1;
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if ((!na_X->data[i]) && (!x->data[i])) {
        aoffset++;
      }
    }
    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = aoffset;
    emxEnsureCapacity_int32_T(r2, i);
    aoffset = 0;
    for (i = 0; i <= mc; i++) {
      if ((!na_X->data[i]) && (!x->data[i])) {
        r2->data[aoffset] = i + 1;
        aoffset++;
      }
    }
    emxFree_boolean_T(&na_X);
    i = out->y->size[0];
    out->y->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(out->y, i);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->y->data[i] = y->data[r2->data[i] - 1];
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
      i = out->Beta->size[0] * out->Beta->size[1];
      out->Beta->size[0] = out->X->size[0];
      out->Beta->size[1] = out->X->size[1];
      emxEnsureCapacity_real_T(out->Beta, i);
      loop_ub = out->X->size[0] * out->X->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->Beta->data[i] = out->X->data[i];
      }
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = r2->size[0];
      out->X->size[1] = X->size[1] + 1;
      emxEnsureCapacity_real_T(out->X, i);
      i = r2->size[0];
      for (aoffset = 0; aoffset < i; aoffset++) {
        out->X->data[aoffset] = 1.0;
      }
      k = out->Beta->size[0] * out->Beta->size[1];
      for (aoffset = 0; aoffset < k; aoffset++) {
        out->X->data[i + aoffset] = out->Beta->data[aoffset];
      }
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
    mc = out->X->size[1];
    if (r2->size[0] < out->X->size[1]) {
      int2str(out->X->size[0], b_out.data, b_out.size);
      int2str(out->X->size[1], b_out.data, b_out.size);
    }
    emxFree_int32_T(&r2);
    local_rank(out->X);
  }
  /*  default values for the initial S estimate: */
  /*  default value of break down point */
  /*  default values for msg */
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
  /*  rho (psi) function which has to be used to weight the residuals in the S
   */
  /*  step */
  /*  rho (psi) function which has to be used to weight the residuals in the MM
   */
  /*  step */
  /*  default values of nominal efficiency which are used */
  /*  Write in structure 'options' the options chosen by the user */
  /*  intercept=options.intercept; */
  /*  InitialEst = structure which contains initial estimate of beta and sigma
   */
  /*  If InitialEst is empty then initial estimates of beta and sigma come from
   */
  /*  S-estimation */
  /*  rho function to use in the MM step */
  i = x->size[0];
  x->size[0] = InitialEst->beta->size[0];
  emxEnsureCapacity_boolean_T(x, i);
  loop_ub = InitialEst->beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = rtIsNaN(InitialEst->beta->data[i]);
  }
  b_y = false;
  aoffset = 1;
  exitg1 = false;
  while ((!exitg1) && (aoffset <= x->size[0])) {
    if (!x->data[aoffset - 1]) {
      aoffset++;
    } else {
      b_y = true;
      exitg1 = true;
    }
  }
  emxFree_boolean_T(&x);
  emxInitStruct_struct_T6(&Sresult);
  if (b_y) {
    /*  break down point */
    /*  refining steps */
    /*  best locs for refining steps till convergence */
    /*  subsamples to extract */
    /*  tolerance for refining steps */
    /*  tolerance for finding minimum value of the scale for each subset */
    /*  refining steps for the best subsets */
    /*  tolerance for refining steps for the best subsets */
    /*  rho function which must be used */
    /*  eventual additional parameters associated to the rho function */
    /*  first compute S-estimator with a fixed breakdown point */
    /*  SR is the routine which computes S estimates of beta and sigma in
     * regression */
    /*  Note that intercept is taken care of by chkinputR call. */
    b_Sreg(out->y, out->X, Snsamp, Sbdp, Srefsteps, Sbestr, Sreftol, Sminsctol,
           Srefstepsbestr, Sreftolbestr, Srhofunc, Srhofuncparam, &Sresult, C);
    ss = Sresult.scale;
    out->Ssingsub = Sresult.singsub;
  } else {
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = 1;
    emxEnsureCapacity_real_T(C, i);
    C->data[0] = 0.0;
    i = Sresult.beta->size[0];
    Sresult.beta->size[0] = InitialEst->beta->size[0];
    emxEnsureCapacity_real_T(Sresult.beta, i);
    loop_ub = InitialEst->beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      Sresult.beta->data[i] = InitialEst->beta->data[i];
    }
    ss = InitialEst->scale;
    out->Ssingsub = 0.0;
  }
  /*  Asymptotic nominal efficiency (for location or shape) */
  /*  effshape = scalar which specifies whether nominal efficiency refers to
   * location or scale */
  /*  refsteps = maximum number of iteration in the MM step */
  /*  tol = tolerance to declare convergence in the MM step */
  /*  MMregcore = function which does IRWLS steps from initialbeta (bs) and
   * sigma (ss) */
  /*  Notice that the estimate of sigma (scale) remains fixed */
  /*  Initialize quantities to store for each value of eff */
  aoffset = eff->size[0];
  if (aoffset <= 1) {
    aoffset = 1;
  }
  if (eff->size[0] == 0) {
    aoffset = 0;
  }
  i = out->Beta->size[0] * out->Beta->size[1];
  out->Beta->size[0] = mc;
  out->Beta->size[1] = aoffset;
  emxEnsureCapacity_real_T(out->Beta, i);
  loop_ub = mc * aoffset;
  for (i = 0; i < loop_ub; i++) {
    out->Beta->data[i] = 0.0;
  }
  i = out->Weights->size[0] * out->Weights->size[1];
  out->Weights->size[0] = n;
  out->Weights->size[1] = aoffset;
  emxEnsureCapacity_real_T(out->Weights, i);
  mc = n * aoffset;
  for (i = 0; i < mc; i++) {
    out->Weights->data[i] = 0.0;
  }
  i = out->RES->size[0] * out->RES->size[1];
  out->RES->size[0] = n;
  out->RES->size[1] = aoffset;
  emxEnsureCapacity_real_T(out->RES, i);
  for (i = 0; i < mc; i++) {
    out->RES->data[i] = 0.0;
  }
  i = out->Outliers->size[0] * out->Outliers->size[1];
  out->Outliers->size[0] = n;
  out->Outliers->size[1] = aoffset;
  emxEnsureCapacity_boolean_T(out->Outliers, i);
  for (i = 0; i < mc; i++) {
    out->Outliers->data[i] = false;
  }
  aoffset = eff->size[0];
  if (aoffset <= 1) {
    aoffset = 1;
  }
  if (eff->size[0] == 0) {
    n = 0;
  } else {
    n = aoffset;
  }
  emxInit_real_T(&b_C, 1);
  emxInitStruct_struct_T7(&expl_temp);
  for (jj = 0; jj < n; jj++) {
    MMregcore(out->y, out->X, Sresult.beta, ss, eff->data[jj], refsteps, tol,
              conflev, rhofunc, rhofuncparam, &expl_temp);
    mc = out->X->size[0] - 1;
    loop_ub = out->X->size[1];
    i = b_C->size[0];
    b_C->size[0] = out->X->size[0];
    emxEnsureCapacity_real_T(b_C, i);
    for (i = 0; i <= mc; i++) {
      b_C->data[i] = 0.0;
    }
    for (k = 0; k < loop_ub; k++) {
      aoffset = k * out->X->size[0];
      for (i = 0; i <= mc; i++) {
        b_C->data[i] += out->X->data[aoffset + i] * expl_temp.beta->data[k];
      }
    }
    loop_ub = out->y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->RES->data[i + out->RES->size[0] * jj] =
          (out->y->data[i] - b_C->data[i]) / ss;
    }
    loop_ub = expl_temp.beta->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->Beta->data[i + out->Beta->size[0] * jj] = expl_temp.beta->data[i];
    }
    loop_ub = expl_temp.weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->Weights->data[i + out->Weights->size[0] * jj] =
          expl_temp.weights->data[i];
    }
    i = r->size[0];
    r->size[0] = expl_temp.outliers->size[1];
    emxEnsureCapacity_int32_T(r, i);
    loop_ub = expl_temp.outliers->size[1];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = (int)expl_temp.outliers->data[i];
    }
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->Outliers->data[(r->data[i] + out->Outliers->size[0] * jj) - 1] =
          true;
    }
  }
  emxFreeStruct_struct_T7(&expl_temp);
  emxFree_real_T(&b_C);
  emxFree_int32_T(&r);
  /*  Store quantities which depend on the value of eff(jj) */
  /*  MM scaled residuals */
  /*  Store quantities which do not depend on the value of eff(jj) */
  i = out->Sbeta->size[0];
  out->Sbeta->size[0] = Sresult.beta->size[0];
  emxEnsureCapacity_real_T(out->Sbeta, i);
  loop_ub = Sresult.beta->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Sbeta->data[i] = Sresult.beta->data[i];
  }
  emxFreeStruct_struct_T6(&Sresult);
  out->auxscale = ss;
  out->conflev = conflev;
  for (i = 0; i < 8; i++) {
    out->class[i] = b_cv[i];
  }
  i = out->rhofunc->size[0] * out->rhofunc->size[1];
  out->rhofunc->size[0] = rhofunc->size[0];
  out->rhofunc->size[1] = rhofunc->size[1];
  emxEnsureCapacity_char_T(out->rhofunc, i);
  loop_ub = rhofunc->size[0] * rhofunc->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->rhofunc->data[i] = rhofunc->data[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
  out->rhofuncparam->size[0] = rhofuncparam->size[0];
  out->rhofuncparam->size[1] = rhofuncparam->size[1];
  emxEnsureCapacity_real_T(out->rhofuncparam, i);
  loop_ub = rhofuncparam->size[0] * rhofuncparam->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->rhofuncparam->data[i] = rhofuncparam->data[i];
  }
  /*  Store values of efficiency */
  i = out->eff->size[0] * out->eff->size[1];
  out->eff->size[0] = eff->size[0];
  out->eff->size[1] = 1;
  emxEnsureCapacity_real_T(out->eff, i);
  loop_ub = eff->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->eff->data[i] = eff->data[i];
  }
  if (intercept) {
    /*  Store X (without the column of ones if there is an intercept) */
    if (2 > out->X->size[1]) {
      i = 0;
      k = 0;
    } else {
      i = 1;
      k = out->X->size[1];
    }
    aoffset = out->X->size[0] - 1;
    loop_ub = out->X->size[0];
    mc = k - i;
    for (k = 0; k < mc; k++) {
      for (n = 0; n < loop_ub; n++) {
        out->X->data[n + (aoffset + 1) * k] =
            out->X->data[n + out->X->size[0] * (i + k)];
      }
    }
    i = out->X->size[0] * out->X->size[1];
    out->X->size[0] = aoffset + 1;
    out->X->size[1] = mc;
    emxEnsureCapacity_real_T(out->X, i);
  }
  /*  Store response */
  /*  Plot monitoring of scaled MM residuals for each value of eff */
}

/* End of code generation (MMregeda_wrapper.c) */
