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
#include "permute.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_restreigen(emxArray_real_T *eigenvalues, double restr, double tol,
                  double userepmat)
{
  emxArray_boolean_T d_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_int32_T *r2;
  emxArray_real_T c_dltm;
  emxArray_real_T *b_dltm;
  emxArray_real_T *b_x;
  emxArray_real_T *c;
  emxArray_real_T *c_x;
  emxArray_real_T *d1;
  emxArray_real_T *dnis;
  emxArray_real_T *ed;
  emxArray_real_T *ee;
  emxArray_real_T *nis;
  emxArray_real_T *oo;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *rr;
  emxArray_real_T *solmp;
  emxArray_real_T *x;
  double b_dv[3];
  double dimsor;
  double maxdnis;
  int b_iv[3];
  int iv1[3];
  int iv2[3];
  int b_eigenvalues[2];
  int acoef;
  int b_acoef;
  int b_i;
  int b_k;
  int bcoef;
  int i;
  int i1;
  int k;
  int outsize_idx_1;
  int varargin_3;
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
  acoef = outsize_idx_1 - 1;
  outsize_idx_1 = 0;
  for (b_i = 0; b_i <= acoef; b_i++) {
    outsize_idx_1++;
  }
  emxInit_real_T(&dnis, 2);
  i = dnis->size[0] * dnis->size[1];
  dnis->size[0] = 1;
  dnis->size[1] = outsize_idx_1;
  emxEnsureCapacity_real_T(dnis, i);
  for (b_i = 0; b_i <= acoef; b_i++) {
    dnis->data[b_i] = eigenvalues->data[b_i];
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
        varargin_3 = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dltm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dltm->data[b_k + dltm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] < ed->data[varargin_3]);
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
        varargin_3 = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dgtcm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dgtcm->data[b_k + dgtcm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] > ed->data[varargin_3]);
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
    emxInit_real_T(&c, 3);
    b_i = eigenvalues->size[0];
    c_dltm = *b_dltm;
    b_iv[0] = 1;
    b_iv[1] = b_i;
    b_iv[2] = (int)dimsor;
    c_dltm.size = &b_iv[0];
    c_dltm.numDimensions = 3;
    b_permute(&c_dltm, c);
    e_sum(c, rr);
    /*  Matrix version of s(:,mp)=sum(d.*(d<edmp),2) for mp=1, ..., dimsor */
    outsize_idx_1 = eigenvalues->size[0];
    i = x->size[0];
    x->size[0] = outsize_idx_1;
    emxEnsureCapacity_real_T(x, i);
    for (i = 0; i < outsize_idx_1; i++) {
      x->data[i] = eigenvalues->data[i];
    }
    emxInit_real_T(&r, 2);
    b_i = eigenvalues->size[0];
    d_bsxfun(dltm, x, r);
    c_dltm = *r;
    iv1[0] = 1;
    iv1[1] = b_i;
    iv1[2] = (int)dimsor;
    c_dltm.size = &iv1[0];
    c_dltm.numDimensions = 3;
    b_permute(&c_dltm, c);
    e_sum(c, ed);
    /*  Matrix version of t(:,mp)=sum(d.*(d>edmpc),2) for mp=1, ..., dimsor */
    outsize_idx_1 = eigenvalues->size[0];
    i = x->size[0];
    x->size[0] = outsize_idx_1;
    emxEnsureCapacity_real_T(x, i);
    for (i = 0; i < outsize_idx_1; i++) {
      x->data[i] = eigenvalues->data[i];
    }
    b_i = eigenvalues->size[0];
    d_bsxfun(dgtcm, x, r);
    c_dltm = *r;
    iv2[0] = 1;
    iv2[1] = b_i;
    iv2[2] = (int)dimsor;
    c_dltm.size = &iv2[0];
    c_dltm.numDimensions = 3;
    b_permute(&c_dltm, c);
    e_sum(c, d1);
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
      for (varargin_3 = 0; varargin_3 < outsize_idx_1; varargin_3++) {
        solmp->data[varargin_3] = ed->data[varargin_3];
      }
      i = rr->size[0] * rr->size[1];
      rr->size[0] = 1;
      emxEnsureCapacity_real_T(rr, i);
      outsize_idx_1 = rr->size[1];
      i = d1->size[0] * d1->size[1];
      d1->size[0] = 1;
      d1->size[1] = rr->size[1];
      emxEnsureCapacity_real_T(d1, i);
      for (varargin_3 = 0; varargin_3 < outsize_idx_1; varargin_3++) {
        d1->data[varargin_3] = rr->data[varargin_3];
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
      for (varargin_3 = 0; varargin_3 < outsize_idx_1; varargin_3++) {
        solmp->data[varargin_3] = dnis->data[varargin_3];
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
      for (varargin_3 = 0; varargin_3 < outsize_idx_1; varargin_3++) {
        d1->data[varargin_3] = dnis->data[varargin_3];
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
        varargin_3 = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dltm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dltm->data[b_k + dltm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] < solmp->data[varargin_3]);
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
        varargin_3 = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dgtcm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dgtcm->data[b_k + dgtcm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] >= solmp->data[varargin_3]);
        }
      }
    }
    if (eigenvalues->size[0] == 1) {
      outsize_idx_1 = eigenvalues->size[0];
    } else {
      outsize_idx_1 = eigenvalues->size[0];
    }
    i = c->size[0] * c->size[1] * c->size[2];
    c->size[0] = 1;
    c->size[1] = outsize_idx_1;
    c->size[2] = (int)dimsor;
    emxEnsureCapacity_real_T(c, i);
    if (outsize_idx_1 != 0) {
      i = (int)dimsor - 1;
      if (0 <= (int)dimsor - 1) {
        b_acoef = (eigenvalues->size[0] != 1);
        bcoef = (eigenvalues->size[0] != 1);
      }
      for (k = 0; k <= i; k++) {
        i1 = c->size[1] - 1;
        if (0 <= c->size[1] - 1) {
          b_i = eigenvalues->size[0];
        }
        for (b_k = 0; b_k <= i1; b_k++) {
          c->data[b_k + c->size[1] * k] =
              (double)dgtcm->data[b_acoef * b_k + b_i * k] *
              eigenvalues->data[bcoef * b_k];
        }
      }
    }
    i = dgtcm->size[0] * dgtcm->size[1];
    dgtcm->size[0] = eigenvalues->size[0];
    dgtcm->size[1] = d1->size[1];
    emxEnsureCapacity_boolean_T(dgtcm, i);
    if ((eigenvalues->size[0] != 0) && (d1->size[1] != 0)) {
      outsize_idx_1 = (d1->size[1] != 1);
      i = d1->size[1] - 1;
      for (k = 0; k <= i; k++) {
        varargin_3 = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = dgtcm->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          dgtcm->data[b_k + dgtcm->size[0] * k] =
              (eigenvalues->data[acoef * b_k] <= d1->data[varargin_3]);
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
        varargin_3 = outsize_idx_1 * k;
        acoef = (eigenvalues->size[0] != 1);
        i1 = b_c->size[0] - 1;
        for (b_k = 0; b_k <= i1; b_k++) {
          b_c->data[b_k + b_c->size[0] * k] =
              (eigenvalues->data[acoef * b_k] > d1->data[varargin_3]);
        }
      }
    }
    outsize_idx_1 = eigenvalues->size[0];
    d_dltm = *dltm;
    b_eigenvalues[0] = outsize_idx_1;
    b_eigenvalues[1] = (int)dimsor;
    d_dltm.size = &b_eigenvalues[0];
    d_dltm.numDimensions = 2;
    e_bsxfun(&d_dltm, solmp, b_dltm);
    b_i = eigenvalues->size[0];
    outsize_idx_1 = eigenvalues->size[0];
    i = r->size[0] * r->size[1];
    r->size[0] = outsize_idx_1;
    r->size[1] = d1->size[1];
    emxEnsureCapacity_real_T(r, i);
    acoef = d1->size[1];
    emxFree_boolean_T(&dltm);
    for (i = 0; i < acoef; i++) {
      for (i1 = 0; i1 < outsize_idx_1; i1++) {
        r->data[i1 + r->size[0] * i] = d1->data[i];
      }
    }
    emxInit_real_T(&ee, 3);
    i = ee->size[0] * ee->size[1] * ee->size[2];
    ee->size[0] = 1;
    ee->size[1] = b_i;
    ee->size[2] = (int)dimsor;
    emxEnsureCapacity_real_T(ee, i);
    outsize_idx_1 = b_i * (int)dimsor;
    for (i = 0; i < outsize_idx_1; i++) {
      ee->data[i] = (b_dltm->data[i] + c->data[i] * (double)dgtcm->data[i]) +
                    r->data[i] * (double)b_c->data[i];
    }
    emxFree_real_T(&r);
    emxFree_real_T(&b_dltm);
    emxFree_boolean_T(&b_c);
    emxFree_boolean_T(&dgtcm);
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
      d_repmat(nis, b_dv, oo);
      i = d1->size[0] * d1->size[1];
      d1->size[0] = 1;
      d1->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(d1, i);
      acoef = eigenvalues->size[0];
      for (i = 0; i < acoef; i++) {
        d1->data[i] = eigenvalues->data[i];
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      d_repmat(d1, b_dv, c);
      acoef = oo->size[1] * oo->size[2];
      i = oo->size[0] * oo->size[1] * oo->size[2];
      oo->size[0] = 1;
      emxEnsureCapacity_real_T(oo, i);
      for (i = 0; i < acoef; i++) {
        oo->data[i] *= b_x->data[i] + c->data[i] / ee->data[i];
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
      i = d1->size[0] * d1->size[1];
      d1->size[0] = 1;
      d1->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(d1, i);
      acoef = eigenvalues->size[0];
      for (i = 0; i < acoef; i++) {
        d1->data[i] = eigenvalues->data[i];
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
      f_bsxfun(d1, c_x, c);
      i = c_x->size[0] * c_x->size[1] * c_x->size[2];
      c_x->size[0] = 1;
      c_x->size[1] = b_x->size[1];
      c_x->size[2] = b_x->size[2];
      emxEnsureCapacity_real_T(c_x, i);
      acoef = b_x->size[1] * b_x->size[2];
      for (i = 0; i < acoef; i++) {
        c_x->data[i] = b_x->data[i] + c->data[i];
      }
      f_bsxfun(nis, c_x, oo);
      emxFree_real_T(&c_x);
    }
    emxFree_real_T(&b_x);
    emxFree_real_T(&ee);
    /*  obj is a vector of size dimsor */
    /*   obj=sum(sum(oo,1)); */
    if (oo->size[1] == 0) {
      c->size[0] = 1;
      c->size[1] = 0;
      c->size[2] = oo->size[2];
    } else {
      outsize_idx_1 = 1;
      k = 3;
      if (oo->size[2] == 1) {
        k = 2;
      }
      for (b_k = 2; b_k <= k; b_k++) {
        outsize_idx_1 *= oo->size[b_k - 1];
      }
      i = c->size[0] * c->size[1] * c->size[2];
      c->size[0] = 1;
      c->size[1] = oo->size[1];
      c->size[2] = oo->size[2];
      emxEnsureCapacity_real_T(c, i);
      for (varargin_3 = 0; varargin_3 < outsize_idx_1; varargin_3++) {
        c->data[varargin_3] = oo->data[varargin_3];
      }
    }
    emxFree_real_T(&oo);
    emxInit_real_T(&r1, 3);
    d_sum(c, r1);
    f_minimum(r1, &dimsor, &varargin_3);
    /*  m is the optimum value for the eigenvalues procedure */
    dimsor = solmp->data[varargin_3 - 1];
    /*  plot(1:dimsor,obj) */
    /*  Based on the m value we get the restricted eigenvalues */
    /*  The new eigenvalues are equal to */
    /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
    /*  m                   if old eigenvalues < m */
    /*  cm                  if old eigenvalues > c*m */
    /*  Old inefficient code */
    /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
    acoef = eigenvalues->size[0];
    emxFree_real_T(&r1);
    emxFree_real_T(&c);
    for (b_i = 0; b_i < acoef; b_i++) {
      if (eigenvalues->data[b_i] < dimsor) {
        eigenvalues->data[b_i] = dimsor;
      }
    }
    acoef = eigenvalues->size[0] - 1;
    outsize_idx_1 = 0;
    for (b_i = 0; b_i <= acoef; b_i++) {
      if (eigenvalues->data[b_i] > restr * dimsor) {
        outsize_idx_1++;
      }
    }
    emxInit_int32_T(&r2, 1);
    i = r2->size[0];
    r2->size[0] = outsize_idx_1;
    emxEnsureCapacity_int32_T(r2, i);
    outsize_idx_1 = 0;
    for (b_i = 0; b_i <= acoef; b_i++) {
      if (eigenvalues->data[b_i] > restr * dimsor) {
        r2->data[outsize_idx_1] = b_i + 1;
        outsize_idx_1++;
      }
    }
    acoef = r2->size[0];
    for (i = 0; i < acoef; i++) {
      eigenvalues->data[r2->data[i] - 1] = restr * solmp->data[varargin_3 - 1];
    }
    emxFree_int32_T(&r2);
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

void c_restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                  double restr, double tol, double userepmat)
{
  emxArray_boolean_T b_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T b_ss;
  emxArray_real_T *b_x;
  emxArray_real_T *c;
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
  int e_eigenvalues[2];
  int acoef;
  int b_i;
  int b_k;
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
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm->data[b_k + dltm->size[0] * k] =
                (d->data[acoef * b_k] < ed->data[ibtile]);
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
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm->data[b_k + dgtcm->size[0] * k] =
                (d->data[acoef * b_k] > ed->data[ibtile]);
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
      b_i = eigenvalues->size[1];
      acoef = (int)dimsor;
      b_ss = *ss;
      b_eigenvalues[0] = b_i;
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
      b_i = eigenvalues->size[1];
      d_bsxfun(dltm, d, nininmat);
      b_ss = *nininmat;
      c_eigenvalues[0] = b_i;
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
      b_i = eigenvalues->size[1];
      d_bsxfun(dgtcm, d, nininmat);
      b_ss = *nininmat;
      d_eigenvalues[0] = b_i;
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
        for (b_k = 0; b_k < acoef; b_k++) {
          ibtile = b_k * nrows;
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
        g_bsxfun(c_ss, ninin, nininmat);
        combineVectorElements(nininmat, ed);
        g_bsxfun(rr, ninin, nininmat);
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
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm->data[b_k + dltm->size[0] * k] =
                (d->data[acoef * b_k] < ed->data[ibtile]);
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
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm->data[b_k + dgtcm->size[0] * k] =
                (d->data[acoef * b_k] >= ed->data[ibtile]);
          }
        }
      }
      emxInit_real_T(&c, 3);
      i = c->size[0] * c->size[1] * c->size[2];
      nrows = d->size[0];
      ibtile = eigenvalues->size[1];
      if (nrows < ibtile) {
        ibtile = nrows;
      }
      if (d->size[0] == 1) {
        c->size[0] = eigenvalues->size[1];
      } else if (eigenvalues->size[1] == 1) {
        c->size[0] = d->size[0];
      } else if (d->size[0] == eigenvalues->size[1]) {
        c->size[0] = eigenvalues->size[1];
      } else {
        c->size[0] = ibtile;
      }
      c->size[1] = 1;
      c->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(c, i);
      nrows = d->size[0];
      ibtile = eigenvalues->size[1];
      if (nrows < ibtile) {
        ibtile = nrows;
      }
      if (d->size[0] == 1) {
        ibtile = eigenvalues->size[1];
      } else if (eigenvalues->size[1] == 1) {
        ibtile = d->size[0];
      } else if (d->size[0] == eigenvalues->size[1]) {
        ibtile = eigenvalues->size[1];
      }
      if (ibtile != 0) {
        i = (int)dimsor - 1;
        for (k = 0; k <= i; k++) {
          acoef = (eigenvalues->size[1] != 1);
          nrows = (d->size[0] != 1);
          i1 = c->size[0] - 1;
          if (0 <= c->size[0] - 1) {
            b_i = eigenvalues->size[1];
          }
          for (b_k = 0; b_k <= i1; b_k++) {
            c->data[b_k + c->size[0] * c->size[1] * k] =
                (double)dgtcm->data[acoef * b_k + b_i * k] *
                d->data[nrows * b_k];
          }
        }
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0];
      dgtcm->size[1] = d1->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      if ((d->size[0] != 0) && (d1->size[1] != 0)) {
        nrows = (d1->size[1] != 1);
        i = d1->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm->data[b_k + dgtcm->size[0] * k] =
                (d->data[acoef * b_k] <= d1->data[ibtile]);
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
          for (b_k = 0; b_k <= i1; b_k++) {
            b_c->data[b_k + b_c->size[0] * k] =
                (d->data[acoef * b_k] > d1->data[ibtile]);
          }
        }
      }
      b_i = eigenvalues->size[1];
      b_dltm = *dltm;
      e_eigenvalues[0] = b_i;
      e_eigenvalues[1] = (int)dimsor;
      b_dltm.size = &e_eigenvalues[0];
      b_dltm.numDimensions = 2;
      e_bsxfun(&b_dltm, ed, nininmat);
      b_i = eigenvalues->size[1];
      nrows = eigenvalues->size[1];
      i = ss->size[0] * ss->size[1];
      ss->size[0] = nrows;
      ss->size[1] = d1->size[1];
      emxEnsureCapacity_real_T(ss, i);
      ibtile = d1->size[1];
      emxFree_boolean_T(&dltm);
      for (i = 0; i < ibtile; i++) {
        for (i1 = 0; i1 < nrows; i1++) {
          ss->data[i1 + ss->size[0] * i] = d1->data[i];
        }
      }
      emxInit_real_T(&ee, 3);
      i = ee->size[0] * ee->size[1] * ee->size[2];
      ee->size[0] = b_i;
      ee->size[1] = 1;
      ee->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(ee, i);
      nrows = b_i * (int)dimsor;
      for (i = 0; i < nrows; i++) {
        ee->data[i] =
            (nininmat->data[i] + c->data[i] * (double)dgtcm->data[i]) +
            ss->data[i] * (double)b_c->data[i];
      }
      emxFree_boolean_T(&b_c);
      emxFree_real_T(&c);
      emxFree_real_T(&nininmat);
      emxFree_real_T(&ss);
      emxFree_boolean_T(&dgtcm);
      emxInit_real_T(&oo, 3);
      emxInit_real_T(&x, 3);
      emxInit_real_T(&r1, 3);
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
        e_repmat(nis, b_dv, oo);
        b_dv[0] = 1.0;
        b_dv[1] = 1.0;
        b_dv[2] = dimsor;
        e_repmat(d, b_dv, r1);
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
        h_bsxfun(d, b_x, r1);
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
        h_bsxfun(nis, b_x, oo);
        emxFree_real_T(&b_x);
      }
      emxFree_real_T(&r1);
      emxFree_real_T(&x);
      emxFree_real_T(&ee);
      emxInit_real_T(&y, 3);
      emxInit_real_T(&c_x, 3);
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      f_sum(oo, c_x);
      nrows = 1;
      k = 3;
      emxFree_real_T(&oo);
      if (c_x->size[2] == 1) {
        k = 2;
      }
      for (b_k = 3; b_k <= k; b_k++) {
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
                double restr)
{
  emxArray_boolean_T c_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_boolean_T *x;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r7;
  emxArray_real_T b_d;
  emxArray_real_T *b_dltm;
  emxArray_real_T *b_x;
  emxArray_real_T *c;
  emxArray_real_T *c_c;
  emxArray_real_T *d;
  emxArray_real_T *d1;
  emxArray_real_T *dnis;
  emxArray_real_T *ed;
  emxArray_real_T *ee;
  emxArray_real_T *nininmat;
  emxArray_real_T *nis;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *r6;
  double b_dv[3];
  double dimsor;
  double kv;
  double maxdnis;
  double n;
  int b_eigenvalues[3];
  int c_eigenvalues[3];
  int d_eigenvalues[3];
  int b_kv[2];
  int acoef;
  int b_i;
  int b_k;
  int bcoef;
  int c_d;
  int c_k;
  int d_d;
  int eigenvalues_idx_0;
  int eigenvalues_idx_1;
  int i;
  int i1;
  int i2;
  int ibtile;
  int k;
  int nrows;
  int ntilecols;
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
  nrows = eigenvalues->size[0];
  for (i = 0; i < nrows; i++) {
    ntilecols = eigenvalues->size[1];
    for (i1 = 0; i1 < ntilecols; i1++) {
      d->data[i1 + d->size[0] * i] =
          eigenvalues->data[i + eigenvalues->size[0] * i1];
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
  for (acoef = 0; acoef < ntilecols; acoef++) {
    ibtile = acoef * nrows;
    for (k = 0; k < nrows; k++) {
      nis->data[ibtile + k] = niini->data[k];
    }
  }
  emxInit_real_T(&dnis, 1);
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
  i = dnis->size[0];
  dnis->size[0] = eigenvalues->size[0] * eigenvalues->size[1] +
                  eigenvalues->size[0] * eigenvalues->size[1];
  emxEnsureCapacity_real_T(dnis, i);
  nrows = eigenvalues->size[0] * eigenvalues->size[1];
  for (i = 0; i < nrows; i++) {
    dnis->data[i] = eigenvalues->data[i] / restr;
  }
  nrows = eigenvalues->size[0] * eigenvalues->size[1];
  for (i = 0; i < nrows; i++) {
    dnis->data[i + eigenvalues->size[0] * eigenvalues->size[1]] =
        eigenvalues->data[i];
  }
  emxInit_real_T(&d1, 2);
  c_sort(dnis);
  kv = (double)eigenvalues->size[1] * (double)eigenvalues->size[0];
  /*  dimsor=length(dsor); */
  dimsor = kv * 2.0;
  /*  d1 is like dsor but contains an additional element which is larger than
   * the largest element of dsor */
  i = d1->size[0] * d1->size[1];
  d1->size[0] = 1;
  d1->size[1] = dnis->size[0];
  emxEnsureCapacity_real_T(d1, i);
  nrows = dnis->size[0];
  for (i = 0; i < nrows; i++) {
    d1->data[i] = dnis->data[i];
  }
  emxInit_real_T(&ed, 2);
  d1->data[(int)(dimsor + 1.0) - 1] = dnis->data[(int)dimsor - 1] * 2.0;
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
  /*  ed is a set with the middle points of these intervals */
  nrows = dnis->size[0] - 1;
  i = ed->size[0] * ed->size[1];
  ed->size[0] = 1;
  ed->size[1] = dnis->size[0] + 1;
  emxEnsureCapacity_real_T(ed, i);
  ed->data[0] = d1->data[0] / 2.0;
  for (i = 0; i <= nrows; i++) {
    ed->data[i + 1] = (d1->data[i + 1] + dnis->data[i]) / 2.0;
  }
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  nrows = nis->size[0] * nis->size[1] - 1;
  ntilecols = 0;
  for (b_i = 0; b_i <= nrows; b_i++) {
    if (nis->data[b_i] > 0.0) {
      ntilecols++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = ntilecols;
  emxEnsureCapacity_int32_T(r, i);
  ntilecols = 0;
  for (b_i = 0; b_i <= nrows; b_i++) {
    if (nis->data[b_i] > 0.0) {
      r->data[ntilecols] = b_i + 1;
      ntilecols++;
    }
  }
  i = dnis->size[0];
  dnis->size[0] = r->size[0];
  emxEnsureCapacity_real_T(dnis, i);
  nrows = r->size[0];
  for (i = 0; i < nrows; i++) {
    dnis->data[i] = d->data[r->data[i] - 1];
  }
  maxdnis = b_maximum(dnis);
  if (!(maxdnis <= 1.0E-8)) {
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    emxInit_int32_T(&r1, 1);
    if (fabs(maxdnis / c_minimum(dnis)) <= restr) {
      emxInit_boolean_T(&x, 2);
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      minimum(nis, d1);
      i = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = d1->size[1];
      emxEnsureCapacity_boolean_T(x, i);
      nrows = d1->size[1];
      for (i = 0; i < nrows; i++) {
        x->data[i] = (d1->data[i] == 0.0);
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
        for (b_i = 0; b_i <= nrows; b_i++) {
          if (nis->data[b_i] == 0.0) {
            ntilecols++;
          }
        }
        i = r1->size[0];
        r1->size[0] = ntilecols;
        emxEnsureCapacity_int32_T(r1, i);
        ntilecols = 0;
        for (b_i = 0; b_i <= nrows; b_i++) {
          if (nis->data[b_i] == 0.0) {
            r1->data[ntilecols] = b_i + 1;
            ntilecols++;
          }
        }
        n = blockedSummation(dnis, r->size[0]) / (double)r->size[0];
        nrows = r1->size[0] - 1;
        for (i = 0; i <= nrows; i++) {
          d->data[r1->data[i] - 1] = n;
        }
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = d->size[1];
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      nrows = d->size[0];
      for (i = 0; i < nrows; i++) {
        ntilecols = d->size[1];
        for (i1 = 0; i1 < ntilecols; i1++) {
          eigenvalues->data[i1 + eigenvalues->size[0] * i] =
              d->data[i + d->size[0] * i1];
        }
      }
    } else {
      emxInit_boolean_T(&dltm, 2);
      /*  REMARK: the following exploits matrix operations for avoiding */
      /*  loops. Given that the code below is difficult to interpret we */
      /*  refer to routine restreigeneasy for a better comprehension */
      /*  of the underlying algorithm */
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = d->size[0] * d->size[1];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      if (d->size[0] * d->size[1] != 0) {
        ntilecols = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dltm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm->data[b_k + dltm->size[0] * k] =
                (d->data[ibtile * b_k] < ed->data[nrows]);
          }
        }
      }
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      nrows = ed->size[1] - 1;
      for (i = 0; i <= nrows; i++) {
        ed->data[i] *= restr;
      }
      emxInit_boolean_T(&dgtcm, 2);
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0] * d->size[1];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      if (d->size[0] * d->size[1] != 0) {
        ntilecols = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm->data[b_k + dgtcm->size[0] * k] =
                (d->data[ibtile * b_k] > ed->data[nrows]);
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
      i = dnis->size[0];
      dnis->size[0] = niini->size[0];
      emxEnsureCapacity_real_T(dnis, i);
      nrows = niini->size[0];
      for (i = 0; i < nrows; i++) {
        dnis->data[i] = niini->data[i] / n;
      }
      emxInit_real_T(&nininmat, 2);
      i = nininmat->size[0] * nininmat->size[1];
      nininmat->size[0] = dnis->size[0];
      ntilecols = (int)dimsor;
      nininmat->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(nininmat, i);
      nrows = dnis->size[0];
      for (acoef = 0; acoef < ntilecols; acoef++) {
        ibtile = acoef * nrows;
        for (k = 0; k < nrows; k++) {
          nininmat->data[ibtile + k] = dnis->data[k];
        }
      }
      emxInit_real_T(&r2, 2);
      emxInit_real_T(&b_dltm, 2);
      emxInit_real_T(&r3, 2);
      emxInit_real_T(&r4, 3);
      ntilecols = d->size[0] * d->size[1];
      eigenvalues_idx_0 = eigenvalues->size[1];
      eigenvalues_idx_1 = eigenvalues->size[0];
      b_d = *d;
      c_d = ntilecols;
      b_d.size = &c_d;
      b_d.numDimensions = 1;
      d_bsxfun(dltm, &b_d, r3);
      b_d = *r3;
      b_eigenvalues[0] = eigenvalues_idx_0;
      b_eigenvalues[1] = eigenvalues_idx_1;
      b_eigenvalues[2] = (int)dimsor;
      b_d.size = &b_eigenvalues[0];
      b_d.numDimensions = 3;
      permute(&b_d, r4);
      b_sum(r4, b_dltm);
      ntilecols = d->size[0] * d->size[1];
      eigenvalues_idx_0 = eigenvalues->size[1];
      eigenvalues_idx_1 = eigenvalues->size[0];
      b_d = *d;
      d_d = ntilecols;
      b_d.size = &d_d;
      b_d.numDimensions = 1;
      d_bsxfun(dgtcm, &b_d, r3);
      b_d = *r3;
      c_eigenvalues[0] = eigenvalues_idx_0;
      c_eigenvalues[1] = eigenvalues_idx_1;
      c_eigenvalues[2] = (int)dimsor;
      b_d.size = &c_eigenvalues[0];
      b_d.numDimensions = 3;
      permute(&b_d, r4);
      b_sum(r4, r3);
      i = r2->size[0] * r2->size[1];
      r2->size[0] = b_dltm->size[0];
      r2->size[1] = b_dltm->size[1];
      emxEnsureCapacity_real_T(r2, i);
      nrows = b_dltm->size[0] * b_dltm->size[1];
      for (i = 0; i < nrows; i++) {
        r2->data[i] =
            (b_dltm->data[i] + r3->data[i] / restr) * nininmat->data[i];
      }
      combineVectorElements(r2, ed);
      i = b_dltm->size[0] * b_dltm->size[1];
      b_dltm->size[0] = dltm->size[0];
      b_dltm->size[1] = dltm->size[1];
      emxEnsureCapacity_real_T(b_dltm, i);
      nrows = dltm->size[0] * dltm->size[1];
      emxFree_real_T(&r2);
      for (i = 0; i < nrows; i++) {
        b_dltm->data[i] = (double)dltm->data[i] + (double)dgtcm->data[i];
      }
      eigenvalues_idx_0 = eigenvalues->size[1];
      eigenvalues_idx_1 = eigenvalues->size[0];
      b_d = *b_dltm;
      d_eigenvalues[0] = eigenvalues_idx_0;
      d_eigenvalues[1] = eigenvalues_idx_1;
      d_eigenvalues[2] = (int)dimsor;
      b_d.size = &d_eigenvalues[0];
      b_d.numDimensions = 3;
      permute(&b_d, r4);
      b_sum(r4, b_dltm);
      i = r3->size[0] * r3->size[1];
      r3->size[0] = b_dltm->size[0];
      r3->size[1] = b_dltm->size[1];
      emxEnsureCapacity_real_T(r3, i);
      nrows = b_dltm->size[0] * b_dltm->size[1];
      for (i = 0; i < nrows; i++) {
        r3->data[i] = b_dltm->data[i] * nininmat->data[i];
      }
      emxFree_real_T(&nininmat);
      combineVectorElements(r3, d1);
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      nrows = ed->size[1] - 1;
      for (i = 0; i <= nrows; i++) {
        ed->data[i] /= d1->data[i];
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
      d1->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(d1, i);
      nrows = ed->size[1];
      for (i = 0; i < nrows; i++) {
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
      dltm->size[0] = d->size[0] * d->size[1];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      if ((d->size[0] * d->size[1] != 0) && (ed->size[1] != 0)) {
        ntilecols = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dltm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm->data[b_k + dltm->size[0] * k] =
                (d->data[ibtile * b_k] < ed->data[nrows]);
          }
        }
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0] * d->size[1];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      if ((d->size[0] * d->size[1] != 0) && (ed->size[1] != 0)) {
        ntilecols = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm->data[b_k + dgtcm->size[0] * k] =
                (d->data[ibtile * b_k] >= ed->data[nrows]);
          }
        }
      }
      emxInit_real_T(&c, 3);
      i = c->size[0] * c->size[1] * c->size[2];
      nrows = d->size[0];
      ibtile = eigenvalues->size[1];
      if (nrows < ibtile) {
        ibtile = nrows;
      }
      if (d->size[0] == 1) {
        c->size[0] = eigenvalues->size[1];
      } else if (eigenvalues->size[1] == 1) {
        c->size[0] = d->size[0];
      } else if (d->size[0] == eigenvalues->size[1]) {
        c->size[0] = eigenvalues->size[1];
      } else {
        c->size[0] = ibtile;
      }
      nrows = d->size[1];
      ibtile = eigenvalues->size[0];
      if (nrows < ibtile) {
        ibtile = nrows;
      }
      if (d->size[1] == 1) {
        c->size[1] = eigenvalues->size[0];
      } else if (eigenvalues->size[0] == 1) {
        c->size[1] = d->size[1];
      } else if (eigenvalues->size[0] == d->size[1]) {
        c->size[1] = eigenvalues->size[0];
      } else {
        c->size[1] = ibtile;
      }
      c->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(c, i);
      nrows = d->size[0];
      ibtile = eigenvalues->size[1];
      if (nrows < ibtile) {
        ibtile = nrows;
      }
      nrows = d->size[1];
      ntilecols = eigenvalues->size[0];
      if (nrows < ntilecols) {
        ntilecols = nrows;
      }
      if (d->size[0] == 1) {
        ibtile = eigenvalues->size[1];
      } else if (eigenvalues->size[1] == 1) {
        ibtile = d->size[0];
      } else if (d->size[0] == eigenvalues->size[1]) {
        ibtile = eigenvalues->size[1];
      }
      if (d->size[1] == 1) {
        ntilecols = eigenvalues->size[0];
      } else if (eigenvalues->size[0] == 1) {
        ntilecols = d->size[1];
      } else if (eigenvalues->size[0] == d->size[1]) {
        ntilecols = eigenvalues->size[0];
      }
      if ((ibtile != 0) && (ntilecols != 0)) {
        i = (int)dimsor - 1;
        for (k = 0; k <= i; k++) {
          ibtile = (eigenvalues->size[0] != 1);
          ntilecols = (d->size[1] != 1);
          i1 = c->size[1] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            nrows = ibtile * b_k;
            b_i = ntilecols * b_k;
            acoef = (eigenvalues->size[1] != 1);
            bcoef = (d->size[0] != 1);
            i2 = c->size[0] - 1;
            if (0 <= c->size[0] - 1) {
              eigenvalues_idx_0 = eigenvalues->size[1];
              eigenvalues_idx_1 = eigenvalues->size[0];
            }
            for (c_k = 0; c_k <= i2; c_k++) {
              c->data[(c_k + c->size[0] * b_k) + c->size[0] * c->size[1] * k] =
                  (double)
                      dgtcm->data[(acoef * c_k + eigenvalues_idx_0 * nrows) +
                                  eigenvalues_idx_0 * eigenvalues_idx_1 * k] *
                  d->data[bcoef * c_k + d->size[0] * b_i];
            }
          }
        }
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0] * d->size[1];
      dgtcm->size[1] = d1->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      if ((d->size[0] * d->size[1] != 0) && (d1->size[1] != 0)) {
        ntilecols = (d1->size[1] != 1);
        i = d1->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm->data[b_k + dgtcm->size[0] * k] =
                (d->data[ibtile * b_k] <= d1->data[nrows]);
          }
        }
      }
      emxInit_boolean_T(&b_c, 2);
      i = b_c->size[0] * b_c->size[1];
      b_c->size[0] = d->size[0] * d->size[1];
      b_c->size[1] = d1->size[1];
      emxEnsureCapacity_boolean_T(b_c, i);
      if ((d->size[0] * d->size[1] != 0) && (d1->size[1] != 0)) {
        ntilecols = (d1->size[1] != 1);
        i = d1->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = b_c->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            b_c->data[b_k + b_c->size[0] * k] =
                (d->data[ibtile * b_k] > d1->data[nrows]);
          }
        }
      }
      ntilecols = (int)kv;
      c_dltm = *dltm;
      b_kv[0] = (int)kv;
      b_kv[1] = (int)dimsor;
      c_dltm.size = &b_kv[0];
      c_dltm.numDimensions = 2;
      e_bsxfun(&c_dltm, ed, b_dltm);
      eigenvalues_idx_0 = eigenvalues->size[1];
      eigenvalues_idx_1 = eigenvalues->size[0];
      i = r3->size[0] * r3->size[1];
      r3->size[0] = (int)kv;
      r3->size[1] = d1->size[1];
      emxEnsureCapacity_real_T(r3, i);
      nrows = d1->size[1];
      emxFree_boolean_T(&dltm);
      for (i = 0; i < nrows; i++) {
        for (i1 = 0; i1 < ntilecols; i1++) {
          r3->data[i1 + r3->size[0] * i] = d1->data[i];
        }
      }
      emxInit_real_T(&ee, 3);
      i = ee->size[0] * ee->size[1] * ee->size[2];
      ee->size[0] = eigenvalues_idx_0;
      ee->size[1] = eigenvalues_idx_1;
      ee->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(ee, i);
      ntilecols = eigenvalues_idx_0 * eigenvalues_idx_1 * (int)dimsor;
      for (i = 0; i < ntilecols; i++) {
        ee->data[i] = (b_dltm->data[i] + c->data[i] * (double)dgtcm->data[i]) +
                      r3->data[i] * (double)b_c->data[i];
      }
      emxFree_real_T(&r3);
      emxFree_boolean_T(&b_c);
      emxFree_boolean_T(&dgtcm);
      emxInit_real_T(&b_x, 3);
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      i = b_x->size[0] * b_x->size[1] * b_x->size[2];
      b_x->size[0] = ee->size[0];
      b_x->size[1] = ee->size[1];
      b_x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(b_x, i);
      nrows = ee->size[0] * ee->size[1] * ee->size[2];
      for (i = 0; i < nrows; i++) {
        b_x->data[i] = ee->data[i];
      }
      ntilecols = ee->size[0] * ee->size[1] * ee->size[2];
      for (k = 0; k < ntilecols; k++) {
        b_x->data[k] = log(b_x->data[k]);
      }
      i = b_dltm->size[0] * b_dltm->size[1];
      b_dltm->size[0] = nis->size[0];
      b_dltm->size[1] = nis->size[1];
      emxEnsureCapacity_real_T(b_dltm, i);
      nrows = nis->size[0] * nis->size[1];
      for (i = 0; i < nrows; i++) {
        b_dltm->data[i] = nis->data[i] / n;
      }
      emxInit_real_T(&c_c, 3);
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      b_repmat(b_dltm, b_dv, c);
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      b_repmat(d, b_dv, r4);
      i = c_c->size[0] * c_c->size[1] * c_c->size[2];
      c_c->size[0] = c->size[0];
      c_c->size[1] = c->size[1];
      c_c->size[2] = c->size[2];
      emxEnsureCapacity_real_T(c_c, i);
      nrows = c->size[0] * c->size[1] * c->size[2];
      emxFree_real_T(&b_dltm);
      for (i = 0; i < nrows; i++) {
        c_c->data[i] = c->data[i] * (b_x->data[i] + r4->data[i] / ee->data[i]);
      }
      emxFree_real_T(&r4);
      emxFree_real_T(&b_x);
      emxFree_real_T(&c);
      emxFree_real_T(&ee);
      emxInit_real_T(&r5, 3);
      emxInit_real_T(&r6, 3);
      c_sum(c_c, r5);
      d_sum(r5, r6);
      f_minimum(r6, &n, &ibtile);
      /*  m is the optimum value for the eigenvalues procedure */
      n = ed->data[ibtile - 1];
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
      emxFree_real_T(&r6);
      emxFree_real_T(&r5);
      emxFree_real_T(&c_c);
      for (b_i = 0; b_i <= nrows; b_i++) {
        if (eigenvalues->data[b_i] < n) {
          ntilecols++;
        }
      }
      i = r1->size[0];
      r1->size[0] = ntilecols;
      emxEnsureCapacity_int32_T(r1, i);
      ntilecols = 0;
      for (b_i = 0; b_i <= nrows; b_i++) {
        if (eigenvalues->data[b_i] < n) {
          r1->data[ntilecols] = b_i + 1;
          ntilecols++;
        }
      }
      nrows = r1->size[0];
      for (i = 0; i < nrows; i++) {
        eigenvalues->data[r1->data[i] - 1] = n;
      }
      nrows = eigenvalues->size[0] * eigenvalues->size[1] - 1;
      ntilecols = 0;
      for (b_i = 0; b_i <= nrows; b_i++) {
        if (eigenvalues->data[b_i] > restr * n) {
          ntilecols++;
        }
      }
      emxInit_int32_T(&r7, 1);
      i = r7->size[0];
      r7->size[0] = ntilecols;
      emxEnsureCapacity_int32_T(r7, i);
      ntilecols = 0;
      for (b_i = 0; b_i <= nrows; b_i++) {
        if (eigenvalues->data[b_i] > restr * n) {
          r7->data[ntilecols] = b_i + 1;
          ntilecols++;
        }
      }
      nrows = r7->size[0];
      for (i = 0; i < nrows; i++) {
        eigenvalues->data[r7->data[i] - 1] = restr * ed->data[ibtile - 1];
      }
      emxFree_int32_T(&r7);
    }
    emxFree_int32_T(&r1);
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
  }
  emxFree_int32_T(&r);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&d1);
  emxFree_real_T(&nis);
  emxFree_real_T(&d);
}

/* End of code generation (restreigen.c) */
