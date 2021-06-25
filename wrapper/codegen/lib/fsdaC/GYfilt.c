/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: GYfilt.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "GYfilt.h"
#include "colon.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "gammainc.h"
#include "mad.h"
#include "median.h"
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "rt_nonfinite.h"
#include <stdio.h>
#include <string.h>

/* Function Declarations */
static void gyfiltaux(emxArray_real_T *v);

/* Function Definitions */
/*
 * Arguments    : emxArray_real_T *v
 * Return Type  : void
 */
static void gyfiltaux(emxArray_real_T *v)
{
  emxArray_int32_T *iidx;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *vorder;
  emxArray_real_T *b_v;
  emxArray_real_T *plo;
  emxArray_real_T *pup;
  emxArray_real_T *r2;
  emxArray_real_T *seq;
  emxArray_real_T *y;
  double n0;
  int b_i;
  int end;
  int i;
  int loop_ub;
  emxInit_real_T(&b_v, 1);
  /*  Inner fucntion gyfiltaux */
  i = b_v->size[0];
  b_v->size[0] = v->size[0];
  emxEnsureCapacity_real_T(b_v, i);
  loop_ub = v->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_v->data[i] = v->data[i];
  }
  emxInit_int32_T(&vorder, 1);
  emxInit_int32_T(&iidx, 1);
  sort(b_v, iidx);
  i = vorder->size[0];
  vorder->size[0] = iidx->size[0];
  emxEnsureCapacity_int32_T(vorder, i);
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    vorder->data[i] = iidx->data[i];
  }
  emxInit_real_T(&seq, 2);
  if (b_v->size[0] < 1) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = b_v->size[0];
    emxEnsureCapacity_real_T(seq, i);
    loop_ub = b_v->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      seq->data[i] = (double)i + 1.0;
    }
  }
  n0 = 0.0;
  end = b_v->size[0] - 1;
  loop_ub = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (b_v->data[b_i] < 6.6348966010212136) {
      loop_ub++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(r, i);
  loop_ub = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (b_v->data[b_i] < 6.6348966010212136) {
      r->data[loop_ub] = b_i + 1;
      loop_ub++;
    }
  }
  emxInit_real_T(&plo, 1);
  if (r->size[0] != 0) {
    end = b_v->size[0] - 1;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (b_v->data[b_i] < 6.6348966010212136) {
        loop_ub++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(r1, i);
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (b_v->data[b_i] < 6.6348966010212136) {
        r1->data[loop_ub] = b_i + 1;
        loop_ub++;
      }
    }
    if (seq->data[r1->data[r1->size[0] - 1] - 1] > b_v->size[0]) {
      i = 0;
      b_i = 0;
    } else {
      i = (int)seq->data[r1->data[r1->size[0] - 1] - 1] - 1;
      b_i = b_v->size[0];
    }
    emxInit_real_T(&r2, 1);
    emxInit_real_T(&pup, 1);
    end = r2->size[0];
    r2->size[0] = b_i - i;
    emxEnsureCapacity_real_T(r2, end);
    b_i = r2->size[0];
    for (loop_ub = 0; loop_ub < b_i; loop_ub++) {
      n0 = b_v->data[i + loop_ub];
      if (!rtIsNaN(n0)) {
        if (n0 < 0.0) {
          n0 = 0.0;
        }
        r2->data[loop_ub] = (gammainc(n0 / 2.0, 0.5)).re;
      } else {
        r2->data[loop_ub] = rtNaN;
      }
    }
    emxInit_real_T(&y, 2);
    if (b_v->size[0] < seq->data[r1->data[r1->size[0] - 1] - 1]) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if (seq->data[r1->data[r1->size[0] - 1] - 1] ==
               seq->data[r1->data[r1->size[0] - 1] - 1]) {
      n0 = seq->data[r1->data[r1->size[0] - 1] - 1];
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = (int)((double)b_v->size[0] - n0) + 1;
      emxEnsureCapacity_real_T(y, i);
      loop_ub = (int)((double)b_v->size[0] - n0);
      for (i = 0; i <= loop_ub; i++) {
        y->data[i] = n0 + (double)i;
      }
    } else {
      eml_float_colon(seq->data[r1->data[r1->size[0] - 1] - 1], b_v->size[0],
                      y);
    }
    emxFree_int32_T(&r1);
    i = plo->size[0];
    plo->size[0] = y->size[1];
    emxEnsureCapacity_real_T(plo, i);
    loop_ub = y->size[1];
    for (i = 0; i < loop_ub; i++) {
      plo->data[i] = (y->data[i] - 1.0) / (double)b_v->size[0];
    }
    emxFree_real_T(&y);
    i = pup->size[0];
    pup->size[0] = r2->size[0];
    emxEnsureCapacity_real_T(pup, i);
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      pup->data[i] = 0.0;
    }
    end = r2->size[0] - 1;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (r2->data[b_i] - plo->data[b_i] > 0.0) {
        loop_ub++;
      }
    }
    emxInit_int32_T(&r4, 1);
    i = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(r4, i);
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (r2->data[b_i] - plo->data[b_i] > 0.0) {
        r4->data[loop_ub] = b_i + 1;
        loop_ub++;
      }
    }
    loop_ub = r4->size[0];
    for (i = 0; i < loop_ub; i++) {
      pup->data[r4->data[i] - 1] =
          r2->data[r4->data[i] - 1] - plo->data[r4->data[i] - 1];
    }
    emxFree_int32_T(&r4);
    emxFree_real_T(&r2);
    n0 = rt_roundd_snf(b_maximum(pup) * (double)b_v->size[0]);
    emxFree_real_T(&pup);
  }
  emxFree_int32_T(&r);
  emxFree_real_T(&seq);
  i = plo->size[0];
  plo->size[0] = vorder->size[0];
  emxEnsureCapacity_real_T(plo, i);
  loop_ub = vorder->size[0];
  for (i = 0; i < loop_ub; i++) {
    plo->data[i] = vorder->data[i];
  }
  sort(plo, iidx);
  i = v->size[0];
  v->size[0] = iidx->size[0];
  emxEnsureCapacity_real_T(v, i);
  loop_ub = iidx->size[0];
  emxFree_real_T(&plo);
  for (i = 0; i < loop_ub; i++) {
    v->data[i] = b_v->data[iidx->data[i] - 1];
  }
  emxFree_int32_T(&iidx);
  if (n0 > 0.0) {
    n0 = ((double)b_v->size[0] - n0) + 1.0;
    if (n0 > b_v->size[0]) {
      i = 0;
      b_i = 0;
    } else {
      i = (int)n0 - 1;
      b_i = b_v->size[0];
    }
    emxInit_int32_T(&r3, 2);
    end = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    loop_ub = b_i - i;
    r3->size[1] = loop_ub;
    emxEnsureCapacity_int32_T(r3, end);
    for (b_i = 0; b_i < loop_ub; b_i++) {
      r3->data[b_i] = vorder->data[i + b_i];
    }
    loop_ub = r3->size[1];
    for (i = 0; i < loop_ub; i++) {
      v->data[r3->data[i] - 1] = rtNaN;
    }
    emxFree_int32_T(&r3);
  }
  emxFree_int32_T(&vorder);
  emxFree_real_T(&b_v);
}

