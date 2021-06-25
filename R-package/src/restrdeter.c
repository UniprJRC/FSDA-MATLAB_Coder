/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restrdeter.c
 *
 * Code generation for function 'restrdeter'
 *
 */

/* Include files */
#include "restrdeter.h"
#include "bsxfun.h"
#include "combineVectorElements.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "matrix_to_integer_power.h"
#include "minOrMax.h"
#include "mtimes.h"
#include "permute.h"
#include "prod.h"
#include "repmat.h"
#include "restreigen.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void restrdeter(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                double restr_data[], int restr_size[2], emxArray_real_T *out)
{
  emxArray_boolean_T d_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_boolean_T *r7;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r8;
  emxArray_int32_T *r9;
  emxArray_real_T b_c_data;
  emxArray_real_T c_dltm;
  emxArray_real_T c_restr_data;
  emxArray_real_T d_restr_data;
  emxArray_real_T e_restr_data;
  emxArray_real_T *b_dltm;
  emxArray_real_T *b_eigenvalues;
  emxArray_real_T *b_x;
  emxArray_real_T *d1;
  emxArray_real_T *dnis;
  emxArray_real_T *ed;
  emxArray_real_T *ee;
  emxArray_real_T *gm;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *solmp;
  emxArray_real_T *x;
  emxArray_real_T *y;
  double b_dv[3];
  double b_restr_data[2];
  double c_data[2];
  double c2;
  double maxdnis;
  int b_iv[3];
  int iv1[3];
  int iv2[3];
  int iv3[3];
  int b_restr_size[2];
  int c_c[2];
  int c_size[2];
  int acoef;
  int b_k;
  int bcoef;
  int c_k;
  unsigned int dimsor;
  int exitg1;
  int i;
  int i1;
  int j;
  int k;
  int npages;
  int v;
  bool firstmult;
  /* restrdeter computes determinant restriction  */
  /*  */
  /* <a href="matlab: docsearchFS('restrdeter')">Link to the help function</a>
   */
  /*  */
  /*    restrdeter restricts the determinant according to the constraint */
  /*    specified in scalar restr. This function is called in every */
  /*    concentration step of function tclust in case determinant restriction */
  /*    is needed */
  /*  */
  /*   Required input arguments: */
  /*  */
  /* eigenvalues: Eigenvalues. Matrix. v x k matrix containing the eigenvalues
   */
  /*              of the covariance matrices of the k groups. */
  /*              v is the number of variables of the dataset which has to be */
  /*              clustered. */
  /*      niini: Cluster size. Column vector. k x 1 vector containing the size
   */
  /*              of the k clusters */
  /*      restr: Restriction factor. Scalar (default) or vector of length 2.  */
  /*             If restr is a scalar it defines the maximum ratio of the */
  /*             determinants which is allowed. In other words, we impose the */
  /*             constraint on the covariance matrices: */
  /*             \[ */
  /*                \frac{\max_{j=1,...,k} |\Sigma_j|}{\min_{j=1,...,k} */
  /*                |\Sigma_j|} \leq restr */
  /*             \] */
  /*            where $restr \geq 1$. In this case the "shape" constraint (as */
  /*            defined below) applied to each group is fixed to */
  /*            $c_{shape}=10^{10}$, to ensure the procedure is (virtually) */
  /*            affine equivariant. In other words, the decomposition or the */
  /*            $j$-th scatter matrix $\Sigma_j$ is */
  /*            \[ */
  /*            \Sigma_j=\lambda_j^{1/v} \Omega_j \Gamma_j \Omega_j' */
  /*            \] */
  /*            where $\Omega_j$ is an orthogonal matrix of eigenvectors,
   * $\Gamma_j$ is a */
  /*            diagonal matrix with $|\Gamma_j|=1$ and with elements */
  /*            $\{\gamma_{j1},...,\gamma_{jv}\}$ in its diagonal (proportional
   * to */
  /*            the eigenvalues of the $\Sigma_j$ matrix) and */
  /*            $|\Sigma_j|=\lambda_j$. The $\Gamma_j$ matrices are commonly */
  /*            known as "shape" matrices, because they determine the shape of
   * the */
  /*            fitted cluster components. The following $k$ */
  /*            constraints are then imposed on the shape matrices: */
  /*            \[ */
  /*            \frac{\max_{l=1,...,v} \gamma_{jl}}{\min_{l=1,...,v}
   * \gamma_{jl}}\leq */
  /*                c_{shape}, \text{ for } j=1,...,k, */
  /*            \] */
  /*            The particular case $restr=1$ forces all determinants of the */
  /*            scatter matrices to be equal i.e. $|\Sigma_1|=...= |\Sigma_k|$.
   */
  /*            If $restr$ is a vector of length 2 the second element refers to
   */
  /*            $c_{shape}$ of the previous equation. In other words, for
   * example if */
  /*            $restr=[3, 10]$ we impose the $k+1$ constraints */
  /*            \[ */
  /*                \frac{\max_{j=1,...,k} |\Sigma_j|}{\min_{j=1,...,k} */
  /*                |\Sigma_j|} \leq restr(1)=3 */
  /*             \] */
  /*            and */
  /*            \[ */
  /*            \frac{\max_{l=1,...,v} \gamma_{jl}}{\min_{l=1,...,v}
   * \gamma_{jl}} \leq */
  /*                restr(2)=10, \text{ for } j=1,...,k, */
  /*            \] */
  /*  */
  /*            Different constrained clustering problems can be defined when */
  /*            varying $restr(1)$ and $restr(2)$. In particular, we are */
  /*            ideally searching for spherical clusters when $restr(2)=1$. */
  /*            Models with variable volume and spherical clusters are handled
   */
  /*            with $1<restr(1)<\infty$ and $restr(2)=1$. The */
  /*            $restr(1)=restr(2)=1$ case often yields a very constrained */
  /*            parametrization because it implies spherical clusters with equal
   */
  /*            volumes. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*       tol : tolerance. Scalar defining the tolerance of the procedure. */
  /*             The default value is 1e-8 */
  /*                Example - 'tol',[1e-18]  */
  /*                Data Types - double */
  /*  */
  /*  userepmat : use builtin repmat. Scalar. If userepmat is true function */
  /*              repmat is used instead of bsxfun inside the procedure. */
  /*              Remark: repmat is built in from MATLAB 2013b so it is faster
   */
  /*              to use repmat if the current version of MATLAB is >2013a */
  /*                Example - 'userepmat',1  */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*             out      : Restricted eigenvalues which satisfy the */
  /*                        determinant constraint. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues.  */
  /*                        The ratio between the determinants (that is the */
  /*                        product of the columns of matrix out) is not */
  /*                        greater than restr */
  /*  */
  /*  See also tclust, restreigen, tclustreg */
  /*  */
  /*  References: */
  /*  */
  /*  This function implements the algorithm described in  */
  /*  Fritz H., Garcia-Escudero, L.A. and Mayo-Iscar, A. (2013), A fast */
  /*  algorithm for robust constrained clustering, */
  /* "Computational Satistics and Data Analysis", Vol. 61, pp. 124-136. */
  /*  [Available at */
  /*  http://www.eio.uva.es/infor/personas/tclust_algorithm.pdf] */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  DETAILS. This algorithm solves the minimization problem with constraints
   */
  /*  without resorting to the Dykstra algorithm. This implementation is based
   */
  /*  on the paper  "A fast algorithm for robust constrained clustering" by */
  /*  Fritz H., Garcia Escudero L.A. and Mayo-Iscar A. (2012). (FGM2012 in the
   */
  /*  code below) */
  /*  */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('restrdeter')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate:: 2017-11-17 15:01:40 #$: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*    %% Example using all default options. */
  /*    % Suppose v=3 and k=4 so the matrix containing the eigenvalues is 3-by-4
   */
  /*    % First column of matrix eigenvalues contains the eigenvalues of the
   * first group */
  /*    % Second column of matrix eigenvalues contains the eigenvalues of the
   * second group */
  /*    % Thrid column of matrix eigenvalues contains the eigenvalues of the
   * third group */
  /*    % Fourth column of matrix eigenvalues contains the eigenvalues of the
   * fourth group */
  /*    rng(10,'twister') */
  /*    eigenvalues=abs(10*randn(3,4)); */
  /*    % niini is the column vector containing the sizes of the 4 groups */
  /*    niini=[30;40;20;10]; */
  /*    out=restrdeter(eigenvalues,niini,1.1) */
  /*    disp('Input matrix of unrestricted eigenvalues') */
  /*    disp(eigenvalues) */
  /*    disp('Output matrix of restricted eigenvalues which satisfy determinant
   * constraint') */
  /*    disp(out) */
  /*    disp('Ratio between largest and smallest determinant') */
  /*    disp(max(prod(eigenvalues))/min(prod(eigenvalues))) */
  /*    disp('Ratio between largest and smallest restricted determinants') */
  /*    disp(max(prod(out))/min(prod(out))) */
  /* } */
  /* { */
  /*     %% Determinant restriction when an eigenvalue is 0. */
  /*     % Suppose 5 variables and six groups */
  /*     av=abs(randn(5,6)); */
  /*     % The third eigenvalue of the second groups is set to 0 */
  /*     av(3,2)=0; */
  /*     % Maximum ratio among determinants must be equal to 1.6. */
  /*     restr=1.6; */
  /*     % Group sizes */
  /*     niini=[30;40;20;10;50;100]; */
  /*     disp('Original values of the determinants') */
  /*     disp(prod(av)) */
  /*     % Apply the restriction */
  /*     a=restrdeter(av,niini,restr); */
  /*     disp('Restricted eigenvalues which satisfy determinant constraint') */
  /*     disp(a) */
  /*     disp('Values of restricted determinants') */
  /*     disp(prod(a)) */
  /*     disp('Maximum value of ratio among determinants') */
  /*     disp(max(prod(a))/min(prod(a))) */
  /* } */
  /* { */
  /*     % An example using option arguments tol and repmat. */
  /*     % Suppose 3 variables and six groups */
  /*     av=abs(randn(3,6)); */
  /*     % Maximum ratio among determinants must be equal to 1.6. */
  /*     restr=1.6; */
  /*     % Group sizes */
  /*     niini=[30;40;20;10;50;100]; */
  /*     % Apply the restriction using a tolerance of 1e-12 and use MATLAB */
  /*     % function repmat for the computations */
  /*     tol=1e-12; */
  /*     repm=1; */
  /*     a=restrdeter(av,niini,restr,tol,repm); */
  /* } */
  /* { */
  /*     % Determinant restriction when all eigenvalues of a group are 0. */
  /*     % Two variables and five groups. */
  /*     av=abs(randn(2,5)); */
  /*     restr=1.6; */
  /*     niini=[30;40;20;10;50]; */
  /*     av(:,2)=0; */
  /*     a=restrdeter(av,niini,restr); */
  /*     disp('Maximum value of ratio among determinants') */
  /*     disp(max(prod(a))/min(prod(a))) */
  /* } */
  /* { */
  /*     % Determinant restriction when all eigenvalues of two groups are 0. */
  /*     niini=[30;40;20;10;50]; */
  /*     av=abs(randn(2,5)); */
  /*     av(:,2:3)=0; */
  /*     restr=1.6; */
  /*     a=restrdeter(av,niini,restr); */
  /*     disp('Maximum value of ratio among determinants') */
  /*     disp(max(prod(a))/min(prod(a))) */
  /* } */
  /*  Beginning of code */
  if ((restr_size[0] == 0) || (restr_size[1] == 0)) {
    npages = 0;
  } else {
    npages = restr_size[0];
  }
  if (npages == 2) {
    c2 = restr_data[1];
    restr_size[0] = 1;
    restr_size[1] = 1;
  } else {
    c2 = 1.0E+10;
  }
  /*  userepmat specifies if it is necessary to use function repmat or bsxfun */
  /*  Remark: repmat has become built in from Release 2013b so it is faster to
   */
  /*  use it */
  /*  Get number of variables (v) and number of clusters (k) */
  k = eigenvalues->size[1] - 1;
  v = eigenvalues->size[0];
  npages = eigenvalues->size[0] * eigenvalues->size[1] - 1;
  bcoef = 0;
  for (acoef = 0; acoef <= npages; acoef++) {
    if (eigenvalues->data[acoef] < 1.0E-15) {
      bcoef++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = bcoef;
  emxEnsureCapacity_int32_T(r, i);
  bcoef = 0;
  for (acoef = 0; acoef <= npages; acoef++) {
    if (eigenvalues->data[acoef] < 1.0E-15) {
      r->data[bcoef] = acoef + 1;
      bcoef++;
    }
  }
  acoef = r->size[0] - 1;
  for (i = 0; i <= acoef; i++) {
    eigenvalues->data[r->data[i] - 1] = 0.0;
  }
  emxFree_int32_T(&r);
  /*  Eigenvalue restriction using a restriction factor 10^10 is initially */
  /*  applied separately to each group */
  emxInit_real_T(&b_eigenvalues, 1);
  emxInit_real_T(&d1, 2);
  emxInit_real_T(&ed, 2);
  emxInit_real_T(&dnis, 2);
  emxInit_boolean_T(&dltm, 2);
  emxInit_boolean_T(&dgtcm, 2);
  emxInit_real_T(&solmp, 2);
  emxInit_real_T(&ee, 3);
  emxInit_int32_T(&r1, 1);
  emxInit_real_T(&x, 1);
  emxInit_real_T(&y, 2);
  emxInit_boolean_T(&c, 2);
  emxInit_boolean_T(&b_c, 2);
  emxInit_real_T(&b_x, 3);
  emxInit_real_T(&r2, 3);
  emxInit_real_T(&b_dltm, 2);
  emxInit_real_T(&r3, 3);
  emxInit_real_T(&r4, 3);
  emxInit_real_T(&r5, 2);
  emxInit_real_T(&r6, 3);
  for (j = 0; j <= k; j++) {
    acoef = eigenvalues->size[0];
    i = b_eigenvalues->size[0];
    b_eigenvalues->size[0] = eigenvalues->size[0];
    emxEnsureCapacity_real_T(b_eigenvalues, i);
    /* restreigen computes eigenvalues restriction (without Dykstra algorithm)
     */
    /*  */
    /* <a href="matlab: docsearchFS('restreigen')">Link to the help function</a>
     */
    /*  */
    /*    restreigen restricts the eigenvalues according to the constraint */
    /*    specified in scalar restr. This function is called in every */
    /*    concentration step of function tclust and can also be used inside */
    /*    function MixSim to generate groups with a prespecified level of */
    /*    overlapping. */
    /*  */
    /*   Required input arguments: */
    /*  */
    /* eigenvalues: Eigenvalues. Matrix. v x k matrix containing the eigenvalues
     */
    /*              of the covariance matrices of the k groups. */
    /*              v is the number of variables of the dataset which has to be
     */
    /*              clustered. */
    /*      niini: Cluster size. Vector. k x 1 vector containing the size of the
     * k clusters */
    /*      restr: Restriction factor. Scalar. Scalar containing the restr
     * parameter in tclust program. */
    /*             More in detail, parameter restr defines the cluster's shape
     */
    /*             restrictions, which are applied on all clusters during each
     */
    /*             iteration. */
    /*             Setting restr to 1, yields the strongest restriction, */
    /*             forcing all eigenvalues/determinants to be equal and so the
     */
    /*             method looks for similarly scattered (respectively spherical)
     */
    /*             clusters. */
    /*  */
    /*   Optional input arguments: */
    /*  */
    /*       tol : tolerance. Scalar defining the tolerance of the procedure. */
    /*             The default value is 1e-8 */
    /*                Example - 'tol',[1e-18] */
    /*                Data Types - double */
    /*  */
    /*  userepmat : use repmat, bsxfun or implicit expansion. Scalar. */
    /*              If userepmat is equal to 1, function repmat is used instead
     */
    /*              of bsxfun inside the procedure. Remark: repmat is built in
     */
    /*              from MATLAB 2013b so it is faster to use repmat if the */
    /*              current version of MATLAB is >2013a. */
    /*              If userepmat is 2, implicit expansion is used instead of */
    /*              bsxfun. Note that implicit expansion has been introduced
     * only */
    /*              in 2017a therefore it will not work with previous releases.
     */
    /*                Example - 'userepmat',1 */
    /*                Data Types - double */
    /*  */
    /*   Output: */
    /*  */
    /*  */
    /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
    /*                        containing restricted eigenvalues. */
    /*                        The ratio between two possible elements in matrix
     */
    /*                        out is not greater than restr */
    /*  */
    /*  See also tclust, restrdeter, tclustreg */
    /*  */
    /*  References: */
    /*  */
    /*  This function implements the algorithm described in */
    /*  Fritz H., Garcia-Escudero, L.A. and Mayo-Iscar, A. (2013), A fast */
    /*  algorithm for robust constrained clustering, */
    /* "Computational Satistics and Data Analysis", Vol. 61, pp. 124-136. */
    /*  [Available at */
    /*  http://www.eio.uva.es/infor/personas/tclust_algorithm.pdf] */
    /*  */
    /*  Copyright 2008-2021. */
    /*  Written by FSDA team */
    /*  */
    /*  DETAILS. This algorithm solves the minimization problem with constraints
     */
    /*  without resorting to the Dykstra algorithm. This implementation is based
     */
    /*  on the paper  "A fast algorithm for robust constrained clustering" by */
    /*  Fritz H., Garcia Escudero L.A. and Mayo-Iscar A. (2012). (FGM2012 in the
     */
    /*  code below) */
    /*  */
    /*  */
    /*  */
    /* <a href="matlab: docsearchFS('restreigen')">Link to the help function</a>
     */
    /*  */
    /* $LastChangedDate::                      $: Date of the last commit */
    /*  Examples: */
    /*  */
    /* { */
    /*    % Example using all default options. */
    /*    % Suppose v=3 and k=4 so the matrix containing the eigenvalues is
     * 3-by-4 */
    /*    % First column of matrix eigenvalues contains the eigenvalues of the
     * first group */
    /*    % Second column of matrix eigenvalues contains the eigenvalues of the
     * second group */
    /*    % Thrid column of matrix eigenvalues contains the eigenvalues of the
     * third group */
    /*    % Fourth column of matrix eigenvalues contains the eigenvalues of the
     * fourth group */
    /*    rng(10,'twister') */
    /*    eigenvalues=abs(10*randn(3,4)); */
    /*    % niini is the vector containing the sizes of the 4 groups */
    /*    niini=[30;40;20;10]; */
    /*    out=restreigen(eigenvalues,niini,1.1) */
    /*    disp('Input matrix of unrestricted eigenvalues') */
    /*    disp(eigenvalues) */
    /*    disp('Output matrix of restricted eigenvalues') */
    /*    disp(out) */
    /*    disp('Ratio between largest and smallest unrestricted eigenvalues') */
    /*    disp(max(max(eigenvalues))/min(min(eigenvalues))) */
    /*    disp('Ratio between largest and smallest restricted eigenvalues') */
    /*    disp(max(max(out))/min(min(out))) */
    /* } */
    /*  */
    /*  */
    /* { */
    /*     % Second example of eigenvalue restriction. */
    /*     eigenvalues=abs(randn(3,4)); */
    /*     eigenvalues(:,3)=0; */
    /*     niini=[30;40;20;10]; */
    /*     restreigen(eigenvalues,niini,1.1) */
    /*     eigenvalues(:,3)=1; */
    /*     restreigen(eigenvalues,niini,1.1) */
    /* } */
    /* { */
    /*     % Compare speed. */
    /*     % We compare the speed of restreigneasy with that of restreigen. We
     * use */
    /*     % userepmat=2 if the current MATLAB version if >=R2017a or userepmat
     * =1 */
    /*     % if MATLAB version is >=R2013a but <R2017a else we use userepmat =0
     */
    /*     v=10; */
    /*     k=8; */
    /*     tol=1e-8; */
    /*  */
    /*     if verLessThanFS(9.2)== false */
    /*         % If MATLAB version is at least 2017a */
    /*         userepmat=2; */
    /*     elseif verLessThanFS(8.1) == false */
    /*         % if MATLAB version is at least R2013b */
    /*         userepmat=1; */
    /*     else */
    /*         userepmat=0; */
    /*     end */
    /*  */
    /*     oldroutinetime=0; */
    /*     newroutinetime=0; */
    /*     rng(1) */
    /*     for j=1:10000 */
    /*         eigenvalues=100*abs(randn(v,k)); */
    /*         % niini is the vector containing the sizes of the 4 groups */
    /*         niini=randi(100,[k,1]); */
    /*         tic; */
    /*         outold=restreigeneasy(eigenvalues,niini,1.1); */
    /*         % Uncomment the line below if you want */
    /*         % outold=restreigen(eigenvalues,niini,1.1,tol,1); */
    /*         oldroutinetime=oldroutinetime+toc; */
    /*         tic; */
    /*         outnew=restreigen(eigenvalues,niini,1.1,tol,userepmat); */
    /*         newroutinetime=newroutinetime+toc; */
    /*         if max(max(abs(outold-outnew)))>1e-5 */
    /*             error('The two routines are different') */
    /*         end */
    /*     end */
    /*     disp(['Computing time of restreigeneasy: ' num2str(oldroutinetime)])
     */
    /*     disp(['Computing time of restreigen: ' num2str(newroutinetime)]) */
    /* } */
    /*  Beginning of code */
    /*  userepmat specifies if it is necessary to use function repmat or bsxfun
     */
    /*  Remark: repmat has become built in from Release 2013b so it is faster to
     */
    /*  use it */
    /*  Initializations */
    /*  Get number of variables (v) and number of clusters (k) */
    /*  Get number of units of the dataset */
    /*  We assume that niini is a column vector */
    /*  nis is a matrix which replicates in the columns the sizes of the goups
     */
    /*  First row of nis = size of first group repated v times */
    /*  Second row of nis = size of second group repated v times */
    /*  .... */
    /*  kth row of nis = size of kth group repated v times */
    /*  Below is the alternative inefficient code */
    /*  nis = repmat(niini,1,v); */
    /*  niini=niini'; */
    /*  dsor is 2*k*v the ordered set of values in which the restriction
     * objective */
    /*  function change the definition The elements in dsor correspond to  the
     */
    /*  frontiers for the intervals in which this objective function has the
     * same */
    /*  definition */
    /*  In other words */
    /*  dsor=(d_{11}, ........, d_{kv},d_{11}/restr, ........, d_{kv}/restr) */
    /*  OLD was */
    /*  dsor=sort([eigenvalues(:);eigenvalues(:)/c])'; */
    i = x->size[0];
    x->size[0] = eigenvalues->size[0] + eigenvalues->size[0];
    emxEnsureCapacity_real_T(x, i);
    for (i = 0; i < acoef; i++) {
      maxdnis = eigenvalues->data[i + eigenvalues->size[0] * j];
      b_eigenvalues->data[i] = maxdnis;
      x->data[i] = maxdnis / c2;
      x->data[i + acoef] = maxdnis;
    }
    c_sort(x);
    /*  dimsor=length(dsor); */
    dimsor = ((unsigned int)eigenvalues->size[0] << 1) + 1U;
    /*  d1 is like dsor but contains an additional element which is larger than
     * the largest element of dsor */
    i = d1->size[0] * d1->size[1];
    d1->size[0] = 1;
    d1->size[1] = x->size[0];
    emxEnsureCapacity_real_T(d1, i);
    acoef = x->size[0];
    for (i = 0; i < acoef; i++) {
      d1->data[i] = x->data[i];
    }
    d1->data[(int)dimsor - 1] = x->data[(int)dimsor - 2] * 2.0;
    /*  d2 is like dsor but contains an additional element which smaller than
     * the smallest element of dsor */
    /*  ed is a set with the middle points of these intervals */
    acoef = x->size[0] - 1;
    i = ed->size[0] * ed->size[1];
    ed->size[0] = 1;
    ed->size[1] = x->size[0] + 1;
    emxEnsureCapacity_real_T(ed, i);
    ed->data[0] = d1->data[0] / 2.0;
    for (i = 0; i <= acoef; i++) {
      ed->data[i + 1] = (d1->data[i + 1] + x->data[i]) / 2.0;
    }
    /*  the only relevant eigenvalues are those belong to a clusters with sample
     */
    /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
    /*  elements has no influence in the objective function */
    npages = eigenvalues->size[0] - 1;
    bcoef = 0;
    for (acoef = 0; acoef <= npages; acoef++) {
      bcoef++;
    }
    i = dnis->size[0] * dnis->size[1];
    dnis->size[0] = 1;
    dnis->size[1] = bcoef;
    emxEnsureCapacity_real_T(dnis, i);
    for (acoef = 0; acoef <= npages; acoef++) {
      dnis->data[acoef] = b_eigenvalues->data[acoef];
    }
    maxdnis = d_maximum(dnis);
    if ((!(maxdnis <= 1.0E-8)) && (!(fabs(maxdnis / b_minimum(dnis)) <= c2))) {
      /*  we check if the  eigenvalues verify the restrictions */
      /*  abs here is just for computational purposes */
      /*  REMARK: the following exploits matrix operations for avoiding */
      /*  loops. Given that the code below is difficult to interpret we */
      /*  refer to routine restreigeneasy for a better comprehension */
      /*  of the underlying algorithm */
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = eigenvalues->size[0];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      if (eigenvalues->size[0] != 0) {
        bcoef = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (c_k = 0; c_k <= i; c_k++) {
          npages = bcoef * c_k;
          acoef = (eigenvalues->size[0] != 1);
          i1 = dltm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm->data[b_k + dltm->size[0] * c_k] =
                (b_eigenvalues->data[acoef * b_k] < ed->data[npages]);
          }
        }
      }
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      acoef = ed->size[1] - 1;
      for (i = 0; i <= acoef; i++) {
        ed->data[i] *= c2;
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = eigenvalues->size[0];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      if (eigenvalues->size[0] != 0) {
        bcoef = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (c_k = 0; c_k <= i; c_k++) {
          npages = bcoef * c_k;
          acoef = (eigenvalues->size[0] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm->data[b_k + dgtcm->size[0] * c_k] =
                (b_eigenvalues->data[acoef * b_k] > ed->data[npages]);
          }
        }
      }
      /*  Matrix version of s(:,mp)=sum(d.*(d<edmp),2) for mp=1, ..., dimsor */
      /*  Matrix version of t(:,mp)=sum(d.*(d>edmpc),2) for mp=1, ..., dimsor */
      /*  Vector version of */
      /*  solmp=sum(niini/n.*(s(:,mp)+t(:,mp)/c))/(sum(niini/n.*(r(:,mp)))) */
      /*  Note that solmp corresponds to m* of the equation below (5.4) of */
      /*  FGM2012 */
      /*  There are dimsor values of m*. We must choose the one which is */
      /*  associated to the smallest value of the objective function */
      /*  implemented in vector obj */
      i = x->size[0];
      x->size[0] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(x, i);
      acoef = eigenvalues->size[0];
      for (i = 0; i < acoef; i++) {
        x->data[i] = eigenvalues->data[i + eigenvalues->size[0] * j];
      }
      npages = eigenvalues->size[0];
      g_bsxfun(dltm, x, r5);
      c_dltm = *r5;
      b_iv[0] = 1;
      b_iv[1] = npages;
      b_iv[2] = (int)dimsor;
      c_dltm.size = &b_iv[0];
      c_dltm.numDimensions = 3;
      b_permute(&c_dltm, r6);
      e_sum(r6, ed);
      i = x->size[0];
      x->size[0] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(x, i);
      acoef = eigenvalues->size[0];
      for (i = 0; i < acoef; i++) {
        x->data[i] = eigenvalues->data[i + eigenvalues->size[0] * j];
      }
      npages = eigenvalues->size[0];
      g_bsxfun(dgtcm, x, r5);
      c_dltm = *r5;
      iv1[0] = 1;
      iv1[1] = npages;
      iv1[2] = (int)dimsor;
      c_dltm.size = &iv1[0];
      c_dltm.numDimensions = 3;
      b_permute(&c_dltm, r6);
      e_sum(r6, d1);
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      acoef = ed->size[1] - 1;
      for (i = 0; i <= acoef; i++) {
        ed->data[i] += d1->data[i] / c2;
      }
      npages = ed->size[1];
      i = solmp->size[0] * solmp->size[1];
      solmp->size[0] = 1;
      solmp->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(solmp, i);
      for (bcoef = 0; bcoef < npages; bcoef++) {
        solmp->data[bcoef] = ed->data[bcoef];
      }
      i = b_dltm->size[0] * b_dltm->size[1];
      b_dltm->size[0] = dltm->size[0];
      b_dltm->size[1] = dltm->size[1];
      emxEnsureCapacity_real_T(b_dltm, i);
      acoef = dltm->size[0] * dltm->size[1];
      for (i = 0; i < acoef; i++) {
        b_dltm->data[i] = (double)dltm->data[i] + (double)dgtcm->data[i];
      }
      npages = eigenvalues->size[0];
      c_dltm = *b_dltm;
      iv2[0] = 1;
      iv2[1] = npages;
      iv2[2] = (int)dimsor;
      c_dltm.size = &iv2[0];
      c_dltm.numDimensions = 3;
      b_permute(&c_dltm, r6);
      e_sum(r6, ed);
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      npages = ed->size[1];
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(y, i);
      for (bcoef = 0; bcoef < npages; bcoef++) {
        y->data[bcoef] = ed->data[bcoef];
      }
      i = solmp->size[0] * solmp->size[1];
      solmp->size[0] = 1;
      emxEnsureCapacity_real_T(solmp, i);
      acoef = solmp->size[1] - 1;
      for (i = 0; i <= acoef; i++) {
        solmp->data[i] /= y->data[i];
      }
      /*  Now find vector version of */
      /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
       */
      /*  which correponds to equation of FGM2012 which defines the */
      /*  truncated eigenvalues */
      /*  The following gets rid of the repmat, which is slow */
      /*  Find solmp*(d<solmp). This is expression is called sdlts which */
      /*  stands for "sol (d less than sol)" */
      /*  d.*(d>=solmp) */
      /*  cs is c*solmp */
      i = d1->size[0] * d1->size[1];
      d1->size[0] = 1;
      d1->size[1] = solmp->size[1];
      emxEnsureCapacity_real_T(d1, i);
      acoef = solmp->size[1];
      for (i = 0; i < acoef; i++) {
        d1->data[i] = solmp->data[i] * c2;
      }
      /*  csr is a reshaped version of cs */
      /*  less efficient code to obtain csr */
      /*  csr = reshape(bsxfun(@times,ones(k*v,1),c*soll),k,v,dimsor); */
      /*  (d<=c*solmp) */
      /*  (d>c*solmp) */
      /*  Array e contains the modified eigenvalues given a particular m */
      /*  evaluted in correspondence of the dimsor points */
      /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
       */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = eigenvalues->size[0];
      dltm->size[1] = solmp->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      if ((eigenvalues->size[0] != 0) && (solmp->size[1] != 0)) {
        bcoef = (solmp->size[1] != 1);
        i = solmp->size[1] - 1;
        for (c_k = 0; c_k <= i; c_k++) {
          npages = bcoef * c_k;
          acoef = (eigenvalues->size[0] != 1);
          i1 = dltm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm->data[b_k + dltm->size[0] * c_k] =
                (b_eigenvalues->data[acoef * b_k] < solmp->data[npages]);
          }
        }
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = eigenvalues->size[0];
      dgtcm->size[1] = solmp->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      if ((eigenvalues->size[0] != 0) && (solmp->size[1] != 0)) {
        bcoef = (solmp->size[1] != 1);
        i = solmp->size[1] - 1;
        for (c_k = 0; c_k <= i; c_k++) {
          npages = bcoef * c_k;
          acoef = (eigenvalues->size[0] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm->data[b_k + dgtcm->size[0] * c_k] =
                (b_eigenvalues->data[acoef * b_k] >= solmp->data[npages]);
          }
        }
      }
      i = c->size[0] * c->size[1];
      c->size[0] = eigenvalues->size[0];
      c->size[1] = d1->size[1];
      emxEnsureCapacity_boolean_T(c, i);
      if ((eigenvalues->size[0] != 0) && (d1->size[1] != 0)) {
        bcoef = (d1->size[1] != 1);
        i = d1->size[1] - 1;
        for (c_k = 0; c_k <= i; c_k++) {
          npages = bcoef * c_k;
          acoef = (eigenvalues->size[0] != 1);
          i1 = c->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            c->data[b_k + c->size[0] * c_k] =
                (b_eigenvalues->data[acoef * b_k] <= d1->data[npages]);
          }
        }
      }
      i = b_c->size[0] * b_c->size[1];
      b_c->size[0] = eigenvalues->size[0];
      b_c->size[1] = d1->size[1];
      emxEnsureCapacity_boolean_T(b_c, i);
      if ((eigenvalues->size[0] != 0) && (d1->size[1] != 0)) {
        bcoef = (d1->size[1] != 1);
        i = d1->size[1] - 1;
        for (c_k = 0; c_k <= i; c_k++) {
          npages = bcoef * c_k;
          acoef = (eigenvalues->size[0] != 1);
          i1 = b_c->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            b_c->data[b_k + b_c->size[0] * c_k] =
                (b_eigenvalues->data[acoef * b_k] > d1->data[npages]);
          }
        }
      }
      acoef = eigenvalues->size[0];
      bcoef = eigenvalues->size[0];
      d_dltm = *dltm;
      c_c[0] = bcoef;
      c_c[1] = (int)dimsor;
      d_dltm.size = &c_c[0];
      d_dltm.numDimensions = 2;
      h_bsxfun(&d_dltm, solmp, r5);
      npages = eigenvalues->size[0];
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(ed, i);
      for (i = 0; i < acoef; i++) {
        ed->data[i] = eigenvalues->data[i + eigenvalues->size[0] * j];
      }
      d_dltm = *dgtcm;
      iv3[0] = 1;
      iv3[1] = npages;
      iv3[2] = (int)dimsor;
      d_dltm.size = &iv3[0];
      d_dltm.numDimensions = 3;
      k_bsxfun(&d_dltm, ed, r6);
      acoef = eigenvalues->size[0];
      i = b_dltm->size[0] * b_dltm->size[1];
      b_dltm->size[0] = eigenvalues->size[0];
      b_dltm->size[1] = d1->size[1];
      emxEnsureCapacity_real_T(b_dltm, i);
      bcoef = d1->size[1];
      for (i = 0; i < bcoef; i++) {
        for (i1 = 0; i1 < acoef; i1++) {
          b_dltm->data[i1 + b_dltm->size[0] * i] = d1->data[i];
        }
      }
      i = ee->size[0] * ee->size[1] * ee->size[2];
      ee->size[0] = 1;
      ee->size[1] = eigenvalues->size[0];
      ee->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(ee, i);
      acoef = eigenvalues->size[0] * (int)dimsor;
      for (i = 0; i < acoef; i++) {
        ee->data[i] = (r5->data[i] + r6->data[i] * (double)c->data[i]) +
                      b_dltm->data[i] * (double)b_c->data[i];
      }
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      i = b_x->size[0] * b_x->size[1] * b_x->size[2];
      b_x->size[0] = 1;
      b_x->size[1] = ee->size[1];
      b_x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(b_x, i);
      acoef = ee->size[1] * ee->size[2];
      for (i = 0; i < acoef; i++) {
        b_x->data[i] = ee->data[i];
      }
      npages = ee->size[1] * ee->size[2];
      for (c_k = 0; c_k < npages; c_k++) {
        b_x->data[c_k] = log(b_x->data[c_k]);
      }
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(ed, i);
      acoef = eigenvalues->size[0];
      for (i = 0; i < acoef; i++) {
        ed->data[i] = 1.0;
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      c_repmat(ed, b_dv, r6);
      acoef = eigenvalues->size[0];
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(ed, i);
      for (i = 0; i < acoef; i++) {
        ed->data[i] = eigenvalues->data[i + eigenvalues->size[0] * j];
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      c_repmat(ed, b_dv, r2);
      i = r3->size[0] * r3->size[1] * r3->size[2];
      r3->size[0] = 1;
      r3->size[1] = r6->size[1];
      r3->size[2] = r6->size[2];
      emxEnsureCapacity_real_T(r3, i);
      acoef = r6->size[1] * r6->size[2];
      for (i = 0; i < acoef; i++) {
        r3->data[i] = r6->data[i] * (b_x->data[i] + r2->data[i] / ee->data[i]);
      }
      f_sum(r3, r6);
      d_sum(r6, r4);
      f_minimum(r4, &maxdnis, &b_k);
      /*  m is the optimum value for the eigenvalues procedure */
      maxdnis = solmp->data[b_k - 1];
      /*  plot(1:dimsor,obj) */
      /*  Based on the m value we get the restricted eigenvalues */
      /*  The new eigenvalues are equal to */
      /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
      /*  m                   if old eigenvalues < m */
      /*  cm                  if old eigenvalues > c*m */
      /*  Old inefficient code */
      /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
      npages = eigenvalues->size[0] - 1;
      for (acoef = 0; acoef <= npages; acoef++) {
        if (b_eigenvalues->data[acoef] < maxdnis) {
          b_eigenvalues->data[acoef] = maxdnis;
        }
      }
      npages = b_eigenvalues->size[0] - 1;
      bcoef = 0;
      for (acoef = 0; acoef <= npages; acoef++) {
        if (b_eigenvalues->data[acoef] > c2 * maxdnis) {
          bcoef++;
        }
      }
      i = r1->size[0];
      r1->size[0] = bcoef;
      emxEnsureCapacity_int32_T(r1, i);
      bcoef = 0;
      for (acoef = 0; acoef <= npages; acoef++) {
        if (b_eigenvalues->data[acoef] > c2 * maxdnis) {
          r1->data[bcoef] = acoef + 1;
          bcoef++;
        }
      }
      acoef = r1->size[0];
      for (i = 0; i < acoef; i++) {
        b_eigenvalues->data[r1->data[i] - 1] = c2 * solmp->data[b_k - 1];
      }
    } else {
      /*  if all the eigenvalues are 0 this means all points are concentrated */
      /*  in k groups and there is a perfect fit */
      /*  no further changes on the eigenvalues required, so return them */
      /*  immediately and stop the procedure! */
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
    }
    acoef = b_eigenvalues->size[0];
    for (i = 0; i < acoef; i++) {
      eigenvalues->data[i + eigenvalues->size[0] * j] = b_eigenvalues->data[i];
    }
  }
  emxFree_real_T(&r6);
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_real_T(&r2);
  emxFree_real_T(&b_x);
  emxFree_boolean_T(&b_c);
  emxFree_boolean_T(&c);
  emxFree_real_T(&x);
  emxFree_int32_T(&r1);
  emxFree_real_T(&ee);
  emxFree_real_T(&solmp);
  emxFree_boolean_T(&dgtcm);
  emxFree_boolean_T(&dltm);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&b_eigenvalues);
  /*  product of the elements of all columns */
  prod(eigenvalues, d1);
  npages = d1->size[1];
  for (acoef = 0; acoef < npages; acoef++) {
    if (d1->data[acoef] == 0.0) {
      d1->data[acoef] = 1.0;
    }
  }
  maxdnis = 1.0 / (double)v;
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = d1->size[1];
  emxEnsureCapacity_real_T(y, i);
  npages = d1->size[1];
  for (k = 0; k < npages; k++) {
    y->data[k] = rt_powd_snf(d1->data[k], maxdnis);
  }
  emxInit_real_T(&gm, 2);
  d_bsxfun(eigenvalues, y, gm);
  i = b_dltm->size[0] * b_dltm->size[1];
  b_dltm->size[0] = eigenvalues->size[0];
  b_dltm->size[1] = eigenvalues->size[1];
  emxEnsureCapacity_real_T(b_dltm, i);
  acoef = eigenvalues->size[0] * eigenvalues->size[1];
  emxFree_real_T(&y);
  for (i = 0; i < acoef; i++) {
    b_dltm->data[i] = eigenvalues->data[i] / gm->data[i];
  }
  combineVectorElements(b_dltm, d1);
  i = d1->size[0] * d1->size[1];
  d1->size[0] = 1;
  emxEnsureCapacity_real_T(d1, i);
  acoef = d1->size[1] - 1;
  emxFree_real_T(&b_dltm);
  for (i = 0; i <= acoef; i++) {
    d1->data[i] /= (double)v;
  }
  emxInit_boolean_T(&r7, 2);
  i = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = d1->size[1];
  emxEnsureCapacity_boolean_T(r7, i);
  acoef = d1->size[1];
  for (i = 0; i < acoef; i++) {
    r7->data[i] = rtIsNaN(d1->data[i]);
  }
  npages = r7->size[1] - 1;
  bcoef = 0;
  for (acoef = 0; acoef <= npages; acoef++) {
    if (r7->data[acoef]) {
      bcoef++;
    }
  }
  emxInit_int32_T(&r8, 2);
  i = r8->size[0] * r8->size[1];
  r8->size[0] = 1;
  r8->size[1] = bcoef;
  emxEnsureCapacity_int32_T(r8, i);
  bcoef = 0;
  for (acoef = 0; acoef <= npages; acoef++) {
    if (r7->data[acoef]) {
      r8->data[bcoef] = acoef + 1;
      bcoef++;
    }
  }
  emxFree_boolean_T(&r7);
  acoef = r8->size[1] - 1;
  for (i = 0; i <= acoef; i++) {
    d1->data[r8->data[i] - 1] = 0.0;
  }
  emxFree_int32_T(&r8);
  if (floor(maxdnis) == maxdnis) {
    if (maxdnis <= 2.147483647E+9) {
      b_restr_size[0] = restr_size[0];
      b_restr_size[1] = restr_size[1];
      acoef = restr_size[0] * restr_size[1] - 1;
      if (0 <= acoef) {
        memcpy(&b_restr_data[0], &restr_data[0], (acoef + 1) * sizeof(double));
      }
      matrix_to_small_integer_power(b_restr_data, b_restr_size, maxdnis, c_data,
                                    c_size);
    } else {
      c_size[0] = (signed char)restr_size[0];
      c_size[1] = (signed char)restr_size[1];
      if (!rtIsInf(maxdnis)) {
        firstmult = true;
        do {
          exitg1 = 0;
          c2 = floor(maxdnis / 2.0);
          if (2.0 * c2 != maxdnis) {
            if (firstmult) {
              bcoef = c_size[0];
              npages = c_size[1];
              c_size[0] = bcoef;
              c_size[1] = npages;
              npages *= bcoef;
              if (0 <= npages - 1) {
                memcpy(&c_data[0], &restr_data[0], npages * sizeof(double));
              }
              firstmult = false;
            } else {
              b_c_data.data = &c_data[0];
              b_c_data.size = &c_size[0];
              b_c_data.allocatedSize = 2;
              b_c_data.numDimensions = 2;
              b_c_data.canFreeData = false;
              d_restr_data.data = &restr_data[0];
              d_restr_data.size = &restr_size[0];
              d_restr_data.allocatedSize = -1;
              d_restr_data.numDimensions = 2;
              d_restr_data.canFreeData = false;
              b_mtimes(&b_c_data, &d_restr_data, r5);
              c_size[0] = r5->size[0];
              c_size[1] = r5->size[1];
              acoef = r5->size[0] * r5->size[1];
              for (i = 0; i < acoef; i++) {
                c_data[i] = r5->data[i];
              }
            }
          }
          if (c2 == 0.0) {
            exitg1 = 1;
          } else {
            maxdnis = c2;
            c_restr_data.data = &restr_data[0];
            c_restr_data.size = &restr_size[0];
            c_restr_data.allocatedSize = -1;
            c_restr_data.numDimensions = 2;
            c_restr_data.canFreeData = false;
            e_restr_data.data = &restr_data[0];
            e_restr_data.size = &restr_size[0];
            e_restr_data.allocatedSize = -1;
            e_restr_data.numDimensions = 2;
            e_restr_data.canFreeData = false;
            b_mtimes(&c_restr_data, &e_restr_data, r5);
            restr_size[0] = r5->size[0];
            restr_size[1] = r5->size[1];
            acoef = r5->size[0] * r5->size[1];
            for (i = 0; i < acoef; i++) {
              restr_data[i] = r5->data[i];
            }
          }
        } while (exitg1 == 0);
      } else {
        c_size[0] = (signed char)restr_size[0];
        c_size[1] = (signed char)restr_size[1];
        acoef = (signed char)restr_size[0] * (signed char)restr_size[1];
        for (i = 0; i < acoef; i++) {
          c_data[i] = rtNaN;
        }
      }
    }
  }
  emxFree_real_T(&r5);
  b_restr_size[0] = c_size[0];
  b_restr_size[1] = c_size[1];
  b_restreigen(d1, niini, c_data, b_restr_size);
  npages = gm->size[0] * gm->size[1] - 1;
  bcoef = 0;
  for (acoef = 0; acoef <= npages; acoef++) {
    if (gm->data[acoef] == 0.0) {
      bcoef++;
    }
  }
  emxInit_int32_T(&r9, 1);
  i = r9->size[0];
  r9->size[0] = bcoef;
  emxEnsureCapacity_int32_T(r9, i);
  bcoef = 0;
  for (acoef = 0; acoef <= npages; acoef++) {
    if (gm->data[acoef] == 0.0) {
      r9->data[bcoef] = acoef + 1;
      bcoef++;
    }
  }
  acoef = r9->size[0] - 1;
  for (i = 0; i <= acoef; i++) {
    gm->data[r9->data[i] - 1] = 1.0;
  }
  emxFree_int32_T(&r9);
  i = out->size[0] * out->size[1];
  out->size[0] = v;
  out->size[1] = d1->size[1];
  emxEnsureCapacity_real_T(out, i);
  npages = d1->size[1];
  for (acoef = 0; acoef < npages; acoef++) {
    bcoef = acoef * v;
    for (b_k = 0; b_k < v; b_k++) {
      out->data[bcoef + b_k] = d1->data[acoef];
    }
  }
  emxFree_real_T(&d1);
  acoef = out->size[0] * out->size[1];
  for (i = 0; i < acoef; i++) {
    out->data[i] *= gm->data[i];
  }
  emxFree_real_T(&gm);
}

/* End of code generation (restrdeter.c) */
