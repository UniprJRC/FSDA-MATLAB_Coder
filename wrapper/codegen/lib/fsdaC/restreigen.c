/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restreigen.c
 *
 * Code generation for function 'restreigen'
 *
 */

/* Include files */
#include "restreigen.h"
#include "blockedSummation.h"
#include "bsxfun.h"
#include "combineVectorElements.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "minOrMax.h"
#include "mrdivide_helper.h"
#include "permute.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                  const double restr_data[], const int restr_size[2])
{
  emxArray_boolean_T c_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_int32_T *r1;
  emxArray_real_T b_eigenvalues;
  emxArray_real_T b_restr_data;
  emxArray_real_T b_tmp_data;
  emxArray_real_T b_x_data;
  emxArray_real_T *C;
  emxArray_real_T *Y_tmp;
  emxArray_real_T *b_dltm;
  emxArray_real_T *b_x;
  emxArray_real_T *b_y;
  emxArray_real_T *c_x;
  emxArray_real_T *c_y;
  emxArray_real_T *d;
  emxArray_real_T *d1;
  emxArray_real_T *d_x;
  emxArray_real_T *dnis;
  emxArray_real_T *dsor;
  emxArray_real_T *ed;
  emxArray_real_T *nininmat;
  emxArray_real_T *nis;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *x;
  emxArray_real_T *z;
  double b_dv[3];
  double dimsor;
  double maxdnis;
  double n;
  double solmp_data;
  double tmp_data;
  double x_data;
  int e_eigenvalues[3];
  int f_eigenvalues[3];
  int g_eigenvalues[3];
  int h_eigenvalues[3];
  int tmp_size[3];
  int sizes[2];
  int x_size[2];
  int b_Y_tmp;
  int b_sizes_idx_1;
  int c_eigenvalues;
  int d_eigenvalues;
  int i;
  int input_sizes_idx_0;
  int k;
  int nrows;
  int sizes_idx_1;
  unsigned int unnamed_idx_1;
  bool exitg1;
  bool y;
  emxInit_real_T(&d, 1);
  /* restreigen computes eigenvalues restriction (without Dykstra algorithm) */
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
  /*              v is the number of variables of the dataset which has to be */
  /*              clustered. */
  /*      niini: Cluster size. Vector. k x 1 vector containing the size of the k
   * clusters */
  /*      restr: Restriction factor. Scalar. Scalar containing the restr
   * parameter in tclust program. */
  /*             More in detail, parameter restr defines the cluster's shape */
  /*             restrictions, which are applied on all clusters during each */
  /*             iteration. */
  /*             Setting restr to 1, yields the strongest restriction, */
  /*             forcing all eigenvalues/determinants to be equal and so the */
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
  /*              If userepmat is equal to 1, function repmat is used instead */
  /*              of bsxfun inside the procedure. Remark: repmat is built in */
  /*              from MATLAB 2013b so it is faster to use repmat if the */
  /*              current version of MATLAB is >2013a. */
  /*              If userepmat is 2, implicit expansion is used instead of */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues. */
  /*                        The ratio between two possible elements in matrix */
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
  /*     % We compare the speed of restreigneasy with that of restreigen. We use
   */
  /*     % userepmat=2 if the current MATLAB version if >=R2017a or userepmat =1
   */
  /*     % if MATLAB version is >=R2013a but <R2017a else we use userepmat =0 */
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
  /*     disp(['Computing time of restreigeneasy: ' num2str(oldroutinetime)]) */
  /*     disp(['Computing time of restreigen: ' num2str(newroutinetime)]) */
  /* } */
  /*  Beginning of code */
  /*  userepmat specifies if it is necessary to use function repmat or bsxfun */
  /*  Remark: repmat has become built in from Release 2013b so it is faster to
   */
  /*  use it */
  /*  Initializations */
  i = d->size[0];
  d->size[0] = eigenvalues->size[1];
  emxEnsureCapacity_real_T(d, i);
  sizes_idx_1 = eigenvalues->size[1];
  for (i = 0; i < sizes_idx_1; i++) {
    d->data[i] = eigenvalues->data[i];
  }
  emxInit_real_T(&nis, 1);
  /*  Get number of variables (v) and number of clusters (k) */
  /*  Get number of units of the dataset */
  n = blockedSummation(niini, niini->size[0]);
  /*  We assume that niini is a column vector */
  /*  nis is a matrix which replicates in the columns the sizes of the goups */
  /*  First row of nis = size of first group repated v times */
  /*  Second row of nis = size of second group repated v times */
  /*  .... */
  /*  kth row of nis = size of kth group repated v times */
  i = nis->size[0];
  nis->size[0] = niini->size[0];
  emxEnsureCapacity_real_T(nis, i);
  nrows = niini->size[0];
  for (k = 0; k < nrows; k++) {
    nis->data[k] = niini->data[k];
  }
  emxInit_real_T(&Y_tmp, 2);
  /*  Below is the alternative inefficient code */
  /*  nis = repmat(niini,1,v); */
  /*  niini=niini'; */
  /*  dsor is 2*k*v the ordered set of values in which the restriction objective
   */
  /*  function change the definition The elements in dsor correspond to  the */
  /*  frontiers for the intervals in which this objective function has the same
   */
  /*  definition */
  /*  In other words */
  /*  dsor=(d_{11}, ........, d_{kv},d_{11}/restr, ........, d_{kv}/restr) */
  /*  OLD was */
  /*  dsor=sort([eigenvalues(:);eigenvalues(:)/c])'; */
  nrows = eigenvalues->size[1];
  b_eigenvalues = *eigenvalues;
  c_eigenvalues = nrows;
  b_eigenvalues.size = &c_eigenvalues;
  b_eigenvalues.numDimensions = 1;
  b_mrdiv(&b_eigenvalues, restr_data, restr_size, Y_tmp);
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    nrows = Y_tmp->size[1];
  } else if (eigenvalues->size[1] != 0) {
    nrows = 1;
  } else {
    nrows = 1;
  }
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    b_sizes_idx_1 = Y_tmp->size[1];
  } else if (eigenvalues->size[1] != 0) {
    b_sizes_idx_1 = 1;
  } else {
    b_sizes_idx_1 = 1;
  }
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    sizes_idx_1 = Y_tmp->size[1];
  } else if (eigenvalues->size[1] != 0) {
    sizes_idx_1 = 1;
  } else {
    sizes_idx_1 = 1;
  }
  emxInit_real_T(&r, 2);
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    input_sizes_idx_0 = Y_tmp->size[0];
  } else {
    input_sizes_idx_0 = 0;
  }
  if (eigenvalues->size[1] != 0) {
    k = eigenvalues->size[1];
  } else {
    k = 0;
  }
  i = r->size[0] * r->size[1];
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    b_Y_tmp = Y_tmp->size[0];
  } else {
    b_Y_tmp = 0;
  }
  if (eigenvalues->size[1] != 0) {
    d_eigenvalues = eigenvalues->size[1];
  } else {
    d_eigenvalues = 0;
  }
  r->size[0] = b_Y_tmp + d_eigenvalues;
  r->size[1] = sizes_idx_1;
  emxEnsureCapacity_real_T(r, i);
  for (i = 0; i < sizes_idx_1; i++) {
    for (b_Y_tmp = 0; b_Y_tmp < input_sizes_idx_0; b_Y_tmp++) {
      r->data[b_Y_tmp + r->size[0] * i] =
          Y_tmp->data[b_Y_tmp + input_sizes_idx_0 * i];
    }
  }
  for (i = 0; i < sizes_idx_1; i++) {
    for (b_Y_tmp = 0; b_Y_tmp < k; b_Y_tmp++) {
      r->data[(b_Y_tmp + input_sizes_idx_0) + r->size[0] * i] =
          eigenvalues->data[b_Y_tmp + k * i];
    }
  }
  emxInit_real_T(&nininmat, 2);
  e_sort(r);
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    input_sizes_idx_0 = Y_tmp->size[0];
  } else {
    input_sizes_idx_0 = 0;
  }
  if (eigenvalues->size[1] != 0) {
    k = eigenvalues->size[1];
  } else {
    k = 0;
  }
  i = nininmat->size[0] * nininmat->size[1];
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    b_Y_tmp = Y_tmp->size[0];
  } else {
    b_Y_tmp = 0;
  }
  if (eigenvalues->size[1] != 0) {
    d_eigenvalues = eigenvalues->size[1];
  } else {
    d_eigenvalues = 0;
  }
  nininmat->size[0] = b_Y_tmp + d_eigenvalues;
  nininmat->size[1] = nrows;
  emxEnsureCapacity_real_T(nininmat, i);
  for (i = 0; i < nrows; i++) {
    for (b_Y_tmp = 0; b_Y_tmp < input_sizes_idx_0; b_Y_tmp++) {
      nininmat->data[b_Y_tmp + nininmat->size[0] * i] =
          Y_tmp->data[b_Y_tmp + input_sizes_idx_0 * i];
    }
  }
  for (i = 0; i < nrows; i++) {
    for (b_Y_tmp = 0; b_Y_tmp < k; b_Y_tmp++) {
      nininmat->data[(b_Y_tmp + input_sizes_idx_0) + nininmat->size[0] * i] =
          eigenvalues->data[b_Y_tmp + k * i];
    }
  }
  emxInit_real_T(&x, 2);
  e_sort(nininmat);
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    input_sizes_idx_0 = Y_tmp->size[0];
  } else {
    input_sizes_idx_0 = 0;
  }
  if (eigenvalues->size[1] != 0) {
    k = eigenvalues->size[1];
  } else {
    k = 0;
  }
  i = x->size[0] * x->size[1];
  if ((Y_tmp->size[0] != 0) && (Y_tmp->size[1] != 0)) {
    b_Y_tmp = Y_tmp->size[0];
  } else {
    b_Y_tmp = 0;
  }
  if (eigenvalues->size[1] != 0) {
    d_eigenvalues = eigenvalues->size[1];
  } else {
    d_eigenvalues = 0;
  }
  x->size[0] = b_Y_tmp + d_eigenvalues;
  x->size[1] = b_sizes_idx_1;
  emxEnsureCapacity_real_T(x, i);
  for (i = 0; i < b_sizes_idx_1; i++) {
    for (b_Y_tmp = 0; b_Y_tmp < input_sizes_idx_0; b_Y_tmp++) {
      x->data[b_Y_tmp + x->size[0] * i] =
          Y_tmp->data[b_Y_tmp + input_sizes_idx_0 * i];
    }
  }
  emxFree_real_T(&Y_tmp);
  for (i = 0; i < b_sizes_idx_1; i++) {
    for (b_Y_tmp = 0; b_Y_tmp < k; b_Y_tmp++) {
      x->data[(b_Y_tmp + input_sizes_idx_0) + x->size[0] * i] =
          eigenvalues->data[b_Y_tmp + k * i];
    }
  }
  emxInit_real_T(&b_x, 2);
  e_sort(x);
  i = b_x->size[0] * b_x->size[1];
  b_x->size[0] = r->size[1];
  b_x->size[1] = r->size[0];
  emxEnsureCapacity_real_T(b_x, i);
  sizes_idx_1 = r->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    nrows = r->size[1];
    for (b_Y_tmp = 0; b_Y_tmp < nrows; b_Y_tmp++) {
      b_x->data[b_Y_tmp + b_x->size[0] * i] = r->data[i + r->size[0] * b_Y_tmp];
    }
  }
  emxInit_real_T(&dsor, 2);
  i = dsor->size[0] * dsor->size[1];
  dsor->size[0] = nininmat->size[1];
  dsor->size[1] = x->size[0];
  emxEnsureCapacity_real_T(dsor, i);
  sizes_idx_1 = x->size[0] * nininmat->size[1];
  for (i = 0; i < sizes_idx_1; i++) {
    dsor->data[i] = b_x->data[i];
  }
  emxInit_real_T(&d1, 2);
  /*  dimsor=length(dsor); */
  dimsor = (double)eigenvalues->size[1] * 2.0;
  /*  d1 is like dsor but contains an additional element which is larger than
   * the largest element of dsor */
  i = d1->size[0] * d1->size[1];
  d1->size[0] = dsor->size[0];
  d1->size[1] = dsor->size[1];
  emxEnsureCapacity_real_T(d1, i);
  sizes_idx_1 = dsor->size[0] * dsor->size[1];
  for (i = 0; i < sizes_idx_1; i++) {
    d1->data[i] = dsor->data[i];
  }
  emxInit_real_T(&ed, 2);
  d1->data[(int)(dimsor + 1.0) - 1] = dsor->data[(int)dimsor - 1] * 2.0;
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
  if ((dsor->size[0] != 0) && (dsor->size[1] != 0)) {
    nrows = dsor->size[1];
  } else {
    nrows = 0;
  }
  /*  ed is a set with the middle points of these intervals */
  i = ed->size[0] * ed->size[1];
  ed->size[0] = 1;
  ed->size[1] = nrows + 1;
  emxEnsureCapacity_real_T(ed, i);
  ed->data[0] = d1->data[0] / 2.0;
  for (i = 0; i < nrows; i++) {
    ed->data[i + 1] = (d1->data[d1->size[0] * (i + 1)] + dsor->data[i]) / 2.0;
  }
  emxFree_real_T(&d1);
  emxFree_real_T(&dsor);
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  b_sizes_idx_1 = nis->size[0] - 1;
  nrows = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= b_sizes_idx_1; sizes_idx_1++) {
    if (nis->data[sizes_idx_1] > 0.0) {
      nrows++;
    }
  }
  emxInit_real_T(&dnis, 1);
  i = dnis->size[0];
  dnis->size[0] = nrows;
  emxEnsureCapacity_real_T(dnis, i);
  nrows = 0;
  for (sizes_idx_1 = 0; sizes_idx_1 <= b_sizes_idx_1; sizes_idx_1++) {
    if (nis->data[sizes_idx_1] > 0.0) {
      dnis->data[nrows] = d->data[sizes_idx_1];
      nrows++;
    }
  }
  maxdnis = b_maximum(dnis);
  if (!(maxdnis <= 1.0E-8)) {
    emxInit_boolean_T(&dltm, 2);
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    maxdnis = fabs(maxdnis / c_minimum(dnis));
    i = dltm->size[0] * dltm->size[1];
    dltm->size[0] = restr_size[0];
    dltm->size[1] = restr_size[1];
    emxEnsureCapacity_boolean_T(dltm, i);
    sizes_idx_1 = restr_size[0] * restr_size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      dltm->data[i] = (maxdnis <= restr_data[i]);
    }
    y = ((dltm->size[0] != 0) && (dltm->size[1] != 0));
    if (y) {
      i = dltm->size[0] * dltm->size[1];
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= i - 1)) {
        if (!dltm->data[k]) {
          y = false;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (y) {
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      if (c_minimum(nis) == 0.0) {
        b_sizes_idx_1 = nis->size[0] - 1;
        nrows = 0;
        for (sizes_idx_1 = 0; sizes_idx_1 <= b_sizes_idx_1; sizes_idx_1++) {
          if (nis->data[sizes_idx_1] == 0.0) {
            nrows++;
          }
        }
        emxInit_int32_T(&r1, 1);
        i = r1->size[0];
        r1->size[0] = nrows;
        emxEnsureCapacity_int32_T(r1, i);
        nrows = 0;
        for (sizes_idx_1 = 0; sizes_idx_1 <= b_sizes_idx_1; sizes_idx_1++) {
          if (nis->data[sizes_idx_1] == 0.0) {
            r1->data[nrows] = sizes_idx_1 + 1;
            nrows++;
          }
        }
        maxdnis = blockedSummation(dnis, dnis->size[0]) / (double)dnis->size[0];
        sizes_idx_1 = r1->size[0];
        for (i = 0; i < sizes_idx_1; i++) {
          d->data[r1->data[i] - 1] = maxdnis;
        }
        emxFree_int32_T(&r1);
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = 1;
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      sizes_idx_1 = d->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        eigenvalues->data[i] = d->data[i];
      }
    } else {
      /*  REMARK: the following exploits matrix operations for avoiding */
      /*  loops. Given that the code below is difficult to interpret we */
      /*  refer to routine restreigeneasy for a better comprehension */
      /*  of the underlying algorithm */
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = d->size[0];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      if (d->size[0] != 0) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          b_sizes_idx_1 = nrows * k;
          sizes_idx_1 = (d->size[0] != 1);
          b_Y_tmp = dltm->size[0] - 1;
          for (input_sizes_idx_0 = 0; input_sizes_idx_0 <= b_Y_tmp;
               input_sizes_idx_0++) {
            dltm->data[input_sizes_idx_0 + dltm->size[0] * k] =
                (d->data[sizes_idx_1 * input_sizes_idx_0] <
                 ed->data[b_sizes_idx_1]);
          }
        }
      }
      emxInit_real_T(&C, 2);
      nrows = ed->size[1];
      b_sizes_idx_1 = restr_size[1];
      i = C->size[0] * C->size[1];
      C->size[0] = 1;
      C->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(C, i);
      for (sizes_idx_1 = 0; sizes_idx_1 < b_sizes_idx_1; sizes_idx_1++) {
        C->data[0] = 0.0;
        for (k = 0; k < nrows; k++) {
          C->data[0] += ed->data[k] * restr_data[k];
        }
      }
      emxInit_boolean_T(&dgtcm, 2);
      emxInit_boolean_T(&c, 2);
      f_bsxfun(d, C, c);
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = c->size[0];
      dgtcm->size[1] = c->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      sizes_idx_1 = c->size[0] * c->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        dgtcm->data[i] = c->data[i];
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
      i = dnis->size[0];
      dnis->size[0] = niini->size[0];
      emxEnsureCapacity_real_T(dnis, i);
      sizes_idx_1 = niini->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        dnis->data[i] = niini->data[i] / n;
      }
      i = nininmat->size[0] * nininmat->size[1];
      nininmat->size[0] = dnis->size[0];
      sizes_idx_1 = (int)dimsor;
      nininmat->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(nininmat, i);
      nrows = dnis->size[0];
      for (input_sizes_idx_0 = 0; input_sizes_idx_0 < sizes_idx_1;
           input_sizes_idx_0++) {
        b_sizes_idx_1 = input_sizes_idx_0 * nrows;
        for (k = 0; k < nrows; k++) {
          nininmat->data[b_sizes_idx_1 + k] = dnis->data[k];
        }
      }
      emxInit_real_T(&z, 2);
      b_sizes_idx_1 = eigenvalues->size[1];
      g_bsxfun(dltm, d, r);
      b_eigenvalues = *r;
      e_eigenvalues[0] = b_sizes_idx_1;
      e_eigenvalues[1] = 1;
      e_eigenvalues[2] = (int)dimsor;
      b_eigenvalues.size = &e_eigenvalues[0];
      b_eigenvalues.numDimensions = 3;
      c_permute(&b_eigenvalues, x);
      if (x->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)x->size[1];
        x->size[0] = 0;
        x->size[1] = (int)unnamed_idx_1;
      }
      b_sizes_idx_1 = eigenvalues->size[1];
      g_bsxfun(dgtcm, d, r);
      b_eigenvalues = *r;
      f_eigenvalues[0] = b_sizes_idx_1;
      f_eigenvalues[1] = 1;
      f_eigenvalues[2] = (int)dimsor;
      b_eigenvalues.size = &f_eigenvalues[0];
      b_eigenvalues.numDimensions = 3;
      c_permute(&b_eigenvalues, b_x);
      if (b_x->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)b_x->size[1];
        b_x->size[0] = 0;
        b_x->size[1] = (int)unnamed_idx_1;
      }
      b_restr_data.data = (double *)&restr_data[0];
      b_restr_data.size = (int *)&restr_size[0];
      b_restr_data.allocatedSize = -1;
      b_restr_data.numDimensions = 2;
      b_restr_data.canFreeData = false;
      mrdiv(b_x, &b_restr_data, r);
      x_size[0] = x->size[0];
      x_size[1] = x->size[1];
      sizes_idx_1 = x->size[0] * x->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        x_data = (x->data[i] + r->data[i]) * nininmat->data[i];
      }
      emxInit_real_T(&b_dltm, 2);
      b_x_data.data = &x_data;
      b_x_data.size = &x_size[0];
      b_x_data.allocatedSize = 1;
      b_x_data.numDimensions = 2;
      b_x_data.canFreeData = false;
      combineVectorElements(&b_x_data, ed);
      i = b_dltm->size[0] * b_dltm->size[1];
      b_dltm->size[0] = dltm->size[0];
      b_dltm->size[1] = dltm->size[1];
      emxEnsureCapacity_real_T(b_dltm, i);
      sizes_idx_1 = dltm->size[0] * dltm->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        b_dltm->data[i] = (double)dltm->data[i] + (double)dgtcm->data[i];
      }
      emxFree_boolean_T(&dgtcm);
      b_sizes_idx_1 = eigenvalues->size[1];
      b_eigenvalues = *b_dltm;
      g_eigenvalues[0] = b_sizes_idx_1;
      g_eigenvalues[1] = 1;
      g_eigenvalues[2] = (int)dimsor;
      b_eigenvalues.size = &g_eigenvalues[0];
      b_eigenvalues.numDimensions = 3;
      c_permute(&b_eigenvalues, x);
      emxFree_real_T(&b_dltm);
      if (x->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)x->size[1];
        x->size[0] = 0;
        x->size[1] = (int)unnamed_idx_1;
      }
      i = b_x->size[0] * b_x->size[1];
      b_x->size[0] = x->size[0];
      b_x->size[1] = x->size[1];
      emxEnsureCapacity_real_T(b_x, i);
      sizes_idx_1 = x->size[0] * x->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        b_x->data[i] = x->data[i] * nininmat->data[i];
      }
      emxInit_real_T(&b_y, 2);
      combineVectorElements(b_x, b_y);
      i = z->size[0] * z->size[1];
      z->size[0] = 1;
      z->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(z, i);
      sizes_idx_1 = ed->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        z->data[i] = ed->data[i] / b_y->data[i];
      }
      nrows = ed->size[1];
      sizes_idx_1 = ed->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        solmp_data = ed->data[i] / b_y->data[i];
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
      b_sizes_idx_1 = restr_size[1];
      i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(b_y, i);
      for (sizes_idx_1 = 0; sizes_idx_1 < b_sizes_idx_1; sizes_idx_1++) {
        b_y->data[0] = 0.0;
        for (k = 0; k < nrows; k++) {
          b_y->data[0] += solmp_data * restr_data[0];
        }
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
      dltm->size[0] = d->size[0];
      dltm->size[1] = z->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      if ((d->size[0] != 0) && (z->size[1] != 0)) {
        nrows = (z->size[1] != 1);
        i = z->size[1] - 1;
        for (k = 0; k <= i; k++) {
          b_sizes_idx_1 = nrows * k;
          sizes_idx_1 = (d->size[0] != 1);
          b_Y_tmp = dltm->size[0] - 1;
          for (input_sizes_idx_0 = 0; input_sizes_idx_0 <= b_Y_tmp;
               input_sizes_idx_0++) {
            dltm->data[input_sizes_idx_0 + dltm->size[0] * k] =
                (d->data[sizes_idx_1 * input_sizes_idx_0] <
                 z->data[b_sizes_idx_1]);
          }
        }
      }
      i = c->size[0] * c->size[1];
      c->size[0] = d->size[0];
      c->size[1] = z->size[1];
      emxEnsureCapacity_boolean_T(c, i);
      if ((d->size[0] != 0) && (z->size[1] != 0)) {
        nrows = (z->size[1] != 1);
        i = z->size[1] - 1;
        for (k = 0; k <= i; k++) {
          b_sizes_idx_1 = nrows * k;
          sizes_idx_1 = (d->size[0] != 1);
          b_Y_tmp = c->size[0] - 1;
          for (input_sizes_idx_0 = 0; input_sizes_idx_0 <= b_Y_tmp;
               input_sizes_idx_0++) {
            c->data[input_sizes_idx_0 + c->size[0] * k] =
                (d->data[sizes_idx_1 * input_sizes_idx_0] >=
                 z->data[b_sizes_idx_1]);
          }
        }
      }
      emxInit_boolean_T(&b_c, 2);
      i = b_c->size[0] * b_c->size[1];
      b_c->size[0] = d->size[0];
      b_c->size[1] = restr_size[1];
      emxEnsureCapacity_boolean_T(b_c, i);
      if ((d->size[0] != 0) && (restr_size[1] != 0)) {
        sizes_idx_1 = (d->size[0] != 1);
        i = d->size[0] - 1;
        for (k = 0; k <= i; k++) {
          b_c->data[k] = (d->data[sizes_idx_1 * k] <= b_y->data[0]);
        }
      }
      nrows = z->size[1];
      b_sizes_idx_1 = restr_size[1];
      i = C->size[0] * C->size[1];
      C->size[0] = 1;
      C->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(C, i);
      for (sizes_idx_1 = 0; sizes_idx_1 < b_sizes_idx_1; sizes_idx_1++) {
        C->data[0] = 0.0;
        for (k = 0; k < nrows; k++) {
          C->data[0] += z->data[k] * restr_data[k];
        }
      }
      emxInit_real_T(&r2, 3);
      k = eigenvalues->size[1];
      c_dltm = *dltm;
      sizes[0] = k;
      sizes[1] = (int)dimsor;
      c_dltm.size = &sizes[0];
      c_dltm.numDimensions = 2;
      h_bsxfun(&c_dltm, z, r);
      b_sizes_idx_1 = eigenvalues->size[1];
      c_dltm = *c;
      h_eigenvalues[0] = b_sizes_idx_1;
      h_eigenvalues[1] = 1;
      h_eigenvalues[2] = (int)dimsor;
      c_dltm.size = &h_eigenvalues[0];
      c_dltm.numDimensions = 3;
      l_bsxfun(&c_dltm, d, r2);
      f_bsxfun(d, b_y, c);
      b_sizes_idx_1 = eigenvalues->size[1];
      nrows = eigenvalues->size[1];
      i = b_x->size[0] * b_x->size[1];
      b_x->size[0] = nrows;
      b_x->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(b_x, i);
      sizes_idx_1 = restr_size[1];
      emxFree_real_T(&b_y);
      for (i = 0; i < sizes_idx_1; i++) {
        for (b_Y_tmp = 0; b_Y_tmp < nrows; b_Y_tmp++) {
          b_x->data[b_Y_tmp] = C->data[0];
        }
      }
      emxFree_real_T(&C);
      nrows = b_sizes_idx_1 * (int)dimsor;
      for (i = 0; i < nrows; i++) {
        maxdnis = (r->data[i] + r2->data[i] * (double)b_c->data[i]) +
                  b_x->data[i] * (double)c->data[i];
      }
      emxFree_boolean_T(&b_c);
      emxFree_boolean_T(&c);
      emxInit_real_T(&c_x, 3);
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      i = c_x->size[0] * c_x->size[1] * c_x->size[2];
      c_x->size[0] = b_sizes_idx_1;
      c_x->size[1] = 1;
      c_x->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(c_x, i);
      nrows = b_sizes_idx_1 * (int)dimsor;
      for (i = 0; i < nrows; i++) {
        c_x->data[0] = maxdnis;
      }
      for (k = 0; k < nrows; k++) {
        c_x->data[0] = log(c_x->data[0]);
      }
      emxInit_real_T(&c_y, 3);
      sizes_idx_1 = nis->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        nis->data[i] /= n;
      }
      emxInit_real_T(&r3, 3);
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      d_repmat(nis, b_dv, r2);
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      d_repmat(d, b_dv, r3);
      tmp_size[0] = r2->size[0];
      tmp_size[1] = 1;
      tmp_size[2] = r2->size[2];
      sizes_idx_1 = r2->size[0] * r2->size[2];
      for (i = 0; i < sizes_idx_1; i++) {
        tmp_data = r2->data[i] * (c_x->data[i] + r3->data[i] / maxdnis);
      }
      emxFree_real_T(&r3);
      emxFree_real_T(&r2);
      emxFree_real_T(&c_x);
      emxInit_real_T(&d_x, 3);
      b_tmp_data.data = &tmp_data;
      b_tmp_data.size = &tmp_size[0];
      b_tmp_data.allocatedSize = 1;
      b_tmp_data.numDimensions = 3;
      b_tmp_data.canFreeData = false;
      g_sum(&b_tmp_data, d_x);
      nrows = 1;
      k = 3;
      if (d_x->size[2] == 1) {
        k = 2;
      }
      for (input_sizes_idx_0 = 3; input_sizes_idx_0 <= k; input_sizes_idx_0++) {
        nrows *= d_x->size[2];
      }
      i = c_y->size[0] * c_y->size[1] * c_y->size[2];
      c_y->size[0] = 1;
      c_y->size[1] = 1;
      c_y->size[2] = d_x->size[2];
      emxEnsureCapacity_real_T(c_y, i);
      for (b_sizes_idx_1 = 0; b_sizes_idx_1 < nrows; b_sizes_idx_1++) {
        c_y->data[b_sizes_idx_1] = d_x->data[b_sizes_idx_1];
      }
      emxFree_real_T(&d_x);
      f_minimum(c_y, &maxdnis, &nrows);
      /*  m is the optimum value for the eigenvalues procedure */
      maxdnis = z->data[nrows - 1];
      /*  plot(1:dimsor,obj) */
      /*  Based on the m value we get the restricted eigenvalues */
      /*  The new eigenvalues are equal to */
      /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
      /*  m                   if old eigenvalues < m */
      /*  cm                  if old eigenvalues > c*m */
      /*  Old inefficient code */
      /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
      b_sizes_idx_1 = eigenvalues->size[1];
      emxFree_real_T(&c_y);
      emxFree_real_T(&z);
      for (sizes_idx_1 = 0; sizes_idx_1 < b_sizes_idx_1; sizes_idx_1++) {
        if (eigenvalues->data[sizes_idx_1] < maxdnis) {
          eigenvalues->data[sizes_idx_1] = maxdnis;
        }
      }
      i = nininmat->size[0] * nininmat->size[1];
      nininmat->size[0] = restr_size[0];
      nininmat->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(nininmat, i);
      sizes_idx_1 = restr_size[0] * restr_size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        nininmat->data[i] = restr_data[i] * solmp_data;
      }
      b_sizes_idx_1 = eigenvalues->size[1];
      nrows = 0;
      for (sizes_idx_1 = 0; sizes_idx_1 < b_sizes_idx_1; sizes_idx_1++) {
        if (eigenvalues->data[sizes_idx_1] > nininmat->data[sizes_idx_1]) {
          eigenvalues->data[sizes_idx_1] = nininmat->data[nrows];
          nrows++;
        }
      }
    }
    emxFree_boolean_T(&dltm);
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
  }
  emxFree_real_T(&r);
  emxFree_real_T(&b_x);
  emxFree_real_T(&x);
  emxFree_real_T(&nininmat);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&nis);
  emxFree_real_T(&d);
}

