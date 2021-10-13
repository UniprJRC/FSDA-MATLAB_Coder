/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * GYfilt.c
 *
 * Code generation for function 'GYfilt'
 *
 */

/* Include files */
#include "GYfilt.h"
#include "colon.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "gammainc.h"
#include "gammaln.h"
#include "mad.h"
#include "median.h"
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void gyfiltaux(emxArray_real_T *v);

static void of_binary_expand_op(emxArray_real_T *pup, const emxArray_real_T *r1,
                                const emxArray_real_T *y,
                                const emxArray_real_T *v);

/* Function Definitions */
static void gyfiltaux(emxArray_real_T *v)
{
  emxArray_int32_T *iidx;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_int32_T *vorder;
  emxArray_real_T *b_v;
  emxArray_real_T *plo;
  emxArray_real_T *pup;
  emxArray_real_T *seq;
  emxArray_real_T *y;
  double d;
  double n0;
  double *b_v_data;
  double *plo_data;
  double *v_data;
  double *y_data;
  int b_i;
  int end;
  int i;
  int loop_ub;
  int *iidx_data;
  int *vorder_data;
  v_data = v->data;
  emxInit_real_T(&b_v, 1);
  /*  Inner fucntion gyfiltaux */
  i = b_v->size[0];
  b_v->size[0] = v->size[0];
  emxEnsureCapacity_real_T(b_v, i);
  b_v_data = b_v->data;
  loop_ub = v->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_v_data[i] = v_data[i];
  }
  emxInit_int32_T(&vorder, 1);
  emxInit_int32_T(&iidx, 1);
  sort(b_v, iidx);
  iidx_data = iidx->data;
  b_v_data = b_v->data;
  i = vorder->size[0];
  vorder->size[0] = iidx->size[0];
  emxEnsureCapacity_int32_T(vorder, i);
  vorder_data = vorder->data;
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    vorder_data[i] = iidx_data[i];
  }
  emxInit_real_T(&seq, 2);
  v_data = seq->data;
  if (b_v->size[0] < 1) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = b_v->size[0];
    emxEnsureCapacity_real_T(seq, i);
    v_data = seq->data;
    loop_ub = b_v->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      v_data[i] = (double)i + 1.0;
    }
  }
  n0 = 0.0;
  end = b_v->size[0] - 1;
  loop_ub = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (b_v_data[b_i] < 6.6348966010212136) {
      loop_ub++;
    }
  }
  emxInit_int32_T(&r, 1);
  i = r->size[0];
  r->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(r, i);
  iidx_data = r->data;
  loop_ub = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (b_v_data[b_i] < 6.6348966010212136) {
      iidx_data[loop_ub] = b_i + 1;
      loop_ub++;
    }
  }
  emxInit_real_T(&plo, 1);
  if (r->size[0] != 0) {
    end = b_v->size[0] - 1;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (b_v_data[b_i] < 6.6348966010212136) {
        loop_ub++;
      }
    }
    emxInit_int32_T(&r1, 1);
    i = r1->size[0];
    r1->size[0] = loop_ub;
    emxEnsureCapacity_int32_T(r1, i);
    iidx_data = r1->data;
    loop_ub = 0;
    for (b_i = 0; b_i <= end; b_i++) {
      if (b_v_data[b_i] < 6.6348966010212136) {
        iidx_data[loop_ub] = b_i + 1;
        loop_ub++;
      }
    }
    if (v_data[iidx_data[r1->size[0] - 1] - 1] > b_v->size[0]) {
      i = 0;
      b_i = 0;
    } else {
      i = (int)v_data[iidx_data[r1->size[0] - 1] - 1] - 1;
      b_i = b_v->size[0];
    }
    emxInit_real_T(&pup, 1);
    end = plo->size[0];
    plo->size[0] = b_i - i;
    emxEnsureCapacity_real_T(plo, end);
    plo_data = plo->data;
    b_i = plo->size[0];
    for (loop_ub = 0; loop_ub < b_i; loop_ub++) {
      n0 = b_v_data[i + loop_ub];
      if (!rtIsNaN(n0)) {
        if (n0 < 0.0) {
          n0 = 0.0;
        }
        d = 1.5;
        gammaln(&d);
        plo_data[loop_ub] =
            (scalar_gammainc(n0 / 2.0, 0.5, -0.69314718055994529, d)).re;
      } else {
        plo_data[loop_ub] = rtNaN;
      }
    }
    emxInit_real_T(&y, 2);
    y_data = y->data;
    if (b_v->size[0] < v_data[iidx_data[r1->size[0] - 1] - 1]) {
      y->size[0] = 1;
      y->size[1] = 0;
    } else if (v_data[iidx_data[r1->size[0] - 1] - 1] ==
               v_data[iidx_data[r1->size[0] - 1] - 1]) {
      d = v_data[iidx_data[r1->size[0] - 1] - 1];
      i = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = (int)((double)b_v->size[0] - d) + 1;
      emxEnsureCapacity_real_T(y, i);
      y_data = y->data;
      loop_ub = (int)((double)b_v->size[0] - d);
      for (i = 0; i <= loop_ub; i++) {
        y_data[i] = d + (double)i;
      }
    } else {
      eml_float_colon(v_data[iidx_data[r1->size[0] - 1] - 1], b_v->size[0], y);
      y_data = y->data;
    }
    emxFree_int32_T(&r1);
    if (plo->size[0] == y->size[1]) {
      i = pup->size[0];
      pup->size[0] = plo->size[0];
      emxEnsureCapacity_real_T(pup, i);
      v_data = pup->data;
      loop_ub = plo->size[0];
      for (i = 0; i < loop_ub; i++) {
        v_data[i] = plo_data[i] - (y_data[i] - 1.0) / (double)b_v->size[0];
      }
    } else {
      of_binary_expand_op(pup, plo, y, b_v);
      v_data = pup->data;
    }
    emxFree_real_T(&y);
    i = plo->size[0];
    plo->size[0] = pup->size[0];
    emxEnsureCapacity_real_T(plo, i);
    plo_data = plo->data;
    loop_ub = pup->size[0];
    for (i = 0; i < loop_ub; i++) {
      plo_data[i] = 0.0;
    }
    end = pup->size[0];
    for (b_i = 0; b_i < end; b_i++) {
      if (v_data[b_i] > 0.0) {
        plo_data[b_i] = v_data[b_i];
      }
    }
    emxFree_real_T(&pup);
    n0 = rt_roundd_snf(b_maximum(plo) * (double)b_v->size[0]);
  }
  emxFree_int32_T(&r);
  emxFree_real_T(&seq);
  i = plo->size[0];
  plo->size[0] = vorder->size[0];
  emxEnsureCapacity_real_T(plo, i);
  plo_data = plo->data;
  loop_ub = vorder->size[0];
  for (i = 0; i < loop_ub; i++) {
    plo_data[i] = vorder_data[i];
  }
  sort(plo, iidx);
  iidx_data = iidx->data;
  i = v->size[0];
  v->size[0] = iidx->size[0];
  emxEnsureCapacity_real_T(v, i);
  v_data = v->data;
  loop_ub = iidx->size[0];
  emxFree_real_T(&plo);
  for (i = 0; i < loop_ub; i++) {
    v_data[i] = b_v_data[iidx_data[i] - 1];
  }
  emxFree_int32_T(&iidx);
  if (n0 > 0.0) {
    d = ((double)b_v->size[0] - n0) + 1.0;
    if (d > b_v->size[0]) {
      i = 0;
      b_i = 0;
    } else {
      i = (int)d - 1;
      b_i = b_v->size[0];
    }
    emxInit_int32_T(&r2, 2);
    end = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    loop_ub = b_i - i;
    r2->size[1] = loop_ub;
    emxEnsureCapacity_int32_T(r2, end);
    iidx_data = r2->data;
    for (b_i = 0; b_i < loop_ub; b_i++) {
      iidx_data[b_i] = vorder_data[i + b_i];
    }
    loop_ub = r2->size[1];
    for (i = 0; i < loop_ub; i++) {
      v_data[iidx_data[i] - 1] = rtNaN;
    }
    emxFree_int32_T(&r2);
  }
  emxFree_int32_T(&vorder);
  emxFree_real_T(&b_v);
}

