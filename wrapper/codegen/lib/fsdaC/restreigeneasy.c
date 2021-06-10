/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restreigeneasy.c
 *
 * Code generation for function 'restreigeneasy'
 *
 */

/* Include files */
#include "restreigeneasy.h"
#include "blockedSummation.h"
#include "combineVectorElements.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "minOrMax.h"
#include "mrdivide_helper.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void restreigeneasy(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                    const double restr_data[], const int restr_size[2])
{
  emxArray_boolean_T b_d_data;
  emxArray_boolean_T *b_x;
  emxArray_boolean_T *x;
  emxArray_int32_T *b_r;
  emxArray_int32_T *r1;
  emxArray_real_T b_eigenvalues;
  emxArray_real_T d_d_data;
  emxArray_real_T nis_data;
  emxArray_real_T *b_Y_tmp;
  emxArray_real_T *b_t;
  emxArray_real_T *b_y;
  emxArray_real_T *c_t;
  emxArray_real_T *c_x;
  emxArray_real_T *d;
  emxArray_real_T *d1;
  emxArray_real_T *dnis;
  emxArray_real_T *dsor;
  emxArray_real_T *ed;
  emxArray_real_T *nis;
  emxArray_real_T *obj;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *s;
  emxArray_real_T *t;
  double b_nis_data[2];
  double d_data[2];
  double e_data[2];
  double b_d;
  double dimsor;
  double maxdnis;
  double n;
  int b_d_size[2];
  int d_size[2];
  int nis_size[2];
  int Y_tmp;
  int b_loop_ub;
  int c_eigenvalues;
  int c_loop_ub;
  int d_eigenvalues;
  int d_loop_ub;
  int e_loop_ub;
  int f_loop_ub;
  int g_loop_ub;
  int h_loop_ub;
  int i;
  int i1;
  int ibtile;
  int jtilecol;
  int k;
  int loop_ub;
  int nrows;
  int ntilecols;
  bool c_d_data[2];
  bool exitg1;
  bool y;
  emxInit_real_T(&d, 2);
  /* restreigeneasy computes eigenvalues restriction (without Dykstra algorithm)
   */
  /*  */
  /* <a href="matlab: docsearchFS('restreigeneasy')">Link to the help
   * function</a> */
  /*  */
  /*    restreigeneasy restricts the eigenvalues according to the constraint */
  /*    specified in scalar restr. This function is a readable and */
  /*    understandble (but sometimes slower) version of routine restreigen. */
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
  /*   Output: */
  /*  */
  /*  */
  /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues. */
  /*                        The ratio between two possible elements in matrix */
  /*                        out is not greater than restr */
  /*  */
  /*  See also restreigen, tclust, restrdeter, tclustreg */
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
  /* <a href="matlab: docsearchFS('restreigeneasy')">Link to the help
   * function</a> */
  /*  */
  /* $LastChangedDate:: 2018-01-24 13:44:34 #$: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*    %% Compiting time of three implementations of the eigenvalues
   * restriction. */
  /*  */
  /*     vmin  = 300; vmax  = 300; vstep = 1; vv = vmin:vstep:vmax; */
  /*     kmin  = 4;   kmax  = 16;  kstep = 4; kk = kmin:kstep:kmax; */
  /*     cycles = 1; */
  /*  */
  /*     t=zeros(floor((vmax-vmin)/vstep),length(kk)); t_easy=t; t2_easy=t; */
  /*     ik=0; */
  /*     for k = kk */
  /*         ik=ik+1; */
  /*  */
  /*         iv=0; */
  /*         for v=vv */
  /*             disp(['p=',num2str(v),' - k=',num2str(k)]); */
  /*             iv = iv+1; */
  /*  */
  /*             eigenvalues=abs(10*randn(v,k)); */
  /*             niini=randi(1000,k,1); */
  /*  */
  /*             t0=tic; */
  /*             for s=1:cycles, out  =
   * restreigen(eigenvalues,niini,1.1,1e-8);end */
  /*             t(iv,ik) = toc(t0); */
  /*  */
  /*             t1=tic; */
  /*             for s=1:cycles, out1 =
   * restreigenmemopt(eigenvalues,niini,1.1,1e-8);end */
  /*             t_easy(iv,ik)=toc(t1); */
  /*  */
  /*             t2=tic; */
  /*             for s=1:cycles, out2 =
   * restreigeneasy(eigenvalues,niini,1.1,1e-8);end */
  /*             t2_easy(iv,ik)=toc(t2); */
  /*  */
  /*             if sum(sum(out2-out1))>0 */
  /*                 disp('Zob!'); */
  /*             end */
  /*         end */
  /*     end */
  /*  */
  /*     figure; */
  /*     vvv = 1; */
  /*     h2=plot(1:ik,t_easy(vvv,:),'-r',1:ik,t2_easy(vvv,:),'-k',1:ik,t(vvv,:),'-b');
   */
  /*     set(h2,'LineWidth',1.5); */
  /*     legend('restreigenmemopt' , 'restreigeneasy',
   * 'restreigen','FontSize',20); */
  /*     xlabel('Number of groups k','FontSize',18); */
  /*     set(gca,'Xtick',1:ik,'XtickLabel',kk,'XTickLabelRotation',45); */
  /*     title(['Execution time for v=' num2str(vv(vvv))],'FontSize',20); */
  /*  */
  /* } */
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
  /*    out=restreigeneasy(eigenvalues,niini,1.1) */
  /*    disp('Input matrix of unrestricted eigenvalues') */
  /*    disp(eigenvalues) */
  /*    disp('Output matrix of restricted eigenvalues') */
  /*    disp(out) */
  /*    disp('Ratio between largest and smallest unrestricted eigenvalues') */
  /*    disp(max(max(eigenvalues))/min(min(eigenvalues))) */
  /*    disp('Ratio between largest and smallest restricted eigenvalues') */
  /*    disp(max(max(out))/min(min(out))) */
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
  /*         % if MATLAB version is at least R2013b   */
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
  /*         % Uncomment the line below if you want  */
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
  nrows = eigenvalues->size[0] * eigenvalues->size[1];
  b_eigenvalues = *eigenvalues;
  c_eigenvalues = nrows;
  b_eigenvalues.size = &c_eigenvalues;
  b_eigenvalues.numDimensions = 1;
  b_mrdiv(&b_eigenvalues, restr_data, restr_size, b_Y_tmp);
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    nrows = b_Y_tmp->size[1];
  } else if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    nrows = 1;
  } else {
    nrows = 1;
  }
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    ntilecols = b_Y_tmp->size[1];
  } else if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    ntilecols = 1;
  } else {
    ntilecols = 1;
  }
  if ((b_Y_tmp->size[0] != 0) && (b_Y_tmp->size[1] != 0)) {
    ibtile = b_Y_tmp->size[1];
  } else if (eigenvalues->size[0] * eigenvalues->size[1] != 0) {
    ibtile = 1;
  } else {
    ibtile = 1;
  }
  emxInit_real_T(&t, 2);
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
  i = t->size[0] * t->size[1];
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
  t->size[0] = Y_tmp + d_eigenvalues;
  t->size[1] = ibtile;
  emxEnsureCapacity_real_T(t, i);
  for (i = 0; i < ibtile; i++) {
    for (Y_tmp = 0; Y_tmp < jtilecol; Y_tmp++) {
      t->data[Y_tmp + t->size[0] * i] = b_Y_tmp->data[Y_tmp + jtilecol * i];
    }
  }
  for (i = 0; i < ibtile; i++) {
    for (Y_tmp = 0; Y_tmp < k; Y_tmp++) {
      t->data[(Y_tmp + jtilecol) + t->size[0] * i] =
          eigenvalues->data[Y_tmp + k * i];
    }
  }
  emxInit_real_T(&s, 2);
  e_sort(t);
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
  i = s->size[0] * s->size[1];
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
  s->size[0] = Y_tmp + d_eigenvalues;
  s->size[1] = nrows;
  emxEnsureCapacity_real_T(s, i);
  for (i = 0; i < nrows; i++) {
    for (Y_tmp = 0; Y_tmp < jtilecol; Y_tmp++) {
      s->data[Y_tmp + s->size[0] * i] = b_Y_tmp->data[Y_tmp + jtilecol * i];
    }
  }
  for (i = 0; i < nrows; i++) {
    for (Y_tmp = 0; Y_tmp < k; Y_tmp++) {
      s->data[(Y_tmp + jtilecol) + s->size[0] * i] =
          eigenvalues->data[Y_tmp + k * i];
    }
  }
  emxInit_real_T(&r, 2);
  e_sort(s);
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
  r->size[1] = ntilecols;
  emxEnsureCapacity_real_T(r, i);
  for (i = 0; i < ntilecols; i++) {
    for (Y_tmp = 0; Y_tmp < jtilecol; Y_tmp++) {
      r->data[Y_tmp + r->size[0] * i] = b_Y_tmp->data[Y_tmp + jtilecol * i];
    }
  }
  for (i = 0; i < ntilecols; i++) {
    for (Y_tmp = 0; Y_tmp < k; Y_tmp++) {
      r->data[(Y_tmp + jtilecol) + r->size[0] * i] =
          eigenvalues->data[Y_tmp + k * i];
    }
  }
  emxInit_real_T(&b_t, 2);
  e_sort(r);
  i = b_t->size[0] * b_t->size[1];
  b_t->size[0] = t->size[1];
  b_t->size[1] = t->size[0];
  emxEnsureCapacity_real_T(b_t, i);
  ibtile = t->size[0];
  for (i = 0; i < ibtile; i++) {
    ntilecols = t->size[1];
    for (Y_tmp = 0; Y_tmp < ntilecols; Y_tmp++) {
      b_t->data[Y_tmp + b_t->size[0] * i] = t->data[i + t->size[0] * Y_tmp];
    }
  }
  emxInit_real_T(&dsor, 2);
  i = dsor->size[0] * dsor->size[1];
  dsor->size[0] = s->size[1];
  dsor->size[1] = r->size[0];
  emxEnsureCapacity_real_T(dsor, i);
  ibtile = r->size[0] * s->size[1];
  for (i = 0; i < ibtile; i++) {
    dsor->data[i] = b_t->data[i];
  }
  emxInit_real_T(&d1, 2);
  /*  dimsor=length(dsor); */
  dimsor = (double)eigenvalues->size[1] * (double)eigenvalues->size[0] * 2.0;
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
  ntilecols = nis->size[0] * nis->size[1] - 1;
  nrows = 0;
  for (ibtile = 0; ibtile <= ntilecols; ibtile++) {
    if (nis->data[ibtile] > 0.0) {
      nrows++;
    }
  }
  emxInit_int32_T(&b_r, 1);
  i = b_r->size[0];
  b_r->size[0] = nrows;
  emxEnsureCapacity_int32_T(b_r, i);
  nrows = 0;
  for (ibtile = 0; ibtile <= ntilecols; ibtile++) {
    if (nis->data[ibtile] > 0.0) {
      b_r->data[nrows] = ibtile + 1;
      nrows++;
    }
  }
  emxInit_real_T(&dnis, 1);
  i = dnis->size[0];
  dnis->size[0] = b_r->size[0];
  emxEnsureCapacity_real_T(dnis, i);
  ibtile = b_r->size[0];
  for (i = 0; i < ibtile; i++) {
    dnis->data[i] = d->data[b_r->data[i] - 1];
  }
  maxdnis = c_maximum(dnis);
  if (!(maxdnis <= 1.0E-8)) {
    emxInit_boolean_T(&x, 2);
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    maxdnis = fabs(maxdnis / c_minimum(dnis));
    i = x->size[0] * x->size[1];
    x->size[0] = restr_size[0];
    x->size[1] = restr_size[1];
    emxEnsureCapacity_boolean_T(x, i);
    jtilecol = restr_size[0] * restr_size[1];
    for (i = 0; i < jtilecol; i++) {
      x->data[i] = (maxdnis <= restr_data[i]);
    }
    y = ((x->size[0] != 0) && (x->size[1] != 0));
    if (y) {
      i = x->size[0] * x->size[1];
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k <= i - 1)) {
        if (!x->data[k]) {
          y = false;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    emxInit_int32_T(&r1, 1);
    emxInit_real_T(&r2, 2);
    if (y) {
      emxInit_boolean_T(&b_x, 2);
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      minimum(nis, r2);
      i = b_x->size[0] * b_x->size[1];
      b_x->size[0] = 1;
      b_x->size[1] = r2->size[1];
      emxEnsureCapacity_boolean_T(b_x, i);
      ibtile = r2->size[1];
      for (i = 0; i < ibtile; i++) {
        b_x->data[i] = (r2->data[i] == 0.0);
      }
      y = (b_x->size[1] != 0);
      if (y) {
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k <= b_x->size[1] - 1)) {
          if (!b_x->data[k]) {
            y = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      emxFree_boolean_T(&b_x);
      if (y) {
        ntilecols = nis->size[0] * nis->size[1] - 1;
        nrows = 0;
        for (ibtile = 0; ibtile <= ntilecols; ibtile++) {
          if (nis->data[ibtile] == 0.0) {
            nrows++;
          }
        }
        i = r1->size[0];
        r1->size[0] = nrows;
        emxEnsureCapacity_int32_T(r1, i);
        nrows = 0;
        for (ibtile = 0; ibtile <= ntilecols; ibtile++) {
          if (nis->data[ibtile] == 0.0) {
            r1->data[nrows] = ibtile + 1;
            nrows++;
          }
        }
        maxdnis = blockedSummation(dnis, b_r->size[0]) / (double)b_r->size[0];
        ibtile = r1->size[0] - 1;
        for (i = 0; i <= ibtile; i++) {
          d->data[r1->data[i] - 1] = maxdnis;
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
      /*  ----------------------------------------------------------------------
       */
      /*  t, s and r are matrices of size k-times-2*k*v+1 */
      /*  Each column of matrices r s and t is associated to a candidate */
      /*  value of m */
      /*  Each row of matrices r s and t is associated to a group */
      /*  The final candidate value of m will be obtained as a weighted sum */
      /*  of the rows (the weights are given by the group sizes) */
      /*  Each element of r, s and t respectively contains */
      /*  r = \sum_{l=1}^v (d_l <m) + \sum_{l=1}^v (d_l >cm) */
      /*  s = \sum_{l=1}^v (d_l <m) */
      /*  t = \sum_{l=1}^v (d_l >c m) */
      i = t->size[0] * t->size[1];
      t->size[0] = eigenvalues->size[1];
      nrows = (int)dimsor;
      t->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(t, i);
      ibtile = eigenvalues->size[1] * (int)dimsor;
      for (i = 0; i < ibtile; i++) {
        t->data[i] = 0.0;
      }
      i = s->size[0] * s->size[1];
      s->size[0] = eigenvalues->size[1];
      s->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(s, i);
      ibtile = eigenvalues->size[1] * (int)dimsor;
      for (i = 0; i < ibtile; i++) {
        s->data[i] = 0.0;
      }
      i = r->size[0] * r->size[1];
      r->size[0] = eigenvalues->size[1];
      r->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(r, i);
      ibtile = eigenvalues->size[1] * (int)dimsor;
      for (i = 0; i < ibtile; i++) {
        r->data[i] = 0.0;
      }
      /*  sol and obj are two column vectors of size 2*k*v+1 */
      /*  sol contains all the candidates solutions of m */
      /*  Vector sol contains the */
      /*  critical values of the interval functions which define the m */
      /*  objective function we use the centers of the interval to get a */
      /*  definition for the function in each interval this set with the */
      /*  critical values (in the array sol) contains the optimum m value */
      i = dnis->size[0];
      dnis->size[0] = (int)dimsor;
      emxEnsureCapacity_real_T(dnis, i);
      for (i = 0; i < nrows; i++) {
        dnis->data[i] = 0.0;
      }
      emxInit_real_T(&obj, 1);
      /*  obj is the vector which contains the function which must be */
      /*  minized */
      /*  There is one value of the objective function for each candidate */
      /*  solution m */
      /*  The optimum value of obj is the smallest */
      /*  The optmimum m is the one associated to the smallest value of */
      /*  function obj */
      i = obj->size[0];
      obj->size[0] = (int)dimsor;
      emxEnsureCapacity_real_T(obj, i);
      for (i = 0; i < nrows; i++) {
        obj->data[i] = 0.0;
      }
      /*  The candidates values of mp which minimize the objective function are
       */
      i = (int)(2.0 * (double)eigenvalues->size[1] *
                    (double)eigenvalues->size[0] +
                1.0);
      if (0 <= i - 1) {
        loop_ub = jtilecol;
        b_loop_ub = d->size[0] * d->size[1];
        c_loop_ub = d->size[0] * d->size[1];
        d_loop_ub = d->size[0] * d->size[1];
        e_loop_ub = niini->size[0];
        f_loop_ub = d->size[0] * d->size[1];
        g_loop_ub = restr_size[0];
        h_loop_ub = nis->size[0] * nis->size[1];
      }
      emxInit_real_T(&b_y, 2);
      emxInit_real_T(&c_x, 1);
      emxInit_real_T(&c_t, 1);
      for (d_eigenvalues = 0; d_eigenvalues < i; d_eigenvalues++) {
        Y_tmp = b_y->size[0] * b_y->size[1];
        b_y->size[0] = restr_size[0];
        b_y->size[1] = restr_size[1];
        emxEnsureCapacity_real_T(b_y, Y_tmp);
        maxdnis = ed->data[d_eigenvalues];
        for (Y_tmp = 0; Y_tmp < loop_ub; Y_tmp++) {
          b_y->data[Y_tmp] = maxdnis * restr_data[Y_tmp];
        }
        /*  Computation of r s and t */
        /*  Note that the sum goes from 1 to v */
        maxdnis = ed->data[d_eigenvalues];
        Y_tmp = x->size[0] * x->size[1];
        x->size[0] = d->size[0];
        x->size[1] = d->size[1];
        emxEnsureCapacity_boolean_T(x, Y_tmp);
        b_d_size[0] = d->size[0];
        b_d_size[1] = d->size[1];
        for (Y_tmp = 0; Y_tmp < b_loop_ub; Y_tmp++) {
          x->data[Y_tmp] = (d->data[Y_tmp] < maxdnis);
          c_d_data[Y_tmp] = (d->data[Y_tmp] > b_y->data[Y_tmp]);
        }
        c_combineVectorElements(x, b_r);
        b_d_data.data = &c_d_data[0];
        b_d_data.size = &b_d_size[0];
        b_d_data.allocatedSize = 2;
        b_d_data.numDimensions = 2;
        b_d_data.canFreeData = false;
        c_combineVectorElements(&b_d_data, r1);
        ibtile = b_r->size[0];
        for (Y_tmp = 0; Y_tmp < ibtile; Y_tmp++) {
          r->data[Y_tmp + r->size[0] * d_eigenvalues] =
              (double)b_r->data[Y_tmp] + (double)r1->data[Y_tmp];
        }
        maxdnis = ed->data[d_eigenvalues];
        Y_tmp = b_t->size[0] * b_t->size[1];
        b_t->size[0] = d->size[0];
        b_t->size[1] = d->size[1];
        emxEnsureCapacity_real_T(b_t, Y_tmp);
        for (Y_tmp = 0; Y_tmp < c_loop_ub; Y_tmp++) {
          b_t->data[Y_tmp] =
              d->data[Y_tmp] * (double)(d->data[Y_tmp] < maxdnis);
        }
        sum(b_t, c_t);
        ibtile = c_t->size[0];
        for (Y_tmp = 0; Y_tmp < ibtile; Y_tmp++) {
          s->data[Y_tmp + s->size[0] * d_eigenvalues] = c_t->data[Y_tmp];
        }
        d_size[0] = d->size[0];
        d_size[1] = d->size[1];
        for (Y_tmp = 0; Y_tmp < d_loop_ub; Y_tmp++) {
          d_data[Y_tmp] =
              d->data[Y_tmp] * (double)(d->data[Y_tmp] > b_y->data[Y_tmp]);
        }
        d_d_data.data = &d_data[0];
        d_d_data.size = &d_size[0];
        d_d_data.allocatedSize = 2;
        d_d_data.numDimensions = 2;
        d_d_data.canFreeData = false;
        sum(&d_d_data, c_t);
        ibtile = c_t->size[0];
        for (Y_tmp = 0; Y_tmp < ibtile; Y_tmp++) {
          t->data[Y_tmp + t->size[0] * d_eigenvalues] = c_t->data[Y_tmp];
        }
        /*  The natural loop is clearly slower */
        /*              for i=1:k */
        /*                  di=d(i,:); */
        /*                  r(i,mp)=sum(di<edmp)+sum(di>edmpc); */
        /*                  s(i,mp)=sum(di.*(di<edmp)); */
        /*                  t(i,mp)=sum(di.*(di>edmpc)); */
        /*              end */
        /*  Note that here the sum goes from 1 to k */
        /*  sol(mp) \sum_{j=1}^k n_j (s_j +t_j/c)  / \sum_{j=1}^k n_j r_j */
        ibtile = t->size[0];
        Y_tmp = c_t->size[0];
        c_t->size[0] = t->size[0];
        emxEnsureCapacity_real_T(c_t, Y_tmp);
        for (Y_tmp = 0; Y_tmp < ibtile; Y_tmp++) {
          c_t->data[Y_tmp] = t->data[Y_tmp + t->size[0] * d_eigenvalues];
        }
        b_mrdiv(c_t, restr_data, restr_size, b_Y_tmp);
        Y_tmp = c_t->size[0];
        c_t->size[0] = niini->size[0];
        emxEnsureCapacity_real_T(c_t, Y_tmp);
        for (Y_tmp = 0; Y_tmp < e_loop_ub; Y_tmp++) {
          c_t->data[Y_tmp] = niini->data[Y_tmp] / n;
        }
        Y_tmp = c_x->size[0];
        c_x->size[0] = c_t->size[0];
        emxEnsureCapacity_real_T(c_x, Y_tmp);
        ibtile = c_t->size[0];
        for (Y_tmp = 0; Y_tmp < ibtile; Y_tmp++) {
          c_x->data[Y_tmp] =
              c_t->data[Y_tmp] * (s->data[Y_tmp + s->size[0] * d_eigenvalues] +
                                  b_Y_tmp->data[Y_tmp]);
        }
        ibtile = c_t->size[0];
        for (Y_tmp = 0; Y_tmp < ibtile; Y_tmp++) {
          c_t->data[Y_tmp] *= r->data[Y_tmp + r->size[0] * d_eigenvalues];
        }
        maxdnis = blockedSummation(c_x, c_x->size[0]) /
                  blockedSummation(c_t, c_t->size[0]);
        dnis->data[d_eigenvalues] = maxdnis;
        /*  solnum(mp)=sum(niini/n.*(s(:,mp)+t(:,mp)/c)); */
        /*  solden(mp)=(sum(niini/n.*(r(:,mp)))); */
        Y_tmp = b_y->size[0] * b_y->size[1];
        b_y->size[0] = restr_size[0];
        b_y->size[1] = restr_size[1];
        emxEnsureCapacity_real_T(b_y, Y_tmp);
        for (Y_tmp = 0; Y_tmp < loop_ub; Y_tmp++) {
          b_y->data[Y_tmp] = restr_data[Y_tmp] * maxdnis;
        }
        d_size[0] = d->size[0];
        d_size[1] = d->size[1];
        for (Y_tmp = 0; Y_tmp < f_loop_ub; Y_tmp++) {
          d_data[Y_tmp] = (d->data[Y_tmp] > b_y->data[Y_tmp]);
        }
        nrows = d_size[1];
        for (Y_tmp = 0; Y_tmp < g_loop_ub; Y_tmp++) {
          ibtile = d_size[1];
          for (i1 = 0; i1 < ibtile; i1++) {
            dimsor = 0.0;
            ntilecols = restr_size[1];
            for (k = 0; k < ntilecols; k++) {
              dimsor += restr_data[Y_tmp] * maxdnis * d_data[0];
            }
            b_d = d->data[Y_tmp];
            e_data[Y_tmp] = (maxdnis * (double)(b_d < maxdnis) +
                             b_d * (double)(b_d >= maxdnis) *
                                 (double)(b_d <= b_y->data[Y_tmp])) +
                            dimsor;
          }
        }
        /*  sol (mp) contains \sum_{j=1}^k \sum_{l=1}^v ( log d_{jl} + d_{jl}^m
         * / d_{jl} */
        /*  equation (3.4) */
        d_size[0] = restr_size[0];
        d_size[1] = nrows;
        nrows *= restr_size[0];
        if (0 <= nrows - 1) {
          memcpy(&d_data[0], &e_data[0], nrows * sizeof(double));
        }
        for (k = 0; k < nrows; k++) {
          d_data[k] = log(d_data[k]);
        }
        nis_size[0] = nis->size[0];
        nis_size[1] = nis->size[1];
        for (Y_tmp = 0; Y_tmp < h_loop_ub; Y_tmp++) {
          b_nis_data[Y_tmp] = nis->data[Y_tmp] / n *
                              (d_data[Y_tmp] + d->data[Y_tmp] / e_data[Y_tmp]);
        }
        nis_data.data = &b_nis_data[0];
        nis_data.size = &nis_size[0];
        nis_data.allocatedSize = 2;
        nis_data.numDimensions = 2;
        nis_data.canFreeData = false;
        combineVectorElements(&nis_data, r2);
        obj->data[d_eigenvalues] = d_combineVectorElements(r2);
      }
      emxFree_real_T(&c_t);
      emxFree_real_T(&c_x);
      d_minimum(obj, &maxdnis, &nrows);
      /*  m is the optimum value for the eigenvalues procedure */
      i = b_y->size[0] * b_y->size[1];
      b_y->size[0] = restr_size[0];
      b_y->size[1] = restr_size[1];
      emxEnsureCapacity_real_T(b_y, i);
      emxFree_real_T(&obj);
      for (i = 0; i < jtilecol; i++) {
        b_y->data[i] = restr_data[i] * dnis->data[nrows - 1];
      }
      d_size[0] = d->size[0];
      d_size[1] = d->size[1];
      ibtile = d->size[0] * d->size[1];
      for (i = 0; i < ibtile; i++) {
        d_data[i] = (d->data[i] > b_y->data[i]);
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = d_size[1];
      eigenvalues->size[1] = restr_size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      ibtile = d_size[1];
      for (i = 0; i < ibtile; i++) {
        ntilecols = restr_size[0];
        for (Y_tmp = 0; Y_tmp < ntilecols; Y_tmp++) {
          dimsor = 0.0;
          loop_ub = restr_size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            dimsor += restr_data[Y_tmp] * dnis->data[nrows - 1] * d_data[0];
          }
          b_d = d->data[Y_tmp];
          maxdnis = dnis->data[nrows - 1];
          eigenvalues->data[eigenvalues->size[0] * Y_tmp] =
              (maxdnis * (double)(b_d < maxdnis) +
               b_d * (double)(b_d >= maxdnis) *
                   (double)(b_d <= b_y->data[Y_tmp])) +
              dimsor;
        }
      }
      emxFree_real_T(&b_y);
    }
    emxFree_real_T(&r2);
    emxFree_int32_T(&r1);
    emxFree_boolean_T(&x);
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
  }
  emxFree_real_T(&b_t);
  emxFree_real_T(&b_Y_tmp);
  emxFree_int32_T(&b_r);
  emxFree_real_T(&r);
  emxFree_real_T(&s);
  emxFree_real_T(&t);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&nis);
  emxFree_real_T(&d);
  /* FScategory:CLUS-RobClaMULT */
}

/* End of code generation (restreigeneasy.c) */
