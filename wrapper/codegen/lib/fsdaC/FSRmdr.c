/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRmdr.c
 *
 * Code generation for function 'FSRmdr'
 *
 */

/* Include files */
#include "FSRmdr.h"
#include "any.h"
#include "blockedSummation.h"
#include "cat.h"
#include "colon.h"
#include "eml_setop.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_types.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mrdivide_helper.h"
#include "mtimes.h"
#include "randsample.h"
#include "rank.h"
#include "repelem.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sprintf.h"
#include "sum.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void FSRmdr(const emxArray_real_T *y, const emxArray_real_T *X,
            emxArray_real_T *bsb, double varargin_2, bool varargin_8,
            const emxArray_real_T *varargin_10, const double varargin_14_data[],
            const int varargin_14_size[2], const emxArray_real_T *varargin_18,
            emxArray_real_T *mdr, emxArray_real_T *Un, emxArray_real_T *BB,
            emxArray_real_T *Bols, emxArray_real_T *S2)
{
  emxArray_boolean_T *b_varargin_18;
  emxArray_boolean_T *boobsbsteps;
  emxArray_boolean_T *bsbT;
  emxArray_boolean_T *unitstopenalize;
  emxArray_char_T_1x310 c_mm;
  emxArray_int32_T *b_r;
  emxArray_int32_T *iidx;
  emxArray_int32_T *r1;
  emxArray_real_T *Xb;
  emxArray_real_T *Xncl;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *e;
  emxArray_real_T *ncl;
  emxArray_real_T *ord;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *resBSB;
  emxArray_real_T *seq;
  emxArray_real_T *seq500;
  emxArray_real_T *unit;
  emxArray_real_T *yb;
  emxArray_uint32_T *truerownamestopenalize;
  double b_b;
  double init1;
  double thpmm_data;
  int c_size[2];
  int thpmm_size[2];
  int b_i;
  unsigned int b_mm;
  int i;
  int i1;
  int i2;
  unsigned int ij;
  int ini0;
  int loop_ub;
  int mm;
  int n;
  int nwhile;
  int p;
  int sizes_idx_0;
  signed char input_sizes_idx_1;
  bool Ra;
  bool empty_non_axis_sizes;
  emxInit_boolean_T(&bsbT, 1);
  /* FSRmdr computes minimum deletion residual and other basic linear regression
   * quantities in each step of the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRmdr')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     y:         Response variable. Vector. Response variable, specified as
   */
  /*                a vector of length n, where n is the number of */
  /*                observations. Each entry in y is the response for the */
  /*                corresponding row of X. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*   X :          Predictor variables. Matrix. Matrix of explanatory */
  /*                variables (also called 'regressors') of dimension n x (p-1)
   */
  /*                where p denotes the number of explanatory variables */
  /*                including the intercept. */
  /*                Rows of X represent observations, and columns represent */
  /*                variables. By default, there is a constant term in the */
  /*                model, unless you explicitly remove it using input option */
  /*                intercept, so do not include a column of 1s in X. Missing */
  /*                values (NaN's) and infinite values (Inf's) are allowed, */
  /*                since observations (rows) with missing or infinite values */
  /*                will automatically be excluded from the computations. */
  /*   bsb     :    list of units forming the initial subset. Vector. If bsb=0
   */
  /*                (default) then the procedure starts with p units randomly */
  /*                chosen else if bsb is not 0 the search will start with */
  /*                m0=length(bsb) */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  */
  /*  bsbmfullrank :What to do in case subset at step m (say bsbm) produces a */
  /*                non singular X. Scalar. */
  /*                This options controls what to do when rank(X(bsbm,:)) is */
  /*                smaller then number of explanatory variables. */
  /*                If bsbmfullrank = 1 (default is 1) these units (whose number
   */
  /*                is say mnofullrank) are constrained to enter the search in
   */
  /*                the final n-mnofullrank steps else the search continues */
  /*                using as estimate of beta at step m the estimate of beta */
  /*                found in the previous step. */
  /*                Example - 'bsbmfullrank',1 */
  /*                Data Types - double */
  /*  */
  /*    bsbsteps :  Save the units forming subsets. Vector. It specifies for */
  /*                which steps of the fwd search it */
  /*                is necessary to save the units forming subsets. If bsbsteps
   */
  /*                is 0 we store the units forming subset in all steps. If */
  /*                bsbsteps=[] or omitted, the default is to store the units */
  /*                forming subset in all steps if n<=5000, else to store the */
  /*                units forming subset at steps init and steps which are */
  /*                multiple of 100. For example, as default, if n=753 and */
  /*                init=6, units forming subset are stored for m=init, 100, */
  /*                200, 300, 400, 500 and 600. */
  /*                Example - 'bsbsteps',[100 200] stores the unis forming */
  /*                subset in steps 100 and 200. */
  /*                Data Types - double */
  /*  */
  /*   constr :     Constrained search. Vector. r x 1 vector which contains the
   */
  /*                list of units which are forced to join the search in the */
  /*                last r steps. The default is constr=[]. */
  /*                 No constraint is imposed */
  /*                Example - 'constr',[1:10] forces the first 10 units to join
   */
  /*                the subset in the last 10 steps */
  /*                Data Types - double */
  /*  */
  /*   init :       Search initialization. Scalar. */
  /*                It specifies the point where to initialize the search and */
  /*                start monitoring required diagnostics. If it is not */
  /*                specified it is set equal to: */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
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
  /*  internationaltrade : criterion for updating subset. Boolean. */
  /*                If internationaltrade is true (default is false) residuals
   */
  /*                which have large of the final column of X (generally */
  /*                quantity) are reduced. Note that this guarantees that */
  /*                leverge units which have a large value of  X will tend to */
  /*                stay in the subset. This option is particularly useful in */
  /*                the context of international trade data where we */
  /*                regress value (value=price*Q) on quantity (Q). In other */
  /*                words, we use the residuals as if we were regressing y/X */
  /*                (that is price) on the vector of ones. */
  /*                Example - 'internationaltrade',true */
  /*                Data Types - boolean */
  /*  */
  /*   msg  :       Level of output to display. Scalar. It controls whether to
   */
  /*                display or not messages about great interchange on the */
  /*                screen If msg==1 (default) */
  /*                messages are displayed on the screen */
  /*                else no message is displayed on the screen */
  /*                Example - 'msg',1 */
  /*                Data Types - double */
  /*  */
  /*   nocheck:     Check input arguments. Boolean. If nocheck is equal to true
   * no */
  /*                check is performed on matrix y and matrix X. Notice that y
   */
  /*                and X are left unchanged. In other words the additioanl */
  /*                column of ones for the intercept is not added. As default */
  /*                nocheck=false. The controls on h, alpha and nsamp still
   * remain */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /* threshlevoutX: threshold for high leverage units. Scalar or empty value. */
  /*                Threshold to bound the effect of high leverage units in the
   */
  /*                computation of deletion residuals. In the computation of */
  /*                the quantity $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$,
   */
  /*                $i \notin S^{(m)}_*$, units which very far from the bulk of
   */
  /*                the data (represented by $X(m^*)$) will have a huge value */
  /*                of $h_i(m^*)$ and consequently of the deletion residuals. */
  /*                In order to tackle this problem it is possible to put a */
  /*                bound to the value of $h_i(m^*)$. For example */
  /*                threshlevoutX=r imposes the contrainst that $h_i(m^*)$ */
  /*                cannot exceed $r \times p/m$. The default value of */
  /*                threshlevoutX is empty, which means that no threshold is */
  /*                imposed. */
  /*                Example - 'threshlevoutX',5 */
  /*                Data Types - double */
  /*  */
  /*   plots :      Plot on the screen. Scalar. If equal to one a plot of */
  /*                minimum deletion residual appears  on the screen with 1%, */
  /*                50% and 99% confidence bands else (default) no plot is */
  /*                shown. */
  /*                Example - 'plots',1 */
  /*                Data Types - double */
  /*                Remark: the plot which is produced is very simple. In order
   */
  /*                to control a series of options in this plot and in order to
   */
  /*                connect it dynamically to the other forward plots it is */
  /*                necessary to use function mdrplot. */
  /*  */
  /*  */
  /*  Output: */
  /*  */
  /*   mdr:          n -init x 2 matrix which contains the monitoring of minimum
   */
  /*                deletion residual at each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1). */
  /*                2nd col = minimum deletion residual. */
  /*                REMARK: if in a certain step of the search matrix is */
  /*                singular, this procedure checks how many observations */
  /*                produce a singular matrix. In this case mdr is a column */
  /*                vector which contains the list of units for which matrix X
   */
  /*                is non singular. */
  /*   Un:          Units included in each step. Matrix. */
  /*                (n-init) x 11 Matrix which contains the unit(s) included */
  /*                in the subset at each step of the search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*   BB:          Units belonging to subset in each step. Matrix. */
  /*                n x (n-init+1) or n-by-length(bsbsteps) matrix (depending on
   * input */
  /*                option bsbsteps) which contains information about the units
   */
  /*                belonging to the subset at each step of the forward search.
   */
  /*                BB has the following structure */
  /*                1-st row has number 1 in correspondence of the steps in */
  /*                    which unit 1 is included inside subset and a missing */
  /*                    value for the other steps */
  /*                ...... */
  /*                (n-1)-th row has number n-1 in correspondence of the steps
   * in */
  /*                    which unit n-1 is included inside subset and a missing
   */
  /*                    value for the other steps */
  /*                n-th row has number n in correspondence of the steps in */
  /*                    which unit n is included inside subset and a missing */
  /*                    value for the other steps */
  /*                The size of matrix BB is n x (n-init+1) if option input */
  /*                bsbsteps is 0 else the size is n-by-length(bsbsteps). */
  /*   Bols:        OLS coefficents. Matrix. */
  /*                (n-init+1) x (p+1) matrix containing the monitoring of */
  /*                estimated beta coefficients in each step of the forward */
  /*                search. */
  /*   S2:          S2 and R2. Matrix. */
  /*                (n-init+1) x 3 matrix containing the monitoring of S2 (2nd
   */
  /*                column)and R2 (third column) in each step of the forward */
  /*                search. */
  /*  */
  /*  */
  /*  More About: */
  /*  */
  /*                Let $S^{(m)}_* \in \cal{M}$ be the  optimum subset of size
   * $m$, */
  /*                for which the matrix of regressors is $X(m^*)$. Least
   * squares */
  /*                applied to this subset yields parameter estimates */
  /*                $\hat{\beta}(m^*)$ and $s^2(m^*)$, the mean square estimate
   * of */
  /*                $\sigma^2$ on $m-p$ degrees of freedom. Residuals can be */
  /*                calculated for all observations including those not in */
  /*                $S^{(m)}_*$. The $n$ resulting least squares residuals are
   */
  /*                \begin{equation} */
  /*                  e_i(m^*) =  y_i -x_i^T\hat{\beta}(m^*). \label{eq2.14a} */
  /*                \end{equation} */
  /*                The search moves forward */
  /*                with the subset $S^{(m+1)}_*$ consisting of the observations
   * with */
  /*                the $m+1$ smallest absolute values of $e_i(m^*)$. When $m <
   * n$ the */
  /*                estimates of the parameters are based on only those
   * observations */
  /*                giving the central $m$ residuals. */
  /*                To test for outliers the deletion residual is calculated for
   * the */
  /*                $n-m$ observations not in $S^{(m)}_*$. These residuals are
   */
  /*                \begin{equation} */
  /*                r_i^*(m^*)  = \frac{y_{i} - x_{i}^T\hat{\beta}(m^*)} { */
  /*                \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}  = \frac{e_{i}(m^*)} { */
  /*                \sqrt{s^2(m^*)\{1 + h_i(m^*)\}}}, */
  /*                \end{equation} */
  /*                where $h_i(m^*) = x_i^T\{X(m^*)^TX(m^*)\}^{-1}x_i$;  the
   * leverage */
  /*                of each observation depends on $S^{(m)}_*$. Let the
   * observation */
  /*                nearest to those constituting $S^{(m)}_*$ be */
  /*                $i_{\mbox{min}}$ where */
  /*                \[ */
  /*                i_{\mbox{min}} = \arg \min | r^*_i(m^*)| \; \mbox{for} \; i
   * \notin S^{(m)}_*, */
  /*                \] */
  /*                the observation with the minimum absolute deletion  residual
   * among */
  /*                those not in $S^{(m)}_*$. This function computes */
  /*                $r_i^*(m^*)$ for $m^*=init, init+1, \ldots, n-1$. */
  /*  */
  /*  See also: FSR, FSReda */
  /*  */
  /*  */
  /*  References: */
  /*  */
  /*  Atkinson, A.C. and Riani, M. (2000), "Robust Diagnostic Regression */
  /*  Analysis", Springer Verlag, New York. */
  /*  Atkinson, A.C. and Riani, M. (2006), Distribution theory and */
  /*  simulations for tests of outliers in regression, "Journal of */
  /*  Computational and Graphical Statistics", Vol. 15, pp. 460-476. */
  /*  Riani, M. and Atkinson, A.C. (2007), Fast calibrations of the forward */
  /*  search for testing multiple outliers in regression, "Advances in Data */
  /*  Analysis and Classification", Vol. 1, pp. 123-141. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('FSRmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRmdr with all default options. */
  /*     % Compute minimum deletion residual. */
  /*     % Monitor minimum deletion residual in each step of the forward search.
   */
  /*     % Common part to all examples: load fishery dataset. */
  /*      load('fishery'); */
  /*      y=fishery{:,2}; */
  /*      X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*      [mdr] = FSRmdr(y,X,out.bs); */
  /*      plot(mdr(:,1),mdr(:,2)) */
  /*      title('Monitoring of minimum deletion residual') */
  /* } */
  /* { */
  /*     % FSRmdr with optional arguments. */
  /*     % Choose step to start monitoring. */
  /*     % Compute minimum deletion residual and start monitoring it from step
   */
  /*     % 60. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr] = FSRmdr(y,X,out.bs,'init',60); */
  /* } */
  /* { */
  /*     % Analyze units entering the search in the final steps. */
  /*     % Compute minimum deletion residual and analyze the units entering */
  /*     % subset in each step of the fwd search (matrix Un).  As is well known,
   */
  /*     % the FS provides an ordering of the data from those most in agreement
   */
  /*     % with a suggested model (which enter the first steps) to those least
   * in */
  /*     % agreement with it (which are included in the final steps). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Units forming subset in each step. */
  /*     % Obtain detailed information about the units forming subset in each */
  /*     % step of the forward search (matrix BB). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Monitor \( \hat  \beta \). */
  /*     % Monitor how the estimates of beta coefficients changes as the subset
   */
  /*     % size increases (matrix Bols). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols] = FSRmdr(y,X,out.bs); */
  /* } */
  /* { */
  /*     % Monitor $s^2$. */
  /*     % Monitor the estimate of $\sigma^2$ in each step of the fwd search */
  /*     % (matrix S2). */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs); */
  /*     plot(S2(:,1),S2(:,2)) */
  /*     title('Monitoring of s2') */
  /* } */
  /* { */
  /*     % Specify a regression model without intercept. */
  /*     % FSRmdr using a regression model without intercept. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'intercept',false); */
  /* } */
  /* { */
  /*     % Example of the use of option nocheck. */
  /*     %FSRmdr applied without doing any checks on y and X variables. */
  /*     load('fishery'); */
  /*     y=fishery{:,2}; */
  /*     X=fishery{:,1}; */
  /*      % Find starting subset */
  /*      [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'nocheck',true); */
  /* } */
  /* { */
  /*     %% Monitoring of s2, and the evolution of beta coefficients for the
   * Hawkins dataset */
  /*     load('hawkins.txt'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [~,~,~,Bols,S2] = FSRmdr(y,X,out.bs); */
  /*     if isnan(S2) */
  /*         disp('NoFullRank in initial subset, please rerun FSRmdr') */
  /*     else */
  /*         %The forward plot of s2 shows that initially the estimate is
   * virtually */
  /*         %zero. The four line segments comprising the plot correspond to the
   * four */
  /*         %groups of observations */
  /*  */
  /*         % Plot of the monitoring of S2 and R2 */
  /*         figure; */
  /*         subplot(1,2,1) */
  /*         plot(S2(:,1),S2(:,2)) */
  /*         xlabel('Subset size m'); */
  /*         ylabel('S2'); */
  /*         subplot(1,2,2) */
  /*         plot(S2(:,1),S2(:,3)) */
  /*         xlabel('Subset size m'); */
  /*         ylabel('R2'); */
  /*  */
  /*         %The forward plots of the estimates of the beta coefficients show
   * that they are virtually constant until m = 86, after which they start
   * fluctuating in different directions. */
  /*  */
  /*         % Plots of the monitoring of "Estimates of beta coefficients" */
  /*         figure; */
  /*         for j=3:size(Bols,2) */
  /*             subplot(2,4,j-2) */
  /*             plot(Bols(:,1),Bols(:,j)) */
  /*             xlabel('Subset size m'); */
  /*             ylabel(['b' num2str(j-2)]); */
  /*         end */
  /*     end */
  /* } */
  /* { */
  /*     %% Store units forming subsets in selected steps. */
  /*     % In this example the units forming subset are stored just for */
  /*     % selected steps. */
  /*     load('hawkins.txt'); */
  /*     y=hawkins(:,9); */
  /*     X=hawkins(:,1:8); */
  /*     rng('default') */
  /*     rng(100) */
  /*     [out]=LXS(y,X,'nsamp',10000); */
  /*     [mdr,Un,BB,Bols,S2] = FSRmdr(y,X,out.bs,'bsbsteps',[30 60]); */
  /*     if isnan(S2) */
  /*         disp('NoFullRank in initial subset, please rerun FSRmdr') */
  /*     else */
  /*         % BB has just two columns */
  /*         % First column contains information about units forming subset at
   * step m=30 */
  /*         % sum(~isnan(BB(:,1))) is 30 */
  /*         % Second column contains information about units forming subset at
   * step m=60 */
  /*         % sum(~isnan(BB(:,2))) is 60 */
  /*         disp(sum(~isnan(BB(:,1)))) */
  /*         disp(sum(~isnan(BB(:,2)))) */
  /*     end */
  /* } */
  /* { */
  /*     %% Example of the use of option threshlevoutX. */
  /*     % In this example a set of remote units is added to a cloud of points.
   */
  /*     % The purpose of this example is to show that in presence of units very
   * far */
  /*     % from the bulk of th data (bad or good elverage points) it is
   * necessary to */
  /*     % bound their effect putting a constraint on their leverage
   * hi=xi'(X'X)xi */
  /*     rng(10000) */
  /*     n=100; */
  /*     p=1; */
  /*     X=randn(n,p); */
  /*     epsil=10; */
  /*     beta=ones(p,1); */
  /*     y=X*beta+randn(n,1)*epsil; */
  /*     % Add 10 very remote points */
  /*     add=3; */
  /*     Xadd=X(1:add,:)+5000; */
  /*     yadd=y(1:add)+200; */
  /*     Xall=[X;Xadd]; */
  /*     yall=[y;yadd]; */
  /*     outLXS=LXS(y,X); */
  /*     bs=outLXS.bs; */
  /*     subplot(2,1,1) */
  /*     out1=FSRmdr(yall,Xall,bs,'plots',1); */
  /*     xylim=axis; */
  /*     ylabel('mdr') */
  /*     title('Monitoring of mdr without bound on the leverage') */
  /*     subplot(2,1,2) */
  /*     out2=FSRmdr(yall,Xall,bs,'plots',1,'threshlevoutX',10); */
  /*     ylim(xylim(3:4)); */
  /*     ylabel('mdr') */
  /*     title('Monitoring of mdr with bound on the leverage') */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
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
  p = X->size[1];
  n = X->size[0];
  /*  User options */
  /*  Default for vector bsbsteps which indicates for which steps of the fwd */
  /*  search units forming subset have to be saved */
  /* init1=options.init; */
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  i = bsbT->size[0];
  bsbT->size[0] = bsb->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  loop_ub = bsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = (bsb->data[i] == 0.0);
  }
  emxInit_real_T(&Xb, 2);
  emxInit_real_T(&yb, 1);
  if (ifWhileCond(bsbT)) {
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = 1;
    Xb->size[1] = 1;
    emxEnsureCapacity_real_T(Xb, i);
    Xb->data[0] = 0.0;
    Ra = true;
    nwhile = 1;
    while (Ra && (nwhile < 100)) {
      randsample(n, p, bsb);
      loop_ub = X->size[1];
      i = Xb->size[0] * Xb->size[1];
      Xb->size[0] = bsb->size[0];
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(Xb, i);
      for (i = 0; i < loop_ub; i++) {
        sizes_idx_0 = bsb->size[0];
        for (i1 = 0; i1 < sizes_idx_0; i1++) {
          Xb->data[i1 + Xb->size[0] * i] =
              X->data[((int)bsb->data[i1] + X->size[0] * i) - 1];
        }
      }
      sizes_idx_0 = local_rank(Xb);
      Ra = (sizes_idx_0 < p);
      nwhile++;
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb->data[i] = y->data[(int)bsb->data[i] - 1];
    }
  } else {
    loop_ub = X->size[1];
    i = Xb->size[0] * Xb->size[1];
    Xb->size[0] = bsb->size[0];
    Xb->size[1] = X->size[1];
    emxEnsureCapacity_real_T(Xb, i);
    for (i = 0; i < loop_ub; i++) {
      sizes_idx_0 = bsb->size[0];
      for (i1 = 0; i1 < sizes_idx_0; i1++) {
        Xb->data[i1 + Xb->size[0] * i] =
            X->data[((int)bsb->data[i1] + X->size[0] * i) - 1];
      }
    }
    i = yb->size[0];
    yb->size[0] = bsb->size[0];
    emxEnsureCapacity_real_T(yb, i);
    loop_ub = bsb->size[0];
    for (i = 0; i < loop_ub; i++) {
      yb->data[i] = y->data[(int)bsb->data[i] - 1];
    }
  }
  ini0 = bsb->size[0];
  /*  check init */
  init1 = varargin_2;
  if (varargin_2 < (double)X->size[1] + 1.0) {
    printf("Attention : init1 should be larger than p. \nIt is set to p+1.");
    fflush(stdout);
    init1 = (double)X->size[1] + 1.0;
  } else if (varargin_2 < bsb->size[0]) {
    b_sprintf(bsb->size[0]);
    init1 = bsb->size[0];
  } else if (varargin_2 >= X->size[0]) {
    printf("Attention : init1 should be smaller than n. \nIt is set to n-1.");
    fflush(stdout);
    init1 = (double)X->size[0] - 1.0;
  }
  /*  if ~isempty(constr) */
  /*      constr=constr(:); */
  /*      constr(constr>n)=[]; */
  /*  end */
  Ra = ((varargin_14_size[0] != 0) && (varargin_14_size[1] != 0));
  /*  Initialise key matrices */
  /*  Initialization of the n x 1 Boolean vector which contains a true in */
  /*  correspondence of the units belonging to subset in each step */
  i = bsbT->size[0];
  bsbT->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(bsbT, i);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsbT->data[i] = false;
  }
  emxInit_int32_T(&iidx, 1);
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
  /*  sequence from 1 to n. */
  emxInit_real_T(&bsbsteps, 2);
  if (X->size[0] < 1) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = X->size[0];
    emxEnsureCapacity_real_T(bsbsteps, i);
    loop_ub = X->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(seq, i);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq->data[i] = bsbsteps->data[i];
  }
  /*  the set complementary to bsb. */
  /*  ncl=setdiff(seq,bsb); */
  nwhile = bsbT->size[0] - 1;
  sizes_idx_0 = 0;
  for (b_i = 0; b_i <= nwhile; b_i++) {
    if (!bsbT->data[b_i]) {
      sizes_idx_0++;
    }
  }
  emxInit_real_T(&ncl, 1);
  i = ncl->size[0];
  ncl->size[0] = sizes_idx_0;
  emxEnsureCapacity_real_T(ncl, i);
  sizes_idx_0 = 0;
  for (b_i = 0; b_i <= nwhile; b_i++) {
    if (!bsbT->data[b_i]) {
      ncl->data[sizes_idx_0] = seq->data[b_i];
      sizes_idx_0++;
    }
  }
  emxInit_real_T(&r, 2);
  /*  The second column of matrix R will contain the OLS residuals at each step
   */
  /*  of the search */
  i = r->size[0] * r->size[1];
  r->size[0] = seq->size[0];
  r->size[1] = 2;
  emxEnsureCapacity_real_T(r, i);
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = seq->data[i];
  }
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[i + r->size[0]] = 0.0;
  }
  /*  If n is very large (>500), the step of the search is printed every 500
   * step */
  /*  seq500 is linked to printing */
  sizes_idx_0 = (int)ceil((double)X->size[0] / 500.0);
  if (sizes_idx_0 < 1) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = sizes_idx_0;
    emxEnsureCapacity_real_T(bsbsteps, i);
    loop_ub = sizes_idx_0 - 1;
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq500, 2);
  i = seq500->size[0] * seq500->size[1];
  seq500->size[0] = 1;
  seq500->size[1] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(seq500, i);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq500->data[i] = 500.0 * bsbsteps->data[i];
  }
  /*  Matrix Bols will contain the beta coefficients in each step of the fwd */
  /*  search. The first column of Bols contains the fwd search index */
  if (rtIsNaN(init1)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps->data[0] = rtNaN;
  } else if (X->size[0] < init1) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else if (rtIsInf(init1) && (init1 == X->size[0])) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps->data[0] = rtNaN;
  } else if (floor(init1) == init1) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = (int)((double)X->size[0] - init1) + 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    loop_ub = (int)((double)X->size[0] - init1);
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = init1 + (double)i;
    }
  } else {
    eml_float_colon(init1, X->size[0], bsbsteps);
  }
  emxInit_real_T(&b, 1);
  i = b->size[0];
  b->size[0] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(b, i);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = bsbsteps->data[i];
  }
  if (b->size[0] != 0) {
    sizes_idx_0 = b->size[0];
  } else if (((int)(((double)X->size[0] - init1) + 1.0) != 0) &&
             (X->size[1] != 0)) {
    sizes_idx_0 = (int)(((double)X->size[0] - init1) + 1.0);
  } else {
    sizes_idx_0 = 0;
    if ((int)(((double)X->size[0] - init1) + 1.0) > 0) {
      sizes_idx_0 = (int)(((double)X->size[0] - init1) + 1.0);
    }
  }
  empty_non_axis_sizes = (sizes_idx_0 == 0);
  if (empty_non_axis_sizes || (b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      (((int)(((double)X->size[0] - init1) + 1.0) != 0) && (X->size[1] != 0))) {
    nwhile = X->size[1];
  } else {
    nwhile = 0;
  }
  i = Bols->size[0] * Bols->size[1];
  Bols->size[0] = sizes_idx_0;
  Bols->size[1] = input_sizes_idx_1 + nwhile;
  emxEnsureCapacity_real_T(Bols, i);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      Bols->data[i1] = b->data[i1];
    }
  }
  for (i = 0; i < nwhile; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      Bols->data[i1 + Bols->size[0] * (i + input_sizes_idx_1)] = rtNaN;
    }
  }
  /* initial value of beta coefficients is set to NaN */
  /*  S2 = (n-init1+1) x 3 matrix which will contain: */
  /*  1st col = fwd search index */
  /*  2nd col = S2= \sum e_i^2 / (m-p) */
  /*  3rd col = R^2 */
  if (rtIsNaN(init1)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps->data[0] = rtNaN;
  } else if (X->size[0] < init1) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else if (rtIsInf(init1) && (init1 == X->size[0])) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps->data[0] = rtNaN;
  } else if (floor(init1) == init1) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = (int)((double)X->size[0] - init1) + 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    loop_ub = (int)((double)X->size[0] - init1);
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = init1 + (double)i;
    }
  } else {
    eml_float_colon(init1, X->size[0], bsbsteps);
  }
  i = b->size[0];
  b->size[0] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(b, i);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = bsbsteps->data[i];
  }
  if (b->size[0] != 0) {
    sizes_idx_0 = b->size[0];
  } else if ((int)(((double)X->size[0] - init1) + 1.0) != 0) {
    sizes_idx_0 = (int)(((double)X->size[0] - init1) + 1.0);
  } else {
    sizes_idx_0 = 0;
    if ((int)(((double)X->size[0] - init1) + 1.0) > 0) {
      sizes_idx_0 = (int)(((double)X->size[0] - init1) + 1.0);
    }
  }
  empty_non_axis_sizes = (sizes_idx_0 == 0);
  if (empty_non_axis_sizes || (b->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((int)(((double)X->size[0] - init1) + 1.0) != 0)) {
    nwhile = 2;
  } else {
    nwhile = 0;
  }
  i = S2->size[0] * S2->size[1];
  S2->size[0] = sizes_idx_0;
  S2->size[1] = input_sizes_idx_1 + nwhile;
  emxEnsureCapacity_real_T(S2, i);
  loop_ub = input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      S2->data[i1] = b->data[i1];
    }
  }
  for (i = 0; i < nwhile; i++) {
    for (i1 = 0; i1 < sizes_idx_0; i1++) {
      S2->data[i1 + S2->size[0] * (i + input_sizes_idx_1)] = rtNaN;
    }
  }
  /* initial value of S2 (R2) is set to NaN */
  /*  mdr = (n-init1-1) x 2 matrix which will contain min deletion residual */
  /*  among nobsb r_i^* */
  if (rtIsNaN(init1)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps->data[0] = rtNaN;
  } else if ((double)X->size[0] - 1.0 < init1) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else if (rtIsInf(init1) && (init1 == (double)X->size[0] - 1.0)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps->data[0] = rtNaN;
  } else if (floor(init1) == init1) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = (int)(((double)X->size[0] - 1.0) - init1) + 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    loop_ub = (int)(((double)X->size[0] - 1.0) - init1);
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = init1 + (double)i;
    }
  } else {
    eml_float_colon(init1, (double)X->size[0] - 1.0, bsbsteps);
  }
  i = mdr->size[0] * mdr->size[1];
  mdr->size[0] = bsbsteps->size[1];
  mdr->size[1] = 2;
  emxEnsureCapacity_real_T(mdr, i);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    mdr->data[i] = bsbsteps->data[i];
  }
  loop_ub = (int)((double)X->size[0] - init1);
  for (i = 0; i < loop_ub; i++) {
    mdr->data[i + mdr->size[0]] = rtNaN;
  }
  emxInit_boolean_T(&b_varargin_18, 2);
  /* initial value of mdr is set to NaN */
  /*  Matrix BB will contain the units forming subset in each step (or in */
  /*  selected steps) of the forward search. The first column contains */
  /*  information about units forming subset at step init1. */
  i = b_varargin_18->size[0] * b_varargin_18->size[1];
  b_varargin_18->size[0] = 1;
  b_varargin_18->size[1] = varargin_18->size[1];
  emxEnsureCapacity_boolean_T(b_varargin_18, i);
  loop_ub = varargin_18->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_varargin_18->data[i] = (varargin_18->data[i] == 0.0);
  }
  if (c_ifWhileCond(b_varargin_18)) {
    if (rtIsNaN(init1)) {
      i = bsbsteps->size[0] * bsbsteps->size[1];
      bsbsteps->size[0] = 1;
      bsbsteps->size[1] = 1;
      emxEnsureCapacity_real_T(bsbsteps, i);
      bsbsteps->data[0] = rtNaN;
    } else if (X->size[0] < init1) {
      bsbsteps->size[0] = 1;
      bsbsteps->size[1] = 0;
    } else if (rtIsInf(init1) && (init1 == X->size[0])) {
      i = bsbsteps->size[0] * bsbsteps->size[1];
      bsbsteps->size[0] = 1;
      bsbsteps->size[1] = 1;
      emxEnsureCapacity_real_T(bsbsteps, i);
      bsbsteps->data[0] = rtNaN;
    } else if (floor(init1) == init1) {
      i = bsbsteps->size[0] * bsbsteps->size[1];
      bsbsteps->size[0] = 1;
      bsbsteps->size[1] = (int)((double)X->size[0] - init1) + 1;
      emxEnsureCapacity_real_T(bsbsteps, i);
      loop_ub = (int)((double)X->size[0] - init1);
      for (i = 0; i <= loop_ub; i++) {
        bsbsteps->data[i] = init1 + (double)i;
      }
    } else {
      eml_float_colon(init1, X->size[0], bsbsteps);
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = X->size[0];
    BB->size[1] = (int)(((double)X->size[0] - init1) + 1.0);
    emxEnsureCapacity_real_T(BB, i);
    loop_ub = X->size[0] * (int)(((double)X->size[0] - init1) + 1.0);
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
  } else {
    /*  The number of columns of matrix BB is equal to the number of steps */
    /*  for which bsbsteps is greater or equal than init1 */
    nwhile = varargin_18->size[1] - 1;
    sizes_idx_0 = 0;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      if (varargin_18->data[b_i] >= init1) {
        sizes_idx_0++;
      }
    }
    emxInit_int32_T(&b_r, 2);
    i = b_r->size[0] * b_r->size[1];
    b_r->size[0] = 1;
    b_r->size[1] = sizes_idx_0;
    emxEnsureCapacity_int32_T(b_r, i);
    sizes_idx_0 = 0;
    for (b_i = 0; b_i <= nwhile; b_i++) {
      if (varargin_18->data[b_i] >= init1) {
        b_r->data[sizes_idx_0] = b_i + 1;
        sizes_idx_0++;
      }
    }
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = b_r->size[1];
    emxEnsureCapacity_real_T(bsbsteps, i);
    loop_ub = b_r->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsbsteps->data[i] = varargin_18->data[b_r->data[i] - 1];
    }
    i = BB->size[0] * BB->size[1];
    BB->size[0] = X->size[0];
    BB->size[1] = b_r->size[1];
    emxEnsureCapacity_real_T(BB, i);
    loop_ub = X->size[0] * b_r->size[1];
    emxFree_int32_T(&b_r);
    for (i = 0; i < loop_ub; i++) {
      BB->data[i] = rtNaN;
    }
    /*    BB = NaN(n, sum(bsbsteps>=init1)); */
  }
  emxFree_boolean_T(&b_varargin_18);
  emxInit_boolean_T(&boobsbsteps, 1);
  i = boobsbsteps->size[0];
  boobsbsteps->size[0] = X->size[0];
  emxEnsureCapacity_boolean_T(boobsbsteps, i);
  loop_ub = X->size[0];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[i] = false;
  }
  emxInit_int32_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = bsbsteps->size[1];
  emxEnsureCapacity_int32_T(r1, i);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    r1->data[i] = (int)bsbsteps->data[i];
  }
  loop_ub = r1->size[1];
  for (i = 0; i < loop_ub; i++) {
    boobsbsteps->data[r1->data[i] - 1] = true;
  }
  emxFree_int32_T(&r1);
  /*  ij = index which is linked with the columns of matrix BB. During the */
  /*  search every time a subset is stored inside matrix BB ij increases by one
   */
  ij = 1U;
  /*   Un is a Matrix whose 2nd column:11th col contains the unit(s) just */
  /*   included. */
  if (rtIsNaN(init1 + 1.0)) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps->data[0] = rtNaN;
  } else if (X->size[0] < init1 + 1.0) {
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 0;
  } else if (rtIsInf(init1 + 1.0) && (init1 + 1.0 == X->size[0])) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    bsbsteps->data[0] = rtNaN;
  } else if (floor(init1 + 1.0) == init1 + 1.0) {
    i = bsbsteps->size[0] * bsbsteps->size[1];
    bsbsteps->size[0] = 1;
    bsbsteps->size[1] = (int)floor((double)X->size[0] - (init1 + 1.0)) + 1;
    emxEnsureCapacity_real_T(bsbsteps, i);
    loop_ub = (int)floor((double)X->size[0] - (init1 + 1.0));
    for (i = 0; i <= loop_ub; i++) {
      bsbsteps->data[i] = (init1 + 1.0) + (double)i;
    }
  } else {
    eml_float_colon(init1 + 1.0, X->size[0], bsbsteps);
  }
  sizes_idx_0 = (int)((double)X->size[0] - init1);
  i = b->size[0];
  b->size[0] = bsbsteps->size[1];
  emxEnsureCapacity_real_T(b, i);
  loop_ub = bsbsteps->size[1];
  for (i = 0; i < loop_ub; i++) {
    b->data[i] = bsbsteps->data[i];
  }
  emxFree_real_T(&bsbsteps);
  emxInit_real_T(&r2, 2);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = sizes_idx_0;
  r2->size[1] = 10;
  emxEnsureCapacity_real_T(r2, i);
  loop_ub = sizes_idx_0 * 10;
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = rtNaN;
  }
  cat(b, r2, Un);
  /*  Start of the forward search */
  i = X->size[0] - bsb->size[0];
  emxFree_real_T(&r2);
  emxInit_real_T(&resBSB, 1);
  emxInit_real_T(&e, 1);
  emxInit_real_T(&Xncl, 2);
  emxInit_boolean_T(&unitstopenalize, 1);
  emxInit_real_T(&ord, 2);
  emxInit_uint32_T(&truerownamestopenalize, 1);
  emxInit_real_T(&unit, 1);
  emxInit_real_T(&b_y, 1);
  emxInit_real_T(&r3, 2);
  emxInit_real_T(&r4, 2);
  for (mm = 0; mm <= i; mm++) {
    b_mm = (unsigned int)ini0 + mm;
    /*  if n>5000 show every 500 steps the fwd search index */
    if (varargin_8 && (n > 5000)) {
      d_do_vectors(b_mm, seq500, (double *)&thpmm_data, c_size,
                   (int *)&sizes_idx_0, &nwhile, (int *)&loop_ub, &b_i);
      if (c_size[1] == 1) {
        int2str(b_mm, c_mm.data, c_mm.size);
      }
    }
    /*  rank is ok */
    mldivide(Xb, yb, b);
    mtimes(Xb, b, resBSB);
    i1 = resBSB->size[0];
    resBSB->size[0] = yb->size[0];
    emxEnsureCapacity_real_T(resBSB, i1);
    loop_ub = yb->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      resBSB->data[i1] = yb->data[i1] - resBSB->data[i1];
    }
    /*  Store correctly computed b for the case of rank problem */
    mtimes(X, b, e);
    loop_ub = y->size[0];
    i1 = e->size[0];
    e->size[0] = y->size[0];
    emxEnsureCapacity_real_T(e, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      e->data[i1] = y->data[i1] - e->data[i1];
    }
    /*  e = vector of residual for all units using b estimated using subset */
    i1 = b_y->size[0];
    b_y->size[0] = e->size[0];
    emxEnsureCapacity_real_T(b_y, i1);
    sizes_idx_0 = e->size[0];
    for (nwhile = 0; nwhile < sizes_idx_0; nwhile++) {
      b_y->data[nwhile] = e->data[nwhile] * e->data[nwhile];
    }
    loop_ub = b_y->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      r->data[i1 + r->size[0]] = b_y->data[i1];
    }
    if (b_mm >= init1) {
      /*  Store units belonging to the subset */
      if (boobsbsteps->data[(int)b_mm - 1]) {
        /*  OLD CODE */
        /*  intersect(mm,bsbsteps)==mm */
        loop_ub = bsb->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          BB->data[((int)bsb->data[i1] + BB->size[0] * ((int)ij - 1)) - 1] =
              bsb->data[i1];
        }
        ij++;
      }
      /*  Store beta coefficients if there is no rank problem */
      i1 = (2U <= p + 1U);
      i2 = (int)(((double)b_mm - init1) + 1.0) - 1;
      loop_ub = b->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        Bols->data[i2 + Bols->size[0] * (i1 + b_i)] = b->data[b_i];
      }
      /*  Compute and store estimate of sigma^2 */
      thpmm_data = 0.0;
      loop_ub = resBSB->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        thpmm_data += resBSB->data[i1] * resBSB->data[i1];
      }
      S2->data[i2 + S2->size[0]] = thpmm_data / (double)((int)b_mm - p);
      /*  Store R2 */
      /*  S2(mm-init1+1,3)=1-var(resBSB)/var(yb); */
      thpmm_data = blockedSummation(yb, yb->size[0]) / (double)b_mm;
      i1 = b->size[0];
      b->size[0] = yb->size[0];
      emxEnsureCapacity_real_T(b, i1);
      loop_ub = yb->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = yb->data[i1] - thpmm_data;
      }
      thpmm_data = 0.0;
      loop_ub = resBSB->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        thpmm_data += resBSB->data[i1] * resBSB->data[i1];
      }
      b_b = 0.0;
      loop_ub = b->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_b += b->data[i1] * b->data[i1];
      }
      S2->data[i2 + S2->size[0] * 2] = 1.0 - thpmm_data / b_b;
      if ((int)b_mm < n) {
        /*  Take minimum deletion residual among noBSB */
        /*  hi (the leverage for the units not belonging to the */
        /*  subset) is defined as follows */
        /*  hi=diag(X(ncl,:)*inv(Xb'*Xb)*(X(ncl,:))'); */
        /*  Take units not belonging to bsb */
        loop_ub = X->size[1];
        i1 = Xncl->size[0] * Xncl->size[1];
        Xncl->size[0] = ncl->size[0];
        Xncl->size[1] = X->size[1];
        emxEnsureCapacity_real_T(Xncl, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          sizes_idx_0 = ncl->size[0];
          for (b_i = 0; b_i < sizes_idx_0; b_i++) {
            Xncl->data[b_i + Xncl->size[0] * i1] =
                X->data[((int)ncl->data[b_i] + X->size[0] * i1) - 1];
          }
        }
        /*  mmX=inv(mAm); */
        /*  hi = sum((Xncl*mmX).*Xncl,2); */
        c_mtimes(Xb, Xb, r4);
        mrdiv(Xncl, r4, r3);
        i1 = r4->size[0] * r4->size[1];
        r4->size[0] = r3->size[0];
        r4->size[1] = r3->size[1];
        emxEnsureCapacity_real_T(r4, i1);
        loop_ub = r3->size[0] * r3->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          r4->data[i1] = r3->data[i1] * Xncl->data[i1];
        }
        sum(r4, b);
        /* hiall=sum((X/mAm).*X,2); */
        if (Ra) {
          thpmm_size[0] = varargin_14_size[0];
          thpmm_size[1] = varargin_14_size[1];
          loop_ub = varargin_14_size[0] * varargin_14_size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            thpmm_data = varargin_14_data[0] * (double)p / (double)b_mm;
          }
          repelem((double *)&thpmm_data, thpmm_size, n - (int)b_mm, r4);
          i1 = unitstopenalize->size[0];
          unitstopenalize->size[0] = b->size[0];
          emxEnsureCapacity_boolean_T(unitstopenalize, i1);
          loop_ub = b->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            unitstopenalize->data[i1] = (b->data[i1] > r4->data[i1]);
          }
          if (any(unitstopenalize)) {
            nwhile = unitstopenalize->size[0];
            for (b_i = 0; b_i < nwhile; b_i++) {
              if (unitstopenalize->data[b_i]) {
                b->data[b_i] = thpmm_data;
              }
            }
          }
        } else {
          i1 = unitstopenalize->size[0];
          unitstopenalize->size[0] = 1;
          emxEnsureCapacity_boolean_T(unitstopenalize, i1);
          unitstopenalize->data[0] = false;
        }
        loop_ub = ncl->size[0];
        i1 = ord->size[0] * ord->size[1];
        ord->size[0] = ncl->size[0];
        ord->size[1] = 2;
        emxEnsureCapacity_real_T(ord, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          ord->data[i1] = r->data[((int)ncl->data[i1] + r->size[0]) - 1] /
                          (b->data[i1] + 1.0);
        }
        loop_ub = ncl->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          ord->data[i1 + ord->size[0]] = e->data[(int)ncl->data[i1] - 1];
        }
        if (Ra) {
          nwhile = unitstopenalize->size[0] - 1;
          sizes_idx_0 = 0;
          for (b_i = 0; b_i <= nwhile; b_i++) {
            if (unitstopenalize->data[b_i]) {
              sizes_idx_0++;
            }
          }
          i1 = truerownamestopenalize->size[0];
          truerownamestopenalize->size[0] = sizes_idx_0;
          emxEnsureCapacity_uint32_T(truerownamestopenalize, i1);
          sizes_idx_0 = 0;
          for (b_i = 0; b_i <= nwhile; b_i++) {
            if (unitstopenalize->data[b_i]) {
              truerownamestopenalize->data[sizes_idx_0] =
                  (unsigned int)ncl->data[b_i];
              sizes_idx_0++;
            }
          }
          /*  disp(ncl(unittopenalize)) */
          loop_ub = truerownamestopenalize->size[0];
          i1 = b->size[0];
          b->size[0] = truerownamestopenalize->size[0];
          emxEnsureCapacity_real_T(b, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            b->data[i1] =
                r->data[((int)truerownamestopenalize->data[i1] + r->size[0]) -
                        1] *
                1.0E+7;
          }
          loop_ub = b->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            r->data[((int)truerownamestopenalize->data[i1] + r->size[0]) - 1] =
                b->data[i1];
          }
        }
        /*  Store minimum deletion residual in matrix mdr */
        /*  selmdr=sortrows(ord,1); */
        thpmm_data = S2->data[i2 + S2->size[0]];
        if (thpmm_data == 0.0) {
          c_sprintf(((double)b_mm - init1) + 1.0);
        } else {
          loop_ub = ord->size[0];
          i1 = b->size[0];
          b->size[0] = ord->size[0];
          emxEnsureCapacity_real_T(b, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            b->data[i1] = ord->data[i1];
          }
          mdr->data[i2 + mdr->size[0]] = sqrt(c_minimum(b) / thpmm_data);
        }
      }
      /* if mm<n */
      /* ~RankProblem */
    }
    /* mm>=init1 */
    if (b_mm < (unsigned int)n) {
      /*  store units forming old subset in vector oldbsb */
      loop_ub = bsbT->size[0];
      i1 = unitstopenalize->size[0];
      unitstopenalize->size[0] = bsbT->size[0];
      emxEnsureCapacity_boolean_T(unitstopenalize, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        unitstopenalize->data[i1] = bsbT->data[i1];
      }
      /*  order the r_i */
      /*  units inside vector constr are forced to join the search in */
      /*  the final k steps */
      loop_ub = varargin_10->size[0];
      if ((varargin_10->size[0] != 0) &&
          ((int)b_mm < n - varargin_10->size[0])) {
        i1 = iidx->size[0];
        iidx->size[0] = varargin_10->size[0];
        emxEnsureCapacity_int32_T(iidx, i1);
        for (i1 = 0; i1 < loop_ub; i1++) {
          iidx->data[i1] = (int)varargin_10->data[i1];
        }
        loop_ub = iidx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          r->data[(iidx->data[i1] + r->size[0]) - 1] = rtInf;
        }
      }
      /*  If internationaltrade is true residuals which have large of */
      /*  the final column of X (generally quantity) are reduced. Note */
      /*  that this guarantees that leverge units which have a large */
      /*  value of  X will tend to stay in the subset. */
      /*  In other words, we use the residuals as if we were regressing */
      /*  y/X (that is price) on the vector of ones. */
      loop_ub = r->size[0];
      i1 = b->size[0];
      b->size[0] = r->size[0];
      emxEnsureCapacity_real_T(b, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = r->data[i1 + r->size[0]];
      }
      sort(b, iidx);
      i1 = b->size[0];
      b->size[0] = iidx->size[0];
      emxEnsureCapacity_real_T(b, i1);
      loop_ub = iidx->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b->data[i1] = iidx->data[i1];
      }
      /*  bsb= units forming the new  subset */
      i1 = bsb->size[0];
      bsb->size[0] = (int)b_mm + 1;
      emxEnsureCapacity_real_T(bsb, i1);
      loop_ub = (int)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        bsb->data[i1] = b->data[i1];
      }
      i1 = bsbT->size[0];
      bsbT->size[0] = n;
      emxEnsureCapacity_boolean_T(bsbT, i1);
      for (i1 = 0; i1 < n; i1++) {
        bsbT->data[i1] = false;
      }
      i1 = iidx->size[0];
      iidx->size[0] = (int)b_mm + 1;
      emxEnsureCapacity_int32_T(iidx, i1);
      loop_ub = (int)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        iidx->data[i1] = (int)b->data[i1];
      }
      loop_ub = iidx->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        bsbT->data[iidx->data[i1] - 1] = true;
      }
      loop_ub = X->size[1];
      i1 = Xb->size[0] * Xb->size[1];
      Xb->size[0] = (int)b_mm + 1;
      Xb->size[1] = X->size[1];
      emxEnsureCapacity_real_T(Xb, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        sizes_idx_0 = (int)b_mm;
        for (i2 = 0; i2 <= sizes_idx_0; i2++) {
          Xb->data[i2 + Xb->size[0] * i1] =
              X->data[((int)b->data[i2] + X->size[0] * i1) - 1];
        }
      }
      /*  subset of X */
      i1 = yb->size[0];
      yb->size[0] = (int)b_mm + 1;
      emxEnsureCapacity_real_T(yb, i1);
      loop_ub = (int)b_mm;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        yb->data[i1] = y->data[(int)b->data[i1] - 1];
      }
      /*  subset of y */
      if (b_mm >= init1) {
        /*  unit = vector containing units which just entered subset; */
        /*  unit=setdiff(bsb,oldbsb); */
        /*  new instruction to find unit */
        loop_ub = unitstopenalize->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          unitstopenalize->data[i1] = !unitstopenalize->data[i1];
        }
        nwhile = bsbT->size[0] - 1;
        sizes_idx_0 = 0;
        for (b_i = 0; b_i <= nwhile; b_i++) {
          if (bsbT->data[b_i] && unitstopenalize->data[b_i]) {
            sizes_idx_0++;
          }
        }
        i1 = unit->size[0];
        unit->size[0] = sizes_idx_0;
        emxEnsureCapacity_real_T(unit, i1);
        sizes_idx_0 = 0;
        for (b_i = 0; b_i <= nwhile; b_i++) {
          if (bsbT->data[b_i] && unitstopenalize->data[b_i]) {
            unit->data[sizes_idx_0] = seq->data[b_i];
            sizes_idx_0++;
          }
        }
        /*  If the interchange involves more than 10 units, store only the */
        /*  first 10. */
        if (unit->size[0] <= 10) {
          if (2 > unit->size[0] + 1) {
            i1 = -1;
            i2 = -1;
          } else {
            i1 = 0;
            i2 = unit->size[0];
          }
          b_i = (int)(((double)b_mm - init1) + 1.0) - 1;
          nwhile = i2 - i1;
          for (i2 = 0; i2 < nwhile; i2++) {
            Un->data[b_i + Un->size[0] * ((i1 + i2) + 1)] = unit->data[i2];
          }
        } else if (varargin_8) {
          int2str(b_mm, c_mm.data, c_mm.size);
          int2str(unit->size[0], c_mm.data, c_mm.size);
          sizes_idx_0 = (int)(((double)b_mm - init1) + 1.0);
          for (i1 = 0; i1 < 10; i1++) {
            Un->data[(sizes_idx_0 + Un->size[0] * (i1 + 1)) - 1] =
                unit->data[i1];
          }
        }
      }
      if ((int)b_mm < n - 1) {
        if ((varargin_10->size[0] != 0) &&
            ((int)b_mm < (n - varargin_10->size[0]) - 1)) {
          /*  disp(mm) */
          if ((int)b_mm + 2 > n) {
            i1 = 0;
            i2 = 0;
          } else {
            i1 = (int)b_mm + 1;
            i2 = n;
          }
          /*  ncl= units forming the new noclean */
          sizes_idx_0 = i2 - i1;
          for (i2 = 0; i2 < sizes_idx_0; i2++) {
            b->data[i2] = b->data[i1 + i2];
          }
          i1 = b->size[0];
          b->size[0] = sizes_idx_0;
          emxEnsureCapacity_real_T(b, i1);
          e_do_vectors(b, varargin_10, ncl, iidx, &b_i);
        } else {
          if ((int)b_mm + 2 > n) {
            i1 = 0;
            i2 = 0;
          } else {
            i1 = (int)b_mm + 1;
            i2 = n;
          }
          loop_ub = i2 - i1;
          i2 = ncl->size[0];
          ncl->size[0] = loop_ub;
          emxEnsureCapacity_real_T(ncl, i2);
          for (i2 = 0; i2 < loop_ub; i2++) {
            ncl->data[i2] = b->data[i1 + i2];
          }
          /*  ncl= units forming the new noclean */
        }
      }
    }
    /*  if mm<n */
  }
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_y);
  emxFree_int32_T(&iidx);
  emxFree_real_T(&unit);
  emxFree_uint32_T(&truerownamestopenalize);
  emxFree_real_T(&ord);
  emxFree_boolean_T(&unitstopenalize);
  emxFree_real_T(&Xncl);
  emxFree_real_T(&e);
  emxFree_real_T(&b);
  emxFree_real_T(&resBSB);
  emxFree_boolean_T(&boobsbsteps);
  emxFree_real_T(&seq500);
  emxFree_real_T(&r);
  emxFree_real_T(&ncl);
  emxFree_real_T(&seq);
  emxFree_boolean_T(&bsbT);
  emxFree_real_T(&yb);
  emxFree_real_T(&Xb);
  /*  for mm=ini0:n loop */
  /*  Plot minimum deletion residual with 1%, 50% and 99% envelopes */
  /*  rank check */
}

/* End of code generation (FSRmdr.c) */
