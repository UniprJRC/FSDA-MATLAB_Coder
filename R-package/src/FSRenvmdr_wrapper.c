/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRenvmdr_wrapper.c
 *
 * Code generation for function 'FSRenvmdr_wrapper'
 *
 */

/* Include files */
#include "FSRenvmdr_wrapper.h"
#include "FSRenvmdr.h"
#include "colon.h"
#include "div.h"
#include "erfcinv.h"
#include "finv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "tinv.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void FSRenvmdr_wrapper(double n, double p, double init,
                       const emxArray_real_T *prob, emxArray_real_T *MDRenv)
{
  emxArray_real_T *MinSca;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  const double *prob_data;
  double *MinSca_data;
  double *b_tmp_data;
  double *m_data;
  double *mm_data;
  double *quant_data;
  double *y_data;
  int ibtile;
  int itilerow;
  int jtilecol;
  int k;
  int nrows;
  int ntilecols;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  prob_data = prob->data;
  emxInit_real_T(&y, 2);
  y_data = y->data;
  /*  Required input arguments */
  /*  n a scalar double */
  /*  p a scalar double */
  /*  Optional input arguments (name / pairs) */
  /*  init a scalar double */
  /* prob: a row vector of doubles of any length */
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
  if (rtIsNaN(init) || rtIsNaN(n - 1.0)) {
    itilerow = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, itilerow);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (n - 1.0 < init) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(init) || rtIsInf(n - 1.0)) && (init == n - 1.0)) {
    itilerow = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, itilerow);
    y_data = y->data;
    y_data[0] = rtNaN;
  } else if (floor(init) == init) {
    itilerow = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - init);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, itilerow);
    y_data = y->data;
    for (itilerow = 0; itilerow <= nrows; itilerow++) {
      y_data[itilerow] = init + (double)itilerow;
    }
  } else {
    eml_float_colon(init, n - 1.0, y);
    y_data = y->data;
  }
  emxInit_real_T(&m, 1);
  itilerow = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, itilerow);
  m_data = m->data;
  nrows = y->size[1];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    m_data[itilerow] = y_data[itilerow];
  }
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  itilerow = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = prob->size[1];
  emxEnsureCapacity_real_T(mm, itilerow);
  mm_data = mm->data;
  nrows = m->size[0];
  ntilecols = prob->size[1];
  for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
    ibtile = jtilecol * nrows;
    for (k = 0; k < nrows; k++) {
      mm_data[ibtile + k] = m_data[k];
    }
  }
  emxInit_real_T(&b_tmp, 2);
  /*  finv finds the inverse of the F distribution. */
  itilerow = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(b_tmp, itilerow);
  b_tmp_data = b_tmp->data;
  nrows = mm->size[0] * mm->size[1];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    b_tmp_data[itilerow] = n - mm_data[itilerow];
  }
  emxInit_real_T(&MinSca, 2);
  itilerow = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = mm->size[0];
  MinSca->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(MinSca, itilerow);
  MinSca_data = MinSca->data;
  nrows = mm->size[0] * mm->size[1];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    MinSca_data[itilerow] = mm_data[itilerow] + 1.0;
  }
  itilerow = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = prob->size[1];
  emxEnsureCapacity_real_T(y, itilerow);
  y_data = y->data;
  nrows = prob->size[1];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    y_data[itilerow] = 1.0 - prob_data[itilerow];
  }
  emxInit_real_T(&b, 2);
  itilerow = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = y->size[1];
  emxEnsureCapacity_real_T(b, itilerow);
  quant_data = b->data;
  nrows = y->size[1];
  ntilecols = m->size[0];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    ibtile = jtilecol * ntilecols;
    for (itilerow = 0; itilerow < ntilecols; itilerow++) {
      quant_data[ibtile + itilerow] = y_data[jtilecol];
    }
  }
  emxFree_real_T(&y);
  emxInit_real_T(&r, 2);
  itilerow = r->size[0] * r->size[1];
  r->size[0] = b_tmp->size[0];
  r->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(r, itilerow);
  y_data = r->data;
  nrows = b_tmp->size[0] * b_tmp->size[1];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    y_data[itilerow] = 2.0 * b_tmp_data[itilerow];
  }
  emxInit_real_T(&r1, 2);
  itilerow = r1->size[0] * r1->size[1];
  r1->size[0] = MinSca->size[0];
  r1->size[1] = MinSca->size[1];
  emxEnsureCapacity_real_T(r1, itilerow);
  y_data = r1->data;
  nrows = MinSca->size[0] * MinSca->size[1];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    y_data[itilerow] = 2.0 * MinSca_data[itilerow];
  }
  emxInit_real_T(&quant, 2);
  c_finv(b, r, r1, quant);
  quant_data = quant->data;
  /*  from the equivalence with Incomplete beta distribution. */
  /*  Minsca = matrix of the scaled MDR envelopes in each step of the search. */
  emxFree_real_T(&r1);
  if (b_tmp->size[0] == 1) {
    nrows = quant->size[0];
  } else {
    nrows = b_tmp->size[0];
  }
  if (b_tmp->size[1] == 1) {
    ntilecols = quant->size[1];
  } else {
    ntilecols = b_tmp->size[1];
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
  if (mm->size[1] == 1) {
    if (b_tmp->size[1] == 1) {
      itilerow = quant->size[1];
    } else {
      itilerow = b_tmp->size[1];
    }
  } else {
    itilerow = mm->size[1];
  }
  if ((b_tmp->size[0] == quant->size[0]) &&
      (b_tmp->size[1] == quant->size[1]) && (mm->size[0] == nrows) &&
      (mm->size[1] == ntilecols) && (MinSca->size[0] == ibtile) &&
      (MinSca->size[1] == itilerow)) {
    itilerow = r->size[0] * r->size[1];
    r->size[0] = MinSca->size[0];
    r->size[1] = MinSca->size[1];
    emxEnsureCapacity_real_T(r, itilerow);
    y_data = r->data;
    nrows = MinSca->size[0] * MinSca->size[1];
    for (itilerow = 0; itilerow < nrows; itilerow++) {
      y_data[itilerow] =
          0.5 * (MinSca_data[itilerow] /
                     ((mm_data[itilerow] + 1.0) +
                      b_tmp_data[itilerow] * quant_data[itilerow]) +
                 1.0);
    }
    itilerow = b->size[0] * b->size[1];
    b->size[0] = mm->size[0];
    b->size[1] = mm->size[1];
    emxEnsureCapacity_real_T(b, itilerow);
    quant_data = b->data;
    nrows = mm->size[0] * mm->size[1];
    for (itilerow = 0; itilerow < nrows; itilerow++) {
      quant_data[itilerow] = mm_data[itilerow] - p;
    }
    b_tinv(r, b, b_tmp);
    b_tmp_data = b_tmp->data;
  } else {
    wc_binary_expand_op(b_tmp, MinSca, mm, quant, p);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&r);
  emxFree_real_T(&b);
  emxFree_real_T(&quant);
  nrows = b_tmp->size[0] * b_tmp->size[1];
  itilerow = MinSca->size[0] * MinSca->size[1];
  MinSca->size[0] = b_tmp->size[0];
  MinSca->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(MinSca, itilerow);
  MinSca_data = MinSca->data;
  for (k = 0; k < nrows; k++) {
    MinSca_data[k] = fabs(b_tmp_data[k]);
  }
  /*  Compute variance of the truncated normal distribution. */
  /*  mm/n is the percentage of observations inside subset. */
  itilerow = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(b_tmp, itilerow);
  b_tmp_data = b_tmp->data;
  nrows = mm->size[0] * mm->size[1];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    b_tmp_data[itilerow] = 0.5 * (mm_data[itilerow] / n + 1.0);
  }
  emxInit_real_T(&a, 2);
  itilerow = a->size[0] * a->size[1];
  a->size[0] = b_tmp->size[0];
  a->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(a, itilerow);
  quant_data = a->data;
  itilerow = b_tmp->size[0] * b_tmp->size[1];
  for (k = 0; k < itilerow; k++) {
    if ((b_tmp_data[k] >= 0.0) && (b_tmp_data[k] <= 1.0)) {
      quant_data[k] = -1.4142135623730951 * erfcinv(2.0 * b_tmp_data[k]);
    } else {
      quant_data[k] = rtNaN;
    }
  }
  emxFree_real_T(&b_tmp);
  emxInit_real_T(&r2, 2);
  /* corr=1-(2*a.*normpdf(a))./(2*normcdf(a)-1); */
  itilerow = r2->size[0] * r2->size[1];
  r2->size[0] = a->size[0];
  r2->size[1] = a->size[1];
  emxEnsureCapacity_real_T(r2, itilerow);
  y_data = r2->data;
  itilerow = a->size[0] * a->size[1];
  for (k = 0; k < itilerow; k++) {
    y_data[k] = exp(-0.5 * quant_data[k] * quant_data[k]) / 2.5066282746310002;
  }
  if (mm->size[0] == 1) {
    ibtile = a->size[0];
  } else {
    ibtile = mm->size[0];
  }
  if (mm->size[1] == 1) {
    itilerow = a->size[1];
  } else {
    itilerow = mm->size[1];
  }
  if ((mm->size[0] == a->size[0]) && (mm->size[1] == a->size[1]) &&
      (ibtile == r2->size[0]) && (itilerow == r2->size[1])) {
    nrows = mm->size[0] * mm->size[1];
    for (itilerow = 0; itilerow < nrows; itilerow++) {
      mm_data[itilerow] = 1.0 - 2.0 * (n / mm_data[itilerow]) *
                                    quant_data[itilerow] * y_data[itilerow];
    }
  } else {
    vc_binary_expand_op(mm, n, a, r2);
    mm_data = mm->data;
  }
  emxFree_real_T(&r2);
  emxFree_real_T(&a);
  nrows = mm->size[0] * mm->size[1];
  for (k = 0; k < nrows; k++) {
    mm_data[k] = sqrt(mm_data[k]);
  }
  if ((MinSca->size[0] == mm->size[0]) && (MinSca->size[1] == mm->size[1])) {
    nrows = MinSca->size[0] * MinSca->size[1];
    for (itilerow = 0; itilerow < nrows; itilerow++) {
      MinSca_data[itilerow] /= mm_data[itilerow];
    }
  } else {
    rdivide(MinSca, mm);
    MinSca_data = MinSca->data;
  }
  emxFree_real_T(&mm);
  if (m->size[0] != 0) {
    ntilecols = m->size[0];
  } else if ((MinSca->size[0] != 0) && (MinSca->size[1] != 0)) {
    ntilecols = MinSca->size[0];
  } else {
    ntilecols = 0;
    if (MinSca->size[0] > 0) {
      ntilecols = MinSca->size[0];
    }
  }
  empty_non_axis_sizes = (ntilecols == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((MinSca->size[0] != 0) && (MinSca->size[1] != 0))) {
    ibtile = MinSca->size[1];
  } else {
    ibtile = 0;
  }
  itilerow = MDRenv->size[0] * MDRenv->size[1];
  MDRenv->size[0] = ntilecols;
  MDRenv->size[1] = input_sizes_idx_1 + ibtile;
  emxEnsureCapacity_real_T(MDRenv, itilerow);
  quant_data = MDRenv->data;
  nrows = input_sizes_idx_1;
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
      quant_data[jtilecol] = m_data[jtilecol];
    }
  }
  emxFree_real_T(&m);
  for (itilerow = 0; itilerow < ibtile; itilerow++) {
    for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
      quant_data[jtilecol + MDRenv->size[0] * (itilerow + input_sizes_idx_1)] =
          MinSca_data[jtilecol + ntilecols * itilerow];
    }
  }
  emxFree_real_T(&MinSca);
}

/* End of code generation (FSRenvmdr_wrapper.c) */