/*
 * GYfilt computes the Gervini-Yohai univariate outlier identifier
 *
 * <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a>
 *
 *   Required input arguments:
 *
 *     x:         Input vector. Vector. A vector with n elements that
 *                contains the univariate data.
 *
 *
 *   Optional input arguments:
 *
 *       alpha :  coverage probability. Scalar.
 *                Scalar in the interval [0.5 1). The default coverage
 *                probability is 0.95.
 *                  Example - 'alpha',0.99
 *                  Data Types - double
 *
 *    centering:  centering the data. Boolean.
 *                If centering is true input data are preliminarly centered.
 *                The defalt value of centering is true.
 *                  Example - 'centering',false
 *                  Data Types - logical
 *
 *    iterating:  iterative procedure. Boolean.
 *                If Boolean is true then an iterative adaptive procedure is
 *                applied.  The defalt value of iterating is true.
 *                  Example - 'iterating',false
 *                  Data Types - logical
 *
 *       niter :  maximum number of iterations in the iterative adaptive
 *                procedure. Positive integer. This option is used just if
 * previous iterating is true. The default value of niter is 10. Example -
 * 'niter',20 Data Types - double
 *
 *   Output:
 *
 *     weights:   Boolean vector of weights. Logical.
 *                A boolean vector with n elements that contains false in
 *                correspondence of the units declared as outliers.
 *
 *
 *  See also: LTSts
 *
 *  References:
 *
 *  Gervini, D. and Yohai, V.J. (2002), A class of robust and fully efficient
 *  regression estimators, "Annals of Statistics", Vol. 30, pp. 583-616.
 *
 *  Copyright 2008-2021.
 *  Written by FSDA team
 *
 * <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a>
 *
 * $LastChangedDate::                      $: Date of the last commit
 *
 * Arguments    : const emxArray_real_T *x
 *                emxArray_boolean_T *weights
 * Return Type  : void
 */
