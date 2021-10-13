/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Sreg_wrapper.c
 *
 * Code generation for function 'Sreg_wrapper'
 *
 */

/* Include files */
#include <R.h>

#include "Sreg_wrapper.h"
#include "FSRmdr.h"
#include "HAbdp.h"
#include "HArho.h"
#include "HYPrho.h"
#include "Mscale.h"
#include "OPTbdp.h"
#include "OPTrho.h"
#include "Sreg.h"
#include "TBbdp.h"
#include "TBrho.h"
#include "bc.h"
#include "blockedSummation.h"
#include "chkinputR.h"
#include "erfcinv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "median.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "subsets.h"
#include "tic.h"
#include "toc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void Sreg_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                  double bdp, double bestr, double conflev, bool intercept,
                  double minsctol, bool msg, bool nocheck, double nsamp,
                  double refsteps, double refstepsbestr, double reftol,
                  double reftolbestr, const emxArray_char_T *rhofunc,
                  const emxArray_real_T *rhofuncparam, bool yxsave,
                  struct_Sreg_T *out, emxArray_real_T *C)
{
  emxArray_boolean_T *w;
  emxArray_int32_T *r;
  emxArray_real_T b_time_data;
  emxArray_real_T *Xb;
  emxArray_real_T *abc;
  emxArray_real_T *b_y;
  emxArray_real_T *bestbetas;
  emxArray_real_T *bestscales;
  emxArray_real_T *bestsubset;
  emxArray_real_T *beta;
  emxArray_real_T *c;
  emxArray_real_T *psifunc_c1;
  emxArray_real_T *resrw;
  emxArray_real_T *seq;
  double time_data[1000];
  double varargin_1[50];
  double row[5];
  double b_varargin_1[3];
  const double *X_data;
  const double *rhofuncparam_data;
  const double *y_data;
  double A=0;
  double B=0;
  double b_c=0;
  double d=0;
  double diffbdp;
  double diffk;
  double kc=0;
  double kdef;
  double n;
  double scalerw;
  double scaletest=0;
  double singsub;
  double *C_data;
  double *Xb_data;
  double *abc_data;
  double *b_y_data;
  double *bestbetas_data;
  double *bestscales_data;
  double *bestsubset_data;
  double *beta_data;
  double *psifunc_c1_data;
  double *resrw_data;
  int psifunc_class_size[2];
  int b_i;
  int b_out;
  int i;
  int i1;
  unsigned int ij;
  int k;
  int loop_ub;
  int loop_ub_tmp;
  int nx;
  int time_size;
  int *r1;
  char psifunc_class_data[3];
  const char *rhofunc_data;
  bool b_w;
  bool *w_data;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  rhofuncparam_data = rhofuncparam->data;
  rhofunc_data = rhofunc->data;
  X_data = X->data;
  y_data = y->data;
  emxInit_real_T(&b_y, 1);
  /*  Sreg wrapper. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  bdp a scalar double */
  /*  bestr a scalar double */
  /*  conflev a scalar double */
  /*  intercept */
  /*  minsctol a scalar double */
  /*  msg is a boolean */
  /*  nocheck is a boolean */
  /*  nsamp a scalar double */
  /*  refsteps: a scalar of type double */
  /*  refstepsbestr: a scalar of type double */
  /*  reftol: a scalar of type double */
  /*  reftolbestr: a scalar of type double */
  /*  rhofunc: a character */
  /*  rhofuncparam */
  /*  assert(size(rhofuncparam,2) == 1); */
  /*  yxsave is a boolean */
  /* Sreg computes S estimators in linear regression */
  /*  */
  /* <a href="matlab: docsearchFS('Sreg')">Link to the help function</a> */
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
  /*          bdp :  breakdown point. Scalar. */
  /*                It measures the fraction of outliers */
  /*                the algorithm should resist. In this case any value greater
   */
  /*                than 0 but smaller or equal than 0.5 will do fine. */
  /*                Note that given bdp nominal */
  /*                efficiency is automatically determined. */
  /*                  Example - 'bdp',0.4 */
  /*                  Data Types - double */
  /*  */
  /*       bestr  : number of "best betas" to remember. Scalar. Scalar defining
   */
  /*                number of "best betas" to remember from the subsamples. */
  /*                These will be later iterated until convergence (default=5).
   */
  /*                  Example - 'bestr',10 */
  /*                  Data Types - single | double */
  /*  */
  /*      conflev :  Confidence level which is */
  /*                used to declare units as outliers. Scalar. */
  /*                Usually conflev=0.95, 0.975 0.99 (individual alpha) */
  /*                or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous alpha). */
  /*                Default value is 0.975 */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
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
  /*      minsctol: tolerance for the iterative */
  /*                procedure for finding the minimum value of the scale.
   * Scalar. */
  /*                Value of tolerance for the iterative */
  /*                procedure for finding the minimum value of the scale */
  /*                for each subset and each of the best subsets */
  /*                (It is used by subroutine minscale.m) */
  /*                The default value is 1e-7; */
  /*                  Example - 'minsctol',1e-7 */
  /*                  Data Types - single | double */
  /*  */
  /*         msg  : Level of output to display. Boolean. It controls whether */
  /*                  to display or not messages on the screen. */
  /*                If msg==true (default) messages are displayed */
  /*                on the screen about estimated time to compute the estimator
   */
  /*                and the warnings about */
  /*                'MATLAB:rankDeficientMatrix', 'MATLAB:singularMatrix' and */
  /*                'MATLAB:nearlySingularMatrix' are set to off. */
  /*                If msg is false no message is displayed on the screen */
  /*                  Example - 'msg',false */
  /*                  Data Types - logical */
  /*  */
  /*        nocheck : Check input arguments. Boolean. If nocheck is equal to */
  /*                true no check is performed on matrix y and matrix X. Notice
   */
  /*                that y and X are left unchanged. In other words the */
  /*                additional column of ones for the intercept is not added. */
  /*                As default nocheck=false. */
  /*                Example - 'nocheck',true */
  /*                Data Types - logical */
  /*  */
  /*        nsamp   : Number of subsamples which will be extracted to find the
   */
  /*                  robust estimator. Scalar. If nsamp=0 all subsets will be
   * extracted. */
  /*                  They will be (n choose p). */
  /*                  If the number of all possible subset is <1000 the */
  /*                  default is to extract all subsets otherwise just 1000. */
  /*                  Example - 'nsamp',1000 */
  /*                  Data Types - single | double */
  /*  */
  /*     refsteps : Number of refining iterations. Scalar. Number of refining */
  /*                iterationsin each subsample (default = 3). */
  /*                refsteps = 0 means "raw-subsampling" without iterations. */
  /*                  Example - 'refsteps',10 */
  /*                  Data Types - single | double */
  /*  */
  /* refstepsbestr: number of refining iterations for each best subset. Scalar.
   */
  /*                Scalar defining number of refining iterations for each */
  /*                best subset (default = 50). */
  /*                  Example - 'refstepsbestr',10 */
  /*                  Data Types - single | double */
  /*  */
  /*      reftol  : tolerance for the refining steps. Scalar. */
  /*                The default value is 1e-6; */
  /*                  Example - 'reftol',1e-05 */
  /*                  Data Types - single | double */
  /*  */
  /*  reftolbestr : Tolerance for the refining steps. Scalar. */
  /*                Tolerance for the refining steps */
  /*                for each of the best subsets */
  /*                The default value is 1e-8; */
  /*                  Example - 'reftolbestr',1e-10 */
  /*                  Data Types - single | double */
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
  /*                  Data Types - double */
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
  /*        yxsave : save option. Scalar. if yxsave is equal to 1, the response
   */
  /*                vector y and data matrix X are saved into the output */
  /*                structure out. Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - double */
  /*  */
  /*        plots : Plot on the screen. Scalar. */
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
  /*   out :     A structure containing the following fields */
  /*  */
  /*             out.beta = vector containing the S estimator of regression */
  /*                        coefficients */
  /*             out.scale= scalar containing the estimate of the scale */
  /*                        (sigma). This is the value of the objective function
   */
  /*               out.bs = p x 1 vector containing the units forming best
   * subset */
  /*                        associated with S estimate of regression
   * coefficient. */
  /*  out.residuals= n x 1 vector containing the estimates of the robust */
  /*                 scaled residuals. */
  /*  out.fittedvalues= n x 1 vector containing the fitted values. */
  /*         out.outliers = this output is present only if conflev has been */
  /*                        specified. It is a vector containing the list of */
  /*                        the units declared as outliers using confidence */
  /*                        level specified in input scalar conflev */
  /*          out.conflev = confidence level which is used to declare outliers.
   */
  /*                        Remark: scalar out.conflev will be used to draw the
   */
  /*                        horizontal line (confidence band) in the plot. */
  /*          out.singsub = Number of subsets wihtout full rank. Notice that */
  /*                        out.singsub > 0.1*(number of subsamples) produces a
   */
  /*                        warning */
  /*          out.weights = n x 1 vector containing the estimates of the weights
   */
  /*          out.rhofunc = string identifying the rho function which has been
   */
  /*                        used */
  /*     out.rhofuncparam = vector which contains the additional parameters */
  /*                        for the specified rho function which have been */
  /*                        used. For hyperbolic rho function the value of k */
  /*                        =sup CVC. For Hampel rho function the parameters a,
   */
  /*                        b and c. If input option argument 'rhofunc' is  not
   */
  /*                        'hyperbolic' or 'hampel' this field is empty. */
  /*             out.y    = response vector Y. The field is present only if
   * option */
  /*                        yxsave is set to 1. */
  /*             out.X    = data matrix X. The field is present only if option
   */
  /*                        yxsave is set to 1. */
  /*            out.class = 'Sreg' */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : matrix containing the indices of the subsamples */
  /*                        extracted for computing the estimate (the so called
   */
  /*                        elemental sets). */
  /*  */
  /*  See also: MMreg, Taureg */
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
  /* <a href="matlab: docsearchFS('Sreg')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /* { */
  /*     %% Sreg with all default options. */
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
  /*     [out]=Sreg(ycont,X); */
  /*     laby='Scaled S residuals'; */
  /*     titl=''; */
  /*    resindexplot(out.residuals,'title',titl,'laby',laby,'numlab','') */
  /* } */
  /* { */
  /*     % Sreg with optional input arguments. */
  /*     % Sreg with optimal rho function. Run this code to see the output shown
   * in the help file */
  /*     n=200; */
  /*     p=3; */
  /*     randn('state', 123456); */
  /*     X=randn(n,p); */
  /*     % Uncontaminated data */
  /*     y=randn(n,1); */
  /*     % Contaminated data */
  /*     ycont=y; */
  /*     ycont(1:5)=ycont(1:5)+6; */
  /*     [out]=Sreg(ycont,X,'rhofunc','optimal'); */
  /* } */
  /* { */
  /*     %% Sreg with hyperbolic rho function. */
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
  /*     [out]=Sreg(ycont,X,'rhofunc','hyperbolic','plots',1); */
  /* } */
  /*  Beginning of code */
  i = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(b_y, i);
  b_y_data = b_y->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_y_data[i] = y_data[i];
  }
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X_data[i];
  }
  chkinputR(b_y, out->X, intercept, nocheck, &n, &scalerw);
  b_y_data = b_y->data;
  /*  default value of break down point */
  /*  default values of subsamples to extract */
  /*  default value of number of refining iterations (C steps) for each
   * extracted subset */
  /*  default value of tolerance for the refining steps convergence for  each
   * extracted subset */
  /*  default value of number of best betas to remember */
  /*  default value of number of refining iterations (C steps) for best subsets
   */
  /*  default value of tolerance for the refining steps convergence for best
   * subsets */
  /*  default value of tolerance for finding the minimum value of the scale */
  /*  both for each extracted subset and each of the best subsets */
  /*  rho (psi) function which has to be used to weight the residuals */
  /* rhofuncdef='optimal'; */
  /*  Write in structure 'options' the options chosen by the user */
  /*  break down point */
  /*  refining steps */
  /*  tolerance for refining steps */
  /*  best betas for refining steps till convergence */
  /*  subsamples to extract */
  /*  tolerance for finding minimum value of the scale for each subset */
  /*  refining steps for the best subsets */
  /*  tolerance for refining steps for the best subsets */
  /*  Scalar which controls the messages displayed on the screen */
  /*  String which specifies the function to use to weight the residuals */
  /*  Find constant c linked to Tukey's biweight */
  /*  rho biweight is strictly increasing on [0 c] and constant on [c \infty) */
  /*  E(\rho) = kc = (c^2/6)*bdp, being kc the K of Rousseeuw and Leroy */
  /*  c  = TBbdp(bdp,1); */
  /*  kc = bdp*(c^2/6);  % kc = bdp * TBrho(c,c) */
  /*  Find tuning constant c linked to rho function */
  /*  Note that if \rho is standardized in such a way that (\rho(\infty))=1 */
  /*  E(\rho) = kc = bdp */
  emxInit_real_T(&psifunc_c1, 1);
  psifunc_c1_data = psifunc_c1->data;
  emxInit_real_T(&abc, 1);
  emxInit_real_T(&c, 1);
  if (l_strcmp(rhofunc)) {
    /*  Tukey's biweight is strictly increasing on [0 c] and constant (equal to
     * c^2/6) on [c \infty) */
    /*  E(\rho) = kc = (c^2/6)*bdp = TBrho(c,c)*bdp, being kc the K of Rousseeuw
     */
    /*  and Leroy (1987) */
    /*  Compute tuning constant associated to the requested breakdown */
    /*  point */
    /*  For bdp =0.5 and Tukey biweight rho function c1=0.4046 */
    /*  Remark: given that in function OPTbdp rho function is defined in the
     * interval 0---2c/3, 2c/3---3c/3, >3c/3 */
    /*  it is necessary to divide the output of OPTbdp by 3 */
    b_c = TBbdp(bdp);
    /*  kc1 = E(rho) = sup(rho)*bdp */
    /* TBrho computes rho function for Tukey's biweight */
    /*  */
    /* <a href="matlab: docsearchFS('TBrho')">Link to the help function</a> */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*     u:         scaled residuals or Mahalanobis distances. Vector. n x 1
     */
    /*                vector containing residuals or Mahalanobis distances */
    /*                for the n units of the sample */
    /*     c :        tuning parameter. Scalar. Scalar greater than 0 which */
    /*                controls the robustness/efficiency of the estimator */
    /*                (beta in regression or mu in the location case ...)  */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*   Output: */
    /*  */
    /*    rhoTB :      n x 1 vector which contains the Tukey's biweight rho */
    /*                 associated to the residuals or Mahalanobis distances for
     */
    /*                 the n units of the sample. */
    /*  */
    /*  More About: */
    /*  */
    /*  function TBrho transforms vector u as follows  */
    /*  \[ */
    /*  TBrho(u)= \left\{ */
    /*     \begin{array}{cc} */
    /*   (c^2/6) \left\{ 1-[1-(u/c)^2]^3 \right\}  &  |u/c| \leq 1  \\ */
    /*   (c^2/6)                      &  |u/c| >1   \\ */
    /*  \end{array} */
    /*     \right. */
    /*   \] */
    /*    */
    /*  See equation (2.37) p. 29 of Maronna et al. (2006). */
    /*  Remark: equation (2.37) is written in standardized terms in such a way
     */
    /*  that $\rho(c)=1$, so it is the previous expression divided by $(c^2/6)$
     */
    /*  */
    /*  See also HYPrho, HArho, OPTrho */
    /*  */
    /*  References: */
    /*  */
    /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust Statistics,
     * Theory */
    /*  and Methods", Wiley, New York. */
    /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency factors and
     */
    /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387. */
    /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /* <a href="matlab: docsearchFS('TBrho')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  Examples: */
    /* { */
    /*     % Plot of rho function. */
    /*     close all */
    /*     x=-6:0.01:6; */
    /*     rhoTB=TBrho(x,2); */
    /*     plot(x,rhoTB,'LineWidth',2) */
    /*     xlabel('$u$','Interpreter','Latex') */
    /*     ylabel('$\rho (u,2)$','Interpreter','Latex') */
    /*     text(x(1)-0.8,rhoTB(1),'c^2/6') */
    /*     text(x(end)+0.2,rhoTB(end),'c^2/6') */
    /*     title('$\rho (u,c)$','Interpreter','Latex') */
    /*     hold('on') */
    /*     c=2; */
    /*     stem(c,c^2/6,'LineStyle',':','LineWidth',1) */
    /*     stem(-c,c^2/6,'LineStyle',':','LineWidth',1) */
    /*  */
    /* } */
    /* { */
    /*     %% Compare two rho functions for 2 different values of c.   */
    /*     % In the first we fix the bdp (value of efficiency is automatically
     * given), */
    /*     % while in the second we find the efficiency (the value of bdp is */
    /*     % automatically given) */
    /*     close all */
    /*     x=-6:0.01:6; */
    /*     lwd=2; */
    /*     hold('on') */
    /*     c=TBbdp(0.5,1); */
    /*     rhoTB=TBrho(x,c); */
    /*     rhoTB=rhoTB/max(rhoTB); */
    /*     plot(x,rhoTB,'LineStyle','-','LineWidth',lwd) */
    /*     c=TBeff(0.95,1); */
    /*     rhoTB=TBrho(x,c); */
    /*     rhoTB=rhoTB/max(rhoTB); */
    /*     plot(x,rhoTB,'LineStyle','-.','LineWidth',lwd) */
    /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
    /*     ylabel('TB. Normalized
     * $\rho_c(x)$','Interpreter','Latex','FontSize',20) */
    /*     legend({'$c_{(bdp=0.5 \mapsto eff=0.29)}$', '$c_{(eff=0.95 \mapsto
     * bdp=0.12)}$'},'Interpreter','Latex','Location','SouthEast','FontSize',16)
     */
    /* } */
    /*  Beginning of code */
    /*  MATLAB Ccoder instruction to enforce that c is a scalar */
    b_w = (fabs(b_c) <= b_c);
    kdef = rt_powd_snf(b_c, 2.0);
    diffbdp = rt_powd_snf(b_c, 4.0);
    diffk = b_c * b_c;
    kc = (kdef / 2.0 * ((1.0 - kdef / diffk) + diffbdp / (3.0 * diffbdp)) *
              (double)b_w +
          (1.0 - (double)b_w) * (diffk / 6.0)) *
         bdp;
    i = psifunc_c1->size[0];
    psifunc_c1->size[0] = 1;
    emxEnsureCapacity_real_T(psifunc_c1, i);
    psifunc_c1_data = psifunc_c1->data;
    psifunc_c1_data[0] = b_c;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'T';
    psifunc_class_data[1] = 'B';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else if (m_strcmp(rhofunc)) {
    /*  Optimal rho function is strictly increasing on [0 3c] and constant
     * (equal to 3.25c^2) on [3c \infty) */
    /*  E(\rho) = kc = (3.25c^2)*bdp = TBrho(3*c,c)*bdp, being kc the K of */
    /*  Rousseeuw and Leroy (1987) */
    /*  Compute tuning constant associated to the requested breakdown */
    /*  point */
    /*  For bdp =0.5 and optimal rho function c1=0.4046 */
    /*  Remark: given that in function OPTbdp rho function is defined in the
     * interval 0---2c/3, 2c/3---3c/3, >3c/3 */
    /*  it is necessary to divide the output of OPTbdp by 3 */
    b_c = OPTbdp(bdp) / 3.0;
    /*  kc1 = E(rho) = sup(rho)*bdp */
    kc = OPTrho(3.0 * b_c, b_c) * bdp;
    i = psifunc_c1->size[0];
    psifunc_c1->size[0] = 1;
    emxEnsureCapacity_real_T(psifunc_c1, i);
    psifunc_c1_data = psifunc_c1->data;
    psifunc_c1_data[0] = b_c;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 3;
    psifunc_class_data[0] = 'O';
    psifunc_class_data[1] = 'P';
    psifunc_class_data[2] = 'T';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  } else if (n_strcmp(rhofunc)) {
    if ((rhofuncparam->size[0] == 0) || (rhofuncparam->size[1] == 0)) {
      kdef = 4.5;
    } else {
      kdef = rhofuncparam_data[0];
      /*  Instruction necessary for Ccoder */
    }
    i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
    out->rhofuncparam->size[0] = 1;
    out->rhofuncparam->size[1] = 1;
    emxEnsureCapacity_real_T(out->rhofuncparam, i);
    out->rhofuncparam->data[0] = kdef;
    /*  Use (if possible) precalculated values of c,A,b,d and kc */
    for (k = 0; k < 50; k++) {
      varargin_1[k] = fabs(bdp - dv5[k]);
    }
    e_minimum(varargin_1, &diffbdp, &k);
    b_varargin_1[0] = fabs(kdef - 4.0);
    b_varargin_1[1] = fabs(kdef - 4.5);
    b_varargin_1[2] = fabs(kdef - 5.0);
    f_minimum(b_varargin_1, &diffk, &nx);
    if ((diffbdp < 1.0E-6) && (diffk < 1.0E-6)) {
      /*  Load precalculated values of tuning constants */
      for (i = 0; i < 5; i++) {
        row[i] = dv6[((k + 50 * (i + 1)) + 300 * (nx - 1)) - 1];
      }
      b_c = row[0];
      A = row[1];
      B = row[2];
      d = row[3];
      kc = row[4];
      /*      % Use (if possible) precalculated values of c,A,b,d and kc */
      /*      if kdef == 4 && bdp==0.5 */
      /*          c =2.158325031399727; */
      /*          A =1.627074124322223e-04; */
      /*          B =0.006991738279441; */
      /*          d =0.016982948780061; */
      /*          kc=0.010460153813287; */
      /*  */
      /*      elseif kdef == 4.5 && bdp==0.5 */
      /*          c =2.010311082005501; */
      /*          A =0.008931591866092; */
      /*          B =0.051928487236632; */
      /*          d =0.132017481327058; */
      /*          kc=0.074478627985759; */
      /*      elseif kdef == 5 && bdp==0.5 */
      /*          c =1.900709968805313; */
      /*          A =0.023186529890225; */
      /*          B =0.083526860351552; */
      /*          d =0.221246910095216; */
      /*          kc=0.116380290077336; */
      /*      elseif kdef == 4.5 && bdp==0.25 */
      /*          c =2.679452645778656; */
      /*          A =0.464174145115400; */
      /*          B =0.588821276233494; */
      /*          d =1.092639541625978; */
      /*          kc=0.410853066399912; */
    }
    row[0] = b_c;
    row[1] = kdef;
    row[2] = A;
    row[3] = B;
    row[4] = d;
    i = psifunc_c1->size[0];
    psifunc_c1->size[0] = 5;
    emxEnsureCapacity_real_T(psifunc_c1, i);
    psifunc_c1_data = psifunc_c1->data;
    for (i = 0; i < 5; i++) {
      psifunc_c1_data[i] = row[i];
    }
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 3;
    psifunc_class_data[0] = 'H';
    psifunc_class_data[1] = 'Y';
    psifunc_class_data[2] = 'P';
  } else if (o_strcmp(rhofunc)) {
    if ((rhofuncparam->size[0] == 0) || (rhofuncparam->size[1] == 0)) {
      i = abc->size[0];
      abc->size[0] = 3;
      emxEnsureCapacity_real_T(abc, i);
      abc_data = abc->data;
      abc_data[0] = 2.0;
      abc_data[1] = 4.0;
      abc_data[2] = 8.0;
    } else {
      i = abc->size[0];
      abc->size[0] = rhofuncparam->size[0];
      emxEnsureCapacity_real_T(abc, i);
      abc_data = abc->data;
      loop_ub = rhofuncparam->size[0];
      for (i = 0; i < loop_ub; i++) {
        abc_data[i] = rhofuncparam_data[i];
      }
    }
    i = out->rhofuncparam->size[0] * out->rhofuncparam->size[1];
    out->rhofuncparam->size[0] = abc->size[0];
    out->rhofuncparam->size[1] = 1;
    emxEnsureCapacity_real_T(out->rhofuncparam, i);
    loop_ub = abc->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->rhofuncparam->data[i] = abc_data[i];
    }
    /*  Compute tuning constant associated to the requested breakdown */
    /*  point */
    b_c = HAbdp(bdp, abc);
    /*  kc = E(rho) = sup(rho)*bdp */
    i = c->size[0];
    c->size[0] = abc->size[0] + 1;
    emxEnsureCapacity_real_T(c, i);
    Xb_data = c->data;
    Xb_data[0] = b_c;
    loop_ub = abc->size[0];
    for (i = 0; i < loop_ub; i++) {
      Xb_data[i + 1] = abc_data[i];
    }
    kc = HArho(b_c * abc_data[2], c) * bdp;
    i = psifunc_c1->size[0];
    psifunc_c1->size[0] = abc->size[0] + 1;
    emxEnsureCapacity_real_T(psifunc_c1, i);
    psifunc_c1_data = psifunc_c1->data;
    psifunc_c1_data[0] = b_c;
    loop_ub = abc->size[0];
    for (i = 0; i < loop_ub; i++) {
      psifunc_c1_data[i + 1] = abc_data[i];
    }
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'H';
    psifunc_class_data[1] = 'A';
  } else if (p_strcmp(rhofunc)) {
    /*  minimum density power divergence estimator */
    /* PDbdp finds the constant alpha associated to the supplied breakdown point
     * for minimum power divergence estimator */
    /*  */
    /* <a href="matlab: docsearchFS('PDbdp')">Link to the help function</a> */
    /*  */
    /*   Required input arguments: */
    /*  */
    /*       bdp    : breakdown point. Scalar. Scalar defining breakdown point
     */
    /*                (i.e a number between 0 and 0.5) */
    /*                Data Types - single|double */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*  Output: */
    /*  */
    /*   alpha : Requested tuning constant. Scalar. Tuning constatnt of minimum
     */
    /*            power divergence estimator associated to requested breakdown
     * point */
    /*  */
    /*  See also: TBbdp, OPTbdp, HYPbdp, HAbdp */
    /*  */
    /*  References: */
    /*   */
    /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020), Robust
     */
    /*   Regression with Density Power Divergence: Theory, Comparisons and Data
     */
    /*   Analysis, submitted. */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /* <a href="matlab: docsearchFS('PDbdp')">Link to the help page for this
     * function</a> */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  */
    /*  Examples: */
    /*  */
    /* { */
    /*     % Find alpha given bdp. */
    /*     % The constant alpha associated to a breakdown point of 30% in
     * regression is  */
    /*     % alpha=1.040816326530613 */
    /*     alpha=PDbdp(0.3) */
    /* } */
    /*  */
    /*  Beginning of code */
    /*  Convergence condition is E(\rho) = sup(\rho(x)) bdp */
    /*   where sup(\rho(x)) is 1 */
    /*  kc1 = E(rho) = sup(rho)*bdp */
    kc = bdp;
    i = psifunc_c1->size[0];
    psifunc_c1->size[0] = 1;
    emxEnsureCapacity_real_T(psifunc_c1, i);
    psifunc_c1_data = psifunc_c1->data;
    psifunc_c1_data[0] = 1.0 / rt_powd_snf(1.0 - bdp, 2.0) - 1.0;
    psifunc_class_size[0] = 1;
    psifunc_class_size[1] = 2;
    psifunc_class_data[0] = 'P';
    psifunc_class_data[1] = 'D';
    out->rhofuncparam->size[0] = 0;
    out->rhofuncparam->size[1] = 0;
  }
  emxInit_real_T(&bestbetas, 2);
  loop_ub_tmp = (int)bestr;
  i = bestbetas->size[0] * bestbetas->size[1];
  bestbetas->size[0] = (int)bestr;
  bestbetas->size[1] = (int)scalerw;
  emxEnsureCapacity_real_T(bestbetas, i);
  bestbetas_data = bestbetas->data;
  nx = (int)bestr * (int)scalerw;
  for (i = 0; i < nx; i++) {
    bestbetas_data[i] = 0.0;
  }
  emxInit_real_T(&bestsubset, 2);
  i = bestsubset->size[0] * bestsubset->size[1];
  bestsubset->size[0] = (int)bestr;
  bestsubset->size[1] = (int)scalerw;
  emxEnsureCapacity_real_T(bestsubset, i);
  bestsubset_data = bestsubset->data;
  for (i = 0; i < nx; i++) {
    bestsubset_data[i] = 0.0;
  }
  emxInit_real_T(&bestscales, 1);
  i = bestscales->size[0];
  bestscales->size[0] = (int)bestr;
  emxEnsureCapacity_real_T(bestscales, i);
  bestscales_data = bestscales->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    bestscales_data[i] = rtInf;
  }
  A = rtInf;
  /*  singsub = scalar which will contain the number of singular subsets which
   */
  /*  are extracted (that is the subsets of size p which are not full rank) */
  singsub = 0.0;
  /*  ij is a scalar used to ensure that the best first bestr non singular */
  /*  subsets are stored */
  ij = 1U;
  /*  Extract in the rows of matrix C the indexes of all required subsets */
  subsets(nsamp, n, scalerw, bc(n, scalerw), C, &d);
  C_data = C->data;
  /*  Store the indices in varargout */
  /*  initialise and start timer. */
  B = ceil(fmin(d / 100.0, 1000.0));
  nx = (int)B;
  time_size = (int)B;
  if (0 <= nx - 1) {
    memset(&time_data[0], 0, nx * sizeof(double));
  }
  i = (int)d;
  emxInit_real_T(&Xb, 2);
  emxInit_real_T(&beta, 1);
  emxInit_real_T(&resrw, 1);
  emxInit_boolean_T(&w, 1);
  for (b_i = 0; b_i < i; b_i++) {
    if (b_i + 1U <= (unsigned int)B) {
      b_tic();
    }
    /*  extract a subset of size p */
    loop_ub = C->size[1];
    nx = out->X->size[1];
    b_out = Xb->size[0] * Xb->size[1];
    Xb->size[0] = C->size[1];
    Xb->size[1] = out->X->size[1];
    emxEnsureCapacity_real_T(Xb, b_out);
    Xb_data = Xb->data;
    for (b_out = 0; b_out < nx; b_out++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xb_data[i1 + Xb->size[0] * b_out] =
            out->X->data[((int)C_data[b_i + C->size[0] * i1] +
                          out->X->size[0] * b_out) -
                         1];
      }
    }
    /*  beta estimate */
    loop_ub = C->size[1];
    b_out = c->size[0];
    c->size[0] = C->size[1];
    emxEnsureCapacity_real_T(c, b_out);
    Xb_data = c->data;
    for (b_out = 0; b_out < loop_ub; b_out++) {
      Xb_data[b_out] = b_y_data[(int)C_data[b_i + C->size[0] * b_out] - 1];
    }
    mldivide(Xb, c, beta);
    beta_data = beta->data;
    if ((!rtIsNaN(beta_data[0])) && (!rtIsInf(beta_data[0]))) {
      if (refsteps > 0.0) {
        /*  do the refsteps refining steps */
        /*  kc determines the breakdown point */
        /*  c is linked to the biweight function */
        b_out = abc->size[0];
        abc->size[0] = beta->size[0];
        emxEnsureCapacity_real_T(abc, b_out);
        abc_data = abc->data;
        loop_ub = beta->size[0] - 1;
        for (b_out = 0; b_out <= loop_ub; b_out++) {
          abc_data[b_out] = beta_data[b_out];
        }
        IRWLSregS(b_y, out->X, abc, psifunc_c1, kc, psifunc_class_data,
                  psifunc_class_size, refsteps, reftol, beta, &scalerw, c);
        beta_data = beta->data;
        mtimes(out->X, beta, resrw);
        loop_ub = b_y->size[0];
        if (b_y->size[0] == resrw->size[0]) {
          b_out = resrw->size[0];
          resrw->size[0] = b_y->size[0];
          emxEnsureCapacity_real_T(resrw, b_out);
          resrw_data = resrw->data;
          for (b_out = 0; b_out < loop_ub; b_out++) {
            resrw_data[b_out] = b_y_data[b_out] - resrw_data[b_out];
          }
        } else {
          b_minus(resrw, b_y);
          resrw_data = resrw->data;
        }
      } else {
        /*  no refining steps */
        mtimes(out->X, beta, resrw);
        loop_ub = b_y->size[0];
        if (b_y->size[0] == resrw->size[0]) {
          b_out = resrw->size[0];
          resrw->size[0] = b_y->size[0];
          emxEnsureCapacity_real_T(resrw, b_out);
          resrw_data = resrw->data;
          for (b_out = 0; b_out < loop_ub; b_out++) {
            resrw_data[b_out] = b_y_data[b_out] - resrw_data[b_out];
          }
        } else {
          b_minus(resrw, b_y);
          resrw_data = resrw->data;
        }
        nx = resrw->size[0];
        b_out = abc->size[0];
        abc->size[0] = resrw->size[0];
        emxEnsureCapacity_real_T(abc, b_out);
        abc_data = abc->data;
        for (k = 0; k < nx; k++) {
          abc_data[k] = fabs(resrw_data[k]);
        }
        scalerw = median(abc) / 0.6745;
      }
      /*  to find s, save first the best bestr scales (deriving from non */
      /*  singular subsets) and, from iteration bestr+1 (associated to */
      /*  another non singular subset), replace the worst scale */
      /*  with a better one as follows */
      if (ij > bestr) {
        /*  compute the objective function using current residuals and */
        /*  the worst estimate of the scale among the bests previously */
        /*  stored */
        /*  scaletest = (1/n) \sum_i=1^n (u_i/(sworst*c)) */
        /*  Use function handle hrho. For example if */
        /*  for optimal psi hrho=OPTrho */
        if (q_strcmp(psifunc_class_data, psifunc_class_size)) {
          b_out = c->size[0];
          c->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(c, b_out);
          Xb_data = c->data;
          loop_ub = resrw->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            Xb_data[b_out] = resrw_data[b_out] / A;
          }
          /* TBrho computes rho function for Tukey's biweight */
          /*  */
          /* <a href="matlab: docsearchFS('TBrho')">Link to the help
           * function</a> */
          /*  */
          /*   Required input arguments: */
          /*  */
          /*     u:         scaled residuals or Mahalanobis distances. Vector. n
           * x 1 */
          /*                vector containing residuals or Mahalanobis distances
           */
          /*                for the n units of the sample */
          /*     c :        tuning parameter. Scalar. Scalar greater than 0
           * which */
          /*                controls the robustness/efficiency of the estimator
           */
          /*                (beta in regression or mu in the location case ...)
           */
          /*  */
          /*   Optional input arguments: */
          /*  */
          /*   Output: */
          /*  */
          /*    rhoTB :      n x 1 vector which contains the Tukey's biweight
           * rho */
          /*                 associated to the residuals or Mahalanobis
           * distances for */
          /*                 the n units of the sample. */
          /*  */
          /*  More About: */
          /*  */
          /*  function TBrho transforms vector u as follows  */
          /*  \[ */
          /*  TBrho(u)= \left\{ */
          /*     \begin{array}{cc} */
          /*   (c^2/6) \left\{ 1-[1-(u/c)^2]^3 \right\}  &  |u/c| \leq 1  \\ */
          /*   (c^2/6)                      &  |u/c| >1   \\ */
          /*  \end{array} */
          /*     \right. */
          /*   \] */
          /*    */
          /*  See equation (2.37) p. 29 of Maronna et al. (2006). */
          /*  Remark: equation (2.37) is written in standardized terms in such a
           * way */
          /*  that $\rho(c)=1$, so it is the previous expression divided by
           * $(c^2/6)$ */
          /*  */
          /*  See also HYPrho, HArho, OPTrho */
          /*  */
          /*  References: */
          /*  */
          /*  Maronna, R.A., Martin D. and Yohai V.J. (2006), "Robust
           * Statistics, Theory */
          /*  and Methods", Wiley, New York. */
          /*  Riani, M., Cerioli, A. and Torti, F. (2014), On consistency
           * factors and */
          /*  efficiency of robust S-estimators, "TEST", Vol. 23, pp. 356-387.
           */
          /*  http://dx.doi.org/10.1007/s11749-014-0357-7 */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('TBrho')">Link to the help page for
           * this function</a> */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*  Examples: */
          /* { */
          /*     % Plot of rho function. */
          /*     close all */
          /*     x=-6:0.01:6; */
          /*     rhoTB=TBrho(x,2); */
          /*     plot(x,rhoTB,'LineWidth',2) */
          /*     xlabel('$u$','Interpreter','Latex') */
          /*     ylabel('$\rho (u,2)$','Interpreter','Latex') */
          /*     text(x(1)-0.8,rhoTB(1),'c^2/6') */
          /*     text(x(end)+0.2,rhoTB(end),'c^2/6') */
          /*     title('$\rho (u,c)$','Interpreter','Latex') */
          /*     hold('on') */
          /*     c=2; */
          /*     stem(c,c^2/6,'LineStyle',':','LineWidth',1) */
          /*     stem(-c,c^2/6,'LineStyle',':','LineWidth',1) */
          /*  */
          /* } */
          /* { */
          /*     %% Compare two rho functions for 2 different values of c.   */
          /*     % In the first we fix the bdp (value of efficiency is
           * automatically given), */
          /*     % while in the second we find the efficiency (the value of bdp
           * is */
          /*     % automatically given) */
          /*     close all */
          /*     x=-6:0.01:6; */
          /*     lwd=2; */
          /*     hold('on') */
          /*     c=TBbdp(0.5,1); */
          /*     rhoTB=TBrho(x,c); */
          /*     rhoTB=rhoTB/max(rhoTB); */
          /*     plot(x,rhoTB,'LineStyle','-','LineWidth',lwd) */
          /*     c=TBeff(0.95,1); */
          /*     rhoTB=TBrho(x,c); */
          /*     rhoTB=rhoTB/max(rhoTB); */
          /*     plot(x,rhoTB,'LineStyle','-.','LineWidth',lwd) */
          /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
          /*     ylabel('TB. Normalized
           * $\rho_c(x)$','Interpreter','Latex','FontSize',20) */
          /*     legend({'$c_{(bdp=0.5 \mapsto eff=0.29)}$', '$c_{(eff=0.95
           * \mapsto
           * bdp=0.12)}$'},'Interpreter','Latex','Location','SouthEast','FontSize',16)
           */
          /* } */
          /*  Beginning of code */
          /*  MATLAB Ccoder instruction to enforce that c is a scalar */
          nx = c->size[0];
          b_out = abc->size[0];
          abc->size[0] = c->size[0];
          emxEnsureCapacity_real_T(abc, b_out);
          abc_data = abc->data;
          for (k = 0; k < nx; k++) {
            abc_data[k] = fabs(Xb_data[k]);
          }
          b_out = w->size[0];
          w->size[0] = abc->size[0];
          emxEnsureCapacity_boolean_T(w, b_out);
          w_data = w->data;
          loop_ub = abc->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            w_data[b_out] = (abc_data[b_out] <= psifunc_c1_data[0]);
          }
          diffbdp = psifunc_c1_data[0] * psifunc_c1_data[0];
          b_out = out->residuals->size[0];
          out->residuals->size[0] = c->size[0];
          emxEnsureCapacity_real_T(out->residuals, b_out);
          loop_ub = c->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            kdef = Xb_data[b_out];
            out->residuals->data[b_out] = kdef * kdef;
          }
          b_c = rt_powd_snf(psifunc_c1_data[0], 4.0);
          diffk = diffbdp / 6.0;
          b_out = abc->size[0];
          abc->size[0] = c->size[0];
          emxEnsureCapacity_real_T(abc, b_out);
          abc_data = abc->data;
          loop_ub = c->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            kdef = Xb_data[b_out];
            abc_data[b_out] = rt_powd_snf(kdef, 4.0);
          }
          if (out->residuals->size[0] == 1) {
            loop_ub = abc->size[0];
          } else {
            loop_ub = out->residuals->size[0];
          }
          if (out->residuals->size[0] == 1) {
            nx = abc->size[0];
          } else {
            nx = out->residuals->size[0];
          }
          if (out->residuals->size[0] == 1) {
            b_out = abc->size[0];
          } else {
            b_out = out->residuals->size[0];
          }
          if (b_out == 1) {
            b_out = w->size[0];
          } else if (out->residuals->size[0] == 1) {
            b_out = abc->size[0];
          } else {
            b_out = out->residuals->size[0];
          }
          if ((out->residuals->size[0] == abc->size[0]) &&
              (out->residuals->size[0] == loop_ub) && (nx == w->size[0]) &&
              (b_out == w->size[0])) {
            kdef = 3.0 * b_c;
            loop_ub = out->residuals->size[0];
            for (b_out = 0; b_out < loop_ub; b_out++) {
              out->residuals->data[b_out] =
                  out->residuals->data[b_out] / 2.0 *
                      ((1.0 - out->residuals->data[b_out] / diffbdp) +
                       abc_data[b_out] / kdef) *
                      (double)w_data[b_out] +
                  (1.0 - (double)w_data[b_out]) * diffk;
            }
          } else {
            af_binary_expand_op(out, diffbdp, abc, b_c, w, diffk);
          }
          scaletest =
              blockedSummation(out->residuals, out->residuals->size[0]) /
              (double)out->residuals->size[0];
        } else if (r_strcmp(psifunc_class_data, psifunc_class_size)) {
          b_out = c->size[0];
          c->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(c, b_out);
          Xb_data = c->data;
          loop_ub = resrw->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            Xb_data[b_out] = resrw_data[b_out] / A;
          }
          b_OPTrho(c, psifunc_c1, abc);
          scaletest =
              blockedSummation(abc, abc->size[0]) / (double)abc->size[0];
        } else if (s_strcmp(psifunc_class_data, psifunc_class_size)) {
          b_out = c->size[0];
          c->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(c, b_out);
          Xb_data = c->data;
          loop_ub = resrw->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            Xb_data[b_out] = resrw_data[b_out] / A;
          }
          b_HArho(c, psifunc_c1, abc);
          scaletest =
              blockedSummation(abc, abc->size[0]) / (double)abc->size[0];
        } else if (t_strcmp(psifunc_class_data, psifunc_class_size)) {
          b_out = c->size[0];
          c->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(c, b_out);
          Xb_data = c->data;
          loop_ub = resrw->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            Xb_data[b_out] = resrw_data[b_out] / A;
          }
          HYPrho(c, psifunc_c1, abc);
          scaletest =
              blockedSummation(abc, abc->size[0]) / (double)abc->size[0];
        } else if (u_strcmp(psifunc_class_data, psifunc_class_size)) {
          /* PDrho computes rho function for minimum density power divergence
           * estimator  */
          /*  */
          /* <a href="matlab: docsearchFS('PDrho')">Link to the help
           * function</a> */
          /*  */
          /*   Required input arguments: */
          /*  */
          /*     u:         scaled residuals or Mahalanobis distances. Vector. n
           * x 1 */
          /*                vector containing residuals or Mahalanobis distances
           */
          /*                for the n units of the sample */
          /*     alpha :    tuning parameter. Scalar. Scalar in the interval
           * (0,1] which */
          /*                controls the robustness/efficiency of the estimator
           */
          /*                (beta in regression or mu in the location case ...).
           * The */
          /*                greater is alpha the greater is the bdp and smaller
           * is the */
          /*                efficiency. */
          /*  */
          /*   Optional input arguments: */
          /*  */
          /*   Output: */
          /*  */
          /*    rhoPD :      n x 1 vector which contains the Minimum density
           * power */
          /*                divergence rho */
          /*                 function associated to the residuals or Mahalanobis
           */
          /*                 distances for the n units of the sample. */
          /*  */
          /*  More About: */
          /*  */
          /*  function PDrho transforms vector u as follows  */
          /*  \[ */
          /*  PDrho(u,alpha)=  1-\exp(-\alpha (u^2/2)); */
          /*       \] */
          /*    */
          /*  */
          /*  See also TBrho, HYPrho, HArho, OPTrho, HUrho */
          /*  */
          /*  References: */
          /*  */
          /*   Riani, M. Atkinson, A.C., Corbellini A. and Perrotta A. (2020),
           * Robust */
          /*   Regression with Density Power Divergence: Theory, Comparisons and
           * Data */
          /*   Analysis, submitted. */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('PDrho')">Link to the help page for
           * this function</a> */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*  Examples: */
          /* { */
          /*     % Plot of rho function. */
          /*     close all */
          /*     x=-6:0.01:6; */
          /*     alpha=1; */
          /*     rhoPD=PDrho(x,alpha); */
          /*     plot(x,rhoPD,'LineWidth',2) */
          /*     xlabel('$u$','Interpreter','Latex') */
          /*     ylabel('$\rho (u,1)$','Interpreter','Latex') */
          /*  */
          /* } */
          /* { */
          /*     %% Compare two rho functions for 2 different values of alpha.
           */
          /*     % In the first we fix the bdp (value of efficiency is
           * automatically given), */
          /*     % while in the second we find the efficiency (the value of bdp
           * is */
          /*     % automatically given) */
          /*     close all */
          /*     x=-6:0.01:6; */
          /*     lwd=2; */
          /*     alpha1=1; */
          /*     bdp1=1-1/sqrt(1+alpha1); */
          /*     eff1=(sqrt(1+2*alpha1)/(1+alpha1))^3; */
          /*     hold('on') */
          /*     rhoPD=PDrho(x,alpha1); */
          /*     plot(x,rhoPD,'LineStyle','-','LineWidth',lwd) */
          /*     alpha2=0.5; */
          /*     bdp2=1-1/sqrt(1+alpha2); */
          /*     eff2=(sqrt(1+2*alpha2)/(1+alpha2))^3; */
          /*     rhoPD=PDrho(x,alpha2); */
          /*     plot(x,rhoPD,'LineStyle','-.','LineWidth',lwd) */
          /*     xlabel('$x$','Interpreter','Latex','FontSize',16) */
          /*     ylabel('MDPD. Normalized
           * $\rho_\alpha(x)$','Interpreter','Latex','FontSize',20) */
          /*     legend({['$\alpha=' num2str(alpha1) '\mapsto bdp='
           * num2str(bdp1,2) '\;  eff=' num2str(eff1,2) '$'], ... */
          /*        ['$\alpha=' num2str(alpha2) '\mapsto bdp=' num2str(bdp2,2)
           * '\;  eff=' num2str(eff2,2) '$']},... */
          /*        'Interpreter','Latex','Location','SouthEast','FontSize',12)
           */
          /* } */
          /*  Beginning of code */
          /*  MATLAB Ccoder instruction to enforce that alpha is a scalar */
          b_out = abc->size[0];
          abc->size[0] = resrw->size[0];
          emxEnsureCapacity_real_T(abc, b_out);
          abc_data = abc->data;
          loop_ub = resrw->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            kdef = resrw_data[b_out] / A;
            abc_data[b_out] = kdef * kdef;
          }
          loop_ub = abc->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            abc_data[b_out] = -psifunc_c1_data[0] * (abc_data[b_out] / 2.0);
          }
          nx = abc->size[0];
          for (k = 0; k < nx; k++) {
            abc_data[k] = exp(abc_data[k]);
          }
          loop_ub = abc->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            abc_data[b_out] = 1.0 - abc_data[b_out];
          }
          scaletest =
              blockedSummation(abc, abc->size[0]) / (double)abc->size[0];
        }
        if (scaletest < kc) {
          /*  Find position of the maximum value of previously stored */
          /*  best scales */
          c_maximum(bestscales, &kdef, &k);
          bestscales_data[k - 1] =
              Mscale(resrw, psifunc_c1, kc, psifunc_class_data,
                     psifunc_class_size, scalerw, minsctol);
          /* sbest1 = Mscale1(resrw,psifunc,scalerw,minsctol); */
          /* sbest2 = minscale(resrw,psifunc.c1,psifunc.kc1,scalerw,minsctol);
           */
          /* [sbest sbest1 sbest2] */
          /*  Store sbest, betarw and indexes of the units forming the */
          /*  best subset associated with minimum value */
          /*  of the scale */
          loop_ub = beta->size[0];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            bestbetas_data[(k + bestbetas->size[0] * b_out) - 1] =
                beta_data[b_out];
          }
          /*  best subset */
          loop_ub = C->size[1];
          for (b_out = 0; b_out < loop_ub; b_out++) {
            bestsubset_data[(k + bestsubset->size[0] * b_out) - 1] =
                C_data[b_i + C->size[0] * b_out];
          }
          /*  sworst = the best scale among the bestr found up to now */
          A = b_maximum(bestscales);
        }
      } else {
        /* bestscales(ij) = minscale(resrw,psifunc,scalerw,minsctol); */
        bestscales_data[(int)ij - 1] =
            Mscale(resrw, psifunc_c1, kc, psifunc_class_data,
                   psifunc_class_size, scalerw, minsctol);
        loop_ub = beta->size[0];
        for (b_out = 0; b_out < loop_ub; b_out++) {
          bestbetas_data[((int)ij + bestbetas->size[0] * b_out) - 1] =
              beta_data[b_out];
        }
        loop_ub = C->size[1];
        for (b_out = 0; b_out < loop_ub; b_out++) {
          bestsubset_data[((int)ij + bestsubset->size[0] * b_out) - 1] =
              C_data[b_i + C->size[0] * b_out];
        }
        ij++;
      }
    } else {
      singsub++;
    }
    /*  Write total estimate time to compute final estimate */
    if (b_i + 1U <= (unsigned int)B) {
      /*  sampling time until step tsampling */
      time_data[b_i] = b_toc();
    } else if ((b_i + 1U == (unsigned int)((int)B + 1)) && msg) {
      /*  stop sampling and print the estimated time */
      b_time_data.data = &time_data[0];
      b_time_data.size = &time_size;
      b_time_data.allocatedSize = 1000;
      b_time_data.numDimensions = 1;
      b_time_data.canFreeData = false;
      Rprintf("Total estimated time to complete S estimate: %5.2f seconds \n",
             d * median(&b_time_data));
      //fflush(stdout);
    }
  }
  emxFree_real_T(&Xb);
  emxFree_real_T(&bestscales);
  /*  perform C-steps on best 'bestr' solutions, till convergence or for a */
  /*  maximum of refstepsbestr steps using a convergence tolerance as specified
   */
  /*  by scalar reftolbestr */
  kdef = rtInf;
  /*  Initializations necessary for MATLAB Ccoder */
  loop_ub = bestbetas->size[1];
  i = abc->size[0];
  abc->size[0] = bestbetas->size[1];
  emxEnsureCapacity_real_T(abc, i);
  abc_data = abc->data;
  for (i = 0; i < loop_ub; i++) {
    abc_data[i] = bestbetas_data[bestbetas->size[0] * i];
  }
  loop_ub = bestsubset->size[1];
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = bestsubset->size[1];
  emxEnsureCapacity_real_T(out->bs, i);
  for (i = 0; i < loop_ub; i++) {
    out->bs->data[i] = bestsubset_data[bestsubset->size[0] * i];
  }
  i = out->weights->size[0];
  out->weights->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(out->weights, i);
  loop_ub = b_y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->weights->data[i] = b_y_data[i];
  }
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    loop_ub = bestbetas->size[1];
    i = resrw->size[0];
    resrw->size[0] = bestbetas->size[1];
    emxEnsureCapacity_real_T(resrw, i);
    resrw_data = resrw->data;
    for (i = 0; i < loop_ub; i++) {
      resrw_data[i] = bestbetas_data[b_i + bestbetas->size[0] * i];
    }
    IRWLSregS(b_y, out->X, resrw, psifunc_c1, kc, psifunc_class_data,
              psifunc_class_size, refstepsbestr, reftolbestr, beta, &scalerw,
              c);
    Xb_data = c->data;
    beta_data = beta->data;
    if (scalerw < kdef) {
      kdef = scalerw;
      loop_ub = beta->size[0];
      i = abc->size[0];
      abc->size[0] = beta->size[0];
      emxEnsureCapacity_real_T(abc, i);
      abc_data = abc->data;
      for (i = 0; i < loop_ub; i++) {
        abc_data[i] = beta_data[i];
      }
      loop_ub = bestsubset->size[1];
      i = out->bs->size[0] * out->bs->size[1];
      out->bs->size[0] = 1;
      out->bs->size[1] = bestsubset->size[1];
      emxEnsureCapacity_real_T(out->bs, i);
      for (i = 0; i < loop_ub; i++) {
        out->bs->data[i] = bestsubset_data[b_i + bestsubset->size[0] * i];
      }
      loop_ub = c->size[0];
      i = out->weights->size[0];
      out->weights->size[0] = c->size[0];
      emxEnsureCapacity_real_T(out->weights, i);
      for (i = 0; i < loop_ub; i++) {
        out->weights->data[i] = Xb_data[i];
      }
    }
  }
  emxFree_real_T(&c);
  emxFree_real_T(&resrw);
  emxFree_real_T(&beta);
  emxFree_real_T(&bestsubset);
  emxFree_real_T(&bestbetas);
  emxFree_real_T(&psifunc_c1);
  /*  Store in output structure \beta, s, best subset and vector of S-weights */
  i = out->beta->size[0];
  out->beta->size[0] = abc->size[0];
  emxEnsureCapacity_real_T(out->beta, i);
  loop_ub = abc->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = abc_data[i];
  }
  out->scale = kdef;
  /*  compute and store in output structure the S robust scaled residuals */
  mtimes(out->X, abc, out->residuals);
  i = out->fittedvalues->size[0];
  out->fittedvalues->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(out->fittedvalues, i);
  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->fittedvalues->data[i] = out->residuals->data[i];
  }
  if (b_y->size[0] == out->residuals->size[0]) {
    i = out->residuals->size[0];
    out->residuals->size[0] = b_y->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] = (b_y_data[i] - out->residuals->data[i]) / kdef;
    }
  } else {
    bf_binary_expand_op(out, b_y, kdef);
  }
  /*  Store in output structure the number of singular subsets */
  out->singsub = singsub;
  /*  Store in output structure the outliers found with confidence level conflev
   */
  out->conflev = conflev;
  kdef = (conflev + 1.0) / 2.0;
  emxInit_real_T(&seq, 2);
  Xb_data = seq->data;
  if (rtIsNaN(n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(seq, i);
    Xb_data = seq->data;
    Xb_data[0] = rtNaN;
  } else if (n < 1.0) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else if (rtIsInf(n) && (1.0 == n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(seq, i);
    Xb_data = seq->data;
    Xb_data[0] = rtNaN;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    loop_ub = (int)floor(n - 1.0);
    seq->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(seq, i);
    Xb_data = seq->data;
    for (i = 0; i <= loop_ub; i++) {
      Xb_data[i] = (double)i + 1.0;
    }
  }
  nx = out->residuals->size[0];
  i = abc->size[0];
  abc->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(abc, i);
  abc_data = abc->data;
  for (k = 0; k < nx; k++) {
    abc_data[k] = fabs(out->residuals->data[k]);
  }
  if ((kdef >= 0.0) && (kdef <= 1.0)) {
    kdef = -1.4142135623730951 * erfcinv(2.0 * kdef);
  } else {
    kdef = rtNaN;
  }
  i = w->size[0];
  w->size[0] = abc->size[0];
  emxEnsureCapacity_boolean_T(w, i);
  w_data = w->data;
  loop_ub = abc->size[0];
  for (i = 0; i < loop_ub; i++) {
    w_data[i] = (abc_data[i] > kdef);
  }
  emxFree_real_T(&abc);
  k = w->size[0] - 1;
  nx = 0;
  for (b_i = 0; b_i <= k; b_i++) {
    if (w_data[b_i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = nx;
  emxEnsureCapacity_int32_T(r, i);
  r1 = r->data;
  nx = 0;
  for (b_i = 0; b_i <= k; b_i++) {
    if (w_data[b_i]) {
      r1[nx] = b_i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&w);
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = r->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = Xb_data[r1[i] - 1];
  }
  emxFree_int32_T(&r);
  emxFree_real_T(&seq);
  i = out->rhofunc->size[0] * out->rhofunc->size[1];
  out->rhofunc->size[0] = rhofunc->size[0];
  out->rhofunc->size[1] = rhofunc->size[1];
  emxEnsureCapacity_char_T(out->rhofunc, i);
  loop_ub = rhofunc->size[0] * rhofunc->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->rhofunc->data[i] = rhofunc_data[i];
  }
  /*  In case of Hampel or hyperbolic tangent estimator store the additional */
  /*  parameters which have been used */
  /*  For Hampel store a vector of length 3 containing parameters a, b and c */
  /*  For hyperbolic store the value of k= sup CVC */
  if (yxsave) {
    if (intercept) {
      /*  Store X (without the column of ones if there is an intercept) */
      if (2 > out->X->size[1]) {
        i = 0;
        b_out = 0;
      } else {
        i = 1;
        b_out = out->X->size[1];
      }
      k = out->X->size[0] - 1;
      loop_ub = out->X->size[0];
      loop_ub_tmp = b_out - i;
      for (b_out = 0; b_out < loop_ub_tmp; b_out++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          out->X->data[i1 + (k + 1) * b_out] =
              out->X->data[i1 + out->X->size[0] * (i + b_out)];
        }
      }
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = k + 1;
      out->X->size[1] = loop_ub_tmp;
      emxEnsureCapacity_real_T(out->X, i);
    }
    /*  Store response */
    i = out->y->size[0] * out->y->size[1];
    out->y->size[0] = b_y->size[0];
    out->y->size[1] = 1;
    emxEnsureCapacity_real_T(out->y, i);
    loop_ub = b_y->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->y->data[i] = b_y_data[i];
    }
  } else {
    out->X->size[0] = 0;
    out->X->size[1] = 0;
    out->y->size[0] = 0;
    out->y->size[1] = 0;
  }
  emxFree_real_T(&b_y);
  out->class[0] = 'S';
  out->class[1] = 'r';
  out->class[2] = 'e';
  out->class[3] = 'g';
}

/* End of code generation (Sreg_wrapper.c) */
