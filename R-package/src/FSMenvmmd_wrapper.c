/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMenvmmd_wrapper.c
 *
 * Code generation for function 'FSMenvmmd_wrapper'
 *
 */

/* Include files */
#include "FSMenvmmd_wrapper.h"
#include "FSMenvmmd.h"
#include "chi2cdf.h"
#include "chi2inv.h"
#include "colon.h"
#include "div.h"
#include "finv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void FSMenvmmd_wrapper(double n, double v, double init,
                       const emxArray_real_T *prob, bool scaled,
                       emxArray_real_T *MMDenv)
{
  emxArray_real_T *a;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_mm;
  emxArray_real_T *b_tmp;
  emxArray_real_T *c_b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *mm;
  emxArray_real_T *quant;
  emxArray_real_T *y;
  const double *prob_data;
  double *a_data;
  double *b_b_tmp_data;
  double *b_tmp_data;
  double *m_data;
  double *mm_data;
  double *quant_data;
  int d_b_tmp;
  int e_b_tmp;
  int ibtile;
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
  quant_data = y->data;
  /*  Required input arguments */
  /*  n a scalar double */
  /*  p a scalar double */
  /*  Optional input arguments (name / pairs) */
  /*  init a scalar double */
  /* prob: a row vector of doubles of any length */
  /*  scaled a scalar boolean */
  /* FSMenvmmd computes the theoretical envelopes of Minimum MD outside subset
   * during the search */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  n :           Number of observations. Scalar. Number of observations. */
  /*                Data Types - single | double */
  /*  v :           Number of variables. Scalar. Number of variables. */
  /*                Data Types - single | double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  init :       Point where to start monitoring required diagnostics. Scalar.
   */
  /*               Note that if bsb is supplied, init>=length(bsb). If init is
   * not */
  /*               specified it will be set equal to floor(n*0.6). */
  /*                  Example - 'init',50 */
  /*                  Data Types - double */
  /*  */
  /*  prob:        quantiles for which envelopes have */
  /*                to be computed. Vector. Vector containing 1 x k elements .
   */
  /*                The default is to produce 1 per cent, 50 per cent and 99 per
   * cent envelopes. */
  /*                  Example - 'prob',[0.05 0.95] */
  /*                  Data Types - double */
  /*  */
  /*    scaled:  It indicates how to compute the envelopes. Boolean. */
  /*                If scaled=true0 the envelopes are produced for */
  /*                scaled Mahalanobis distances (no consistency factor is */
  /*                applied) else the traditional consistency factor is applied
   */
  /*                (this is the default) */
  /*                  Example - 'scaled',false */
  /*                  Data Types - logical */
  /*  */
  /*  Output: */
  /*  */
  /*   MMDenv=      n-m0+1 x length(prob)+1 columns containing the envelopes */
  /*                for the requested quantiles. */
  /*                1st col = fwd search index from m0 to n-1; */
  /*                2nd col = envelope for quantile prob[1]; */
  /*                3rd col = envelope for quantile prob[2]; */
  /*                ...; */
  /*                (k+1) col = envelope for quantile prob[k]. */
  /*  */
  /*  See also FSMenvmmd.m, FSM.m */
  /*  */
  /*  References: */
  /*  */
  /*  Riani, M., Atkinson, A.C. and Cerioli, A. (2009), Finding an unknown */
  /*  number of multivariate outliers, "Journal of the Royal Statistical */
  /*  Society Series B", Vol. 71, pp. 201-221. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('FSMenvmmd')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
  /* { */
  /*     %% FSMenvmmd with all default options. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. */
  /*     MMDenv=FSMenvmmd(10000,5); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% FSMenvmmd with otpional arguments. */
  /*     % Example of creation of 1 per cent, 50 per cent and 99 per cent
   * envelopes based on 10000 */
  /*     % observations and 5 explanatory variables. The envelopes are produced
   * for */
  /*     % scaled Mahalanobis distances (no consistency factor is applied) */
  /*     MMDenv=FSMenvmmd(10000,5,'scaled',1); */
  /*     plot(MMDenv(:,1),MMDenv(:,2:end)) */
  /* } */
  /* { */
  /*     %% Order statistics and simulations envelopes . */
  /*     % In this example we compare the accuracy of the envelopes computed
   * with */
  /*     % order statistics with those which come from simulations. */
  /*  */
  /*     % Fix a seed */
  /*     state=1000; */
  /*  */
  /*     mtstream = RandStream('shr3cong','Seed',state); */
  /*     RandStream.setGlobalStream(mtstream); */
  /*     defaultStream = RandStream.getGlobalStream(); */
  /*     reset(defaultStream) */
  /*  */
  /*     % If you run this example in a version older than 7.9 replace the
   * previous */
  /*     % four lines with */
  /*     % randn('state', 1000); */
  /*     n=200; */
  /*     p=3; */
  /*  */
  /*     init=25; */
  /*     nsimul=1000; */
  /*     mmdStore=zeros(n-init,nsimul); */
  /*  */
  /*     for j=1:nsimul */
  /*         Y=randn(n,p); */
  /*         [fre]=unibiv(Y); */
  /*         %create an initial subset with the 20 observations with the lowest
   */
  /*         %Mahalanobis Distance */
  /*         fre=sortrows(fre,4); */
  /*         bs=fre(1:25,1); */
  /*         mmd = FSMmmd(Y,bs,'init',init); */
  /*         mmdStore(:,j)=mmd(:,2); */
  /*     end */
  /*  */
  /*     % Sort rows of matrix mmdStore */
  /*     mmdStore=sort(mmdStore,2); */
  /*  */
  /*     % Create figure which compares empirical and theoretical forward
   * envelopes */
  /*     % for minimum deletion residual */
  /*     figure; */
  /*     hold('on'); */
  /*     quant=[0.01 0.5 0.99]; */
  /*     sel=round(nsimul*quant); */
  /*     % Plot lines of empirical quantiles */
  /*     line(mmd(:,1),mmdStore(:,sel),'LineStyle','--','Color','g'); */
  /*     % Plots lines of theoretical quantiles using order statistics */
  /*     mmdT=FSMenvmmd(n,p,'init',init); */
  /*     line(mmdT(:,1),mmdT(:,2:4),'LineStyle','-','Color','r'); */
  /*     xlabel('Subset size m'); */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checks */
  /*  Note that prob must be a row vector */
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  if (rtIsNaN(init) || rtIsNaN(n - 1.0)) {
    jtilecol = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, jtilecol);
    quant_data = y->data;
    quant_data[0] = rtNaN;
  } else if (n - 1.0 < init) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(init) || rtIsInf(n - 1.0)) && (init == n - 1.0)) {
    jtilecol = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, jtilecol);
    quant_data = y->data;
    quant_data[0] = rtNaN;
  } else if (floor(init) == init) {
    jtilecol = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - init);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, jtilecol);
    quant_data = y->data;
    for (jtilecol = 0; jtilecol <= nrows; jtilecol++) {
      quant_data[jtilecol] = init + (double)jtilecol;
    }
  } else {
    eml_float_colon(init, n - 1.0, y);
    quant_data = y->data;
  }
  emxInit_real_T(&m, 1);
  jtilecol = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, jtilecol);
  m_data = m->data;
  nrows = y->size[1];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    m_data[jtilecol] = quant_data[jtilecol];
  }
  emxInit_real_T(&mm, 2);
  /*  mm = fwd search index replicated lp times. */
  jtilecol = mm->size[0] * mm->size[1];
  mm->size[0] = m->size[0];
  mm->size[1] = prob->size[1];
  emxEnsureCapacity_real_T(mm, jtilecol);
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
  jtilecol = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = mm->size[0];
  b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(b_tmp, jtilecol);
  b_tmp_data = b_tmp->data;
  nrows = mm->size[0] * mm->size[1];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    b_tmp_data[jtilecol] = n - mm_data[jtilecol];
  }
  emxInit_real_T(&b_b_tmp, 2);
  jtilecol = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = mm->size[0];
  b_b_tmp->size[1] = mm->size[1];
  emxEnsureCapacity_real_T(b_b_tmp, jtilecol);
  b_b_tmp_data = b_b_tmp->data;
  nrows = mm->size[0] * mm->size[1];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    b_b_tmp_data[jtilecol] = mm_data[jtilecol] + 1.0;
  }
  jtilecol = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = prob->size[1];
  emxEnsureCapacity_real_T(y, jtilecol);
  quant_data = y->data;
  nrows = prob->size[1];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    quant_data[jtilecol] = 1.0 - prob_data[jtilecol];
  }
  emxInit_real_T(&a, 2);
  jtilecol = a->size[0] * a->size[1];
  a->size[0] = m->size[0];
  a->size[1] = y->size[1];
  emxEnsureCapacity_real_T(a, jtilecol);
  a_data = a->data;
  nrows = y->size[1];
  ntilecols = m->size[0];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    ibtile = jtilecol * ntilecols;
    for (k = 0; k < ntilecols; k++) {
      a_data[ibtile + k] = quant_data[jtilecol];
    }
  }
  emxFree_real_T(&y);
  emxInit_real_T(&c_b_tmp, 2);
  jtilecol = c_b_tmp->size[0] * c_b_tmp->size[1];
  c_b_tmp->size[0] = b_tmp->size[0];
  c_b_tmp->size[1] = b_tmp->size[1];
  emxEnsureCapacity_real_T(c_b_tmp, jtilecol);
  a_data = c_b_tmp->data;
  nrows = b_tmp->size[0] * b_tmp->size[1];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    a_data[jtilecol] = 2.0 * b_tmp_data[jtilecol];
  }
  emxInit_real_T(&b_mm, 2);
  jtilecol = b_mm->size[0] * b_mm->size[1];
  b_mm->size[0] = b_b_tmp->size[0];
  b_mm->size[1] = b_b_tmp->size[1];
  emxEnsureCapacity_real_T(b_mm, jtilecol);
  a_data = b_mm->data;
  nrows = b_b_tmp->size[0] * b_b_tmp->size[1];
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    a_data[jtilecol] = 2.0 * b_b_tmp_data[jtilecol];
  }
  emxInit_real_T(&quant, 2);
  c_finv(a, c_b_tmp, b_mm, quant);
  quant_data = quant->data;
  /*  from the equivalence with the incomplete beta distribution. */
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  if (b_tmp->size[0] == 1) {
    d_b_tmp = quant->size[0];
  } else {
    d_b_tmp = b_tmp->size[0];
  }
  if (b_tmp->size[1] == 1) {
    e_b_tmp = quant->size[1];
  } else {
    e_b_tmp = b_tmp->size[1];
  }
  if (mm->size[0] == 1) {
    if (b_tmp->size[0] == 1) {
      nrows = quant->size[0];
    } else {
      nrows = b_tmp->size[0];
    }
  } else {
    nrows = mm->size[0];
  }
  if (mm->size[1] == 1) {
    if (b_tmp->size[1] == 1) {
      ntilecols = quant->size[1];
    } else {
      ntilecols = b_tmp->size[1];
    }
  } else {
    ntilecols = mm->size[1];
  }
  if ((b_tmp->size[0] == quant->size[0]) &&
      (b_tmp->size[1] == quant->size[1]) && (mm->size[0] == d_b_tmp) &&
      (mm->size[1] == e_b_tmp) && (b_b_tmp->size[0] == nrows) &&
      (b_b_tmp->size[1] == ntilecols)) {
    jtilecol = c_b_tmp->size[0] * c_b_tmp->size[1];
    c_b_tmp->size[0] = b_b_tmp->size[0];
    c_b_tmp->size[1] = b_b_tmp->size[1];
    emxEnsureCapacity_real_T(c_b_tmp, jtilecol);
    a_data = c_b_tmp->data;
    nrows = b_b_tmp->size[0] * b_b_tmp->size[1];
    for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
      a_data[jtilecol] = b_b_tmp_data[jtilecol] /
                         ((mm_data[jtilecol] + 1.0) +
                          b_tmp_data[jtilecol] * quant_data[jtilecol]);
    }
    jtilecol = b_mm->size[0] * b_mm->size[1];
    b_mm->size[0] = mm->size[0];
    b_mm->size[1] = mm->size[1];
    emxEnsureCapacity_real_T(b_mm, jtilecol);
    a_data = b_mm->data;
    nrows = mm->size[0] * mm->size[1];
    for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
      a_data[jtilecol] = mm_data[jtilecol] - v;
    }
    b_finv(c_b_tmp, v, b_mm, b_tmp);
    b_tmp_data = b_tmp->data;
  } else {
    fb_binary_expand_op(b_tmp, b_b_tmp, mm, quant, v);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&c_b_tmp);
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  if (scaled) {
    jtilecol = quant->size[0] * quant->size[1];
    quant->size[0] = 1;
    quant->size[1] = 1;
    emxEnsureCapacity_real_T(quant, jtilecol);
    quant_data = quant->data;
    quant_data[0] = 1.0;
  } else {
    jtilecol = b_mm->size[0] * b_mm->size[1];
    b_mm->size[0] = mm->size[0];
    b_mm->size[1] = mm->size[1];
    emxEnsureCapacity_real_T(b_mm, jtilecol);
    a_data = b_mm->data;
    nrows = mm->size[0] * mm->size[1];
    for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
      a_data[jtilecol] = mm_data[jtilecol] / n;
    }
    b_chi2inv(b_mm, v, a);
    chi2cdf(a, v + 2.0, quant);
    if ((mm->size[0] == quant->size[0]) && (mm->size[1] == quant->size[1])) {
      nrows = mm->size[0] * mm->size[1];
      jtilecol = quant->size[0] * quant->size[1];
      quant->size[0] = mm->size[0];
      quant->size[1] = mm->size[1];
      emxEnsureCapacity_real_T(quant, jtilecol);
      quant_data = quant->data;
      for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
        quant_data[jtilecol] *= n / mm_data[jtilecol];
      }
    } else {
      eb_binary_expand_op(quant, n, mm);
      quant_data = quant->data;
    }
  }
  emxFree_real_T(&b_mm);
  emxFree_real_T(&a);
  if (b_b_tmp->size[0] == 1) {
    d_b_tmp = mm->size[0];
  } else {
    d_b_tmp = b_b_tmp->size[0];
  }
  if (b_b_tmp->size[1] == 1) {
    e_b_tmp = mm->size[1];
  } else {
    e_b_tmp = b_b_tmp->size[1];
  }
  if (b_b_tmp->size[0] == 1) {
    nrows = mm->size[0];
  } else {
    nrows = b_b_tmp->size[0];
  }
  if (nrows == 1) {
    nrows = mm->size[0];
  } else if (b_b_tmp->size[0] == 1) {
    nrows = mm->size[0];
  } else {
    nrows = b_b_tmp->size[0];
  }
  if (b_b_tmp->size[1] == 1) {
    ntilecols = mm->size[1];
  } else {
    ntilecols = b_b_tmp->size[1];
  }
  if (ntilecols == 1) {
    ntilecols = mm->size[1];
  } else if (b_b_tmp->size[1] == 1) {
    ntilecols = mm->size[1];
  } else {
    ntilecols = b_b_tmp->size[1];
  }
  if (b_b_tmp->size[0] == 1) {
    ibtile = mm->size[0];
  } else {
    ibtile = b_b_tmp->size[0];
  }
  if (ibtile == 1) {
    ibtile = mm->size[0];
  } else if (b_b_tmp->size[0] == 1) {
    ibtile = mm->size[0];
  } else {
    ibtile = b_b_tmp->size[0];
  }
  if (b_b_tmp->size[0] == 1) {
    jtilecol = mm->size[0];
  } else {
    jtilecol = b_b_tmp->size[0];
  }
  if (ibtile == 1) {
    ibtile = mm->size[0];
  } else if (jtilecol == 1) {
    ibtile = mm->size[0];
  } else if (b_b_tmp->size[0] == 1) {
    ibtile = mm->size[0];
  } else {
    ibtile = b_b_tmp->size[0];
  }
  if (b_b_tmp->size[1] == 1) {
    jtilecol = mm->size[1];
  } else {
    jtilecol = b_b_tmp->size[1];
  }
  if (jtilecol == 1) {
    jtilecol = mm->size[1];
  } else if (b_b_tmp->size[1] == 1) {
    jtilecol = mm->size[1];
  } else {
    jtilecol = b_b_tmp->size[1];
  }
  if (b_b_tmp->size[1] == 1) {
    k = mm->size[1];
  } else {
    k = b_b_tmp->size[1];
  }
  if (jtilecol == 1) {
    jtilecol = mm->size[1];
  } else if (k == 1) {
    jtilecol = mm->size[1];
  } else if (b_b_tmp->size[1] == 1) {
    jtilecol = mm->size[1];
  } else {
    jtilecol = b_b_tmp->size[1];
  }
  if ((b_b_tmp->size[0] == mm->size[0]) && (b_b_tmp->size[1] == mm->size[1]) &&
      (d_b_tmp == mm->size[0]) && (e_b_tmp == mm->size[1]) &&
      (nrows == mm->size[0]) && (ntilecols == mm->size[1]) &&
      (ibtile == b_tmp->size[0]) && (jtilecol == b_tmp->size[1])) {
    nrows = b_b_tmp->size[0] * b_b_tmp->size[1];
    for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
      b_b_tmp_data[jtilecol] = v *
                               (b_b_tmp_data[jtilecol] / mm_data[jtilecol]) *
                               (mm_data[jtilecol] - 1.0) /
                               (mm_data[jtilecol] - v) * b_tmp_data[jtilecol];
    }
  } else {
    cb_binary_expand_op(b_b_tmp, v, mm, b_tmp);
    b_b_tmp_data = b_b_tmp->data;
  }
  emxFree_real_T(&b_tmp);
  emxFree_real_T(&mm);
  nrows = b_b_tmp->size[0] * b_b_tmp->size[1];
  for (k = 0; k < nrows; k++) {
    b_b_tmp_data[k] = sqrt(b_b_tmp_data[k]);
  }
  nrows = quant->size[0] * quant->size[1];
  for (k = 0; k < nrows; k++) {
    quant_data[k] = sqrt(quant_data[k]);
  }
  if ((b_b_tmp->size[0] == quant->size[0]) &&
      (b_b_tmp->size[1] == quant->size[1])) {
    nrows = b_b_tmp->size[0] * b_b_tmp->size[1];
    for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
      b_b_tmp_data[jtilecol] /= quant_data[jtilecol];
    }
  } else {
    rdivide(b_b_tmp, quant);
    b_b_tmp_data = b_b_tmp->data;
  }
  emxFree_real_T(&quant);
  if (m->size[0] != 0) {
    ntilecols = m->size[0];
  } else if ((b_b_tmp->size[0] != 0) && (b_b_tmp->size[1] != 0)) {
    ntilecols = b_b_tmp->size[0];
  } else {
    ntilecols = 0;
    if (b_b_tmp->size[0] > 0) {
      ntilecols = b_b_tmp->size[0];
    }
  }
  empty_non_axis_sizes = (ntilecols == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((b_b_tmp->size[0] != 0) && (b_b_tmp->size[1] != 0))) {
    ibtile = b_b_tmp->size[1];
  } else {
    ibtile = 0;
  }
  jtilecol = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = ntilecols;
  MMDenv->size[1] = input_sizes_idx_1 + ibtile;
  emxEnsureCapacity_real_T(MMDenv, jtilecol);
  a_data = MMDenv->data;
  nrows = input_sizes_idx_1;
  for (jtilecol = 0; jtilecol < nrows; jtilecol++) {
    for (k = 0; k < ntilecols; k++) {
      a_data[k] = m_data[k];
    }
  }
  emxFree_real_T(&m);
  for (jtilecol = 0; jtilecol < ibtile; jtilecol++) {
    for (k = 0; k < ntilecols; k++) {
      a_data[k + MMDenv->size[0] * (jtilecol + input_sizes_idx_1)] =
          b_b_tmp_data[k + ntilecols * jtilecol];
    }
  }
  emxFree_real_T(&b_b_tmp);
}

/* End of code generation (FSMenvmmd_wrapper.c) */