void GYfilt(const emxArray_real_T *x, emxArray_boolean_T *weights)
{
  emxArray_boolean_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *a;
  emxArray_real_T *xs2na;
  double madx;
  double mu;
  int i;
  int k;
  int nx;
  emxInit_real_T(&xs2na, 1);
  emxInit_real_T(&a, 1);
  /*  Examples: */
  /* { */
  /*     % GYfilt with all the default options. */
  /*     weights=GYfilt(randn(100,1)); */
  /* } */
  /* { */
  /*     % GYfilt with option alpha. */
  /*     alpha=0.999; */
  /*     weights=GYfilt(randn(100,1),'alpha',alpha); */
  /* } */
  /*  Beginning of code */
  /*  default coverage probability */
  /*  Write in structure 'options' the options chosen by the user */
  mu = median(x);
  madx = 1.4826 * mad(x);
  i = a->size[0];
  a->size[0] = x->size[0];
  emxEnsureCapacity_real_T(a, i);
  nx = x->size[0];
  for (i = 0; i < nx; i++) {
    a->data[i] = (x->data[i] - mu) / madx;
  }
  i = xs2na->size[0];
  xs2na->size[0] = a->size[0];
  emxEnsureCapacity_real_T(xs2na, i);
  nx = a->size[0];
  for (k = 0; k < nx; k++) {
    xs2na->data[k] = a->data[k] * a->data[k];
  }
  emxFree_real_T(&a);
  gyfiltaux(xs2na);
  i = weights->size[0];
  weights->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(weights, i);
  nx = x->size[0];
  for (i = 0; i < nx; i++) {
    weights->data[i] = true;
  }
  emxInit_boolean_T(&r, 1);
  i = r->size[0];
  r->size[0] = xs2na->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  nx = xs2na->size[0];
  for (i = 0; i < nx; i++) {
    r->data[i] = rtIsNaN(xs2na->data[i]);
  }
  emxFree_real_T(&xs2na);
  k = r->size[0] - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r->data[i]) {
      nx++;
    }
  }
  emxInit_int32_T(&r1, 1);
  i = r1->size[0];
  r1->size[0] = nx;
  emxEnsureCapacity_int32_T(r1, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (r->data[i]) {
      r1->data[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&r);
  nx = r1->size[0];
  for (i = 0; i < nx; i++) {
    weights->data[r1->data[i] - 1] = false;
  }
  emxFree_int32_T(&r1);
}

/*
 * GYfilt computes the Gervini-Yohai univariate outlier identifier
 *
 * <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a>
 *
 *   Required input arguments:
 *
 *     x:         Input vector. Vector. A vector with n elements that
 *                contains the univariate data.
 *
 *
 *   Optional input arguments:
 *
 *       alpha :  coverage probability. Scalar.
 *                Scalar in the interval [0.5 1). The default coverage
 *                probability is 0.95.
 *                  Example - 'alpha',0.99
 *                  Data Types - double
 *
 *    centering:  centering the data. Boolean.
 *                If centering is true input data are preliminarly centered.
 *                The defalt value of centering is true.
 *                  Example - 'centering',false
 *                  Data Types - logical
 *
 *    iterating:  iterative procedure. Boolean.
 *                If Boolean is true then an iterative adaptive procedure is
 *                applied.  The defalt value of iterating is true.
 *                  Example - 'iterating',false
 *                  Data Types - logical
 *
 *       niter :  maximum number of iterations in the iterative adaptive
 *                procedure. Positive integer. This option is used just if
 * previous iterating is true. The default value of niter is 10. Example -
 * 'niter',20 Data Types - double
 *
 *   Output:
 *
 *     weights:   Boolean vector of weights. Logical.
 *                A boolean vector with n elements that contains false in
 *                correspondence of the units declared as outliers.
 *
 *
 *  See also: LTSts
 *
 *  References:
 *
 *  Gervini, D. and Yohai, V.J. (2002), A class of robust and fully efficient
 *  regression estimators, "Annals of Statistics", Vol. 30, pp. 583-616.
 *
 *  Copyright 2008-2021.
 *  Written by FSDA team
 *
 * <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a>
 *
 * $LastChangedDate::                      $: Date of the last commit
 *
 * Arguments    : const emxArray_real_T *x
 *                emxArray_boolean_T *weights
 * Return Type  : void
 */
void b_GYfilt(const emxArray_real_T *x, emxArray_boolean_T *weights)
{
  emxArray_boolean_T *b_x;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *b_id;
  emxArray_real_T *id;
  emxArray_real_T *xs2;
  emxArray_real_T *xs2na;
  double madx;
  double mu;
  int converge;
  int i;
  int iter;
  int k;
  int n;
  int nx;
  int trueCount;
  bool exitg1;
  bool y;
  emxInit_real_T(&xs2na, 1);
  /*  Examples: */
  /* { */
  /*     % GYfilt with all the default options. */
  /*     weights=GYfilt(randn(100,1)); */
  /* } */
  /* { */
  /*     % GYfilt with option alpha. */
  /*     alpha=0.999; */
  /*     weights=GYfilt(randn(100,1),'alpha',alpha); */
  /* } */
  /*  Beginning of code */
  /*  default coverage probability */
  /*  Write in structure 'options' the options chosen by the user */
  mu = median(x);
  madx = 1.4826 * mad(x);
  i = xs2na->size[0];
  xs2na->size[0] = x->size[0];
  emxEnsureCapacity_real_T(xs2na, i);
  nx = x->size[0];
  for (i = 0; i < nx; i++) {
    xs2na->data[i] = (x->data[i] - mu) / madx;
  }
  emxInit_real_T(&xs2, 1);
  i = xs2->size[0];
  xs2->size[0] = xs2na->size[0];
  emxEnsureCapacity_real_T(xs2, i);
  nx = xs2na->size[0];
  for (k = 0; k < nx; k++) {
    xs2->data[k] = xs2na->data[k] * xs2na->data[k];
  }
  /*  Inner function gyiterate */
  converge = 0;
  iter = 0;
  n = xs2->size[0];
  emxInit_real_T(&id, 2);
  if (xs2->size[0] < 1) {
    id->size[0] = 1;
    id->size[1] = 0;
  } else {
    i = id->size[0] * id->size[1];
    id->size[0] = 1;
    id->size[1] = xs2->size[0];
    emxEnsureCapacity_real_T(id, i);
    nx = xs2->size[0] - 1;
    for (i = 0; i <= nx; i++) {
      id->data[i] = (double)i + 1.0;
    }
  }
  /*  vold = v; */
  emxInit_int32_T(&r, 1);
  emxInit_boolean_T(&b_x, 1);
  emxInit_real_T(&b_id, 2);
  while ((converge == 0) && (iter < 10)) {
    iter++;
    gyfiltaux(xs2);
    i = b_x->size[0];
    b_x->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(b_x, i);
    nx = xs2->size[0];
    for (i = 0; i < nx; i++) {
      b_x->data[i] = rtIsNaN(xs2->data[i]);
    }
    nx = b_x->size[0];
    for (i = 0; i < nx; i++) {
      b_x->data[i] = !b_x->data[i];
    }
    k = b_x->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= k; i++) {
      if (b_x->data[i]) {
        trueCount++;
      }
    }
    i = r->size[0];
    r->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r, i);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (b_x->data[i]) {
        r->data[nx] = i + 1;
        nx++;
      }
    }
    i = b_id->size[0] * b_id->size[1];
    b_id->size[0] = 1;
    b_id->size[1] = r->size[0];
    emxEnsureCapacity_real_T(b_id, i);
    nx = r->size[0];
    for (i = 0; i < nx; i++) {
      b_id->data[i] = id->data[r->data[i] - 1];
    }
    i = id->size[0] * id->size[1];
    id->size[0] = 1;
    id->size[1] = b_id->size[1];
    emxEnsureCapacity_real_T(id, i);
    nx = b_id->size[1];
    for (i = 0; i < nx; i++) {
      id->data[i] = b_id->data[i];
    }
    i = b_x->size[0];
    b_x->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(b_x, i);
    nx = xs2->size[0];
    for (i = 0; i < nx; i++) {
      b_x->data[i] = rtIsNaN(xs2->data[i]);
    }
    y = false;
    nx = 1;
    exitg1 = false;
    while ((!exitg1) && (nx <= b_x->size[0])) {
      if (!b_x->data[nx - 1]) {
        nx++;
      } else {
        y = true;
        exitg1 = true;
      }
    }
    if (!y) {
      converge = 1;
    }
    i = b_x->size[0];
    b_x->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(b_x, i);
    nx = xs2->size[0];
    for (i = 0; i < nx; i++) {
      b_x->data[i] = rtIsNaN(xs2->data[i]);
    }
    nx = b_x->size[0];
    for (i = 0; i < nx; i++) {
      b_x->data[i] = !b_x->data[i];
    }
    k = b_x->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= k; i++) {
      if (b_x->data[i]) {
        trueCount++;
      }
    }
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (b_x->data[i]) {
        xs2->data[nx] = xs2->data[i];
        nx++;
      }
    }
    i = xs2->size[0];
    xs2->size[0] = trueCount;
    emxEnsureCapacity_real_T(xs2, i);
  }
  emxFree_real_T(&b_id);
  emxFree_int32_T(&r);
  i = xs2na->size[0];
  xs2na->size[0] = n;
  emxEnsureCapacity_real_T(xs2na, i);
  for (i = 0; i < n; i++) {
    xs2na->data[i] = rtNaN;
  }
  emxInit_int32_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = id->size[1];
  emxEnsureCapacity_int32_T(r1, i);
  nx = id->size[1];
  for (i = 0; i < nx; i++) {
    r1->data[i] = (int)id->data[i];
  }
  emxFree_real_T(&id);
  nx = r1->size[1];
  for (i = 0; i < nx; i++) {
    xs2na->data[r1->data[i] - 1] = xs2->data[i];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&xs2);
  /*  disp([' iter = ' num2str(iter)]) */
  printf(" iter = %.0f\n ", (double)iter);
  fflush(stdout);
  i = weights->size[0];
  weights->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(weights, i);
  nx = x->size[0];
  for (i = 0; i < nx; i++) {
    weights->data[i] = true;
  }
  i = b_x->size[0];
  b_x->size[0] = xs2na->size[0];
  emxEnsureCapacity_boolean_T(b_x, i);
  nx = xs2na->size[0];
  for (i = 0; i < nx; i++) {
    b_x->data[i] = rtIsNaN(xs2na->data[i]);
  }
  emxFree_real_T(&xs2na);
  k = b_x->size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= k; i++) {
    if (b_x->data[i]) {
      trueCount++;
    }
  }
  emxInit_int32_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = trueCount;
  emxEnsureCapacity_int32_T(r2, i);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (b_x->data[i]) {
      r2->data[nx] = i + 1;
      nx++;
    }
  }
  emxFree_boolean_T(&b_x);
  nx = r2->size[0];
  for (i = 0; i < nx; i++) {
    weights->data[r2->data[i] - 1] = false;
  }
  emxFree_int32_T(&r2);
}

/*
 * File trailer for GYfilt.c
 *
 * [EOF]
 */
