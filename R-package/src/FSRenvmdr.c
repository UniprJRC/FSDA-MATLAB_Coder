/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRenvmdr.c
 *
 * Code generation for function 'FSRenvmdr'
 *
 */

/* Include files */
#include "FSRenvmdr.h"
#include "betainc.h"
#include "betaincinv.h"
#include "cat1.h"
#include "chi2inv.h"
#include "colon.h"
#include "div.h"
#include "eml_mtimes_helper.h"
#include "erfcinv.h"
#include "finv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "tinv.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void ic_binary_expand_op(emxArray_real_T *mm, double n,
                                const emxArray_real_T *a,
                                const emxArray_real_T *r3);

static void lc_binary_expand_op(emxArray_real_T *mm, double n,
                                const emxArray_real_T *a,
                                const emxArray_real_T *r3);

static void nc_binary_expand_op(emxArray_real_T *mm, double n,
                                const emxArray_real_T *a,
                                const emxArray_real_T *r3);

static void oc_binary_expand_op(emxArray_real_T *b_tmp,
                                const emxArray_real_T *MinSca,
                                const emxArray_real_T *mm,
                                const emxArray_real_T *quant, double p);

/* Function Definitions */
static void ic_binary_expand_op(emxArray_real_T *mm, double n,
                                const emxArray_real_T *a,
                                const emxArray_real_T *r3)
{
  emxArray_real_T *r1;
  const double *a_data;
  const double *r;
  double *mm_data;
  double *r2;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  r = r3->data;
  a_data = a->data;
  mm_data = mm->data;
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  if (r3->size[0] == 1) {
    if (a->size[0] == 1) {
      r1->size[0] = mm->size[0];
    } else {
      r1->size[0] = a->size[0];
    }
  } else {
    r1->size[0] = r3->size[0];
  }
  r1->size[1] = 7;
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (mm->size[0] != 1);
  stride_1_0 = (a->size[0] != 1);
  stride_2_0 = (r3->size[0] != 1);
  if (r3->size[0] == 1) {
    if (a->size[0] == 1) {
      loop_ub = mm->size[0];
    } else {
      loop_ub = a->size[0];
    }
  } else {
    loop_ub = r3->size[0];
  }
  for (i = 0; i < 7; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      r2[i1 + r1->size[0] * i] =
          1.0 - 2.0 * (n / mm_data[i1 * stride_0_0 + mm->size[0] * i]) *
                    a_data[i1 * stride_1_0 + a->size[0] * i] *
                    r[i1 * stride_2_0 + r3->size[0] * i];
    }
  }
  i = mm->size[0] * mm->size[1];
  mm->size[0] = r1->size[0];
  mm->size[1] = 7;
  emxEnsureCapacity_real_T(mm, i);
  mm_data = mm->data;
  loop_ub = r1->size[0];
  for (i = 0; i < 7; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      mm_data[i1 + mm->size[0] * i] = r2[i1 + r1->size[0] * i];
    }
  }
  emxFree_real_T(&r1);
}

static void lc_binary_expand_op(emxArray_real_T *mm, double n,
                                const emxArray_real_T *a,
                                const emxArray_real_T *r3)
{
  emxArray_real_T *r1;
  const double *a_data;
  const double *r;
  double *mm_data;
  double *r2;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  r = r3->data;
  a_data = a->data;
  mm_data = mm->data;
  emxInit_real_T(&r1, 1);
  i = r1->size[0];
  if (r3->size[0] == 1) {
    if (a->size[0] == 1) {
      r1->size[0] = mm->size[0];
    } else {
      r1->size[0] = a->size[0];
    }
  } else {
    r1->size[0] = r3->size[0];
  }
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (mm->size[0] != 1);
  stride_1_0 = (a->size[0] != 1);
  stride_2_0 = (r3->size[0] != 1);
  if (r3->size[0] == 1) {
    if (a->size[0] == 1) {
      loop_ub = mm->size[0];
    } else {
      loop_ub = a->size[0];
    }
  } else {
    loop_ub = r3->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r2[i] = 1.0 - 2.0 * (n / mm_data[i * stride_0_0]) * a_data[i * stride_1_0] *
                      r[i * stride_2_0];
  }
  i = mm->size[0];
  mm->size[0] = r1->size[0];
  emxEnsureCapacity_real_T(mm, i);
  mm_data = mm->data;
  loop_ub = r1->size[0];
  for (i = 0; i < loop_ub; i++) {
    mm_data[i] = r2[i];
  }
  emxFree_real_T(&r1);
}

static void nc_binary_expand_op(emxArray_real_T *mm, double n,
                                const emxArray_real_T *a,
                                const emxArray_real_T *r3)
{
  emxArray_real_T *r1;
  const double *a_data;
  const double *r;
  double *mm_data;
  double *r2;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  r = r3->data;
  a_data = a->data;
  mm_data = mm->data;
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  if (r3->size[0] == 1) {
    if (a->size[0] == 1) {
      r1->size[0] = mm->size[0];
    } else {
      r1->size[0] = a->size[0];
    }
  } else {
    r1->size[0] = r3->size[0];
  }
  r1->size[1] = 4;
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (mm->size[0] != 1);
  stride_1_0 = (a->size[0] != 1);
  stride_2_0 = (r3->size[0] != 1);
  if (r3->size[0] == 1) {
    if (a->size[0] == 1) {
      loop_ub = mm->size[0];
    } else {
      loop_ub = a->size[0];
    }
  } else {
    loop_ub = r3->size[0];
  }
  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      r2[i1 + r1->size[0] * i] =
          1.0 - 2.0 * (n / mm_data[i1 * stride_0_0 + mm->size[0] * i]) *
                    a_data[i1 * stride_1_0 + a->size[0] * i] *
                    r[i1 * stride_2_0 + r3->size[0] * i];
    }
  }
  i = mm->size[0] * mm->size[1];
  mm->size[0] = r1->size[0];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(mm, i);
  mm_data = mm->data;
  loop_ub = r1->size[0];
  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      mm_data[i1 + mm->size[0] * i] = r2[i1 + r1->size[0] * i];
    }
  }
  emxFree_real_T(&r1);
}

static void oc_binary_expand_op(emxArray_real_T *b_tmp,
                                const emxArray_real_T *MinSca,
                                const emxArray_real_T *mm,
                                const emxArray_real_T *quant, double p)
{
  emxArray_real_T *b_mm;
  emxArray_real_T *r;
  const double *MinSca_data;
  const double *mm_data;
  const double *quant_data;
  double *b_tmp_data;
  double *r1;
  int b_quant;
  int i;
  int i1;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  quant_data = quant->data;
  mm_data = mm->data;
  MinSca_data = MinSca->data;
  b_tmp_data = b_tmp->data;
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  if (quant->size[0] == 1) {
    b_quant = b_tmp->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = mm->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = b_tmp->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    r->size[0] = MinSca->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      r->size[0] = mm->size[0];
    } else if (quant->size[0] == 1) {
      r->size[0] = b_tmp->size[0];
    } else {
      r->size[0] = quant->size[0];
    }
  }
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  stride_0_0 = (MinSca->size[0] != 1);
  stride_1_0 = (mm->size[0] != 1);
  stride_2_0 = (b_tmp->size[0] != 1);
  stride_3_0 = (quant->size[0] != 1);
  if (quant->size[0] == 1) {
    b_quant = b_tmp->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = mm->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = b_tmp->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = MinSca->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = mm->size[0];
    } else if (quant->size[0] == 1) {
      b_quant = b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
  }
  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < b_quant; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 * (MinSca_data[i1 * stride_0_0 + MinSca->size[0] * i] /
                     ((mm_data[i1 * stride_1_0 + mm->size[0] * i] + 1.0) +
                      b_tmp_data[i1 * stride_2_0 + b_tmp->size[0] * i] *
                          quant_data[i1 * stride_3_0 + quant->size[0] * i]) +
                 1.0);
    }
  }
  emxInit_real_T(&b_mm, 2);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = 4;
  emxEnsureCapacity_real_T(b_mm, i);
  b_tmp_data = b_mm->data;
  b_quant = mm->size[0] * 4;
  for (i = 0; i < b_quant; i++) {
    b_tmp_data[i] = mm_data[i] - p;
  }
  c_tinv(r, b_mm, b_tmp);
  emxFree_real_T(&b_mm);
  emxFree_real_T(&r);
}

void FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  static const double b_dv[7] = {0.010000000000000009,
                                 0.0010000000000000009,
                                 9.9999999999988987E-5,
                                 9.99999999995449E-6,
                                 0.99,
                                 0.5,
                                 0.99999};
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *x;
  emxArray_real_T *y;
  creal_T dc;
  double t;
  double xn5;
  double xn7;
  double *MDRenv_data;
  double *MinSca_data;
  double *a_data;
  double *b_y_data;
  double *m_data;
  double *mm_data;
  double *quant_data;
  double *y_data;
  int csz_idx_0;
  int i;
  int ibtile;
  int k;
  int nrows;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
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
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  y_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    for (i = 0; i <= nrows; i++) {
      y_data[i] = varargin_4 + (double)i;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    y_data = y->data;
  }
  emxInit_real_T(&m, 1);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, i);
  m_data = m->data;
  nrows = y->size[1];
  for (i = 0; i < nrows; i++) {
    m_data[i] = y_data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  i = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = 7;
  emxEnsureCapacity_real_T(mm, i);
  mm_data = mm->data;
  nrows = m->size[0];
  for (csz_idx_0 = 0; csz_idx_0 < 7; csz_idx_0++) {
    ibtile = csz_idx_0 * nrows;
    for (k = 0; k < nrows; k++) {
      mm_data[ibtile + k] = m_data[k];
    }
  }
  emxInit_real_T(&MinSca, 2);
  /*  finv finds the inverse of the F distribution. */
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    MinSca_data[i] = n - mm_data[i];
  }
  emxInit_real_T(&b_y, 2);
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = MinSca->size[0];
  b_y->size[1] = 7;
  emxEnsureCapacity_real_T(b_y, i);
  y_data = b_y->data;
  nrows = MinSca->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    y_data[i] = 2.0 * MinSca_data[i];
  }
  emxInit_real_T(&b_tmp, 2);
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 7;
  emxEnsureCapacity_real_T(b_tmp, i);
  a_data = b_tmp->data;
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    a_data[i] = mm_data[i] + 1.0;
  }
  emxInit_real_T(&c_y, 2);
  i = c_y->size[0] * c_y->size[1];
  c_y->size[0] = b_tmp->size[0];
  c_y->size[1] = 7;
  emxEnsureCapacity_real_T(c_y, i);
  b_y_data = c_y->data;
  nrows = b_tmp->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    b_y_data[i] = 2.0 * a_data[i];
  }
  emxInit_real_T(&b, 2);
  i = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 7;
  emxEnsureCapacity_real_T(b, i);
  MDRenv_data = b->data;
  nrows = m->size[0];
  for (csz_idx_0 = 0; csz_idx_0 < 7; csz_idx_0++) {
    ibtile = csz_idx_0 * nrows;
    for (k = 0; k < nrows; k++) {
      MDRenv_data[ibtile + k] = b_dv[csz_idx_0];
    }
  }
  emxInit_real_T(&quant, 2);
  ibtile = b->size[0];
  nrows = b_y->size[0];
  if (ibtile <= nrows) {
    nrows = ibtile;
  }
  csz_idx_0 = c_y->size[0];
  if (nrows <= csz_idx_0) {
    csz_idx_0 = nrows;
  }
  i = quant->size[0] * quant->size[1];
  quant->size[0] = csz_idx_0;
  quant->size[1] = 7;
  emxEnsureCapacity_real_T(quant, i);
  quant_data = quant->data;
  i = csz_idx_0 * 7;
  for (k = 0; k < i; k++) {
    if ((y_data[k] > 0.0) && (b_y_data[k] > 0.0)) {
      if (rtIsInf(y_data[k])) {
        if (rtIsInf(b_y_data[k])) {
          quant_data[k] = 1.0;
        } else {
          quant_data[k] =
              b_y_data[k] / chi2inv(1.0 - MDRenv_data[k], b_y_data[k]);
        }
      } else if (rtIsInf(b_y_data[k])) {
        quant_data[k] = chi2inv(MDRenv_data[k], y_data[k]) / y_data[k];
      } else {
        dc = betainc(0.5, y_data[k] / 2.0, b_y_data[k] / 2.0);
        if (MDRenv_data[k] > dc.re) {
          dc = betaincinv(MDRenv_data[k], b_y_data[k] / 2.0, y_data[k] / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(MDRenv_data[k], y_data[k] / 2.0, b_y_data[k] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        quant_data[k] = t * b_y_data[k] / y_data[k];
      }
    } else {
      quant_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b);
  emxFree_real_T(&c_y);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  if (MinSca->size[0] == 1) {
    nrows = quant->size[0];
  } else {
    nrows = MinSca->size[0];
  }
  if (mm->size[0] == 1) {
    if (MinSca->size[0] == 1) {
      ibtile = quant->size[0];
    } else {
      ibtile = MinSca->size[0];
    }
  } else {
    ibtile = mm->size[0];
  }
  if ((MinSca->size[0] == quant->size[0]) && (mm->size[0] == nrows) &&
      (b_tmp->size[0] == ibtile)) {
    nrows = b_tmp->size[0] * 7;
    i = b_tmp->size[0] * b_tmp->size[1];
    b_tmp->size[1] = 7;
    emxEnsureCapacity_real_T(b_tmp, i);
    a_data = b_tmp->data;
    for (i = 0; i < nrows; i++) {
      a_data[i] =
          0.5 *
          (a_data[i] / ((mm_data[i] + 1.0) + MinSca_data[i] * quant_data[i]) +
           1.0);
    }
  } else {
    jc_binary_expand_op(b_tmp, mm, MinSca, quant);
    a_data = b_tmp->data;
  }
  emxFree_real_T(&quant);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    MinSca_data[i] = mm_data[i] - p;
  }
  emxInit_real_T(&x, 2);
  ibtile = b_tmp->size[0];
  csz_idx_0 = MinSca->size[0];
  if (ibtile <= csz_idx_0) {
    csz_idx_0 = ibtile;
  }
  i = x->size[0] * x->size[1];
  x->size[0] = csz_idx_0;
  x->size[1] = 7;
  emxEnsureCapacity_real_T(x, i);
  MDRenv_data = x->data;
  i = csz_idx_0 * 7;
  for (k = 0; k < i; k++) {
    if ((MinSca_data[k] > 0.0) && (0.0 <= a_data[k]) && (a_data[k] <= 1.0)) {
      if (a_data[k] == 0.0) {
        MDRenv_data[k] = rtMinusInf;
      } else if (a_data[k] == 1.0) {
        MDRenv_data[k] = rtInf;
      } else if (MinSca_data[k] == 1.0) {
        MDRenv_data[k] = tan(3.1415926535897931 * (a_data[k] - 0.5));
      } else if (MinSca_data[k] < 1000.0) {
        t = fabs(a_data[k] - 0.5);
        if (t < 0.25) {
          dc = b_betaincinv(2.0 * t, 0.5, MinSca_data[k] / 2.0);
          xn7 = dc.re;
          dc = b_betaincinv(2.0 * t, 0.5, MinSca_data[k] / 2.0);
          xn5 = 1.0 - dc.re;
        } else {
          dc = betaincinv(2.0 * t, MinSca_data[k] / 2.0, 0.5);
          xn5 = dc.re;
          dc = betaincinv(2.0 * t, MinSca_data[k] / 2.0, 0.5);
          xn7 = 1.0 - dc.re;
        }
        t = a_data[k] - 0.5;
        if (a_data[k] - 0.5 < 0.0) {
          t = -1.0;
        } else if (a_data[k] - 0.5 > 0.0) {
          t = 1.0;
        } else if (a_data[k] - 0.5 == 0.0) {
          t = 0.0;
        }
        MDRenv_data[k] = t * sqrt(MinSca_data[k] * (xn7 / xn5));
      } else {
        if ((a_data[k] >= 0.0) && (a_data[k] <= 1.0)) {
          MDRenv_data[k] = -1.4142135623730951 * erfcinv(2.0 * a_data[k]);
        } else {
          MDRenv_data[k] = rtNaN;
        }
        if (MinSca_data[k] < 6.6457388829771584E+75) {
          t = rt_powd_snf(MDRenv_data[k], 3.0);
          xn5 = rt_powd_snf(MDRenv_data[k], 5.0);
          xn7 = rt_powd_snf(MDRenv_data[k], 7.0);
          MDRenv_data[k] =
              (((MDRenv_data[k] +
                 (t + MDRenv_data[k]) / (4.0 * MinSca_data[k])) +
                ((5.0 * xn5 + 16.0 * t) + 3.0 * MDRenv_data[k]) /
                    (96.0 * (MinSca_data[k] * MinSca_data[k]))) +
               (((3.0 * xn7 + 19.0 * xn5) + 17.0 * t) - 15.0 * MDRenv_data[k]) /
                   (384.0 * rt_powd_snf(MinSca_data[k], 3.0))) +
              ((((79.0 * rt_powd_snf(MDRenv_data[k], 9.0) + 776.0 * xn7) +
                 1482.0 * xn5) -
                1920.0 * t) -
               945.0 * MDRenv_data[k]) /
                  (92160.0 * rt_powd_snf(MinSca_data[k], 4.0));
        }
      }
    } else {
      MDRenv_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_tmp);
  ibtile = x->size[0] * 7;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = x->size[0];
  MinSca->size[1] = 7;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  for (k = 0; k < ibtile; k++) {
    MinSca_data[k] = fabs(MDRenv_data[k]);
  }
  emxFree_real_T(&x);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = b_y->size[0] * b_y->size[1];
  b_y->size[0] = mm->size[0];
  b_y->size[1] = 7;
  emxEnsureCapacity_real_T(b_y, i);
  y_data = b_y->data;
  nrows = mm->size[0] * 7;
  for (i = 0; i < nrows; i++) {
    y_data[i] = 0.5 * (mm_data[i] / n + 1.0);
  }
  emxInit_real_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = b_y->size[0];
  a->size[1] = 7;
  emxEnsureCapacity_real_T(a, i);
  a_data = a->data;
  i = b_y->size[0] * 7;
  for (k = 0; k < i; k++) {
    if ((y_data[k] >= 0.0) && (y_data[k] <= 1.0)) {
      a_data[k] = -1.4142135623730951 * erfcinv(2.0 * y_data[k]);
    } else {
      a_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_y);
  emxInit_real_T(&r, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r->size[0] * r->size[1];
  r->size[0] = a->size[0];
  r->size[1] = 7;
  emxEnsureCapacity_real_T(r, i);
  MDRenv_data = r->data;
  i = a->size[0] * 7;
  for (k = 0; k < i; k++) {
    MDRenv_data[k] = exp(-0.5 * a_data[k] * a_data[k]) / 2.5066282746310002;
  }
  if (mm->size[0] == 1) {
    ibtile = a->size[0];
  } else {
    ibtile = mm->size[0];
  }
  if ((mm->size[0] == a->size[0]) && (ibtile == r->size[0])) {
    nrows = mm->size[0] * 7;
    i = mm->size[0] * mm->size[1];
    mm->size[1] = 7;
    emxEnsureCapacity_real_T(mm, i);
    mm_data = mm->data;
    for (i = 0; i < nrows; i++) {
      mm_data[i] = 1.0 - 2.0 * (n / mm_data[i]) * a_data[i] * MDRenv_data[i];
    }
  } else {
    ic_binary_expand_op(mm, n, a, r);
    mm_data = mm->data;
  }
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  ibtile = mm->size[0] * 7;
  for (k = 0; k < ibtile; k++) {
    mm_data[k] = sqrt(mm_data[k]);
  }
  if (MinSca->size[0] == mm->size[0]) {
    nrows = MinSca->size[0] * 7;
    i = MinSca->size[0] * MinSca->size[1];
    MinSca->size[1] = 7;
    emxEnsureCapacity_real_T(MinSca, i);
    MinSca_data = MinSca->data;
    for (i = 0; i < nrows; i++) {
      MinSca_data[i] /= mm_data[i];
    }
  } else {
    c_rdivide(MinSca, mm);
    MinSca_data = MinSca->data;
  }
  emxFree_real_T(&mm);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (MinSca->size[0] != 0) {
    ibtile = MinSca->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    csz_idx_0 = 7;
  } else {
    csz_idx_0 = 0;
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = ibtile;
  MDRenv->size[1] = input_sizes_idx_1 + csz_idx_0;
  emxEnsureCapacity_real_T(MDRenv, i);
  MDRenv_data = MDRenv->data;
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (k = 0; k < ibtile; k++) {
      MDRenv_data[k] = m_data[k];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < csz_idx_0; i++) {
    for (k = 0; k < ibtile; k++) {
      MDRenv_data[k + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          MinSca_data[k + ibtile * i];
    }
  }
  emxFree_real_T(&MinSca);
}

void b_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b_tmp;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *x;
  emxArray_real_T *y;
  creal_T dc;
  double t;
  double xn3;
  double xn5;
  double xn7;
  double *MDRenv_data;
  double *MinSca_data;
  double *b_tmp_data;
  double *m_data;
  double *mm_data;
  double *quant_data;
  double *y_data;
  int csz_idx_0;
  int k;
  int nrows;
  int u1;
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
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
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  y_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    u1 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, u1);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    u1 = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, u1);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    u1 = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, u1);
    y_data = y->data;
    for (u1 = 0; u1 <= nrows; u1++) {
      y_data[u1] = varargin_4 + (double)u1;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    y_data = y->data;
  }
  emxInit_real_T(&m, 1);
  u1 = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, u1);
  m_data = m->data;
  nrows = y->size[1];
  for (u1 = 0; u1 < nrows; u1++) {
    m_data[u1] = y_data[u1];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&mm, 1);
  /*  mm = fwd search index replicated lp times. */
  u1 = mm->size[0];
  mm->size[0] = m->size[0];
  emxEnsureCapacity_real_T(mm, u1);
  mm_data = mm->data;
  nrows = m->size[0];
  for (k = 0; k < nrows; k++) {
    mm_data[k] = m_data[k];
  }
  emxInit_real_T(&MinSca, 1);
  /*  finv finds the inverse of the F distribution. */
  u1 = MinSca->size[0];
  MinSca->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(MinSca, u1);
  MinSca_data = MinSca->data;
  nrows = mm->size[0];
  for (u1 = 0; u1 < nrows; u1++) {
    MinSca_data[u1] = n - mm_data[u1];
  }
  emxInit_real_T(&b_y, 1);
  u1 = b_y->size[0];
  b_y->size[0] = MinSca->size[0];
  emxEnsureCapacity_real_T(b_y, u1);
  y_data = b_y->data;
  nrows = MinSca->size[0];
  for (u1 = 0; u1 < nrows; u1++) {
    y_data[u1] = 2.0 * MinSca_data[u1];
  }
  emxInit_real_T(&b_tmp, 1);
  u1 = b_tmp->size[0];
  b_tmp->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(b_tmp, u1);
  b_tmp_data = b_tmp->data;
  nrows = mm->size[0];
  for (u1 = 0; u1 < nrows; u1++) {
    b_tmp_data[u1] = mm_data[u1] + 1.0;
  }
  emxInit_real_T(&c_y, 1);
  u1 = c_y->size[0];
  c_y->size[0] = b_tmp->size[0];
  emxEnsureCapacity_real_T(c_y, u1);
  MDRenv_data = c_y->data;
  nrows = b_tmp->size[0];
  for (u1 = 0; u1 < nrows; u1++) {
    MDRenv_data[u1] = 2.0 * b_tmp_data[u1];
  }
  emxInit_real_T(&quant, 1);
  nrows = m->size[0];
  u1 = b_y->size[0];
  if (nrows <= u1) {
    u1 = nrows;
  }
  csz_idx_0 = c_y->size[0];
  if (u1 <= csz_idx_0) {
    csz_idx_0 = u1;
  }
  u1 = quant->size[0];
  quant->size[0] = csz_idx_0;
  emxEnsureCapacity_real_T(quant, u1);
  quant_data = quant->data;
  for (k = 0; k < csz_idx_0; k++) {
    if ((y_data[k] > 0.0) && (MDRenv_data[k] > 0.0)) {
      if (rtIsInf(y_data[k])) {
        if (rtIsInf(MDRenv_data[k])) {
          quant_data[k] = 1.0;
        } else {
          quant_data[k] =
              MDRenv_data[k] / chi2inv(0.010000000000000009, MDRenv_data[k]);
        }
      } else if (rtIsInf(MDRenv_data[k])) {
        quant_data[k] = chi2inv(0.99, y_data[k]) / y_data[k];
      } else {
        dc = betainc(0.5, y_data[k] / 2.0, MDRenv_data[k] / 2.0);
        if (0.99 > dc.re) {
          dc = betaincinv(0.99, MDRenv_data[k] / 2.0, y_data[k] / 2.0);
          t = (1.0 - dc.re) / dc.re;
        } else {
          dc = b_betaincinv(0.99, y_data[k] / 2.0, MDRenv_data[k] / 2.0);
          t = dc.re / (1.0 - dc.re);
        }
        quant_data[k] = t * MDRenv_data[k] / y_data[k];
      }
    } else {
      quant_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&c_y);
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  if (MinSca->size[0] == 1) {
    nrows = quant->size[0];
  } else {
    nrows = MinSca->size[0];
  }
  if (mm->size[0] == 1) {
    if (MinSca->size[0] == 1) {
      csz_idx_0 = quant->size[0];
    } else {
      csz_idx_0 = MinSca->size[0];
    }
  } else {
    csz_idx_0 = mm->size[0];
  }
  if ((MinSca->size[0] == quant->size[0]) && (mm->size[0] == nrows) &&
      (b_tmp->size[0] == csz_idx_0)) {
    nrows = b_tmp->size[0];
    for (u1 = 0; u1 < nrows; u1++) {
      b_tmp_data[u1] =
          0.5 * (b_tmp_data[u1] /
                     ((mm_data[u1] + 1.0) + MinSca_data[u1] * quant_data[u1]) +
                 1.0);
    }
  } else {
    mc_binary_expand_op(b_tmp, mm, MinSca, quant);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&quant);
  u1 = MinSca->size[0];
  MinSca->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(MinSca, u1);
  MinSca_data = MinSca->data;
  nrows = mm->size[0];
  for (u1 = 0; u1 < nrows; u1++) {
    MinSca_data[u1] = mm_data[u1] - p;
  }
  emxInit_real_T(&x, 1);
  nrows = b_tmp->size[0];
  csz_idx_0 = MinSca->size[0];
  if (nrows <= csz_idx_0) {
    csz_idx_0 = nrows;
  }
  u1 = x->size[0];
  x->size[0] = csz_idx_0;
  emxEnsureCapacity_real_T(x, u1);
  MDRenv_data = x->data;
  for (k = 0; k < csz_idx_0; k++) {
    if ((MinSca_data[k] > 0.0) && (0.0 <= b_tmp_data[k]) &&
        (b_tmp_data[k] <= 1.0)) {
      if (b_tmp_data[k] == 0.0) {
        MDRenv_data[k] = rtMinusInf;
      } else if (b_tmp_data[k] == 1.0) {
        MDRenv_data[k] = rtInf;
      } else if (MinSca_data[k] == 1.0) {
        MDRenv_data[k] = tan(3.1415926535897931 * (b_tmp_data[k] - 0.5));
      } else if (MinSca_data[k] < 1000.0) {
        t = fabs(b_tmp_data[k] - 0.5);
        if (t < 0.25) {
          dc = b_betaincinv(2.0 * t, 0.5, MinSca_data[k] / 2.0);
          xn5 = dc.re;
          dc = b_betaincinv(2.0 * t, 0.5, MinSca_data[k] / 2.0);
          xn3 = 1.0 - dc.re;
        } else {
          dc = betaincinv(2.0 * t, MinSca_data[k] / 2.0, 0.5);
          xn3 = dc.re;
          dc = betaincinv(2.0 * t, MinSca_data[k] / 2.0, 0.5);
          xn5 = 1.0 - dc.re;
        }
        t = b_tmp_data[k] - 0.5;
        if (b_tmp_data[k] - 0.5 < 0.0) {
          t = -1.0;
        } else if (b_tmp_data[k] - 0.5 > 0.0) {
          t = 1.0;
        } else if (b_tmp_data[k] - 0.5 == 0.0) {
          t = 0.0;
        }
        MDRenv_data[k] = t * sqrt(MinSca_data[k] * (xn5 / xn3));
      } else {
        if ((b_tmp_data[k] >= 0.0) && (b_tmp_data[k] <= 1.0)) {
          t = -1.4142135623730951 * erfcinv(2.0 * b_tmp_data[k]);
          MDRenv_data[k] = t;
        } else {
          t = rtNaN;
          MDRenv_data[k] = rtNaN;
        }
        if (MinSca_data[k] < 6.6457388829771584E+75) {
          xn3 = rt_powd_snf(t, 3.0);
          xn5 = rt_powd_snf(t, 5.0);
          xn7 = rt_powd_snf(t, 7.0);
          t = (((t + (xn3 + t) / (4.0 * MinSca_data[k])) +
                ((5.0 * xn5 + 16.0 * xn3) + 3.0 * t) /
                    (96.0 * (MinSca_data[k] * MinSca_data[k]))) +
               (((3.0 * xn7 + 19.0 * xn5) + 17.0 * xn3) - 15.0 * t) /
                   (384.0 * rt_powd_snf(MinSca_data[k], 3.0))) +
              ((((79.0 * rt_powd_snf(t, 9.0) + 776.0 * xn7) + 1482.0 * xn5) -
                1920.0 * xn3) -
               945.0 * t) /
                  (92160.0 * rt_powd_snf(MinSca_data[k], 4.0));
          MDRenv_data[k] = t;
        }
      }
    } else {
      MDRenv_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_tmp);
  nrows = x->size[0];
  u1 = MinSca->size[0];
  MinSca->size[0] = x->size[0];
  emxEnsureCapacity_real_T(MinSca, u1);
  MinSca_data = MinSca->data;
  for (k = 0; k < nrows; k++) {
    MinSca_data[k] = fabs(MDRenv_data[k]);
  }
  emxFree_real_T(&x);
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  u1 = b_y->size[0];
  b_y->size[0] = mm->size[0];
  emxEnsureCapacity_real_T(b_y, u1);
  y_data = b_y->data;
  nrows = mm->size[0];
  for (u1 = 0; u1 < nrows; u1++) {
    y_data[u1] = 0.5 * (mm_data[u1] / n + 1.0);
  }
  emxInit_real_T(&a, 1);
  u1 = a->size[0];
  a->size[0] = b_y->size[0];
  emxEnsureCapacity_real_T(a, u1);
  quant_data = a->data;
  u1 = b_y->size[0];
  for (k = 0; k < u1; k++) {
    if ((y_data[k] >= 0.0) && (y_data[k] <= 1.0)) {
      quant_data[k] = -1.4142135623730951 * erfcinv(2.0 * y_data[k]);
    } else {
      quant_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_y);
  emxInit_real_T(&r, 1);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  u1 = r->size[0];
  r->size[0] = a->size[0];
  emxEnsureCapacity_real_T(r, u1);
  MDRenv_data = r->data;
  u1 = a->size[0];
  for (k = 0; k < u1; k++) {
    MDRenv_data[k] =
        exp(-0.5 * quant_data[k] * quant_data[k]) / 2.5066282746310002;
  }
  if (mm->size[0] == 1) {
    csz_idx_0 = a->size[0];
  } else {
    csz_idx_0 = mm->size[0];
  }
  if ((mm->size[0] == a->size[0]) && (csz_idx_0 == r->size[0])) {
    nrows = mm->size[0];
    for (u1 = 0; u1 < nrows; u1++) {
      mm_data[u1] =
          1.0 - 2.0 * (n / mm_data[u1]) * quant_data[u1] * MDRenv_data[u1];
    }
  } else {
    lc_binary_expand_op(mm, n, a, r);
    mm_data = mm->data;
  }
  emxFree_real_T(&r);
  emxFree_real_T(&a);
  nrows = mm->size[0];
  for (k = 0; k < nrows; k++) {
    mm_data[k] = sqrt(mm_data[k]);
  }
  if (MinSca->size[0] == mm->size[0]) {
    u1 = MDRenv->size[0] * MDRenv->size[1];
    MDRenv->size[0] = m->size[0];
    MDRenv->size[1] = 2;
    emxEnsureCapacity_real_T(MDRenv, u1);
    MDRenv_data = MDRenv->data;
    nrows = m->size[0];
    for (u1 = 0; u1 < nrows; u1++) {
      MDRenv_data[u1] = m_data[u1];
    }
    nrows = MinSca->size[0];
    for (u1 = 0; u1 < nrows; u1++) {
      MDRenv_data[u1 + MDRenv->size[0]] = MinSca_data[u1] / mm_data[u1];
    }
  } else {
    kc_binary_expand_op(MDRenv, m, MinSca, mm);
  }
  emxFree_real_T(&MinSca);
  emxFree_real_T(&mm);
  emxFree_real_T(&m);
}

void c_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  static const double b_dv[4] = {0.010000000000000009, 0.0010000000000000009,
                                 0.99, 0.5};
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *y;
  double *MinSca_data;
  double *b_tmp_data;
  double *m_data;
  double *mm_data;
  double *quant_data;
  double *r1;
  int i;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
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
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  quant_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    quant_data = y->data;
    quant_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    quant_data = y->data;
    quant_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, i);
    quant_data = y->data;
    for (i = 0; i <= nrows; i++) {
      quant_data[i] = varargin_4 + (double)i;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    quant_data = y->data;
  }
  emxInit_real_T(&m, 1);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, i);
  m_data = m->data;
  nrows = y->size[1];
  for (i = 0; i < nrows; i++) {
    m_data[i] = quant_data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  i = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(mm, i);
  mm_data = mm->data;
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      mm_data[ibtile + k] = m_data[k];
    }
  }
  emxInit_real_T(&b_tmp, 2);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp_data[i] = n - mm_data[i];
  }
  emxInit_real_T(&MinSca, 2);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    MinSca_data[i] = mm_data[i] + 1.0;
  }
  emxInit_real_T(&b, 2);
  i = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 4;
  emxEnsureCapacity_real_T(b, i);
  quant_data = b->data;
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      quant_data[ibtile + k] = b_dv[outsize_idx_1];
    }
  }
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = b_tmp->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  nrows = b_tmp->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r1[i] = 2.0 * b_tmp_data[i];
  }
  emxInit_real_T(&r2, 2);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = MinSca->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity_real_T(r2, i);
  r1 = r2->data;
  nrows = MinSca->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r1[i] = 2.0 * MinSca_data[i];
  }
  emxInit_real_T(&quant, 2);
  d_finv(b, r, r2, quant);
  quant_data = quant->data;
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  emxFree_real_T(&r2);
  emxFree_real_T(&b);
  if (b_tmp->size[0] == 1) {
    nrows = quant->size[0];
  } else {
    nrows = b_tmp->size[0];
  }
  if (mm->size[0] == 1) {
    if (b_tmp->size[0] == 1) {
      ibtile = quant->size[0];
    } else {
      ibtile = b_tmp->size[0];
    }
  } else {
    ibtile = mm->size[0];
  }
  if ((b_tmp->size[0] == quant->size[0]) && (mm->size[0] == nrows) &&
      (MinSca->size[0] == ibtile)) {
    i = r->size[0] * r->size[1];
    r->size[0] = MinSca->size[0];
    r->size[1] = 4;
    emxEnsureCapacity_real_T(r, i);
    r1 = r->data;
    nrows = MinSca->size[0] * 4;
    for (i = 0; i < nrows; i++) {
      r1[i] = 0.5 * (MinSca_data[i] /
                         ((mm_data[i] + 1.0) + b_tmp_data[i] * quant_data[i]) +
                     1.0);
    }
    i = MinSca->size[0] * MinSca->size[1];
    MinSca->size[0] = mm->size[0];
    MinSca->size[1] = 4;
    emxEnsureCapacity_real_T(MinSca, i);
    MinSca_data = MinSca->data;
    nrows = mm->size[0] * 4;
    for (i = 0; i < nrows; i++) {
      MinSca_data[i] = mm_data[i] - p;
    }
    c_tinv(r, MinSca, b_tmp);
    b_tmp_data = b_tmp->data;
  } else {
    oc_binary_expand_op(b_tmp, MinSca, mm, quant, p);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&r);
  emxFree_real_T(&quant);
  nrows = b_tmp->size[0] << 2;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = b_tmp->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  for (k = 0; k < nrows; k++) {
    MinSca_data[k] = fabs(b_tmp_data[k]);
  }
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp_data[i] = 0.5 * (mm_data[i] / n + 1.0);
  }
  emxInit_real_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = b_tmp->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(a, i);
  quant_data = a->data;
  i = b_tmp->size[0] << 2;
  for (k = 0; k < i; k++) {
    if ((b_tmp_data[k] >= 0.0) && (b_tmp_data[k] <= 1.0)) {
      quant_data[k] = -1.4142135623730951 * erfcinv(2.0 * b_tmp_data[k]);
    } else {
      quant_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_tmp);
  emxInit_real_T(&r3, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r3->size[0] * r3->size[1];
  r3->size[0] = a->size[0];
  r3->size[1] = 4;
  emxEnsureCapacity_real_T(r3, i);
  r1 = r3->data;
  i = a->size[0] << 2;
  for (k = 0; k < i; k++) {
    r1[k] = exp(-0.5 * quant_data[k] * quant_data[k]) / 2.5066282746310002;
  }
  if (mm->size[0] == 1) {
    ibtile = a->size[0];
  } else {
    ibtile = mm->size[0];
  }
  if ((mm->size[0] == a->size[0]) && (ibtile == r3->size[0])) {
    nrows = mm->size[0] * 4;
    i = mm->size[0] * mm->size[1];
    mm->size[1] = 4;
    emxEnsureCapacity_real_T(mm, i);
    mm_data = mm->data;
    for (i = 0; i < nrows; i++) {
      mm_data[i] = 1.0 - 2.0 * (n / mm_data[i]) * quant_data[i] * r1[i];
    }
  } else {
    nc_binary_expand_op(mm, n, a, r3);
    mm_data = mm->data;
  }
  emxFree_real_T(&r3);
  emxFree_real_T(&a);
  nrows = mm->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    mm_data[k] = sqrt(mm_data[k]);
  }
  if (MinSca->size[0] == mm->size[0]) {
    nrows = MinSca->size[0] * 4;
    i = MinSca->size[0] * MinSca->size[1];
    MinSca->size[1] = 4;
    emxEnsureCapacity_real_T(MinSca, i);
    MinSca_data = MinSca->data;
    for (i = 0; i < nrows; i++) {
      MinSca_data[i] /= mm_data[i];
    }
  } else {
    d_rdivide(MinSca, mm);
    MinSca_data = MinSca->data;
  }
  emxFree_real_T(&mm);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (MinSca->size[0] != 0) {
    ibtile = MinSca->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    outsize_idx_1 = 4;
  } else {
    outsize_idx_1 = 0;
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = ibtile;
  MDRenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MDRenv, i);
  quant_data = MDRenv->data;
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (k = 0; k < ibtile; k++) {
      quant_data[k] = m_data[k];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < outsize_idx_1; i++) {
    for (k = 0; k < ibtile; k++) {
      quant_data[k + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          MinSca_data[k + ibtile * i];
    }
  }
  emxFree_real_T(&MinSca);
}

void d_FSRenvmdr(double n, double p, double varargin_4, emxArray_real_T *MDRenv)
{
  static const double b_dv[4] = {1.0000000000287557E-6, 9.9999999947364415E-8,
                                 0.99, 0.5};
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *y;
  double *MinSca_data;
  double *b_tmp_data;
  double *m_data;
  double *mm_data;
  double *quant_data;
  double *r1;
  int i;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  /* FSRenvmdr computes the theoretical envelopes of Minimum Deletion Residual
   * outside subset during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     n : number of observations. Scalar. Number of observations on which */
  /*        the envelopes are based. */
  /*     p : number of explanatory variables (including the intercept if */
  /*     present). Scalar. Number of expl. variables on which */
  /*        the envelopes are based. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*    init:       Search initialization. Scalar. */
  /*                Scalar which specifies the initial subset size to monitor */
  /*                minimum deletion residual, if init is not specified it will
   */
  /*                be set equal to */
  /*                    p+1, if the sample size is smaller than 40; */
  /*                    min(3*p+1,floor(0.5*(n+p+1))), otherwise. */
  /*                Example - 'init',100 starts monitoring from step m=100 */
  /*                Data Types - double */
  /*  */
  /*   prob:    quantiles for which envelopes have */
  /*                to be computed. Vector. */
  /*                1 x k vector containing quantiles for which envelopes have
   */
  /*                to be computed. The default is to produce 1%, 50% and 99% */
  /*                envelopes. */
  /*                Example - 'prob',[0.01 0.99] */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*   MDRenv:      forward envelopes of mdr. Matrix. Matrix with n-m0+1 rows */
  /*                and length(prob)+1 columns. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob(1); */
  /*                3rd col = envelope for quantile prob(2) */
  /*                ... */
  /*                (k+1) col = envelope for quantile prob(k). */
  /*  */
  /*  See also: LXS.m, FSReda.m */
  /*  */
  /*  References: */
  /*  */
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
  /* <a href="matlab: docsearchFS('FSRenvmdr')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % FSRenvmdr with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent */
  /*     % envelopes based on 1000 observations and 5 explanatory variables */
  /*     MDRenv=FSRenvmdr(10000,5); */
  /* } */
  /* { */
  /*     % Example with plot of the envelopes. */
  /*     % Example of creation of 1%, 50% and 99% */
  /*     % envelopes based on 100 observations and 5 explanatory variables */
  /*     Menv=FSRenvmdr(100,5); */
  /*     plot(Menv(:,1),Menv(:,2:4)); */
  /* } */
  /* { */
  /*     %%Comparing the accuracy of the envelopes computed with order
   * statistics with the simulated ones. */
  /*     % Fix a seed */
  /*     state=1000; */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     %RandStream.setDefaultStream(mtstream); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     %defaultStream = RandStream.getDefaultStream(); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous four lines with */
  /*     % randn('state', 1000); */
  /*  */
  /*     n=200; */
  /*     p=3; */
  /*     X=randn(n,p); */
  /*  */
  /*     init=20; */
  /*     nsimul=1000; */
  /*     mdrStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         y=randn(n,1); */
  /*         [out]=LXS(y,X,'nsamp',1000','msg',0); */
  /*         mdr = FSRmdr(y,X,out.bs,'init',init); */
  /*         mdrStore(:,j)=mdr(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mdrStore */
  /*     mdrStore=sort(mdrStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mdr(:,1),mdrStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mdrT=FSRenvmdr(n,p+1,'init',init); */
  /*     line(mdrT(:,1),mdrT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  quant_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    quant_data = y->data;
    quant_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, i);
    quant_data = y->data;
    quant_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, i);
    quant_data = y->data;
    for (i = 0; i <= nrows; i++) {
      quant_data[i] = varargin_4 + (double)i;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    quant_data = y->data;
  }
  emxInit_real_T(&m, 1);
  i = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, i);
  m_data = m->data;
  nrows = y->size[1];
  for (i = 0; i < nrows; i++) {
    m_data[i] = quant_data[i];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  i = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = 4;
  emxEnsureCapacity_real_T(mm, i);
  mm_data = mm->data;
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      mm_data[ibtile + k] = m_data[k];
    }
  }
  emxInit_real_T(&b_tmp, 2);
  /*  finv finds the inverse of the F distribution. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp_data[i] = n - mm_data[i];
  }
  emxInit_real_T(&MinSca, 2);
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    MinSca_data[i] = mm_data[i] + 1.0;
  }
  emxInit_real_T(&b, 2);
  i = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 4;
  emxEnsureCapacity_real_T(b, i);
  quant_data = b->data;
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      quant_data[ibtile + k] = b_dv[outsize_idx_1];
    }
  }
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  r->size[0] = b_tmp->size[0];
  r->size[1] = 4;
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  nrows = b_tmp->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r1[i] = 2.0 * b_tmp_data[i];
  }
  emxInit_real_T(&r2, 2);
  i = r2->size[0] * r2->size[1];
  r2->size[0] = MinSca->size[0];
  r2->size[1] = 4;
  emxEnsureCapacity_real_T(r2, i);
  r1 = r2->data;
  nrows = MinSca->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    r1[i] = 2.0 * MinSca_data[i];
  }
  emxInit_real_T(&quant, 2);
  d_finv(b, r, r2, quant);
  quant_data = quant->data;
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  emxFree_real_T(&r2);
  emxFree_real_T(&b);
  if (b_tmp->size[0] == 1) {
    nrows = quant->size[0];
  } else {
    nrows = b_tmp->size[0];
  }
  if (mm->size[0] == 1) {
    if (b_tmp->size[0] == 1) {
      ibtile = quant->size[0];
    } else {
      ibtile = b_tmp->size[0];
    }
  } else {
    ibtile = mm->size[0];
  }
  if ((b_tmp->size[0] == quant->size[0]) && (mm->size[0] == nrows) &&
      (MinSca->size[0] == ibtile)) {
    i = r->size[0] * r->size[1];
    r->size[0] = MinSca->size[0];
    r->size[1] = 4;
    emxEnsureCapacity_real_T(r, i);
    r1 = r->data;
    nrows = MinSca->size[0] * 4;
    for (i = 0; i < nrows; i++) {
      r1[i] = 0.5 * (MinSca_data[i] /
                         ((mm_data[i] + 1.0) + b_tmp_data[i] * quant_data[i]) +
                     1.0);
    }
    i = MinSca->size[0] * MinSca->size[1];
    MinSca->size[0] = mm->size[0];
    MinSca->size[1] = 4;
    emxEnsureCapacity_real_T(MinSca, i);
    MinSca_data = MinSca->data;
    nrows = mm->size[0] * 4;
    for (i = 0; i < nrows; i++) {
      MinSca_data[i] = mm_data[i] - p;
    }
    c_tinv(r, MinSca, b_tmp);
    b_tmp_data = b_tmp->data;
  } else {
    oc_binary_expand_op(b_tmp, MinSca, mm, quant, p);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&r);
  emxFree_real_T(&quant);
  nrows = b_tmp->size[0] << 2;
  i = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = b_tmp->size[0];
  MinSca->size[1] = 4;
  emxEnsureCapacity_real_T(MinSca, i);
  MinSca_data = MinSca->data;
  for (k = 0; k < nrows; k++) {
    MinSca_data[k] = fabs(b_tmp_data[k]);
  }
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  nrows = mm->size[0] * 4;
  for (i = 0; i < nrows; i++) {
    b_tmp_data[i] = 0.5 * (mm_data[i] / n + 1.0);
  }
  emxInit_real_T(&a, 2);
  i = a->size[0] * a->size[1];
  a->size[0] = b_tmp->size[0];
  a->size[1] = 4;
  emxEnsureCapacity_real_T(a, i);
  quant_data = a->data;
  i = b_tmp->size[0] << 2;
  for (k = 0; k < i; k++) {
    if ((b_tmp_data[k] >= 0.0) && (b_tmp_data[k] <= 1.0)) {
      quant_data[k] = -1.4142135623730951 * erfcinv(2.0 * b_tmp_data[k]);
    } else {
      quant_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_tmp);
  emxInit_real_T(&r3, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  i = r3->size[0] * r3->size[1];
  r3->size[0] = a->size[0];
  r3->size[1] = 4;
  emxEnsureCapacity_real_T(r3, i);
  r1 = r3->data;
  i = a->size[0] << 2;
  for (k = 0; k < i; k++) {
    r1[k] = exp(-0.5 * quant_data[k] * quant_data[k]) / 2.5066282746310002;
  }
  if (mm->size[0] == 1) {
    ibtile = a->size[0];
  } else {
    ibtile = mm->size[0];
  }
  if ((mm->size[0] == a->size[0]) && (ibtile == r3->size[0])) {
    nrows = mm->size[0] * 4;
    i = mm->size[0] * mm->size[1];
    mm->size[1] = 4;
    emxEnsureCapacity_real_T(mm, i);
    mm_data = mm->data;
    for (i = 0; i < nrows; i++) {
      mm_data[i] = 1.0 - 2.0 * (n / mm_data[i]) * quant_data[i] * r1[i];
    }
  } else {
    nc_binary_expand_op(mm, n, a, r3);
    mm_data = mm->data;
  }
  emxFree_real_T(&r3);
  emxFree_real_T(&a);
  nrows = mm->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    mm_data[k] = sqrt(mm_data[k]);
  }
  if (MinSca->size[0] == mm->size[0]) {
    nrows = MinSca->size[0] * 4;
    i = MinSca->size[0] * MinSca->size[1];
    MinSca->size[1] = 4;
    emxEnsureCapacity_real_T(MinSca, i);
    MinSca_data = MinSca->data;
    for (i = 0; i < nrows; i++) {
      MinSca_data[i] /= mm_data[i];
    }
  } else {
    d_rdivide(MinSca, mm);
    MinSca_data = MinSca->data;
  }
  emxFree_real_T(&mm);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (MinSca->size[0] != 0) {
    ibtile = MinSca->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (MinSca->size[0] != 0)) {
    outsize_idx_1 = 4;
  } else {
    outsize_idx_1 = 0;
  }
  i = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = ibtile;
  MDRenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MDRenv, i);
  quant_data = MDRenv->data;
  nrows = input_sizes_idx_1;
  for (i = 0; i < nrows; i++) {
    for (k = 0; k < ibtile; k++) {
      quant_data[k] = m_data[k];
    }
  }
  emxFree_real_T(&m);
  for (i = 0; i < outsize_idx_1; i++) {
    for (k = 0; k < ibtile; k++) {
      quant_data[k + MDRenv->size[0] * (i + input_sizes_idx_1)] =
          MinSca_data[k + ibtile * i];
    }
  }
  emxFree_real_T(&MinSca);
}

void vc_binary_expand_op(emxArray_real_T *mm, double n,
                         const emxArray_real_T *a, const emxArray_real_T *r3)
{
  emxArray_real_T *r1;
  const double *a_data;
  const double *r;
  double *mm_data;
  double *r2;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  int stride_2_0;
  int stride_2_1;
  r = r3->data;
  a_data = a->data;
  mm_data = mm->data;
  emxInit_real_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  if (r3->size[0] == 1) {
    if (a->size[0] == 1) {
      r1->size[0] = mm->size[0];
    } else {
      r1->size[0] = a->size[0];
    }
  } else {
    r1->size[0] = r3->size[0];
  }
  if (r3->size[1] == 1) {
    if (a->size[1] == 1) {
      r1->size[1] = mm->size[1];
    } else {
      r1->size[1] = a->size[1];
    }
  } else {
    r1->size[1] = r3->size[1];
  }
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (mm->size[0] != 1);
  stride_0_1 = (mm->size[1] != 1);
  stride_1_0 = (a->size[0] != 1);
  stride_1_1 = (a->size[1] != 1);
  stride_2_0 = (r3->size[0] != 1);
  stride_2_1 = (r3->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  if (r3->size[1] == 1) {
    if (a->size[1] == 1) {
      loop_ub = mm->size[1];
    } else {
      loop_ub = a->size[1];
    }
  } else {
    loop_ub = r3->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r3->size[0] == 1) {
      if (a->size[0] == 1) {
        b_loop_ub = mm->size[0];
      } else {
        b_loop_ub = a->size[0];
      }
    } else {
      b_loop_ub = r3->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r2[i1 + r1->size[0] * i] =
          1.0 - 2.0 * (n / mm_data[i1 * stride_0_0 + mm->size[0] * aux_0_1]) *
                    a_data[i1 * stride_1_0 + a->size[0] * aux_1_1] *
                    r[i1 * stride_2_0 + r3->size[0] * aux_2_1];
    }
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = mm->size[0] * mm->size[1];
  mm->size[0] = r1->size[0];
  mm->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(mm, i);
  mm_data = mm->data;
  loop_ub = r1->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      mm_data[i1 + mm->size[0] * i] = r2[i1 + r1->size[0] * i];
    }
  }
  emxFree_real_T(&r1);
}

void wc_binary_expand_op(emxArray_real_T *b_tmp, const emxArray_real_T *MinSca,
                         const emxArray_real_T *mm,
                         const emxArray_real_T *quant, double p)
{
  emxArray_real_T *b_mm;
  emxArray_real_T *r;
  const double *MinSca_data;
  const double *mm_data;
  const double *quant_data;
  double *b_tmp_data;
  double *r1;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int aux_3_1;
  int b_quant;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  int stride_2_0;
  int stride_2_1;
  int stride_3_0;
  int stride_3_1;
  quant_data = quant->data;
  mm_data = mm->data;
  MinSca_data = MinSca->data;
  b_tmp_data = b_tmp->data;
  emxInit_real_T(&r, 2);
  i = r->size[0] * r->size[1];
  if (quant->size[0] == 1) {
    b_quant = b_tmp->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = mm->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = b_tmp->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    r->size[0] = MinSca->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      r->size[0] = mm->size[0];
    } else if (quant->size[0] == 1) {
      r->size[0] = b_tmp->size[0];
    } else {
      r->size[0] = quant->size[0];
    }
  }
  if (quant->size[1] == 1) {
    b_quant = b_tmp->size[1];
  } else {
    b_quant = quant->size[1];
  }
  if (b_quant == 1) {
    b_quant = mm->size[1];
  } else if (quant->size[1] == 1) {
    b_quant = b_tmp->size[1];
  } else {
    b_quant = quant->size[1];
  }
  if (b_quant == 1) {
    r->size[1] = MinSca->size[1];
  } else {
    if (quant->size[1] == 1) {
      b_quant = b_tmp->size[1];
    } else {
      b_quant = quant->size[1];
    }
    if (b_quant == 1) {
      r->size[1] = mm->size[1];
    } else if (quant->size[1] == 1) {
      r->size[1] = b_tmp->size[1];
    } else {
      r->size[1] = quant->size[1];
    }
  }
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  stride_0_0 = (MinSca->size[0] != 1);
  stride_0_1 = (MinSca->size[1] != 1);
  stride_1_0 = (mm->size[0] != 1);
  stride_1_1 = (mm->size[1] != 1);
  stride_2_0 = (b_tmp->size[0] != 1);
  stride_2_1 = (b_tmp->size[1] != 1);
  stride_3_0 = (quant->size[0] != 1);
  stride_3_1 = (quant->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  aux_3_1 = 0;
  if (quant->size[1] == 1) {
    b_quant = b_tmp->size[1];
  } else {
    b_quant = quant->size[1];
  }
  if (b_quant == 1) {
    b_quant = mm->size[1];
  } else if (quant->size[1] == 1) {
    b_quant = b_tmp->size[1];
  } else {
    b_quant = quant->size[1];
  }
  if (b_quant == 1) {
    loop_ub = MinSca->size[1];
  } else {
    if (quant->size[1] == 1) {
      b_quant = b_tmp->size[1];
    } else {
      b_quant = quant->size[1];
    }
    if (b_quant == 1) {
      loop_ub = mm->size[1];
    } else if (quant->size[1] == 1) {
      loop_ub = b_tmp->size[1];
    } else {
      loop_ub = quant->size[1];
    }
  }
  for (i = 0; i < loop_ub; i++) {
    if (quant->size[0] == 1) {
      b_quant = b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = mm->size[0];
    } else if (quant->size[0] == 1) {
      b_quant = b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = MinSca->size[0];
    } else {
      if (quant->size[0] == 1) {
        b_quant = b_tmp->size[0];
      } else {
        b_quant = quant->size[0];
      }
      if (b_quant == 1) {
        b_quant = mm->size[0];
      } else if (quant->size[0] == 1) {
        b_quant = b_tmp->size[0];
      } else {
        b_quant = quant->size[0];
      }
    }
    for (i1 = 0; i1 < b_quant; i1++) {
      r1[i1 + r->size[0] * i] =
          0.5 *
          (MinSca_data[i1 * stride_0_0 + MinSca->size[0] * aux_0_1] /
               ((mm_data[i1 * stride_1_0 + mm->size[0] * aux_1_1] + 1.0) +
                b_tmp_data[i1 * stride_2_0 + b_tmp->size[0] * aux_2_1] *
                    quant_data[i1 * stride_3_0 + quant->size[0] * aux_3_1]) +
           1.0);
    }
    aux_3_1 += stride_3_1;
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  emxInit_real_T(&b_mm, 2);
  i = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = mm->size[0];
  b_mm->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(b_mm, i);
  b_tmp_data = b_mm->data;
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_tmp_data[i] = mm_data[i] - p;
  }
  b_tinv(r, b_mm, b_tmp);
  emxFree_real_T(&b_mm);
  emxFree_real_T(&r);
}

/* End of code generation (FSRenvmdr.c) */