static void of_binary_expand_op(emxArray_real_T *pup, const emxArray_real_T *r1,
                                const emxArray_real_T *y,
                                const emxArray_real_T *v)
{
  const double *r;
  const double *y_data;
  double *pup_data;
  int b_v;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  y_data = y->data;
  r = r1->data;
  b_v = v->size[0];
  i = pup->size[0];
  if (y->size[1] == 1) {
    pup->size[0] = r1->size[0];
  } else {
    pup->size[0] = y->size[1];
  }
  emxEnsureCapacity_real_T(pup, i);
  pup_data = pup->data;
  stride_0_0 = (r1->size[0] != 1);
  stride_1_0 = (y->size[1] != 1);
  if (y->size[1] == 1) {
    loop_ub = r1->size[0];
  } else {
    loop_ub = y->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    pup_data[i] =
        r[i * stride_0_0] - (y_data[i * stride_1_0] - 1.0) / (double)b_v;
  }
}

void GYfilt(const emxArray_real_T *x, emxArray_boolean_T *weights)
{
  emxArray_boolean_T *r;
  emxArray_int32_T *r2;
  emxArray_real_T *xs2na;
  const double *x_data;
  double madx;
  double mu;
  double varargin_1;
  double *xs2na_data;
  int end;
  int i;
  int loop_ub;
  int *r3;
  bool *r1;
  bool *weights_data;
  x_data = x->data;
  emxInit_real_T(&xs2na, 1);
  /* GYfilt computes the Gervini-Yohai univariate outlier identifier */
  /*  */
  /* <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     x:         Input vector. Vector. A vector with n elements that */
  /*                contains the univariate data. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*       alpha :  coverage probability. Scalar. */
  /*                Scalar in the interval [0.5 1). The default coverage */
  /*                probability is 0.95. */
  /*                  Example - 'alpha',0.99 */
  /*                  Data Types - double */
  /*  */
  /*    centering:  centering the data. Boolean. */
  /*                If centering is true input data are preliminarly centered.
   */
  /*                The defalt value of centering is true. */
  /*                  Example - 'centering',false */
  /*                  Data Types - logical */
  /*  */
  /*    iterating:  iterative procedure. Boolean. */
  /*                If Boolean is true then an iterative adaptive procedure is
   */
  /*                applied.  The defalt value of iterating is true. */
  /*                  Example - 'iterating',false */
  /*                  Data Types - logical */
  /*  */
  /*       niter :  maximum number of iterations in the iterative adaptive */
  /*                procedure. Positive integer. This option is used just if
   * previous iterating */
  /*                is true. The default value of niter is 10. */
  /*                  Example - 'niter',20 */
  /*                  Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*     weights:   Boolean vector of weights. Logical. */
  /*                A boolean vector with n elements that contains false in */
  /*                correspondence of the units declared as outliers. */
  /*  */
  /*  See also: LTSts */
  /*  */
  /*  References: */
  /*  */
  /*  Gervini, D. and Yohai, V.J. (2002), A class of robust and fully efficient
   */
  /*  regression estimators, "Annals of Statistics", Vol. 30, pp. 583-616. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
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
  xs2na_data = xs2na->data;
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1 = (x_data[i] - mu) / madx;
    xs2na_data[i] = varargin_1 * varargin_1;
  }
  gyfiltaux(xs2na);
  xs2na_data = xs2na->data;
  i = weights->size[0];
  weights->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(weights, i);
  weights_data = weights->data;
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights_data[i] = true;
  }
  emxInit_boolean_T(&r, 1);
  i = r->size[0];
  r->size[0] = xs2na->size[0];
  emxEnsureCapacity_boolean_T(r, i);
  r1 = r->data;
  loop_ub = xs2na->size[0];
  for (i = 0; i < loop_ub; i++) {
    r1[i] = rtIsNaN(xs2na_data[i]);
  }
  emxFree_real_T(&xs2na);
  end = r->size[0] - 1;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (r1[i]) {
      loop_ub++;
    }
  }
  emxInit_int32_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = loop_ub;
  emxEnsureCapacity_int32_T(r2, i);
  r3 = r2->data;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (r1[i]) {
      r3[loop_ub] = i + 1;
      loop_ub++;
    }
  }
  emxFree_boolean_T(&r);
  loop_ub = r2->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights_data[r3[i] - 1] = false;
  }
  emxFree_int32_T(&r2);
}

void b_GYfilt(const emxArray_real_T *x, emxArray_boolean_T *weights)
{
  emxArray_boolean_T *b_x;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r3;
  emxArray_real_T *b_id;
  emxArray_real_T *id;
  emxArray_real_T *xs2;
  emxArray_real_T *xs2na;
  const double *x_data;
  double madx;
  double mu;
  double varargin_1;
  double *id_data;
  double *xs2_data;
  double *xs2na_data;
  int converge;
  int end;
  int i;
  int iter;
  int loop_ub;
  int n;
  int trueCount;
  int *r2;
  bool exitg1;
  bool y;
  bool *b_x_data;
  bool *weights_data;
  x_data = x->data;
  emxInit_real_T(&xs2, 1);
  /* GYfilt computes the Gervini-Yohai univariate outlier identifier */
  /*  */
  /* <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     x:         Input vector. Vector. A vector with n elements that */
  /*                contains the univariate data. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*       alpha :  coverage probability. Scalar. */
  /*                Scalar in the interval [0.5 1). The default coverage */
  /*                probability is 0.95. */
  /*                  Example - 'alpha',0.99 */
  /*                  Data Types - double */
  /*  */
  /*    centering:  centering the data. Boolean. */
  /*                If centering is true input data are preliminarly centered.
   */
  /*                The defalt value of centering is true. */
  /*                  Example - 'centering',false */
  /*                  Data Types - logical */
  /*  */
  /*    iterating:  iterative procedure. Boolean. */
  /*                If Boolean is true then an iterative adaptive procedure is
   */
  /*                applied.  The defalt value of iterating is true. */
  /*                  Example - 'iterating',false */
  /*                  Data Types - logical */
  /*  */
  /*       niter :  maximum number of iterations in the iterative adaptive */
  /*                procedure. Positive integer. This option is used just if
   * previous iterating */
  /*                is true. The default value of niter is 10. */
  /*                  Example - 'niter',20 */
  /*                  Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*     weights:   Boolean vector of weights. Logical. */
  /*                A boolean vector with n elements that contains false in */
  /*                correspondence of the units declared as outliers. */
  /*  */
  /*  See also: LTSts */
  /*  */
  /*  References: */
  /*  */
  /*  Gervini, D. and Yohai, V.J. (2002), A class of robust and fully efficient
   */
  /*  regression estimators, "Annals of Statistics", Vol. 30, pp. 583-616. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('GYfilt')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
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
  i = xs2->size[0];
  xs2->size[0] = x->size[0];
  emxEnsureCapacity_real_T(xs2, i);
  xs2_data = xs2->data;
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    varargin_1 = (x_data[i] - mu) / madx;
    xs2_data[i] = varargin_1 * varargin_1;
  }
  /*  Inner function gyiterate */
  converge = 0;
  iter = 0;
  n = xs2->size[0];
  emxInit_real_T(&id, 2);
  id_data = id->data;
  if (xs2->size[0] < 1) {
    id->size[0] = 1;
    id->size[1] = 0;
  } else {
    i = id->size[0] * id->size[1];
    id->size[0] = 1;
    id->size[1] = xs2->size[0];
    emxEnsureCapacity_real_T(id, i);
    id_data = id->data;
    loop_ub = xs2->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      id_data[i] = (double)i + 1.0;
    }
  }
  /*  vold = v; */
  emxInit_int32_T(&r, 1);
  emxInit_boolean_T(&b_x, 1);
  emxInit_real_T(&b_id, 2);
  while ((converge == 0) && (iter < 10)) {
    iter++;
    gyfiltaux(xs2);
    xs2_data = xs2->data;
    i = b_x->size[0];
    b_x->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(b_x, i);
    b_x_data = b_x->data;
    loop_ub = xs2->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = rtIsNaN(xs2_data[i]);
    }
    loop_ub = b_x->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = !b_x_data[i];
    }
    end = b_x->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (b_x_data[i]) {
        trueCount++;
      }
    }
    i = r->size[0];
    r->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r, i);
    r2 = r->data;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (b_x_data[i]) {
        r2[loop_ub] = i + 1;
        loop_ub++;
      }
    }
    i = b_id->size[0] * b_id->size[1];
    b_id->size[0] = 1;
    b_id->size[1] = r->size[0];
    emxEnsureCapacity_real_T(b_id, i);
    xs2na_data = b_id->data;
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      xs2na_data[i] = id_data[r2[i] - 1];
    }
    i = id->size[0] * id->size[1];
    id->size[0] = 1;
    id->size[1] = b_id->size[1];
    emxEnsureCapacity_real_T(id, i);
    id_data = id->data;
    loop_ub = b_id->size[1];
    for (i = 0; i < loop_ub; i++) {
      id_data[i] = xs2na_data[i];
    }
    i = b_x->size[0];
    b_x->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(b_x, i);
    b_x_data = b_x->data;
    loop_ub = xs2->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = rtIsNaN(xs2_data[i]);
    }
    y = false;
    loop_ub = 1;
    exitg1 = false;
    while ((!exitg1) && (loop_ub <= b_x->size[0])) {
      if (b_x_data[loop_ub - 1]) {
        y = true;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
    if (!y) {
      converge = 1;
    }
    i = b_x->size[0];
    b_x->size[0] = xs2->size[0];
    emxEnsureCapacity_boolean_T(b_x, i);
    b_x_data = b_x->data;
    loop_ub = xs2->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = rtIsNaN(xs2_data[i]);
    }
    loop_ub = b_x->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = !b_x_data[i];
    }
    end = b_x->size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (b_x_data[i]) {
        trueCount++;
      }
    }
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (b_x_data[i]) {
        xs2_data[loop_ub] = xs2_data[i];
        loop_ub++;
      }
    }
    i = xs2->size[0];
    xs2->size[0] = trueCount;
    emxEnsureCapacity_real_T(xs2, i);
    xs2_data = xs2->data;
  }
  emxFree_real_T(&b_id);
  emxFree_int32_T(&r);
  emxInit_real_T(&xs2na, 1);
  i = xs2na->size[0];
  xs2na->size[0] = n;
  emxEnsureCapacity_real_T(xs2na, i);
  xs2na_data = xs2na->data;
  for (i = 0; i < n; i++) {
    xs2na_data[i] = rtNaN;
  }
  emxInit_int32_T(&r1, 2);
  i = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = id->size[1];
  emxEnsureCapacity_int32_T(r1, i);
  r2 = r1->data;
  loop_ub = id->size[1];
  for (i = 0; i < loop_ub; i++) {
    r2[i] = (int)id_data[i];
  }
  emxFree_real_T(&id);
  loop_ub = r1->size[1];
  for (i = 0; i < loop_ub; i++) {
    xs2na_data[r2[i] - 1] = xs2_data[i];
  }
  emxFree_int32_T(&r1);
  emxFree_real_T(&xs2);
  /*  disp([' iter = ' num2str(iter)]) */
  /*  fprintf(' iter = %.0f\n ',iter) */
  i = weights->size[0];
  weights->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(weights, i);
  weights_data = weights->data;
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights_data[i] = true;
  }
  i = b_x->size[0];
  b_x->size[0] = xs2na->size[0];
  emxEnsureCapacity_boolean_T(b_x, i);
  b_x_data = b_x->data;
  loop_ub = xs2na->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_x_data[i] = rtIsNaN(xs2na_data[i]);
  }
  emxFree_real_T(&xs2na);
  end = b_x->size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= end; i++) {
    if (b_x_data[i]) {
      trueCount++;
    }
  }
  emxInit_int32_T(&r3, 1);
  i = r3->size[0];
  r3->size[0] = trueCount;
  emxEnsureCapacity_int32_T(r3, i);
  r2 = r3->data;
  loop_ub = 0;
  for (i = 0; i <= end; i++) {
    if (b_x_data[i]) {
      r2[loop_ub] = i + 1;
      loop_ub++;
    }
  }
  emxFree_boolean_T(&b_x);
  loop_ub = r3->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights_data[r2[i] - 1] = false;
  }
  emxFree_int32_T(&r3);
}

/* End of code generation (GYfilt.c) */
