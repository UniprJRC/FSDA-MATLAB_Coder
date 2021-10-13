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
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "sumprod.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void rg_binary_expand_op(emxArray_real_T *x, const emxArray_real_T *r,
                                int mp);

static void sg_binary_expand_op(emxArray_real_T *dnis, const emxArray_real_T *x,
                                const emxArray_real_T *s, int mp,
                                const emxArray_real_T *t, double restr);

static void tg_binary_expand_op(emxArray_real_T *r, int mp,
                                const emxArray_int32_T *r2,
                                const emxArray_int32_T *r3);

/* Function Definitions */
static void rg_binary_expand_op(emxArray_real_T *x, const emxArray_real_T *r,
                                int mp)
{
  emxArray_real_T *b_x;
  const double *r_data;
  double *b_x_data;
  double *x_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  r_data = r->data;
  x_data = x->data;
  emxInit_real_T(&b_x, 1);
  i = r->size[0];
  stride_0_0 = b_x->size[0];
  if (i == 1) {
    b_x->size[0] = x->size[0];
  } else {
    b_x->size[0] = i;
  }
  emxEnsureCapacity_real_T(b_x, stride_0_0);
  b_x_data = b_x->data;
  stride_0_0 = (x->size[0] != 1);
  stride_1_0 = (i != 1);
  if (i == 1) {
    loop_ub = x->size[0];
  } else {
    loop_ub = i;
  }
  for (i = 0; i < loop_ub; i++) {
    b_x_data[i] =
        x_data[i * stride_0_0] * r_data[i * stride_1_0 + r->size[0] * mp];
  }
  i = x->size[0];
  x->size[0] = b_x->size[0];
  emxEnsureCapacity_real_T(x, i);
  x_data = x->data;
  loop_ub = b_x->size[0];
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = b_x_data[i];
  }
  emxFree_real_T(&b_x);
}

static void sg_binary_expand_op(emxArray_real_T *dnis, const emxArray_real_T *x,
                                const emxArray_real_T *s, int mp,
                                const emxArray_real_T *t, double restr)
{
  const double *s_data;
  const double *t_data;
  const double *x_data;
  double *dnis_data;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  t_data = t->data;
  s_data = s->data;
  x_data = x->data;
  i = s->size[0];
  i1 = t->size[0];
  loop_ub = dnis->size[0];
  if (i1 == 1) {
    i2 = i;
  } else {
    i2 = i1;
  }
  if (i2 == 1) {
    dnis->size[0] = x->size[0];
  } else if (i1 == 1) {
    dnis->size[0] = i;
  } else {
    dnis->size[0] = i1;
  }
  emxEnsureCapacity_real_T(dnis, loop_ub);
  dnis_data = dnis->data;
  stride_0_0 = (x->size[0] != 1);
  stride_1_0 = (i != 1);
  stride_2_0 = (i1 != 1);
  if (i1 == 1) {
    i2 = i;
  } else {
    i2 = i1;
  }
  if (i2 == 1) {
    loop_ub = x->size[0];
  } else if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    dnis_data[i] = x_data[i * stride_0_0] *
                   (s_data[i * stride_1_0 + s->size[0] * mp] +
                    t_data[i * stride_2_0 + t->size[0] * mp] / restr);
  }
}

static void tg_binary_expand_op(emxArray_real_T *r, int mp,
                                const emxArray_int32_T *r2,
                                const emxArray_int32_T *r3)
{
  double *r_data;
  const int *b_r;
  const int *r1;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  b_r = r3->data;
  r1 = r2->data;
  r_data = r->data;
  stride_0_0 = (r2->size[0] != 1);
  stride_1_0 = (r3->size[0] != 1);
  if (r3->size[0] == 1) {
    loop_ub = r2->size[0];
  } else {
    loop_ub = r3->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r_data[i + r->size[0] * mp] =
        (double)r1[i * stride_0_0] + (double)b_r[i * stride_1_0];
  }
}