void c_restreigen(emxArray_real_T *eigenvalues, double restr, double tol,
                  double userepmat)
{
  emxArray_boolean_T d_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_int32_T *r3;
  emxArray_real_T c_dltm;
  emxArray_real_T *b_dltm;
  emxArray_real_T *b_x;
  emxArray_real_T *c_x;
  emxArray_real_T *d1;
  emxArray_real_T *dnis;
  emxArray_real_T *ed;
  emxArray_real_T *ee;
  emxArray_real_T *nis;
  emxArray_real_T *oo;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *rr;
  emxArray_real_T *solmp;
  emxArray_real_T *x;
  double b_dv[3];
  double dimsor;
  double maxdnis;
  int b_iv[3];
  int iv1[3];
  int iv2[3];
  int iv3[3];
  int b_eigenvalues[2];
  int acoef;
  int b_k;
  int end;
  int i;
  int i1;
  int k;
  int outsize_idx_1;
  emxInit_real_T(&nis, 2);
  /* restreigen computes eigenvalues restriction (without Dykstra algorithm) */
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
  /*              v is the number of variables of the dataset which has to be */
  /*              clustered. */
  /*      niini: Cluster size. Vector. k x 1 vector containing the size of the k
   * clusters */
  /*      restr: Restriction factor. Scalar. Scalar containing the restr
   * parameter in tclust program. */
  /*             More in detail, parameter restr defines the cluster's shape */
  /*             restrictions, which are applied on all clusters during each */
  /*             iteration. */
  /*             Setting restr to 1, yields the strongest restriction, */
  /*             forcing all eigenvalues/determinants to be equal and so the */
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
  /*              If userepmat is equal to 1, function repmat is used instead */
  /*              of bsxfun inside the procedure. Remark: repmat is built in */
  /*              from MATLAB 2013b so it is faster to use repmat if the */
  /*              current version of MATLAB is >2013a. */
  /*              If userepmat is 2, implicit expansion is used instead of */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues. */
  /*                        The ratio between two possible elements in matrix */
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
  /*     % We compare the speed of restreigneasy with that of restreigen. We use
   */
  /*     % userepmat=2 if the current MATLAB version if >=R2017a or userepmat =1
   */
  /*     % if MATLAB version is >=R2013a but <R2017a else we use userepmat =0 */
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
  /*     disp(['Computing time of restreigeneasy: ' num2str(oldroutinetime)]) */
  /*     disp(['Computing time of restreigen: ' num2str(newroutinetime)]) */
  /* } */
  /*  Beginning of code */
  /*  userepmat specifies if it is necessary to use function repmat or bsxfun */
  /*  Remark: repmat has become built in from Release 2013b so it is faster to
   */
  /*  use it */
  /*  Initializations */
  /*  Get number of variables (v) and number of clusters (k) */
  /*  Get number of units of the dataset */
  /*  We assume that niini is a column vector */
  /*  nis is a matrix which replicates in the columns the sizes of the goups */
  /*  First row of nis = size of first group repated v times */
  /*  Second row of nis = size of second group repated v times */
  /*  .... */
  /*  kth row of nis = size of kth group repated v times */
  outsize_idx_1 = eigenvalues->size[0];
  i = nis->size[0] * nis->size[1];
  nis->size[0] = 1;
  nis->size[1] = outsize_idx_1;
  emxEnsureCapacity_real_T(nis, i);
  for (i = 0; i < outsize_idx_1; i++) {
    nis->data[i] = 1.0;
  }
  emxInit_real_T(&x, 1);
  /*  Below is the alternative inefficient code */
  /*  nis = repmat(niini,1,v); */
  /*  niini=niini'; */
  /*  dsor is 2*k*v the ordered set of values in which the restriction objective
   */
  /*  function change the definition The elements in dsor correspond to  the */
  /*  frontiers for the intervals in which this objective function has the same
   */
  /*  definition */
  /*  In other words */
  /*  dsor=(d_{11}, ........, d_{kv},d_{11}/restr, ........, d_{kv}/restr) */
  /*  OLD was */
  /*  dsor=sort([eigenvalues(:);eigenvalues(:)/c])'; */
  i = x->size[0];
  x->size[0] = eigenvalues->size[0] + eigenvalues->size[0];
  emxEnsureCapacity_real_T(x, i);
  acoef = eigenvalues->size[0];
  for (i = 0; i < acoef; i++) {
    x->data[i] = eigenvalues->data[i] / restr;
  }
  acoef = eigenvalues->size[0];
  for (i = 0; i < acoef; i++) {
    x->data[i + eigenvalues->size[0]] = eigenvalues->data[i];
  }
  emxInit_real_T(&d1, 2);
  c_sort(x);
  /*  dimsor=length(dsor); */
  dimsor = (double)eigenvalues->size[0] * 2.0;
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
  emxInit_real_T(&ed, 2);
  d1->data[(int)(dimsor + 1.0) - 1] = x->data[(int)dimsor - 1] * 2.0;
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
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
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  end = outsize_idx_1 - 1;
  outsize_idx_1 = 0;
  for (acoef = 0; acoef <= end; acoef++) {
    outsize_idx_1++;
  }
  emxInit_real_T(&dnis, 2);
  i = dnis->size[0] * dnis->size[1];
  dnis->size[0] = 1;
  dnis->size[1] = outsize_idx_1;
  emxEnsureCapacity_real_T(dnis, i);
  for (acoef = 0; acoef <= end; acoef++) {
    dnis->data[acoef] = eigenvalues->data[acoef];
  }
  maxdnis = d_maximum(dnis);
  if ((!(userepmat == 2.0)) && (!(maxdnis <= tol)) &&
      (!(fabs(maxdnis / b_minimum(dnis)) <= restr))) {
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    emxInit_boolean_T(&dltm, 2);
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
      outsize_idx_1 = (ed->size[1] != 1);
      i = ed->size[1] - 1;
      for (k = 0; k <= i; k++) {
        end = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dltm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dltm->data[b_k + dltm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] < ed->data[end]);
        }
      }
    }
    i = ed->size[0] * ed->size[1];
    ed->size[0] = 1;
    emxEnsureCapacity_real_T(ed, i);
    acoef = ed->size[1] - 1;
    for (i = 0; i <= acoef; i++) {
      ed->data[i] *= restr;
    }
    emxInit_boolean_T(&dgtcm, 2);
    i = dgtcm->size[0] * dgtcm->size[1];
    dgtcm->size[0] = eigenvalues->size[0];
    dgtcm->size[1] = ed->size[1];
    emxEnsureCapacity_boolean_T(dgtcm, i);
    if (eigenvalues->size[0] != 0) {
      outsize_idx_1 = (ed->size[1] != 1);
      i = ed->size[1] - 1;
      for (k = 0; k <= i; k++) {
        end = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dgtcm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dgtcm->data[b_k + dgtcm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] > ed->data[end]);
        }
      }
    }
    emxInit_real_T(&b_dltm, 2);
    i = b_dltm->size[0] * b_dltm->size[1];
    b_dltm->size[0] = dltm->size[0];
    b_dltm->size[1] = dltm->size[1];
    emxEnsureCapacity_real_T(b_dltm, i);
    acoef = dltm->size[0] * dltm->size[1];
    for (i = 0; i < acoef; i++) {
      b_dltm->data[i] = (double)dltm->data[i] + (double)dgtcm->data[i];
    }
    emxInit_real_T(&rr, 2);
    emxInit_real_T(&r, 3);
    outsize_idx_1 = eigenvalues->size[0];
    c_dltm = *b_dltm;
    b_iv[0] = 1;
    b_iv[1] = outsize_idx_1;
    b_iv[2] = (int)dimsor;
    c_dltm.size = &b_iv[0];
    c_dltm.numDimensions = 3;
    b_permute(&c_dltm, r);
    e_sum(r, rr);
    /*  Matrix version of s(:,mp)=sum(d.*(d<edmp),2) for mp=1, ..., dimsor */
    outsize_idx_1 = eigenvalues->size[0];
    i = x->size[0];
    x->size[0] = outsize_idx_1;
    emxEnsureCapacity_real_T(x, i);
    for (i = 0; i < outsize_idx_1; i++) {
      x->data[i] = eigenvalues->data[i];
    }
    emxInit_real_T(&r1, 2);
    outsize_idx_1 = eigenvalues->size[0];
    g_bsxfun(dltm, x, r1);
    c_dltm = *r1;
    iv1[0] = 1;
    iv1[1] = outsize_idx_1;
    iv1[2] = (int)dimsor;
    c_dltm.size = &iv1[0];
    c_dltm.numDimensions = 3;
    b_permute(&c_dltm, r);
    e_sum(r, ed);
    /*  Matrix version of t(:,mp)=sum(d.*(d>edmpc),2) for mp=1, ..., dimsor */
    outsize_idx_1 = eigenvalues->size[0];
    i = x->size[0];
    x->size[0] = outsize_idx_1;
    emxEnsureCapacity_real_T(x, i);
    for (i = 0; i < outsize_idx_1; i++) {
      x->data[i] = eigenvalues->data[i];
    }
    outsize_idx_1 = eigenvalues->size[0];
    g_bsxfun(dgtcm, x, r1);
    c_dltm = *r1;
    iv2[0] = 1;
    iv2[1] = outsize_idx_1;
    iv2[2] = (int)dimsor;
    c_dltm.size = &iv2[0];
    c_dltm.numDimensions = 3;
    b_permute(&c_dltm, r);
    e_sum(r, d1);
    /*  Vector version of */
    /*  solmp=sum(niini/n.*(s(:,mp)+t(:,mp)/c))/(sum(niini/n.*(r(:,mp)))) */
    /*  Note that solmp corresponds to m* of the equation below (5.4) of */
    /*  FGM2012 */
    /*  There are dimsor values of m*. We must choose the one which is */
    /*  associated to the smallest value of the objective function */
    /*  implemented in vector obj */
    emxInit_real_T(&solmp, 2);
    if (userepmat == 1.0) {
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      acoef = ed->size[1] - 1;
      for (i = 0; i <= acoef; i++) {
        ed->data[i] += d1->data[i] / restr;
      }
      outsize_idx_1 = ed->size[1];
      i = solmp->size[0] * solmp->size[1];
      solmp->size[0] = 1;
      solmp->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(solmp, i);
      for (end = 0; end < outsize_idx_1; end++) {
        solmp->data[end] = ed->data[end];
      }
      i = rr->size[0] * rr->size[1];
      rr->size[0] = 1;
      emxEnsureCapacity_real_T(rr, i);
      outsize_idx_1 = rr->size[1];
      i = d1->size[0] * d1->size[1];
      d1->size[0] = 1;
      d1->size[1] = rr->size[1];
      emxEnsureCapacity_real_T(d1, i);
      for (end = 0; end < outsize_idx_1; end++) {
        d1->data[end] = rr->data[end];
      }
      i = solmp->size[0] * solmp->size[1];
      solmp->size[0] = 1;
      emxEnsureCapacity_real_T(solmp, i);
      acoef = solmp->size[1] - 1;
      for (i = 0; i <= acoef; i++) {
        solmp->data[i] /= d1->data[i];
      }
    } else {
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      acoef = ed->size[1] - 1;
      for (i = 0; i <= acoef; i++) {
        ed->data[i] += d1->data[i] / restr;
      }
      i = dnis->size[0] * dnis->size[1];
      dnis->size[0] = 1;
      dnis->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(dnis, i);
      i = ed->size[1] - 1;
      for (k = 0; k <= i; k++) {
        dnis->data[k] = ed->data[k];
      }
      outsize_idx_1 = dnis->size[1];
      i = solmp->size[0] * solmp->size[1];
      solmp->size[0] = 1;
      solmp->size[1] = dnis->size[1];
      emxEnsureCapacity_real_T(solmp, i);
      for (end = 0; end < outsize_idx_1; end++) {
        solmp->data[end] = dnis->data[end];
      }
      i = dnis->size[0] * dnis->size[1];
      dnis->size[0] = 1;
      dnis->size[1] = rr->size[1];
      emxEnsureCapacity_real_T(dnis, i);
      i = rr->size[1] - 1;
      for (k = 0; k <= i; k++) {
        dnis->data[k] = rr->data[k];
      }
      outsize_idx_1 = dnis->size[1];
      i = d1->size[0] * d1->size[1];
      d1->size[0] = 1;
      d1->size[1] = dnis->size[1];
      emxEnsureCapacity_real_T(d1, i);
      for (end = 0; end < outsize_idx_1; end++) {
        d1->data[end] = dnis->data[end];
      }
      i = solmp->size[0] * solmp->size[1];
      solmp->size[0] = 1;
      emxEnsureCapacity_real_T(solmp, i);
      acoef = solmp->size[1] - 1;
      for (i = 0; i <= acoef; i++) {
        solmp->data[i] /= d1->data[i];
      }
    }
    emxFree_real_T(&rr);
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
      d1->data[i] = solmp->data[i] * restr;
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
      outsize_idx_1 = (solmp->size[1] != 1);
      i = solmp->size[1] - 1;
      for (k = 0; k <= i; k++) {
        end = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dltm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dltm->data[b_k + dltm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] < solmp->data[end]);
        }
      }
    }
    i = dgtcm->size[0] * dgtcm->size[1];
    dgtcm->size[0] = eigenvalues->size[0];
    dgtcm->size[1] = solmp->size[1];
    emxEnsureCapacity_boolean_T(dgtcm, i);
    if ((eigenvalues->size[0] != 0) && (solmp->size[1] != 0)) {
      outsize_idx_1 = (solmp->size[1] != 1);
      i = solmp->size[1] - 1;
      for (k = 0; k <= i; k++) {
        end = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dgtcm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dgtcm->data[b_k + dgtcm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] >= solmp->data[end]);
        }
      }
    }
    emxInit_boolean_T(&c, 2);
    i = c->size[0] * c->size[1];
    c->size[0] = eigenvalues->size[0];
    c->size[1] = d1->size[1];
    emxEnsureCapacity_boolean_T(c, i);
    if ((eigenvalues->size[0] != 0) && (d1->size[1] != 0)) {
      outsize_idx_1 = (d1->size[1] != 1);
      i = d1->size[1] - 1;
      for (k = 0; k <= i; k++) {
        end = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = c->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          c->data[b_k + c->size[0] * k] =
              (eigenvalues->data[acoef * b_k] <= d1->data[end]);
        }
      }
    }
    emxInit_boolean_T(&b_c, 2);
    i = b_c->size[0] * b_c->size[1];
    b_c->size[0] = eigenvalues->size[0];
    b_c->size[1] = d1->size[1];
    emxEnsureCapacity_boolean_T(b_c, i);
    if ((eigenvalues->size[0] != 0) && (d1->size[1] != 0)) {
      outsize_idx_1 = (d1->size[1] != 1);
      i = d1->size[1] - 1;
      for (k = 0; k <= i; k++) {
        end = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = b_c->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          b_c->data[b_k + b_c->size[0] * k] =
              (eigenvalues->data[acoef * b_k] > d1->data[end]);
        }
      }
    }
    end = eigenvalues->size[0];
    d_dltm = *dltm;
    b_eigenvalues[0] = end;
    b_eigenvalues[1] = (int)dimsor;
    d_dltm.size = &b_eigenvalues[0];
    d_dltm.numDimensions = 2;
    h_bsxfun(&d_dltm, solmp, b_dltm);
    outsize_idx_1 = eigenvalues->size[0];
    i = ed->size[0] * ed->size[1];
    ed->size[0] = 1;
    ed->size[1] = eigenvalues->size[0];
    emxEnsureCapacity_real_T(ed, i);
    acoef = eigenvalues->size[0];
    emxFree_boolean_T(&dltm);
    for (i = 0; i < acoef; i++) {
      ed->data[i] = eigenvalues->data[i];
    }
    d_dltm = *dgtcm;
    iv3[0] = 1;
    iv3[1] = outsize_idx_1;
    iv3[2] = (int)dimsor;
    d_dltm.size = &iv3[0];
    d_dltm.numDimensions = 3;
    k_bsxfun(&d_dltm, ed, r);
    outsize_idx_1 = eigenvalues->size[0];
    end = eigenvalues->size[0];
    i = r1->size[0] * r1->size[1];
    r1->size[0] = end;
    r1->size[1] = d1->size[1];
    emxEnsureCapacity_real_T(r1, i);
    acoef = d1->size[1];
    emxFree_boolean_T(&dgtcm);
    for (i = 0; i < acoef; i++) {
      for (i1 = 0; i1 < end; i1++) {
        r1->data[i1 + r1->size[0] * i] = d1->data[i];
      }
    }
    emxInit_real_T(&ee, 3);
    i = ee->size[0] * ee->size[1] * ee->size[2];
    ee->size[0] = 1;
    ee->size[1] = outsize_idx_1;
    ee->size[2] = (int)dimsor;
    emxEnsureCapacity_real_T(ee, i);
    outsize_idx_1 *= (int)dimsor;
    for (i = 0; i < outsize_idx_1; i++) {
      ee->data[i] = (b_dltm->data[i] + r->data[i] * (double)c->data[i]) +
                    r1->data[i] * (double)b_c->data[i];
    }
    emxFree_real_T(&r1);
    emxFree_real_T(&b_dltm);
    emxFree_boolean_T(&b_c);
    emxFree_boolean_T(&c);
    emxInit_real_T(&oo, 3);
    emxInit_real_T(&b_x, 3);
    if (userepmat == 1.0) {
      i = b_x->size[0] * b_x->size[1] * b_x->size[2];
      b_x->size[0] = 1;
      b_x->size[1] = ee->size[1];
      b_x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(b_x, i);
      acoef = ee->size[1] * ee->size[2];
      for (i = 0; i < acoef; i++) {
        b_x->data[i] = ee->data[i];
      }
      outsize_idx_1 = ee->size[1] * ee->size[2];
      for (k = 0; k < outsize_idx_1; k++) {
        b_x->data[k] = log(b_x->data[k]);
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      c_repmat(nis, b_dv, oo);
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(ed, i);
      acoef = eigenvalues->size[0];
      for (i = 0; i < acoef; i++) {
        ed->data[i] = eigenvalues->data[i];
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      c_repmat(ed, b_dv, r);
      acoef = oo->size[1] * oo->size[2];
      i = oo->size[0] * oo->size[1] * oo->size[2];
      oo->size[0] = 1;
      emxEnsureCapacity_real_T(oo, i);
      for (i = 0; i < acoef; i++) {
        oo->data[i] *= b_x->data[i] + r->data[i] / ee->data[i];
      }
    } else {
      /*  Now find vector version of o */
      /*  logede=log(ee)+bsxfun(@rdivide,d,ee); */
      /*  oo=nis/n.*(log(e)+d./e); */
      i = b_x->size[0] * b_x->size[1] * b_x->size[2];
      b_x->size[0] = 1;
      b_x->size[1] = ee->size[1];
      b_x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(b_x, i);
      acoef = ee->size[1] * ee->size[2];
      for (i = 0; i < acoef; i++) {
        b_x->data[i] = ee->data[i];
      }
      outsize_idx_1 = ee->size[1] * ee->size[2];
      for (k = 0; k < outsize_idx_1; k++) {
        b_x->data[k] = log(b_x->data[k]);
      }
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(ed, i);
      acoef = eigenvalues->size[0];
      for (i = 0; i < acoef; i++) {
        ed->data[i] = eigenvalues->data[i];
      }
      emxInit_real_T(&c_x, 3);
      i = c_x->size[0] * c_x->size[1] * c_x->size[2];
      c_x->size[0] = 1;
      c_x->size[1] = ee->size[1];
      c_x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(c_x, i);
      acoef = ee->size[1] * ee->size[2];
      for (i = 0; i < acoef; i++) {
        c_x->data[i] = 1.0 / ee->data[i];
      }
      m_bsxfun(ed, c_x, r);
      i = c_x->size[0] * c_x->size[1] * c_x->size[2];
      c_x->size[0] = 1;
      c_x->size[1] = b_x->size[1];
      c_x->size[2] = b_x->size[2];
      emxEnsureCapacity_real_T(c_x, i);
      acoef = b_x->size[1] * b_x->size[2];
      for (i = 0; i < acoef; i++) {
        c_x->data[i] = b_x->data[i] + r->data[i];
      }
      m_bsxfun(nis, c_x, oo);
      emxFree_real_T(&c_x);
    }
    emxFree_real_T(&b_x);
    emxFree_real_T(&ee);
    emxInit_real_T(&r2, 3);
    /*  obj is a vector of size dimsor */
    /*   obj=sum(sum(oo,1)); */
    f_sum(oo, r);
    d_sum(r, r2);
    f_minimum(r2, &dimsor, &b_k);
    /*  m is the optimum value for the eigenvalues procedure */
    dimsor = solmp->data[b_k - 1];
    /*  plot(1:dimsor,obj) */
    /*  Based on the m value we get the restricted eigenvalues */
    /*  The new eigenvalues are equal to */
    /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
    /*  m                   if old eigenvalues < m */
    /*  cm                  if old eigenvalues > c*m */
    /*  Old inefficient code */
    /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
    end = eigenvalues->size[0];
    emxFree_real_T(&r);
    emxFree_real_T(&r2);
    emxFree_real_T(&oo);
    for (acoef = 0; acoef < end; acoef++) {
      if (eigenvalues->data[acoef] < dimsor) {
        eigenvalues->data[acoef] = dimsor;
      }
    }
    end = eigenvalues->size[0] - 1;
    outsize_idx_1 = 0;
    for (acoef = 0; acoef <= end; acoef++) {
      if (eigenvalues->data[acoef] > restr * dimsor) {
        outsize_idx_1++;
      }
    }
    emxInit_int32_T(&r3, 1);
    i = r3->size[0];
    r3->size[0] = outsize_idx_1;
    emxEnsureCapacity_int32_T(r3, i);
    outsize_idx_1 = 0;
    for (acoef = 0; acoef <= end; acoef++) {
      if (eigenvalues->data[acoef] > restr * dimsor) {
        r3->data[outsize_idx_1] = acoef + 1;
        outsize_idx_1++;
      }
    }
    acoef = r3->size[0];
    for (i = 0; i < acoef; i++) {
      eigenvalues->data[r3->data[i] - 1] = restr * solmp->data[b_k - 1];
    }
    emxFree_int32_T(&r3);
    emxFree_real_T(&solmp);
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
  emxFree_real_T(&x);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&d1);
  emxFree_real_T(&nis);
}

