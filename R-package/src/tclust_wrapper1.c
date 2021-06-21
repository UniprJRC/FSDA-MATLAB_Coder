/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * tclust_wrapper1.c
 *
 * Code generation for function 'tclust_wrapper1'
 *
 */

#include <R.h>
/* Include files */
#include "tclust_wrapper1.h"
#include "abs.h"
#include "any.h"
#include "blockedSummation.h"
#include "cat.h"
#include "chkinputM.h"
#include "chol.h"
#include "combineVectorElements.h"
#include "diag.h"
#include "estepFS.h"
#include "eye.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "logmvnpdfFS.h"
#include "median.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "power.h"
#include "rand.h"
#include "restrSigmaGPCM.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "strcmp.h"
#include "subsets.h"
#include "sum.h"
#include "tic.h"
#include "toc.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Definitions */
void tclust_wrapper1(const emxArray_real_T *Y, double k, double alpha,
                     const struct1_T *restrfactor, double cshape,
                     bool equalweights, double mixt, double msg, bool nocheck,
                     const emxArray_real_T *nsamp,
                     const emxArray_real_T *RandNumbForNini, double refsteps,
                     double reftol, const char restrtype[5], bool startv1,
                     bool Ysave, struct_tclust_T *out, emxArray_real_T *C)
{
  emxArray_boolean_T *NanGroups;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *r7;
  emxArray_int32_T *idx;
  emxArray_int32_T *ind;
  emxArray_int32_T *indold;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r10;
  emxArray_int32_T *r11;
  emxArray_int32_T *r12;
  emxArray_int32_T *r13;
  emxArray_int32_T *r2;
  emxArray_int32_T *r6;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  emxArray_int8_T *idxmixt;
  emxArray_real_T b_time_data;
  emxArray_real_T *OMG;
  emxArray_real_T *Yselj;
  emxArray_real_T *Yseljc;
  emxArray_real_T *Ytri;
  emxArray_real_T *b_Ytri;
  emxArray_real_T *b_index;
  emxArray_real_T *cini;
  emxArray_real_T *ey;
  emxArray_real_T *eyev;
  emxArray_real_T *groupind;
  emxArray_real_T *ll;
  emxArray_real_T *lmd;
  emxArray_real_T *log_lh;
  emxArray_real_T *nopt;
  emxArray_real_T *postprob;
  emxArray_real_T *postprobold;
  emxArray_real_T *qqunassigned;
  emxArray_real_T *r3;
  emxArray_real_T *sigmaini;
  emxArray_real_T *x;
  double time_data[10];
  double NlogLmixt;
  double b_v=0;
  double c_v=0;
  double detpar=0;
  double h;
  double ilow;
  double iup;
  double mudiff;
  double noconv;
  double nselected;
  double obj;
  double restrfactorSTRUCT_cdet;
  double restrfactorSTRUCT_maxiterDSR;
  double restrfactorSTRUCT_maxiterS;
  double restrfactorSTRUCT_shb;
  double restrfactorSTRUCT_shw;
  double restrfactorSTRUCT_tolR;
  double restrfactorSTRUCT_tolS;
  double restrfactorSTRUCT_userepmat;
  double restrfactorSTRUCT_zerotol;
  double rotpar=0;
  double shapepar=0;
  double tsampling;
  double tstart_tv_nsec;
  double tstart_tv_sec;
  double vopt;
  double y;
  int NoPriorNini;
  int b_i;
  int b_loop_ub=0;
  int b_y;
  int c_loop_ub=0;
  int d_loop_ub=0;
  int e_loop_ub=0;
  int i;
  int i1=0;
  int i2=0;
  int i3=0;
  int i4=0;
  int j;
  int loop_ub;
  int loop_ub_tmp;
  int m;
  int n;
  int nx;
  int time_size;
  int v;
  int vlen;
  char restrfactorSTRUCT_pars[3];
  bool empty_non_axis_sizes;
  (void)cshape;
  (void)restrtype;
  (void)startv1;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  /*  Wrapper1 function for tclust (when restrfactor is a struct).  */
  /*  NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Y: an array of doubles of any dimensions */
  /*  k: a scalar of type double */
  /*  alpha: a scalar of type double */
  /*  restrfactor: a struct */
  /*  field par a 3 letters character */
  /*  field cdet a scalar of type double */
  /*  field shw a scalar of type double */
  /*  field shb a scalar of type double */
  /*  field k a scalar of type double */
  /*  field maxiterDSR a scalar of type double */
  /*  field maxiterR a scalar of type double */
  /*  field maxiterS a scalar of type double */
  /*  field msg a boolean */
  /*  field tolR a scalar of type double */
  /*  field tolS a scalar of type double */
  /*  field usepreviousest a boolean */
  /*  field userepmat a scalar of type double */
  /*  field sortsh a scalar of type double */
  /*  field v a scalar of type double */
  /*  field zerotol a scalar of type double */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  cshape: a scalar of type double */
  /*  equalweights is a boolean */
  /*  mixt: a scalar of type double */
  /*  msg: a scalar of type double */
  /*  nocheck is a boolean */
  /*  nsamp: an array of doubles of any dimensions */
  /*  RandNumbForNini: an array of doubles of any dimensions */
  /*  refsteps: a scalar of type double */
  /*  reftol: a scalar of type double */
  /*  startv1 is a boolean */
  /*  Ysave is a boolean */
  /* tclust computes trimmed clustering with scatter restrictions */
  /*  */
  /* <a href="matlab: docsearchFS('tclust')">Link to the help function</a> */
  /*  */
  /*    tclust partitions the points in the n-by-v data matrix Y */
  /*    into k clusters.  This partition minimizes the trimmed sum, over all */
  /*    clusters, of the within-cluster sums of point-to-cluster-centroid */
  /*    distances.  Rows of Y correspond to points, columns correspond to */
  /*    variables. tclust returns inside structure out an n-by-1 vector idx */
  /*    containing the cluster indices of each point.  By default, tclust uses
   */
  /*    (squared), possibly constrained, Mahalanobis distances. */
  /*  */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*             Y: Input data. Matrix. Data matrix containing n observations on
   * v variables. */
  /*                Rows of Y represent observations, and columns */
  /*                represent variables. */
  /*                Missing values (NaN's) and infinite values (Inf's) are
   * allowed, */
  /*                since observations (rows) with missing or infinite values
   * will */
  /*                automatically be excluded from the computations. */
  /*  */
  /*             k: Number of groups. Scalar. */
  /*                Scalar which specifies the number of groups. */
  /*  */
  /*         alpha: Global trimming level. Scalar. alpha is a scalar between 0
   * and 0.5 */
  /*                or an integer specifying the number of observations which
   * have to */
  /*                be trimmed. If alpha=0 tclust reduces to traditional model
   */
  /*                based or mixture clustering (mclust): see Matlab function */
  /*                gmdistribution. */
  /*                More in detail, if 0< alpha <1 clustering is based on */
  /*                 h=fix(n*(1-alpha)) observations, */
  /*                else if alpha is an integer greater than 1 clustering is */
  /*                based on h=n-floor(alpha); */
  /*  */
  /*   restrfactor: Restriction factor. Scalar or struct. Positive scalar which
   */
  /*                constrains the allowed differences */
  /*                among group scatters. Larger values imply larger differences
   * of */
  /*                group scatters. On the other hand a value of 1 specifies the
   */
  /*                strongest restriction forcing all eigenvalues/determinants
   */
  /*                to be equal and so the method looks for similarly scattered
   */
  /*                (respectively spherical) clusters. The default is to apply
   */
  /*                restrfactor to eigenvalues. In order to apply restrfactor */
  /*                to determinants it is necessary to use optional input */
  /*                argument restr. If restrfactor is a struct it may contain */
  /*                the following fields: */
  /*          restrfactor.pars= type of Gaussian Parsimonious Clustering Model.
   * Character. */
  /*                A 3 letter word in the set: */
  /*                'VVE','EVE','VVV','EVV','VEE','EEE','VEV','EEV','VVI', */
  /*                'EVI','VEI','EEI','VII','EII'. */
  /*                The field restrfactor.pars is compulsory. All the other
   * fields are */
  /*                non necessary. If they are not present they are set to */
  /*                their default values. */
  /*          restrfactor.cdet = scalar in the interval [1 Inf) which specifies
   * the */
  /*                the restriction which has to be applied to the determinants.
   */
  /*                If pa.cdet=1 all determinants are forced to be equal. */
  /*                See section More About for additional details. */
  /*          restrfactor.shw = scalar in the interval [1 Inf) which specifies
   * the */
  /*                the restriction which has to be applied to the elements of
   */
  /*                the shape matrices inside each group. If pa.shw=1 all
   * diagonal */
  /*                elements of the shape matrix of cluster j (with j=1, ..., */
  /*                k) will be equal. */
  /*          restrfactor.shb = scalar in the interval [1 Inf) which specifies
   * the */
  /*                the restriction which has to be applied to the elements of
   */
  /*                the shape matrices across each group. */
  /*          restrfactor.maxiterS = positive integer which specifies the
   * maximum */
  /*                number of iterations to obtain the restricted shape matrix.
   */
  /*                This parameter is used by routine restrshapeGPCM. The */
  /*                default value of restrfactor.maxiterS is 5. */
  /*          restrfactor.maxiterR = positive integer which specifies the
   * maximum */
  /*                number of iterations to obtain the common rotation matrix */
  /*                in presence of varying shape. */
  /*                This parameter is used by routine cpcV. The */
  /*                default value of restrfactor.maxiterR is 20. */
  /*          restrfactor.maxiterDSR = positive integer which specifies the
   * maximum */
  /*                number of iterations to obtain the requested restricted */
  /*                determinants, shape matrices and rotation. For all */
  /*                parametrizations  restrfactor.maxiterDSR is set to 1 apart
   * from for */
  /*                the specifications 'VVE', 'EVE' and 'VEE'. The default */
  /*                value of restrfactor.maxiterDSR is 20. */
  /*          restrfactor.tolS=tolerance to use to exit the iterative procedure
   * for */
  /*                estimating the shape. Scalar. The */
  /*                iterative procedures stops when the relative difference of
   */
  /*                a certain output matrix is smaller than itertol in two
   * consecutive */
  /*                iterations. The default value of pa.tol is 1e-12. */
  /*       restrfactor.zerotol = tolerance value to declare all input values
   * equal to 0 */
  /*                in the eigenvalues restriction routine (file restreigen.m)
   */
  /*                or in the final reconstruction of covariance matrices. */
  /*                The default value of zerotol is 1e-10. */
  /*       restrfactor.msg = boolean which if set equal to true enables to
   * monitor */
  /*                the relative change of the estimates of lambda Gamma and */
  /*                Omega in each iteration. The defaul value of pa.msg is */
  /*                false, that is nothing is displayed in each iteration. */
  /*    restrfactor.userepmat  = scalar, which specifies whether to use implicit
   */
  /*                expansion or bsxfun.  restrfactor.userepmat =2 implies
   * implicit */
  /*                expansion, pa.userepmat=1 implies use of bsxfun. The */
  /*                default is to use implicit expansion (faster) */
  /*                if verLessThanFS(9.1) is false and bsxfun if MATLAB is */
  /*                older than 2016b. */
  /*                Data Types - scalar or struct */
  /*  restrfactor.usepreviousest = boolean, which specifies if for each refining
   */
  /*                step we use values of constrained determints and rotation */
  /*                matrices found in the previous refining step. Default value
   */
  /*                is true. */
  /*                Data Types - boolean */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*        cshape  : constraint to apply to the shape matrices. Scalar greater
   * or */
  /*                equal 1. This options only works is 'restrtype' is 'deter'.
   */
  /*                When restrtype is deter the default value of the "shape" */
  /*                constraint (as defined below) applied to each group is */
  /*                fixed to $c_{shape}=10^{10}$, to ensure the procedure is */
  /*                (virtually) affine equivariant. In other words, the */
  /*                decomposition or the */
  /*                $j$-th scatter matrix $\Sigma_j$ is */
  /*                \[ */
  /*                \Sigma_j=\lambda_j^{1/v} \Omega_j \Gamma_j \Omega_j' */
  /*                \] */
  /*                where $\Omega_j$ is an orthogonal matrix of eigenvectors,
   * $\Gamma_j$ is a */
  /*                diagonal matrix with $|\Gamma_j|=1$ and with elements */
  /*                $\{\gamma_{j1},...,\gamma_{jv}\}$ in its diagonal
   * (proportional to */
  /*                the eigenvalues of the $\Sigma_j$ matrix) and */
  /*                $|\Sigma_j|=\lambda_j$. The $\Gamma_j$ matrices are commonly
   */
  /*                known as "shape" matrices, because they determine the shape
   * of the */
  /*                fitted cluster components. The following $k$ */
  /*                constraints are then imposed on the shape matrices: */
  /*                \[ */
  /*                \frac{\max_{l=1,...,v} \gamma_{jl}}{\min_{l=1,...,v}
   * \gamma_{jl}}\leq */
  /*                    c_{shape}, \text{ for } j=1,...,k, */
  /*                \] */
  /*                In particular, if we are ideally searching for spherical */
  /*                clusters it is necessary to set  $c_{shape}=1$. Models with
   */
  /*                variable volume and spherical clusters are handled with */
  /*                'restrtype' 'deter', $1<restrfactor<\infty$ and $cshape=1$.
   */
  /*                The $restrfactor=cshape=1$ case yields a very constrained */
  /*                parametrization because it implies spherical clusters with
   */
  /*                equal volumes. */
  /*                  Example - 'cshape',10 */
  /*                  Data Types - single | double */
  /*  */
  /* equalweights : Cluster weights in the concentration and assignment steps.
   */
  /*                Logical. A logical value specifying whether cluster weights
   */
  /*                shall be considered in the concentration, assignment steps
   */
  /*                and computation of the likelihood. */
  /*                if equalweights = true we are (ideally) assuming equally */
  /*                sized groups by maximizing: */
  /*  */
  /*                  \[ */
  /*                  \sum_{j=1}^k \sum_{ x_i \in group_j } \log f(x_i; m_j ,
   * S_j) */
  /*                  \] */
  /*  */
  /*                else if equalweights = false (default) we allow for */
  /*                different group weights by maximizing: */
  /*  */
  /*                  \[ */
  /*                      \sum_{j=1}^k  \sum_{ x_i \in group_j }  \log \left[
   * \frac{n_j}{n}  f(x_i; m_j , S_j) \right]= */
  /*                  \] */
  /*                  \[ */
  /*                    = \sum_{j=1}^k n_j \log n_j/n + \sum_{j=1}^k \sum_{ x_i
   * \in group_j} \log f(x_i; m_j , S_j) . */
  /*                  \] */
  /*  */
  /*                Remark: $\sum_{j=1}^k n_j \log n_j/n$ is the so called
   * entropy */
  /*                term */
  /*                  Example - 'equalweights',true */
  /*                  Data Types - Logical */
  /*  */
  /*  */
  /*         msg  : Level of output to display. Scalar. */
  /*                Scalar which controls whether to display or not messages */
  /*                on the screen. */
  /*                If msg=0 nothing is displayed on the screen. */
  /*                If msg=1 (default) messages are displayed */
  /*                on the screen about estimated time to compute the */
  /*                estimator. */
  /*                If msg=2 detailed messages are displayed. For example the */
  /*                information at iteration level, and or the number of */
  /*                subsets in which there was no convergence. */
  /*                    Example - 'msg',1 */
  /*                    Data Types - single | double */
  /*  */
  /*        mixt  : Mixture modelling or crisp assignment. Scalar. */
  /*                Option mixt specifies whether mixture modelling or crisp */
  /*                assignment approach to model based clustering must be used.
   */
  /*                In the case of mixture modelling parameter mixt also */
  /*                controls which is the criterion to find the untrimmed units
   */
  /*                in each step of the maximization. */
  /*                If mixt >=1 mixture modelling is assumed else crisp */
  /*                assignment. The default value is mixt=0 (i.e. crisp
   * assignment). */
  /*                In mixture modelling the likelihood is given by: */
  /*                 \[ */
  /*                 \prod_{i=1}^n  \sum_{j=1}^k \pi_j \phi (y_i; \; \theta_j),
   */
  /*                 \] */
  /*                while in crisp assignment the likelihood is given by: */
  /*                \[ */
  /*                \prod_{j=1}^k   \prod _{i\in R_j} \phi (y_i; \; \theta_j),
   */
  /*                \] */
  /*                where $R_j$ contains the indexes of the observations which
   */
  /*                are assigned to group $j$. */
  /*                Remark - if mixt>=1 previous parameter equalweights is */
  /*                automatically set to 1. */
  /*                Parameter mixt also controls the criterion to select the */
  /*                units to trim, */
  /*                if mixt = 2 the h units are those which give the largest */
  /*                contribution to the likelihood that is the h largest */
  /*                values of: */
  /*                \[ */
  /*                    \sum_{j=1}^k \pi_j \phi (y_i; \; \theta_j)   \qquad */
  /*                     i=1, 2, ..., n, */
  /*                \] */
  /*                else if mixt=1 the criterion to select the h units is */
  /*                exactly the same as the one which is used in crisp */
  /*                assignment. That is: the n units are allocated to a */
  /*                cluster according to criterion: */
  /*                \[ */
  /*                 \max_{j=1, \ldots, k} \hat \pi'_j \phi (y_i; \; \hat
   * \theta_j) */
  /*                \] */
  /*                and then these n numbers are ordered and the units */
  /*                associated with the largest h numbers are untrimmed. */
  /*                    Example - 'mixt',1 */
  /*                    Data Types - single | double */
  /*  */
  /*       nocheck: Check input arguments. Scalar. */
  /*                If nocheck is equal to 1 no check is performed on */
  /*                matrix Y. */
  /*                As default nocheck=0. */
  /*                    Example - 'nocheck',1 */
  /*                    Data Types - single | double */
  /*  */
  /*        nsamp : Number of subsamples to extract. */
  /*                Scalar or matrix. */
  /*                If nsamp is a scalar it contains the number of subsamples */
  /*                which will be extracted. If nsamp=0 */
  /*                all subsets will be extracted. */
  /*                Remark - if the number of all possible subset is <300 the */
  /*                default is to extract all subsets, otherwise just 300 */
  /*                If nsamp is a matrix it contains in the rows the indexes of
   */
  /*                the subsets which have to be extracted. nsamp in this case
   */
  /*                can be conveniently generated  by function subsets. nsamp
   * can */
  /*                have k columns or k*(v+1) columns. If nsamp has k columns */
  /*                the k initial centroids each iteration i are given by */
  /*                X(nsamp(i,:),:) and the covariance matrices are equal to the
   */
  /*                identity. */
  /*                If nsamp has k*(v+1) columns the initial centroids and
   * covariance */
  /*                matrices in iteration i are computed as follows: */
  /*                X1=X(nsamp(i,:),:); */
  /*                mean(X1(1:v+1,:)) contains the initial centroid for group
   * 1; */
  /*                cov(X1(1:v+1,:)) contains the initial cov matrix for group
   * 1; */
  /*                mean(X1(v+2:2*v+2,:)) contains the initial centroid for
   * group 2; */
  /*                cov((v+2:2*v+2,:)) contains the initial cov matrix for group
   * 2; */
  /*                ...; */
  /*                mean(X1((k-1)*v+1:k*(v+1))) contains the initial centroids
   * for group k; */
  /*                cov(X1((k-1)*v+1:k*(v+1))) contains the initial cov matrix
   * for group k. */
  /*                REMARK - if nsamp is not a scalar option option below */
  /*                startv1 is ignored. More precisely, if nsamp has k columns
   */
  /*                startv1=0 elseif nsamp has k*(v+1) columns option startv1 */
  /*                =1. */
  /*                  Example - 'nsamp',1000 */
  /*                  Data Types - double */
  /*  */
  /*  RandNumbForNini: Pre-extracted random numbers to initialize proportions.
   */
  /*                 Matrix. Matrix with size k-by-size(nsamp,1) containing the
   */
  /*                 random numbers which are used to initialize the */
  /*                 proportions of the groups. This option is effective just */
  /*                 if nsamp is a matrix which contains pre-extracted */
  /*                 subsamples. The purpose of this option is to enable to */
  /*                 user to replicate the results in case routine tclust is */
  /*                 called using a parfor instruction (as it happens for */
  /*                 example in routine IC, where tclust is called through a */
  /*                 parfor for different values of the restriction factor). */
  /*                 The default value of RandNumbForNini is empty that is */
  /*                 random numbers from uniform are used. */
  /*                    Example - 'RandNumbForNini','' */
  /*                    Data Types - single | double */
  /*  */
  /*     refsteps : Number of refining iterations. Scalar. Number of refining */
  /*                iterations in each subsample. Default is 15. */
  /*                refsteps = 0 means "raw-subsampling" without iterations. */
  /*                  Example - 'refsteps',10 */
  /*                  Data Types - single | double */
  /*  */
  /*      reftol  : Tolerance for the refining steps. Scalar. */
  /*                The default value is 1e-14; */
  /*                  Example - 'reftol',1e-05 */
  /*                  Data Types - single | double */
  /*  */
  /*      restrtype : type of restriction. Character. The type of restriction to
   */
  /*                be applied on the cluster scatter */
  /*                matrices. Valid values are 'eigen' (default), or 'deter'. */
  /*                eigen implies restriction on the eigenvalues while deter */
  /*                implies restriction on the determinants. If restrtype is */
  /*                'deter' it is also possible to specify  through optional */
  /*                parameter cshape the constraint to apply to the shape */
  /*                matrices. Note that this option is ignored if input */
  /*                parameter restrfactor is a struct. */
  /*                  Example - 'restrtype','deter' */
  /*                  Data Types - char */
  /*  */
  /*       startv1: How to initialize centroids and covariance matrices.
   * Boolean. */
  /*                If startv1 is true then initial centroids and covariance */
  /*                matrices are based on (v+1) observations randomly chosen, */
  /*                else each centroid is initialized taking a random row of */
  /*                input data matrix and covariance matrices are initialized */
  /*                with identity matrices. The default value of startv1 is
   * true. */
  /*                Remark 1 - in order to start with a routine which is in the
   */
  /*                required parameter space, restrictions are */
  /*                immediately applied. */
  /*                Remark 2 - option startv1 is used just if nsamp is a scalar
   */
  /*                (see for more details the help associated with nsamp). */
  /*                    Example - 'startv1',false */
  /*                    Data Types - logical */
  /*  */
  /*        Ysave : Save original input matrix. Boolean. Set Ysave to true to */
  /*                request that the input matrix Y */
  /*                is saved into the output structure out. Default is false, id
   */
  /*                est no saving is done. */
  /*                  Example - 'Ysave',true */
  /*                  Data Types - logical */
  /*  */
  /*  */
  /*  plots    :    Plot on the screen. Scalar or character or structure. */
  /*  */
  /*                Case 1: plots option used as scalar. */
  /*                - If plots=0 (default), plots are not generated. */
  /*                - If plots=1, a plot with the classification is shown on */
  /*                  the screen (using the spmplot function). The plot can be:
   */
  /*                    * for v=1, an histogram of the univariate data. */
  /*                    * for v=2, a bivariate scatterplot. */
  /*                    * for v>2, a scatterplot matrix generated by spmplot. */
  /*                When v>=2 plots offers the following additional features */
  /*                (for v=1 the behaviour is forced to be as for plots=1): */
  /*  */
  /*                Case 2: plots option used as character array. */
  /*                - plots='contourf' adds in the background of the bivariate
   */
  /*                  scatterplots a filled contour plot. The colormap of the */
  /*                  filled contour is based on grey levels as default. */
  /*                  This argument may also be inserted in a field named 'type'
   */
  /*                  of a structure. In the latter case it is possible to */
  /*                  specify the additional field 'cmap', which changes the */
  /*                  default colors of the color map used. The field 'cmap' */
  /*                  may be a three-column matrix of values in the range [0,1]
   */
  /*                  where each row is an RGB triplet that defines one color.
   */
  /*                  Check the colormap function for additional informations.
   */
  /*                - plots='contour' adds in the background of the bivariate */
  /*                  scatterplots a contour plot. The colormap of the contour
   */
  /*                  is based on grey levels as default. This argument may */
  /*                  also be inserted in a field named 'type' of a structure.
   */
  /*                  In the latter case it is possible to specify the
   * additional */
  /*                  field 'cmap', which changes the default colors of the */
  /*                  color map used. The field 'cmap' may be a three-column */
  /*                  matrix of values in the range [0,1] where each row is an
   */
  /*                  RGB triplet that defines one color. */
  /*                  Check the colormap function for additional informations.
   */
  /*                - plots='ellipse' superimposes confidence ellipses to */
  /*                  each group in the bivariate scatterplots. The size of the
   */
  /*                  ellipse is chi2inv(0.95,2), i.e. the confidence level used
   */
  /*                  by default is 95%. This argument may also be inserted in
   */
  /*                  a field named 'type' of a structure. In the latter case it
   */
  /*                  is possible to specify the additional field 'conflev', */
  /*                  which specifies the confidence level to use and it is a */
  /*                  value between 0 and 1. */
  /*                - plots='boxplotb' superimposes on the bivariate
   * scatterplots */
  /*                  the bivariate boxplots for each group, using the boxplotb
   */
  /*                  function. This argument may also be inserted in a field */
  /*                  named 'type' of a structure. */
  /*  */
  /*                Case 3: plots option used as struct. */
  /*                  If plots is a structure it may contain the following
   * fields: */
  /*                  plots.type = in this case the 'type' supplied */
  /*                  is used to set the type of plot as when plots option is */
  /*                  a character array. Therefore, plots.type can be: */
  /*                  'contourf', 'contour', 'ellipse' or 'boxplotb'. */
  /*                  plots.cmap = this field is used to set a colormap */
  /*                  for the plot type. For example, plots.cmap = 'autumn'. */
  /*                  See the MATLAB help of colormap for a list of colormap */
  /*                  possiblilites. */
  /*                  plots.conflev = this is the confidence level */
  /*                  for the confidence ellipses. It must me a scalar between
   */
  /*                  0 and 1. For example, one can set: */
  /*                  plots.type = 'ellipse'; */
  /*                  plots.conflev = 0.5; */
  /*  */
  /*                REMARK - The labels=0 are automatically excluded from the */
  /*                           overlaying phase, considering them as outliers.
   */
  /*                    Example - 'plots', 1 */
  /*                    Data Types - single | double | character | struct */
  /*  */
  /*   Output: */
  /*  */
  /*          out:   structure which contains the following fields */
  /*  */
  /*             out.muopt= k-by-v matrix containing cluster centroid */
  /*                        locations. Robust estimate of final centroids of */
  /*                        the groups. */
  /*  */
  /*          out.sigmaopt= v-by-v-by-k array containing estimated constrained
   */
  /*                        covariance for the k groups. */
  /*  */
  /*             out.idx  = n-by-1 vector containing assignment of each unit to
   */
  /*                        each of the k groups. Cluster names are integer */
  /*                        numbers from 1 to k. 0 indicates trimmed */
  /*                        observations. */
  /*  */
  /*             out.siz  = Matrix of size (k+1)-by-3. */
  /*                        1st col = sequence from 0 to k; */
  /*                        2nd col = number of observations in each cluster; */
  /*                        3rd col = percentage of observations in each */
  /*                        cluster; */
  /*                        Remark: 0 denotes unassigned units. */
  /*  */
  /*          out.postprob = n-by-k matrix containing posterior probabilities */
  /*                        out.postprob(i,j) contains posterior probabilitiy of
   * unit */
  /*                        i from component (cluster) j. For the trimmed units
   */
  /*                        posterior probabilities are 0. */
  /*  */
  /*              out.emp = "Empirical" statistics computed on final
   * classification. */
  /*                        Scalar or structure. When convergence is reached, */
  /*                        out.emp=0. When convergence is not obtained, this */
  /*                        field is a structure which contains the statistics
   */
  /*                        of interest: idxemp (ordered from 0 to k*, k* being
   */
  /*                        the number of groups with at least one observation
   */
  /*                        and 0 representing the possible group of outliers),
   */
  /*                        muemp, sigmaemp and sizemp, which are the empirical
   */
  /*                        counterparts of idx, muopt, sigmaopt and siz. */
  /*  */
  /*           out.MIXMIX = BIC which uses parameters estimated using the */
  /*                        mixture loglikelihood and the maximized mixture */
  /*                        likelihood as goodness of fit measure. */
  /*                        Remark: this output is present only  if input option
   */
  /*                        mixt is >0. */
  /*  */
  /*           out.MIXCLA = BIC which uses the classification likelihood based
   * on */
  /*                        parameters estimated using the mixture likelihood */
  /*                        (In some books this quantity is called ICL). */
  /*                        Remark: this output is present only if input option
   */
  /*                        mixt is >0. */
  /*  */
  /*           out.CLACLA = BIC which uses the classification likelihood based
   * on */
  /*                        parameters estimated using the classification
   * likelihood. */
  /*                        Remark: this output is present only if input option
   */
  /*                        mixt is =0. */
  /*  */
  /*        out.notconver = Scalar. Number of subsets without convergence. */
  /*  */
  /*               out.bs = k-by-1 vector containing the units forming initial
   */
  /*                        subset associated with muopt. */
  /*  */
  /*              out.obj = Scalar. Value of the objective function which is
   * minimized */
  /*                        (value of the best returned solution). */
  /*                        If input option mixt >1 the likelihood which is */
  /*                        maximized is a mixture likelihood as follows: */
  /*                        \[ */
  /*                        \prod_{i=1}^h  \sum_{j=1}^k \pi_j \phi (y_i; \;
   * \theta_j), */
  /*                        \] */
  /*                        else the likelihood which is maximized is a */
  /*                        classification likelihood of the the form: */
  /*                        \[ */
  /*                        \prod_{j=1}^k   \prod _{i\in R_j} \pi_j' \phi (y_i;
   * \; \theta_j), */
  /*                        \] */
  /*                        where $R_j$ contains the indexes of the observations
   * which are assigned to group $j$ */
  /*                        with the constraint that $\# \bigcup_{j=1}^k */
  /*                        R_j=h$. In the classification likelihood if input */
  /*                        option equalweights is set to 0, then $\pi_j'=1$,
   * $j=1, ..., */
  /*                        k$. */
  /*  */
  /*           out.NlogL = Scalar. -2 classification log likelihood. In presence
   * of full */
  /*                        convergence -out.NlogL/2 is equal to out.obj. */
  /*  */
  /*    out.equalweights  = Logical. It is true if in the clustering procedure
   */
  /*                        we (ideally) assumed equal cluster weights */
  /*                        else it is false if we allowed for different */
  /*                        cluster sizes. */
  /*  */
  /*                out.h = Scalar. Number of observations that have determined
   * the */
  /*                        centroids (number of untrimmed units). */
  /*  */
  /*           out.fullsol= Column vector of size nsamp which contains the */
  /*                        value of the objective function at the end of the */
  /*                        iterative process for each extracted subsample. */
  /*  */
  /*  */
  /*               out.Y  = Original data matrix Y. The field is present only */
  /*                        if option Ysave is set to true. */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C     : Indexes of extracted subsamples. Matrix. */
  /*                     Matrix of size nsamp-by-(v+1)*k containing (in the */
  /*                     rows) the indices of the subsamples extracted for */
  /*                     computing the estimate. */
  /*  */
  /*  More About: */
  /*  */
  /*  This iterative algorithm initializes k clusters randomly and performs */
  /*  concentration steps in order to improve the current cluster assignment. */
  /*  The number of maximum concentration steps to be performed is given by */
  /*  input parameter refsteps. For approximately obtaining the global optimum,
   */
  /*  the system is initialized nsamp times and concentration steps are */
  /*  performed until convergence or refsteps is reached. When processing more
   */
  /*  complex data sets higher values of nsamp and refsteps have to be */
  /*  specified (obviously implying extra computation time). However, if more */
  /*  then 10 per cent of the iterations do not converge, a warning message is
   */
  /*  issued, indicating that nsamp has to be increased. */
  /*  */
  /*  See also: tkmeans, tclustIC, tclusteda */
  /*  */
  /*  References: */
  /*  */
  /*    Garcia-Escudero, L.A., Gordaliza, A., Matran, C. and Mayo-Iscar, A.
   * (2008), */
  /*    A General Trimming Approach to Robust Cluster Analysis. Annals */
  /*    of Statistics, Vol. 36, 1324-1345. [Technical Report available at: */
  /*    www.eio.uva.es/inves/grupos/representaciones/trTCLUST.pdf] */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('tclust')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % tclust of geyser data using k=3, alpha=0.1 and  restrfactor=10000. */
  /*     Y=load('geyser2.txt'); */
  /*     out=tclust(Y,3,0.1,10000); */
  /* } */
  /* { */
  /*     %% Use of 'plots' option as a struct, to produce more complex plots. */
  /*     Y=load('geyser2.txt'); */
  /*     close all */
  /*     out=tclust(Y,3,0.1,10000,'plots',1); */
  /*     title('plot with all default
   * options','interpreter','LaTex','FontSize',18); */
  /*  */
  /*     % default confidence ellipses. */
  /*     out=tclust(Y,3,0.1,10000,'plots','ellipse'); */
  /*     title('default confidence
   * ellipses','interpreter','LaTex','FontSize',18); */
  /*  */
  /*     % confidence ellipses specified by the user */
  /*     plots.type = 'ellipse'; */
  /*  */
  /*     plots.conflev = 0.5; */
  /*     out=tclust(Y,3,0.1,10000,'plots',plots); */
  /*     title('confidence ellipses set to
   * 0.5','interpreter','LaTex','FontSize',18); */
  /*  */
  /*     plots.conflev = 0.9; */
  /*     out=tclust(Y,3,0.1,10000,'plots',plots); */
  /*     title('confidence ellipses set to
   * 0.9','interpreter','LaTex','FontSize',18); */
  /*  */
  /*     % contour plots. */
  /*     out=tclust(Y,3,0.1,10000,'plots','contour'); */
  /*     title('contour plot','interpreter','LaTex','FontSize',18); */
  /*  */
  /*     % filled contour plots with additional options */
  /*     plots.type = 'contourf'; */
  /*     plots.cmap = autumn; */
  /*     out=tclust(Y,3,0.1,10000,'plots',plots); */
  /*     title('contourf plot with autumn
   * colormap','interpreter','LaTex','FontSize',18); */
  /*  */
  /*     cascade */
  /* } */
  /* { */
  /*     % tclust of geyser with varargout. */
  /*     Y=load('geyser2.txt'); */
  /*     nsamp=20; */
  /*     [out,MatrixContSubsets]=tclust(Y,3,0.1,10000,'nsamp',nsamp); */
  /*     % MatrixContSubsets is a matrix containing in the rows the indexes of
   */
  /*     % the nsamp subsets which have been extracted */
  /* } */
  /* { */
  /*     %% tclust of geyser data (output comparison). */
  /*     % We compare the output using three different values of */
  /*     % restriction factor. */
  /*     close all */
  /*     Y=load('geyser2.txt'); */
  /*     restrfactor=10000; */
  /*     % nsamp = number of subsamples which will be extracted */
  /*     nsamp=500; */
  /*     out=tclust(Y,3,0.1,restrfactor,'nsamp',nsamp,'plots','ellipse'); */
  /*     title(['Restriction factor ='
   * num2str(restrfactor)],'interpreter','LaTex','FontSize',18) */
  /*     restrfactor=10; */
  /*     out=tclust(Y,3,0.1,restrfactor,'nsamp',nsamp,'refsteps',10,'plots','ellipse');
   */
  /*     title(['Restriction factor ='
   * num2str(restrfactor)],'interpreter','LaTex','FontSize',18) */
  /*     % trimmed k-means solution restrfactor=1 */
  /*     restrfactor=1; */
  /*     out=tclust(Y,3,0.1,restrfactor,'nsamp',nsamp,'refsteps',10,'plots','ellipse');
   */
  /*     title(['Restriction factor =' num2str(restrfactor) '. Trimmed k-means
   * solution'],'interpreter','LaTex','FontSize',18) */
  /*     cascade */
  /* } */
  /* { */
  /*     %  tclust applied to the M5data. */
  /*     %  A bivariate data set obtained from three normal bivariate */
  /*     %  distributions with different scales and proportions 1:2:2. One of */
  /*     %  the components is very overlapped with another one. A 10 per cent */
  /*     %  background noise is added uniformly distributed in a rectangle */
  /*     %  containing the three normal components and not very overlapped with
   */
  /*     %  the three mixture components. A precise description of the M5 data
   */
  /*     %  set can be found in Garcia-Escudero et al. (2008). */
  /*     close all */
  /*     Y=load('M5data.txt'); */
  /*     % plot(Y(:,1),Y(:,2),'o') */
  /*     % Scatter plot matrix with univariate boxplot on the main diagonal */
  /*     spmplot(Y(:,1:2),Y(:,3),[],'box'); */
  /*  */
  /*     out=tclust(Y(:,1:2),3,0,1000,'nsamp',100,'plots',1); */
  /*     out=tclust(Y(:,1:2),3,0,10,'nsamp',100,'plots',1); */
  /*     out=tclust(Y(:,1:2),3,0.1,1,'nsamp',1000,'plots',1,'equalweights',1);
   */
  /*     out=tclust(Y(:,1:2),3,0.1,1000,'nsamp',100,'plots',1); */
  /*  */
  /*     cascade */
  /* } */
  /* { */
  /*     % tclust in presence of structured noise. */
  /*     % The data have been generated using the following R instructions */
  /*     %    set.seed (0) */
  /*     %    library(MASS) */
  /*     %    v <- runif (100, -2 * pi, 2 * pi) */
  /*     %    noise <- cbind (100 + 25 * sin (v), 10 + 5 * v) */
  /*     % */
  /*     %    x <- rbind ( */
  /*     %        rmvnorm (360, c (0.0,  0), matrix (c (1,  0,  0, 1), ncol =
   * 2)), */
  /*     %        rmvnorm (540, c (5.0, 10), matrix (c (6, -2, -2, 6), ncol =
   * 2)), */
  /*     %        noise) */
  /*      */
  /*     close all */
  /*     Y=load('structurednoise.txt'); */
  /*     out=tclust(Y(:,1:2),2,0.1,100,'plots',1); */
  /*     out=tclust(Y(:,1:2),5,0.15,1,'plots',1); */
  /*     cascade */
  /* } */
  /* { */
  /*     % tclust applied to mixture100 data. */
  /*     % The data have been generated using the following R instructions */
  /*     %     set.seed (100) */
  /*     %     mixt <- rbind (rmvnorm (360, c (  0,  0), matrix (c (1,  0,  0,
   * 1), ncol = 2)), */
  /*     %                rmvnorm (540, c (  5, 10), matrix (c (6, -2, -2,  6),
   * ncol = 2)), */
  /*     %                rmvnorm (100, c (2.5,  5), matrix (c (50, 0,  0, 50),
   * ncol = 2))) */
  /*     close all */
  /*     Y=load('mixture100.txt'); */
  /*     out=tclust(Y(:,1:2),3,0.05,1000,'refsteps',20,'plots',1); */
  /*     out=tclust(Y(:,1:2),3,0.05,1,'refsteps',20,'plots',1); */
  /*     cascade */
  /* } */
  /* { */
  /*     % tclust applied to mixture100 data, comparison of different options.
   */
  /*     close all */
  /*     Y=load('mixture100.txt'); */
  /*     % Traditional tclust */
  /*     out1=tclust(Y(:,1:2),3,0.05,1000,'refsteps',20,'plots',1); */
  /*     title('Traditional tclust','interpreter','LaTex','FontSize',18); */
  /*     % tclust with mixture models (selection of untrimmed units according to
   */
  /*     % likelihood contributions */
  /*     out2=tclust(Y(:,1:2),3,0.05,1000,'refsteps',20,'plots',1,'mixt',1); */
  /*     title('tclust with mixture models (likelihood
   * contributions)','interpreter','LaTex','FontSize',18); */
  /*     % Tclust with mixture models (selection of untrimmed units according to
   */
  /*     % densities weighted by estimates of the probability of the components)
   */
  /*     out3=tclust(Y(:,1:2),3,0.05,1000,'refsteps',20,'plots',1,'mixt',2); */
  /*     title('tclust with mixture models (probability of the
   * components)','interpreter','LaTex','FontSize',18); */
  /*     cascade */
  /* } */
  /* { */
  /*     % tclust using simulated data. */
  /*     % 5 groups and 5 variables */
  /*     n1=100; */
  /*     n2=80; */
  /*     n3=50; */
  /*     n4=80; */
  /*     n5=70; */
  /*     v=5; */
  /*     Y1=randn(n1,v)+5; */
  /*     Y2=randn(n2,v)+3; */
  /*     Y3=rand(n3,v)-2; */
  /*     Y4=rand(n4,v)+2; */
  /*     Y5=rand(n5,v); */
  /*  */
  /*     group=ones(n1+n2+n3+n4+n5,1); */
  /*     group(n1+1:n1+n2)=2; */
  /*     group(n1+n2+1:n1+n2+n3)=3; */
  /*     group(n1+n2+n3+1:n1+n2+n3+n4)=4; */
  /*     group(n1+n2+n3+n4+1:n1+n2+n3+n4+n5)=5; */
  /*  */
  /*     close all */
  /*     Y=[Y1;Y2;Y3;Y4;Y5]; */
  /*     out=tclust(Y,5,0.05,1.3,'refsteps',20,'plots',1); */
  /* } */
  /* { */
  /*     %% Automatic choice of the best number of groups for geyser data. */
  /*     % close all */
  /*     Y=load('geyser2.txt'); */
  /*     maxk=6; */
  /*     CLACLA=[(1:maxk)' zeros(maxk,1)]; */
  /*     for j=1:maxk */
  /*         out=tclust(Y,j,0.1,5,'msg',0); */
  /*         CLACLA(j,2)=out.CLACLA; */
  /*     end */
  /*   */
  /*     MIXCLA=[(1:maxk)' zeros(maxk,1)]; */
  /*     MIXMIX=MIXCLA; */
  /*     for j=1:maxk */
  /*         out=tclust(Y,j,0.1,5,'mixt',2,'msg',0); */
  /*         MIXMIX(j,2)=out.MIXMIX; */
  /*         MIXCLA(j,2)=out.MIXCLA; */
  /*     end */
  /*      */
  /*     subplot(1,3,1) */
  /*     plot(CLACLA(:,1),CLACLA(:,2)) */
  /*     xlim([1 maxk]) */
  /*     xlabel('Number of groups') */
  /*     ylabel('CLACLA') */
  /*  */
  /*     subplot(1,3,2) */
  /*     plot(MIXMIX(:,1),MIXMIX(:,2)) */
  /*     xlabel('Number of groups') */
  /*     ylabel('MIXMIX') */
  /*     xlim([1 maxk]) */
  /*      */
  /*     subplot(1,3,3) */
  /*     plot(MIXCLA(:,1),MIXCLA(:,2)) */
  /*     xlabel('Number of groups') */
  /*     ylabel('MIXCLA (ICL)') */
  /*     xlim([1 maxk]) */
  /* } */
  /* { */
  /*     % Automatic choice of the best number of groups for simulated data with
   */
  /*     % k=5 and v=5. */
  /*     close all */
  /*     n1=100;     % Generate 5 groups in 5 dimensions */
  /*     n2=80; */
  /*     n3=50; */
  /*     n4=80; */
  /*     n5=70; */
  /*     v=5; */
  /*     Y1=randn(n1,v)+5; */
  /*     Y2=randn(n2,v)+3; */
  /*     Y3=rand(n3,v)-2; */
  /*     Y4=rand(n4,v)+2; */
  /*     Y5=rand(n5,v); */
  /*  */
  /*     group=ones(n1+n2+n3+n4+n5,1); */
  /*     group(n1+1:n1+n2)=2; */
  /*     group(n1+n2+1:n1+n2+n3)=3; */
  /*     group(n1+n2+n3+1:n1+n2+n3+n4)=4; */
  /*     group(n1+n2+n3+n4+1:n1+n2+n3+n4+n5)=5; */
  /*  */
  /*     Y=[Y1;Y2;Y3;Y4;Y5]; */
  /*     restrfactor=5; */
  /*     maxk=7; */
  /*     CLACLA=[(1:maxk)' zeros(maxk,1)]; */
  /*     for j=1:maxk */
  /*         out=tclust(Y,j,0.1,restrfactor); */
  /*         CLACLA(j,2)=out.CLACLA; */
  /*     end */
  /*   */
  /*     MIXCLA=[(1:maxk)' zeros(maxk,1)]; */
  /*     MIXMIX=MIXCLA; */
  /*     for j=1:maxk */
  /*         out=tclust(Y,j,0.1,restrfactor,'mixt',2); */
  /*         MIXMIX(j,2)=out.MIXMIX; */
  /*         MIXCLA(j,2)=out.MIXCLA; */
  /*     end */
  /*      */
  /*     subplot(1,3,1) */
  /*     plot(CLACLA(:,1),CLACLA(:,2)) */
  /*     xlabel('Number of groups') */
  /*     ylabel('CLACLA') */
  /*  */
  /*     subplot(1,3,2) */
  /*     plot(MIXMIX(:,1),MIXMIX(:,2)) */
  /*     xlabel('Number of groups') */
  /*     ylabel('MIXMIX') */
  /*  */
  /*     subplot(1,3,3) */
  /*     plot(MIXCLA(:,1),MIXCLA(:,2)) */
  /*     xlabel('Number of groups') */
  /*     ylabel('MIXCLA (ICL)') */
  /* } */
  /* { */
  /*     % tclust applied to Swiss banknotes imposing determinant restriciton.
   */
  /*     close all */
  /*     load('swiss_banknotes'); */
  /*     Y=swiss_banknotes{:,:}; */
  /*     out=tclust(Y,3,0.01,20,'restrtype','deter','refsteps',20,'plots',1); */
  /* } */
  /* { */
  /*     % tclust applied to the Geyser data imposing determinant restriciton.
   */
  /*     close all */
  /*     Y=load('geyser2.txt'); */
  /*     out=tclust(Y,4,0.1,10,'restrtype','deter','refsteps',20,'plots',1); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  i = out->Y->size[0] * out->Y->size[1];
  out->Y->size[0] = Y->size[0];
  out->Y->size[1] = Y->size[1];
  emxEnsureCapacity_real_T(out->Y, i);
  loop_ub = Y->size[0] * Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Y->data[i] = Y->data[i];
  }
  chkinputM(out->Y, nocheck);
  v = out->Y->size[1];
  n = out->Y->size[0];
  /*  Eigenvalues restriction can be time demanding, depending on the (k,v) */
  /*  combination. To minimize computing time, here we decide which */
  /*  impementation to use: restreigen.m or restreigeneasy.m */
  /*  User options */
  /*  startv1def = default value of startv1 =1, initialization using covariance
   */
  /*  matrices based on v+1 units */
  /*  Fix alpha equal to the trimming size */
  /*  h = number of observations which is used to compute the centroids */
  /*  h = number of untrimmed units */
  if (alpha >= 1.0) {
    h = (double)out->Y->size[0] - floor(alpha);
  } else {
    h = trunc((double)out->Y->size[0] * (1.0 - alpha));
  }
  /*  tolrestreigen = tolerance to use in function restreigen */
  /*  cshape. Constraint on the shape matrices inside each group which works
   * only if restrtype is 'deter' */
  /*  TODO */
  /*  Write in structure 'options' the options chosen by the user */
  /*  And check if the optional user parameters are reasonable. */
  /*  is restrfactor is a struct then restriction is GPCM */
  restrfactorSTRUCT_pars[0] = restrfactor->pars[0];
  restrfactorSTRUCT_pars[1] = restrfactor->pars[1];
  restrfactorSTRUCT_pars[2] = restrfactor->pars[2];
  restrfactorSTRUCT_cdet = restrfactor->cdet;
  restrfactorSTRUCT_shw = restrfactor->shw;
  restrfactorSTRUCT_shb = restrfactor->shb;
  restrfactorSTRUCT_maxiterDSR = restrfactor->maxiterDSR;
  restrfactorSTRUCT_maxiterS = restrfactor->maxiterS;
  restrfactorSTRUCT_tolR = restrfactor->tolR;
  restrfactorSTRUCT_tolS = restrfactor->tolS;
  restrfactorSTRUCT_userepmat = restrfactor->userepmat;
  restrfactorSTRUCT_zerotol = restrfactor->zerotol;
  if (restrfactor->cdet == 1.0) {
    restrfactorSTRUCT_pars[0] = 'E';
  }
  if (restrfactor->shb == 1.0) {
    restrfactorSTRUCT_pars[1] = 'E';
  }
  /*  Default values for the optional */
  /*  parameters are set inside structure 'options' */
  /*  Number of subsets to extract */
  /*  Specify if assignment must take into account the size of the groups */
  NoPriorNini =
      ((RandNumbForNini->size[0] == 0) || (RandNumbForNini->size[1] == 0));
  /* Initialize the objective function (trimmed variance) by a */
  /* large  value */
  vopt = -1.0E+30;
  /*  Scalar which controls the messages displayed on the screen */
  /*  if options.mixt==1 mixture model is assumed */
  /*  Combinatorial part to extract the subsamples (if not already supplied by
   * the user) */
  emxInit_real_T(&ll, 2);
  if (k * ((double)out->Y->size[1] + 1.0) < out->Y->size[0]) {
    i = ll->size[0] * ll->size[1];
    ll->size[0] = nsamp->size[0];
    ll->size[1] = nsamp->size[1];
    emxEnsureCapacity_real_T(ll, i);
    loop_ub = nsamp->size[0] * nsamp->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ll->data[i] = nsamp->data[i];
    }
    d_subsets(ll, out->Y->size[0], k * ((double)out->Y->size[1] + 1.0), C,
              &nselected);
  } else {
    i = ll->size[0] * ll->size[1];
    ll->size[0] = nsamp->size[0];
    ll->size[1] = nsamp->size[1];
    emxEnsureCapacity_real_T(ll, i);
    loop_ub = nsamp->size[0] * nsamp->size[1] - 1;
    for (i = 0; i <= loop_ub; i++) {
      ll->data[i] = nsamp->data[i];
    }
    d_subsets(ll, out->Y->size[0], k, C, &nselected);
  }
  /*  Store the indices in varargout */
  /*  ll = matrix of loglikelihoods for each unit from each cluster */
  /*  rows of ll are associated to units */
  /*  Columns of ll are associated to clusters */
  i = ll->size[0] * ll->size[1];
  ll->size[0] = out->Y->size[0];
  loop_ub_tmp = (int)k;
  ll->size[1] = (int)k;
  emxEnsureCapacity_real_T(ll, i);
  loop_ub = out->Y->size[0] * (int)k;
  for (i = 0; i < loop_ub; i++) {
    ll->data[i] = 0.0;
  }
  emxInit_real_T(&eyev, 2);
  obj = 1.0E+14;
  /*  Create an identity matrix which will be used in function logmvnpdfFS */
  m = out->Y->size[1];
  i = eyev->size[0] * eyev->size[1];
  eyev->size[0] = out->Y->size[1];
  eyev->size[1] = out->Y->size[1];
  emxEnsureCapacity_real_T(eyev, i);
  loop_ub = out->Y->size[1] * out->Y->size[1];
  for (i = 0; i < loop_ub; i++) {
    eyev->data[i] = 0.0;
  }
  if (out->Y->size[1] > 0) {
    for (loop_ub = 0; loop_ub < m; loop_ub++) {
      eyev->data[loop_ub + eyev->size[0] * loop_ub] = 1.0;
    }
  }
  emxInit_real_T(&ey, 2);
  /*  Create a copy of matrix Y which will be used in function logmvnpdfFS */
  /*  noconv = scalar linked to the number of times in which there was no */
  /*  convergence */
  noconv = 0.0;
  /*  The covariances are given initially by k identity matrices */
  eye(out->Y->size[1], out->Y->size[1], ey);
  /*  Lambda_vk = matrix which will contain in column j the v (unrestricted) */
  /*  eigevalues of covariance matrix of group j (j=1, ..., k) */
  /*  sigmaopt = 3 dimensional array which will contain the estimates of the */
  /*  covariance matrices for the best solution */
  i = out->sigmaopt->size[0] * out->sigmaopt->size[1] * out->sigmaopt->size[2];
  out->sigmaopt->size[0] = out->Y->size[1];
  out->sigmaopt->size[1] = out->Y->size[1];
  out->sigmaopt->size[2] = (int)k;
  emxEnsureCapacity_real_T(out->sigmaopt, i);
  loop_ub = out->Y->size[1] * out->Y->size[1] * (int)k;
  for (i = 0; i < loop_ub; i++) {
    out->sigmaopt->data[i] = 0.0;
  }
  /*  Initialise and start timer. */
  tsampling = ceil(fmin(nselected / 5.0, 10.0));
  vlen = (int)tsampling;
  time_size = (int)tsampling;
  if (0 <= vlen - 1) {
    memset(&time_data[0], 0, vlen * sizeof(double));
  }
  emxInit_real_T(&sigmaini, 3);
  /*  Lambda will contain the matrix of eigenvalues in each iteration for */
  /*  all groups. Lambda is a 3D array of size v-by-v-by-k */
  /*  Lambda=sigmaini; */
  /*  U will contain the eigenvectors of the cov matrices in each iteration */
  /*  for all groups (or the shape matrices if restrnum=2). U is a 3D array of
   * size v-by-v-by-k */
  i = sigmaini->size[0] * sigmaini->size[1] * sigmaini->size[2];
  sigmaini->size[0] = out->Y->size[1];
  sigmaini->size[1] = out->Y->size[1];
  sigmaini->size[2] = (int)k;
  emxEnsureCapacity_real_T(sigmaini, i);
  loop_ub = out->Y->size[1] * out->Y->size[1] * (int)k;
  for (i = 0; i < loop_ub; i++) {
    sigmaini->data[i] = 0.0;
  }
  /*  fullsol = vector which stores value of the objective function in each */
  /*  iteration */
  i = (int)nselected;
  i1 = out->fullsol->size[0];
  out->fullsol->size[0] = (int)nselected;
  emxEnsureCapacity_real_T(out->fullsol, i1);
  /*  Inizialization requested by MATLAB C-coder */
  emxInit_real_T(&b_index, 2);
  if (k < 1.0) {
    b_index->size[0] = 1;
    b_index->size[1] = 0;
  } else if (rtIsInf(k) && (1.0 == k)) {
    i1 = b_index->size[0] * b_index->size[1];
    b_index->size[0] = 1;
    b_index->size[1] = 1;
    emxEnsureCapacity_real_T(b_index, i1);
    b_index->data[0] = rtNaN;
  } else {
    i1 = b_index->size[0] * b_index->size[1];
    b_index->size[0] = 1;
    loop_ub = (int)floor(k - 1.0);
    b_index->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(b_index, i1);
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_index->data[i1] = (double)i1 + 1.0;
    }
  }
  emxInit_real_T(&groupind, 1);
  i1 = groupind->size[0];
  groupind->size[0] = out->Y->size[0];
  emxEnsureCapacity_real_T(groupind, i1);
  loop_ub = out->Y->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    groupind->data[i1] = 0.0;
  }
  emxInit_real_T(&log_lh, 2);
  i1 = log_lh->size[0] * log_lh->size[1];
  log_lh->size[0] = (int)h;
  log_lh->size[1] = (int)k;
  emxEnsureCapacity_real_T(log_lh, i1);
  loop_ub = (int)h * (int)k;
  for (i1 = 0; i1 < loop_ub; i1++) {
    log_lh->data[i1] = 0.0;
  }
  emxInit_int32_T(&indold, 1);
  i1 = indold->size[0];
  indold->size[0] = out->Y->size[0];
  emxEnsureCapacity_int32_T(indold, i1);
  loop_ub = out->Y->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    indold->data[i1] = 0;
  }
  emxInit_real_T(&postprobold, 2);
  i1 = postprobold->size[0] * postprobold->size[1];
  postprobold->size[0] = out->Y->size[0];
  postprobold->size[1] = (int)k;
  emxEnsureCapacity_real_T(postprobold, i1);
  loop_ub = out->Y->size[0] * (int)k;
  for (i1 = 0; i1 < loop_ub; i1++) {
    postprobold->data[i1] = 0.0;
  }
  i1 = out->muopt->size[0] * out->muopt->size[1];
  out->muopt->size[0] = (int)k;
  out->muopt->size[1] = out->Y->size[1];
  emxEnsureCapacity_real_T(out->muopt, i1);
  loop_ub = (int)k * out->Y->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    out->muopt->data[i1] = 0.0;
  }
  emxInit_real_T(&nopt, 1);
  i1 = nopt->size[0];
  nopt->size[0] = (int)k;
  emxEnsureCapacity_real_T(nopt, i1);
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    nopt->data[i1] = 0.0;
  }
  emxInit_int8_T(&idxmixt, 1);
  i1 = idxmixt->size[0];
  idxmixt->size[0] = out->Y->size[0];
  emxEnsureCapacity_int8_T(idxmixt, i1);
  loop_ub = out->Y->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    idxmixt->data[i1] = 0;
  }
  NlogLmixt = 0.0;
  i1 = out->bs->size[0] * out->bs->size[1];
  out->bs->size[0] = 1;
  out->bs->size[1] = (int)k;
  emxEnsureCapacity_real_T(out->bs, i1);
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    out->bs->data[i1] = 0.0;
  }
  /*   Random starts */
  tic(&tstart_tv_sec, &tstart_tv_nsec);
  if (0 <= (int)nselected - 1) {
    i2 = (int)k;
    if (0 <= (int)k - 1) {
      i3 = C->size[1];
      c_loop_ub = C->size[1];
      i4 = out->Y->size[1];
      e_loop_ub = out->Y->size[1];
      b_v = (double)out->Y->size[1] + 1.0;
      c_v = (double)out->Y->size[1] + 1.0;
    }
    b_loop_ub = out->Y->size[0] * (int)k;
    d_loop_ub = out->Y->size[0];
  }
  emxInit_real_T(&cini, 2);
  emxInit_real_T(&Yselj, 2);
  emxInit_real_T(&Yseljc, 2);
  emxInit_real_T(&lmd, 2);
  emxInit_real_T(&OMG, 3);
  emxInit_real_T(&postprob, 2);
  emxInit_int32_T(&ind, 1);
  emxInit_real_T(&qqunassigned, 1);
  emxInit_real_T(&Ytri, 2);
  emxInit_boolean_T(&NanGroups, 1);
  emxInit_int32_T(&r, 1);
  emxInit_int32_T(&r1, 1);
  emxInit_int32_T(&r2, 1);
  emxInit_int32_T(&idx, 1);
  emxInit_real_T(&x, 1);
  emxInit_real_T(&b_Ytri, 2);
  emxInit_real_T(&r3, 2);
  for (b_i = 0; b_i < i; b_i++) {
    if ((msg == 1.0) && (b_i + 1U <= (unsigned int)tsampling)) {
      tic(&tstart_tv_sec, &tstart_tv_nsec);
    }
    if (msg == 2.0) {
      /*  disp(['Iteration ' num2str(i)]) */
      Rprintf("Iteration %.0f\n", (double)b_i + 1.0);
      //fflush(stdout);
    }
    if (NoPriorNini == 1) {
      d_rand(k, out->idx);
    } else {
      loop_ub = RandNumbForNini->size[0];
      i1 = out->idx->size[0];
      out->idx->size[0] = RandNumbForNini->size[0];
      emxEnsureCapacity_real_T(out->idx, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        out->idx->data[i1] =
            RandNumbForNini->data[i1 + RandNumbForNini->size[0] * b_i];
      }
    }
    y = blockedSummation(out->idx, out->idx->size[0]);
    loop_ub = out->idx->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->idx->data[i1] = h * out->idx->data[i1] / y;
    }
    nx = out->idx->size[0];
    for (loop_ub = 0; loop_ub < nx; loop_ub++) {
      out->idx->data[loop_ub] = floor(out->idx->data[loop_ub]);
    }
    i1 = cini->size[0] * cini->size[1];
    cini->size[0] = (int)k;
    cini->size[1] = v;
    emxEnsureCapacity_real_T(cini, i1);
    for (j = 0; j < i2; j++) {
      ilow = (((double)j + 1.0) - 1.0) * ((double)v + 1.0) + 1.0;
      iup = ((double)j + 1.0) * ((double)v + 1.0);
      i1 = b_index->size[0] * b_index->size[1];
      b_index->size[0] = 1;
      b_index->size[1] = i3;
      emxEnsureCapacity_real_T(b_index, i1);
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        b_index->data[i1] = C->data[b_i + C->size[0] * i1];
      }
      if (ilow > iup) {
        i1 = 0;
        b_y = 0;
      } else {
        i1 = (int)ilow - 1;
        b_y = (int)iup;
      }
      /*  cini(j,:)=mean(Y(selj,:)); */
      loop_ub = b_y - i1;
      b_y = Yselj->size[0] * Yselj->size[1];
      Yselj->size[0] = loop_ub;
      Yselj->size[1] = i4;
      emxEnsureCapacity_real_T(Yselj, b_y);
      for (b_y = 0; b_y < e_loop_ub; b_y++) {
        for (vlen = 0; vlen < loop_ub; vlen++) {
          Yselj->data[vlen + Yselj->size[0] * b_y] =
              out->Y->data[((int)C->data[b_i + C->size[0] * (i1 + vlen)] +
                            out->Y->size[0] * b_y) -
                           1];
        }
      }
      combineVectorElements(Yselj, Yseljc);
      loop_ub = Yseljc->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        cini->data[j + cini->size[0] * i1] = Yseljc->data[i1] / b_v;
      }
      i1 = Yseljc->size[0] * Yseljc->size[1];
      Yseljc->size[0] = Yselj->size[0];
      Yseljc->size[1] = Yselj->size[1];
      emxEnsureCapacity_real_T(Yseljc, i1);
      loop_ub = Yselj->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        nx = Yselj->size[0];
        for (b_y = 0; b_y < nx; b_y++) {
          Yseljc->data[b_y + i1] = Yselj->data[b_y + Yselj->size[0] * i1] -
                                   cini->data[j + cini->size[0] * i1];
        }
      }
      loop_ub = Yseljc->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        nx = Yseljc->size[1];
        for (b_y = 0; b_y < nx; b_y++) {
          sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                         sigmaini->size[0] * sigmaini->size[1] * j] =
              Yseljc->data[b_y] * Yseljc->data[i1] / c_v;
        }
      }
      /*  lines above are a faster solution for instruction below */
      /*  sigmaini(:,:,j)=cov(Y(selj,:)); */
    }
    restrSigmaGPCM(sigmaini, out->idx, restrfactorSTRUCT_pars,
                   restrfactorSTRUCT_cdet, restrfactorSTRUCT_shw,
                   restrfactorSTRUCT_shb, restrfactorSTRUCT_maxiterDSR,
                   restrfactorSTRUCT_maxiterS, restrfactorSTRUCT_tolR,
                   restrfactorSTRUCT_tolS, restrfactorSTRUCT_userepmat,
                   restrfactorSTRUCT_zerotol, lmd, OMG);
    /*  sigmaopt will be final estimate of the covariance matrices */
    /*  sigmaopt=sigmaini; */
    iup = 0.0;
    mudiff = 1.0E+15;
    i1 = postprob->size[0] * postprob->size[1];
    postprob->size[0] = n;
    postprob->size[1] = (int)k;
    emxEnsureCapacity_real_T(postprob, i1);
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      postprob->data[i1] = 0.0;
    }
    i1 = ind->size[0];
    ind->size[0] = n;
    emxEnsureCapacity_int32_T(ind, i1);
    for (i1 = 0; i1 < d_loop_ub; i1++) {
      ind->data[i1] = 0;
    }
    /*  refsteps "concentration" steps will be carried out */
    while ((mudiff > reftol) && (iup < refsteps)) {
      iup++;
      if (equalweights) {
        /*  In this case we are (ideally) assuming equally sized groups */
        for (j = 0; j < loop_ub_tmp; j++) {
          /* logmvnpdfFS produces log of Multivariate normal probability density
           * function (pdf) */
          /*  */
          /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
           * function</a> */
          /*  */
          /*  This function is a much faster version than (log of) Matlab
           * function */
          /*  mvnpdf.  If this function is called without optional arguments
           * than it */
          /*  uses matlab function bsxfun to compute */
          /*  the deviations form the means and no mex function. */
          /*  If this function is called with the four optional input */
          /*  arguments X0, eyed, n and d a mex function based on C code is
           * directly used. */
          /*  Additional details follow: in order to compute the kernel of the
           * quadratic form */
          /*  at the exponent logmvnpdfFS creates an identity of size length(Mu)
           * and */
          /*  similarly needs to compute length(Mu). These two quantites can be
           */
          /*  precalculated and supplied as input parameters. If logmvnpdfFS has
           * to be */
          /*  called thousands of times (as it happens for example in each
           * iteration */
          /*  of all procedures of cluster analysis based mixtures of
           * multivariate */
          /*  gaussian distributions). The same argument above applies to
           * scalars n */
          /*  and d which are directly passed to the compiled mex function */
          /*  */
          /*   Required input arguments: */
          /*  */
          /*  */
          /*  X :           Input data. Scalar, Vector or matrix. */
          /*                n x d data matrix; n observations and d variables.
           * Rows of */
          /*                Y represent observations, and columns represent
           * variables or coordinates. */
          /*                The (log of the) probability density of the
           * multivariate */
          /*                normal distribution will be evaluated at each row of
           * the */
          /*                n-by-d matrix Y */
          /*                Data Types - single|double */
          /*  Mu:           mean mu of the multivariate normal distribution.
           * 1-by-d vector. */
          /*                Data Types - single|double */
          /*  Sigma  :      covariance matrix of the multivariate normal
           * distribution. */
          /*                d-by-d matrix. */
          /*                Data Types - single|double */
          /*  */
          /*   Optional input arguments: */
          /*  */
          /*    X0  :       matrix of the same size of X which passes to C
           * function a container. */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'X0',X */
          /*                  Data Types - single|double */
          /*  */
          /*   eyed :       identity matrix of size length(Mu) wchich passes to
           * C function a container. */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*      n :       scalar which passes to C function size(X,1). */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*      d :       scalar which passes to C function length(Mu). */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*         msg  : Level of output to display. Scalar. */
          /*                Scalar which controls whether to display or not
           * messages */
          /*                on the screen. If msg==1 (default) messages are
           * displayed */
          /*                on the screen when cholesky of Sigma is impossibile
           */
          /*                else no message is displayed on the screen. When
           * Clolesky */
          /*                of Sigma is impossible -Inf output is returned. */
          /*                  Example - 'msg',1 */
          /*                  Data Types - single | double */
          /*  */
          /*      callmex  : call or not mex function to compute the result.
           * Boolean. */
          /*                Boolean which controls whether to call or not the
           * mex function. */
          /*                  Example - 'callmex',false */
          /*                  Data Types - boolean */
          /*  */
          /*  Output: */
          /*  */
          /*    y    :   log-density of the multivariate normal. Vector. Vector
           * with length */
          /*                equal to n which returns the log-density of the
           * multivariate normal */
          /*                distribution with mean Mu and covariance Sigma,
           * evaluated at each row */
          /*                of X. */
          /*  */
          /*  See also mvnpdf */
          /*  */
          /*  References: */
          /*  */
          /*  */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
           * function</a> */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*    Examples: */
          /* { */
          /*     % Call to logmvnpdfFS with 3 input arguments. */
          /*      n=20; */
          /*      v=2; */
          /*      X=randn(n,v); */
          /*      mu = [1 1]; Sigma = [.9 .4; .4 .3]; */
          /*      y = logmvnpdfFS(X, mu, Sigma); */
          /* } */
          /* { */
          /*      % Comparison with mvnpdf. */
          /*      % In this example we check the agreement of the results with
           * MATLAB */
          /*      % function mvnpdf. */
          /*      n=20000; */
          /*      v=2; */
          /*      X=randn(n,v); */
          /*      mu = [1 -1]; Sigma = [.9 .4; .4 .3]; */
          /*      y = logmvnpdfFS(X, mu, Sigma); */
          /*      y1=log(mvnpdf(X,mu,Sigma)); */
          /*      max(abs(y-y1)) */
          /*      % 2.842e-14 */
          /* } */
          /* { */
          /*    % Remark: Options X0, eyed, n, and d must be used together. */
          /* } */
          /* { */
          /*     % TIME COMPARISON USING TIC TOC. */
          /*     % In the examples below we compare the speed of the different
           * solutions */
          /*     % logmvnpdfFS with mex function and logmvnpdfFS without mex
           * function */
          /*  */
          /*     % In this code computation time is based on tic toc combined
           * with a series */
          /*     % of replications */
          /*  */
          /*     % nn = sample size */
          /*     % vv = number of variables */
          /*     nn=[100 200 500 1000 5000 10000 50000 100000]; */
          /*     vv=[2 5 10 20]; */
          /*  */
          /*     % rep =number of replications */
          /*     rep = 1000; */
          /*  */
          /*     ttMat=nan(length(nn) , length(vv)); */
          /*     ttFSwithMex=ttMat; */
          /*     ttFSnoMex=ttMat; */
          /*  */
          /*  */
          /*     Mat=0; tMat=0; */
          /*     FSwithmex=0; tFSwithMex=0; */
          /*     FSnoMex=0; tFSnoMex=0; */
          /*  */
          /*  */
          /*     in = 1; iv=1; */
          /*     for n = nn */
          /*         for v = vv */
          /*  */
          /*             X0 = zeros(n,v); */
          /*             eyed=eye(v); */
          /*  */
          /*             for i=1:rep */
          /*  */
          /*                 X = randn(n,v); */
          /*                 Mu = randn(1,v); */
          /*                 Sigma=cov(X); */
          /*  */
          /*                 %  Matlab function mvnpdf, (black line in plot) */
          /*                 Mat = tic; */
          /*                 y0 = mvnpdf(X, Mu, Sigma); */
          /*                 y0=log(y0); */
          /*                 tMat = tMat + toc(Mat); */
          /*  */
          /*                 % logmvnpdfFS using mex file for mean deviations,
           * (blue line in plot) */
          /*                 FSwithmex = tic; */
          /*                 yD = logmvnpdfFS(X, Mu, Sigma,X0,eyed,n,v); */
          /*                 tFSwithMex = tFSwithMex + toc(FSwithmex); */
          /*  */
          /*                 % logmvnpdfFS and no mex file for mean deviations.
           * (red line in plot) */
          /*                 FSnoMex = tic; */
          /*                 yI = logmvnpdfFS(X, Mu, Sigma); */
          /*                 tFSnoMex = tFSnoMex + toc(FSnoMex); */
          /*  */
          /*  */
          /*                 if (sum(sum(abs(y0-yD))))>10^-6  ||
           * (sum(sum(abs(y0-yI)))) >10^-6 */
          /*                    error('FSDA:logmvnpdfFS:ShouldBeEq','Difference
           * in results: stop'); */
          /*                 end */
          /*  */
          /*             end */
          /*  */
          /*             ttMat(in,iv) = tMat; */
          /*             ttFSwithMex(in,iv) = tFSwithMex; */
          /*             ttFSnoMex(in,iv) = tFSnoMex; */
          /*  */
          /*             Mat=0; tMat=0; */
          /*             FSwithmex=0; tFSwithMex=0; */
          /*             FSnoMex=0; tFSnoMex=0; */
          /*  */
          /*  */
          /*             disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
          /*             iv = iv+1; */
          /*  */
          /*         end */
          /*         in = in+1; */
          /*         iv = 1; */
          /*     end */
          /*  */
          /*  */
          /*     % Plotting part */
          /*     a=ver; */
          /*     a=a.Release; */
          /*     aa=1; */
          /*     bb=8; */
          /*  */
          /*     for ij=1:length(vv); */
          /*         subplot(length(vv)/2,2,ij) */
          /*         hold('on') */
          /*         plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
          /*         plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
          /*         plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
          /*  */
          /*         if ij==1 */
          /*             title(['v (number of variables)=' num2str(vv(ij)) '
           * version' a]) */
          /*         else */
          /*             title(['v=' num2str(vv(ij))]) */
          /*         end */
          /*         ylabel('Seconds') */
          /*         xlabel('Number of observations') */
          /*         if ij==4 */
          /*             legend('mvnpdf','FS+mex','FS','location','NorthWest')
           */
          /*         end */
          /*     end */
          /*  */
          /*     hold off; */
          /* } */
          /* { */
          /*     %% TIME COMPARISON USING TIMEIT FUNCTION. */
          /*     % Remark: timeit function is present from  MATLAB 2013b */
          /*  */
          /*     if verLessThan('matlab', '8.2.0') */
          /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','This example needs
           * routine timeit which has been introduced in Matlab 2013b') */
          /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','You have a version
           * of Matlab which is < 2013b and you cannot run this example') */
          /*     else */
          /*         % nn = sample size */
          /*         % vv = number of variables */
          /*         nn=[100 200 500 1000 5000 10000 50000 100000]; */
          /*         vv=[2 5 10 20]; */
          /*  */
          /*         ttMat=nan(length(nn) , length(vv)); */
          /*         ttFSwithMex=ttMat; */
          /*         ttFSnoMex=ttMat; */
          /*  */
          /*         in = 1; iv=1; */
          /*         for n = nn */
          /*             for v = vv */
          /*  */
          /*                 X0 = zeros(n,v); */
          /*                 eyed=eye(v); */
          /*  */
          /*  */
          /*                 X = randn(n,v); */
          /*                 Mu = randn(1,v); */
          /*                 Sigma=cov(X); */
          /*  */
          /*                 %  Matlab function mvnpdf */
          /*                 yMat = @() log(mvnpdf(X, Mu, Sigma)); */
          /*                 tMat = timeit(yMat); */
          /*  */
          /*  */
          /*                 % logmvnpdfFS using mex file for mean deviations.
           */
          /*                 yFSwithMex = @() logmvnpdfFS(X, Mu,
           * Sigma,X0,eyed,n,v); */
          /*                 tFSwithMex = timeit(yFSwithMex); */
          /*  */
          /*                 % logmvnpdfFS and no mex file for mean deviations.
           */
          /*                 yFSnoMex = @() logmvnpdfFS(X, Mu, Sigma); */
          /*                 tFSnoMex = timeit(yFSnoMex); */
          /*  */
          /*                 ttMat(in,iv) = tMat; */
          /*                 ttFSwithMex(in,iv) = tFSwithMex; */
          /*                 ttFSnoMex(in,iv) = tFSnoMex; */
          /*  */
          /*                 disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
          /*                 iv = iv+1; */
          /*  */
          /*             end */
          /*             in = in+1; */
          /*             iv = 1; */
          /*         end */
          /*  */
          /*  */
          /*         % Plotting part */
          /*         a=ver; */
          /*         a=a.Release; */
          /*         aa=1; */
          /*         bb=length(nn); */
          /*  */
          /*         for ij=1:length(vv); */
          /*             subplot(length(vv)/2,2,ij) */
          /*             hold('on') */
          /*             plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
          /*             plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
          /*             plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
          /*  */
          /*             if ij==1 */
          /*                 title(['v (number of variables) =' num2str(vv(ij))
           * ' version' a]) */
          /*             else */
          /*                 title(['v=' num2str(vv(ij))]) */
          /*             end */
          /*             xlabel('Number of observations') */
          /*             ylabel('Seconds') */
          /*  */
          /*             if ij==4 */
          /*                 legend('mvnpdf','FS+mex','FS','location','NorthWest')
           */
          /*             end */
          /*  */
          /*         end */
          /*  */
          /*         hold off; */
          /*     end */
          /* } */
          /* { */
          /*     % Example of the use of option msg 0. */
          /*     n=20000; */
          /*     v=2; */
          /*     X=randn(n,v); */
          /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
          /*     msg=0; */
          /*     X0=X; */
          /*     eyed=eye(v); */
          /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
          /*     % y is -Inf but no warning is shown. */
          /* } */
          /* { */
          /*     % Example of the use of option msg 1. */
          /*     n=20000; */
          /*     v=2; */
          /*     X=randn(n,v); */
          /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
          /*     msg=1; */
          /*     X0=X; */
          /*     eyed=eye(v); */
          /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
          /*     %  y is -Inf and warning is shown. */
          /* } */
          /*  Beginning  of code. */
          /*    Note that X/Sigma ~ X*inv(Sigma) ~ mrdivide(X,Sigma) are
           * equivalent. */
          /*  Take Choleski of Sigma */
          loop_ub = sigmaini->size[0];
          nx = sigmaini->size[1];
          i1 = Yselj->size[0] * Yselj->size[1];
          Yselj->size[0] = sigmaini->size[0];
          Yselj->size[1] = sigmaini->size[1];
          emxEnsureCapacity_real_T(Yselj, i1);
          for (i1 = 0; i1 < nx; i1++) {
            for (b_y = 0; b_y < loop_ub; b_y++) {
              Yselj->data[b_y + Yselj->size[0] * i1] =
                  sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                                 sigmaini->size[0] * sigmaini->size[1] * j];
            }
          }
          nx = cholesky(Yselj);
          if (nx != 0) {
            ll->data[ll->size[0] * j] = rtMinusInf;
          } else {
            /*  Define the following value: d*log(2*pi)/2 */
            /*  Compute log(sqrt(diag(Sigma))), and define a constant value. */
            diag(Yselj, x);
            nx = x->size[0];
            for (loop_ub = 0; loop_ub < nx; loop_ub++) {
              x->data[loop_ub] = log(x->data[loop_ub]);
            }
            ilow =
                blockedSummation(x, x->size[0]) + 0.918938533204673 * (double)v;
            i1 = Ytri->size[0] * Ytri->size[1];
            Ytri->size[0] = out->Y->size[0];
            loop_ub = out->Y->size[1];
            Ytri->size[1] = out->Y->size[1];
            emxEnsureCapacity_real_T(Ytri, i1);
            for (i1 = 0; i1 < loop_ub; i1++) {
              nx = out->Y->size[0];
              for (b_y = 0; b_y < nx; b_y++) {
                Ytri->data[b_y + Ytri->size[0] * i1] =
                    out->Y->data[b_y + out->Y->size[0] * i1] -
                    cini->data[j + cini->size[0] * i1];
              }
            }
            b_mldivide(Yselj, eyev, r3);
            b_mtimes(Ytri, r3, Yselj);
            power(Yselj, r3);
            sum(r3, qqunassigned);
            loop_ub = qqunassigned->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              ll->data[i1 + ll->size[0] * j] =
                  -0.5 * qqunassigned->data[i1] - ilow;
            }
            /*  Note that the instruction above is slightly faster than */
            /*  y = -0.5*sum((X*inv(Sigma)).^2,2)- Const; %#ok<MINV> */
          }
        }
      } else {
        /*  In this case we allow for different group weights or we are */
        /*  assuming a mixture model */
        for (j = 0; j < loop_ub_tmp; j++) {
          /*  REMARK: we use log(niini(j)) instead of log(niini(j)/h) */
          /*  because h is constant */
          obj = log(out->idx->data[j] / h);
          /* logmvnpdfFS produces log of Multivariate normal probability density
           * function (pdf) */
          /*  */
          /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
           * function</a> */
          /*  */
          /*  This function is a much faster version than (log of) Matlab
           * function */
          /*  mvnpdf.  If this function is called without optional arguments
           * than it */
          /*  uses matlab function bsxfun to compute */
          /*  the deviations form the means and no mex function. */
          /*  If this function is called with the four optional input */
          /*  arguments X0, eyed, n and d a mex function based on C code is
           * directly used. */
          /*  Additional details follow: in order to compute the kernel of the
           * quadratic form */
          /*  at the exponent logmvnpdfFS creates an identity of size length(Mu)
           * and */
          /*  similarly needs to compute length(Mu). These two quantites can be
           */
          /*  precalculated and supplied as input parameters. If logmvnpdfFS has
           * to be */
          /*  called thousands of times (as it happens for example in each
           * iteration */
          /*  of all procedures of cluster analysis based mixtures of
           * multivariate */
          /*  gaussian distributions). The same argument above applies to
           * scalars n */
          /*  and d which are directly passed to the compiled mex function */
          /*  */
          /*   Required input arguments: */
          /*  */
          /*  */
          /*  X :           Input data. Scalar, Vector or matrix. */
          /*                n x d data matrix; n observations and d variables.
           * Rows of */
          /*                Y represent observations, and columns represent
           * variables or coordinates. */
          /*                The (log of the) probability density of the
           * multivariate */
          /*                normal distribution will be evaluated at each row of
           * the */
          /*                n-by-d matrix Y */
          /*                Data Types - single|double */
          /*  Mu:           mean mu of the multivariate normal distribution.
           * 1-by-d vector. */
          /*                Data Types - single|double */
          /*  Sigma  :      covariance matrix of the multivariate normal
           * distribution. */
          /*                d-by-d matrix. */
          /*                Data Types - single|double */
          /*  */
          /*   Optional input arguments: */
          /*  */
          /*    X0  :       matrix of the same size of X which passes to C
           * function a container. */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'X0',X */
          /*                  Data Types - single|double */
          /*  */
          /*   eyed :       identity matrix of size length(Mu) wchich passes to
           * C function a container. */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*      n :       scalar which passes to C function size(X,1). */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*      d :       scalar which passes to C function length(Mu). */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*         msg  : Level of output to display. Scalar. */
          /*                Scalar which controls whether to display or not
           * messages */
          /*                on the screen. If msg==1 (default) messages are
           * displayed */
          /*                on the screen when cholesky of Sigma is impossibile
           */
          /*                else no message is displayed on the screen. When
           * Clolesky */
          /*                of Sigma is impossible -Inf output is returned. */
          /*                  Example - 'msg',1 */
          /*                  Data Types - single | double */
          /*  */
          /*      callmex  : call or not mex function to compute the result.
           * Boolean. */
          /*                Boolean which controls whether to call or not the
           * mex function. */
          /*                  Example - 'callmex',false */
          /*                  Data Types - boolean */
          /*  */
          /*  Output: */
          /*  */
          /*    y    :   log-density of the multivariate normal. Vector. Vector
           * with length */
          /*                equal to n which returns the log-density of the
           * multivariate normal */
          /*                distribution with mean Mu and covariance Sigma,
           * evaluated at each row */
          /*                of X. */
          /*  */
          /*  See also mvnpdf */
          /*  */
          /*  References: */
          /*  */
          /*  */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
           * function</a> */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*    Examples: */
          /* { */
          /*     % Call to logmvnpdfFS with 3 input arguments. */
          /*      n=20; */
          /*      v=2; */
          /*      X=randn(n,v); */
          /*      mu = [1 1]; Sigma = [.9 .4; .4 .3]; */
          /*      y = logmvnpdfFS(X, mu, Sigma); */
          /* } */
          /* { */
          /*      % Comparison with mvnpdf. */
          /*      % In this example we check the agreement of the results with
           * MATLAB */
          /*      % function mvnpdf. */
          /*      n=20000; */
          /*      v=2; */
          /*      X=randn(n,v); */
          /*      mu = [1 -1]; Sigma = [.9 .4; .4 .3]; */
          /*      y = logmvnpdfFS(X, mu, Sigma); */
          /*      y1=log(mvnpdf(X,mu,Sigma)); */
          /*      max(abs(y-y1)) */
          /*      % 2.842e-14 */
          /* } */
          /* { */
          /*    % Remark: Options X0, eyed, n, and d must be used together. */
          /* } */
          /* { */
          /*     % TIME COMPARISON USING TIC TOC. */
          /*     % In the examples below we compare the speed of the different
           * solutions */
          /*     % logmvnpdfFS with mex function and logmvnpdfFS without mex
           * function */
          /*  */
          /*     % In this code computation time is based on tic toc combined
           * with a series */
          /*     % of replications */
          /*  */
          /*     % nn = sample size */
          /*     % vv = number of variables */
          /*     nn=[100 200 500 1000 5000 10000 50000 100000]; */
          /*     vv=[2 5 10 20]; */
          /*  */
          /*     % rep =number of replications */
          /*     rep = 1000; */
          /*  */
          /*     ttMat=nan(length(nn) , length(vv)); */
          /*     ttFSwithMex=ttMat; */
          /*     ttFSnoMex=ttMat; */
          /*  */
          /*  */
          /*     Mat=0; tMat=0; */
          /*     FSwithmex=0; tFSwithMex=0; */
          /*     FSnoMex=0; tFSnoMex=0; */
          /*  */
          /*  */
          /*     in = 1; iv=1; */
          /*     for n = nn */
          /*         for v = vv */
          /*  */
          /*             X0 = zeros(n,v); */
          /*             eyed=eye(v); */
          /*  */
          /*             for i=1:rep */
          /*  */
          /*                 X = randn(n,v); */
          /*                 Mu = randn(1,v); */
          /*                 Sigma=cov(X); */
          /*  */
          /*                 %  Matlab function mvnpdf, (black line in plot) */
          /*                 Mat = tic; */
          /*                 y0 = mvnpdf(X, Mu, Sigma); */
          /*                 y0=log(y0); */
          /*                 tMat = tMat + toc(Mat); */
          /*  */
          /*                 % logmvnpdfFS using mex file for mean deviations,
           * (blue line in plot) */
          /*                 FSwithmex = tic; */
          /*                 yD = logmvnpdfFS(X, Mu, Sigma,X0,eyed,n,v); */
          /*                 tFSwithMex = tFSwithMex + toc(FSwithmex); */
          /*  */
          /*                 % logmvnpdfFS and no mex file for mean deviations.
           * (red line in plot) */
          /*                 FSnoMex = tic; */
          /*                 yI = logmvnpdfFS(X, Mu, Sigma); */
          /*                 tFSnoMex = tFSnoMex + toc(FSnoMex); */
          /*  */
          /*  */
          /*                 if (sum(sum(abs(y0-yD))))>10^-6  ||
           * (sum(sum(abs(y0-yI)))) >10^-6 */
          /*                    error('FSDA:logmvnpdfFS:ShouldBeEq','Difference
           * in results: stop'); */
          /*                 end */
          /*  */
          /*             end */
          /*  */
          /*             ttMat(in,iv) = tMat; */
          /*             ttFSwithMex(in,iv) = tFSwithMex; */
          /*             ttFSnoMex(in,iv) = tFSnoMex; */
          /*  */
          /*             Mat=0; tMat=0; */
          /*             FSwithmex=0; tFSwithMex=0; */
          /*             FSnoMex=0; tFSnoMex=0; */
          /*  */
          /*  */
          /*             disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
          /*             iv = iv+1; */
          /*  */
          /*         end */
          /*         in = in+1; */
          /*         iv = 1; */
          /*     end */
          /*  */
          /*  */
          /*     % Plotting part */
          /*     a=ver; */
          /*     a=a.Release; */
          /*     aa=1; */
          /*     bb=8; */
          /*  */
          /*     for ij=1:length(vv); */
          /*         subplot(length(vv)/2,2,ij) */
          /*         hold('on') */
          /*         plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
          /*         plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
          /*         plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
          /*  */
          /*         if ij==1 */
          /*             title(['v (number of variables)=' num2str(vv(ij)) '
           * version' a]) */
          /*         else */
          /*             title(['v=' num2str(vv(ij))]) */
          /*         end */
          /*         ylabel('Seconds') */
          /*         xlabel('Number of observations') */
          /*         if ij==4 */
          /*             legend('mvnpdf','FS+mex','FS','location','NorthWest')
           */
          /*         end */
          /*     end */
          /*  */
          /*     hold off; */
          /* } */
          /* { */
          /*     %% TIME COMPARISON USING TIMEIT FUNCTION. */
          /*     % Remark: timeit function is present from  MATLAB 2013b */
          /*  */
          /*     if verLessThan('matlab', '8.2.0') */
          /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','This example needs
           * routine timeit which has been introduced in Matlab 2013b') */
          /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','You have a version
           * of Matlab which is < 2013b and you cannot run this example') */
          /*     else */
          /*         % nn = sample size */
          /*         % vv = number of variables */
          /*         nn=[100 200 500 1000 5000 10000 50000 100000]; */
          /*         vv=[2 5 10 20]; */
          /*  */
          /*         ttMat=nan(length(nn) , length(vv)); */
          /*         ttFSwithMex=ttMat; */
          /*         ttFSnoMex=ttMat; */
          /*  */
          /*         in = 1; iv=1; */
          /*         for n = nn */
          /*             for v = vv */
          /*  */
          /*                 X0 = zeros(n,v); */
          /*                 eyed=eye(v); */
          /*  */
          /*  */
          /*                 X = randn(n,v); */
          /*                 Mu = randn(1,v); */
          /*                 Sigma=cov(X); */
          /*  */
          /*                 %  Matlab function mvnpdf */
          /*                 yMat = @() log(mvnpdf(X, Mu, Sigma)); */
          /*                 tMat = timeit(yMat); */
          /*  */
          /*  */
          /*                 % logmvnpdfFS using mex file for mean deviations.
           */
          /*                 yFSwithMex = @() logmvnpdfFS(X, Mu,
           * Sigma,X0,eyed,n,v); */
          /*                 tFSwithMex = timeit(yFSwithMex); */
          /*  */
          /*                 % logmvnpdfFS and no mex file for mean deviations.
           */
          /*                 yFSnoMex = @() logmvnpdfFS(X, Mu, Sigma); */
          /*                 tFSnoMex = timeit(yFSnoMex); */
          /*  */
          /*                 ttMat(in,iv) = tMat; */
          /*                 ttFSwithMex(in,iv) = tFSwithMex; */
          /*                 ttFSnoMex(in,iv) = tFSnoMex; */
          /*  */
          /*                 disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
          /*                 iv = iv+1; */
          /*  */
          /*             end */
          /*             in = in+1; */
          /*             iv = 1; */
          /*         end */
          /*  */
          /*  */
          /*         % Plotting part */
          /*         a=ver; */
          /*         a=a.Release; */
          /*         aa=1; */
          /*         bb=length(nn); */
          /*  */
          /*         for ij=1:length(vv); */
          /*             subplot(length(vv)/2,2,ij) */
          /*             hold('on') */
          /*             plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
          /*             plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
          /*             plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
          /*  */
          /*             if ij==1 */
          /*                 title(['v (number of variables) =' num2str(vv(ij))
           * ' version' a]) */
          /*             else */
          /*                 title(['v=' num2str(vv(ij))]) */
          /*             end */
          /*             xlabel('Number of observations') */
          /*             ylabel('Seconds') */
          /*  */
          /*             if ij==4 */
          /*                 legend('mvnpdf','FS+mex','FS','location','NorthWest')
           */
          /*             end */
          /*  */
          /*         end */
          /*  */
          /*         hold off; */
          /*     end */
          /* } */
          /* { */
          /*     % Example of the use of option msg 0. */
          /*     n=20000; */
          /*     v=2; */
          /*     X=randn(n,v); */
          /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
          /*     msg=0; */
          /*     X0=X; */
          /*     eyed=eye(v); */
          /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
          /*     % y is -Inf but no warning is shown. */
          /* } */
          /* { */
          /*     % Example of the use of option msg 1. */
          /*     n=20000; */
          /*     v=2; */
          /*     X=randn(n,v); */
          /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
          /*     msg=1; */
          /*     X0=X; */
          /*     eyed=eye(v); */
          /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
          /*     %  y is -Inf and warning is shown. */
          /* } */
          /*  Beginning  of code. */
          /*    Note that X/Sigma ~ X*inv(Sigma) ~ mrdivide(X,Sigma) are
           * equivalent. */
          /*  Take Choleski of Sigma */
          loop_ub = sigmaini->size[0];
          nx = sigmaini->size[1];
          i1 = Yselj->size[0] * Yselj->size[1];
          Yselj->size[0] = sigmaini->size[0];
          Yselj->size[1] = sigmaini->size[1];
          emxEnsureCapacity_real_T(Yselj, i1);
          for (i1 = 0; i1 < nx; i1++) {
            for (b_y = 0; b_y < loop_ub; b_y++) {
              Yselj->data[b_y + Yselj->size[0] * i1] =
                  sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                                 sigmaini->size[0] * sigmaini->size[1] * j];
            }
          }
          nx = cholesky(Yselj);
          if (nx != 0) {
            i1 = qqunassigned->size[0];
            qqunassigned->size[0] = 1;
            emxEnsureCapacity_real_T(qqunassigned, i1);
            qqunassigned->data[0] = rtMinusInf;
          } else {
            /*  Define the following value: d*log(2*pi)/2 */
            /*  Compute log(sqrt(diag(Sigma))), and define a constant value. */
            diag(Yselj, x);
            nx = x->size[0];
            for (loop_ub = 0; loop_ub < nx; loop_ub++) {
              x->data[loop_ub] = log(x->data[loop_ub]);
            }
            ilow =
                blockedSummation(x, x->size[0]) + 0.918938533204673 * (double)v;
            i1 = Ytri->size[0] * Ytri->size[1];
            Ytri->size[0] = out->Y->size[0];
            Ytri->size[1] = out->Y->size[1];
            emxEnsureCapacity_real_T(Ytri, i1);
            loop_ub = out->Y->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              nx = out->Y->size[0];
              for (b_y = 0; b_y < nx; b_y++) {
                Ytri->data[b_y + Ytri->size[0] * i1] =
                    out->Y->data[b_y + out->Y->size[0] * i1] -
                    cini->data[j + cini->size[0] * i1];
              }
            }
            b_mldivide(Yselj, eyev, r3);
            b_mtimes(Ytri, r3, Yselj);
            power(Yselj, r3);
            sum(r3, qqunassigned);
            loop_ub = qqunassigned->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              qqunassigned->data[i1] = -0.5 * qqunassigned->data[i1] - ilow;
            }
            /*  Note that the instruction above is slightly faster than */
            /*  y = -0.5*sum((X*inv(Sigma)).^2,2)- Const; %#ok<MINV> */
          }
          loop_ub = qqunassigned->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            ll->data[i1 + ll->size[0] * j] = obj + qqunassigned->data[i1];
          }
          /*  Line above is faster but equivalent to */
          /*  ll(:,j)= (niini(j)/h)*mvnpdf(Y,cini(j,:),sigmaini(:,:,j)); */
        }
      }
      if (mixt == 2.0) {
        i1 = postprobold->size[0] * postprobold->size[1];
        postprobold->size[0] = postprob->size[0];
        postprobold->size[1] = postprob->size[1];
        emxEnsureCapacity_real_T(postprobold, i1);
        loop_ub = postprob->size[0] * postprob->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          postprobold->data[i1] = postprob->data[i1];
        }
        estepFS(ll, &obj, out->postprob, qqunassigned);
        i1 = postprob->size[0] * postprob->size[1];
        postprob->size[0] = out->postprob->size[0];
        postprob->size[1] = 1;
        emxEnsureCapacity_real_T(postprob, i1);
        loop_ub = out->postprob->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          postprob->data[i1] = out->postprob->data[i1];
        }
        /*  Sort the n likelihood contributions */
        /*  qq contains the largest n*(1-alpha) (weighted) likelihood
         * contributions */
        f_sort(qqunassigned, idx);
        i1 = x->size[0];
        x->size[0] = idx->size[0];
        emxEnsureCapacity_real_T(x, i1);
        loop_ub = idx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          x->data[i1] = idx->data[i1];
        }
        /*  qq = vector of size h which contains the indexes associated with the
         * largest n(1-alpha) */
        /*  (weighted) likelihood contributions */
        if (h + 1.0 > n) {
          i1 = 0;
          b_y = 0;
        } else {
          i1 = (int)(h + 1.0) - 1;
          b_y = n;
        }
        loop_ub = b_y - i1;
        b_y = qqunassigned->size[0];
        qqunassigned->size[0] = loop_ub;
        emxEnsureCapacity_real_T(qqunassigned, b_y);
        for (b_y = 0; b_y < loop_ub; b_y++) {
          qqunassigned->data[b_y] = x->data[i1 + b_y];
        }
        if (1.0 > h) {
          nx = 0;
        } else {
          nx = (int)h;
        }
        /*  Ytri = n(1-alpha)-by-v matrix associated with the units */
        /*  which have the largest n(1-alpha) likelihood contributions */
        m = out->Y->size[1];
        b_y = Ytri->size[0] * Ytri->size[1];
        Ytri->size[0] = nx;
        Ytri->size[1] = out->Y->size[1];
        emxEnsureCapacity_real_T(Ytri, b_y);
        for (b_y = 0; b_y < m; b_y++) {
          for (vlen = 0; vlen < nx; vlen++) {
            Ytri->data[vlen + Ytri->size[0] * b_y] =
                out->Y->data[((int)x->data[vlen] + out->Y->size[0] * b_y) - 1];
          }
        }
        b_y = idx->size[0];
        idx->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(idx, b_y);
        for (b_y = 0; b_y < loop_ub; b_y++) {
          idx->data[b_y] = (int)x->data[i1 + b_y];
        }
        loop_ub = idx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          postprob->data[idx->data[i1] - 1] = 0.0;
        }
        /*  M-step update of niini */
        /*  niini = numerator of component probabilities */
        combineVectorElements(postprob, Yseljc);
        i1 = out->idx->size[0];
        out->idx->size[0] = Yseljc->size[1];
        emxEnsureCapacity_real_T(out->idx, i1);
        loop_ub = Yseljc->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          out->idx->data[i1] = Yseljc->data[i1];
        }
      } else {
        i1 = indold->size[0];
        indold->size[0] = ind->size[0];
        emxEnsureCapacity_int32_T(indold, i1);
        loop_ub = ind->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          indold->data[i1] = ind->data[i1];
        }
        /*  In this part we select the untrimmed units. */
        /*  They are those which have the n(1-alpha) largest values among the */
        /*  maxima of each row of matrix ll. */
        /*  vector disc of length(n) contains the (weighted) contribution of */
        /*  each unit to the log likelihood. */
        g_maximum(ll, groupind, idx);
        i1 = ind->size[0];
        ind->size[0] = idx->size[0];
        emxEnsureCapacity_int32_T(ind, i1);
        loop_ub = idx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          ind->data[i1] = idx->data[i1];
        }
        /*  Sort the n likelihood contributions */
        /*  qq contains the largest n*(1-alpha) (weighted) likelihood
         * contributions */
        f_sort(groupind, idx);
        i1 = x->size[0];
        x->size[0] = idx->size[0];
        emxEnsureCapacity_real_T(x, i1);
        loop_ub = idx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          x->data[i1] = idx->data[i1];
        }
        /*  qq = vector of size h which contains the indexes associated with the
         * largest n(1-alpha) */
        /*  (weighted) likelihood contributions */
        if (h + 1.0 > x->size[0]) {
          i1 = 0;
          b_y = 0;
        } else {
          i1 = (int)(h + 1.0) - 1;
          b_y = x->size[0];
        }
        loop_ub = b_y - i1;
        b_y = qqunassigned->size[0];
        qqunassigned->size[0] = loop_ub;
        emxEnsureCapacity_real_T(qqunassigned, b_y);
        for (b_y = 0; b_y < loop_ub; b_y++) {
          qqunassigned->data[b_y] = x->data[i1 + b_y];
        }
        if (1.0 > h) {
          nx = 0;
        } else {
          nx = (int)h;
        }
        /*  Ytri = n(1-alpha)-by-v matrix associated with the units */
        /*  which have the largest n(1-alpha) likelihood contributions */
        m = out->Y->size[1];
        b_y = Ytri->size[0] * Ytri->size[1];
        Ytri->size[0] = nx;
        Ytri->size[1] = out->Y->size[1];
        emxEnsureCapacity_real_T(Ytri, b_y);
        for (b_y = 0; b_y < m; b_y++) {
          for (vlen = 0; vlen < nx; vlen++) {
            Ytri->data[vlen + Ytri->size[0] * b_y] =
                out->Y->data[((int)x->data[vlen] + out->Y->size[0] * b_y) - 1];
          }
        }
        /*  Ytriind = grouping indicator vector (of size n(1-alpha)) */
        /*  associated to Ytri */
        b_y = groupind->size[0];
        groupind->size[0] = nx;
        emxEnsureCapacity_real_T(groupind, b_y);
        for (b_y = 0; b_y < nx; b_y++) {
          groupind->data[b_y] = ind->data[(int)x->data[b_y] - 1];
        }
        /*  ind is the identifier vector */
        /*  trimmed units have a value of ind=0 */
        b_y = idx->size[0];
        idx->size[0] = loop_ub;
        emxEnsureCapacity_int32_T(idx, b_y);
        for (b_y = 0; b_y < loop_ub; b_y++) {
          idx->data[b_y] = (int)x->data[i1 + b_y];
        }
        loop_ub = idx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          ind->data[idx->data[i1] - 1] = 0;
        }
      }
      if (mixt == 1.0) {
        /*   expll=exp(ll(qq,:)); */
        /*   sumll=sum(expll,2); */
        /*   postprob=bsxfun(@rdivide,expll,sumll); */
        /*  E-step: computation of posterior probabilities for untrimmed */
        /*  units. In the context of mixture models posterior */
        /*  probabilities will be used to estimate new component */
        /*  probabilities of the mixtures, new centroids and new */
        /*  covariance matrices */
        i1 = postprobold->size[0] * postprobold->size[1];
        postprobold->size[0] = postprob->size[0];
        postprobold->size[1] = postprob->size[1];
        emxEnsureCapacity_real_T(postprobold, i1);
        loop_ub = postprob->size[0] * postprob->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          postprobold->data[i1] = postprob->data[i1];
        }
        b_estepFS(ll, &obj, out->postprob);
        i1 = postprob->size[0] * postprob->size[1];
        postprob->size[0] = out->postprob->size[0];
        postprob->size[1] = 1;
        emxEnsureCapacity_real_T(postprob, i1);
        loop_ub = out->postprob->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          postprob->data[i1] = out->postprob->data[i1];
        }
        i1 = idx->size[0];
        idx->size[0] = qqunassigned->size[0];
        emxEnsureCapacity_int32_T(idx, i1);
        loop_ub = qqunassigned->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          idx->data[i1] = (int)qqunassigned->data[i1];
        }
        loop_ub = idx->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          postprob->data[idx->data[i1] - 1] = 0.0;
        }
        /*  M-step update of niini */
        /*  niini = numerator of component probabilities */
        combineVectorElements(postprob, Yseljc);
        i1 = out->idx->size[0];
        out->idx->size[0] = Yseljc->size[1];
        emxEnsureCapacity_real_T(out->idx, i1);
        loop_ub = Yseljc->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          out->idx->data[i1] = Yseljc->data[i1];
        }
      }
      /*  M-step: parameters are updated */
      /*  Matrix cini contains estimates of the new k centroids */
      /*  Array sigmaini contains estimates of the new covariance matrices */
      for (j = 0; j < loop_ub_tmp; j++) {
        if (mixt >= 1.0) {
          if (out->idx->data[j] > 0.0) {
            /*  Matrix cini is updated using weighted means. The weights */
            /*  are given by the posterior probabilities. */
            /*  Note that Y is used instead of Ytri because posterior */
            /*  probabilities for unassigned units are 0. */
            i1 = x->size[0];
            x->size[0] = out->Y->size[0];
            emxEnsureCapacity_real_T(x, i1);
            loop_ub = out->Y->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              x->data[i1] =
                  out->Y->data[i1] * postprob->data[i1 + postprob->size[0] * j];
            }
            y = blockedSummation(x, x->size[0]);
            loop_ub = cini->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              cini->data[j + cini->size[0] * i1] = y / out->idx->data[j];
            }
            /*  Ytric = [X(:,1).*sqweights   X(:,2).*sqweights ...
             * X(:,end).*sqweights] */
            i1 = qqunassigned->size[0];
            qqunassigned->size[0] = postprob->size[0];
            emxEnsureCapacity_real_T(qqunassigned, i1);
            nx = postprob->size[0];
            for (loop_ub = 0; loop_ub < nx; loop_ub++) {
              qqunassigned->data[loop_ub] =
                  sqrt(postprob->data[loop_ub + postprob->size[0] * j]);
            }
            obj = (out->Y->data[0] - cini->data[j]) * qqunassigned->data[0];
            m = sigmaini->size[0];
            loop_ub = sigmaini->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              for (b_y = 0; b_y < m; b_y++) {
                sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                               sigmaini->size[0] * sigmaini->size[1] * j] =
                    obj * obj / out->idx->data[j];
              }
            }
          } else {
            loop_ub = ey->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              nx = ey->size[0];
              for (b_y = 0; b_y < nx; b_y++) {
                sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                               sigmaini->size[0] * sigmaini->size[1] * j] =
                    ey->data[b_y + ey->size[0] * i1];
              }
            }
          }
        } else {
          /*  This is the "crisp assignment" setting */
          /*  Boolean index of units forming group j */
          /*  Size of group j */
          loop_ub = groupind->size[0];
          i1 = NanGroups->size[0];
          NanGroups->size[0] = groupind->size[0];
          emxEnsureCapacity_boolean_T(NanGroups, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            NanGroups->data[i1] = (groupind->data[i1] == (double)j + 1.0);
          }
          vlen = NanGroups->size[0];
          if (NanGroups->size[0] == 0) {
            b_y = 0;
          } else {
            b_y = NanGroups->data[0];
            for (loop_ub = 2; loop_ub <= vlen; loop_ub++) {
              b_y += NanGroups->data[loop_ub - 1];
            }
          }
          out->idx->data[j] = b_y;
          /*  Group j values */
          nx = groupind->size[0] - 1;
          m = 0;
          for (vlen = 0; vlen <= nx; vlen++) {
            if (groupind->data[vlen] == (double)j + 1.0) {
              m++;
            }
          }
          i1 = r->size[0];
          r->size[0] = m;
          emxEnsureCapacity_int32_T(r, i1);
          m = 0;
          for (vlen = 0; vlen <= nx; vlen++) {
            if (groupind->data[vlen] == (double)j + 1.0) {
              r->data[m] = vlen + 1;
              m++;
            }
          }
          loop_ub = Ytri->size[1];
          i1 = Yselj->size[0] * Yselj->size[1];
          Yselj->size[0] = r->size[0];
          Yselj->size[1] = Ytri->size[1];
          emxEnsureCapacity_real_T(Yselj, i1);
          for (i1 = 0; i1 < loop_ub; i1++) {
            nx = r->size[0];
            for (b_y = 0; b_y < nx; b_y++) {
              Yselj->data[b_y + Yselj->size[0] * i1] =
                  Ytri->data[(r->data[b_y] + Ytri->size[0] * i1) - 1];
            }
          }
          /*  Means of group j */
          combineVectorElements(Yselj, Yseljc);
          loop_ub = Yseljc->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            cini->data[j + cini->size[0] * i1] =
                Yseljc->data[i1] / out->idx->data[j];
          }
          /*  niini=sum(Ytri(:,v+1)==j); */
          if (out->idx->data[j] > 0.0) {
            /*  Covariance of group j: */
            /*  sigmaini(:,:,j)=cov(Ytrij); */
            /*  cov would recompute the sample means; code below is */
            /*  more efficient */
            /*  Important remark: DfM is a mex file with the compiled */
            /*  code of an efficient method to compute the following */
            /*  element by element operation: */
            /*  Ytrij = bsxfun(@minus,Ytrij,cini(j,:)); */
            /*  The mex has been compiled for the following */
            /*  platforms: 32 and 64 bit MS Windows, 64 bit Linux */
            /*  and 64 bit MacOS. However, if you experience an error */
            /*  in correspondence to the DfM execution, you should */
            /*  comment the DfM line below and uncomment the bsxfun */
            /*  instruction above. In contexts where this is called */
            /*  many times, this solution is much more performant. */
            loop_ub = Yselj->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              nx = Yselj->size[0];
              for (b_y = 0; b_y < nx; b_y++) {
                Yselj->data[b_y + Yselj->size[0] * i1] -=
                    cini->data[j + cini->size[0] * i1];
              }
            }
            c_mtimes(Yselj, Yselj, r3);
            loop_ub = r3->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              nx = r3->size[0];
              for (b_y = 0; b_y < nx; b_y++) {
                sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                               sigmaini->size[0] * sigmaini->size[1] * j] =
                    r3->data[b_y + r3->size[0] * i1] / out->idx->data[j];
              }
            }
          } else {
            loop_ub = ey->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              nx = ey->size[0];
              for (b_y = 0; b_y < nx; b_y++) {
                sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                               sigmaini->size[0] * sigmaini->size[1] * j] =
                    ey->data[b_y + ey->size[0] * i1];
              }
            }
          }
        }
      }
      if (restrfactor->usepreviousest) {
        b_restrSigmaGPCM(sigmaini, out->idx, restrfactorSTRUCT_pars,
                         restrfactorSTRUCT_cdet, restrfactorSTRUCT_shw,
                         restrfactorSTRUCT_shb, restrfactorSTRUCT_maxiterDSR,
                         restrfactorSTRUCT_maxiterS, restrfactorSTRUCT_tolR,
                         restrfactorSTRUCT_tolS, restrfactorSTRUCT_userepmat,
                         restrfactorSTRUCT_zerotol, lmd, OMG);
      } else {
        restrSigmaGPCM(sigmaini, out->idx, restrfactorSTRUCT_pars,
                       restrfactorSTRUCT_cdet, restrfactorSTRUCT_shw,
                       restrfactorSTRUCT_shb, restrfactorSTRUCT_maxiterDSR,
                       restrfactorSTRUCT_maxiterS, restrfactorSTRUCT_tolR,
                       restrfactorSTRUCT_tolS, restrfactorSTRUCT_userepmat,
                       restrfactorSTRUCT_zerotol, lmd, OMG);
      }
      /*  Calculus of the objective function (E-step) */
      /*  oldobj=obj; */
      obj = 0.0;
      if (mixt >= 1.0) {
        /*  Likelihood for mixture modelling */
        /*    log_lh is a h-by-k matrix where k is the number of Gaussian
         * components of the mixture */
        /*    log_lh is the log of component conditional density weighted by the
         * component */
        /*    probability.  The probability of j-th component is niini(j)/h */
        /*    log_lh(i,j) is log (Pr(point i|component j) * Prob( component j))
         */
        for (j = 0; j < loop_ub_tmp; j++) {
          obj = log(out->idx->data[j] / h);
          /* logmvnpdfFS produces log of Multivariate normal probability density
           * function (pdf) */
          /*  */
          /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
           * function</a> */
          /*  */
          /*  This function is a much faster version than (log of) Matlab
           * function */
          /*  mvnpdf.  If this function is called without optional arguments
           * than it */
          /*  uses matlab function bsxfun to compute */
          /*  the deviations form the means and no mex function. */
          /*  If this function is called with the four optional input */
          /*  arguments X0, eyed, n and d a mex function based on C code is
           * directly used. */
          /*  Additional details follow: in order to compute the kernel of the
           * quadratic form */
          /*  at the exponent logmvnpdfFS creates an identity of size length(Mu)
           * and */
          /*  similarly needs to compute length(Mu). These two quantites can be
           */
          /*  precalculated and supplied as input parameters. If logmvnpdfFS has
           * to be */
          /*  called thousands of times (as it happens for example in each
           * iteration */
          /*  of all procedures of cluster analysis based mixtures of
           * multivariate */
          /*  gaussian distributions). The same argument above applies to
           * scalars n */
          /*  and d which are directly passed to the compiled mex function */
          /*  */
          /*   Required input arguments: */
          /*  */
          /*  */
          /*  X :           Input data. Scalar, Vector or matrix. */
          /*                n x d data matrix; n observations and d variables.
           * Rows of */
          /*                Y represent observations, and columns represent
           * variables or coordinates. */
          /*                The (log of the) probability density of the
           * multivariate */
          /*                normal distribution will be evaluated at each row of
           * the */
          /*                n-by-d matrix Y */
          /*                Data Types - single|double */
          /*  Mu:           mean mu of the multivariate normal distribution.
           * 1-by-d vector. */
          /*                Data Types - single|double */
          /*  Sigma  :      covariance matrix of the multivariate normal
           * distribution. */
          /*                d-by-d matrix. */
          /*                Data Types - single|double */
          /*  */
          /*   Optional input arguments: */
          /*  */
          /*    X0  :       matrix of the same size of X which passes to C
           * function a container. */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'X0',X */
          /*                  Data Types - single|double */
          /*  */
          /*   eyed :       identity matrix of size length(Mu) wchich passes to
           * C function a container. */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*      n :       scalar which passes to C function size(X,1). */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*      d :       scalar which passes to C function length(Mu). */
          /*                Note that options X0, eyed, n, and d must be
           * supplied */
          /*                together. */
          /*                  Example - 'eyed',eye(v) */
          /*                  Data Types - single|double */
          /*  */
          /*         msg  : Level of output to display. Scalar. */
          /*                Scalar which controls whether to display or not
           * messages */
          /*                on the screen. If msg==1 (default) messages are
           * displayed */
          /*                on the screen when cholesky of Sigma is impossibile
           */
          /*                else no message is displayed on the screen. When
           * Clolesky */
          /*                of Sigma is impossible -Inf output is returned. */
          /*                  Example - 'msg',1 */
          /*                  Data Types - single | double */
          /*  */
          /*      callmex  : call or not mex function to compute the result.
           * Boolean. */
          /*                Boolean which controls whether to call or not the
           * mex function. */
          /*                  Example - 'callmex',false */
          /*                  Data Types - boolean */
          /*  */
          /*  Output: */
          /*  */
          /*    y    :   log-density of the multivariate normal. Vector. Vector
           * with length */
          /*                equal to n which returns the log-density of the
           * multivariate normal */
          /*                distribution with mean Mu and covariance Sigma,
           * evaluated at each row */
          /*                of X. */
          /*  */
          /*  See also mvnpdf */
          /*  */
          /*  References: */
          /*  */
          /*  */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
           * function</a> */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*    Examples: */
          /* { */
          /*     % Call to logmvnpdfFS with 3 input arguments. */
          /*      n=20; */
          /*      v=2; */
          /*      X=randn(n,v); */
          /*      mu = [1 1]; Sigma = [.9 .4; .4 .3]; */
          /*      y = logmvnpdfFS(X, mu, Sigma); */
          /* } */
          /* { */
          /*      % Comparison with mvnpdf. */
          /*      % In this example we check the agreement of the results with
           * MATLAB */
          /*      % function mvnpdf. */
          /*      n=20000; */
          /*      v=2; */
          /*      X=randn(n,v); */
          /*      mu = [1 -1]; Sigma = [.9 .4; .4 .3]; */
          /*      y = logmvnpdfFS(X, mu, Sigma); */
          /*      y1=log(mvnpdf(X,mu,Sigma)); */
          /*      max(abs(y-y1)) */
          /*      % 2.842e-14 */
          /* } */
          /* { */
          /*    % Remark: Options X0, eyed, n, and d must be used together. */
          /* } */
          /* { */
          /*     % TIME COMPARISON USING TIC TOC. */
          /*     % In the examples below we compare the speed of the different
           * solutions */
          /*     % logmvnpdfFS with mex function and logmvnpdfFS without mex
           * function */
          /*  */
          /*     % In this code computation time is based on tic toc combined
           * with a series */
          /*     % of replications */
          /*  */
          /*     % nn = sample size */
          /*     % vv = number of variables */
          /*     nn=[100 200 500 1000 5000 10000 50000 100000]; */
          /*     vv=[2 5 10 20]; */
          /*  */
          /*     % rep =number of replications */
          /*     rep = 1000; */
          /*  */
          /*     ttMat=nan(length(nn) , length(vv)); */
          /*     ttFSwithMex=ttMat; */
          /*     ttFSnoMex=ttMat; */
          /*  */
          /*  */
          /*     Mat=0; tMat=0; */
          /*     FSwithmex=0; tFSwithMex=0; */
          /*     FSnoMex=0; tFSnoMex=0; */
          /*  */
          /*  */
          /*     in = 1; iv=1; */
          /*     for n = nn */
          /*         for v = vv */
          /*  */
          /*             X0 = zeros(n,v); */
          /*             eyed=eye(v); */
          /*  */
          /*             for i=1:rep */
          /*  */
          /*                 X = randn(n,v); */
          /*                 Mu = randn(1,v); */
          /*                 Sigma=cov(X); */
          /*  */
          /*                 %  Matlab function mvnpdf, (black line in plot) */
          /*                 Mat = tic; */
          /*                 y0 = mvnpdf(X, Mu, Sigma); */
          /*                 y0=log(y0); */
          /*                 tMat = tMat + toc(Mat); */
          /*  */
          /*                 % logmvnpdfFS using mex file for mean deviations,
           * (blue line in plot) */
          /*                 FSwithmex = tic; */
          /*                 yD = logmvnpdfFS(X, Mu, Sigma,X0,eyed,n,v); */
          /*                 tFSwithMex = tFSwithMex + toc(FSwithmex); */
          /*  */
          /*                 % logmvnpdfFS and no mex file for mean deviations.
           * (red line in plot) */
          /*                 FSnoMex = tic; */
          /*                 yI = logmvnpdfFS(X, Mu, Sigma); */
          /*                 tFSnoMex = tFSnoMex + toc(FSnoMex); */
          /*  */
          /*  */
          /*                 if (sum(sum(abs(y0-yD))))>10^-6  ||
           * (sum(sum(abs(y0-yI)))) >10^-6 */
          /*                    error('FSDA:logmvnpdfFS:ShouldBeEq','Difference
           * in results: stop'); */
          /*                 end */
          /*  */
          /*             end */
          /*  */
          /*             ttMat(in,iv) = tMat; */
          /*             ttFSwithMex(in,iv) = tFSwithMex; */
          /*             ttFSnoMex(in,iv) = tFSnoMex; */
          /*  */
          /*             Mat=0; tMat=0; */
          /*             FSwithmex=0; tFSwithMex=0; */
          /*             FSnoMex=0; tFSnoMex=0; */
          /*  */
          /*  */
          /*             disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
          /*             iv = iv+1; */
          /*  */
          /*         end */
          /*         in = in+1; */
          /*         iv = 1; */
          /*     end */
          /*  */
          /*  */
          /*     % Plotting part */
          /*     a=ver; */
          /*     a=a.Release; */
          /*     aa=1; */
          /*     bb=8; */
          /*  */
          /*     for ij=1:length(vv); */
          /*         subplot(length(vv)/2,2,ij) */
          /*         hold('on') */
          /*         plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
          /*         plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
          /*         plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
          /*  */
          /*         if ij==1 */
          /*             title(['v (number of variables)=' num2str(vv(ij)) '
           * version' a]) */
          /*         else */
          /*             title(['v=' num2str(vv(ij))]) */
          /*         end */
          /*         ylabel('Seconds') */
          /*         xlabel('Number of observations') */
          /*         if ij==4 */
          /*             legend('mvnpdf','FS+mex','FS','location','NorthWest')
           */
          /*         end */
          /*     end */
          /*  */
          /*     hold off; */
          /* } */
          /* { */
          /*     %% TIME COMPARISON USING TIMEIT FUNCTION. */
          /*     % Remark: timeit function is present from  MATLAB 2013b */
          /*  */
          /*     if verLessThan('matlab', '8.2.0') */
          /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','This example needs
           * routine timeit which has been introduced in Matlab 2013b') */
          /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','You have a version
           * of Matlab which is < 2013b and you cannot run this example') */
          /*     else */
          /*         % nn = sample size */
          /*         % vv = number of variables */
          /*         nn=[100 200 500 1000 5000 10000 50000 100000]; */
          /*         vv=[2 5 10 20]; */
          /*  */
          /*         ttMat=nan(length(nn) , length(vv)); */
          /*         ttFSwithMex=ttMat; */
          /*         ttFSnoMex=ttMat; */
          /*  */
          /*         in = 1; iv=1; */
          /*         for n = nn */
          /*             for v = vv */
          /*  */
          /*                 X0 = zeros(n,v); */
          /*                 eyed=eye(v); */
          /*  */
          /*  */
          /*                 X = randn(n,v); */
          /*                 Mu = randn(1,v); */
          /*                 Sigma=cov(X); */
          /*  */
          /*                 %  Matlab function mvnpdf */
          /*                 yMat = @() log(mvnpdf(X, Mu, Sigma)); */
          /*                 tMat = timeit(yMat); */
          /*  */
          /*  */
          /*                 % logmvnpdfFS using mex file for mean deviations.
           */
          /*                 yFSwithMex = @() logmvnpdfFS(X, Mu,
           * Sigma,X0,eyed,n,v); */
          /*                 tFSwithMex = timeit(yFSwithMex); */
          /*  */
          /*                 % logmvnpdfFS and no mex file for mean deviations.
           */
          /*                 yFSnoMex = @() logmvnpdfFS(X, Mu, Sigma); */
          /*                 tFSnoMex = timeit(yFSnoMex); */
          /*  */
          /*                 ttMat(in,iv) = tMat; */
          /*                 ttFSwithMex(in,iv) = tFSwithMex; */
          /*                 ttFSnoMex(in,iv) = tFSnoMex; */
          /*  */
          /*                 disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
          /*                 iv = iv+1; */
          /*  */
          /*             end */
          /*             in = in+1; */
          /*             iv = 1; */
          /*         end */
          /*  */
          /*  */
          /*         % Plotting part */
          /*         a=ver; */
          /*         a=a.Release; */
          /*         aa=1; */
          /*         bb=length(nn); */
          /*  */
          /*         for ij=1:length(vv); */
          /*             subplot(length(vv)/2,2,ij) */
          /*             hold('on') */
          /*             plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
          /*             plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
          /*             plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
          /*  */
          /*             if ij==1 */
          /*                 title(['v (number of variables) =' num2str(vv(ij))
           * ' version' a]) */
          /*             else */
          /*                 title(['v=' num2str(vv(ij))]) */
          /*             end */
          /*             xlabel('Number of observations') */
          /*             ylabel('Seconds') */
          /*  */
          /*             if ij==4 */
          /*                 legend('mvnpdf','FS+mex','FS','location','NorthWest')
           */
          /*             end */
          /*  */
          /*         end */
          /*  */
          /*         hold off; */
          /*     end */
          /* } */
          /* { */
          /*     % Example of the use of option msg 0. */
          /*     n=20000; */
          /*     v=2; */
          /*     X=randn(n,v); */
          /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
          /*     msg=0; */
          /*     X0=X; */
          /*     eyed=eye(v); */
          /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
          /*     % y is -Inf but no warning is shown. */
          /* } */
          /* { */
          /*     % Example of the use of option msg 1. */
          /*     n=20000; */
          /*     v=2; */
          /*     X=randn(n,v); */
          /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
          /*     msg=1; */
          /*     X0=X; */
          /*     eyed=eye(v); */
          /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
          /*     %  y is -Inf and warning is shown. */
          /* } */
          /*  Beginning  of code. */
          /*    Note that X/Sigma ~ X*inv(Sigma) ~ mrdivide(X,Sigma) are
           * equivalent. */
          /*  Take Choleski of Sigma */
          loop_ub = sigmaini->size[0];
          nx = sigmaini->size[1];
          i1 = Yselj->size[0] * Yselj->size[1];
          Yselj->size[0] = sigmaini->size[0];
          Yselj->size[1] = sigmaini->size[1];
          emxEnsureCapacity_real_T(Yselj, i1);
          for (i1 = 0; i1 < nx; i1++) {
            for (b_y = 0; b_y < loop_ub; b_y++) {
              Yselj->data[b_y + Yselj->size[0] * i1] =
                  sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                                 sigmaini->size[0] * sigmaini->size[1] * j];
            }
          }
          nx = cholesky(Yselj);
          if (nx != 0) {
            i1 = qqunassigned->size[0];
            qqunassigned->size[0] = 1;
            emxEnsureCapacity_real_T(qqunassigned, i1);
            qqunassigned->data[0] = rtMinusInf;
          } else {
            /*  Define the following value: d*log(2*pi)/2 */
            /*  Compute log(sqrt(diag(Sigma))), and define a constant value. */
            diag(Yselj, x);
            nx = x->size[0];
            for (loop_ub = 0; loop_ub < nx; loop_ub++) {
              x->data[loop_ub] = log(x->data[loop_ub]);
            }
            ilow =
                blockedSummation(x, x->size[0]) + 0.918938533204673 * (double)v;
            i1 = b_Ytri->size[0] * b_Ytri->size[1];
            b_Ytri->size[0] = Ytri->size[0];
            loop_ub = Ytri->size[1];
            b_Ytri->size[1] = Ytri->size[1];
            emxEnsureCapacity_real_T(b_Ytri, i1);
            for (i1 = 0; i1 < loop_ub; i1++) {
              nx = Ytri->size[0];
              for (b_y = 0; b_y < nx; b_y++) {
                b_Ytri->data[b_y + b_Ytri->size[0] * i1] =
                    Ytri->data[b_y + Ytri->size[0] * i1] -
                    cini->data[j + cini->size[0] * i1];
              }
            }
            b_mldivide(Yselj, eyev, r3);
            b_mtimes(b_Ytri, r3, Yselj);
            power(Yselj, r3);
            sum(r3, qqunassigned);
            loop_ub = qqunassigned->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              qqunassigned->data[i1] = -0.5 * qqunassigned->data[i1] - ilow;
            }
            /*  Note that the instruction above is slightly faster than */
            /*  y = -0.5*sum((X*inv(Sigma)).^2,2)- Const; %#ok<MINV> */
          }
          loop_ub = qqunassigned->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            log_lh->data[i1 + log_lh->size[0] * j] =
                obj + qqunassigned->data[i1];
          }
        }
        /*  obj contains the value of the log likelihood for mixture models */
        obj = c_estepFS(log_lh);
      } else {
        /*  Likelihood for  crisp clustering */
        for (j = 0; j < loop_ub_tmp; j++) {
          /*  disp(ni) */
          if (out->idx->data[j] > 0.0) {
            if (equalweights) {
              /*  we simply sum the log of the densities for the untrimmed */
              /*  units */
              nx = groupind->size[0] - 1;
              m = 0;
              for (vlen = 0; vlen <= nx; vlen++) {
                if (groupind->data[vlen] == (double)j + 1.0) {
                  m++;
                }
              }
              i1 = r1->size[0];
              r1->size[0] = m;
              emxEnsureCapacity_int32_T(r1, i1);
              m = 0;
              for (vlen = 0; vlen <= nx; vlen++) {
                if (groupind->data[vlen] == (double)j + 1.0) {
                  r1->data[m] = vlen + 1;
                  m++;
                }
              }
              loop_ub = Ytri->size[1];
              i1 = b_Ytri->size[0] * b_Ytri->size[1];
              b_Ytri->size[0] = r1->size[0];
              b_Ytri->size[1] = Ytri->size[1];
              emxEnsureCapacity_real_T(b_Ytri, i1);
              for (i1 = 0; i1 < loop_ub; i1++) {
                nx = r1->size[0];
                for (b_y = 0; b_y < nx; b_y++) {
                  b_Ytri->data[b_y + b_Ytri->size[0] * i1] =
                      Ytri->data[(r1->data[b_y] + Ytri->size[0] * i1) - 1];
                }
              }
              loop_ub = cini->size[1];
              i1 = Yseljc->size[0] * Yseljc->size[1];
              Yseljc->size[0] = 1;
              Yseljc->size[1] = cini->size[1];
              emxEnsureCapacity_real_T(Yseljc, i1);
              for (i1 = 0; i1 < loop_ub; i1++) {
                Yseljc->data[i1] = cini->data[j + cini->size[0] * i1];
              }
              loop_ub = sigmaini->size[0];
              nx = sigmaini->size[1];
              i1 = Yselj->size[0] * Yselj->size[1];
              Yselj->size[0] = sigmaini->size[0];
              Yselj->size[1] = sigmaini->size[1];
              emxEnsureCapacity_real_T(Yselj, i1);
              for (i1 = 0; i1 < nx; i1++) {
                for (b_y = 0; b_y < loop_ub; b_y++) {
                  Yselj->data[b_y + Yselj->size[0] * i1] =
                      sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                                     sigmaini->size[0] * sigmaini->size[1] * j];
                }
              }
              obj += logmvnpdfFS(b_Ytri, Yseljc, Yselj);
            } else {
              /*  niini(j)*log(niini(j)/h) is the so called entropy */
              /*  term which allows for different group weights */
              nx = groupind->size[0] - 1;
              m = 0;
              for (vlen = 0; vlen <= nx; vlen++) {
                if (groupind->data[vlen] == (double)j + 1.0) {
                  m++;
                }
              }
              i1 = r2->size[0];
              r2->size[0] = m;
              emxEnsureCapacity_int32_T(r2, i1);
              m = 0;
              for (vlen = 0; vlen <= nx; vlen++) {
                if (groupind->data[vlen] == (double)j + 1.0) {
                  r2->data[m] = vlen + 1;
                  m++;
                }
              }
              /* logmvnpdfFS produces log of Multivariate normal probability
               * density function (pdf) */
              /*  */
              /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
               * function</a> */
              /*  */
              /*  This function is a much faster version than (log of) Matlab
               * function */
              /*  mvnpdf.  If this function is called without optional arguments
               * than it */
              /*  uses matlab function bsxfun to compute */
              /*  the deviations form the means and no mex function. */
              /*  If this function is called with the four optional input */
              /*  arguments X0, eyed, n and d a mex function based on C code is
               * directly used. */
              /*  Additional details follow: in order to compute the kernel of
               * the quadratic form */
              /*  at the exponent logmvnpdfFS creates an identity of size
               * length(Mu) and */
              /*  similarly needs to compute length(Mu). These two quantites can
               * be */
              /*  precalculated and supplied as input parameters. If logmvnpdfFS
               * has to be */
              /*  called thousands of times (as it happens for example in each
               * iteration */
              /*  of all procedures of cluster analysis based mixtures of
               * multivariate */
              /*  gaussian distributions). The same argument above applies to
               * scalars n */
              /*  and d which are directly passed to the compiled mex function
               */
              /*  */
              /*   Required input arguments: */
              /*  */
              /*  */
              /*  X :           Input data. Scalar, Vector or matrix. */
              /*                n x d data matrix; n observations and d
               * variables. Rows of */
              /*                Y represent observations, and columns represent
               * variables or coordinates. */
              /*                The (log of the) probability density of the
               * multivariate */
              /*                normal distribution will be evaluated at each
               * row of the */
              /*                n-by-d matrix Y */
              /*                Data Types - single|double */
              /*  Mu:           mean mu of the multivariate normal distribution.
               * 1-by-d vector. */
              /*                Data Types - single|double */
              /*  Sigma  :      covariance matrix of the multivariate normal
               * distribution. */
              /*                d-by-d matrix. */
              /*                Data Types - single|double */
              /*  */
              /*   Optional input arguments: */
              /*  */
              /*    X0  :       matrix of the same size of X which passes to C
               * function a container. */
              /*                Note that options X0, eyed, n, and d must be
               * supplied */
              /*                together. */
              /*                  Example - 'X0',X */
              /*                  Data Types - single|double */
              /*  */
              /*   eyed :       identity matrix of size length(Mu) wchich passes
               * to C function a container. */
              /*                Note that options X0, eyed, n, and d must be
               * supplied */
              /*                together. */
              /*                  Example - 'eyed',eye(v) */
              /*                  Data Types - single|double */
              /*  */
              /*      n :       scalar which passes to C function size(X,1). */
              /*                Note that options X0, eyed, n, and d must be
               * supplied */
              /*                together. */
              /*                  Example - 'eyed',eye(v) */
              /*                  Data Types - single|double */
              /*  */
              /*      d :       scalar which passes to C function length(Mu). */
              /*                Note that options X0, eyed, n, and d must be
               * supplied */
              /*                together. */
              /*                  Example - 'eyed',eye(v) */
              /*                  Data Types - single|double */
              /*  */
              /*         msg  : Level of output to display. Scalar. */
              /*                Scalar which controls whether to display or not
               * messages */
              /*                on the screen. If msg==1 (default) messages are
               * displayed */
              /*                on the screen when cholesky of Sigma is
               * impossibile */
              /*                else no message is displayed on the screen. When
               * Clolesky */
              /*                of Sigma is impossible -Inf output is returned.
               */
              /*                  Example - 'msg',1 */
              /*                  Data Types - single | double */
              /*  */
              /*      callmex  : call or not mex function to compute the result.
               * Boolean. */
              /*                Boolean which controls whether to call or not
               * the mex function. */
              /*                  Example - 'callmex',false */
              /*                  Data Types - boolean */
              /*  */
              /*  Output: */
              /*  */
              /*    y    :   log-density of the multivariate normal. Vector.
               * Vector with length */
              /*                equal to n which returns the log-density of the
               * multivariate normal */
              /*                distribution with mean Mu and covariance Sigma,
               * evaluated at each row */
              /*                of X. */
              /*  */
              /*  See also mvnpdf */
              /*  */
              /*  References: */
              /*  */
              /*  */
              /*  */
              /*  Copyright 2008-2021. */
              /*  Written by FSDA team */
              /*  */
              /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
               * function</a> */
              /*  */
              /* $LastChangedDate::                      $: Date of the last
               * commit */
              /*    Examples: */
              /* { */
              /*     % Call to logmvnpdfFS with 3 input arguments. */
              /*      n=20; */
              /*      v=2; */
              /*      X=randn(n,v); */
              /*      mu = [1 1]; Sigma = [.9 .4; .4 .3]; */
              /*      y = logmvnpdfFS(X, mu, Sigma); */
              /* } */
              /* { */
              /*      % Comparison with mvnpdf. */
              /*      % In this example we check the agreement of the results
               * with MATLAB */
              /*      % function mvnpdf. */
              /*      n=20000; */
              /*      v=2; */
              /*      X=randn(n,v); */
              /*      mu = [1 -1]; Sigma = [.9 .4; .4 .3]; */
              /*      y = logmvnpdfFS(X, mu, Sigma); */
              /*      y1=log(mvnpdf(X,mu,Sigma)); */
              /*      max(abs(y-y1)) */
              /*      % 2.842e-14 */
              /* } */
              /* { */
              /*    % Remark: Options X0, eyed, n, and d must be used together.
               */
              /* } */
              /* { */
              /*     % TIME COMPARISON USING TIC TOC. */
              /*     % In the examples below we compare the speed of the
               * different solutions */
              /*     % logmvnpdfFS with mex function and logmvnpdfFS without mex
               * function */
              /*  */
              /*     % In this code computation time is based on tic toc
               * combined with a series */
              /*     % of replications */
              /*  */
              /*     % nn = sample size */
              /*     % vv = number of variables */
              /*     nn=[100 200 500 1000 5000 10000 50000 100000]; */
              /*     vv=[2 5 10 20]; */
              /*  */
              /*     % rep =number of replications */
              /*     rep = 1000; */
              /*  */
              /*     ttMat=nan(length(nn) , length(vv)); */
              /*     ttFSwithMex=ttMat; */
              /*     ttFSnoMex=ttMat; */
              /*  */
              /*  */
              /*     Mat=0; tMat=0; */
              /*     FSwithmex=0; tFSwithMex=0; */
              /*     FSnoMex=0; tFSnoMex=0; */
              /*  */
              /*  */
              /*     in = 1; iv=1; */
              /*     for n = nn */
              /*         for v = vv */
              /*  */
              /*             X0 = zeros(n,v); */
              /*             eyed=eye(v); */
              /*  */
              /*             for i=1:rep */
              /*  */
              /*                 X = randn(n,v); */
              /*                 Mu = randn(1,v); */
              /*                 Sigma=cov(X); */
              /*  */
              /*                 %  Matlab function mvnpdf, (black line in plot)
               */
              /*                 Mat = tic; */
              /*                 y0 = mvnpdf(X, Mu, Sigma); */
              /*                 y0=log(y0); */
              /*                 tMat = tMat + toc(Mat); */
              /*  */
              /*                 % logmvnpdfFS using mex file for mean
               * deviations, (blue line in plot) */
              /*                 FSwithmex = tic; */
              /*                 yD = logmvnpdfFS(X, Mu, Sigma,X0,eyed,n,v); */
              /*                 tFSwithMex = tFSwithMex + toc(FSwithmex); */
              /*  */
              /*                 % logmvnpdfFS and no mex file for mean
               * deviations. (red line in plot) */
              /*                 FSnoMex = tic; */
              /*                 yI = logmvnpdfFS(X, Mu, Sigma); */
              /*                 tFSnoMex = tFSnoMex + toc(FSnoMex); */
              /*  */
              /*  */
              /*                 if (sum(sum(abs(y0-yD))))>10^-6  ||
               * (sum(sum(abs(y0-yI)))) >10^-6 */
              /*                    error('FSDA:logmvnpdfFS:ShouldBeEq','Difference
               * in results: stop'); */
              /*                 end */
              /*  */
              /*             end */
              /*  */
              /*             ttMat(in,iv) = tMat; */
              /*             ttFSwithMex(in,iv) = tFSwithMex; */
              /*             ttFSnoMex(in,iv) = tFSnoMex; */
              /*  */
              /*             Mat=0; tMat=0; */
              /*             FSwithmex=0; tFSwithMex=0; */
              /*             FSnoMex=0; tFSnoMex=0; */
              /*  */
              /*  */
              /*             disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
              /*             iv = iv+1; */
              /*  */
              /*         end */
              /*         in = in+1; */
              /*         iv = 1; */
              /*     end */
              /*  */
              /*  */
              /*     % Plotting part */
              /*     a=ver; */
              /*     a=a.Release; */
              /*     aa=1; */
              /*     bb=8; */
              /*  */
              /*     for ij=1:length(vv); */
              /*         subplot(length(vv)/2,2,ij) */
              /*         hold('on') */
              /*         plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
              /*         plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
              /*         plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
              /*  */
              /*         if ij==1 */
              /*             title(['v (number of variables)=' num2str(vv(ij)) '
               * version' a]) */
              /*         else */
              /*             title(['v=' num2str(vv(ij))]) */
              /*         end */
              /*         ylabel('Seconds') */
              /*         xlabel('Number of observations') */
              /*         if ij==4 */
              /*             legend('mvnpdf','FS+mex','FS','location','NorthWest')
               */
              /*         end */
              /*     end */
              /*  */
              /*     hold off; */
              /* } */
              /* { */
              /*     %% TIME COMPARISON USING TIMEIT FUNCTION. */
              /*     % Remark: timeit function is present from  MATLAB 2013b */
              /*  */
              /*     if verLessThan('matlab', '8.2.0') */
              /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','This example
               * needs routine timeit which has been introduced in Matlab
               * 2013b') */
              /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','You have a
               * version of Matlab which is < 2013b and you cannot run this
               * example') */
              /*     else */
              /*         % nn = sample size */
              /*         % vv = number of variables */
              /*         nn=[100 200 500 1000 5000 10000 50000 100000]; */
              /*         vv=[2 5 10 20]; */
              /*  */
              /*         ttMat=nan(length(nn) , length(vv)); */
              /*         ttFSwithMex=ttMat; */
              /*         ttFSnoMex=ttMat; */
              /*  */
              /*         in = 1; iv=1; */
              /*         for n = nn */
              /*             for v = vv */
              /*  */
              /*                 X0 = zeros(n,v); */
              /*                 eyed=eye(v); */
              /*  */
              /*  */
              /*                 X = randn(n,v); */
              /*                 Mu = randn(1,v); */
              /*                 Sigma=cov(X); */
              /*  */
              /*                 %  Matlab function mvnpdf */
              /*                 yMat = @() log(mvnpdf(X, Mu, Sigma)); */
              /*                 tMat = timeit(yMat); */
              /*  */
              /*  */
              /*                 % logmvnpdfFS using mex file for mean
               * deviations. */
              /*                 yFSwithMex = @() logmvnpdfFS(X, Mu,
               * Sigma,X0,eyed,n,v); */
              /*                 tFSwithMex = timeit(yFSwithMex); */
              /*  */
              /*                 % logmvnpdfFS and no mex file for mean
               * deviations. */
              /*                 yFSnoMex = @() logmvnpdfFS(X, Mu, Sigma); */
              /*                 tFSnoMex = timeit(yFSnoMex); */
              /*  */
              /*                 ttMat(in,iv) = tMat; */
              /*                 ttFSwithMex(in,iv) = tFSwithMex; */
              /*                 ttFSnoMex(in,iv) = tFSnoMex; */
              /*  */
              /*                 disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
              /*                 iv = iv+1; */
              /*  */
              /*             end */
              /*             in = in+1; */
              /*             iv = 1; */
              /*         end */
              /*  */
              /*  */
              /*         % Plotting part */
              /*         a=ver; */
              /*         a=a.Release; */
              /*         aa=1; */
              /*         bb=length(nn); */
              /*  */
              /*         for ij=1:length(vv); */
              /*             subplot(length(vv)/2,2,ij) */
              /*             hold('on') */
              /*             plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
              /*             plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
              /*             plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
              /*  */
              /*             if ij==1 */
              /*                 title(['v (number of variables) ='
               * num2str(vv(ij)) ' version' a]) */
              /*             else */
              /*                 title(['v=' num2str(vv(ij))]) */
              /*             end */
              /*             xlabel('Number of observations') */
              /*             ylabel('Seconds') */
              /*  */
              /*             if ij==4 */
              /*                 legend('mvnpdf','FS+mex','FS','location','NorthWest')
               */
              /*             end */
              /*  */
              /*         end */
              /*  */
              /*         hold off; */
              /*     end */
              /* } */
              /* { */
              /*     % Example of the use of option msg 0. */
              /*     n=20000; */
              /*     v=2; */
              /*     X=randn(n,v); */
              /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
              /*     msg=0; */
              /*     X0=X; */
              /*     eyed=eye(v); */
              /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
              /*     % y is -Inf but no warning is shown. */
              /* } */
              /* { */
              /*     % Example of the use of option msg 1. */
              /*     n=20000; */
              /*     v=2; */
              /*     X=randn(n,v); */
              /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
              /*     msg=1; */
              /*     X0=X; */
              /*     eyed=eye(v); */
              /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
              /*     %  y is -Inf and warning is shown. */
              /* } */
              /*  Beginning  of code. */
              /*    Note that X/Sigma ~ X*inv(Sigma) ~ mrdivide(X,Sigma) are
               * equivalent. */
              /*  Take Choleski of Sigma */
              loop_ub = sigmaini->size[0];
              nx = sigmaini->size[1];
              i1 = Yselj->size[0] * Yselj->size[1];
              Yselj->size[0] = sigmaini->size[0];
              Yselj->size[1] = sigmaini->size[1];
              emxEnsureCapacity_real_T(Yselj, i1);
              for (i1 = 0; i1 < nx; i1++) {
                for (b_y = 0; b_y < loop_ub; b_y++) {
                  Yselj->data[b_y + Yselj->size[0] * i1] =
                      sigmaini->data[(b_y + sigmaini->size[0] * i1) +
                                     sigmaini->size[0] * sigmaini->size[1] * j];
                }
              }
              nx = cholesky(Yselj);
              if (nx != 0) {
                i1 = qqunassigned->size[0];
                qqunassigned->size[0] = 1;
                emxEnsureCapacity_real_T(qqunassigned, i1);
                qqunassigned->data[0] = rtMinusInf;
              } else {
                /*  Define the following value: d*log(2*pi)/2 */
                /*  Compute log(sqrt(diag(Sigma))), and define a constant value.
                 */
                diag(Yselj, x);
                nx = x->size[0];
                for (loop_ub = 0; loop_ub < nx; loop_ub++) {
                  x->data[loop_ub] = log(x->data[loop_ub]);
                }
                ilow = blockedSummation(x, x->size[0]) +
                       0.918938533204673 * (double)v;
                loop_ub = Ytri->size[1];
                i1 = b_Ytri->size[0] * b_Ytri->size[1];
                b_Ytri->size[0] = r2->size[0];
                b_Ytri->size[1] = Ytri->size[1];
                emxEnsureCapacity_real_T(b_Ytri, i1);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  nx = r2->size[0];
                  for (b_y = 0; b_y < nx; b_y++) {
                    b_Ytri->data[b_y + b_Ytri->size[0] * i1] =
                        Ytri->data[(r2->data[b_y] + Ytri->size[0] * i1) - 1] -
                        cini->data[j + cini->size[0] * i1];
                  }
                }
                b_mldivide(Yselj, eyev, r3);
                b_mtimes(b_Ytri, r3, Yselj);
                power(Yselj, r3);
                sum(r3, qqunassigned);
                loop_ub = qqunassigned->size[0];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  qqunassigned->data[i1] = -0.5 * qqunassigned->data[i1] - ilow;
                }
                /*  Note that the instruction above is slightly faster than */
                /*  y = -0.5*sum((X*inv(Sigma)).^2,2)- Const; %#ok<MINV> */
              }
              obj = (obj + out->idx->data[j] * log(out->idx->data[j] / h)) +
                    blockedSummation(qqunassigned, qqunassigned->size[0]);
            }
          }
        }
      }
      if (mixt > 0.0) {
        /*  if mixt >0 stopping criterion is referred to postprob */
        i1 = Yselj->size[0] * Yselj->size[1];
        Yselj->size[0] = postprob->size[0];
        Yselj->size[1] = postprob->size[1];
        emxEnsureCapacity_real_T(Yselj, i1);
        loop_ub = postprob->size[0] * postprob->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          Yselj->data[i1] = postprob->data[i1] - postprobold->data[i1];
        }
        b_abs(Yselj, r3);
        combineVectorElements(r3, Yseljc);
        mudiff = d_combineVectorElements(Yseljc) / (double)n;
        /*  disp(mudiff) */
      } else {
        /*  if mixt=0 stopping criterion is referred to no modiification in the
         * classification */
        i1 = x->size[0];
        x->size[0] = indold->size[0];
        emxEnsureCapacity_real_T(x, i1);
        loop_ub = indold->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          x->data[i1] = (double)indold->data[i1] - (double)ind->data[i1];
        }
        nx = x->size[0];
        i1 = qqunassigned->size[0];
        qqunassigned->size[0] = x->size[0];
        emxEnsureCapacity_real_T(qqunassigned, i1);
        for (loop_ub = 0; loop_ub < nx; loop_ub++) {
          qqunassigned->data[loop_ub] = fabs(x->data[loop_ub]);
        }
        i1 = NanGroups->size[0];
        NanGroups->size[0] = qqunassigned->size[0];
        emxEnsureCapacity_boolean_T(NanGroups, i1);
        loop_ub = qqunassigned->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          NanGroups->data[i1] = (qqunassigned->data[i1] > 0.0);
        }
        vlen = NanGroups->size[0];
        if (NanGroups->size[0] == 0) {
          b_y = 0;
        } else {
          b_y = NanGroups->data[0];
          for (loop_ub = 2; loop_ub <= vlen; loop_ub++) {
            b_y += NanGroups->data[loop_ub - 1];
          }
        }
        mudiff = (double)b_y / (double)n;
        /*  disp(mudiff) */
      }
      /* disp(num2str(iter)) */
      /* disp(mudiff) */
      /*  */
      /*  Alternative stopping criterion was based  on the relative */
      /*  modification of the objective function. */
      /*                   mudiff =abs(oldobj-obj)/abs(obj); */
      /*                   disp(['Iteration ' num2str(iter)]) */
      /*                   disp([oldobj-obj]/abs(obj)) */
      /*                   disp('monit') */
      if (iup == refsteps) {
        noconv++;
      }
    }
    /*  Store value of the objective function for iteration i */
    out->fullsol->data[b_i] = obj;
    /*  Store the centroids and the value of the objective function */
    if (obj >= vopt) {
      /*  vopt = value of the objective function in correspondence of the */
      /*  best centroids */
      vopt = obj;
      /*  muopt = matrix containing best centroids */
      i1 = out->muopt->size[0] * out->muopt->size[1];
      out->muopt->size[0] = cini->size[0];
      out->muopt->size[1] = cini->size[1];
      emxEnsureCapacity_real_T(out->muopt, i1);
      loop_ub = cini->size[0] * cini->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        out->muopt->data[i1] = cini->data[i1];
      }
      /*  nopt = vector containing sizes of the groups */
      loop_ub = out->idx->size[0];
      i1 = nopt->size[0];
      nopt->size[0] = out->idx->size[0];
      emxEnsureCapacity_real_T(nopt, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        nopt->data[i1] = out->idx->data[i1];
      }
      /*  format long; */
      /* disp(index) */
      /* disp(obj) */
      /*  sigmaopt */
      i1 = out->sigmaopt->size[0] * out->sigmaopt->size[1] *
           out->sigmaopt->size[2];
      out->sigmaopt->size[0] = sigmaini->size[0];
      out->sigmaopt->size[1] = sigmaini->size[1];
      out->sigmaopt->size[2] = sigmaini->size[2];
      emxEnsureCapacity_real_T(out->sigmaopt, i1);
      loop_ub = sigmaini->size[0] * sigmaini->size[1] * sigmaini->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        out->sigmaopt->data[i1] = sigmaini->data[i1];
      }
      /*  store the indexes of the subset which gave rise to the */
      /*  optimal solution */
      i1 = out->bs->size[0] * out->bs->size[1];
      out->bs->size[0] = 1;
      out->bs->size[1] = b_index->size[1];
      emxEnsureCapacity_real_T(out->bs, i1);
      loop_ub = b_index->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        out->bs->data[i1] = b_index->data[i1];
      }
    }
    if (msg == 1.0) {
      if (b_i + 1U <= (unsigned int)tsampling) {
        /*  sampling time until step tsampling */
        time_data[b_i] = toc(tstart_tv_sec, tstart_tv_nsec);
      } else if (b_i + 1U == (unsigned int)((int)tsampling + 1)) {
        /*  stop sampling and print the estimated time */
        b_time_data.data = &time_data[0];
        b_time_data.size = &time_size;
        b_time_data.allocatedSize = 10;
        b_time_data.numDimensions = 1;
        b_time_data.canFreeData = false;
        Rprintf("Total estimated time to complete tclust: %5.2f seconds \n",
               nselected * median(&b_time_data));
        //fflush(stdout);
      }
    }
  }
  emxFree_real_T(&b_Ytri);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  emxFree_int32_T(&ind);
  emxFree_real_T(&postprob);
  emxFree_real_T(&lmd);
  emxFree_real_T(&Yseljc);
  emxFree_real_T(&cini);
  emxFree_real_T(&postprobold);
  emxFree_real_T(&b_index);
  emxFree_real_T(&ey);
  emxFree_real_T(&log_lh);
  mudiff = noconv / nselected;
  if ((msg == 2.0) && (mudiff > 0.1)) {
    /*  disp(['Warning: Number of subsets without convergence equal to '
     * num2str(100*notconver) '%']) */
    Rprintf("Warning: Number of subsets without convergence equal to %.1f%%\n",
           100.0 * mudiff);
    //fflush(stdout);
  }
  emxInit_boolean_T(&r4, 2);
  /*  Store quantities in out structure */
  /* exist('muopt')==0 */
  /*  Procedure to order the non-empty components */
  i = r4->size[0] * r4->size[1];
  r4->size[0] = out->muopt->size[0];
  r4->size[1] = out->muopt->size[1];
  emxEnsureCapacity_boolean_T(r4, i);
  loop_ub = out->muopt->size[0] * out->muopt->size[1];
  for (i = 0; i < loop_ub; i++) {
    r4->data[i] = rtIsNaN(out->muopt->data[i]);
  }
  emxInit_boolean_T(&r5, 2);
  b_any(r4, r5);
  emxFree_boolean_T(&r4);
  if (c_any(r5)) {
    /*  restore apropriate order of the components */
    loop_ub = out->muopt->size[0];
    i = NanGroups->size[0];
    NanGroups->size[0] = out->muopt->size[0];
    emxEnsureCapacity_boolean_T(NanGroups, i);
    for (i = 0; i < loop_ub; i++) {
      NanGroups->data[i] = rtIsNaN(out->muopt->data[i]);
    }
    /*  missing components */
    /*  order of the components in nopt, muopt and sigmaopt */
    nx = NanGroups->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (!NanGroups->data[b_i]) {
        m++;
      }
    }
    emxInit_int32_T(&r6, 1);
    i = r6->size[0];
    r6->size[0] = m;
    emxEnsureCapacity_int32_T(r6, i);
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (!NanGroups->data[b_i]) {
        r6->data[m] = b_i + 1;
        m++;
      }
    }
    nx = NanGroups->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (NanGroups->data[b_i]) {
        m++;
      }
    }
    emxInit_int32_T(&r8, 1);
    i = r8->size[0];
    r8->size[0] = m;
    emxEnsureCapacity_int32_T(r8, i);
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (NanGroups->data[b_i]) {
        r8->data[m] = b_i + 1;
        m++;
      }
    }
    i = qqunassigned->size[0];
    qqunassigned->size[0] = r6->size[0] + r8->size[0];
    emxEnsureCapacity_real_T(qqunassigned, i);
    loop_ub = r6->size[0];
    for (i = 0; i < loop_ub; i++) {
      qqunassigned->data[i] = nopt->data[r6->data[i] - 1];
    }
    loop_ub = r8->size[0];
    for (i = 0; i < loop_ub; i++) {
      qqunassigned->data[i + r6->size[0]] = nopt->data[r8->data[i] - 1];
    }
    emxFree_int32_T(&r8);
    emxFree_int32_T(&r6);
    i = nopt->size[0];
    nopt->size[0] = qqunassigned->size[0];
    emxEnsureCapacity_real_T(nopt, i);
    loop_ub = qqunassigned->size[0];
    for (i = 0; i < loop_ub; i++) {
      nopt->data[i] = qqunassigned->data[i];
    }
    nx = NanGroups->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (!NanGroups->data[b_i]) {
        m++;
      }
    }
    emxInit_int32_T(&r9, 1);
    i = r9->size[0];
    r9->size[0] = m;
    emxEnsureCapacity_int32_T(r9, i);
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (!NanGroups->data[b_i]) {
        r9->data[m] = b_i + 1;
        m++;
      }
    }
    nx = NanGroups->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (NanGroups->data[b_i]) {
        m++;
      }
    }
    emxInit_int32_T(&r10, 1);
    i = r10->size[0];
    r10->size[0] = m;
    emxEnsureCapacity_int32_T(r10, i);
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (NanGroups->data[b_i]) {
        r10->data[m] = b_i + 1;
        m++;
      }
    }
    if ((r9->size[0] != 0) && (out->muopt->size[1] != 0)) {
      vlen = out->muopt->size[1];
    } else if ((r10->size[0] != 0) && (out->muopt->size[1] != 0)) {
      vlen = out->muopt->size[1];
    } else {
      if (out->muopt->size[1] > 0) {
        vlen = out->muopt->size[1];
      } else {
        vlen = 0;
      }
      if (out->muopt->size[1] > vlen) {
        vlen = out->muopt->size[1];
      }
    }
    empty_non_axis_sizes = (vlen == 0);
    if (empty_non_axis_sizes ||
        ((r9->size[0] != 0) && (out->muopt->size[1] != 0))) {
      m = r9->size[0];
    } else {
      m = 0;
    }
    if (empty_non_axis_sizes ||
        ((r10->size[0] != 0) && (out->muopt->size[1] != 0))) {
      nx = r10->size[0];
    } else {
      nx = 0;
    }
    b_y = out->muopt->size[1] - 1;
    i = Ytri->size[0] * Ytri->size[1];
    Ytri->size[0] = r9->size[0];
    Ytri->size[1] = out->muopt->size[1];
    emxEnsureCapacity_real_T(Ytri, i);
    for (i = 0; i <= b_y; i++) {
      loop_ub = r9->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Ytri->data[i1 + Ytri->size[0] * i] =
            out->muopt->data[(r9->data[i1] + out->muopt->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r9);
    b_y = out->muopt->size[1] - 1;
    i = Yselj->size[0] * Yselj->size[1];
    Yselj->size[0] = r10->size[0];
    Yselj->size[1] = out->muopt->size[1];
    emxEnsureCapacity_real_T(Yselj, i);
    for (i = 0; i <= b_y; i++) {
      loop_ub = r10->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Yselj->data[i1 + Yselj->size[0] * i] =
            out->muopt->data[(r10->data[i1] + out->muopt->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r10);
    i = out->muopt->size[0] * out->muopt->size[1];
    out->muopt->size[0] = m + nx;
    out->muopt->size[1] = vlen;
    emxEnsureCapacity_real_T(out->muopt, i);
    for (i = 0; i < vlen; i++) {
      for (i1 = 0; i1 < m; i1++) {
        out->muopt->data[i1 + out->muopt->size[0] * i] = Ytri->data[i1 + m * i];
      }
    }
    for (i = 0; i < vlen; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        out->muopt->data[(i1 + m) + out->muopt->size[0] * i] =
            Yselj->data[i1 + nx * i];
      }
    }
    nx = NanGroups->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (NanGroups->data[b_i]) {
        m++;
      }
    }
    emxInit_int32_T(&r11, 1);
    i = r11->size[0];
    r11->size[0] = m;
    emxEnsureCapacity_int32_T(r11, i);
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (NanGroups->data[b_i]) {
        r11->data[m] = b_i + 1;
        m++;
      }
    }
    b_y = out->sigmaopt->size[0];
    vlen = out->sigmaopt->size[1];
    loop_ub = r11->size[0];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < vlen; i1++) {
        for (i2 = 0; i2 < b_y; i2++) {
          out->sigmaopt->data[(i2 + out->sigmaopt->size[0] * i1) +
                              out->sigmaopt->size[0] * out->sigmaopt->size[1] *
                                  (r11->data[i] - 1)] = rtNaN;
        }
      }
    }
    emxFree_int32_T(&r11);
    /*  assign NaN on the empty clusters */
    nx = NanGroups->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (!NanGroups->data[b_i]) {
        m++;
      }
    }
    emxInit_int32_T(&r12, 1);
    i = r12->size[0];
    r12->size[0] = m;
    emxEnsureCapacity_int32_T(r12, i);
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (!NanGroups->data[b_i]) {
        r12->data[m] = b_i + 1;
        m++;
      }
    }
    nx = NanGroups->size[0] - 1;
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (NanGroups->data[b_i]) {
        m++;
      }
    }
    emxInit_int32_T(&r13, 1);
    i = r13->size[0];
    r13->size[0] = m;
    emxEnsureCapacity_int32_T(r13, i);
    m = 0;
    for (b_i = 0; b_i <= nx; b_i++) {
      if (NanGroups->data[b_i]) {
        r13->data[m] = b_i + 1;
        m++;
      }
    }
    b_y = out->sigmaopt->size[0] - 1;
    vlen = out->sigmaopt->size[1] - 1;
    m = out->sigmaopt->size[0] - 1;
    nx = out->sigmaopt->size[1] - 1;
    i = sigmaini->size[0] * sigmaini->size[1] * sigmaini->size[2];
    sigmaini->size[0] = out->sigmaopt->size[0];
    sigmaini->size[1] = out->sigmaopt->size[1];
    sigmaini->size[2] = r12->size[0];
    emxEnsureCapacity_real_T(sigmaini, i);
    loop_ub = r12->size[0];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 <= vlen; i1++) {
        for (i2 = 0; i2 <= b_y; i2++) {
          sigmaini->data[(i2 + sigmaini->size[0] * i1) +
                         sigmaini->size[0] * sigmaini->size[1] * i] =
              out->sigmaopt
                  ->data[(i2 + out->sigmaopt->size[0] * i1) +
                         out->sigmaopt->size[0] * out->sigmaopt->size[1] *
                             (r12->data[i] - 1)];
        }
      }
    }
    emxFree_int32_T(&r12);
    i = OMG->size[0] * OMG->size[1] * OMG->size[2];
    OMG->size[0] = out->sigmaopt->size[0];
    OMG->size[1] = out->sigmaopt->size[1];
    OMG->size[2] = r13->size[0];
    emxEnsureCapacity_real_T(OMG, i);
    loop_ub = r13->size[0];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 <= nx; i1++) {
        for (i2 = 0; i2 <= m; i2++) {
          OMG->data[(i2 + OMG->size[0] * i1) +
                    OMG->size[0] * OMG->size[1] * i] =
              out->sigmaopt
                  ->data[(i2 + out->sigmaopt->size[0] * i1) +
                         out->sigmaopt->size[0] * out->sigmaopt->size[1] *
                             (r13->data[i] - 1)];
        }
      }
    }
    emxFree_int32_T(&r13);
    b_cat(sigmaini, OMG, out->sigmaopt);
  }
  emxFree_boolean_T(&NanGroups);
  emxFree_real_T(&OMG);
  emxFree_real_T(&sigmaini);
  /*  With the best obtained values for the parameters, we compute the final */
  /*  assignments and parameters */
  /*  construct the  log of component conditional density weighted by the */
  /*  component probability. */
  /*  ll = log( \pi_j \phi (y_i; \; \theta_j)) */
  /*  Get the likelihood for each point with each component */
  /*  ll is a n by k matrix, */
  /*  if equalweights is false */
  /*  ll(i,j) is log( (n_j/h) * f(x_i|\theta_j)) */
  /*  else if  equalweights is true */
  /*  ll(i,j) is log( f(x_i|\theta_j)) */
  /*  f(x_i|\theta_j) is multivariate normal with theta_j =(mu_j, \Sigma_j) */
  emxInit_boolean_T(&r7, 2);
  if (equalweights) {
    for (j = 0; j < loop_ub_tmp; j++) {
      loop_ub = out->muopt->size[1];
      i = r5->size[0] * r5->size[1];
      r5->size[0] = 1;
      r5->size[1] = out->muopt->size[1];
      emxEnsureCapacity_boolean_T(r5, i);
      for (i = 0; i < loop_ub; i++) {
        r5->data[i] = rtIsNaN(out->muopt->data[j + out->muopt->size[0] * i]);
      }
      i = r7->size[0] * r7->size[1];
      r7->size[0] = 1;
      r7->size[1] = r5->size[1];
      emxEnsureCapacity_boolean_T(r7, i);
      loop_ub = r5->size[1];
      for (i = 0; i < loop_ub; i++) {
        r7->data[i] = !r5->data[i];
      }
      if (c_any(r7)) {
        /* logmvnpdfFS produces log of Multivariate normal probability density
         * function (pdf) */
        /*  */
        /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
         * function</a> */
        /*  */
        /*  This function is a much faster version than (log of) Matlab function
         */
        /*  mvnpdf.  If this function is called without optional arguments than
         * it */
        /*  uses matlab function bsxfun to compute */
        /*  the deviations form the means and no mex function. */
        /*  If this function is called with the four optional input */
        /*  arguments X0, eyed, n and d a mex function based on C code is
         * directly used. */
        /*  Additional details follow: in order to compute the kernel of the
         * quadratic form */
        /*  at the exponent logmvnpdfFS creates an identity of size length(Mu)
         * and */
        /*  similarly needs to compute length(Mu). These two quantites can be */
        /*  precalculated and supplied as input parameters. If logmvnpdfFS has
         * to be */
        /*  called thousands of times (as it happens for example in each
         * iteration */
        /*  of all procedures of cluster analysis based mixtures of multivariate
         */
        /*  gaussian distributions). The same argument above applies to scalars
         * n */
        /*  and d which are directly passed to the compiled mex function */
        /*  */
        /*   Required input arguments: */
        /*  */
        /*  */
        /*  X :           Input data. Scalar, Vector or matrix. */
        /*                n x d data matrix; n observations and d variables.
         * Rows of */
        /*                Y represent observations, and columns represent
         * variables or coordinates. */
        /*                The (log of the) probability density of the
         * multivariate */
        /*                normal distribution will be evaluated at each row of
         * the */
        /*                n-by-d matrix Y */
        /*                Data Types - single|double */
        /*  Mu:           mean mu of the multivariate normal distribution.
         * 1-by-d vector. */
        /*                Data Types - single|double */
        /*  Sigma  :      covariance matrix of the multivariate normal
         * distribution. */
        /*                d-by-d matrix. */
        /*                Data Types - single|double */
        /*  */
        /*   Optional input arguments: */
        /*  */
        /*    X0  :       matrix of the same size of X which passes to C
         * function a container. */
        /*                Note that options X0, eyed, n, and d must be supplied
         */
        /*                together. */
        /*                  Example - 'X0',X */
        /*                  Data Types - single|double */
        /*  */
        /*   eyed :       identity matrix of size length(Mu) wchich passes to C
         * function a container. */
        /*                Note that options X0, eyed, n, and d must be supplied
         */
        /*                together. */
        /*                  Example - 'eyed',eye(v) */
        /*                  Data Types - single|double */
        /*  */
        /*      n :       scalar which passes to C function size(X,1). */
        /*                Note that options X0, eyed, n, and d must be supplied
         */
        /*                together. */
        /*                  Example - 'eyed',eye(v) */
        /*                  Data Types - single|double */
        /*  */
        /*      d :       scalar which passes to C function length(Mu). */
        /*                Note that options X0, eyed, n, and d must be supplied
         */
        /*                together. */
        /*                  Example - 'eyed',eye(v) */
        /*                  Data Types - single|double */
        /*  */
        /*         msg  : Level of output to display. Scalar. */
        /*                Scalar which controls whether to display or not
         * messages */
        /*                on the screen. If msg==1 (default) messages are
         * displayed */
        /*                on the screen when cholesky of Sigma is impossibile */
        /*                else no message is displayed on the screen. When
         * Clolesky */
        /*                of Sigma is impossible -Inf output is returned. */
        /*                  Example - 'msg',1 */
        /*                  Data Types - single | double */
        /*  */
        /*      callmex  : call or not mex function to compute the result.
         * Boolean. */
        /*                Boolean which controls whether to call or not the mex
         * function. */
        /*                  Example - 'callmex',false */
        /*                  Data Types - boolean */
        /*  */
        /*  Output: */
        /*  */
        /*    y    :   log-density of the multivariate normal. Vector. Vector
         * with length */
        /*                equal to n which returns the log-density of the
         * multivariate normal */
        /*                distribution with mean Mu and covariance Sigma,
         * evaluated at each row */
        /*                of X. */
        /*  */
        /*  See also mvnpdf */
        /*  */
        /*  References: */
        /*  */
        /*  */
        /*  */
        /*  Copyright 2008-2021. */
        /*  Written by FSDA team */
        /*  */
        /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
         * function</a> */
        /*  */
        /* $LastChangedDate::                      $: Date of the last commit */
        /*    Examples: */
        /* { */
        /*     % Call to logmvnpdfFS with 3 input arguments. */
        /*      n=20; */
        /*      v=2; */
        /*      X=randn(n,v); */
        /*      mu = [1 1]; Sigma = [.9 .4; .4 .3]; */
        /*      y = logmvnpdfFS(X, mu, Sigma); */
        /* } */
        /* { */
        /*      % Comparison with mvnpdf. */
        /*      % In this example we check the agreement of the results with
         * MATLAB */
        /*      % function mvnpdf. */
        /*      n=20000; */
        /*      v=2; */
        /*      X=randn(n,v); */
        /*      mu = [1 -1]; Sigma = [.9 .4; .4 .3]; */
        /*      y = logmvnpdfFS(X, mu, Sigma); */
        /*      y1=log(mvnpdf(X,mu,Sigma)); */
        /*      max(abs(y-y1)) */
        /*      % 2.842e-14 */
        /* } */
        /* { */
        /*    % Remark: Options X0, eyed, n, and d must be used together. */
        /* } */
        /* { */
        /*     % TIME COMPARISON USING TIC TOC. */
        /*     % In the examples below we compare the speed of the different
         * solutions */
        /*     % logmvnpdfFS with mex function and logmvnpdfFS without mex
         * function */
        /*  */
        /*     % In this code computation time is based on tic toc combined with
         * a series */
        /*     % of replications */
        /*  */
        /*     % nn = sample size */
        /*     % vv = number of variables */
        /*     nn=[100 200 500 1000 5000 10000 50000 100000]; */
        /*     vv=[2 5 10 20]; */
        /*  */
        /*     % rep =number of replications */
        /*     rep = 1000; */
        /*  */
        /*     ttMat=nan(length(nn) , length(vv)); */
        /*     ttFSwithMex=ttMat; */
        /*     ttFSnoMex=ttMat; */
        /*  */
        /*  */
        /*     Mat=0; tMat=0; */
        /*     FSwithmex=0; tFSwithMex=0; */
        /*     FSnoMex=0; tFSnoMex=0; */
        /*  */
        /*  */
        /*     in = 1; iv=1; */
        /*     for n = nn */
        /*         for v = vv */
        /*  */
        /*             X0 = zeros(n,v); */
        /*             eyed=eye(v); */
        /*  */
        /*             for i=1:rep */
        /*  */
        /*                 X = randn(n,v); */
        /*                 Mu = randn(1,v); */
        /*                 Sigma=cov(X); */
        /*  */
        /*                 %  Matlab function mvnpdf, (black line in plot) */
        /*                 Mat = tic; */
        /*                 y0 = mvnpdf(X, Mu, Sigma); */
        /*                 y0=log(y0); */
        /*                 tMat = tMat + toc(Mat); */
        /*  */
        /*                 % logmvnpdfFS using mex file for mean deviations,
         * (blue line in plot) */
        /*                 FSwithmex = tic; */
        /*                 yD = logmvnpdfFS(X, Mu, Sigma,X0,eyed,n,v); */
        /*                 tFSwithMex = tFSwithMex + toc(FSwithmex); */
        /*  */
        /*                 % logmvnpdfFS and no mex file for mean deviations.
         * (red line in plot) */
        /*                 FSnoMex = tic; */
        /*                 yI = logmvnpdfFS(X, Mu, Sigma); */
        /*                 tFSnoMex = tFSnoMex + toc(FSnoMex); */
        /*  */
        /*  */
        /*                 if (sum(sum(abs(y0-yD))))>10^-6  ||
         * (sum(sum(abs(y0-yI)))) >10^-6 */
        /*                    error('FSDA:logmvnpdfFS:ShouldBeEq','Difference in
         * results: stop'); */
        /*                 end */
        /*  */
        /*             end */
        /*  */
        /*             ttMat(in,iv) = tMat; */
        /*             ttFSwithMex(in,iv) = tFSwithMex; */
        /*             ttFSnoMex(in,iv) = tFSnoMex; */
        /*  */
        /*             Mat=0; tMat=0; */
        /*             FSwithmex=0; tFSwithMex=0; */
        /*             FSnoMex=0; tFSnoMex=0; */
        /*  */
        /*  */
        /*             disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
        /*             iv = iv+1; */
        /*  */
        /*         end */
        /*         in = in+1; */
        /*         iv = 1; */
        /*     end */
        /*  */
        /*  */
        /*     % Plotting part */
        /*     a=ver; */
        /*     a=a.Release; */
        /*     aa=1; */
        /*     bb=8; */
        /*  */
        /*     for ij=1:length(vv); */
        /*         subplot(length(vv)/2,2,ij) */
        /*         hold('on') */
        /*         plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
        /*         plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
        /*         plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
        /*  */
        /*         if ij==1 */
        /*             title(['v (number of variables)=' num2str(vv(ij)) '
         * version' a]) */
        /*         else */
        /*             title(['v=' num2str(vv(ij))]) */
        /*         end */
        /*         ylabel('Seconds') */
        /*         xlabel('Number of observations') */
        /*         if ij==4 */
        /*             legend('mvnpdf','FS+mex','FS','location','NorthWest') */
        /*         end */
        /*     end */
        /*  */
        /*     hold off; */
        /* } */
        /* { */
        /*     %% TIME COMPARISON USING TIMEIT FUNCTION. */
        /*     % Remark: timeit function is present from  MATLAB 2013b */
        /*  */
        /*     if verLessThan('matlab', '8.2.0') */
        /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','This example needs
         * routine timeit which has been introduced in Matlab 2013b') */
        /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','You have a version
         * of Matlab which is < 2013b and you cannot run this example') */
        /*     else */
        /*         % nn = sample size */
        /*         % vv = number of variables */
        /*         nn=[100 200 500 1000 5000 10000 50000 100000]; */
        /*         vv=[2 5 10 20]; */
        /*  */
        /*         ttMat=nan(length(nn) , length(vv)); */
        /*         ttFSwithMex=ttMat; */
        /*         ttFSnoMex=ttMat; */
        /*  */
        /*         in = 1; iv=1; */
        /*         for n = nn */
        /*             for v = vv */
        /*  */
        /*                 X0 = zeros(n,v); */
        /*                 eyed=eye(v); */
        /*  */
        /*  */
        /*                 X = randn(n,v); */
        /*                 Mu = randn(1,v); */
        /*                 Sigma=cov(X); */
        /*  */
        /*                 %  Matlab function mvnpdf */
        /*                 yMat = @() log(mvnpdf(X, Mu, Sigma)); */
        /*                 tMat = timeit(yMat); */
        /*  */
        /*  */
        /*                 % logmvnpdfFS using mex file for mean deviations. */
        /*                 yFSwithMex = @() logmvnpdfFS(X, Mu,
         * Sigma,X0,eyed,n,v); */
        /*                 tFSwithMex = timeit(yFSwithMex); */
        /*  */
        /*                 % logmvnpdfFS and no mex file for mean deviations. */
        /*                 yFSnoMex = @() logmvnpdfFS(X, Mu, Sigma); */
        /*                 tFSnoMex = timeit(yFSnoMex); */
        /*  */
        /*                 ttMat(in,iv) = tMat; */
        /*                 ttFSwithMex(in,iv) = tFSwithMex; */
        /*                 ttFSnoMex(in,iv) = tFSnoMex; */
        /*  */
        /*                 disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
        /*                 iv = iv+1; */
        /*  */
        /*             end */
        /*             in = in+1; */
        /*             iv = 1; */
        /*         end */
        /*  */
        /*  */
        /*         % Plotting part */
        /*         a=ver; */
        /*         a=a.Release; */
        /*         aa=1; */
        /*         bb=length(nn); */
        /*  */
        /*         for ij=1:length(vv); */
        /*             subplot(length(vv)/2,2,ij) */
        /*             hold('on') */
        /*             plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
        /*             plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
        /*             plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
        /*  */
        /*             if ij==1 */
        /*                 title(['v (number of variables) =' num2str(vv(ij)) '
         * version' a]) */
        /*             else */
        /*                 title(['v=' num2str(vv(ij))]) */
        /*             end */
        /*             xlabel('Number of observations') */
        /*             ylabel('Seconds') */
        /*  */
        /*             if ij==4 */
        /*                 legend('mvnpdf','FS+mex','FS','location','NorthWest')
         */
        /*             end */
        /*  */
        /*         end */
        /*  */
        /*         hold off; */
        /*     end */
        /* } */
        /* { */
        /*     % Example of the use of option msg 0. */
        /*     n=20000; */
        /*     v=2; */
        /*     X=randn(n,v); */
        /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
        /*     msg=0; */
        /*     X0=X; */
        /*     eyed=eye(v); */
        /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
        /*     % y is -Inf but no warning is shown. */
        /* } */
        /* { */
        /*     % Example of the use of option msg 1. */
        /*     n=20000; */
        /*     v=2; */
        /*     X=randn(n,v); */
        /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
        /*     msg=1; */
        /*     X0=X; */
        /*     eyed=eye(v); */
        /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
        /*     %  y is -Inf and warning is shown. */
        /* } */
        /*  Beginning  of code. */
        /*    Note that X/Sigma ~ X*inv(Sigma) ~ mrdivide(X,Sigma) are
         * equivalent. */
        /*  Take Choleski of Sigma */
        loop_ub = out->sigmaopt->size[0];
        c_loop_ub = out->sigmaopt->size[1];
        i = Yselj->size[0] * Yselj->size[1];
        Yselj->size[0] = out->sigmaopt->size[0];
        Yselj->size[1] = out->sigmaopt->size[1];
        emxEnsureCapacity_real_T(Yselj, i);
        for (i = 0; i < c_loop_ub; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            Yselj->data[i1 + Yselj->size[0] * i] =
                out->sigmaopt
                    ->data[(i1 + out->sigmaopt->size[0] * i) +
                           out->sigmaopt->size[0] * out->sigmaopt->size[1] * j];
          }
        }
        nx = cholesky(Yselj);
        if (nx != 0) {
          ll->data[ll->size[0] * j] = rtMinusInf;
        } else {
          /*  Define the following value: d*log(2*pi)/2 */
          /*  Compute log(sqrt(diag(Sigma))), and define a constant value. */
          diag(Yselj, x);
          nx = x->size[0];
          for (loop_ub = 0; loop_ub < nx; loop_ub++) {
            x->data[loop_ub] = log(x->data[loop_ub]);
          }
          ilow =
              blockedSummation(x, x->size[0]) + 0.918938533204673 * (double)v;
          i = Ytri->size[0] * Ytri->size[1];
          Ytri->size[0] = out->Y->size[0];
          loop_ub = out->Y->size[1];
          Ytri->size[1] = out->Y->size[1];
          emxEnsureCapacity_real_T(Ytri, i);
          for (i = 0; i < loop_ub; i++) {
            c_loop_ub = out->Y->size[0];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              Ytri->data[i1 + Ytri->size[0] * i] =
                  out->Y->data[i1 + out->Y->size[0] * i] -
                  out->muopt->data[j + out->muopt->size[0] * i];
            }
          }
          b_mldivide(Yselj, eyev, r3);
          b_mtimes(Ytri, r3, Yselj);
          power(Yselj, r3);
          sum(r3, qqunassigned);
          loop_ub = qqunassigned->size[0];
          for (i = 0; i < loop_ub; i++) {
            ll->data[i + ll->size[0] * j] = -0.5 * qqunassigned->data[i] - ilow;
          }
          /*  Note that the instruction above is slightly faster than */
          /*  y = -0.5*sum((X*inv(Sigma)).^2,2)- Const; %#ok<MINV> */
        }
      } else {
        /*  avoid the computation for empty components and assign NaN */
        loop_ub = ll->size[0];
        for (i = 0; i < loop_ub; i++) {
          ll->data[i + ll->size[0] * j] = rtNaN;
        }
      }
    }
  } else {
    for (j = 0; j < loop_ub_tmp; j++) {
      loop_ub = out->muopt->size[1];
      i = r5->size[0] * r5->size[1];
      r5->size[0] = 1;
      r5->size[1] = out->muopt->size[1];
      emxEnsureCapacity_boolean_T(r5, i);
      for (i = 0; i < loop_ub; i++) {
        r5->data[i] = rtIsNaN(out->muopt->data[j + out->muopt->size[0] * i]);
      }
      i = r7->size[0] * r7->size[1];
      r7->size[0] = 1;
      r7->size[1] = r5->size[1];
      emxEnsureCapacity_boolean_T(r7, i);
      loop_ub = r5->size[1];
      for (i = 0; i < loop_ub; i++) {
        r7->data[i] = !r5->data[i];
      }
      if (c_any(r7)) {
        obj = log(nopt->data[j] / h);
        /* logmvnpdfFS produces log of Multivariate normal probability density
         * function (pdf) */
        /*  */
        /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
         * function</a> */
        /*  */
        /*  This function is a much faster version than (log of) Matlab function
         */
        /*  mvnpdf.  If this function is called without optional arguments than
         * it */
        /*  uses matlab function bsxfun to compute */
        /*  the deviations form the means and no mex function. */
        /*  If this function is called with the four optional input */
        /*  arguments X0, eyed, n and d a mex function based on C code is
         * directly used. */
        /*  Additional details follow: in order to compute the kernel of the
         * quadratic form */
        /*  at the exponent logmvnpdfFS creates an identity of size length(Mu)
         * and */
        /*  similarly needs to compute length(Mu). These two quantites can be */
        /*  precalculated and supplied as input parameters. If logmvnpdfFS has
         * to be */
        /*  called thousands of times (as it happens for example in each
         * iteration */
        /*  of all procedures of cluster analysis based mixtures of multivariate
         */
        /*  gaussian distributions). The same argument above applies to scalars
         * n */
        /*  and d which are directly passed to the compiled mex function */
        /*  */
        /*   Required input arguments: */
        /*  */
        /*  */
        /*  X :           Input data. Scalar, Vector or matrix. */
        /*                n x d data matrix; n observations and d variables.
         * Rows of */
        /*                Y represent observations, and columns represent
         * variables or coordinates. */
        /*                The (log of the) probability density of the
         * multivariate */
        /*                normal distribution will be evaluated at each row of
         * the */
        /*                n-by-d matrix Y */
        /*                Data Types - single|double */
        /*  Mu:           mean mu of the multivariate normal distribution.
         * 1-by-d vector. */
        /*                Data Types - single|double */
        /*  Sigma  :      covariance matrix of the multivariate normal
         * distribution. */
        /*                d-by-d matrix. */
        /*                Data Types - single|double */
        /*  */
        /*   Optional input arguments: */
        /*  */
        /*    X0  :       matrix of the same size of X which passes to C
         * function a container. */
        /*                Note that options X0, eyed, n, and d must be supplied
         */
        /*                together. */
        /*                  Example - 'X0',X */
        /*                  Data Types - single|double */
        /*  */
        /*   eyed :       identity matrix of size length(Mu) wchich passes to C
         * function a container. */
        /*                Note that options X0, eyed, n, and d must be supplied
         */
        /*                together. */
        /*                  Example - 'eyed',eye(v) */
        /*                  Data Types - single|double */
        /*  */
        /*      n :       scalar which passes to C function size(X,1). */
        /*                Note that options X0, eyed, n, and d must be supplied
         */
        /*                together. */
        /*                  Example - 'eyed',eye(v) */
        /*                  Data Types - single|double */
        /*  */
        /*      d :       scalar which passes to C function length(Mu). */
        /*                Note that options X0, eyed, n, and d must be supplied
         */
        /*                together. */
        /*                  Example - 'eyed',eye(v) */
        /*                  Data Types - single|double */
        /*  */
        /*         msg  : Level of output to display. Scalar. */
        /*                Scalar which controls whether to display or not
         * messages */
        /*                on the screen. If msg==1 (default) messages are
         * displayed */
        /*                on the screen when cholesky of Sigma is impossibile */
        /*                else no message is displayed on the screen. When
         * Clolesky */
        /*                of Sigma is impossible -Inf output is returned. */
        /*                  Example - 'msg',1 */
        /*                  Data Types - single | double */
        /*  */
        /*      callmex  : call or not mex function to compute the result.
         * Boolean. */
        /*                Boolean which controls whether to call or not the mex
         * function. */
        /*                  Example - 'callmex',false */
        /*                  Data Types - boolean */
        /*  */
        /*  Output: */
        /*  */
        /*    y    :   log-density of the multivariate normal. Vector. Vector
         * with length */
        /*                equal to n which returns the log-density of the
         * multivariate normal */
        /*                distribution with mean Mu and covariance Sigma,
         * evaluated at each row */
        /*                of X. */
        /*  */
        /*  See also mvnpdf */
        /*  */
        /*  References: */
        /*  */
        /*  */
        /*  */
        /*  Copyright 2008-2021. */
        /*  Written by FSDA team */
        /*  */
        /* <a href="matlab: docsearchFS('logmvnpdfFS')">Link to the help
         * function</a> */
        /*  */
        /* $LastChangedDate::                      $: Date of the last commit */
        /*    Examples: */
        /* { */
        /*     % Call to logmvnpdfFS with 3 input arguments. */
        /*      n=20; */
        /*      v=2; */
        /*      X=randn(n,v); */
        /*      mu = [1 1]; Sigma = [.9 .4; .4 .3]; */
        /*      y = logmvnpdfFS(X, mu, Sigma); */
        /* } */
        /* { */
        /*      % Comparison with mvnpdf. */
        /*      % In this example we check the agreement of the results with
         * MATLAB */
        /*      % function mvnpdf. */
        /*      n=20000; */
        /*      v=2; */
        /*      X=randn(n,v); */
        /*      mu = [1 -1]; Sigma = [.9 .4; .4 .3]; */
        /*      y = logmvnpdfFS(X, mu, Sigma); */
        /*      y1=log(mvnpdf(X,mu,Sigma)); */
        /*      max(abs(y-y1)) */
        /*      % 2.842e-14 */
        /* } */
        /* { */
        /*    % Remark: Options X0, eyed, n, and d must be used together. */
        /* } */
        /* { */
        /*     % TIME COMPARISON USING TIC TOC. */
        /*     % In the examples below we compare the speed of the different
         * solutions */
        /*     % logmvnpdfFS with mex function and logmvnpdfFS without mex
         * function */
        /*  */
        /*     % In this code computation time is based on tic toc combined with
         * a series */
        /*     % of replications */
        /*  */
        /*     % nn = sample size */
        /*     % vv = number of variables */
        /*     nn=[100 200 500 1000 5000 10000 50000 100000]; */
        /*     vv=[2 5 10 20]; */
        /*  */
        /*     % rep =number of replications */
        /*     rep = 1000; */
        /*  */
        /*     ttMat=nan(length(nn) , length(vv)); */
        /*     ttFSwithMex=ttMat; */
        /*     ttFSnoMex=ttMat; */
        /*  */
        /*  */
        /*     Mat=0; tMat=0; */
        /*     FSwithmex=0; tFSwithMex=0; */
        /*     FSnoMex=0; tFSnoMex=0; */
        /*  */
        /*  */
        /*     in = 1; iv=1; */
        /*     for n = nn */
        /*         for v = vv */
        /*  */
        /*             X0 = zeros(n,v); */
        /*             eyed=eye(v); */
        /*  */
        /*             for i=1:rep */
        /*  */
        /*                 X = randn(n,v); */
        /*                 Mu = randn(1,v); */
        /*                 Sigma=cov(X); */
        /*  */
        /*                 %  Matlab function mvnpdf, (black line in plot) */
        /*                 Mat = tic; */
        /*                 y0 = mvnpdf(X, Mu, Sigma); */
        /*                 y0=log(y0); */
        /*                 tMat = tMat + toc(Mat); */
        /*  */
        /*                 % logmvnpdfFS using mex file for mean deviations,
         * (blue line in plot) */
        /*                 FSwithmex = tic; */
        /*                 yD = logmvnpdfFS(X, Mu, Sigma,X0,eyed,n,v); */
        /*                 tFSwithMex = tFSwithMex + toc(FSwithmex); */
        /*  */
        /*                 % logmvnpdfFS and no mex file for mean deviations.
         * (red line in plot) */
        /*                 FSnoMex = tic; */
        /*                 yI = logmvnpdfFS(X, Mu, Sigma); */
        /*                 tFSnoMex = tFSnoMex + toc(FSnoMex); */
        /*  */
        /*  */
        /*                 if (sum(sum(abs(y0-yD))))>10^-6  ||
         * (sum(sum(abs(y0-yI)))) >10^-6 */
        /*                    error('FSDA:logmvnpdfFS:ShouldBeEq','Difference in
         * results: stop'); */
        /*                 end */
        /*  */
        /*             end */
        /*  */
        /*             ttMat(in,iv) = tMat; */
        /*             ttFSwithMex(in,iv) = tFSwithMex; */
        /*             ttFSnoMex(in,iv) = tFSnoMex; */
        /*  */
        /*             Mat=0; tMat=0; */
        /*             FSwithmex=0; tFSwithMex=0; */
        /*             FSnoMex=0; tFSnoMex=0; */
        /*  */
        /*  */
        /*             disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
        /*             iv = iv+1; */
        /*  */
        /*         end */
        /*         in = in+1; */
        /*         iv = 1; */
        /*     end */
        /*  */
        /*  */
        /*     % Plotting part */
        /*     a=ver; */
        /*     a=a.Release; */
        /*     aa=1; */
        /*     bb=8; */
        /*  */
        /*     for ij=1:length(vv); */
        /*         subplot(length(vv)/2,2,ij) */
        /*         hold('on') */
        /*         plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
        /*         plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
        /*         plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
        /*  */
        /*         if ij==1 */
        /*             title(['v (number of variables)=' num2str(vv(ij)) '
         * version' a]) */
        /*         else */
        /*             title(['v=' num2str(vv(ij))]) */
        /*         end */
        /*         ylabel('Seconds') */
        /*         xlabel('Number of observations') */
        /*         if ij==4 */
        /*             legend('mvnpdf','FS+mex','FS','location','NorthWest') */
        /*         end */
        /*     end */
        /*  */
        /*     hold off; */
        /* } */
        /* { */
        /*     %% TIME COMPARISON USING TIMEIT FUNCTION. */
        /*     % Remark: timeit function is present from  MATLAB 2013b */
        /*  */
        /*     if verLessThan('matlab', '8.2.0') */
        /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','This example needs
         * routine timeit which has been introduced in Matlab 2013b') */
        /*         warning('FSDA:logmvnpdfFS:MatlabTooOld','You have a version
         * of Matlab which is < 2013b and you cannot run this example') */
        /*     else */
        /*         % nn = sample size */
        /*         % vv = number of variables */
        /*         nn=[100 200 500 1000 5000 10000 50000 100000]; */
        /*         vv=[2 5 10 20]; */
        /*  */
        /*         ttMat=nan(length(nn) , length(vv)); */
        /*         ttFSwithMex=ttMat; */
        /*         ttFSnoMex=ttMat; */
        /*  */
        /*         in = 1; iv=1; */
        /*         for n = nn */
        /*             for v = vv */
        /*  */
        /*                 X0 = zeros(n,v); */
        /*                 eyed=eye(v); */
        /*  */
        /*  */
        /*                 X = randn(n,v); */
        /*                 Mu = randn(1,v); */
        /*                 Sigma=cov(X); */
        /*  */
        /*                 %  Matlab function mvnpdf */
        /*                 yMat = @() log(mvnpdf(X, Mu, Sigma)); */
        /*                 tMat = timeit(yMat); */
        /*  */
        /*  */
        /*                 % logmvnpdfFS using mex file for mean deviations. */
        /*                 yFSwithMex = @() logmvnpdfFS(X, Mu,
         * Sigma,X0,eyed,n,v); */
        /*                 tFSwithMex = timeit(yFSwithMex); */
        /*  */
        /*                 % logmvnpdfFS and no mex file for mean deviations. */
        /*                 yFSnoMex = @() logmvnpdfFS(X, Mu, Sigma); */
        /*                 tFSnoMex = timeit(yFSnoMex); */
        /*  */
        /*                 ttMat(in,iv) = tMat; */
        /*                 ttFSwithMex(in,iv) = tFSwithMex; */
        /*                 ttFSnoMex(in,iv) = tFSnoMex; */
        /*  */
        /*                 disp(['n=' num2str(n) ' -- v=' num2str(v)]); */
        /*                 iv = iv+1; */
        /*  */
        /*             end */
        /*             in = in+1; */
        /*             iv = 1; */
        /*         end */
        /*  */
        /*  */
        /*         % Plotting part */
        /*         a=ver; */
        /*         a=a.Release; */
        /*         aa=1; */
        /*         bb=length(nn); */
        /*  */
        /*         for ij=1:length(vv); */
        /*             subplot(length(vv)/2,2,ij) */
        /*             hold('on') */
        /*             plot(nn(aa:bb)',ttMat(aa:bb,ij),'k'); */
        /*             plot(nn(aa:bb)',ttFSwithMex(aa:bb,ij),'b') */
        /*             plot(nn(aa:bb)',ttFSnoMex(aa:bb,ij),'r'); */
        /*  */
        /*             if ij==1 */
        /*                 title(['v (number of variables) =' num2str(vv(ij)) '
         * version' a]) */
        /*             else */
        /*                 title(['v=' num2str(vv(ij))]) */
        /*             end */
        /*             xlabel('Number of observations') */
        /*             ylabel('Seconds') */
        /*  */
        /*             if ij==4 */
        /*                 legend('mvnpdf','FS+mex','FS','location','NorthWest')
         */
        /*             end */
        /*  */
        /*         end */
        /*  */
        /*         hold off; */
        /*     end */
        /* } */
        /* { */
        /*     % Example of the use of option msg 0. */
        /*     n=20000; */
        /*     v=2; */
        /*     X=randn(n,v); */
        /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
        /*     msg=0; */
        /*     X0=X; */
        /*     eyed=eye(v); */
        /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
        /*     % y is -Inf but no warning is shown. */
        /* } */
        /* { */
        /*     % Example of the use of option msg 1. */
        /*     n=20000; */
        /*     v=2; */
        /*     X=randn(n,v); */
        /*     mu = [1 -1]; Sigma = [.9 1; 1 .3]; */
        /*     msg=1; */
        /*     X0=X; */
        /*     eyed=eye(v); */
        /*     y = logmvnpdfFS(X,mu,Sigma,X0,eyed,n,v,msg); */
        /*     %  y is -Inf and warning is shown. */
        /* } */
        /*  Beginning  of code. */
        /*    Note that X/Sigma ~ X*inv(Sigma) ~ mrdivide(X,Sigma) are
         * equivalent. */
        /*  Take Choleski of Sigma */
        loop_ub = out->sigmaopt->size[0];
        c_loop_ub = out->sigmaopt->size[1];
        i = Yselj->size[0] * Yselj->size[1];
        Yselj->size[0] = out->sigmaopt->size[0];
        Yselj->size[1] = out->sigmaopt->size[1];
        emxEnsureCapacity_real_T(Yselj, i);
        for (i = 0; i < c_loop_ub; i++) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            Yselj->data[i1 + Yselj->size[0] * i] =
                out->sigmaopt
                    ->data[(i1 + out->sigmaopt->size[0] * i) +
                           out->sigmaopt->size[0] * out->sigmaopt->size[1] * j];
          }
        }
        nx = cholesky(Yselj);
        if (nx != 0) {
          i = qqunassigned->size[0];
          qqunassigned->size[0] = 1;
          emxEnsureCapacity_real_T(qqunassigned, i);
          qqunassigned->data[0] = rtMinusInf;
        } else {
          /*  Define the following value: d*log(2*pi)/2 */
          /*  Compute log(sqrt(diag(Sigma))), and define a constant value. */
          diag(Yselj, x);
          nx = x->size[0];
          for (loop_ub = 0; loop_ub < nx; loop_ub++) {
            x->data[loop_ub] = log(x->data[loop_ub]);
          }
          ilow =
              blockedSummation(x, x->size[0]) + 0.918938533204673 * (double)v;
          i = Ytri->size[0] * Ytri->size[1];
          Ytri->size[0] = out->Y->size[0];
          loop_ub = out->Y->size[1];
          Ytri->size[1] = out->Y->size[1];
          emxEnsureCapacity_real_T(Ytri, i);
          for (i = 0; i < loop_ub; i++) {
            c_loop_ub = out->Y->size[0];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              Ytri->data[i1 + Ytri->size[0] * i] =
                  out->Y->data[i1 + out->Y->size[0] * i] -
                  out->muopt->data[j + out->muopt->size[0] * i];
            }
          }
          b_mldivide(Yselj, eyev, r3);
          b_mtimes(Ytri, r3, Yselj);
          power(Yselj, r3);
          sum(r3, qqunassigned);
          loop_ub = qqunassigned->size[0];
          for (i = 0; i < loop_ub; i++) {
            qqunassigned->data[i] = -0.5 * qqunassigned->data[i] - ilow;
          }
          /*  Note that the instruction above is slightly faster than */
          /*  y = -0.5*sum((X*inv(Sigma)).^2,2)- Const; %#ok<MINV> */
        }
        loop_ub = qqunassigned->size[0];
        for (i = 0; i < loop_ub; i++) {
          ll->data[i + ll->size[0] * j] = obj + qqunassigned->data[i];
        }
      } else {
        /*  avoid the computation for empty components and assign NaN */
        loop_ub = ll->size[0];
        for (i = 0; i < loop_ub; i++) {
          ll->data[i + ll->size[0] * j] = rtNaN;
        }
      }
    }
  }
  emxFree_real_T(&r3);
  emxFree_boolean_T(&r5);
  emxFree_boolean_T(&r7);
  emxFree_real_T(&Ytri);
  emxFree_real_T(&nopt);
  emxFree_real_T(&eyev);
  /*  matrix ll forms the input to compute both the MIXTURE and the */
  /*  CLASSIFICATION LIKELIHOOD */
  /*  postprob n x k containing posterior probabilities */
  /*  logpdf n x 1 vector containg the n contributions to the log */
  /*  likelihood of mixture models */
  estepFS(ll, &iup, out->postprob, qqunassigned);
  /*  %%%%% */
  /*  In this part we select the untrimmed units */
  /*  They are those which have the n(1-alpha) largest values among the */
  /*  maxima of each row of matrix ll */
  /*  vector disc of length(n) contains the (weighted) contribution of */
  /*  each unit to the log likelihood */
  /*  idx = n x 1 vector containing the final assignments */
  /*  disc = n x 1 vector which contains the likelihood of each unit to */
  /*  the closest cluster */
  g_maximum(ll, groupind, idx);
  i = out->idx->size[0];
  out->idx->size[0] = idx->size[0];
  emxEnsureCapacity_real_T(out->idx, i);
  loop_ub = idx->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->idx->data[i] = idx->data[i];
  }
  /*  Sort the n likelihood contributions */
  /*  qq contains the orderd (weighted) likelihood contributions */
  i = x->size[0];
  x->size[0] = groupind->size[0];
  emxEnsureCapacity_real_T(x, i);
  loop_ub = groupind->size[0];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = groupind->data[i];
  }
  f_sort(x, idx);
  i = x->size[0];
  x->size[0] = idx->size[0];
  emxEnsureCapacity_real_T(x, i);
  loop_ub = idx->size[0];
  for (i = 0; i < loop_ub; i++) {
    x->data[i] = idx->data[i];
  }
  /*  %%%%% */
  /*  Find final trimmed and untrimmed units for final classification */
  if (mixt >= 1.0) {
    /*  ==2 */
    /*  Sort the n likelihood contributions */
    /*  qq contains the largest n*(1-alpha) (weighted) likelihood contributions
     */
    f_sort(qqunassigned, idx);
    i = qqunassigned->size[0];
    qqunassigned->size[0] = idx->size[0];
    emxEnsureCapacity_real_T(qqunassigned, i);
    loop_ub = idx->size[0];
    for (i = 0; i < loop_ub; i++) {
      qqunassigned->data[i] = idx->data[i];
    }
    if (h + 1.0 > out->Y->size[0]) {
      i = 0;
      i1 = 0;
    } else {
      i = (int)(h + 1.0) - 1;
      i1 = out->Y->size[0];
    }
    if (1.0 > h) {
      loop_ub = 0;
    } else {
      loop_ub = (int)h;
    }
    i2 = indold->size[0];
    indold->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(indold, i2);
    for (i2 = 0; i2 < loop_ub; i2++) {
      indold->data[i2] = (int)qqunassigned->data[i2];
    }
    /*  Store in vector idx the cluster associated to the highest posterior */
    /*  probability */
    i2 = idxmixt->size[0];
    idxmixt->size[0] = out->postprob->size[0];
    emxEnsureCapacity_int8_T(idxmixt, i2);
    loop_ub = out->postprob->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      idxmixt->data[i2] = 1;
    }
    loop_ub = i1 - i;
    i1 = idx->size[0];
    idx->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(idx, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      idx->data[i1] = (int)qqunassigned->data[i + i1];
    }
    c_loop_ub = idx->size[0];
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      idxmixt->data[idx->data[i1] - 1] = 0;
    }
    i1 = idx->size[0];
    idx->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(idx, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      idx->data[i1] = (int)qqunassigned->data[i + i1];
    }
    loop_ub = idx->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->postprob->data[idx->data[i] - 1] = 0.0;
    }
    /*  Remark: */
    /*  If there was full convergence sum(logpdf(assigned)) = vopt */
    /*  Compute value of the maximized MiXTURE log likelihood */
    /*  NlogLmixt is the negative of the maximized MIXTURE LOG-LIKELIHOOD */
    /*  Note that if there was convergence NlogL should be exactly equal to */
    /*  -vopt */
    loop_ub = ll->size[1];
    i = Yselj->size[0] * Yselj->size[1];
    Yselj->size[0] = indold->size[0];
    Yselj->size[1] = ll->size[1];
    emxEnsureCapacity_real_T(Yselj, i);
    for (i = 0; i < loop_ub; i++) {
      c_loop_ub = indold->size[0];
      for (i1 = 0; i1 < c_loop_ub; i1++) {
        Yselj->data[i1 + Yselj->size[0] * i] =
            ll->data[(indold->data[i1] + ll->size[0] * i) - 1];
      }
    }
    NlogLmixt = -c_estepFS(Yselj);
  } else {
    if (h + 1.0 > out->Y->size[0]) {
      i = 0;
      i1 = 0;
    } else {
      i = (int)(h + 1.0) - 1;
      i1 = out->Y->size[0];
    }
    /*  Assign observations to clusters and assign a 0 value to trimmed ones */
    loop_ub = i1 - i;
    i1 = idx->size[0];
    idx->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(idx, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      idx->data[i1] = (int)x->data[i + i1];
    }
    c_loop_ub = idx->size[0];
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      out->idx->data[idx->data[i1] - 1] = 0.0;
    }
    i1 = idx->size[0];
    idx->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(idx, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      idx->data[i1] = (int)x->data[i + i1];
    }
    loop_ub = idx->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->postprob->data[idx->data[i] - 1] = 0.0;
    }
  }
  emxFree_int32_T(&idx);
  emxFree_real_T(&Yselj);
  emxFree_int32_T(&indold);
  emxFree_real_T(&ll);
  /*  Compute AIC and BIC */
  /*  Note that disc(qq(1:h)) is the contribution to the CLASSIFICATION */
  /*  loglikelihood of the untrimmed units */
  if (1.0 > h) {
    loop_ub = 0;
  } else {
    loop_ub = (int)h;
  }
  /*  NlogL is the negative of the CLASSIFICATION LOG-LIKELIHOOD  of the */
  /*  untrimmed units */
  /*  NlogL=-sum(max(ll(untrimmed units,[],2)); */
  /*  Note that if there was convergence NlogL should be exactly equal to */
  /*  -vopt */
  i = qqunassigned->size[0];
  qqunassigned->size[0] = loop_ub;
  emxEnsureCapacity_real_T(qqunassigned, i);
  for (i = 0; i < loop_ub; i++) {
    qqunassigned->data[i] = groupind->data[(int)x->data[i] - 1];
  }
  emxFree_real_T(&x);
  emxFree_real_T(&groupind);
  y = blockedSummation(qqunassigned, loop_ub);
  /*  Store robust estimate of final centroids of the groups */
  /*  Store robust estimate of final covariance matrix of the groups */
  /*  Store the assignments in matrix out. Unassigned units have an assignment
   */
  /*  equal to 0 */
  emxFree_real_T(&qqunassigned);
  if (mixt >= 1.0) {
    i = out->idx->size[0];
    out->idx->size[0] = idxmixt->size[0];
    emxEnsureCapacity_real_T(out->idx, i);
    loop_ub = idxmixt->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->idx->data[i] = idxmixt->data[i];
    }
  }
  emxFree_int8_T(&idxmixt);
  /*  Store n x k matrix containing posterior probability */
  /*  of each row from each component (cluster) */
  /*  Number of estimated parameters */
  /*  k centroids of size v */
  /*  0.5*v*(v+1) estimates for each of the k covariance matrices */
  iup = (double)out->Y->size[1] * k;
  /*  if equalweights = false the k-1 mixture proportions parameters must be
   * added */
  if (!equalweights) {
    iup += k - 1.0;
  }
  /*  Find number of constraints which are imposed on the covariance matrices */
  /*  Find number of restricted eigenvalues for each group */
  /*  Compute INFORMATION CRITERIA */
  /*  add to npar the number of free covariance parameters */
  if (s_strcmp(restrfactorSTRUCT_pars)) {
    detpar = 1.0;
    shapepar = 0.0;
    rotpar = 0.0;
    /*  nParam=npar+1; */
  } else if (t_strcmp(restrfactorSTRUCT_pars)) {
    detpar =
        (k - 1.0) * (1.0 - 1.0 / rt_powd_snf(restrfactor->cdet,
                                             1.0 / (double)out->Y->size[1])) +
        1.0;
    shapepar = 0.0;
    rotpar = 0.0;
    /*  nParam=npar+k; */
  } else if (u_strcmp(restrfactorSTRUCT_pars)) {
    detpar = 1.0;
    shapepar = (double)out->Y->size[1] - 1.0;
    rotpar = 0.0;
    /*  nParam=npar+v; */
  } else if (v_strcmp(restrfactorSTRUCT_pars)) {
    detpar =
        (k - 1.0) * (1.0 - 1.0 / rt_powd_snf(restrfactor->cdet,
                                             1.0 / (double)out->Y->size[1])) +
        1.0;
    shapepar = (double)out->Y->size[1] - 1.0;
    rotpar = 0.0;
    /*  nParam=npar+k+v-1; */
  } else if (w_strcmp(restrfactorSTRUCT_pars)) {
    detpar = 1.0;
    rotpar = 0.0;
    shapepar = ((double)out->Y->size[1] - 1.0) *
               (1.0 - 1.0 / restrfactor->shw) *
               ((k - 1.0) * (1.0 - 1.0 / restrfactor->shb) + 1.0);
    /*  nParam=npar+1+k*(v-1); */
  } else if (x_strcmp(restrfactorSTRUCT_pars)) {
    detpar =
        (k - 1.0) * (1.0 - 1.0 / rt_powd_snf(restrfactor->cdet,
                                             1.0 / (double)out->Y->size[1])) +
        1.0;
    shapepar = ((double)out->Y->size[1] - 1.0) *
               (1.0 - 1.0 / restrfactor->shw) *
               ((k - 1.0) * (1.0 - 1.0 / restrfactor->shb) + 1.0);
    rotpar = 0.0;
    /*  nParam=npar+k*v; */
  } else if (y_strcmp(restrfactorSTRUCT_pars)) {
    detpar = 1.0;
    shapepar = (double)out->Y->size[1] - 1.0;
    rotpar = 0.5 * (double)out->Y->size[1] * ((double)out->Y->size[1] - 1.0);
    /*  nParam=npar+0.5*v*(v+1); */
  } else if (ab_strcmp(restrfactorSTRUCT_pars)) {
    detpar =
        (k - 1.0) * (1.0 - 1.0 / rt_powd_snf(restrfactor->cdet,
                                             1.0 / (double)out->Y->size[1])) +
        1.0;
    shapepar = (double)out->Y->size[1] - 1.0;
    rotpar = 0.5 * (double)out->Y->size[1] * ((double)out->Y->size[1] - 1.0);
    /*  nParam=npar+k+v-1+0.5*v*(v-1); */
  } else if (r_strcmp(restrfactorSTRUCT_pars)) {
    detpar = 1.0;
    shapepar = ((double)out->Y->size[1] - 1.0) *
               (1.0 - 1.0 / restrfactor->shw) *
               ((k - 1.0) * (1.0 - 1.0 / restrfactor->shb) + 1.0);
    rotpar = 0.5 * (double)out->Y->size[1] * ((double)out->Y->size[1] - 1.0);
    /*  nParam=npar+1+k*(v-1)+0.5*v*(v-1); */
  } else if (bb_strcmp(restrfactorSTRUCT_pars)) {
    detpar = 1.0;
    shapepar = (double)out->Y->size[1] - 1.0;
    rotpar =
        0.5 * k * (double)out->Y->size[1] * ((double)out->Y->size[1] - 1.0);
    /*  nParam=npar+v+0.5*k*v*(v-1); */
  } else if (q_strcmp(restrfactorSTRUCT_pars)) {
    detpar =
        (k - 1.0) * (1.0 - 1.0 / rt_powd_snf(restrfactor->cdet,
                                             1.0 / (double)out->Y->size[1])) +
        1.0;
    shapepar = ((double)out->Y->size[1] - 1.0) *
               (1.0 - 1.0 / restrfactor->shw) *
               ((k - 1.0) * (1.0 - 1.0 / restrfactor->shb) + 1.0);
    rotpar = 0.5 * (double)out->Y->size[1] * ((double)out->Y->size[1] - 1.0);
    /*  nParam=npar+k*v+0.5*v*(v-1); */
  } else if (cb_strcmp(restrfactorSTRUCT_pars)) {
    detpar =
        (k - 1.0) * (1.0 - 1.0 / rt_powd_snf(restrfactor->cdet,
                                             1.0 / (double)out->Y->size[1])) +
        1.0;
    shapepar = (double)out->Y->size[1] - 1.0;
    rotpar =
        0.5 * k * (double)out->Y->size[1] * ((double)out->Y->size[1] - 1.0);
    /*  nParam=npar+k+v-1+0.5*k*v*(v-1); */
  } else if (db_strcmp(restrfactorSTRUCT_pars)) {
    detpar = 1.0;
    shapepar = ((double)out->Y->size[1] - 1.0) *
               (1.0 - 1.0 / restrfactor->shw) *
               ((k - 1.0) * (1.0 - 1.0 / restrfactor->shb) + 1.0);
    rotpar =
        0.5 * k * (double)out->Y->size[1] * ((double)out->Y->size[1] - 1.0);
    /*  nParam=npar+1+k*(v-1) +0.5*k*v*(v-1); */
  } else if (eb_strcmp(restrfactorSTRUCT_pars)) {
    detpar =
        (k - 1.0) * (1.0 - 1.0 / rt_powd_snf(restrfactor->cdet,
                                             1.0 / (double)out->Y->size[1])) +
        1.0;
    shapepar = ((double)out->Y->size[1] - 1.0) *
               (1.0 - 1.0 / restrfactor->shw) *
               ((k - 1.0) * (1.0 - 1.0 / restrfactor->shb) + 1.0);
    rotpar =
        0.5 * k * (double)out->Y->size[1] * ((double)out->Y->size[1] - 1.0);
    /*   nParam=npar+0.5*k*v*(v+1); */
  }
  iup = ((iup + detpar) + shapepar) + rotpar;
  obj = log(h);
  if (mixt > 0.0) {
    /*  MIXMIX = BIC which uses parameters estimated using the mixture
     * loglikelihood */
    /*  and the maximized mixture likelihood as goodness of fit measure (New
     * BIC) */
    /*  MIXCLA = BIC which uses the classification likelihood based on */
    /*  parameters estimated using the mixture likelihood (New ICL) */
    out->MIXMIX.size[0] = 1;
    out->MIXMIX.size[1] = 1;
    ilow = iup * obj;
    out->MIXMIX.data[0] = 2.0 * NlogLmixt + ilow;
    out->MIXCLA.size[0] = 1;
    out->MIXCLA.size[1] = 1;
    out->MIXCLA.data[0] = 2.0 * -y + ilow;
    out->NlogL = 2.0 * NlogLmixt;
    out->CLACLA.size[0] = 0;
    out->CLACLA.size[1] = 0;
  } else {
    /*  CLACLA = BIC which uses parameters estimated using the classification */
    /*  likelihood and the maximized classification likelihood as goodness of
     * fit */
    /*  measure (New New) */
    out->MIXMIX.size[0] = 0;
    out->MIXMIX.size[1] = 0;
    out->MIXCLA.size[0] = 0;
    out->MIXCLA.size[1] = 0;
    ilow = 2.0 * -y;
    out->NlogL = ilow;
    out->CLACLA.size[0] = 1;
    out->CLACLA.size[1] = 1;
    out->CLACLA.data[0] = ilow + iup * obj;
  }
  /*  Store the fraction of subsamples without convergence. */
  out->notconver = mudiff;
  /*  Store units forming initial subset which gave rise to the optimal */
  /*  solution */
  /*  Store value of the objective function (maximized trimmed log likelihood)
   */
  out->obj = vopt;
  out->equalweights = equalweights;
  /*  Store the number of observations that have not been trimmed in the */
  /*  computation of the centroids */
  out->h = h;
  if (!Ysave) {
    i = out->Y->size[0] * out->Y->size[1];
    out->Y->size[0] = 1;
    out->Y->size[1] = 1;
    emxEnsureCapacity_real_T(out->Y, i);
    out->Y->data[0] = 0.0;
  } else {
    /*  Store original data matrix */
  }
}

/* End of code generation (tclust_wrapper1.c) */