void restreigeneasy(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                    double restr)
{
  emxArray_boolean_T *b_d;
  emxArray_int32_T *r1;
  emxArray_int32_T *r3;
  emxArray_real_T *b_dnis;
  emxArray_real_T *b_nis;
  emxArray_real_T *b_r;
  emxArray_real_T *c_d;
  emxArray_real_T *d;
  emxArray_real_T *dnis;
  emxArray_real_T *e;
  emxArray_real_T *ed;
  emxArray_real_T *nis;
  emxArray_real_T *obj;
  emxArray_real_T *r;
  emxArray_real_T *s;
  emxArray_real_T *sol;
  emxArray_real_T *t;
  emxArray_real_T *x;
  const double *niini_data;
  double a_tmp;
  double dimsor;
  double maxdnis;
  double n;
  double *d_data;
  double *dnis_data;
  double *e_data;
  double *ed_data;
  double *eigenvalues_data;
  double *nis_data;
  double *obj_data;
  double *r_data;
  double *s_data;
  double *sol_data;
  double *t_data;
  int d_d;
  int i;
  int ibtile;
  int jtilecol;
  int k;
  int nrows;
  int ntilecols;
  int *r2;
  int *r4;
  bool exitg1;
  bool y;
  bool *b_d_data;
  niini_data = niini->data;
  eigenvalues_data = eigenvalues->data;
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
  d_data = d->data;
  ntilecols = eigenvalues->size[0];
  for (i = 0; i < ntilecols; i++) {
    nrows = eigenvalues->size[1];
    for (ibtile = 0; ibtile < nrows; ibtile++) {
      d_data[ibtile + d->size[0] * i] =
          eigenvalues_data[i + eigenvalues->size[0] * ibtile];
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
  nis_data = nis->data;
  nrows = niini->size[0];
  ntilecols = eigenvalues->size[0];
  for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
    ibtile = jtilecol * nrows;
    for (k = 0; k < nrows; k++) {
      nis_data[ibtile + k] = niini_data[k];
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
  dnis_data = dnis->data;
  ntilecols = eigenvalues->size[0] * eigenvalues->size[1];
  for (i = 0; i < ntilecols; i++) {
    dnis_data[i] = eigenvalues_data[i] / restr;
  }
  ntilecols = eigenvalues->size[0] * eigenvalues->size[1];
  for (i = 0; i < ntilecols; i++) {
    dnis_data[i + eigenvalues->size[0] * eigenvalues->size[1]] =
        eigenvalues_data[i];
  }
  emxInit_real_T(&b_dnis, 2);
  c_sort(dnis);
  dnis_data = dnis->data;
  /*  dimsor=length(dsor); */
  dimsor = (double)eigenvalues->size[1] * (double)eigenvalues->size[0] * 2.0;
  /*  d1 is like dsor but contains an additional element which is larger than
   * the largest element of dsor */
  /* d1=dsor; */
  /* d1(dimsor+1)=d1(dimsor)*2; */
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
  /*  ed is a set with the middle points of these intervals */
  i = b_dnis->size[0] * b_dnis->size[1];
  b_dnis->size[0] = 1;
  b_dnis->size[1] = dnis->size[0] + 1;
  emxEnsureCapacity_real_T(b_dnis, i);
  eigenvalues_data = b_dnis->data;
  ntilecols = dnis->size[0];
  for (i = 0; i < ntilecols; i++) {
    eigenvalues_data[i] = dnis_data[i];
  }
  emxInit_real_T(&r, 2);
  eigenvalues_data[dnis->size[0]] = dnis_data[(int)dimsor - 1] * 2.0;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = dnis->size[0] + 1;
  emxEnsureCapacity_real_T(r, i);
  e_data = r->data;
  e_data[0] = 0.0;
  ntilecols = dnis->size[0];
  for (i = 0; i < ntilecols; i++) {
    e_data[i + 1] = dnis_data[i];
  }
  emxInit_real_T(&ed, 2);
  i = ed->size[0] * ed->size[1];
  ed->size[0] = 1;
  ed->size[1] = b_dnis->size[1];
  emxEnsureCapacity_real_T(ed, i);
  ed_data = ed->data;
  ntilecols = b_dnis->size[1];
  for (i = 0; i < ntilecols; i++) {
    ed_data[i] = (eigenvalues_data[i] + e_data[i]) / 2.0;
  }
  emxFree_real_T(&b_dnis);
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  ntilecols = nis->size[0] * nis->size[1] - 1;
  nrows = 0;
  for (ibtile = 0; ibtile <= ntilecols; ibtile++) {
    if (nis_data[ibtile] > 0.0) {
      nrows++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = nrows;
  emxEnsureCapacity_int32_T(r1, i);
  r2 = r1->data;
  nrows = 0;
  for (ibtile = 0; ibtile <= ntilecols; ibtile++) {
    if (nis_data[ibtile] > 0.0) {
      r2[nrows] = ibtile + 1;
      nrows++;
    }
  }
  i = dnis->size[0];
  dnis->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(dnis, i);
  dnis_data = dnis->data;
  ntilecols = r1->size[0];
  for (i = 0; i < ntilecols; i++) {
    dnis_data[i] = d_data[r2[i] - 1];
  }
  maxdnis = b_maximum(dnis);
  if (!(maxdnis <= 1.0E-8)) {
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    emxInit_int32_T(&r3, 1);
    if (fabs(maxdnis / b_minimum(dnis)) <= restr) {
      emxInit_boolean_T(&b_d, 2);
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      minimum(nis, r);
      e_data = r->data;
      i = b_d->size[0] * b_d->size[1];
      b_d->size[0] = 1;
      b_d->size[1] = r->size[1];
      emxEnsureCapacity_boolean_T(b_d, i);
      b_d_data = b_d->data;
      ntilecols = r->size[1];
      for (i = 0; i < ntilecols; i++) {
        b_d_data[i] = (e_data[i] == 0.0);
      }
      y = (b_d->size[1] != 0);
      if (y) {
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k <= b_d->size[1] - 1)) {
          if (!b_d_data[k]) {
            y = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      emxFree_boolean_T(&b_d);
      if (y) {
        ntilecols = nis->size[0] * nis->size[1] - 1;
        nrows = 0;
        for (ibtile = 0; ibtile <= ntilecols; ibtile++) {
          if (nis_data[ibtile] == 0.0) {
            nrows++;
          }
        }
        i = r3->size[0];
        r3->size[0] = nrows;
        emxEnsureCapacity_int32_T(r3, i);
        r4 = r3->data;
        nrows = 0;
        for (ibtile = 0; ibtile <= ntilecols; ibtile++) {
          if (nis_data[ibtile] == 0.0) {
            r4[nrows] = ibtile + 1;
            nrows++;
          }
        }
        dimsor = blockedSummation(dnis, r1->size[0]) / (double)r1->size[0];
        ntilecols = r3->size[0] - 1;
        for (i = 0; i <= ntilecols; i++) {
          d_data[r4[i] - 1] = dimsor;
        }
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = d->size[1];
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      eigenvalues_data = eigenvalues->data;
      ntilecols = d->size[0];
      for (i = 0; i < ntilecols; i++) {
        nrows = d->size[1];
        for (ibtile = 0; ibtile < nrows; ibtile++) {
          eigenvalues_data[ibtile + eigenvalues->size[0] * i] =
              d_data[i + d->size[0] * ibtile];
        }
      }
    } else {
      emxInit_real_T(&t, 2);
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
      t_data = t->data;
      ntilecols = eigenvalues->size[1] * (int)dimsor;
      for (i = 0; i < ntilecols; i++) {
        t_data[i] = 0.0;
      }
      emxInit_real_T(&s, 2);
      i = s->size[0] * s->size[1];
      s->size[0] = eigenvalues->size[1];
      s->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(s, i);
      s_data = s->data;
      ntilecols = eigenvalues->size[1] * (int)dimsor;
      for (i = 0; i < ntilecols; i++) {
        s_data[i] = 0.0;
      }
      emxInit_real_T(&b_r, 2);
      i = b_r->size[0] * b_r->size[1];
      b_r->size[0] = eigenvalues->size[1];
      b_r->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(b_r, i);
      r_data = b_r->data;
      ntilecols = eigenvalues->size[1] * (int)dimsor;
      for (i = 0; i < ntilecols; i++) {
        r_data[i] = 0.0;
      }
      emxInit_real_T(&sol, 1);
      /*  sol and obj are two column vectors of size 2*k*v+1 */
      /*  sol contains all the candidates solutions of m */
      /*  Vector sol contains the */
      /*  critical values of the interval functions which define the m */
      /*  objective function we use the centers of the interval to get a */
      /*  definition for the function in each interval this set with the */
      /*  critical values (in the array sol) contains the optimum m value */
      i = sol->size[0];
      sol->size[0] = (int)dimsor;
      emxEnsureCapacity_real_T(sol, i);
      sol_data = sol->data;
      for (i = 0; i < nrows; i++) {
        sol_data[i] = 0.0;
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
      obj_data = obj->data;
      for (i = 0; i < nrows; i++) {
        obj_data[i] = 0.0;
      }
      /*  The candidates values of mp which minimize the objective function are
       */
      i = (int)(2.0 * (double)eigenvalues->size[1] *
                    (double)eigenvalues->size[0] +
                1.0);
      emxInit_real_T(&e, 2);
      emxInit_real_T(&x, 1);
      emxInit_boolean_T(&b_d, 2);
      emxInit_real_T(&c_d, 2);
      emxInit_real_T(&b_nis, 2);
      for (jtilecol = 0; jtilecol < i; jtilecol++) {
        dimsor = ed_data[jtilecol];
        maxdnis = dimsor * restr;
        /*  Computation of r s and t */
        /*  Note that the sum goes from 1 to v */
        ibtile = b_d->size[0] * b_d->size[1];
        b_d->size[0] = d->size[0];
        b_d->size[1] = d->size[1];
        emxEnsureCapacity_boolean_T(b_d, ibtile);
        b_d_data = b_d->data;
        ntilecols = d->size[0] * d->size[1];
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          b_d_data[ibtile] = (d_data[ibtile] < dimsor);
        }
        c_combineVectorElements(b_d, r1);
        r2 = r1->data;
        ibtile = b_d->size[0] * b_d->size[1];
        b_d->size[0] = d->size[0];
        b_d->size[1] = d->size[1];
        emxEnsureCapacity_boolean_T(b_d, ibtile);
        b_d_data = b_d->data;
        ntilecols = d->size[0] * d->size[1];
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          b_d_data[ibtile] = (d_data[ibtile] > maxdnis);
        }
        c_combineVectorElements(b_d, r3);
        r4 = r3->data;
        if (r1->size[0] == r3->size[0]) {
          ntilecols = r1->size[0];
          for (ibtile = 0; ibtile < ntilecols; ibtile++) {
            r_data[ibtile + b_r->size[0] * jtilecol] =
                (double)r2[ibtile] + (double)r4[ibtile];
          }
        } else {
          tg_binary_expand_op(b_r, jtilecol, r1, r3);
          r_data = b_r->data;
        }
        dimsor = ed_data[jtilecol];
        ibtile = c_d->size[0] * c_d->size[1];
        c_d->size[0] = d->size[0];
        c_d->size[1] = d->size[1];
        emxEnsureCapacity_real_T(c_d, ibtile);
        eigenvalues_data = c_d->data;
        ntilecols = d->size[0] * d->size[1];
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          eigenvalues_data[ibtile] =
              d_data[ibtile] * (double)(d_data[ibtile] < dimsor);
        }
        sum(c_d, x);
        eigenvalues_data = x->data;
        ntilecols = x->size[0];
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          s_data[ibtile + s->size[0] * jtilecol] = eigenvalues_data[ibtile];
        }
        ibtile = c_d->size[0] * c_d->size[1];
        c_d->size[0] = d->size[0];
        c_d->size[1] = d->size[1];
        emxEnsureCapacity_real_T(c_d, ibtile);
        eigenvalues_data = c_d->data;
        ntilecols = d->size[0] * d->size[1];
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          eigenvalues_data[ibtile] =
              d_data[ibtile] * (double)(d_data[ibtile] > maxdnis);
        }
        sum(c_d, x);
        eigenvalues_data = x->data;
        ntilecols = x->size[0];
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          t_data[ibtile + t->size[0] * jtilecol] = eigenvalues_data[ibtile];
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
        ntilecols = niini->size[0];
        ibtile = x->size[0];
        x->size[0] = niini->size[0];
        emxEnsureCapacity_real_T(x, ibtile);
        eigenvalues_data = x->data;
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          eigenvalues_data[ibtile] = niini_data[ibtile] / n;
        }
        if (s->size[0] == 1) {
          ntilecols = t->size[0];
        } else {
          ntilecols = s->size[0];
        }
        if ((s->size[0] == t->size[0]) && (x->size[0] == ntilecols)) {
          ibtile = dnis->size[0];
          dnis->size[0] = x->size[0];
          emxEnsureCapacity_real_T(dnis, ibtile);
          dnis_data = dnis->data;
          ntilecols = x->size[0];
          for (ibtile = 0; ibtile < ntilecols; ibtile++) {
            dnis_data[ibtile] =
                eigenvalues_data[ibtile] *
                (s_data[ibtile + s->size[0] * jtilecol] +
                 t_data[ibtile + t->size[0] * jtilecol] / restr);
          }
        } else {
          sg_binary_expand_op(dnis, x, s, jtilecol, t, restr);
        }
        if (x->size[0] == b_r->size[0]) {
          ntilecols = x->size[0];
          for (ibtile = 0; ibtile < ntilecols; ibtile++) {
            eigenvalues_data[ibtile] *=
                r_data[ibtile + b_r->size[0] * jtilecol];
          }
        } else {
          rg_binary_expand_op(x, b_r, jtilecol);
        }
        dimsor = blockedSummation(dnis, dnis->size[0]) /
                 blockedSummation(x, x->size[0]);
        sol_data[jtilecol] = dimsor;
        /*  solnum(mp)=sum(niini/n.*(s(:,mp)+t(:,mp)/c)); */
        /*  solden(mp)=(sum(niini/n.*(r(:,mp)))); */
        a_tmp = restr * dimsor;
        ibtile = e->size[0] * e->size[1];
        e->size[0] = d->size[0];
        e->size[1] = d->size[1];
        emxEnsureCapacity_real_T(e, ibtile);
        e_data = e->data;
        ntilecols = d->size[0] * d->size[1];
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          e_data[ibtile] =
              (dimsor * (double)(d_data[ibtile] < dimsor) +
               d_data[ibtile] * (double)(d_data[ibtile] >= dimsor) *
                   (double)(d_data[ibtile] <= a_tmp)) +
              a_tmp * (double)(d_data[ibtile] > a_tmp);
        }
        ibtile = c_d->size[0] * c_d->size[1];
        c_d->size[0] = e->size[0];
        c_d->size[1] = e->size[1];
        emxEnsureCapacity_real_T(c_d, ibtile);
        eigenvalues_data = c_d->data;
        ntilecols = e->size[0] * e->size[1];
        for (ibtile = 0; ibtile < ntilecols; ibtile++) {
          eigenvalues_data[ibtile] = e_data[ibtile];
        }
        nrows = e->size[0] * e->size[1];
        for (k = 0; k < nrows; k++) {
          eigenvalues_data[k] = log(eigenvalues_data[k]);
        }
        /*  sol (mp) contains \sum_{j=1}^k \sum_{l=1}^v ( log d_{jl} + d_{jl}^m
         * / d_{jl} */
        /*  equation (3.4) */
        if (d->size[0] == 1) {
          ntilecols = e->size[0];
        } else {
          ntilecols = d->size[0];
        }
        if (d->size[1] == 1) {
          ibtile = e->size[1];
        } else {
          ibtile = d->size[1];
        }
        if (c_d->size[0] == 1) {
          if (d->size[0] == 1) {
            k = e->size[0];
          } else {
            k = d->size[0];
          }
        } else {
          k = c_d->size[0];
        }
        if (c_d->size[1] == 1) {
          if (d->size[1] == 1) {
            d_d = e->size[1];
          } else {
            d_d = d->size[1];
          }
        } else {
          d_d = c_d->size[1];
        }
        if ((d->size[0] == e->size[0]) && (d->size[1] == e->size[1]) &&
            (c_d->size[0] == ntilecols) && (c_d->size[1] == ibtile) &&
            (nis->size[0] == k) && (nis->size[1] == d_d)) {
          ibtile = b_nis->size[0] * b_nis->size[1];
          b_nis->size[0] = nis->size[0];
          b_nis->size[1] = nis->size[1];
          emxEnsureCapacity_real_T(b_nis, ibtile);
          dnis_data = b_nis->data;
          ntilecols = nis->size[0] * nis->size[1];
          for (ibtile = 0; ibtile < ntilecols; ibtile++) {
            dnis_data[ibtile] =
                nis_data[ibtile] / n *
                (eigenvalues_data[ibtile] + d_data[ibtile] / e_data[ibtile]);
          }
          combineVectorElements(b_nis, r);
        } else {
          qg_binary_expand_op(r, nis, n, c_d, d, e);
        }
        obj_data[jtilecol] = e_sum(r);
      }
      emxFree_real_T(&b_nis);
      emxFree_real_T(&c_d);
      emxFree_boolean_T(&b_d);
      emxFree_real_T(&x);
      emxFree_real_T(&e);
      emxFree_real_T(&b_r);
      emxFree_real_T(&s);
      emxFree_real_T(&t);
      d_minimum(obj, &dimsor, &nrows);
      /*  m is the optimum value for the eigenvalues procedure */
      dimsor = sol_data[nrows - 1];
      a_tmp = restr * dimsor;
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = d->size[1];
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      eigenvalues_data = eigenvalues->data;
      ntilecols = d->size[0];
      emxFree_real_T(&obj);
      emxFree_real_T(&sol);
      for (i = 0; i < ntilecols; i++) {
        nrows = d->size[1];
        for (ibtile = 0; ibtile < nrows; ibtile++) {
          maxdnis = d_data[i + d->size[0] * ibtile];
          eigenvalues_data[ibtile + eigenvalues->size[0] * i] =
              (dimsor * (double)(maxdnis < dimsor) +
               maxdnis * (double)(maxdnis >= dimsor) *
                   (double)(maxdnis <= a_tmp)) +
              a_tmp * (double)(maxdnis > a_tmp);
        }
      }
    }
    emxFree_int32_T(&r3);
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
  }
  emxFree_real_T(&r);
  emxFree_int32_T(&r1);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&nis);
  emxFree_real_T(&d);
  /* FScategory:CLUS-RobClaMULT */
}

/* End of code generation (restreigeneasy.c) */
