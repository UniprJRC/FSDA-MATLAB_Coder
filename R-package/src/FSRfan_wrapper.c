/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRfan_wrapper.c
 *
 * Code generation for function 'FSRfan_wrapper'
 *
 */

#include <R.h>
/* Include files */
#include "FSRfan_wrapper.h"
#include "LXS.h"
#include "Score.h"
#include "ScoreYJ.h"
#include "ScoreYJall.h"
#include "cat.h"
#include "chkinputR.h"
#include "colon.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "int2str.h"
#include "mldivide.h"
#include "mtimes.h"
#include "normYJ.h"
#include "nullAssignment.h"
#include "rank.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "strcmp.h"
#include "subsets.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void FSRfan_wrapper(const emxArray_real_T *y, const emxArray_real_T *X,
                    bool intercept, bool nocheck, const emxArray_real_T *la,
                    double h, double nsamp, const emxArray_real_T *lms,
                    double init, const emxArray_char_T *family, bool msg,
                    struct_FSRfan_T *out)
{
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *d_y;
  emxArray_boolean_T *oldbsbT;
  emxArray_boolean_T *seq100boo;
  emxArray_char_T_1x310 c_mm;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r2;
  emxArray_real_T *Unlai;
  emxArray_real_T *Xb;
  emxArray_real_T *a;
  emxArray_real_T *b_r;
  emxArray_real_T *b_y;
  emxArray_real_T *blast;
  emxArray_real_T *bsb;
  emxArray_real_T *c_y;
  emxArray_real_T *nsampArray;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *seq;
  emxArray_real_T *unit;
  emxArray_real_T *yb;
  emxArray_real_T *z;
  emxArray_real_T *zb;
  struct_LXS_T expl_temp;
  double outSCpn_Score_data[4];
  double BoxCox;
  double b_expl_temp;
  double b_init;
  double n;
  double p;
  double sizes_tmp;
  int outSCpn_Score_size[2];
  int b_i;
  int b_loop_ub_tmp;
  unsigned int b_mm;
  int b_n;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int loop_ub_tmp;
  int mm;
  int nx;
  int sizes_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  bool guard1 = false;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  /*  Wrapper function for FSRfan. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]); */
  /*  X: an array of doubles of any dimensions */
  /*  ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]); */
  /*  Optional input arguments (name / pairs) */
  /*  intercept */
  /*  Optional input arguments (name / pairs) */
  /*  nocheck is a boolean */
  /*  la: a column vector of doubles of any length */
  /*  h a scalar double */
  /*  nsamp: a scalar of type double */
  /*  lms: an array of doubles of any dimensions */
  /*  even if generally will be just a scalar of type double */
  /*  init a scalar double */
  /*  family a char */
  /*  this char can only contain  */
  /*  'BoxCox'  'YJ', 'YJpn' or 'YJall'. */
  /*  This is something to ask RL */
  /*  assert(size(family,1) == 1); */
  /*  assert(all(size(family) <= [Inf Inf])); */
  /*  msg is a boolean */
  /* FSRfan monitors the values of the score test statistic for each lambda */
  /*  */
  /* <a href="matlab: docsearchFS('FSRfan')">Link to the help function</a> */
  /*  */
  /*  The transformations for negative and positive responses were determined */
  /*  by Yeo and Johnson (2000) by imposing the smoothness condition that the */
  /*  second derivative of zYJ(λ) with respect to y be smooth at y = 0. However
   */
  /*  some authors, for example Weisberg (2005), query the physical */
  /*  interpretability of this constraint which is oftern violated in data */
  /*  analysis. Accordingly, Atkinson et al (2019) and (2020) extend the */
  /*  Yeo-Johnson transformation to allow two values of the transformations */
  /*  parameter: $\lambda_N$ for negative observations and $\lambda_P$ for */
  /*  non-negative ones. */
  /*  FSRfan monitors: */
  /*  1) the t test associated with the constructed variable computed assuming
   */
  /*  the same transformation parameter for positive and negative observations
   */
  /*  fixed. In short we call this test, "global score test for positive */
  /*  observations". */
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
  /*  4) the F likelihood ratio test based on the MLE of $\lambda_P$ and */
  /*  $\lambda_N$. In this case the residual sum of squares of the null model */
  /*  bsaed on a single trasnformation parameter $\lambda$ is compared with the
   */
  /*  residual sum of squares of the model based on data transformed data using
   */
  /*  MLE of $\lambda_P$ and $\lambda_N$. */
  /*  */
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
  /*                Missing values (NaN's) and infinite values */
  /*                (Inf's) are allowed, since observations (rows) with missing
   * or */
  /*                infinite values will automatically be excluded from the */
  /*                computations. NOTICE THAT THE INTERCEPT MUST ALWAYS BE
   * INCLUDED. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*         family :   string which identifies the family of transformations
   * which */
  /*                    must be used. Character. Possible values are 'BoxCox' */
  /*                    (default), 'YJ', 'YJpn' or 'YJall'. */
  /*                    The Box-Cox family of power transformations equals */
  /*                    $(y^{\lambda}-1)/\lambda$ for $\lambda$ not equal to
   * zero, */
  /*                    and $\log(y)$ if $\lambda = 0$. */
  /*                    The Yeo-Johnson (YJ) transformation is the Box-Cox */
  /*                    transformation of $y+1$ for nonnegative values, and of
   */
  /*                    $|y|+1$ with parameter $2-\lambda$ for $y$ negative. */
  /*                    Remember that BoxCox can be used just */
  /*                    if input y is positive. Yeo-Johnson family of */
  /*                    transformations does not have this limitation. */
  /*                    If family is 'YJpn' Yeo-Johnson family is applied but in
   */
  /*                    this case it is also possible to monitor (in the output
   */
  /*                    arguments out.Scorep and out.Scoren) the score test */
  /*                    respectively for positive and negative observations. */
  /*                    If family is 'YJall', it is also possible to monitor */
  /*                    the joint F test for the presence of the two */
  /*                    constructed variables for positive and negative */
  /*                    observations. */
  /*                    Example - 'family','YJ' */
  /*                    Data Types - char */
  /*  */
  /*            h   :   The number of observations that have determined the */
  /*                    least trimmed (median of) squares estimator. Integer. */
  /*                    Generally h is an integer greater or equal than */
  /*                    [(n+size(X,2)+1)/2] but smaller then n */
  /*                    Example - 'h',5 */
  /*                    Data Types - double */
  /*  */
  /*        init    :   Search initialization. Scalar. */
  /*                    It specifies the initial subset size to start */
  /*                    monitoring the value of the score test, if init is not
   */
  /*                    specified it will be set equal to: */
  /*                     p+1, if the sample size is smaller than 40; */
  /*                     min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                     Example - 'init',100 starts monitoring from step m=100
   */
  /*                     Data Types - double */
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
  /*            la  :   values of the transformation parameter for which it is
   */
  /*                    necessary to compute the score test. Vector. */
  /*                    Default value of lambda is la=[-1 -0.5 0 0.5 1]; that */
  /*                    is the five most common values of lambda */
  /*                    Example - 'la',[-1 -0.5] */
  /*                    Data Types - double */
  /*  */
  /*        lms     :   Criterion to use to find the initlal */
  /*                  subset to initialize the search. Scalar or Vector. */
  /*                  If lms=1 (default) Least Median of Squares is */
  /*                  computed, else Least trimmed of Squares is computed. */
  /*                  If, lms is matrix with size */
  /*                  p-1+intercept-by-length(la) it contains in column */
  /*                  j=1,..., lenght(la) the list of units forming the initial
   */
  /*                  subset for the search associated with la(j). In this last
   */
  /*                  case previous input option nsamp is ignored. */
  /*                  Example - 'lms',1 */
  /*                  Data Types - double */
  /*  */
  /*          msg   : Level of output to display. Boolean. */
  /*                    Boolean scalar which controls whether to display or not
   */
  /*                    messages on the screen. */
  /*                    If msg==true (default) messages are */
  /*                    displayed on the screen about estimated time to compute
   */
  /*                    the LMS (LTS) for each value of lambda else no message
   */
  /*                    is displayed on the screen */
  /*                   Example - 'msg',false */
  /*                   Data Types - logical */
  /*  */
  /*        nocheck :   Check input arguments. Boolean. */
  /*                    If nocheck is equal to true no check is performed */
  /*                    on matrix y and matrix X. Notice that y and X are left
   */
  /*                    unchanged. In other words the additional column of ones
   */
  /*                    for the intercept is not added. As default
   * nocheck=false. */
  /*                    Example - 'nocheck',true */
  /*                    Data Types - boolean */
  /*  */
  /*        nsamp   :   Number of subsamples which will be extracted to find */
  /*                    the robust estimator. Scalar. */
  /*                    If nsamp=0 all subsets will be extracted. They will be
   */
  /*                    (n choose p). Remark: if the number of all possible */
  /*                    subset is <1000 the default is to extract all subsets */
  /*                    otherwise just 1000. If nsamp is a matrix of size */
  /*                    r-by-p, it contains in the rows the subsets which sill
   */
  /*                    have to be extracted. For example, if p=3 and nsamp=[ 2
   */
  /*                    4 9; 23 45 49; 90 34 1]; the first subset is made up of
   */
  /*                    units [2 4 9], the second subset of units [23 45 49] */
  /*                    and the third subset of units [90 34 1]; */
  /*                    Example - 'nsamp',1000 */
  /*                    Data Types - double */
  /*  */
  /*       scoremle: likelihood ratio test for the two different transformation
   */
  /*                 parameters $\lambda_P$ and $\lambda_N$. Boolean. */
  /*                 If scoremle is true it is possible to compute the */
  /*                 likelihood ratio test. In this case the residual sum of */
  /*                 squares of the null model bsaed on a single trasnformation
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
  /*                This option takes effect only when input option 'family' is
   */
  /*                'YJpn'  or 'YJall'. If usefmin is true or usefmin is a */
  /*                struct it is possible to use MATLAB solvers fminsearch or */
  /*                fminunc to find the maximum likelihood estimates of */
  /*                $\lambda_P$ and $\lambda_N$. The default value of usefmin */
  /*                is false that is solver is not used and the likelihood is */
  /*                evaluated at the grid of points with steps 0.01. */
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
  /*        plots   :  Plot on the screen. Scalar. */
  /*                    If plots=1 the fan plot is produced */
  /*                    else (default) no plot is produced. */
  /*                    Example - 'plots',1 */
  /*                    Data Types - double */
  /*                    REMARK: all the following options work only if plots=1
   */
  /*  */
  /*  */
  /*        conflev :   Confidence level. Scalar or vector. Confidence level */
  /*                    for the bands (default is 0.99, that is we plot two */
  /*                    horizontal lines in correspondence of value -2.58 and */
  /*                    2.58). */
  /*                    Example - 'conflev',[0.9 0.95 0.99] */
  /*                    Data Types - double */
  /*  */
  /*        FontSize:   font size of the labels of  the axes. Scalar. */
  /*                    Default value is 12. */
  /*                    Example - 'FontSize',20 */
  /*                    Data Types - double */
  /*  */
  /*        labx    :   a label for the x-axis. Character. */
  /*                    default: 'Subset size m' */
  /*                    Example - 'labx','my labx' */
  /*                    Data Types - char */
  /*  */
  /*        laby    :   a label for the y-axis. Character. */
  /*                    default:'Score test statistic' */
  /*                    Example - 'laby','my laby' */
  /*                    Data Types - char */
  /*  */
  /*        lwd     :   linewidth of the curves which */
  /*                    contain the score test. Scalar. */
  /*                    Default line width=2. */
  /*                    Example - 'lwd',5 */
  /*                    Data Types - double */
  /*  */
  /*        lwdenv  :   width of the lines associated */
  /*                    with the envelopes. Scalar. */
  /*                    Default is lwdenv=1. */
  /*                    Example - 'lwdenv',5 */
  /*                    Data Types - double */
  /*  */
  /*     SizeAxesNum:   Scalar which controls the size of the numbers of the */
  /*                    axes. Scalar. */
  /*                    Default value is 10. */
  /*                   Example - 'SizeAxesNum',12 */
  /*                   Data Types - double */
  /*  */
  /*        tag     :   handle of the plot which is about to be created. */
  /*                    Character. The default is to use tag 'pl_fan'. Notice */
  /*                    that if the program finds a plot which has a tag equal
   */
  /*                    to the one specified by the user, then the output of */
  /*                    the new plot overwrites the existing one in the same */
  /*                    window else a new window is created Example - */
  /*                    'tag','mytag' Data Types - char */
  /*  */
  /*        titl    :   a label for the title. Character. */
  /*                    default: 'Fan plot' */
  /*                    Example - 'titl','my title' */
  /*                    Data Types - char */
  /*  */
  /*        xlimx   :   Minimum and maximum of the x axis. Vector. */
  /*                    Default value is [init n] */
  /*                    Example - 'xlimx',[0 1] */
  /*                    Data Types - double */
  /*  */
  /*        ylimy   :  Minimum and maximum of the y axis. Vector. */
  /*                    Default value for ylimy(1)=max(min(score_test),-20). */
  /*                    Default value for ylimy(2)=min(max(score_test),20). */
  /*                    Example - 'ylimy',[0 1] */
  /*                    Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /*   out.Score  = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                score test for each value of the transformation parameter:
   */
  /*                1st col = fwd search index; */
  /*                2nd col = value of the score test in each step of the */
  /*                fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the score test in each step of the fwd */
  /*                search for la(end). */
  /*   out.Scorep = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                score test for positive observations for each value of the
   */
  /*                transformation parameter. */
  /*                1st col = fwd search index; */
  /*                2nd col = value of the (positive) score test in each step */
  /*                of the fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the (positive) score test in each step */
  /*                of the fwd search for la(end). */
  /*                Note that this output is present only if input option */
  /*                family is 'YJpn' or 'YJall'. */
  /*  out.Scoren  = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                score test for positive observations for each value of the
   */
  /*                transformation parameter: */
  /*                1st col = fwd search index; */
  /*                2nd col = value of the (negative) score test in each step */
  /*                of the fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the (negative) score test in each step */
  /*                of the fwd search for la(end). */
  /*                Note that this output is present only if input option */
  /*                family is 'YJpn' or 'YJall'. */
  /*  out.Scoreb  = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                score test for the joint presence of both constructed */
  /*                variables (associated with positive and negative */
  /*                observations) for each value of the transformation */
  /*                parameter.  In this case the reference distribution is the
   */
  /*                $F$ with 2 and subset_size-p degrees of freedom. */
  /*                1st col = fwd search index (subset_size); */
  /*                2nd col = value of the score test in each step */
  /*                of the fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the score test in each step */
  /*                of the fwd search for la(end). */
  /*                Note that this output is present only if input option */
  /*                family is 'YJall' */
  /*  out.Scoremle  = (n-init+1) x length(la)+1 matrix containing the values of
   * the */
  /*                (score) likelihood ratio test for the joint presence of both
   * constructed */
  /*                variables (associated with positive and negative */
  /*                observations) for each value of the transformation */
  /*                parameter.  In this case the reference distribution is the
   */
  /*                $F$ with 2 and subset_size-p degrees of freedom. */
  /*                1st col = fwd search index (subset_size); */
  /*                2nd col = value of the score test in each step */
  /*                of the fwd search for la(1); */
  /*                ........... */
  /*                end col = value of the score test in each step */
  /*                of the fwd search for la(end). */
  /*                Note that this output is present only if input option */
  /*                scoremle is true */
  /*     out.laMLE = (n-init+1) x 2*length(la)+1 matrix containing the values of
   * the */
  /*                maximum ikelihood estimate of laP and laN. */
  /*                Columns 2:3 are associated with  the search which has */
  /*                ordered the data using to la(1); */
  /*                ......... */
  /*                Columns 2*length(la):2*length(la)+1 are associated with */
  /*                the search which has ordered the data using to */
  /*                la(length(la)). */
  /*                Note that
   * out.laMLE(end,2)=out.laMLE(end,2)=...=out.laMLE(end,2*length(la)) */
  /*                because all these variables contain the MLE of laP based on
   */
  /*                all the observations. Similarly notice that */
  /*                out.laMLE(end,3)=out.laMLE(end,5)=...=out.laMLE(end,2*length(la)+1)
   */
  /*                because all these variables contain the MLE of laN based on
   */
  /*                all the observations. This output is present only if input
   */
  /*                option scoremle is true. */
  /*   out.la     = vector containing the values of lambda for which fan plot */
  /*                is constructed */
  /*   out.bs     = matrix of size p x length(la) containing the units forming
   */
  /*                the initial subset for each value of lambda */
  /*   out.Un     = cell of size length(la). */
  /*                out.Un{i} is a n-init) x 11 matrix which contains the */
  /*                unit(s) included in the subset at each step in the search */
  /*                associated with la(i). */
  /*                REMARK: in every step the new subset is compared with the
   * old subset. Un */
  /*                contains the unit(s) present in the new subset but not in */
  /*                the old one Un(1,:) for example contains the unit included
   */
  /*                in step init+1 ... Un(end,2) contains the units included in
   * the */
  /*                final step of the search */
  /*   out.y      = A vector with n elements that contains the response */
  /*                variable which has been used */
  /*   out.X      = Data matrix of explanatory variables */
  /*                which has been used (it also contains the column of ones if
   */
  /*                input option intercept was missing or equal to 1) */
  /*  */
  /*  */
  /*  See also: Score, ScoreYJ, ScoreYJpn */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  Atkinson, A.C. and Riani, M. (2002a), Tests in the fan plot for robust, */
  /*  diagnostic transformations in regression, "Chemometrics and Intelligent */
  /*  Laboratory Systems", Vol. 60, pp. 87-100. */
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
  /*  */
  /* <a href="matlab: docsearchFS('FSRfan')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     %% FSRfan with all default options. */
  /*     % Store values of the score test statistic */
  /*     % for the five most common values of $\lambda$. */
  /*     % Produce also a fan plot and display it on the screen. */
  /*     % Common part to all examples: load wool dataset. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Function FSRfan stores the score test statistic. */
  /*     % In this case we use the five most common values of lambda are
   * considered */
  /*     [out]=FSRfan(y,X); */
  /*     fanplot(out); */
  /*     %The fan plot shows the log transformation is diffused throughout the
   * data and does not depend on the presence of particular observations. */
  /* } */
  /* { */
  /*     % FSRfan with optional arguments. */
  /*     % Produce a personalized fan plot with required font sizes */
  /*     % for labels and axes. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     [out]=FSRfan(y,X,'plots',1,'FontSize',16,'SizeAxesNum',16); */
  /* } */
  /* { */
  /*     % Example specifying $\lambda$. */
  /*     % Produce a fan plot for each value of $\lambda$ inside vector la. */
  /*     % Extract in matrix Un the units which entered the search in each step
   */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     la=[-1 -0.5 0 0.5]; */
  /*     [out]=FSRfan(y,X,'la',la,'plots',1); */
  /*     Unsel=cell2mat(out.Un); */
  /*     lla=length(la); */
  /*     nr=size(Unsel,1)/lla; */
  /*     Un=[Unsel(1:nr,1) reshape(Unsel(:,2),nr,lla)]; */
  /* } */
  /* { */
  /*     % Example specifying the confidence level and the initial */
  /*     % starting point for monitoring. */
  /*     % Construct fan plot specifying the confidence level and the initial */
  /*     % starting point for monitoring. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     [out]=FSRfan(y,X,'init',size(X,2)+2,'nsamp',0,'conflev',0.95,'plots',1);
   */
  /* } */
  /* { */
  /*     % Example with starting point based on LTS. */
  /*     % Extraction of all subsamples, construct */
  /*     % fan plot specifying the confidence level and the initial starting */
  /*     % point for monitoring based on p+2 observations strong line width for
   */
  /*     % lines associated with the confidence bands. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     [out]=FSRfan(y,X,'init',size(X,2)+2,'nsamp',0,'lms',0,'lwdenv',3,'plots',1);
   */
  /* } */
  /* { */
  /*     %% Fan plot using fidelity cards data. */
  /*     % In the example, la is the vector contanining the most common values
   */
  /*     % of the transformation parameter. */
  /*     % Store the score test statistics for the specified values of lambda */
  /*     % and automatically produce the fan plot */
  /*     XX=load('loyalty.txt'); */
  /*     namey='Sales' */
  /*     y=XX(:,end); */
  /*     nameX={'Number of visits', 'Age', 'Number of persons in the family'};
   */
  /*     X=XX(:,1:end-1); */
  /*     % la = vector contanining the most common values of the transformation
   */
  /*     % parameter */
  /*     la=[0 1/3 0.4 0.5]; */
  /*     % Store the score test statistics for the specified values of lambda */
  /*     % and automatically produce the fan plot */
  /*     [out]=FSRfan(y,X,'la',la,'init',size(X,2)+2,'plots',1,'lwd',3); */
  /*     % The fan plot shows the even if the third root is the best value of
   * the */
  /*     % transformation parameter at the end of the search in earlier steps it
   */
  /*     % lies very close to the upper rejection region. The best value of the
   */
  /*     % transformation parameter seems to be the one associated with l=0.4 */
  /*     % which is always the confidence bands but at the end of search, due to
   */
  /*     % the presence of particular observations it goes below the lower */
  /*     % rejection line. */
  /* } */
  /* { */
  /*     %% Compare BoxCox with Yeo and Johnson transformation. */
  /*     % Store values of the score test statistic */
  /*     % for the five most common values of $\lambda$. */
  /*     % Produce also a fan plot and display it on the screen. */
  /*     % Common part to all examples: load wool dataset. */
  /*     XX=load('wool.txt'); */
  /*     y=XX(:,end); */
  /*     X=XX(:,1:end-1); */
  /*     % Store the score test statistic using Box Cox transformation. */
  /*     [outBC]=FSRfan(y,X,'nsamp',0); */
  /*     % Store the score test statistic using Yeo and Johnson transformation.
   */
  /*     [outYJ]=FSRfan(y,X,'family','YJ','nsamp',0); */
  /*     fanplot(outBC,'titl','Box Cox'); */
  /*     fanplot(outYJ,'titl','Yeo and Johnson','tag','YJ'); */
  /*     disp('Maximum difference in absolute value') */
  /*     disp(max(max(abs(outYJ.Score-outBC.Score)))) */
  /* } */
  /* { */
  /*     %% Example of monitoring of score test for positive and negative
   * obseravations. */
  /*     rng('default') */
  /*     rng(10) */
  /*     close all */
  /*     n=200; */
  /*  */
  /*     X=randn(n,3); */
  /*     beta=[ 1; 1; 1]; */
  /*     sig=0.5; */
  /*     y=X*beta+sig*randn(n,1); */
  /*  */
  /*     disp('Fit in the true scale') */
  /*     disp('R2 of the model in the true scale') */
  /*     if verLessThanFS(8.1) */
  /*         out=regstats(y,X,'linear',{'rsquare'}); */
  /*         disp(out.rsquare) */
  /*     else */
  /*         outlmori=fitlm(X,y); */
  /*         disp(outlmori.Rsquared.Ordinary) */
  /*     end */
  /*     [~,~,BigAx]=yXplot(y,X,'tag','ori'); */
  /*     title(BigAx,'Data in the original scale') */
  /*  */
  /*  */
  /*     % Find the data to transform */
  /*     la=-0.25; */
  /*     ytra=normYJ(y,[],la,'inverse',true); */
  /*     if any(isnan(ytra)) */
  /*         disp('response with missing values') */
  /*     end */
  /*  */
  /*     disp('Fit in the transformed scale') */
  /*     disp('R2 of the model in the wrong (inverse) scale') */
  /*     if verLessThanFS(8.1) */
  /*         out=regstats(ytra,X,'linear',{'rsquare'}); */
  /*         disp(out.rsquare) */
  /*     else */
  /*         outlmtra=fitlm(X,ytra); */
  /*         disp(outlmtra.Rsquared.Ordinary) */
  /*     end */
  /*     [~,~,BigAx]=yXplot(ytra,X,'tag','tra','namey','Data to transform (zoom
   * of y [0 500])','ylimy',[0 500]); */
  /*     title(BigAx,'Data in the inverse scale') */
  /*  */
  /*     la=[ -0.5 -0.25 0]; */
  /*     out=FSRfan(ytra,X,'la',la,'family','YJpn','plots',1,'init',round(n/2),'msg',0);
   */
  /*     title('Extended fan plot') */
  /* } */
  /* { */
  /*     %% Example of monitoring all score tests (also the F test). */
  /*     rng('default') */
  /*     rng(1000) */
  /*     close all */
  /*     n=200; */
  /*  */
  /*     X=randn(n,3); */
  /*     beta=[ 1; 1; 1]; */
  /*     sig=0.5; */
  /*     y=X*beta+sig*randn(n,1); */
  /*  */
  /*     % Find the data to transform */
  /*     la=0; */
  /*     ytra=normYJ(y,[],la,'inverse',true); */
  /*     if any(isnan(ytra)) */
  /*         disp('response with missing values') */
  /*     end */
  /*  */
  /*     la=[ -0.1 0 0.1]; */
  /*     % In this case  family is YJall */
  /*     out=FSRfan(ytra,X,'la',la,'family','YJall','plots',1,'init',round(n/2),'msg',0);
   */
  /*      */
  /* } */
  /* { */
  /*    %% Comparison of  F test based on constructed variables with F test
   * based on MLE. */
  /*     rng('default') */
  /*     rng(100) */
  /*     close all */
  /*     n=200; */
  /*  */
  /*     X=randn(n,3); */
  /*     beta=[ 1; 1; 1]; */
  /*     sig=0.5; */
  /*     y=X*beta+sig*randn(n,1); */
  /*  */
  /*     % Find the data to transform */
  /*     la=0; */
  /*     ytra=normYJ(y,[],la,'inverse',true); */
  /*     if any(isnan(ytra)) */
  /*         disp('response with missing values') */
  /*     end */
  /*  */
  /*     la=[ -0.1 0 0.1]; */
  /*     % Monitor test based on MLE using option scoremle */
  /*     scoremle= true; */
  /*     out=FSRfan(ytra,X,'la',la,'family','YJall','plots',1,'init',round(n/2),'msg',false,'scoremle',true);
   */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = out->y->size[0];
  out->y->size[0] = y->size[0];
  emxEnsureCapacity_real_T(out->y, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->y->data[i] = y->data[i];
  }
  i = out->X->size[0] * out->X->size[1];
  out->X->size[0] = X->size[0];
  out->X->size[1] = X->size[1];
  emxEnsureCapacity_real_T(out->X, i);
  loop_ub = X->size[0] * X->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->X->data[i] = X->data[i];
  }
  chkinputR(out->y, out->X, intercept, nocheck, &n, &p);
  /*  User options */
  /*  If the number of all possible subsets is <1000 the default is to extract
   */
  /*  all subsets, otherwise just 1000. */
  /*  REMARK: a fast approximation of the bc computed above is: */
  /*  ncomb=floor(exp( gammaln(n+1) - gammaln(n-p+1) - gammaln(p+1) ) + .5); */
  /*  Write in structure 'options' the options chosen by the user */
  b_init = init;
  if (h_strcmp(family)) {
    BoxCox = 1.0;
  } else if (i_strcmp(family)) {
    BoxCox = 0.0;
  } else if (j_strcmp(family)) {
    BoxCox = -1.0;
  } else if (k_strcmp(family)) {
    BoxCox = -2.0;
  } else {
    BoxCox = rtNaN;
  }
  /*  Specify where to send the output of the current procedure if options plot
   */
  /*  =1 */
  if (init < p + 1.0) {
    Rprintf("Attention : init should be larger than p+1. \nIt is set to p+2.");
    //fflush(stdout);
    b_init = p + 2.0;
  }
  emxInit_boolean_T(&bsbT, 1);
  /*  Start of the forward search */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  loop_ub_tmp = (int)n;
  i = bsbT->size[0];
  bsbT->size[0] = (int)n;
  emxEnsureCapacity_boolean_T(bsbT, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    bsbT->data[i] = false;
  }
  emxInit_real_T(&b_y, 2);
  if (rtIsNaN(n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_y->data[0] = rtNaN;
  } else if (n < 1.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if (rtIsInf(n) && (1.0 == n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_y->data[0] = rtNaN;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    loop_ub = (int)floor(n - 1.0);
    b_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(b_y, i);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(seq, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = b_y->data[i];
  }
  /*   Unlai is a Matrix whose 2:11th col contains the unit(s) just included. */
  if (rtIsNaN(b_init + 1.0) || rtIsNaN(n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_y->data[0] = rtNaN;
  } else if (n < b_init + 1.0) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if ((rtIsInf(b_init + 1.0) || rtIsInf(n)) && (b_init + 1.0 == n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_y->data[0] = rtNaN;
  } else if (floor(b_init + 1.0) == b_init + 1.0) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    loop_ub = (int)floor(n - (b_init + 1.0));
    b_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(b_y, i);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (b_init + 1.0) + (double)i;
    }
  } else {
    eml_float_colon(b_init + 1.0, n, b_y);
  }
  emxInit_real_T(&c_y, 1);
  sizes_tmp = n - b_init;
  i = c_y->size[0];
  c_y->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(c_y, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = b_y->data[i];
  }
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = (int)sizes_tmp;
  r->size[1] = 10;
  emxEnsureCapacity_real_T(r, i);
  loop_ub = (int)sizes_tmp * 10;
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = rtNaN;
  }
  emxInit_real_T(&Unlai, 2);
  cat(c_y, r, Unlai);
  /*  Un = cell which will contain the matrices Unlai for each value of lambda
   */
  nx = la->size[0];
  if (nx <= 1) {
    nx = 1;
  }
  if (la->size[0] == 0) {
    b_n = 0;
  } else {
    b_n = nx;
  }
  /*  Initialize matrix which will contain the score test */
  emxFree_real_T(&r);
  if (rtIsNaN(b_init) || rtIsNaN(n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_y->data[0] = rtNaN;
  } else if (n < b_init) {
    b_y->size[0] = 1;
    b_y->size[1] = 0;
  } else if ((rtIsInf(b_init) || rtIsInf(n)) && (b_init == n)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_y->data[0] = rtNaN;
  } else if (floor(b_init) == b_init) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    loop_ub = (int)floor(sizes_tmp);
    b_y->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(b_y, i);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = b_init + (double)i;
    }
  } else {
    eml_float_colon(b_init, n, b_y);
  }
  i = c_y->size[0];
  c_y->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(c_y, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_y->data[i] = b_y->data[i];
  }
  if (c_y->size[0] != 0) {
    nx = c_y->size[0];
  } else if (((int)(sizes_tmp + 1.0) != 0) && (b_n != 0)) {
    nx = (int)((n - b_init) + 1.0);
  } else {
    nx = 0;
    i = (int)((n - b_init) + 1.0);
    if (i > 0) {
      nx = i;
    }
  }
  empty_non_axis_sizes = (nx == 0);
  if (empty_non_axis_sizes || (c_y->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      (((int)((n - b_init) + 1.0) != 0) && (b_n != 0))) {
    sizes_idx_1 = b_n;
  } else {
    sizes_idx_1 = 0;
  }
  i = out->Score->size[0] * out->Score->size[1];
  out->Score->size[0] = nx;
  out->Score->size[1] = input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(out->Score, i);
  loop_ub = input_sizes_idx_1;
  if (0 <= loop_ub - 1) {
    for (i = 0; i < nx; i++) {
      out->Score->data[i] = c_y->data[i];
    }
  }
  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      out->Score->data[i1 + out->Score->size[0] * (i + input_sizes_idx_1)] =
          rtNaN;
    }
  }
  /*  if BoxCox==-1 */
  /*      Scop=Sco; */
  /*      Scon=Sco; */
  /*  elseif BoxCox==-2 */
  i = out->Scorep->size[0] * out->Scorep->size[1];
  out->Scorep->size[0] = out->Score->size[0];
  out->Scorep->size[1] = out->Score->size[1];
  emxEnsureCapacity_real_T(out->Scorep, i);
  loop_ub = out->Score->size[0] * out->Score->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Scorep->data[i] = out->Score->data[i];
  }
  i = out->Scoren->size[0] * out->Scoren->size[1];
  out->Scoren->size[0] = out->Score->size[0];
  out->Scoren->size[1] = out->Score->size[1];
  emxEnsureCapacity_real_T(out->Scoren, i);
  loop_ub = out->Score->size[0] * out->Score->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Scoren->data[i] = out->Score->data[i];
  }
  i = out->Scoreb->size[0] * out->Scoreb->size[1];
  out->Scoreb->size[0] = out->Score->size[0];
  out->Scoreb->size[1] = out->Score->size[1];
  emxEnsureCapacity_real_T(out->Scoreb, i);
  loop_ub = out->Score->size[0] * out->Score->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Scoreb->data[i] = out->Score->data[i];
  }
  emxInit_real_T(&b_r, 2);
  /*  end */
  /*  The second column of matrix r will contain the OLS residuals at each step
   */
  /*  of the forward search */
  i = b_r->size[0] * b_r->size[1];
  b_r->size[0] = seq->size[0];
  b_r->size[1] = 2;
  emxEnsureCapacity_real_T(b_r, i);
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_r->data[i] = seq->data[i];
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    b_r->data[i + b_r->size[0]] = 0.0;
  }
  /*  If n is very large, the step of the search is printed every 100 step */
  /*  seq100 is linked to printing */
  sizes_tmp = ceil(n / 1000.0);
  if (rtIsNaN(sizes_tmp)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_y->data[0] = rtNaN;
  } else if (sizes_tmp < 1.0) {
    b_y->size[1] = 0;
  } else if (rtIsInf(sizes_tmp) && (1.0 == sizes_tmp)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = 1;
    emxEnsureCapacity_real_T(b_y, i);
    b_y->data[0] = rtNaN;
  } else {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = (int)(sizes_tmp - 1.0) + 1;
    emxEnsureCapacity_real_T(b_y, i);
    loop_ub = (int)(sizes_tmp - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      b_y->data[i] = (double)i + 1.0;
    }
  }
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  emxEnsureCapacity_real_T(b_y, i);
  loop_ub = b_y->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_y->data[i] *= 1000.0;
  }
  emxInit_boolean_T(&seq100boo, 1);
  i = seq100boo->size[0];
  seq100boo->size[0] = (int)n;
  emxEnsureCapacity_boolean_T(seq100boo, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    seq100boo->data[i] = false;
  }
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = b_y->size[1];
  emxEnsureCapacity_real_T(r1, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = b_y->data[i];
  }
  emxInit_boolean_T(&d_y, 2);
  i = d_y->size[0] * d_y->size[1];
  d_y->size[0] = 1;
  d_y->size[1] = b_y->size[1];
  emxEnsureCapacity_boolean_T(d_y, i);
  loop_ub = b_y->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_y->data[i] = (b_y->data[i] > n);
  }
  emxFree_real_T(&b_y);
  emxInit_int32_T(&r2, 2);
  b_nullAssignment(r1, d_y);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = r1->size[1];
  emxEnsureCapacity_int32_T(r2, i);
  loop_ub = r1->size[1];
  emxFree_boolean_T(&d_y);
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = (int)r1->data[i];
  }
  emxFree_real_T(&r1);
  loop_ub = r2->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq100boo->data[r2->data[i] - 1] = true;
  }
  emxFree_int32_T(&r2);
  emxInit_real_T(&nsampArray, 2);
  b_loop_ub_tmp = (int)p;
  i = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = (int)p;
  out->bs->size[1] = b_n;
  emxEnsureCapacity_real_T(out->bs, i);
  /*  Preextract subsample once and for all for all values of lambda; */
  /*  if lla>1 */
  b_subsets(nsamp, n, p, nsampArray);
  /*  else */
  /*      nsampArray=nsamp; */
  /*  end */
  /*  loop over the values of \lambda */
  i = out->Un->size[0];
  out->Un->size[0] = b_n;
  emxEnsureCapacity_cell_wrap_36(out->Un, i);
  emxInit_real_T(&z, 1);
  emxInit_real_T(&bsb, 1);
  emxInit_real_T(&zb, 1);
  emxInit_real_T(&yb, 1);
  emxInit_real_T(&Xb, 2);
  emxInit_real_T(&blast, 1);
  emxInit_boolean_T(&oldbsbT, 1);
  emxInit_real_T(&unit, 1);
  emxInit_int32_T(&iidx, 1);
  emxInit_real_T(&a, 1);
  emxInitStruct_struct_LXS_T(&expl_temp);
  for (b_i = 0; b_i < b_n; b_i++) {
    if (BoxCox == 1.0) {
      /*  Construct transformed z according to power tansformation */
      if (fabs(la->data[b_i]) < 1.0E-8) {
        i = z->size[0];
        z->size[0] = out->y->size[0];
        emxEnsureCapacity_real_T(z, i);
        loop_ub = out->y->size[0];
        for (i = 0; i < loop_ub; i++) {
          z->data[i] = out->y->data[i];
        }
        nx = out->y->size[0];
        for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
          z->data[sizes_idx_1] = log(z->data[sizes_idx_1]);
        }
      } else {
        i = z->size[0];
        z->size[0] = out->y->size[0];
        emxEnsureCapacity_real_T(z, i);
        nx = out->y->size[0];
        for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
          z->data[sizes_idx_1] =
              rt_powd_snf(out->y->data[sizes_idx_1], la->data[b_i]);
        }
      }
    } else {
      normYJ(out->y, la->data[b_i], z);
    }
    /*  Find initial subset to initialize the search using as y transformed */
    /*  vector z */
    loop_ub = lms->size[0];
    if (lms->size[0] == 1) {
      b_LXS(z, out->X, lms, h, nsampArray, msg, &expl_temp);
      i = bsb->size[0];
      bsb->size[0] = expl_temp.bs->size[1];
      emxEnsureCapacity_real_T(bsb, i);
      loop_ub = expl_temp.bs->size[1];
      for (i = 0; i < loop_ub; i++) {
        bsb->data[i] = expl_temp.bs->data[i];
      }
      /*  Store information about the units forming subset for each value of */
      /*  lambda */
      loop_ub = expl_temp.bs->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->bs->data[i + out->bs->size[0] * b_i] = expl_temp.bs->data[i];
      }
    } else {
      i = bsb->size[0];
      bsb->size[0] = lms->size[0];
      emxEnsureCapacity_real_T(bsb, i);
      /*  Store information about the units forming subset for each value of */
      /*  lambda */
      for (i = 0; i < loop_ub; i++) {
        sizes_tmp = lms->data[i + lms->size[0] * b_i];
        bsb->data[i] = sizes_tmp;
        out->bs->data[i + out->bs->size[0] * b_i] = sizes_tmp;
      }
    }
    i = iidx->size[0];
    iidx->size[0] = bsb->size[0];
    emxEnsureCapacity_int32_T(iidx, i);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      iidx->data[i] = (int)bsb->data[i];
    }
    loop_ub = iidx->size[0];
    for (i = 0; i < loop_ub; i++) {
      bsbT->data[iidx->data[i] - 1] = true;
    }
    /*  bsb=[1 8 12 15]; */
    /* ini0 = initial value for forward search loop */
    /*  FS loop for a particular value of vector la */
    i = zb->size[0];
    zb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(zb, i);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      zb->data[i] = z->data[(int)bsb->data[i] - 1];
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb->data[i] = out->y->data[(int)bsb->data[i] - 1];
    }
    loop_ub = out->X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = out->X->size[1];
    emxEnsureCapacity_real_T(Xb, i);
    for (i = 0; i < loop_ub; i++) {
      nx = bsb->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        Xb->data[i1 + Xb->size[0] * i] =
            out->X->data[((int)bsb->data[i1] + out->X->size[0] * i) - 1];
      }
    }
    /*  last correctly computed beta oefficients */
    i = blast->size[0];
    blast->size[0] = (int)p;
    emxEnsureCapacity_real_T(blast, i);
    for (i = 0; i < b_loop_ub_tmp; i++) {
      blast->data[i] = rtNaN;
    }
    guard1 = false;
    if (!nocheck) {
      nx = local_rank(Xb);
      if (!(nx != p)) {
        guard1 = true;
      } else {
        /*  FS loop will not be performed */
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      i = (int)(n + (1.0 - (double)bsb->size[0]));
      for (mm = 0; mm < i; mm++) {
        b_mm = (unsigned int)bsb->size[0] + mm;
        /*  if n>1000 show every 100 steps the fwd search index */
        if (msg && seq100boo->data[(int)b_mm - 1]) {
          /*  OLD CODE if length(intersect(mm,seq100))==1 */
          int2str(b_mm, c_mm.data, c_mm.size);
        }
        if (b_mm >= b_init) {
          if (BoxCox == 1.0) {
            /*  Compute and store the value of the score test */
            Score(yb, Xb, la->data[b_i], (double *)&sizes_tmp, &nx,
                  &b_expl_temp);
            /*  Store score test for the units belonging to subset */
            out->Score->data[((int)(((double)b_mm - b_init) + 1.0) +
                              out->Score->size[0] * (b_i + 1)) -
                             1] = sizes_tmp;
          } else if (BoxCox == 0.0) {
            /*  Compute and store the value of the score test using Yeo */
            /*  and Johnson transformation (just the global test) */
            ScoreYJ(yb, Xb, la->data[b_i], (double *)&sizes_tmp, &nx,
                    &b_expl_temp);
            /*  Store score test for the units belonging to subset */
            out->Score->data[((int)(((double)b_mm - b_init) + 1.0) +
                              out->Score->size[0] * (b_i + 1)) -
                             1] = sizes_tmp;
          } else if ((BoxCox == -1.0) || (BoxCox == -2.0)) {
            /* [outSC]=ScoreYJ(yb,Xb,'la',la(i),'nocheck',true); */
            /*  [outSCpn]=ScoreYJpn(yb,Xb,'la',la(i),'nocheck',true); */
            /*  [outSCpn]=ScoreYJpn(yb,Xb,'la',la(i),'nocheck',true); */
            /*                      if i==1 */
            ScoreYJall(yb, Xb, la->data[b_i], outSCpn_Score_data,
                       outSCpn_Score_size);
            i1 = (int)(((double)b_mm - b_init) + 1.0) - 1;
            out->Score->data[i1 + out->Score->size[0] * (b_i + 1)] =
                outSCpn_Score_data[0];
            out->Scorep->data[i1 + out->Scorep->size[0] * (b_i + 1)] =
                outSCpn_Score_data[1];
            out->Scoren->data[i1 + out->Scoren->size[0] * (b_i + 1)] =
                outSCpn_Score_data[2];
            if (BoxCox == -2.0) {
              out->Scoreb->data[i1 + out->Scoreb->size[0] * (b_i + 1)] =
                  outSCpn_Score_data[3];
            }
          }
        }
        if (nocheck) {
          empty_non_axis_sizes = true;
        } else {
          /*  Compute b using transformed vector zb */
          nx = local_rank(Xb);
          empty_non_axis_sizes = (nx == p);
        }
        if (empty_non_axis_sizes) {
          /*  rank is ok */
          mldivide(Xb, zb, blast);
          /*  Store correctly computed b for the case of rank problem */
        } else {
          /*  number of independent columns is smaller than number of parameters
           */
        }
        /*  e= (n x 1) vector of residuals for all units using b estimated */
        /*  using subset and transformed response */
        /*  r_i =e_i^2 */
        mtimes(out->X, blast, a);
        loop_ub = z->size[0];
        i1 = a->size[0];
        a->size[0] = z->size[0];
        emxEnsureCapacity_real_T(a, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          a->data[i1] = z->data[i1] - a->data[i1];
        }
        i1 = c_y->size[0];
        c_y->size[0] = a->size[0];
        emxEnsureCapacity_real_T(c_y, i1);
        nx = a->size[0];
        for (sizes_idx_1 = 0; sizes_idx_1 < nx; sizes_idx_1++) {
          c_y->data[sizes_idx_1] = a->data[sizes_idx_1] * a->data[sizes_idx_1];
        }
        loop_ub = c_y->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_r->data[i1 + b_r->size[0]] = c_y->data[i1];
        }
        if (b_mm < n) {
          /*  store units forming old subset in vector oldbsb */
          loop_ub = bsbT->size[0];
          i1 = oldbsbT->size[0];
          oldbsbT->size[0] = bsbT->size[0];
          emxEnsureCapacity_boolean_T(oldbsbT, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            oldbsbT->data[i1] = bsbT->data[i1];
          }
          /*  order the r_i and include the smallest among the units */
          /*   forming the group of potential outliers */
          /*  ord=sortrows(r,2); */
          loop_ub = b_r->size[0];
          i1 = c_y->size[0];
          c_y->size[0] = b_r->size[0];
          emxEnsureCapacity_real_T(c_y, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_y->data[i1] = b_r->data[i1 + b_r->size[0]];
          }
          sort(c_y, iidx);
          i1 = c_y->size[0];
          c_y->size[0] = iidx->size[0];
          emxEnsureCapacity_real_T(c_y, i1);
          loop_ub = iidx->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_y->data[i1] = iidx->data[i1];
          }
          /*  bsb= units forming the new  subset */
          i1 = bsbT->size[0];
          bsbT->size[0] = (int)n;
          emxEnsureCapacity_boolean_T(bsbT, i1);
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            bsbT->data[i1] = false;
          }
          nx = (int)((double)b_mm + 1.0);
          i1 = iidx->size[0];
          iidx->size[0] = (int)((double)b_mm + 1.0);
          emxEnsureCapacity_int32_T(iidx, i1);
          for (i1 = 0; i1 < nx; i1++) {
            iidx->data[i1] = (int)c_y->data[i1];
          }
          loop_ub = iidx->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            bsbT->data[iidx->data[i1] - 1] = true;
          }
          loop_ub = out->X->size[1];
          i1 = Xb->size[0] * Xb->size[1];
          Xb->size[0] = (int)((double)b_mm + 1.0);
          Xb->size[1] = out->X->size[1];
          emxEnsureCapacity_real_T(Xb, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            for (i2 = 0; i2 < nx; i2++) {
              Xb->data[i2 + Xb->size[0] * i1] =
                  out->X->data[((int)c_y->data[i2] + out->X->size[0] * i1) - 1];
            }
          }
          /*  subset of X */
          i1 = yb->size[0];
          yb->size[0] = (int)((double)b_mm + 1.0);
          emxEnsureCapacity_real_T(yb, i1);
          for (i1 = 0; i1 < nx; i1++) {
            yb->data[i1] = out->y->data[(int)c_y->data[i1] - 1];
          }
          /*  subset of y */
          i1 = zb->size[0];
          zb->size[0] = (int)((double)b_mm + 1.0);
          emxEnsureCapacity_real_T(zb, i1);
          for (i1 = 0; i1 < nx; i1++) {
            zb->data[i1] = z->data[(int)c_y->data[i1] - 1];
          }
          /*  subset of z */
          if (b_mm >= b_init) {
            /*  unit = vector containing units which just entered subset; */
            /*  unit=setdiff(bsb,oldbsb); */
            /*  new instruction to find unit */
            loop_ub = oldbsbT->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              oldbsbT->data[i1] = !oldbsbT->data[i1];
            }
            sizes_idx_1 = bsbT->size[0] - 1;
            nx = 0;
            for (loop_ub = 0; loop_ub <= sizes_idx_1; loop_ub++) {
              if (bsbT->data[loop_ub] && oldbsbT->data[loop_ub]) {
                nx++;
              }
            }
            i1 = unit->size[0];
            unit->size[0] = nx;
            emxEnsureCapacity_real_T(unit, i1);
            nx = 0;
            for (loop_ub = 0; loop_ub <= sizes_idx_1; loop_ub++) {
              if (bsbT->data[loop_ub] && oldbsbT->data[loop_ub]) {
                unit->data[nx] = seq->data[loop_ub];
                nx++;
              }
            }
            if (unit->size[0] <= 10) {
              if (2 > unit->size[0] + 1) {
                i1 = -1;
                i2 = -1;
              } else {
                i1 = 0;
                i2 = unit->size[0];
              }
              nx = (int)(((double)b_mm - b_init) + 1.0) - 1;
              sizes_idx_1 = i2 - i1;
              for (i2 = 0; i2 < sizes_idx_1; i2++) {
                Unlai->data[nx + Unlai->size[0] * ((i1 + i2) + 1)] =
                    unit->data[i2];
              }
            } else {
              if (msg) {
                int2str(b_mm, c_mm.data, c_mm.size);
              }
              nx = (int)(((double)b_mm - b_init) + 1.0);
              for (i1 = 0; i1 < 10; i1++) {
                Unlai->data[(nx + Unlai->size[0] * (i1 + 1)) - 1] =
                    unit->data[i1];
              }
            }
          }
        }
      }
    }
    /*  rank check */
    /*  Store in cell Un matrix Unlai */
    i = out->Un->data[b_i].f1->size[0] * out->Un->data[b_i].f1->size[1];
    out->Un->data[b_i].f1->size[0] = Unlai->size[0];
    out->Un->data[b_i].f1->size[1] = 11;
    emxEnsureCapacity_real_T(out->Un->data[b_i].f1, i);
    loop_ub = Unlai->size[0] * 11;
    for (i = 0; i < loop_ub; i++) {
      out->Un->data[b_i].f1->data[i] = Unlai->data[i];
    }
  }
  emxFree_real_T(&c_y);
  emxFreeStruct_struct_LXS_T(&expl_temp);
  emxFree_real_T(&a);
  emxFree_int32_T(&iidx);
  emxFree_real_T(&unit);
  emxFree_boolean_T(&oldbsbT);
  emxFree_real_T(&blast);
  emxFree_real_T(&Xb);
  emxFree_real_T(&yb);
  emxFree_real_T(&zb);
  emxFree_real_T(&bsb);
  emxFree_real_T(&z);
  emxFree_real_T(&nsampArray);
  emxFree_boolean_T(&seq100boo);
  emxFree_real_T(&b_r);
  emxFree_real_T(&Unlai);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  /*  Structure returned by function FSRfan */
  i = out->la->size[0] * out->la->size[1];
  out->la->size[0] = la->size[0];
  out->la->size[1] = 1;
  emxEnsureCapacity_real_T(out->la, i);
  loop_ub = la->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->la->data[i] = la->data[i];
  }
  if ((BoxCox == -1.0) || (BoxCox == -2.0)) {
    if (!(BoxCox == -2.0)) {
      i = out->Scoreb->size[0] * out->Scoreb->size[1];
      out->Scoreb->size[0] = 1;
      out->Scoreb->size[1] = 1;
      emxEnsureCapacity_real_T(out->Scoreb, i);
      out->Scoreb->data[0] = rtNaN;
    }
  } else {
    i = out->Scorep->size[0] * out->Scorep->size[1];
    out->Scorep->size[0] = 1;
    out->Scorep->size[1] = 1;
    emxEnsureCapacity_real_T(out->Scorep, i);
    out->Scorep->data[0] = rtNaN;
    i = out->Scoren->size[0] * out->Scoren->size[1];
    out->Scoren->size[0] = 1;
    out->Scoren->size[1] = 1;
    emxEnsureCapacity_real_T(out->Scoren, i);
    out->Scoren->data[0] = rtNaN;
    i = out->Scoreb->size[0] * out->Scoreb->size[1];
    out->Scoreb->size[0] = 1;
    out->Scoreb->size[1] = 1;
    emxEnsureCapacity_real_T(out->Scoreb, i);
    out->Scoreb->data[0] = rtNaN;
  }
}

/* End of code generation (FSRfan_wrapper.c) */