void d_restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                  double restr, double tol, double userepmat)
{
  emxArray_boolean_T b_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T b_ss;
  emxArray_real_T *b_x;
  emxArray_real_T *c_ss;
  emxArray_real_T *c_x;
  emxArray_real_T *d;
  emxArray_real_T *d1;
  emxArray_real_T *dnis;
  emxArray_real_T *ed;
  emxArray_real_T *ee;
  emxArray_real_T *ninin;
  emxArray_real_T *nininmat;
  emxArray_real_T *nis;
  emxArray_real_T *oo;
  emxArray_real_T *r1;
  emxArray_real_T *rr;
  emxArray_real_T *ss;
  emxArray_real_T *tt;
  emxArray_real_T *x;
  emxArray_real_T *y;
  double b_dv[3];
  double dimsor;
  double maxdnis;
  double n;
  int b_eigenvalues[3];
  int c_eigenvalues[3];
  int d_eigenvalues[3];
  int f_eigenvalues[3];
  int e_eigenvalues[2];
  int acoef;
  int b_i;
  int i;
  int i1;
  int ibtile;
  int k;
  int nrows;
  unsigned int unnamed_idx_1;
  emxInit_real_T(&d, 1);
  /* restreigen computes eigenvalues restriction (without Dykstra algorithm) */
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
  /*              v is the number of variables of the dataset which has to be */
  /*              clustered. */
  /*      niini: Cluster size. Vector. k x 1 vector containing the size of the k
   * clusters */
  /*      restr: Restriction factor. Scalar. Scalar containing the restr
   * parameter in tclust program. */
  /*             More in detail, parameter restr defines the cluster's shape */
  /*             restrictions, which are applied on all clusters during each */
  /*             iteration. */
  /*             Setting restr to 1, yields the strongest restriction, */
  /*             forcing all eigenvalues/determinants to be equal and so the */
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
  /*              If userepmat is equal to 1, function repmat is used instead */
  /*              of bsxfun inside the procedure. Remark: repmat is built in */
  /*              from MATLAB 2013b so it is faster to use repmat if the */
  /*              current version of MATLAB is >2013a. */
  /*              If userepmat is 2, implicit expansion is used instead of */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues. */
  /*                        The ratio between two possible elements in matrix */
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
  /*     % We compare the speed of restreigneasy with that of restreigen. We use
   */
  /*     % userepmat=2 if the current MATLAB version if >=R2017a or userepmat =1
   */
  /*     % if MATLAB version is >=R2013a but <R2017a else we use userepmat =0 */
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
  /*     disp(['Computing time of restreigeneasy: ' num2str(oldroutinetime)]) */
  /*     disp(['Computing time of restreigen: ' num2str(newroutinetime)]) */
  /* } */
  /*  Beginning of code */
  /*  userepmat specifies if it is necessary to use function repmat or bsxfun */
  /*  Remark: repmat has become built in from Release 2013b so it is faster to
   */
  /*  use it */
  /*  Initializations */
  i = d->size[0];
  d->size[0] = eigenvalues->size[1];
  emxEnsureCapacity_real_T(d, i);
  ibtile = eigenvalues->size[1];
  for (i = 0; i < ibtile; i++) {
    d->data[i] = eigenvalues->data[i];
  }
  emxInit_real_T(&nis, 1);
  /*  Get number of variables (v) and number of clusters (k) */
  /*  Get number of units of the dataset */
  n = blockedSummation(niini, niini->size[0]);
  /*  We assume that niini is a column vector */
  /*  nis is a matrix which replicates in the columns the sizes of the goups */
  /*  First row of nis = size of first group repated v times */
  /*  Second row of nis = size of second group repated v times */
  /*  .... */
  /*  kth row of nis = size of kth group repated v times */
  i = nis->size[0];
  nis->size[0] = niini->size[0];
  emxEnsureCapacity_real_T(nis, i);
  nrows = niini->size[0];
  for (k = 0; k < nrows; k++) {
    nis->data[k] = niini->data[k];
  }
  emxInit_real_T(&ninin, 1);
  /*  Below is the alternative inefficient code */
  /*  nis = repmat(niini,1,v); */
  /*  niini=niini'; */
  /*  dsor is 2*k*v the ordered set of values in which the restriction objective
   */
  /*  function change the definition The elements in dsor correspond to  the */
  /*  frontiers for the intervals in which this objective function has the same
   */
  /*  definition */
  /*  In other words */
  /*  dsor=(d_{11}, ........, d_{kv},d_{11}/restr, ........, d_{kv}/restr) */
  /*  OLD was */
  /*  dsor=sort([eigenvalues(:);eigenvalues(:)/c])'; */
  i = ninin->size[0];
  ninin->size[0] = eigenvalues->size[1] + eigenvalues->size[1];
  emxEnsureCapacity_real_T(ninin, i);
  ibtile = eigenvalues->size[1];
  for (i = 0; i < ibtile; i++) {
    ninin->data[i] = eigenvalues->data[i] / restr;
  }
  ibtile = eigenvalues->size[1];
  for (i = 0; i < ibtile; i++) {
    ninin->data[i + eigenvalues->size[1]] = eigenvalues->data[i];
  }
  emxInit_real_T(&d1, 2);
  c_sort(ninin);
  /*  dimsor=length(dsor); */
  dimsor = (double)eigenvalues->size[1] * 2.0;
  /*  d1 is like dsor but contains an additional element which is larger than
   * the largest element of dsor */
  i = d1->size[0] * d1->size[1];
  d1->size[0] = 1;
  d1->size[1] = ninin->size[0];
  emxEnsureCapacity_real_T(d1, i);
  ibtile = ninin->size[0];
  for (i = 0; i < ibtile; i++) {
    d1->data[i] = ninin->data[i];
  }
  emxInit_real_T(&ed, 2);
  d1->data[(int)(dimsor + 1.0) - 1] = ninin->data[(int)dimsor - 1] * 2.0;
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
  /*  ed is a set with the middle points of these intervals */
  ibtile = ninin->size[0] - 1;
  i = ed->size[0] * ed->size[1];
  ed->size[0] = 1;
  ed->size[1] = ninin->size[0] + 1;
  emxEnsureCapacity_real_T(ed, i);
  ed->data[0] = d1->data[0] / 2.0;
  for (i = 0; i <= ibtile; i++) {
    ed->data[i + 1] = (d1->data[i + 1] + ninin->data[i]) / 2.0;
  }
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  ibtile = nis->size[0] - 1;
  nrows = 0;
  for (b_i = 0; b_i <= ibtile; b_i++) {
    if (nis->data[b_i] > 0.0) {
      nrows++;
    }
  }
  emxInit_real_T(&dnis, 1);
  i = dnis->size[0];
  dnis->size[0] = nrows;
  emxEnsureCapacity_real_T(dnis, i);
  nrows = 0;
  for (b_i = 0; b_i <= ibtile; b_i++) {
    if (nis->data[b_i] > 0.0) {
      dnis->data[nrows] = d->data[b_i];
      nrows++;
    }
  }
  maxdnis = b_maximum(dnis);
  emxInit_int32_T(&r, 1);
  if (userepmat == 2.0) {
    if ((!(maxdnis <= tol)) && (fabs(maxdnis / c_minimum(dnis)) <= restr)) {
      /*  we check if the  eigenvalues verify the restrictions */
      /*  abs here is just for computational purposes */
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      if (c_minimum(nis) == 0.0) {
        ibtile = nis->size[0] - 1;
        nrows = 0;
        for (b_i = 0; b_i <= ibtile; b_i++) {
          if (nis->data[b_i] == 0.0) {
            nrows++;
          }
        }
        i = r->size[0];
        r->size[0] = nrows;
        emxEnsureCapacity_int32_T(r, i);
        nrows = 0;
        for (b_i = 0; b_i <= ibtile; b_i++) {
          if (nis->data[b_i] == 0.0) {
            r->data[nrows] = b_i + 1;
            nrows++;
          }
        }
        n = blockedSummation(dnis, dnis->size[0]) / (double)dnis->size[0];
        ibtile = r->size[0];
        for (i = 0; i < ibtile; i++) {
          d->data[r->data[i] - 1] = n;
        }
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = 1;
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      ibtile = d->size[0];
      for (i = 0; i < ibtile; i++) {
        eigenvalues->data[i] = d->data[i];
      }
    } else {
      /*  if all the eigenvalues are 0 this means all points are concentrated */
      /*  in k groups and there is a perfect fit */
      /*  no further changes on the eigenvalues required, so return them */
      /*  immediately and stop the procedure! */
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
    }
  } else if (!(maxdnis <= tol)) {
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    if (fabs(maxdnis / c_minimum(dnis)) <= restr) {
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      if (c_minimum(nis) == 0.0) {
        ibtile = nis->size[0] - 1;
        nrows = 0;
        for (b_i = 0; b_i <= ibtile; b_i++) {
          if (nis->data[b_i] == 0.0) {
            nrows++;
          }
        }
        i = r->size[0];
        r->size[0] = nrows;
        emxEnsureCapacity_int32_T(r, i);
        nrows = 0;
        for (b_i = 0; b_i <= ibtile; b_i++) {
          if (nis->data[b_i] == 0.0) {
            r->data[nrows] = b_i + 1;
            nrows++;
          }
        }
        n = blockedSummation(dnis, dnis->size[0]) / (double)dnis->size[0];
        ibtile = r->size[0];
        for (i = 0; i < ibtile; i++) {
          d->data[r->data[i] - 1] = n;
        }
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = 1;
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      ibtile = d->size[0];
      for (i = 0; i < ibtile; i++) {
        eigenvalues->data[i] = d->data[i];
      }
    } else {
      /*  REMARK: the following exploits matrix operations for avoiding */
      /*  loops. Given that the code below is difficult to interpret we */
      /*  refer to routine restreigeneasy for a better comprehension */
      /*  of the underlying algorithm */
      i = ninin->size[0];
      ninin->size[0] = niini->size[0];
      emxEnsureCapacity_real_T(ninin, i);
      ibtile = niini->size[0];
      for (i = 0; i < ibtile; i++) {
        ninin->data[i] = niini->data[i] / n;
      }
      emxInit_boolean_T(&dltm, 2);
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = d->size[0];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      if (d->size[0] != 0) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dltm->size[0] - 1;
          for (b_i = 0; b_i <= i1; b_i++) {
            dltm->data[b_i + dltm->size[0] * k] =
                (d->data[acoef * b_i] < ed->data[ibtile]);
          }
        }
      }
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      ibtile = ed->size[1] - 1;
      for (i = 0; i <= ibtile; i++) {
        ed->data[i] *= restr;
      }
      emxInit_boolean_T(&dgtcm, 2);
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      if (d->size[0] != 0) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_i = 0; b_i <= i1; b_i++) {
            dgtcm->data[b_i + dgtcm->size[0] * k] =
                (d->data[acoef * b_i] > ed->data[ibtile]);
          }
        }
      }
      emxInit_real_T(&ss, 2);
      i = ss->size[0] * ss->size[1];
      ss->size[0] = dltm->size[0];
      ss->size[1] = dltm->size[1];
      emxEnsureCapacity_real_T(ss, i);
      ibtile = dltm->size[0] * dltm->size[1];
      for (i = 0; i < ibtile; i++) {
        ss->data[i] = (double)dltm->data[i] + (double)dgtcm->data[i];
      }
      emxInit_real_T(&rr, 2);
      acoef = eigenvalues->size[1];
      b_i = (int)dimsor;
      b_ss = *ss;
      b_eigenvalues[0] = acoef;
      b_eigenvalues[1] = 1;
      b_eigenvalues[2] = (int)dimsor;
      b_ss.size = &b_eigenvalues[0];
      b_ss.numDimensions = 3;
      c_permute(&b_ss, rr);
      if (rr->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)rr->size[1];
        rr->size[0] = 0;
        rr->size[1] = (int)unnamed_idx_1;
      }
      emxInit_real_T(&nininmat, 2);
      /*  Matrix version of s(:,mp)=sum(d.*(d<edmp),2) for mp=1, ..., dimsor */
      acoef = eigenvalues->size[1];
      g_bsxfun(dltm, d, nininmat);
      b_ss = *nininmat;
      c_eigenvalues[0] = acoef;
      c_eigenvalues[1] = 1;
      c_eigenvalues[2] = (int)dimsor;
      b_ss.size = &c_eigenvalues[0];
      b_ss.numDimensions = 3;
      c_permute(&b_ss, ss);
      if (ss->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)ss->size[1];
        ss->size[0] = 0;
        ss->size[1] = (int)unnamed_idx_1;
      }
      emxInit_real_T(&tt, 2);
      /*  Matrix version of t(:,mp)=sum(d.*(d>edmpc),2) for mp=1, ..., dimsor */
      acoef = eigenvalues->size[1];
      g_bsxfun(dgtcm, d, nininmat);
      b_ss = *nininmat;
      d_eigenvalues[0] = acoef;
      d_eigenvalues[1] = 1;
      d_eigenvalues[2] = (int)dimsor;
      b_ss.size = &d_eigenvalues[0];
      b_ss.numDimensions = 3;
      c_permute(&b_ss, tt);
      if (tt->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)tt->size[1];
        tt->size[0] = 0;
        tt->size[1] = (int)unnamed_idx_1;
      }
      /*  Vector version of */
      /*  solmp=sum(niini/n.*(s(:,mp)+t(:,mp)/c))/(sum(niini/n.*(r(:,mp)))) */
      /*  Note that solmp corresponds to m* of the equation below (5.4) of */
      /*  FGM2012 */
      /*  There are dimsor values of m*. We must choose the one which is */
      /*  associated to the smallest value of the objective function */
      /*  implemented in vector obj */
      emxInit_real_T(&c_ss, 2);
      if (userepmat == 1.0) {
        i = nininmat->size[0] * nininmat->size[1];
        nininmat->size[0] = ninin->size[0];
        nininmat->size[1] = (int)dimsor;
        emxEnsureCapacity_real_T(nininmat, i);
        nrows = ninin->size[0];
        for (acoef = 0; acoef < b_i; acoef++) {
          ibtile = acoef * nrows;
          for (k = 0; k < nrows; k++) {
            nininmat->data[ibtile + k] = ninin->data[k];
          }
        }
        i = c_ss->size[0] * c_ss->size[1];
        c_ss->size[0] = ss->size[0];
        c_ss->size[1] = ss->size[1];
        emxEnsureCapacity_real_T(c_ss, i);
        ibtile = ss->size[0] * ss->size[1];
        for (i = 0; i < ibtile; i++) {
          c_ss->data[i] =
              (ss->data[i] + tt->data[i] / restr) * nininmat->data[i];
        }
        combineVectorElements(c_ss, ed);
        i = ss->size[0] * ss->size[1];
        ss->size[0] = rr->size[0];
        ss->size[1] = rr->size[1];
        emxEnsureCapacity_real_T(ss, i);
        ibtile = rr->size[0] * rr->size[1];
        for (i = 0; i < ibtile; i++) {
          ss->data[i] = rr->data[i] * nininmat->data[i];
        }
        combineVectorElements(ss, d1);
        i = ed->size[0] * ed->size[1];
        ed->size[0] = 1;
        emxEnsureCapacity_real_T(ed, i);
        ibtile = ed->size[1] - 1;
        for (i = 0; i <= ibtile; i++) {
          ed->data[i] /= d1->data[i];
        }
      } else {
        i = c_ss->size[0] * c_ss->size[1];
        c_ss->size[0] = ss->size[0];
        c_ss->size[1] = ss->size[1];
        emxEnsureCapacity_real_T(c_ss, i);
        ibtile = ss->size[0] * ss->size[1];
        for (i = 0; i < ibtile; i++) {
          c_ss->data[i] = ss->data[i] + tt->data[i] / restr;
        }
        n_bsxfun(c_ss, ninin, nininmat);
        combineVectorElements(nininmat, ed);
        n_bsxfun(rr, ninin, nininmat);
        combineVectorElements(nininmat, d1);
        i = ed->size[0] * ed->size[1];
        ed->size[0] = 1;
        emxEnsureCapacity_real_T(ed, i);
        ibtile = ed->size[1] - 1;
        for (i = 0; i <= ibtile; i++) {
          ed->data[i] /= d1->data[i];
        }
      }
      emxFree_real_T(&c_ss);
      emxFree_real_T(&tt);
      emxFree_real_T(&rr);
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
      d1->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(d1, i);
      ibtile = ed->size[1];
      for (i = 0; i < ibtile; i++) {
        d1->data[i] = ed->data[i] * restr;
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
      dltm->size[0] = d->size[0];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      if ((d->size[0] != 0) && (ed->size[1] != 0)) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dltm->size[0] - 1;
          for (b_i = 0; b_i <= i1; b_i++) {
            dltm->data[b_i + dltm->size[0] * k] =
                (d->data[acoef * b_i] < ed->data[ibtile]);
          }
        }
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      if ((d->size[0] != 0) && (ed->size[1] != 0)) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_i = 0; b_i <= i1; b_i++) {
            dgtcm->data[b_i + dgtcm->size[0] * k] =
                (d->data[acoef * b_i] >= ed->data[ibtile]);
          }
        }
      }
      emxInit_boolean_T(&c, 2);
      i = c->size[0] * c->size[1];
      c->size[0] = d->size[0];
      c->size[1] = d1->size[1];
      emxEnsureCapacity_boolean_T(c, i);
      if ((d->size[0] != 0) && (d1->size[1] != 0)) {
        nrows = (d1->size[1] != 1);
        i = d1->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = c->size[0] - 1;
          for (b_i = 0; b_i <= i1; b_i++) {
            c->data[b_i + c->size[0] * k] =
                (d->data[acoef * b_i] <= d1->data[ibtile]);
          }
        }
      }
      emxInit_boolean_T(&b_c, 2);
      i = b_c->size[0] * b_c->size[1];
      b_c->size[0] = d->size[0];
      b_c->size[1] = d1->size[1];
      emxEnsureCapacity_boolean_T(b_c, i);
      if ((d->size[0] != 0) && (d1->size[1] != 0)) {
        nrows = (d1->size[1] != 1);
        i = d1->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = b_c->size[0] - 1;
          for (b_i = 0; b_i <= i1; b_i++) {
            b_c->data[b_i + b_c->size[0] * k] =
                (d->data[acoef * b_i] > d1->data[ibtile]);
          }
        }
      }
      emxInit_real_T(&r1, 3);
      acoef = eigenvalues->size[1];
      b_dltm = *dltm;
      e_eigenvalues[0] = acoef;
      e_eigenvalues[1] = (int)dimsor;
      b_dltm.size = &e_eigenvalues[0];
      b_dltm.numDimensions = 2;
      h_bsxfun(&b_dltm, ed, nininmat);
      acoef = eigenvalues->size[1];
      b_dltm = *dgtcm;
      f_eigenvalues[0] = acoef;
      f_eigenvalues[1] = 1;
      f_eigenvalues[2] = (int)dimsor;
      b_dltm.size = &f_eigenvalues[0];
      b_dltm.numDimensions = 3;
      l_bsxfun(&b_dltm, d, r1);
      acoef = eigenvalues->size[1];
      nrows = eigenvalues->size[1];
      i = ss->size[0] * ss->size[1];
      ss->size[0] = nrows;
      ss->size[1] = d1->size[1];
      emxEnsureCapacity_real_T(ss, i);
      ibtile = d1->size[1];
      emxFree_boolean_T(&dgtcm);
      emxFree_boolean_T(&dltm);
      for (i = 0; i < ibtile; i++) {
        for (i1 = 0; i1 < nrows; i1++) {
          ss->data[i1 + ss->size[0] * i] = d1->data[i];
        }
      }
      emxInit_real_T(&ee, 3);
      i = ee->size[0] * ee->size[1] * ee->size[2];
      ee->size[0] = acoef;
      ee->size[1] = 1;
      ee->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(ee, i);
      nrows = acoef * (int)dimsor;
      for (i = 0; i < nrows; i++) {
        ee->data[i] = (nininmat->data[i] + r1->data[i] * (double)c->data[i]) +
                      ss->data[i] * (double)b_c->data[i];
      }
      emxFree_boolean_T(&b_c);
      emxFree_boolean_T(&c);
      emxFree_real_T(&nininmat);
      emxFree_real_T(&ss);
      emxInit_real_T(&oo, 3);
      emxInit_real_T(&x, 3);
      if (userepmat == 1.0) {
        i = x->size[0] * x->size[1] * x->size[2];
        x->size[0] = ee->size[0];
        x->size[1] = 1;
        x->size[2] = ee->size[2];
        emxEnsureCapacity_real_T(x, i);
        ibtile = ee->size[0] * ee->size[2];
        for (i = 0; i < ibtile; i++) {
          x->data[i] = ee->data[i];
        }
        nrows = ee->size[0] * ee->size[2];
        for (k = 0; k < nrows; k++) {
          x->data[k] = log(x->data[k]);
        }
        ibtile = nis->size[0];
        for (i = 0; i < ibtile; i++) {
          nis->data[i] /= n;
        }
        b_dv[0] = 1.0;
        b_dv[1] = 1.0;
        b_dv[2] = dimsor;
        d_repmat(nis, b_dv, oo);
        b_dv[0] = 1.0;
        b_dv[1] = 1.0;
        b_dv[2] = dimsor;
        d_repmat(d, b_dv, r1);
        ibtile = oo->size[0] * oo->size[2];
        i = oo->size[0] * oo->size[1] * oo->size[2];
        oo->size[1] = 1;
        emxEnsureCapacity_real_T(oo, i);
        for (i = 0; i < ibtile; i++) {
          oo->data[i] *= x->data[i] + r1->data[i] / ee->data[i];
        }
      } else {
        /*  Now find vector version of o */
        /*  logede=log(ee)+bsxfun(@rdivide,d,ee); */
        /*  oo=nis/n.*(log(e)+d./e); */
        i = x->size[0] * x->size[1] * x->size[2];
        x->size[0] = ee->size[0];
        x->size[1] = 1;
        x->size[2] = ee->size[2];
        emxEnsureCapacity_real_T(x, i);
        ibtile = ee->size[0] * ee->size[2];
        for (i = 0; i < ibtile; i++) {
          x->data[i] = ee->data[i];
        }
        nrows = ee->size[0] * ee->size[2];
        for (k = 0; k < nrows; k++) {
          x->data[k] = log(x->data[k]);
        }
        emxInit_real_T(&b_x, 3);
        i = b_x->size[0] * b_x->size[1] * b_x->size[2];
        b_x->size[0] = ee->size[0];
        b_x->size[1] = 1;
        b_x->size[2] = ee->size[2];
        emxEnsureCapacity_real_T(b_x, i);
        ibtile = ee->size[0] * ee->size[2];
        for (i = 0; i < ibtile; i++) {
          b_x->data[i] = 1.0 / ee->data[i];
        }
        o_bsxfun(d, b_x, r1);
        ibtile = nis->size[0];
        for (i = 0; i < ibtile; i++) {
          nis->data[i] /= n;
        }
        i = b_x->size[0] * b_x->size[1] * b_x->size[2];
        b_x->size[0] = x->size[0];
        b_x->size[1] = 1;
        b_x->size[2] = x->size[2];
        emxEnsureCapacity_real_T(b_x, i);
        ibtile = x->size[0] * x->size[2];
        for (i = 0; i < ibtile; i++) {
          b_x->data[i] = x->data[i] + r1->data[i];
        }
        o_bsxfun(nis, b_x, oo);
        emxFree_real_T(&b_x);
      }
      emxFree_real_T(&r1);
      emxFree_real_T(&x);
      emxFree_real_T(&ee);
      emxInit_real_T(&y, 3);
      emxInit_real_T(&c_x, 3);
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      g_sum(oo, c_x);
      nrows = 1;
      k = 3;
      emxFree_real_T(&oo);
      if (c_x->size[2] == 1) {
        k = 2;
      }
      for (b_i = 3; b_i <= k; b_i++) {
        nrows *= c_x->size[2];
      }
      i = y->size[0] * y->size[1] * y->size[2];
      y->size[0] = 1;
      y->size[1] = 1;
      y->size[2] = c_x->size[2];
      emxEnsureCapacity_real_T(y, i);
      for (ibtile = 0; ibtile < nrows; ibtile++) {
        y->data[ibtile] = c_x->data[ibtile];
      }
      emxFree_real_T(&c_x);
      f_minimum(y, &n, &acoef);
      /*  m is the optimum value for the eigenvalues procedure */
      n = ed->data[acoef - 1];
      /*  plot(1:dimsor,obj) */
      /*  Based on the m value we get the restricted eigenvalues */
      /*  The new eigenvalues are equal to */
      /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
      /*  m                   if old eigenvalues < m */
      /*  cm                  if old eigenvalues > c*m */
      /*  Old inefficient code */
      /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
      ibtile = eigenvalues->size[1];
      emxFree_real_T(&y);
      for (b_i = 0; b_i < ibtile; b_i++) {
        if (eigenvalues->data[b_i] < n) {
          eigenvalues->data[b_i] = n;
        }
      }
      ibtile = eigenvalues->size[1] - 1;
      nrows = 0;
      for (b_i = 0; b_i <= ibtile; b_i++) {
        if (eigenvalues->data[b_i] > restr * n) {
          nrows++;
        }
      }
      emxInit_int32_T(&r2, 2);
      i = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      r2->size[1] = nrows;
      emxEnsureCapacity_int32_T(r2, i);
      nrows = 0;
      for (b_i = 0; b_i <= ibtile; b_i++) {
        if (eigenvalues->data[b_i] > restr * n) {
          r2->data[nrows] = b_i + 1;
          nrows++;
        }
      }
      ibtile = r2->size[1];
      for (i = 0; i < ibtile; i++) {
        eigenvalues->data[r2->data[i] - 1] = restr * ed->data[acoef - 1];
      }
      emxFree_int32_T(&r2);
    }
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
  }
  emxFree_int32_T(&r);
  emxFree_real_T(&ninin);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&d1);
  emxFree_real_T(&nis);
  emxFree_real_T(&d);
}

void restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                const double restr_data[], const int restr_size[2])
{
  emxArray_boolean_T r7;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *x;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_real_T b_eigenvalues;
  emxArray_real_T b_obj_data;
  emxArray_real_T b_restr_data;
  emxArray_real_T b_tmp_data;
  emxArray_real_T d_tmp_data;
  emxArray_real_T *C;
  emxArray_real_T *b_Y_tmp;
  emxArray_real_T *b_dltm;
  emxArray_real_T *b_y;
  emxArray_real_T *d;
  emxArray_real_T *d1;
  emxArray_real_T *dnis;
  emxArray_real_T *dsor;
  emxArray_real_T *ed;
  emxArray_real_T *nininmat;
  emxArray_real_T *nis;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r6;
  emxArray_real_T *r8;
  emxArray_real_T *z;
  double b_dv[3];
  double c_tmp_data;
  double dimsor;
  double kv;
  double maxdnis;
  double n;
  double obj_data;
  double solmp_data;
  double tmp_data;
  int b_tmp_size[3];
  int c_tmp_size[3];
  int h_eigenvalues[3];
  int j_eigenvalues[3];
  int k_eigenvalues[3];
  int obj_size[3];
  int sizes[2];
  int tmp_size[2];
  int Y_tmp;
  int c_eigenvalues;
  int d_eigenvalues;
  int e_eigenvalues;
  int e_tmp_data;
  int f_eigenvalues;
  int g_eigenvalues;
  int i;
  int i_eigenvalues;
  int ibtile;
  int jtilecol;
  int k;
  int l_eigenvalues;
  int m_eigenvalues;
  int n_eigenvalues;
  int nrows;
  int ntilecols;
  int o_eigenvalues;
  bool exitg1;
  bool y;
  emxInit_real_T(&d, 2);
  /* restreigen computes eigenvalues restriction (without Dykstra algorithm) */
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
  /*              v is the number of variables of the dataset which has to be */
  /*              clustered. */
  /*      niini: Cluster size. Vector. k x 1 vector containing the size of the k
   * clusters */
  /*      restr: Restriction factor. Scalar. Scalar containing the restr
   * parameter in tclust program. */
  /*             More in detail, parameter restr defines the cluster's shape */
  /*             restrictions, which are applied on all clusters during each */
  /*             iteration. */
  /*             Setting restr to 1, yields the strongest restriction, */
  /*             forcing all eigenvalues/determinants to be equal and so the */
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
  /*              If userepmat is equal to 1, function repmat is used instead */
  /*              of bsxfun inside the procedure. Remark: repmat is built in */
  /*              from MATLAB 2013b so it is faster to use repmat if the */
  /*              current version of MATLAB is >2013a. */
  /*              If userepmat is 2, implicit expansion is used instead of */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues. */
  /*                        The ratio between two possible elements in matrix */
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
  /*     % We compare the speed of restreigneasy with that of restreigen. We use
   */
  /*     % userepmat=2 if the current MATLAB version if >=R2017a or userepmat =1
   */
  /*     % if MATLAB version is >=R2013a but <R2017a else we use userepmat =0 */
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
  /*     disp(['Computing time of restreigeneasy: ' num2str(oldroutinetime)]) */
  /*     disp(['Computing time of restreigen: ' num2str(newroutinetime)]) */
  /* } */
  /*  Beginning of code */
  /*  userepmat specifies if it is necessary to use function repmat or bsxfun */
  /*  Remark: repmat has become built in from Release 2013b so it is faster to
   */
  /*  use it */
  /*  Initializations */
  i = d->size[0] * d->size[1];
  d->size[0] = eigenvalues->size[1];
  d->size[1] = eigenvalues->size[0];
  emxEnsureCapacity_real_T(d, i);
  ibtile = eigenvalues->size[0];
  for (i = 0; i < ibtile; i++) {
    ntilecols = eigenvalues->size[1];
    for (Y_tmp = 0; Y_tmp < ntilecols; Y_tmp++) {
      d->data[Y_tmp + d->size[0] * i] =
          eigenvalues->data[i + eigenvalues->size[0] * Y_tmp];
    }
  }
  emxInit_real_T(&nis, 2);
  /*  Get number of variables (v) and number of clusters (k) */
  /*  Get number of units of the dataset */
  n = blockedSummation(niini, niini->size[0]);
  /*  We assume that niini is a column vector */
  /*  nis is a matrix which replicates in the columns the sizes of the goups */
  /*  First row of nis = size of first group repated v times */
  /*  Second row of nis = size of second group repated v times */
  /*  .... */
  /*  kth row of nis = size of kth group repated v times */
  i = nis->size[0] * nis->size[1];
  nis->size[0] = niini->size[0];
  nis->size[1] = eigenvalues->size[0];
  emxEnsureCapacity_real_T(nis, i);
  nrows = niini->size[0];
  ntilecols = eigenvalues->size[0];
  for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
    ibtile = jtilecol * nrows;
    for (k = 0; k < nrows; k++) {
      nis->data[ibtile + k] = niini->data[k];
    }
  }
  emxInit_real_T(&b_Y_tmp, 2);
  /*  Below is the alternative inefficient code */
  /*  nis = repmat(niini,1,v); */
  /*  niini=niini'; */
  /*  dsor is 2*k*v the ordered set of values in which the restriction objective
   */
  /*  function change the definition The elements in dsor correspond to  the */
  /*  frontiers for the intervals in which this objective function has the same
   */
  /*  definition */
  /*  In other words */
  /*  dsor=(d_{11}, ........, d_{kv},d_{11}/restr, ........, d_{kv}/restr) */
  /*  OLD was */
  /*  dsor=sort([eigenvalues(:);eigenvalues(:)/c])'; */
  ibtile = eigenvalues->size[0] * eigenvalues->size[1];
  b_eigenvalues = *eigenvalues;
  c_eigenvalues = ibtile;
  b_eigenvalues.size = &c_eigenvalues;
  b_eigenvalues.numDimensions = 1;
  b_mrdiv(&b_eigenvalues, restr_data, restr_size, b_Y_tmp);
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    ntilecols = b_Y_tmp->size[1];
  } else if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    ntilecols = 1;
  } else {
    ntilecols = 1;
  }
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    nrows = b_Y_tmp->size[1];
  } else if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    nrows = 1;
  } else {
    nrows = 1;
  }
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    ibtile = b_Y_tmp->size[1];
  } else if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    ibtile = 1;
  } else {
    ibtile = 1;
  }
  emxInit_real_T(&r, 2);
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    jtilecol = b_Y_tmp->size[0];
  } else {
    jtilecol = 0;
  }
  if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    k = eigenvalues->size[0] * eigenvalues->size[1];
  } else {
    k = 0;
  }
  i = r->size[0] * r->size[1];
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    Y_tmp = b_Y_tmp->size[0];
  } else {
    Y_tmp = 0;
  }
  if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    d_eigenvalues = eigenvalues->size[0] * eigenvalues->size[1];
  } else {
    d_eigenvalues = 0;
  }
  r->size[0] = Y_tmp + d_eigenvalues;
  r->size[1] = ibtile;
  emxEnsureCapacity_real_T(r, i);
  for (i = 0; i < ibtile; i++) {
    for (Y_tmp = 0; Y_tmp < jtilecol; Y_tmp++) {
      r->data[Y_tmp + r->size[0] * i] = b_Y_tmp->data[Y_tmp + jtilecol * i];
    }
  }
  for (i = 0; i < ibtile; i++) {
    for (Y_tmp = 0; Y_tmp < k; Y_tmp++) {
      r->data[(Y_tmp + jtilecol) + r->size[0] * i] =
          eigenvalues->data[Y_tmp + k * i];
    }
  }
  emxInit_real_T(&r1, 2);
  e_sort(r);
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    jtilecol = b_Y_tmp->size[0];
  } else {
    jtilecol = 0;
  }
  if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    k = eigenvalues->size[0] * eigenvalues->size[1];
  } else {
    k = 0;
  }
  i = r1->size[0] * r1->size[1];
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    Y_tmp = b_Y_tmp->size[0];
  } else {
    Y_tmp = 0;
  }
  if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    d_eigenvalues = eigenvalues->size[0] * eigenvalues->size[1];
  } else {
    d_eigenvalues = 0;
  }
  r1->size[0] = Y_tmp + d_eigenvalues;
  r1->size[1] = ntilecols;
  emxEnsureCapacity_real_T(r1, i);
  for (i = 0; i < ntilecols; i++) {
    for (Y_tmp = 0; Y_tmp < jtilecol; Y_tmp++) {
      r1->data[Y_tmp + r1->size[0] * i] = b_Y_tmp->data[Y_tmp + jtilecol * i];
    }
  }
  for (i = 0; i < ntilecols; i++) {
    for (Y_tmp = 0; Y_tmp < k; Y_tmp++) {
      r1->data[(Y_tmp + jtilecol) + r1->size[0] * i] =
          eigenvalues->data[Y_tmp + k * i];
    }
  }
  emxInit_real_T(&r2, 2);
  e_sort(r1);
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    jtilecol = b_Y_tmp->size[0];
  } else {
    jtilecol = 0;
  }
  if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    k = eigenvalues->size[0] * eigenvalues->size[1];
  } else {
    k = 0;
  }
  i = r2->size[0] * r2->size[1];
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    Y_tmp = b_Y_tmp->size[0];
  } else {
    Y_tmp = 0;
  }
  if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    d_eigenvalues = eigenvalues->size[0] * eigenvalues->size[1];
  } else {
    d_eigenvalues = 0;
  }
  r2->size[0] = Y_tmp + d_eigenvalues;
  r2->size[1] = nrows;
  emxEnsureCapacity_real_T(r2, i);
  for (i = 0; i < nrows; i++) {
    for (Y_tmp = 0; Y_tmp < jtilecol; Y_tmp++) {
      r2->data[Y_tmp + r2->size[0] * i] = b_Y_tmp->data[Y_tmp + jtilecol * i];
    }
  }
  emxFree_real_T(&b_Y_tmp);
  for (i = 0; i < nrows; i++) {
    for (Y_tmp = 0; Y_tmp < k; Y_tmp++) {
      r2->data[(Y_tmp + jtilecol) + r2->size[0] * i] =
          eigenvalues->data[Y_tmp + k * i];
    }
  }
  emxInit_real_T(&nininmat, 2);
  e_sort(r2);
  i = nininmat->size[0] * nininmat->size[1];
  nininmat->size[0] = r->size[1];
  nininmat->size[1] = r->size[0];
  emxEnsureCapacity_real_T(nininmat, i);
  ibtile = r->size[0];
  for (i = 0; i < ibtile; i++) {
    ntilecols = r->size[1];
    for (Y_tmp = 0; Y_tmp < ntilecols; Y_tmp++) {
      nininmat->data[Y_tmp + nininmat->size[0] * i] =
          r->data[i + r->size[0] * Y_tmp];
    }
  }
  emxInit_real_T(&dsor, 2);
  i = dsor->size[0] * dsor->size[1];
  dsor->size[0] = r1->size[1];
  dsor->size[1] = r2->size[0];
  emxEnsureCapacity_real_T(dsor, i);
  ibtile = r2->size[0] * r1->size[1];
  for (i = 0; i < ibtile; i++) {
    dsor->data[i] = nininmat->data[i];
  }
  emxInit_real_T(&d1, 2);
  kv = (double)eigenvalues->size[1] * (double)eigenvalues->size[0];
  /*  dimsor=length(dsor); */
  dimsor = kv * 2.0;
  /*  d1 is like dsor but contains an additional element which is larger than
   * the largest element of dsor */
  i = d1->size[0] * d1->size[1];
  d1->size[0] = dsor->size[0];
  d1->size[1] = dsor->size[1];
  emxEnsureCapacity_real_T(d1, i);
  ibtile = dsor->size[0] * dsor->size[1];
  for (i = 0; i < ibtile; i++) {
    d1->data[i] = dsor->data[i];
  }
  emxInit_real_T(&ed, 2);
  d1->data[(int)(dimsor + 1.0) - 1] = dsor->data[(int)dimsor - 1] * 2.0;
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
  if ((dsor->size[0] != 0) && (dsor->size[1] != 0)) {
    ntilecols = dsor->size[1];
  } else {
    ntilecols = 0;
  }
  /*  ed is a set with the middle points of these intervals */
  i = ed->size[0] * ed->size[1];
  ed->size[0] = 1;
  ed->size[1] = ntilecols + 1;
  emxEnsureCapacity_real_T(ed, i);
  ed->data[0] = d1->data[0] / 2.0;
  for (i = 0; i < ntilecols; i++) {
    ed->data[i + 1] = (d1->data[d1->size[0] * (i + 1)] + dsor->data[i]) / 2.0;
  }
  emxFree_real_T(&d1);
  emxFree_real_T(&dsor);
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  nrows = nis->size[0] * nis->size[1] - 1;
  ntilecols = 0;
  for (ibtile = 0; ibtile <= nrows; ibtile++) {
    if (nis->data[ibtile] > 0.0) {
      ntilecols++;
    }
  }
  emxInit_int32_T(&r3, 1);
  i = r3->size[0];
  r3->size[0] = ntilecols;
  emxEnsureCapacity_int32_T(r3, i);
  ntilecols = 0;
  for (ibtile = 0; ibtile <= nrows; ibtile++) {
    if (nis->data[ibtile] > 0.0) {
      r3->data[ntilecols] = ibtile + 1;
      ntilecols++;
    }
  }
  emxInit_real_T(&dnis, 1);
  i = dnis->size[0];
  dnis->size[0] = r3->size[0];
  emxEnsureCapacity_real_T(dnis, i);
  ibtile = r3->size[0];
  for (i = 0; i < ibtile; i++) {
    dnis->data[i] = d->data[r3->data[i] - 1];
  }
  maxdnis = b_maximum(dnis);
  if (!(maxdnis <= 1.0E-8)) {
    emxInit_boolean_T(&dltm, 2);
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    maxdnis = fabs(maxdnis / c_minimum(dnis));
    i = dltm->size[0] * dltm->size[1];
    dltm->size[0] = restr_size[0];
    dltm->size[1] = restr_size[1];
    emxEnsureCapacity_boolean_T(dltm, i);
    ibtile = restr_size[0] * restr_size[1];
    for (i = 0; i < ibtile; i++) {
      dltm->data[i] = (maxdnis <= restr_data[i]);
    }
    y = ((dltm->size[0] != 0) && (dltm->size[1] != 0));
    if (y) {
      i = dltm->size[0] * dltm->size[1];
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= i - 1)) {
        if (!dltm->data[k]) {
          y = false;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    emxInit_int32_T(&r4, 1);
    if (y) {
      emxInit_boolean_T(&x, 2);
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      minimum(nis, ed);
      i = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(x, i);
      ibtile = ed->size[1];
      for (i = 0; i < ibtile; i++) {
        x->data[i] = (ed->data[i] == 0.0);
      }
      y = (x->size[1] != 0);
      if (y) {
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k <= x->size[1] - 1)) {
          if (!x->data[k]) {
            y = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      emxFree_boolean_T(&x);
      if (y) {
        nrows = nis->size[0] * nis->size[1] - 1;
        ntilecols = 0;
        for (ibtile = 0; ibtile <= nrows; ibtile++) {
          if (nis->data[ibtile] == 0.0) {
            ntilecols++;
          }
        }
        i = r4->size[0];
        r4->size[0] = ntilecols;
        emxEnsureCapacity_int32_T(r4, i);
        ntilecols = 0;
        for (ibtile = 0; ibtile <= nrows; ibtile++) {
          if (nis->data[ibtile] == 0.0) {
            r4->data[ntilecols] = ibtile + 1;
            ntilecols++;
          }
        }
        maxdnis = blockedSummation(dnis, r3->size[0]) / (double)r3->size[0];
        ibtile = r4->size[0] - 1;
        for (i = 0; i <= ibtile; i++) {
          d->data[r4->data[i] - 1] = maxdnis;
        }
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = d->size[1];
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      ibtile = d->size[0];
      for (i = 0; i < ibtile; i++) {
        ntilecols = d->size[1];
        for (Y_tmp = 0; Y_tmp < ntilecols; Y_tmp++) {
          eigenvalues->data[Y_tmp + eigenvalues->size[0] * i] =
              d->data[i + d->size[0] * Y_tmp];
        }
      }
    } else {
      emxInit_real_T(&C, 2);
      /*  REMARK: the following exploits matrix operations for avoiding */
      /*  loops. Given that the code below is difficult to interpret we */
      /*  refer to routine restreigeneasy for a better comprehension */
      /*  of the underlying algorithm */
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
      ibtile = d->size[0] * d->size[1];
      b_eigenvalues = *d;
      e_eigenvalues = ibtile;
      b_eigenvalues.size = &e_eigenvalues;
      b_eigenvalues.numDimensions = 1;
      e_bsxfun(&b_eigenvalues, ed, dltm);
      ntilecols = ed->size[1];
      nrows = restr_size[1];
      i = C->size[0] * C->size[1];
      C->size[0] = 1;
      C->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(C, i);
      for (ibtile = 0; ibtile < nrows; ibtile++) {
        C->data[0] = 0.0;
        for (k = 0; k < ntilecols; k++) {
          C->data[0] += ed->data[k] * restr_data[k];
        }
      }
      emxInit_boolean_T(&dgtcm, 2);
      emxInit_boolean_T(&r5, 2);
      ibtile = d->size[0] * d->size[1];
      b_eigenvalues = *d;
      f_eigenvalues = ibtile;
      b_eigenvalues.size = &f_eigenvalues;
      b_eigenvalues.numDimensions = 1;
      f_bsxfun(&b_eigenvalues, C, r5);
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = r5->size[0];
      dgtcm->size[1] = r5->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      ibtile = r5->size[0] * r5->size[1];
      for (i = 0; i < ibtile; i++) {
        dgtcm->data[i] = r5->data[i];
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
      i = dnis->size[0];
      dnis->size[0] = niini->size[0];
      emxEnsureCapacity_real_T(dnis, i);
      ibtile = niini->size[0];
      for (i = 0; i < ibtile; i++) {
        dnis->data[i] = niini->data[i] / n;
      }
      i = nininmat->size[0] * nininmat->size[1];
      nininmat->size[0] = dnis->size[0];
      ntilecols = (int)dimsor;
      nininmat->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(nininmat, i);
      nrows = dnis->size[0];
      for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
        ibtile = jtilecol * nrows;
        for (k = 0; k < nrows; k++) {
          nininmat->data[ibtile + k] = dnis->data[k];
        }
      }
      emxInit_real_T(&r6, 3);
      ibtile = d->size[0] * d->size[1];
      ntilecols = eigenvalues->size[1];
      nrows = eigenvalues->size[0];
      b_eigenvalues = *d;
      g_eigenvalues = ibtile;
      b_eigenvalues.size = &g_eigenvalues;
      b_eigenvalues.numDimensions = 1;
      g_bsxfun(dltm, &b_eigenvalues, r);
      b_eigenvalues = *r;
      h_eigenvalues[0] = ntilecols;
      h_eigenvalues[1] = nrows;
      h_eigenvalues[2] = (int)dimsor;
      b_eigenvalues.size = &h_eigenvalues[0];
      b_eigenvalues.numDimensions = 3;
      permute(&b_eigenvalues, r6);
      b_sum(r6, r);
      ibtile = d->size[0] * d->size[1];
      ntilecols = eigenvalues->size[1];
      nrows = eigenvalues->size[0];
      b_eigenvalues = *d;
      i_eigenvalues = ibtile;
      b_eigenvalues.size = &i_eigenvalues;
      b_eigenvalues.numDimensions = 1;
      g_bsxfun(dgtcm, &b_eigenvalues, r1);
      b_eigenvalues = *r1;
      j_eigenvalues[0] = ntilecols;
      j_eigenvalues[1] = nrows;
      j_eigenvalues[2] = (int)dimsor;
      b_eigenvalues.size = &j_eigenvalues[0];
      b_eigenvalues.numDimensions = 3;
      permute(&b_eigenvalues, r6);
      b_sum(r6, r1);
      b_restr_data.data = (double *)&restr_data[0];
      b_restr_data.size = (int *)&restr_size[0];
      b_restr_data.allocatedSize = -1;
      b_restr_data.numDimensions = 2;
      b_restr_data.canFreeData = false;
      mrdiv(r1, &b_restr_data, r2);
      tmp_size[0] = r->size[0];
      tmp_size[1] = r->size[1];
      ibtile = r->size[0] * r->size[1];
      for (i = 0; i < ibtile; i++) {
        tmp_data = (r->data[i] + r2->data[i]) * nininmat->data[i];
      }
      emxInit_real_T(&b_dltm, 2);
      b_tmp_data.data = &tmp_data;
      b_tmp_data.size = &tmp_size[0];
      b_tmp_data.allocatedSize = 1;
      b_tmp_data.numDimensions = 2;
      b_tmp_data.canFreeData = false;
      combineVectorElements(&b_tmp_data, ed);
      i = b_dltm->size[0] * b_dltm->size[1];
      b_dltm->size[0] = dltm->size[0];
      b_dltm->size[1] = dltm->size[1];
      emxEnsureCapacity_real_T(b_dltm, i);
      ibtile = dltm->size[0] * dltm->size[1];
      for (i = 0; i < ibtile; i++) {
        b_dltm->data[i] = (double)dltm->data[i] + (double)dgtcm->data[i];
      }
      emxFree_boolean_T(&dgtcm);
      ntilecols = eigenvalues->size[1];
      nrows = eigenvalues->size[0];
      b_eigenvalues = *b_dltm;
      k_eigenvalues[0] = ntilecols;
      k_eigenvalues[1] = nrows;
      k_eigenvalues[2] = (int)dimsor;
      b_eigenvalues.size = &k_eigenvalues[0];
      b_eigenvalues.numDimensions = 3;
      permute(&b_eigenvalues, r6);
      b_sum(r6, r);
      i = r1->size[0] * r1->size[1];
      r1->size[0] = r->size[0];
      r1->size[1] = r->size[1];
      emxEnsureCapacity_real_T(r1, i);
      ibtile = r->size[0] * r->size[1];
      emxFree_real_T(&b_dltm);
      for (i = 0; i < ibtile; i++) {
        r1->data[i] = r->data[i] * nininmat->data[i];
      }
      emxInit_real_T(&z, 2);
      emxInit_real_T(&b_y, 2);
      combineVectorElements(r1, b_y);
      i = z->size[0] * z->size[1];
      z->size[0] = 1;
      z->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(z, i);
      ibtile = ed->size[1];
      for (i = 0; i < ibtile; i++) {
        z->data[i] = ed->data[i] / b_y->data[i];
      }
      ntilecols = ed->size[1];
      ibtile = ed->size[1];
      for (i = 0; i < ibtile; i++) {
        solmp_data = ed->data[i] / b_y->data[i];
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
      ibtile = d->size[0] * d->size[1];
      b_eigenvalues = *d;
      l_eigenvalues = ibtile;
      b_eigenvalues.size = &l_eigenvalues;
      b_eigenvalues.numDimensions = 1;
      i_bsxfun(&b_eigenvalues, z, r5);
      /*  cs is c*solmp */
      nrows = restr_size[1];
      i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = 1;
      b_y->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(b_y, i);
      for (ibtile = 0; ibtile < nrows; ibtile++) {
        b_y->data[0] = 0.0;
        for (k = 0; k < ntilecols; k++) {
          b_y->data[0] += solmp_data * restr_data[0];
        }
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
      ntilecols = z->size[1];
      nrows = restr_size[1];
      i = C->size[0] * C->size[1];
      C->size[0] = 1;
      C->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(C, i);
      for (ibtile = 0; ibtile < nrows; ibtile++) {
        C->data[0] = 0.0;
        for (k = 0; k < ntilecols; k++) {
          C->data[0] += z->data[k] * restr_data[k];
        }
      }
      ibtile = d->size[0] * d->size[1];
      ntilecols = (int)kv;
      b_eigenvalues = *d;
      m_eigenvalues = ibtile;
      b_eigenvalues.size = &m_eigenvalues;
      b_eigenvalues.numDimensions = 1;
      e_bsxfun(&b_eigenvalues, z, r5);
      r7 = *r5;
      sizes[0] = (int)kv;
      sizes[1] = (int)dimsor;
      r7.size = &sizes[0];
      r7.numDimensions = 2;
      h_bsxfun(&r7, z, r);
      ibtile = d->size[0] * d->size[1];
      b_eigenvalues = *d;
      n_eigenvalues = ibtile;
      b_eigenvalues.size = &n_eigenvalues;
      b_eigenvalues.numDimensions = 1;
      j_bsxfun(&b_eigenvalues, b_y, r5);
      ibtile = d->size[0] * d->size[1];
      b_eigenvalues = *d;
      o_eigenvalues = ibtile;
      b_eigenvalues.size = &o_eigenvalues;
      b_eigenvalues.numDimensions = 1;
      f_bsxfun(&b_eigenvalues, b_y, dltm);
      i = r1->size[0] * r1->size[1];
      r1->size[0] = (int)kv;
      r1->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(r1, i);
      ibtile = restr_size[1];
      emxFree_real_T(&b_y);
      for (i = 0; i < ibtile; i++) {
        for (Y_tmp = 0; Y_tmp < ntilecols; Y_tmp++) {
          r1->data[Y_tmp] = C->data[0];
        }
      }
      emxFree_real_T(&C);
      emxFree_boolean_T(&r5);
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      b_repmat(d, b_dv, r6);
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      i = nininmat->size[0] * nininmat->size[1];
      nininmat->size[0] = nis->size[0];
      nininmat->size[1] = nis->size[1];
      emxEnsureCapacity_real_T(nininmat, i);
      ibtile = nis->size[0] * nis->size[1];
      for (i = 0; i < ibtile; i++) {
        nininmat->data[i] = nis->data[i] / n;
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      b_repmat(nininmat, b_dv, r6);
      b_tmp_size[0] = r6->size[0];
      b_tmp_size[1] = r6->size[1];
      b_tmp_size[2] = r6->size[2];
      emxFree_real_T(&r6);
      emxInit_real_T(&r8, 3);
      c_sum(b_tmp_size, (double *)&c_tmp_data, c_tmp_size);
      d_tmp_data.data = &c_tmp_data;
      d_tmp_data.size = &c_tmp_size[0];
      d_tmp_data.allocatedSize = 1;
      d_tmp_data.numDimensions = 3;
      d_tmp_data.canFreeData = false;
      d_sum(&d_tmp_data, r8);
      obj_size[0] = 1;
      obj_size[1] = 1;
      obj_size[2] = r8->size[2];
      ibtile = r8->size[2];
      for (i = 0; i < ibtile; i++) {
        obj_data = r8->data[i];
      }
      emxFree_real_T(&r8);
      b_obj_data.data = &obj_data;
      b_obj_data.size = &obj_size[0];
      b_obj_data.allocatedSize = 1;
      b_obj_data.numDimensions = 3;
      b_obj_data.canFreeData = false;
      f_minimum(&b_obj_data, &maxdnis, &ntilecols);
      /*  m is the optimum value for the eigenvalues procedure */
      maxdnis = z->data[ntilecols - 1];
      /*  plot(1:dimsor,obj) */
      /*  Based on the m value we get the restricted eigenvalues */
      /*  The new eigenvalues are equal to */
      /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
      /*  m                   if old eigenvalues < m */
      /*  cm                  if old eigenvalues > c*m */
      /*  Old inefficient code */
      /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
      nrows = eigenvalues->size[0] * eigenvalues->size[1] - 1;
      ntilecols = 0;
      emxFree_real_T(&z);
      for (ibtile = 0; ibtile <= nrows; ibtile++) {
        if (eigenvalues->data[ibtile] < maxdnis) {
          ntilecols++;
        }
      }
      i = r4->size[0];
      r4->size[0] = ntilecols;
      emxEnsureCapacity_int32_T(r4, i);
      ntilecols = 0;
      for (ibtile = 0; ibtile <= nrows; ibtile++) {
        if (eigenvalues->data[ibtile] < maxdnis) {
          r4->data[ntilecols] = ibtile + 1;
          ntilecols++;
        }
      }
      ibtile = r4->size[0];
      for (i = 0; i < ibtile; i++) {
        eigenvalues->data[r4->data[i] - 1] = solmp_data;
      }
      i = d->size[0] * d->size[1];
      d->size[0] = restr_size[0];
      d->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(d, i);
      ibtile = restr_size[0] * restr_size[1];
      for (i = 0; i < ibtile; i++) {
        d->data[i] = restr_data[i] * solmp_data;
      }
      nrows = eigenvalues->size[0] * eigenvalues->size[1] - 1;
      ntilecols = 0;
      for (ibtile = 0; ibtile <= nrows; ibtile++) {
        if (eigenvalues->data[ibtile] > d->data[ibtile]) {
          ntilecols++;
        }
        if (eigenvalues->data[ibtile] > d->data[ibtile]) {
          e_tmp_data = ibtile + 1;
        }
      }
      for (i = 0; i < ntilecols; i++) {
        eigenvalues->data[e_tmp_data - 1] = d->data[0];
      }
    }
    emxFree_int32_T(&r4);
    emxFree_boolean_T(&dltm);
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
  }
  emxFree_real_T(&r2);
  emxFree_real_T(&r1);
  emxFree_real_T(&r);
  emxFree_int32_T(&r3);
  emxFree_real_T(&nininmat);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&nis);
  emxFree_real_T(&d);
}

/* End of code generation (restreigen.c) */
