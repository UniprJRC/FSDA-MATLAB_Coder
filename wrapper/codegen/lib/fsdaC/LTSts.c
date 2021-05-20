/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts.c
 *
 * Code generation for function 'LTSts'
 *
 */

/* Include files */
#include "LTSts.h"
#include "any.h"
#include "blockedSummation.h"
#include "bsxfun.h"
#include "colon.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "mldivide.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Custom Source Code */
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
/* Function Declarations */
static void
ALSbsxfun(const captured_var *reftolALS, const captured_var *refstepsALS,
          const c_captured_var *indlinsc, const c_captured_var *Xseaso,
          const c_captured_var *bsb, const b_captured_var *isemptyX,
          const captured_var *lshiftYN, const c_captured_var *Xtrend,
          const c_captured_var *Seq, const captured_var *varampl,
          const c_captured_var *Xlshift, const c_captured_var *X,
          const c_captured_var *yin, const captured_var *trend,
          const captured_var *nexpl, const c_captured_var *otherind,
          const emxArray_real_T *beta0, emxArray_real_T *newbeta,
          double *exitflag);

static void b_ALS(const c_captured_var *Seq, const c_captured_var *bsb,
                  const c_captured_var *Xseaso, const c_captured_var *Xtrend,
                  const c_captured_var *yin, const captured_var *trend,
                  const captured_var *nexpl, const captured_var *varampl,
                  const b_captured_var *isemptyX, const captured_var *lshiftYN,
                  const c_captured_var *Xlshift, const c_captured_var *X,
                  const captured_var *reftolALS,
                  const captured_var *refstepsALS,
                  const c_captured_var *indlinsc,
                  const c_captured_var *otherind, const emxArray_real_T *beta0,
                  emxArray_real_T *newbeta, double *exitflag);

/* Function Definitions */
static void
ALSbsxfun(const captured_var *reftolALS, const captured_var *refstepsALS,
          const c_captured_var *indlinsc, const c_captured_var *Xseaso,
          const c_captured_var *bsb, const b_captured_var *isemptyX,
          const captured_var *lshiftYN, const c_captured_var *Xtrend,
          const c_captured_var *Seq, const captured_var *varampl,
          const c_captured_var *Xlshift, const c_captured_var *X,
          const c_captured_var *yin, const captured_var *trend,
          const captured_var *nexpl, const c_captured_var *otherind,
          const emxArray_real_T *beta0, emxArray_real_T *newbeta,
          double *exitflag)
{
  emxArray_boolean_T *r3;
  emxArray_int32_T *r1;
  emxArray_real_T *a;
  emxArray_real_T *at;
  emxArray_real_T *b0145;
  emxArray_real_T *b_Seq;
  emxArray_real_T *b_a;
  emxArray_real_T *b_b0145;
  emxArray_real_T *oldbeta;
  emxArray_real_T *r;
  emxArray_real_T *r2;
  emxArray_real_T *tr_expl_nls_lshift;
  emxArray_real_T *varargin_1;
  emxArray_real_T *varargin_2;
  emxArray_real_T *varargin_3;
  emxArray_real_T *yhatnlseaso;
  double betadiff;
  double iter;
  double y;
  int b_exitflag;
  int b_input_sizes_idx_1;
  int i;
  int i1;
  int i2;
  int input_sizes_idx_1;
  int loop_ub;
  int result;
  int sizes_idx_1;
  signed char c_input_sizes_idx_1;
  bool empty_non_axis_sizes;
  bool exitg1;
  iter = 0.0;
  betadiff = 9999.0;
  i = newbeta->size[0];
  newbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(newbeta, i);
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    newbeta->data[i] = beta0->data[i];
  }
  emxInit_real_T(&oldbeta, 1);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(oldbeta, i);
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbeta->data[i] = beta0->data[i];
  }
  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
  b_exitflag = 0;
  emxInit_real_T(&at, 1);
  emxInit_real_T(&tr_expl_nls_lshift, 2);
  emxInit_real_T(&b0145, 1);
  emxInit_real_T(&yhatnlseaso, 1);
  emxInit_real_T(&r, 1);
  emxInit_int32_T(&r1, 2);
  emxInit_real_T(&a, 2);
  emxInit_real_T(&varargin_1, 2);
  emxInit_real_T(&varargin_2, 2);
  emxInit_real_T(&varargin_3, 2);
  emxInit_real_T(&b_a, 1);
  emxInit_real_T(&r2, 2);
  emxInit_boolean_T(&r3, 1);
  emxInit_real_T(&b_Seq, 2);
  emxInit_real_T(&b_b0145, 2);
  exitg1 = false;
  while ((!exitg1) &&
         ((betadiff > reftolALS->contents) && (iter < refstepsALS->contents))) {
    iter++;
    /*  b2378 estimate of linear part of seasonal component */
    i = b_b0145->size[0] * b_b0145->size[1];
    b_b0145->size[0] = 1;
    b_b0145->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_real_T(b_b0145, i);
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_b0145->data[i] = newbeta->data[(int)indlinsc->contents->data[i] - 1];
    }
    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    loop_ub = Xseaso->contents->size[1];
    i = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    a->size[1] = loop_ub;
    emxEnsureCapacity_real_T(a, i);
    for (i = 0; i < loop_ub; i++) {
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        a->data[i1 + a->size[0] * i] =
            Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                    Xseaso->contents->size[0] * i) -
                                   1];
      }
    }
    mtimes(a, b_b0145, at);
    /*  OLS to estimate coefficients of trend + expl variables + non lin coeff
     * of */
    /*  seasonal + coefficient of fixed level shift */
    /*  trlshift is the matrix of explanatory variables */
    if (isemptyX->contents) {
      if (lshiftYN->contents == 1.0) {
        betadiff = varampl->contents + 1.0;
        if (2.0 > betadiff) {
          i = 0;
          i1 = 0;
        } else {
          i = 1;
          i1 = (int)betadiff;
        }
        loop_ub = Xtrend->contents->size[1];
        i2 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = bsb->contents->size[0];
        varargin_1->size[1] = loop_ub;
        emxEnsureCapacity_real_T(varargin_1, i2);
        for (i2 = 0; i2 < loop_ub; i2++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
               b_input_sizes_idx_1++) {
            varargin_1->data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
                Xtrend->contents
                    ->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                            Xtrend->contents->size[0] * i2) -
                           1];
          }
        }
        i2 = b_Seq->size[0] * b_Seq->size[1];
        b_Seq->size[0] = bsb->contents->size[0];
        loop_ub = i1 - i;
        b_Seq->size[1] = loop_ub;
        emxEnsureCapacity_real_T(b_Seq, i2);
        for (i1 = 0; i1 < loop_ub; i1++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
            b_Seq->data[i2 + b_Seq->size[0] * i1] =
                Seq->contents->data[((int)bsb->contents->data[i2] +
                                     Seq->contents->size[0] * (i + i1)) -
                                    1];
          }
        }
        c_bsxfun(at, b_Seq, varargin_2);
        i = yhatnlseaso->size[0];
        yhatnlseaso->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(yhatnlseaso, i);
        loop_ub = bsb->contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          yhatnlseaso->data[i] =
              Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
        }
        if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
          result = varargin_1->size[0];
        } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
          result = varargin_2->size[0];
        } else if (yhatnlseaso->size[0] != 0) {
          result = yhatnlseaso->size[0];
        } else {
          result = varargin_1->size[0];
          if (varargin_2->size[0] > varargin_1->size[0]) {
            result = varargin_2->size[0];
          }
        }
        empty_non_axis_sizes = (result == 0);
        if (empty_non_axis_sizes ||
            ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0))) {
          input_sizes_idx_1 = varargin_1->size[1];
        } else {
          input_sizes_idx_1 = 0;
        }
        if (empty_non_axis_sizes ||
            ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0))) {
          b_input_sizes_idx_1 = varargin_2->size[1];
        } else {
          b_input_sizes_idx_1 = 0;
        }
        if (empty_non_axis_sizes || (yhatnlseaso->size[0] != 0)) {
          sizes_idx_1 = 1;
        } else {
          sizes_idx_1 = 0;
        }
        i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
        tr_expl_nls_lshift->size[0] = result;
        i1 = input_sizes_idx_1 + b_input_sizes_idx_1;
        tr_expl_nls_lshift->size[1] = i1 + sizes_idx_1;
        emxEnsureCapacity_real_T(tr_expl_nls_lshift, i);
        for (i = 0; i < input_sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i] =
                varargin_1->data[i2 + result * i];
          }
        }
        for (i = 0; i < b_input_sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] *
                                              (i + input_sizes_idx_1)] =
                varargin_2->data[i2 + result * i];
          }
        }
        for (i = 0; i < sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i1] =
                yhatnlseaso->data[i2];
          }
        }
      } else {
        betadiff = varampl->contents + 1.0;
        if (2.0 > betadiff) {
          i = 0;
          i1 = 0;
        } else {
          i = 1;
          i1 = (int)betadiff;
        }
        loop_ub = Xtrend->contents->size[1];
        i2 = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = bsb->contents->size[0];
        varargin_1->size[1] = loop_ub;
        emxEnsureCapacity_real_T(varargin_1, i2);
        for (i2 = 0; i2 < loop_ub; i2++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
               b_input_sizes_idx_1++) {
            varargin_1->data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
                Xtrend->contents
                    ->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                            Xtrend->contents->size[0] * i2) -
                           1];
          }
        }
        i2 = b_Seq->size[0] * b_Seq->size[1];
        b_Seq->size[0] = bsb->contents->size[0];
        loop_ub = i1 - i;
        b_Seq->size[1] = loop_ub;
        emxEnsureCapacity_real_T(b_Seq, i2);
        for (i1 = 0; i1 < loop_ub; i1++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
            b_Seq->data[i2 + b_Seq->size[0] * i1] =
                Seq->contents->data[((int)bsb->contents->data[i2] +
                                     Seq->contents->size[0] * (i + i1)) -
                                    1];
          }
        }
        c_bsxfun(at, b_Seq, varargin_2);
        if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
          result = varargin_1->size[0];
        } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
          result = varargin_2->size[0];
        } else {
          result = varargin_1->size[0];
          if (varargin_2->size[0] > varargin_1->size[0]) {
            result = varargin_2->size[0];
          }
        }
        empty_non_axis_sizes = (result == 0);
        if (empty_non_axis_sizes ||
            ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0))) {
          input_sizes_idx_1 = varargin_1->size[1];
        } else {
          input_sizes_idx_1 = 0;
        }
        if (empty_non_axis_sizes ||
            ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0))) {
          sizes_idx_1 = varargin_2->size[1];
        } else {
          sizes_idx_1 = 0;
        }
        i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
        tr_expl_nls_lshift->size[0] = result;
        tr_expl_nls_lshift->size[1] = input_sizes_idx_1 + sizes_idx_1;
        emxEnsureCapacity_real_T(tr_expl_nls_lshift, i);
        for (i = 0; i < input_sizes_idx_1; i++) {
          for (i1 = 0; i1 < result; i1++) {
            tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * i] =
                varargin_1->data[i1 + result * i];
          }
        }
        for (i = 0; i < sizes_idx_1; i++) {
          for (i1 = 0; i1 < result; i1++) {
            tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] *
                                              (i + input_sizes_idx_1)] =
                varargin_2->data[i1 + result * i];
          }
        }
      }
    } else if (lshiftYN->contents == 1.0) {
      betadiff = varampl->contents + 1.0;
      if (2.0 > betadiff) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = (int)betadiff;
      }
      loop_ub = Xtrend->contents->size[1];
      i2 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = bsb->contents->size[0];
      varargin_1->size[1] = loop_ub;
      emxEnsureCapacity_real_T(varargin_1, i2);
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          varargin_1->data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
              Xtrend->contents
                  ->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                          Xtrend->contents->size[0] * i2) -
                         1];
        }
      }
      loop_ub = X->contents->size[1];
      i2 = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = bsb->contents->size[0];
      varargin_2->size[1] = loop_ub;
      emxEnsureCapacity_real_T(varargin_2, i2);
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          varargin_2->data[b_input_sizes_idx_1 + varargin_2->size[0] * i2] =
              X->contents->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                                 X->contents->size[0] * i2) -
                                1];
        }
      }
      i2 = b_Seq->size[0] * b_Seq->size[1];
      b_Seq->size[0] = bsb->contents->size[0];
      loop_ub = i1 - i;
      b_Seq->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_Seq, i2);
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
          b_Seq->data[i2 + b_Seq->size[0] * i1] =
              Seq->contents->data[((int)bsb->contents->data[i2] +
                                   Seq->contents->size[0] * (i + i1)) -
                                  1];
        }
      }
      c_bsxfun(at, b_Seq, r2);
      i = varargin_3->size[0] * varargin_3->size[1];
      varargin_3->size[0] = r2->size[0];
      varargin_3->size[1] = r2->size[1];
      emxEnsureCapacity_real_T(varargin_3, i);
      loop_ub = r2->size[0] * r2->size[1];
      for (i = 0; i < loop_ub; i++) {
        varargin_3->data[i] = r2->data[i];
      }
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatnlseaso->data[i] =
            Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
      }
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        result = varargin_1->size[0];
      } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
        result = varargin_2->size[0];
      } else if ((varargin_3->size[0] != 0) && (varargin_3->size[1] != 0)) {
        result = varargin_3->size[0];
      } else if (yhatnlseaso->size[0] != 0) {
        result = yhatnlseaso->size[0];
      } else {
        result = varargin_1->size[0];
        if (varargin_2->size[0] > varargin_1->size[0]) {
          result = varargin_2->size[0];
        }
        if (varargin_3->size[0] > result) {
          result = varargin_3->size[0];
        }
      }
      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes ||
          ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0))) {
        input_sizes_idx_1 = varargin_1->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0))) {
        b_input_sizes_idx_1 = varargin_2->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((varargin_3->size[0] != 0) && (varargin_3->size[1] != 0))) {
        c_input_sizes_idx_1 = (signed char)varargin_3->size[1];
      } else {
        c_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (yhatnlseaso->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = result;
      i1 = (input_sizes_idx_1 + b_input_sizes_idx_1) + c_input_sizes_idx_1;
      tr_expl_nls_lshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(tr_expl_nls_lshift, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i] =
              varargin_1->data[i2 + result * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] *
                                            (i + input_sizes_idx_1)] =
              varargin_2->data[i2 + result * i];
        }
      }
      loop_ub = c_input_sizes_idx_1;
      for (i = 0; i < loop_ub; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift
              ->data[i2 + tr_expl_nls_lshift->size[0] *
                              ((i + input_sizes_idx_1) + b_input_sizes_idx_1)] =
              varargin_3->data[i2 + result * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift->data[i2 + tr_expl_nls_lshift->size[0] * i1] =
              yhatnlseaso->data[i2];
        }
      }
    } else {
      betadiff = varampl->contents + 1.0;
      if (2.0 > betadiff) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = (int)betadiff;
      }
      loop_ub = Xtrend->contents->size[1];
      i2 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = bsb->contents->size[0];
      varargin_1->size[1] = loop_ub;
      emxEnsureCapacity_real_T(varargin_1, i2);
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          varargin_1->data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
              Xtrend->contents
                  ->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                          Xtrend->contents->size[0] * i2) -
                         1];
        }
      }
      loop_ub = X->contents->size[1];
      i2 = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = bsb->contents->size[0];
      varargin_2->size[1] = loop_ub;
      emxEnsureCapacity_real_T(varargin_2, i2);
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          varargin_2->data[b_input_sizes_idx_1 + varargin_2->size[0] * i2] =
              X->contents->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                                 X->contents->size[0] * i2) -
                                1];
        }
      }
      i2 = b_Seq->size[0] * b_Seq->size[1];
      b_Seq->size[0] = bsb->contents->size[0];
      loop_ub = i1 - i;
      b_Seq->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_Seq, i2);
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
          b_Seq->data[i2 + b_Seq->size[0] * i1] =
              Seq->contents->data[((int)bsb->contents->data[i2] +
                                   Seq->contents->size[0] * (i + i1)) -
                                  1];
        }
      }
      c_bsxfun(at, b_Seq, a);
      if ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0)) {
        result = varargin_1->size[0];
      } else if ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0)) {
        result = varargin_2->size[0];
      } else if ((a->size[0] != 0) && (a->size[1] != 0)) {
        result = a->size[0];
      } else {
        result = varargin_1->size[0];
        if (varargin_2->size[0] > varargin_1->size[0]) {
          result = varargin_2->size[0];
        }
        if (a->size[0] > result) {
          result = a->size[0];
        }
      }
      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes ||
          ((varargin_1->size[0] != 0) && (varargin_1->size[1] != 0))) {
        input_sizes_idx_1 = varargin_1->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((varargin_2->size[0] != 0) && (varargin_2->size[1] != 0))) {
        b_input_sizes_idx_1 = varargin_2->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || ((a->size[0] != 0) && (a->size[1] != 0))) {
        sizes_idx_1 = a->size[1];
      } else {
        sizes_idx_1 = 0;
      }
      i = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = result;
      tr_expl_nls_lshift->size[1] =
          (input_sizes_idx_1 + b_input_sizes_idx_1) + sizes_idx_1;
      emxEnsureCapacity_real_T(tr_expl_nls_lshift, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] * i] =
              varargin_1->data[i1 + result * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift->data[i1 + tr_expl_nls_lshift->size[0] *
                                            (i + input_sizes_idx_1)] =
              varargin_2->data[i1 + result * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift
              ->data[i1 + tr_expl_nls_lshift->size[0] *
                              ((i + input_sizes_idx_1) + b_input_sizes_idx_1)] =
              a->data[i1 + result * i];
        }
      }
    }
    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    i = r->size[0];
    r->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(r, i);
    loop_ub = bsb->contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
    }
    loop_ub = r->size[0];
    for (i = 0; i < loop_ub; i++) {
      r->data[i] -= at->data[i];
    }
    mldivide(tr_expl_nls_lshift, r, b0145);
    /*  Now find new coefficients of linear part of seasonal */
    /*  component in the regression of y-trend-expl-lsihft versus */
    /*  vector which contains non linear part of seasonal component */
    /*  which multiplies each column of matrix Xseaso (linear part of */
    /*  seasonal component) */
    betadiff = varampl->contents + 1.0;
    if (2.0 > betadiff) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = (int)betadiff;
    }
    betadiff = (trend->contents + 2.0) + nexpl->contents;
    y = (betadiff + varampl->contents) - 1.0;
    if (betadiff > y) {
      i2 = 0;
      b_input_sizes_idx_1 = 0;
    } else {
      i2 = (int)betadiff - 1;
      b_input_sizes_idx_1 = (int)y;
    }
    result = yhatnlseaso->size[0];
    yhatnlseaso->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(yhatnlseaso, result);
    loop_ub = bsb->contents->size[0];
    for (result = 0; result < loop_ub; result++) {
      yhatnlseaso->data[result] =
          Seq->contents->data[(int)bsb->contents->data[result] - 1];
    }
    result = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    loop_ub = i1 - i;
    a->size[1] = loop_ub;
    emxEnsureCapacity_real_T(a, result);
    for (i1 = 0; i1 < loop_ub; i1++) {
      input_sizes_idx_1 = bsb->contents->size[0];
      for (result = 0; result < input_sizes_idx_1; result++) {
        a->data[result + a->size[0] * i1] =
            Seq->contents->data[((int)bsb->contents->data[result] +
                                 Seq->contents->size[0] * (i + i1)) -
                                1];
      }
    }
    i = b_b0145->size[0] * b_b0145->size[1];
    b_b0145->size[0] = 1;
    loop_ub = b_input_sizes_idx_1 - i2;
    b_b0145->size[1] = loop_ub;
    emxEnsureCapacity_real_T(b_b0145, i);
    for (i = 0; i < loop_ub; i++) {
      b_b0145->data[i] = b0145->data[i2 + i];
    }
    mtimes(a, b_b0145, r);
    loop_ub = yhatnlseaso->size[0];
    for (i = 0; i < loop_ub; i++) {
      yhatnlseaso->data[i] += r->data[i];
    }
    if (isemptyX->contents) {
      if (lshiftYN->contents == 1.0) {
        betadiff = trend->contents + 1.0;
        if (1.0 > betadiff) {
          loop_ub = 0;
        } else {
          loop_ub = (int)betadiff;
        }
        i = r->size[0];
        r->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(r, i);
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          r->data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xtrend->contents->size[1];
        i = a->size[0] * a->size[1];
        a->size[0] = bsb->contents->size[0];
        a->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(a, i);
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            a->data[i1 + a->size[0] * i] =
                Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                        Xtrend->contents->size[0] * i) -
                                       1];
          }
        }
        i = b_a->size[0];
        b_a->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(b_a, i);
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          b_a->data[i] =
              Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xseaso->contents->size[1];
        i = b_Seq->size[0] * b_Seq->size[1];
        b_Seq->size[0] = bsb->contents->size[0];
        b_Seq->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(b_Seq, i);
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            b_Seq->data[i1 + b_Seq->size[0] * i] =
                Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                        Xseaso->contents->size[0] * i) -
                                       1];
          }
        }
        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(b_b0145, i);
        for (i = 0; i < loop_ub; i++) {
          b_b0145->data[i] = b0145->data[i];
        }
        mtimes(a, b_b0145, at);
        loop_ub = r->size[0];
        for (i = 0; i < loop_ub; i++) {
          r->data[i] = (r->data[i] - at->data[i]) -
                       b_a->data[i] * b0145->data[b0145->size[0] - 1];
        }
        c_bsxfun(yhatnlseaso, b_Seq, r2);
        mldivide(r2, r, yhatnlseaso);
      } else {
        betadiff = trend->contents + 1.0;
        if (1.0 > betadiff) {
          loop_ub = 0;
        } else {
          loop_ub = (int)betadiff;
        }
        i = r->size[0];
        r->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(r, i);
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          r->data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xtrend->contents->size[1];
        i = a->size[0] * a->size[1];
        a->size[0] = bsb->contents->size[0];
        a->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(a, i);
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            a->data[i1 + a->size[0] * i] =
                Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                        Xtrend->contents->size[0] * i) -
                                       1];
          }
        }
        input_sizes_idx_1 = Xseaso->contents->size[1];
        i = b_Seq->size[0] * b_Seq->size[1];
        b_Seq->size[0] = bsb->contents->size[0];
        b_Seq->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(b_Seq, i);
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            b_Seq->data[i1 + b_Seq->size[0] * i] =
                Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                        Xseaso->contents->size[0] * i) -
                                       1];
          }
        }
        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(b_b0145, i);
        for (i = 0; i < loop_ub; i++) {
          b_b0145->data[i] = b0145->data[i];
        }
        mtimes(a, b_b0145, at);
        loop_ub = r->size[0];
        for (i = 0; i < loop_ub; i++) {
          r->data[i] -= at->data[i];
        }
        c_bsxfun(yhatnlseaso, b_Seq, r2);
        mldivide(r2, r, yhatnlseaso);
      }
    } else if (lshiftYN->contents == 1.0) {
      betadiff = trend->contents + 1.0;
      if (1.0 > betadiff) {
        loop_ub = 0;
      } else {
        loop_ub = (int)betadiff;
      }
      i = r->size[0];
      r->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(r, i);
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        r->data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
      }
      input_sizes_idx_1 = Xtrend->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(a, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        result = bsb->contents->size[0];
        for (i1 = 0; i1 < result; i1++) {
          a->data[i1 + a->size[0] * i] =
              Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                      Xtrend->contents->size[0] * i) -
                                     1];
        }
      }
      betadiff = trend->contents + 2.0;
      y = (trend->contents + 1.0) + nexpl->contents;
      if (betadiff > y) {
        i = 0;
        i1 = 0;
      } else {
        i = (int)betadiff - 1;
        i1 = (int)y;
      }
      input_sizes_idx_1 = X->contents->size[1];
      i2 = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
      tr_expl_nls_lshift->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(tr_expl_nls_lshift, i2);
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          tr_expl_nls_lshift
              ->data[b_input_sizes_idx_1 + tr_expl_nls_lshift->size[0] * i2] =
              X->contents->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                                 X->contents->size[0] * i2) -
                                1];
        }
      }
      i2 = b_a->size[0];
      b_a->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(b_a, i2);
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        b_a->data[i2] =
            Xlshift->contents->data[(int)bsb->contents->data[i2] - 1];
      }
      input_sizes_idx_1 = Xseaso->contents->size[1];
      i2 = b_Seq->size[0] * b_Seq->size[1];
      b_Seq->size[0] = bsb->contents->size[0];
      b_Seq->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(b_Seq, i2);
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          b_Seq->data[b_input_sizes_idx_1 + b_Seq->size[0] * i2] =
              Xseaso->contents
                  ->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                          Xseaso->contents->size[0] * i2) -
                         1];
        }
      }
      c_bsxfun(yhatnlseaso, b_Seq, r2);
      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_b0145, i2);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_b0145->data[i2] = b0145->data[i2];
      }
      mtimes(a, b_b0145, at);
      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      loop_ub = i1 - i;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_b0145, i2);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_b0145->data[i1] = b0145->data[i + i1];
      }
      mtimes(tr_expl_nls_lshift, b_b0145, yhatnlseaso);
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = ((r->data[i] - at->data[i]) - yhatnlseaso->data[i]) -
                     b_a->data[i] * b0145->data[b0145->size[0] - 1];
      }
      mldivide(r2, r, yhatnlseaso);
    } else {
      betadiff = trend->contents + 1.0;
      if (1.0 > betadiff) {
        loop_ub = 0;
      } else {
        loop_ub = (int)betadiff;
      }
      i = r->size[0];
      r->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(r, i);
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        r->data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
      }
      input_sizes_idx_1 = Xtrend->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(a, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        result = bsb->contents->size[0];
        for (i1 = 0; i1 < result; i1++) {
          a->data[i1 + a->size[0] * i] =
              Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                      Xtrend->contents->size[0] * i) -
                                     1];
        }
      }
      y = trend->contents + 2.0;
      betadiff += nexpl->contents;
      if (y > betadiff) {
        i = 0;
        i1 = 0;
      } else {
        i = (int)y - 1;
        i1 = (int)betadiff;
      }
      input_sizes_idx_1 = X->contents->size[1];
      i2 = tr_expl_nls_lshift->size[0] * tr_expl_nls_lshift->size[1];
      tr_expl_nls_lshift->size[0] = bsb->contents->size[0];
      tr_expl_nls_lshift->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(tr_expl_nls_lshift, i2);
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          tr_expl_nls_lshift
              ->data[b_input_sizes_idx_1 + tr_expl_nls_lshift->size[0] * i2] =
              X->contents->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                                 X->contents->size[0] * i2) -
                                1];
        }
      }
      input_sizes_idx_1 = Xseaso->contents->size[1];
      i2 = b_Seq->size[0] * b_Seq->size[1];
      b_Seq->size[0] = bsb->contents->size[0];
      b_Seq->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(b_Seq, i2);
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          b_Seq->data[b_input_sizes_idx_1 + b_Seq->size[0] * i2] =
              Xseaso->contents
                  ->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                          Xseaso->contents->size[0] * i2) -
                         1];
        }
      }
      c_bsxfun(yhatnlseaso, b_Seq, r2);
      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_b0145, i2);
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_b0145->data[i2] = b0145->data[i2];
      }
      mtimes(a, b_b0145, at);
      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      loop_ub = i1 - i;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_b0145, i2);
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_b0145->data[i1] = b0145->data[i + i1];
      }
      mtimes(tr_expl_nls_lshift, b_b0145, yhatnlseaso);
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        r->data[i] = (r->data[i] - at->data[i]) - yhatnlseaso->data[i];
      }
      mldivide(r2, r, yhatnlseaso);
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = (int)indlinsc->contents->data[i];
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta->data[r1->data[i] - 1] = yhatnlseaso->data[i];
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    loop_ub = otherind->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r1->data[i] = (int)otherind->contents->data[i];
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta->data[r1->data[i] - 1] = b0145->data[i];
    }
    /*  betadiff is linked to the tolerance (specified in reftol) */
    loop_ub = oldbeta->size[0];
    for (i = 0; i < loop_ub; i++) {
      oldbeta->data[i] -= newbeta->data[i];
    }
    if (oldbeta->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = oldbeta->size[0];
      for (result = 0; result < i; result++) {
        betadiff += fabs(oldbeta->data[result]);
      }
    }
    if (newbeta->size[0] == 0) {
      y = 0.0;
    } else {
      y = 0.0;
      i = newbeta->size[0];
      for (result = 0; result < i; result++) {
        y += fabs(newbeta->data[result]);
      }
    }
    betadiff /= y;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(oldbeta, i);
    loop_ub = newbeta->size[0];
    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = r3->size[0];
    r3->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    for (i = 0; i < loop_ub; i++) {
      oldbeta->data[i] = newbeta->data[i];
      r3->data[i] = rtIsNaN(newbeta->data[i]);
    }
    if (any(r3)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(newbeta, i);
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        newbeta->data[i] = beta0->data[i];
      }
      b_exitflag = -1;
      exitg1 = true;
    }
  }
  emxFree_real_T(&b_b0145);
  emxFree_real_T(&b_Seq);
  emxFree_boolean_T(&r3);
  emxFree_real_T(&r2);
  emxFree_real_T(&b_a);
  emxFree_real_T(&varargin_3);
  emxFree_real_T(&varargin_2);
  emxFree_real_T(&varargin_1);
  emxFree_real_T(&a);
  emxFree_int32_T(&r1);
  emxFree_real_T(&r);
  emxFree_real_T(&yhatnlseaso);
  emxFree_real_T(&b0145);
  emxFree_real_T(&tr_expl_nls_lshift);
  emxFree_real_T(&at);
  emxFree_real_T(&oldbeta);
  *exitflag = b_exitflag;
}

static void b_ALS(const c_captured_var *Seq, const c_captured_var *bsb,
                  const c_captured_var *Xseaso, const c_captured_var *Xtrend,
                  const c_captured_var *yin, const captured_var *trend,
                  const captured_var *nexpl, const captured_var *varampl,
                  const b_captured_var *isemptyX, const captured_var *lshiftYN,
                  const c_captured_var *Xlshift, const c_captured_var *X,
                  const captured_var *reftolALS,
                  const captured_var *refstepsALS,
                  const c_captured_var *indlinsc,
                  const c_captured_var *otherind, const emxArray_real_T *beta0,
                  emxArray_real_T *newbeta, double *exitflag)
{
  emxArray_boolean_T *r2;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *Seqbsb;
  emxArray_real_T *Seqbsbvarampl;
  emxArray_real_T *Xbsb;
  emxArray_real_T *Xlshiftbsb;
  emxArray_real_T *Xseasobsb;
  emxArray_real_T *XtrendXbsbXseasonXlshift;
  emxArray_real_T *Xtrendbsb;
  emxArray_real_T *XtrendbsbXbsb;
  emxArray_real_T *b_Seqbsb;
  emxArray_real_T *b_Xlshiftbsb;
  emxArray_real_T *indnlseaso;
  emxArray_real_T *indnlseasoc;
  emxArray_real_T *oldbeta;
  emxArray_real_T *y;
  emxArray_real_T *yinbsb;
  double b2378;
  double b_tmp;
  double betadiff;
  double iter;
  int b_exitflag;
  int b_input_sizes_idx_1;
  int b_sizes_idx_1;
  int i;
  int i1;
  int i2;
  int input_sizes_idx_1;
  int loop_ub;
  int sizes_idx_1;
  bool empty_non_axis_sizes;
  bool exitg1;
  /*  The part below contains subfunctions which are used only inside this file
   */
  /*  ALS computes Alternating Least Squares estimate of beta starting from */
  /*  vector beta0. The rows which are used are those specified in global */
  /*  variable bsb */
  iter = 0.0;
  betadiff = 9999.0;
  i = newbeta->size[0];
  newbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(newbeta, i);
  sizes_idx_1 = beta0->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    newbeta->data[i] = beta0->data[i];
  }
  emxInit_real_T(&oldbeta, 1);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(oldbeta, i);
  sizes_idx_1 = beta0->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    oldbeta->data[i] = beta0->data[i];
  }
  emxInit_real_T(&Seqbsb, 1);
  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
  b_exitflag = 0;
  /*  Define all the relevant matrices before the loop */
  i = Seqbsb->size[0];
  Seqbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(Seqbsb, i);
  sizes_idx_1 = bsb->contents->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    Seqbsb->data[i] = Seq->contents->data[(int)bsb->contents->data[i] - 1];
  }
  emxInit_real_T(&Xseasobsb, 2);
  sizes_idx_1 = Xseaso->contents->size[1];
  i = Xseasobsb->size[0] * Xseasobsb->size[1];
  Xseasobsb->size[0] = bsb->contents->size[0];
  Xseasobsb->size[1] = sizes_idx_1;
  emxEnsureCapacity_real_T(Xseasobsb, i);
  for (i = 0; i < sizes_idx_1; i++) {
    loop_ub = bsb->contents->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Xseasobsb->data[i1 + Xseasobsb->size[0] * i] =
          Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                  Xseaso->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&Xtrendbsb, 2);
  sizes_idx_1 = Xtrend->contents->size[1];
  i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
  Xtrendbsb->size[0] = bsb->contents->size[0];
  Xtrendbsb->size[1] = sizes_idx_1;
  emxEnsureCapacity_real_T(Xtrendbsb, i);
  for (i = 0; i < sizes_idx_1; i++) {
    loop_ub = bsb->contents->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] =
          Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                  Xtrend->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&yinbsb, 1);
  i = yinbsb->size[0];
  yinbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(yinbsb, i);
  sizes_idx_1 = bsb->contents->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    yinbsb->data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
  }
  b2378 = (trend->contents + 2.0) + nexpl->contents;
  b_tmp = b2378 + varampl->contents;
  emxInit_real_T(&indnlseaso, 2);
  if (rtIsNaN(b2378) || rtIsNaN(b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso->data[0] = rtNaN;
  } else if (b_tmp - 1.0 < b2378) {
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 0;
  } else if ((rtIsInf(b2378) || rtIsInf(b_tmp - 1.0)) &&
             (b2378 == b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso->data[0] = rtNaN;
  } else if (floor(b2378) == b2378) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    sizes_idx_1 = (int)floor((b_tmp - 1.0) - b2378);
    indnlseaso->size[1] = sizes_idx_1 + 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    for (i = 0; i <= sizes_idx_1; i++) {
      indnlseaso->data[i] = b2378 + (double)i;
    }
  } else {
    eml_float_colon(b2378, b_tmp - 1.0, indnlseaso);
  }
  b2378 = varampl->contents + 1.0;
  if (2.0 > b2378) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = (int)b2378;
  }
  emxInit_real_T(&Seqbsbvarampl, 2);
  i2 = Seqbsbvarampl->size[0] * Seqbsbvarampl->size[1];
  Seqbsbvarampl->size[0] = bsb->contents->size[0];
  sizes_idx_1 = i1 - i;
  Seqbsbvarampl->size[1] = sizes_idx_1;
  emxEnsureCapacity_real_T(Seqbsbvarampl, i2);
  for (i1 = 0; i1 < sizes_idx_1; i1++) {
    loop_ub = bsb->contents->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Seqbsbvarampl->data[i2 + Seqbsbvarampl->size[0] * i1] =
          Seq->contents->data[((int)bsb->contents->data[i2] +
                               Seq->contents->size[0] * (i + i1)) -
                              1];
    }
  }
  emxInit_real_T(&Xlshiftbsb, 1);
  emxInit_real_T(&XtrendXbsbXseasonXlshift, 2);
  emxInit_real_T(&indnlseasoc, 2);
  emxInit_real_T(&y, 2);
  if (isemptyX->contents) {
    if (lshiftYN->contents == 1.0) {
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftbsb, i);
      sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        Xlshiftbsb->data[i] =
            Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
      }
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) &&
                 (Seqbsbvarampl->size[1] != 0)) {
        loop_ub = Seqbsbvarampl->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        loop_ub = Xlshiftbsb->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
        if (Seqbsbvarampl->size[0] > Xtrendbsb->size[0]) {
          loop_ub = Seqbsbvarampl->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))) {
        b_input_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = loop_ub;
      i1 = input_sizes_idx_1 + b_input_sizes_idx_1;
      XtrendXbsbXseasonXlshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(XtrendXbsbXseasonXlshift, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] * i] =
              Xtrendbsb->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                              (i + input_sizes_idx_1)] =
              Seqbsbvarampl->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] * i1] =
              Xlshiftbsb->data[i2];
        }
      }
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        loop_ub = Xlshiftbsb->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb->data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * input_sizes_idx_1] =
              Xlshiftbsb->data[i1];
        }
      }
      b2378 = trend->contents + 1.0;
      if (rtIsNaN(b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(b2378) && (1.0 == b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        sizes_idx_1 = (int)floor(b2378 - 1.0);
        y->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_real_T(y, i);
        for (i = 0; i <= sizes_idx_1; i++) {
          y->data[i] = (double)i + 1.0;
        }
      }
      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(indnlseasoc, i);
      sizes_idx_1 = y->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        indnlseasoc->data[i] = y->data[i];
      }
      indnlseasoc->data[y->size[1]] = b_tmp;
    } else {
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) &&
                 (Seqbsbvarampl->size[1] != 0)) {
        loop_ub = Seqbsbvarampl->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
        if (Seqbsbvarampl->size[0] > Xtrendbsb->size[0]) {
          loop_ub = Seqbsbvarampl->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))) {
        sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        sizes_idx_1 = 0;
      }
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = loop_ub;
      XtrendXbsbXseasonXlshift->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(XtrendXbsbXseasonXlshift, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift
              ->data[i1 + XtrendXbsbXseasonXlshift->size[0] * i] =
              Xtrendbsb->data[i1 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift
              ->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                              (i + input_sizes_idx_1)] =
              Seqbsbvarampl->data[i1 + loop_ub * i];
        }
      }
      b2378 = trend->contents + 1.0;
      if (rtIsNaN(b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (rtIsInf(b2378) && (1.0 == b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc->data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        sizes_idx_1 = (int)floor(b2378 - 1.0);
        indnlseasoc->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        for (i = 0; i <= sizes_idx_1; i++) {
          indnlseasoc->data[i] = (double)i + 1.0;
        }
      }
    }
  } else {
    emxInit_real_T(&Xbsb, 2);
    sizes_idx_1 = X->contents->size[1];
    i = Xbsb->size[0] * Xbsb->size[1];
    Xbsb->size[0] = bsb->contents->size[0];
    Xbsb->size[1] = sizes_idx_1;
    emxEnsureCapacity_real_T(Xbsb, i);
    for (i = 0; i < sizes_idx_1; i++) {
      loop_ub = bsb->contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xbsb->data[i1 + Xbsb->size[0] * i] =
            X->contents->data[((int)bsb->contents->data[i1] +
                               X->contents->size[0] * i) -
                              1];
      }
    }
    if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
      loop_ub = Xtrendbsb->size[0];
    } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
      loop_ub = Xbsb->size[0];
    } else {
      loop_ub = Xtrendbsb->size[0];
      if (Xbsb->size[0] > Xtrendbsb->size[0]) {
        loop_ub = Xbsb->size[0];
      }
    }
    empty_non_axis_sizes = (loop_ub == 0);
    if (empty_non_axis_sizes ||
        ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
      input_sizes_idx_1 = Xtrendbsb->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0))) {
      sizes_idx_1 = Xbsb->size[1];
    } else {
      sizes_idx_1 = 0;
    }
    emxInit_real_T(&XtrendbsbXbsb, 2);
    i = XtrendbsbXbsb->size[0] * XtrendbsbXbsb->size[1];
    XtrendbsbXbsb->size[0] = loop_ub;
    XtrendbsbXbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(XtrendbsbXbsb, i);
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendbsbXbsb->data[i1 + XtrendbsbXbsb->size[0] * i] =
            Xtrendbsb->data[i1 + loop_ub * i];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendbsbXbsb
            ->data[i1 + XtrendbsbXbsb->size[0] * (i + input_sizes_idx_1)] =
            Xbsb->data[i1 + loop_ub * i];
      }
    }
    if (lshiftYN->contents == 1.0) {
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftbsb, i);
      sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        Xlshiftbsb->data[i] =
            Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
      }
      if ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0)) {
        loop_ub = XtrendbsbXbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) &&
                 (Seqbsbvarampl->size[1] != 0)) {
        loop_ub = Seqbsbvarampl->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        loop_ub = Xlshiftbsb->size[0];
      } else {
        loop_ub = XtrendbsbXbsb->size[0];
        if (Seqbsbvarampl->size[0] > XtrendbsbXbsb->size[0]) {
          loop_ub = Seqbsbvarampl->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0))) {
        b_input_sizes_idx_1 = XtrendbsbXbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))) {
        input_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = loop_ub;
      i1 = b_input_sizes_idx_1 + input_sizes_idx_1;
      XtrendXbsbXseasonXlshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(XtrendXbsbXseasonXlshift, i);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] * i] =
              XtrendbsbXbsb->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                              (i + b_input_sizes_idx_1)] =
              Seqbsbvarampl->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] * i1] =
              Xlshiftbsb->data[i2];
        }
      }
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
        loop_ub = Xbsb->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        loop_ub = Xlshiftbsb->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
        if (Xbsb->size[0] > Xtrendbsb->size[0]) {
          loop_ub = Xbsb->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        b_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        b_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      for (i = 0; i < b_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb->data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      i1 = b_sizes_idx_1 + input_sizes_idx_1;
      Xtrendbsb->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xtrendbsb->data[i2 + Xtrendbsb->size[0] * (i + b_sizes_idx_1)] =
              Xbsb->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xtrendbsb->data[i2 + Xtrendbsb->size[0] * i1] = Xlshiftbsb->data[i2];
        }
      }
      b2378 = (trend->contents + 1.0) + nexpl->contents;
      if (rtIsNaN(b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(b2378) && (1.0 == b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        sizes_idx_1 = (int)floor(b2378 - 1.0);
        y->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_real_T(y, i);
        for (i = 0; i <= sizes_idx_1; i++) {
          y->data[i] = (double)i + 1.0;
        }
      }
      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(indnlseasoc, i);
      sizes_idx_1 = y->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        indnlseasoc->data[i] = y->data[i];
      }
      indnlseasoc->data[y->size[1]] = b_tmp;
    } else {
      if ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0)) {
        loop_ub = XtrendbsbXbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) &&
                 (Seqbsbvarampl->size[1] != 0)) {
        loop_ub = Seqbsbvarampl->size[0];
      } else {
        loop_ub = XtrendbsbXbsb->size[0];
        if (Seqbsbvarampl->size[0] > XtrendbsbXbsb->size[0]) {
          loop_ub = Seqbsbvarampl->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0))) {
        b_input_sizes_idx_1 = XtrendbsbXbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))) {
        b_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        b_sizes_idx_1 = 0;
      }
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = loop_ub;
      XtrendXbsbXseasonXlshift->size[1] = b_input_sizes_idx_1 + b_sizes_idx_1;
      emxEnsureCapacity_real_T(XtrendXbsbXseasonXlshift, i);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift
              ->data[i1 + XtrendXbsbXseasonXlshift->size[0] * i] =
              XtrendbsbXbsb->data[i1 + loop_ub * i];
        }
      }
      for (i = 0; i < b_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift
              ->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                              (i + b_input_sizes_idx_1)] =
              Seqbsbvarampl->data[i1 + loop_ub * i];
        }
      }
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
        loop_ub = Xbsb->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
        if (Xbsb->size[0] > Xtrendbsb->size[0]) {
          loop_ub = Xbsb->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0))) {
        sizes_idx_1 = Xbsb->size[1];
      } else {
        sizes_idx_1 = 0;
      }
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb->data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * (i + input_sizes_idx_1)] =
              Xbsb->data[i1 + loop_ub * i];
        }
      }
      b2378 = (trend->contents + 1.0) + nexpl->contents;
      if (rtIsNaN(b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (rtIsInf(b2378) && (1.0 == b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc->data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        sizes_idx_1 = (int)floor(b2378 - 1.0);
        indnlseasoc->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        for (i = 0; i <= sizes_idx_1; i++) {
          indnlseasoc->data[i] = (double)i + 1.0;
        }
      }
    }
    emxFree_real_T(&XtrendbsbXbsb);
    emxFree_real_T(&Xbsb);
  }
  emxInit_int32_T(&r, 1);
  emxInit_int32_T(&r1, 2);
  emxInit_boolean_T(&r2, 1);
  emxInit_real_T(&b_Xlshiftbsb, 1);
  emxInit_real_T(&b_Seqbsb, 1);
  exitg1 = false;
  while ((!exitg1) &&
         ((betadiff > reftolALS->contents) && (iter < refstepsALS->contents))) {
    iter++;
    /*  b2378 estimate of linear part of seasonal component */
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_real_T(y, i);
    sizes_idx_1 = indlinsc->contents->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      y->data[i] = newbeta->data[(int)indlinsc->contents->data[i] - 1];
    }
    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    mtimes(Xseasobsb, y, Xlshiftbsb);
    /*  OLS to estimate coefficients of trend + expl variables + non lin coeff
     * of */
    /*  seasonal + coefficient of fixed level shift */
    /*  trlshift is the matrix of explanatory variables */
    i = r->size[0];
    r->size[0] = indnlseaso->size[1];
    emxEnsureCapacity_int32_T(r, i);
    sizes_idx_1 = indnlseaso->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      r->data[i] = (int)indnlseaso->data[i] - 1;
    }
    loop_ub = XtrendXbsbXseasonXlshift->size[0];
    i = b_Xlshiftbsb->size[0];
    b_Xlshiftbsb->size[0] = Xlshiftbsb->size[0];
    emxEnsureCapacity_real_T(b_Xlshiftbsb, i);
    sizes_idx_1 = Xlshiftbsb->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      b_Xlshiftbsb->data[i] = Xlshiftbsb->data[i] * Seqbsbvarampl->data[i];
    }
    input_sizes_idx_1 = XtrendXbsbXseasonXlshift->size[0];
    sizes_idx_1 = r->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendXbsbXseasonXlshift
            ->data[i1 + XtrendXbsbXseasonXlshift->size[0] * r->data[i]] =
            b_Xlshiftbsb->data[i1 + input_sizes_idx_1 * i];
      }
    }
    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    i = b_Xlshiftbsb->size[0];
    b_Xlshiftbsb->size[0] = yinbsb->size[0];
    emxEnsureCapacity_real_T(b_Xlshiftbsb, i);
    sizes_idx_1 = yinbsb->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      b_Xlshiftbsb->data[i] = yinbsb->data[i] - Xlshiftbsb->data[i];
    }
    mldivide(XtrendXbsbXseasonXlshift, b_Xlshiftbsb, Xlshiftbsb);
    /*  Now find new coefficients of linear part of seasonal */
    /*  component in the regression of y-trend-expl-lsihft versus */
    /*  vector which contains non linear part of seasonal component */
    /*  which multiplies each column of matrix Xseaso (linear part of */
    /*  seasonal component) */
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseaso->size[1];
    emxEnsureCapacity_real_T(y, i);
    sizes_idx_1 = indnlseaso->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      y->data[i] = Xlshiftbsb->data[(int)indnlseaso->data[i] - 1];
    }
    mtimes(Seqbsbvarampl, y, b_Seqbsb);
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseasoc->size[1];
    emxEnsureCapacity_real_T(y, i);
    sizes_idx_1 = indnlseasoc->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      y->data[i] = Xlshiftbsb->data[(int)indnlseasoc->data[i] - 1];
    }
    mtimes(Xtrendbsb, y, b_Xlshiftbsb);
    i = b_Seqbsb->size[0];
    b_Seqbsb->size[0] = Seqbsb->size[0];
    emxEnsureCapacity_real_T(b_Seqbsb, i);
    sizes_idx_1 = Seqbsb->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      b_Seqbsb->data[i] =
          (Seqbsb->data[i] + b_Seqbsb->data[i]) * Xseasobsb->data[i];
    }
    i = b_Xlshiftbsb->size[0];
    b_Xlshiftbsb->size[0] = yinbsb->size[0];
    emxEnsureCapacity_real_T(b_Xlshiftbsb, i);
    sizes_idx_1 = yinbsb->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      b_Xlshiftbsb->data[i] = yinbsb->data[i] - b_Xlshiftbsb->data[i];
    }
    b2378 = b_mldivide(b_Seqbsb, b_Xlshiftbsb);
    /*  Store new value of beta */
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    sizes_idx_1 = indlinsc->contents->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      r1->data[i] = (int)indlinsc->contents->data[i];
    }
    sizes_idx_1 = r1->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      newbeta->data[r1->data[i] - 1] = b2378;
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    sizes_idx_1 = otherind->contents->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      r1->data[i] = (int)otherind->contents->data[i];
    }
    sizes_idx_1 = r1->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      newbeta->data[r1->data[i] - 1] = Xlshiftbsb->data[i];
    }
    /*  betadiff is linked to the tolerance (specified in scalar */
    /*  reftol) */
    sizes_idx_1 = oldbeta->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      oldbeta->data[i] -= newbeta->data[i];
    }
    if (oldbeta->size[0] == 0) {
      b2378 = 0.0;
    } else {
      b2378 = 0.0;
      i = oldbeta->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        b2378 += fabs(oldbeta->data[loop_ub]);
      }
    }
    if (newbeta->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = newbeta->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        betadiff += fabs(newbeta->data[loop_ub]);
      }
    }
    betadiff = b2378 / betadiff;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(oldbeta, i);
    sizes_idx_1 = newbeta->size[0];
    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = r2->size[0];
    r2->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(r2, i);
    for (i = 0; i < sizes_idx_1; i++) {
      oldbeta->data[i] = newbeta->data[i];
      r2->data[i] = rtIsNaN(newbeta->data[i]);
    }
    if (any(r2)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(newbeta, i);
      sizes_idx_1 = beta0->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        newbeta->data[i] = beta0->data[i];
      }
      b_exitflag = -1;
      exitg1 = true;
    }
  }
  emxFree_real_T(&b_Seqbsb);
  emxFree_real_T(&b_Xlshiftbsb);
  emxFree_boolean_T(&r2);
  emxFree_real_T(&y);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&indnlseasoc);
  emxFree_real_T(&XtrendXbsbXseasonXlshift);
  emxFree_real_T(&Xlshiftbsb);
  emxFree_real_T(&Seqbsbvarampl);
  emxFree_real_T(&indnlseaso);
  emxFree_real_T(&yinbsb);
  emxFree_real_T(&Xtrendbsb);
  emxFree_real_T(&Xseasobsb);
  emxFree_real_T(&Seqbsb);
  emxFree_real_T(&oldbeta);
  *exitflag = b_exitflag;
}

void ALS(const c_captured_var *Seq, const c_captured_var *bsb,
         const c_captured_var *Xseaso, const c_captured_var *Xtrend,
         const c_captured_var *yin, const captured_var *trend,
         const captured_var *nexpl, const captured_var *varampl,
         const b_captured_var *isemptyX, const captured_var *lshiftYN,
         const c_captured_var *Xlshift, const c_captured_var *X,
         const captured_var *reftolALS, const captured_var *refstepsALS,
         const c_captured_var *indlinsc, const c_captured_var *otherind,
         const emxArray_real_T *beta0, emxArray_real_T *newbeta)
{
  emxArray_boolean_T *r2;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_real_T *Seqbsb;
  emxArray_real_T *Seqbsbvarampl;
  emxArray_real_T *Xbsb;
  emxArray_real_T *Xlshiftbsb;
  emxArray_real_T *Xseasobsb;
  emxArray_real_T *XtrendXbsbXseasonXlshift;
  emxArray_real_T *Xtrendbsb;
  emxArray_real_T *XtrendbsbXbsb;
  emxArray_real_T *b_Seqbsb;
  emxArray_real_T *b_Xlshiftbsb;
  emxArray_real_T *indnlseaso;
  emxArray_real_T *indnlseasoc;
  emxArray_real_T *oldbeta;
  emxArray_real_T *y;
  emxArray_real_T *yinbsb;
  double b2378;
  double b_tmp;
  double betadiff;
  double iter;
  int b_input_sizes_idx_1;
  int b_sizes_idx_1;
  int i;
  int i1;
  int i2;
  int input_sizes_idx_1;
  int loop_ub;
  int sizes_idx_1;
  bool empty_non_axis_sizes;
  bool exitg1;
  /*  The part below contains subfunctions which are used only inside this file
   */
  /*  ALS computes Alternating Least Squares estimate of beta starting from */
  /*  vector beta0. The rows which are used are those specified in global */
  /*  variable bsb */
  iter = 0.0;
  betadiff = 9999.0;
  i = newbeta->size[0];
  newbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(newbeta, i);
  sizes_idx_1 = beta0->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    newbeta->data[i] = beta0->data[i];
  }
  emxInit_real_T(&oldbeta, 1);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(oldbeta, i);
  sizes_idx_1 = beta0->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    oldbeta->data[i] = beta0->data[i];
  }
  emxInit_real_T(&Seqbsb, 1);
  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
  /*  Define all the relevant matrices before the loop */
  i = Seqbsb->size[0];
  Seqbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(Seqbsb, i);
  sizes_idx_1 = bsb->contents->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    Seqbsb->data[i] = Seq->contents->data[(int)bsb->contents->data[i] - 1];
  }
  emxInit_real_T(&Xseasobsb, 2);
  sizes_idx_1 = Xseaso->contents->size[1];
  i = Xseasobsb->size[0] * Xseasobsb->size[1];
  Xseasobsb->size[0] = bsb->contents->size[0];
  Xseasobsb->size[1] = sizes_idx_1;
  emxEnsureCapacity_real_T(Xseasobsb, i);
  for (i = 0; i < sizes_idx_1; i++) {
    loop_ub = bsb->contents->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Xseasobsb->data[i1 + Xseasobsb->size[0] * i] =
          Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                  Xseaso->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&Xtrendbsb, 2);
  sizes_idx_1 = Xtrend->contents->size[1];
  i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
  Xtrendbsb->size[0] = bsb->contents->size[0];
  Xtrendbsb->size[1] = sizes_idx_1;
  emxEnsureCapacity_real_T(Xtrendbsb, i);
  for (i = 0; i < sizes_idx_1; i++) {
    loop_ub = bsb->contents->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] =
          Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                  Xtrend->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&yinbsb, 1);
  i = yinbsb->size[0];
  yinbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(yinbsb, i);
  sizes_idx_1 = bsb->contents->size[0];
  for (i = 0; i < sizes_idx_1; i++) {
    yinbsb->data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
  }
  b2378 = (trend->contents + 2.0) + nexpl->contents;
  b_tmp = b2378 + varampl->contents;
  emxInit_real_T(&indnlseaso, 2);
  if (rtIsNaN(b2378) || rtIsNaN(b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso->data[0] = rtNaN;
  } else if (b_tmp - 1.0 < b2378) {
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 0;
  } else if ((rtIsInf(b2378) || rtIsInf(b_tmp - 1.0)) &&
             (b2378 == b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso->data[0] = rtNaN;
  } else if (floor(b2378) == b2378) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    sizes_idx_1 = (int)floor((b_tmp - 1.0) - b2378);
    indnlseaso->size[1] = sizes_idx_1 + 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    for (i = 0; i <= sizes_idx_1; i++) {
      indnlseaso->data[i] = b2378 + (double)i;
    }
  } else {
    eml_float_colon(b2378, b_tmp - 1.0, indnlseaso);
  }
  b2378 = varampl->contents + 1.0;
  if (2.0 > b2378) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = (int)b2378;
  }
  emxInit_real_T(&Seqbsbvarampl, 2);
  i2 = Seqbsbvarampl->size[0] * Seqbsbvarampl->size[1];
  Seqbsbvarampl->size[0] = bsb->contents->size[0];
  sizes_idx_1 = i1 - i;
  Seqbsbvarampl->size[1] = sizes_idx_1;
  emxEnsureCapacity_real_T(Seqbsbvarampl, i2);
  for (i1 = 0; i1 < sizes_idx_1; i1++) {
    loop_ub = bsb->contents->size[0];
    for (i2 = 0; i2 < loop_ub; i2++) {
      Seqbsbvarampl->data[i2 + Seqbsbvarampl->size[0] * i1] =
          Seq->contents->data[((int)bsb->contents->data[i2] +
                               Seq->contents->size[0] * (i + i1)) -
                              1];
    }
  }
  emxInit_real_T(&Xlshiftbsb, 1);
  emxInit_real_T(&XtrendXbsbXseasonXlshift, 2);
  emxInit_real_T(&indnlseasoc, 2);
  emxInit_real_T(&y, 2);
  if (isemptyX->contents) {
    if (lshiftYN->contents == 1.0) {
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftbsb, i);
      sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        Xlshiftbsb->data[i] =
            Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
      }
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) &&
                 (Seqbsbvarampl->size[1] != 0)) {
        loop_ub = Seqbsbvarampl->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        loop_ub = Xlshiftbsb->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
        if (Seqbsbvarampl->size[0] > Xtrendbsb->size[0]) {
          loop_ub = Seqbsbvarampl->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))) {
        b_input_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = loop_ub;
      i1 = input_sizes_idx_1 + b_input_sizes_idx_1;
      XtrendXbsbXseasonXlshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(XtrendXbsbXseasonXlshift, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] * i] =
              Xtrendbsb->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                              (i + input_sizes_idx_1)] =
              Seqbsbvarampl->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] * i1] =
              Xlshiftbsb->data[i2];
        }
      }
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        loop_ub = Xlshiftbsb->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb->data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * input_sizes_idx_1] =
              Xlshiftbsb->data[i1];
        }
      }
      b2378 = trend->contents + 1.0;
      if (rtIsNaN(b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(b2378) && (1.0 == b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        sizes_idx_1 = (int)floor(b2378 - 1.0);
        y->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_real_T(y, i);
        for (i = 0; i <= sizes_idx_1; i++) {
          y->data[i] = (double)i + 1.0;
        }
      }
      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(indnlseasoc, i);
      sizes_idx_1 = y->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        indnlseasoc->data[i] = y->data[i];
      }
      indnlseasoc->data[y->size[1]] = b_tmp;
    } else {
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) &&
                 (Seqbsbvarampl->size[1] != 0)) {
        loop_ub = Seqbsbvarampl->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
        if (Seqbsbvarampl->size[0] > Xtrendbsb->size[0]) {
          loop_ub = Seqbsbvarampl->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))) {
        sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        sizes_idx_1 = 0;
      }
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = loop_ub;
      XtrendXbsbXseasonXlshift->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(XtrendXbsbXseasonXlshift, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift
              ->data[i1 + XtrendXbsbXseasonXlshift->size[0] * i] =
              Xtrendbsb->data[i1 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift
              ->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                              (i + input_sizes_idx_1)] =
              Seqbsbvarampl->data[i1 + loop_ub * i];
        }
      }
      b2378 = trend->contents + 1.0;
      if (rtIsNaN(b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (rtIsInf(b2378) && (1.0 == b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc->data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        sizes_idx_1 = (int)floor(b2378 - 1.0);
        indnlseasoc->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        for (i = 0; i <= sizes_idx_1; i++) {
          indnlseasoc->data[i] = (double)i + 1.0;
        }
      }
    }
  } else {
    emxInit_real_T(&Xbsb, 2);
    sizes_idx_1 = X->contents->size[1];
    i = Xbsb->size[0] * Xbsb->size[1];
    Xbsb->size[0] = bsb->contents->size[0];
    Xbsb->size[1] = sizes_idx_1;
    emxEnsureCapacity_real_T(Xbsb, i);
    for (i = 0; i < sizes_idx_1; i++) {
      loop_ub = bsb->contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xbsb->data[i1 + Xbsb->size[0] * i] =
            X->contents->data[((int)bsb->contents->data[i1] +
                               X->contents->size[0] * i) -
                              1];
      }
    }
    if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
      loop_ub = Xtrendbsb->size[0];
    } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
      loop_ub = Xbsb->size[0];
    } else {
      loop_ub = Xtrendbsb->size[0];
      if (Xbsb->size[0] > Xtrendbsb->size[0]) {
        loop_ub = Xbsb->size[0];
      }
    }
    empty_non_axis_sizes = (loop_ub == 0);
    if (empty_non_axis_sizes ||
        ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
      input_sizes_idx_1 = Xtrendbsb->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0))) {
      sizes_idx_1 = Xbsb->size[1];
    } else {
      sizes_idx_1 = 0;
    }
    emxInit_real_T(&XtrendbsbXbsb, 2);
    i = XtrendbsbXbsb->size[0] * XtrendbsbXbsb->size[1];
    XtrendbsbXbsb->size[0] = loop_ub;
    XtrendbsbXbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(XtrendbsbXbsb, i);
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendbsbXbsb->data[i1 + XtrendbsbXbsb->size[0] * i] =
            Xtrendbsb->data[i1 + loop_ub * i];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendbsbXbsb
            ->data[i1 + XtrendbsbXbsb->size[0] * (i + input_sizes_idx_1)] =
            Xbsb->data[i1 + loop_ub * i];
      }
    }
    if (lshiftYN->contents == 1.0) {
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftbsb, i);
      sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        Xlshiftbsb->data[i] =
            Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
      }
      if ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0)) {
        loop_ub = XtrendbsbXbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) &&
                 (Seqbsbvarampl->size[1] != 0)) {
        loop_ub = Seqbsbvarampl->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        loop_ub = Xlshiftbsb->size[0];
      } else {
        loop_ub = XtrendbsbXbsb->size[0];
        if (Seqbsbvarampl->size[0] > XtrendbsbXbsb->size[0]) {
          loop_ub = Seqbsbvarampl->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0))) {
        b_input_sizes_idx_1 = XtrendbsbXbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))) {
        input_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = loop_ub;
      i1 = b_input_sizes_idx_1 + input_sizes_idx_1;
      XtrendXbsbXseasonXlshift->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(XtrendXbsbXseasonXlshift, i);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] * i] =
              XtrendbsbXbsb->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                              (i + b_input_sizes_idx_1)] =
              Seqbsbvarampl->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift
              ->data[i2 + XtrendXbsbXseasonXlshift->size[0] * i1] =
              Xlshiftbsb->data[i2];
        }
      }
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
        loop_ub = Xbsb->size[0];
      } else if (Xlshiftbsb->size[0] != 0) {
        loop_ub = Xlshiftbsb->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
        if (Xbsb->size[0] > Xtrendbsb->size[0]) {
          loop_ub = Xbsb->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        b_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        b_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (Xlshiftbsb->size[0] != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      for (i = 0; i < b_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb->data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      i1 = b_sizes_idx_1 + input_sizes_idx_1;
      Xtrendbsb->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xtrendbsb->data[i2 + Xtrendbsb->size[0] * (i + b_sizes_idx_1)] =
              Xbsb->data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xtrendbsb->data[i2 + Xtrendbsb->size[0] * i1] = Xlshiftbsb->data[i2];
        }
      }
      b2378 = (trend->contents + 1.0) + nexpl->contents;
      if (rtIsNaN(b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(b2378) && (1.0 == b2378)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        sizes_idx_1 = (int)floor(b2378 - 1.0);
        y->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_real_T(y, i);
        for (i = 0; i <= sizes_idx_1; i++) {
          y->data[i] = (double)i + 1.0;
        }
      }
      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(indnlseasoc, i);
      sizes_idx_1 = y->size[1];
      for (i = 0; i < sizes_idx_1; i++) {
        indnlseasoc->data[i] = y->data[i];
      }
      indnlseasoc->data[y->size[1]] = b_tmp;
    } else {
      if ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0)) {
        loop_ub = XtrendbsbXbsb->size[0];
      } else if ((Seqbsbvarampl->size[0] != 0) &&
                 (Seqbsbvarampl->size[1] != 0)) {
        loop_ub = Seqbsbvarampl->size[0];
      } else {
        loop_ub = XtrendbsbXbsb->size[0];
        if (Seqbsbvarampl->size[0] > XtrendbsbXbsb->size[0]) {
          loop_ub = Seqbsbvarampl->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((XtrendbsbXbsb->size[0] != 0) && (XtrendbsbXbsb->size[1] != 0))) {
        b_input_sizes_idx_1 = XtrendbsbXbsb->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Seqbsbvarampl->size[0] != 0) && (Seqbsbvarampl->size[1] != 0))) {
        b_sizes_idx_1 = Seqbsbvarampl->size[1];
      } else {
        b_sizes_idx_1 = 0;
      }
      i = XtrendXbsbXseasonXlshift->size[0] * XtrendXbsbXseasonXlshift->size[1];
      XtrendXbsbXseasonXlshift->size[0] = loop_ub;
      XtrendXbsbXseasonXlshift->size[1] = b_input_sizes_idx_1 + b_sizes_idx_1;
      emxEnsureCapacity_real_T(XtrendXbsbXseasonXlshift, i);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift
              ->data[i1 + XtrendXbsbXseasonXlshift->size[0] * i] =
              XtrendbsbXbsb->data[i1 + loop_ub * i];
        }
      }
      for (i = 0; i < b_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift
              ->data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                              (i + b_input_sizes_idx_1)] =
              Seqbsbvarampl->data[i1 + loop_ub * i];
        }
      }
      if ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0)) {
        loop_ub = Xtrendbsb->size[0];
      } else if ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0)) {
        loop_ub = Xbsb->size[0];
      } else {
        loop_ub = Xtrendbsb->size[0];
        if (Xbsb->size[0] > Xtrendbsb->size[0]) {
          loop_ub = Xbsb->size[0];
        }
      }
      empty_non_axis_sizes = (loop_ub == 0);
      if (empty_non_axis_sizes ||
          ((Xtrendbsb->size[0] != 0) && (Xtrendbsb->size[1] != 0))) {
        input_sizes_idx_1 = Xtrendbsb->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((Xbsb->size[0] != 0) && (Xbsb->size[1] != 0))) {
        sizes_idx_1 = Xbsb->size[1];
      } else {
        sizes_idx_1 = 0;
      }
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb->data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb->data[i1 + Xtrendbsb->size[0] * (i + input_sizes_idx_1)] =
              Xbsb->data[i1 + loop_ub * i];
        }
      }
      b2378 = (trend->contents + 1.0) + nexpl->contents;
      if (rtIsNaN(b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc->data[0] = rtNaN;
      } else if (b2378 < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (rtIsInf(b2378) && (1.0 == b2378)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc->data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        sizes_idx_1 = (int)floor(b2378 - 1.0);
        indnlseasoc->size[1] = sizes_idx_1 + 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        for (i = 0; i <= sizes_idx_1; i++) {
          indnlseasoc->data[i] = (double)i + 1.0;
        }
      }
    }
    emxFree_real_T(&XtrendbsbXbsb);
    emxFree_real_T(&Xbsb);
  }
  emxInit_int32_T(&r, 1);
  emxInit_int32_T(&r1, 2);
  emxInit_boolean_T(&r2, 1);
  emxInit_real_T(&b_Xlshiftbsb, 1);
  emxInit_real_T(&b_Seqbsb, 1);
  exitg1 = false;
  while ((!exitg1) &&
         ((betadiff > reftolALS->contents) && (iter < refstepsALS->contents))) {
    iter++;
    /*  b2378 estimate of linear part of seasonal component */
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_real_T(y, i);
    sizes_idx_1 = indlinsc->contents->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      y->data[i] = newbeta->data[(int)indlinsc->contents->data[i] - 1];
    }
    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    mtimes(Xseasobsb, y, Xlshiftbsb);
    /*  OLS to estimate coefficients of trend + expl variables + non lin coeff
     * of */
    /*  seasonal + coefficient of fixed level shift */
    /*  trlshift is the matrix of explanatory variables */
    i = r->size[0];
    r->size[0] = indnlseaso->size[1];
    emxEnsureCapacity_int32_T(r, i);
    sizes_idx_1 = indnlseaso->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      r->data[i] = (int)indnlseaso->data[i] - 1;
    }
    loop_ub = XtrendXbsbXseasonXlshift->size[0];
    i = b_Xlshiftbsb->size[0];
    b_Xlshiftbsb->size[0] = Xlshiftbsb->size[0];
    emxEnsureCapacity_real_T(b_Xlshiftbsb, i);
    sizes_idx_1 = Xlshiftbsb->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      b_Xlshiftbsb->data[i] = Xlshiftbsb->data[i] * Seqbsbvarampl->data[i];
    }
    input_sizes_idx_1 = XtrendXbsbXseasonXlshift->size[0];
    sizes_idx_1 = r->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendXbsbXseasonXlshift
            ->data[i1 + XtrendXbsbXseasonXlshift->size[0] * r->data[i]] =
            b_Xlshiftbsb->data[i1 + input_sizes_idx_1 * i];
      }
    }
    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    i = b_Xlshiftbsb->size[0];
    b_Xlshiftbsb->size[0] = yinbsb->size[0];
    emxEnsureCapacity_real_T(b_Xlshiftbsb, i);
    sizes_idx_1 = yinbsb->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      b_Xlshiftbsb->data[i] = yinbsb->data[i] - Xlshiftbsb->data[i];
    }
    mldivide(XtrendXbsbXseasonXlshift, b_Xlshiftbsb, Xlshiftbsb);
    /*  Now find new coefficients of linear part of seasonal */
    /*  component in the regression of y-trend-expl-lsihft versus */
    /*  vector which contains non linear part of seasonal component */
    /*  which multiplies each column of matrix Xseaso (linear part of */
    /*  seasonal component) */
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseaso->size[1];
    emxEnsureCapacity_real_T(y, i);
    sizes_idx_1 = indnlseaso->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      y->data[i] = Xlshiftbsb->data[(int)indnlseaso->data[i] - 1];
    }
    mtimes(Seqbsbvarampl, y, b_Seqbsb);
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseasoc->size[1];
    emxEnsureCapacity_real_T(y, i);
    sizes_idx_1 = indnlseasoc->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      y->data[i] = Xlshiftbsb->data[(int)indnlseasoc->data[i] - 1];
    }
    mtimes(Xtrendbsb, y, b_Xlshiftbsb);
    i = b_Seqbsb->size[0];
    b_Seqbsb->size[0] = Seqbsb->size[0];
    emxEnsureCapacity_real_T(b_Seqbsb, i);
    sizes_idx_1 = Seqbsb->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      b_Seqbsb->data[i] =
          (Seqbsb->data[i] + b_Seqbsb->data[i]) * Xseasobsb->data[i];
    }
    i = b_Xlshiftbsb->size[0];
    b_Xlshiftbsb->size[0] = yinbsb->size[0];
    emxEnsureCapacity_real_T(b_Xlshiftbsb, i);
    sizes_idx_1 = yinbsb->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      b_Xlshiftbsb->data[i] = yinbsb->data[i] - b_Xlshiftbsb->data[i];
    }
    b2378 = b_mldivide(b_Seqbsb, b_Xlshiftbsb);
    /*  Store new value of beta */
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    sizes_idx_1 = indlinsc->contents->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      r1->data[i] = (int)indlinsc->contents->data[i];
    }
    sizes_idx_1 = r1->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      newbeta->data[r1->data[i] - 1] = b2378;
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    sizes_idx_1 = otherind->contents->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      r1->data[i] = (int)otherind->contents->data[i];
    }
    sizes_idx_1 = r1->size[1];
    for (i = 0; i < sizes_idx_1; i++) {
      newbeta->data[r1->data[i] - 1] = Xlshiftbsb->data[i];
    }
    /*  betadiff is linked to the tolerance (specified in scalar */
    /*  reftol) */
    sizes_idx_1 = oldbeta->size[0];
    for (i = 0; i < sizes_idx_1; i++) {
      oldbeta->data[i] -= newbeta->data[i];
    }
    if (oldbeta->size[0] == 0) {
      b2378 = 0.0;
    } else {
      b2378 = 0.0;
      i = oldbeta->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        b2378 += fabs(oldbeta->data[loop_ub]);
      }
    }
    if (newbeta->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = newbeta->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        betadiff += fabs(newbeta->data[loop_ub]);
      }
    }
    betadiff = b2378 / betadiff;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(oldbeta, i);
    sizes_idx_1 = newbeta->size[0];
    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = r2->size[0];
    r2->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(r2, i);
    for (i = 0; i < sizes_idx_1; i++) {
      oldbeta->data[i] = newbeta->data[i];
      r2->data[i] = rtIsNaN(newbeta->data[i]);
    }
    if (any(r2)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(newbeta, i);
      sizes_idx_1 = beta0->size[0];
      for (i = 0; i < sizes_idx_1; i++) {
        newbeta->data[i] = beta0->data[i];
      }
      exitg1 = true;
    }
  }
  emxFree_real_T(&b_Seqbsb);
  emxFree_real_T(&b_Xlshiftbsb);
  emxFree_boolean_T(&r2);
  emxFree_real_T(&y);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&indnlseasoc);
  emxFree_real_T(&XtrendXbsbXseasonXlshift);
  emxFree_real_T(&Xlshiftbsb);
  emxFree_real_T(&Seqbsbvarampl);
  emxFree_real_T(&indnlseaso);
  emxFree_real_T(&yinbsb);
  emxFree_real_T(&Xtrendbsb);
  emxFree_real_T(&Xseasobsb);
  emxFree_real_T(&Seqbsb);
  emxFree_real_T(&oldbeta);
}

void IRWLSreg(const captured_var *reftolALS, const captured_var *refstepsALS,
              const c_captured_var *indlinsc, const c_captured_var *Xseaso,
              c_captured_var *bsb, const b_captured_var *isemptyX,
              const captured_var *lshiftYN, const c_captured_var *Xtrend,
              const c_captured_var *Seq, const captured_var *varampl,
              const c_captured_var *Xlshift, const c_captured_var *X,
              const c_captured_var *yin, const captured_var *trend,
              const captured_var *nexpl, const c_captured_var *otherind,
              const captured_var *seasonal, const captured_var *s,
              c_captured_var *yhatseaso, c_captured_var *yhat,
              c_captured_var *beta, const captured_var *constr,
              const c_captured_var *Xsel, const b_captured_var *verLess2016b,
              const c_captured_var *seq, d_captured_var *weights,
              const d_captured_var *zerT1, const emxArray_real_T *y,
              const emxArray_real_T *initialbeta, double refsteps,
              double reftol, double h, c_struct_T *outIRWLS)
{
  emxArray_boolean_T *x;
  emxArray_int32_T *i_r2s;
  emxArray_real_T *Xseld;
  emxArray_real_T *b_Xseld;
  emxArray_real_T *b_y;
  emxArray_real_T *newb;
  emxArray_real_T *r2;
  double betadiff;
  double c_y;
  double exitfl;
  double ininumscale2;
  double iter;
  int i;
  int k;
  int nx;
  int nz;
  int vlen;
  bool empty_non_axis_sizes;
  bool exitg1;
  emxInit_real_T(&newb, 1);
  /*  ------------------------------------------------------------------- */
  /*  subfunction IRWLSreg */
  /*  ------------------------------------------------------------------- */
  /* IRWLSreg (iterative reweighted least squares) does refsteps */
  /* refining steps from initialbeta */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         A vector with n elements that contains the response */
  /*                variable. It can be both a row or column vector. */
  /*   initialbeta: vector containing initial estimate of beta */
  /*    refsteps  : scalar, number of refining (IRLS) steps */
  /*    reftol    : relative convergence tolerance */
  /*                Default value is 1e-7 */
  /*       h      : scalar. number of observations with smallest */
  /*                residuals to consider */
  /*  */
  /*            GLOBAL VARIABLES REQUIRED */
  /*     yhat :     A vector with T elements (fitted values for all the */
  /*                observations) */
  /*   Output: */
  /*  */
  /*   The output consists of a structure 'outIRWLS' containing the */
  /*   following fields: */
  /*       betarw  : p x 1 vector. Estimate of beta after refsteps */
  /*                 refining steps */
  /*   numscale2rw : scalar. Sum of the smallest h squared residuals */
  /*                 from final iteration (after refsteps refining */
  /*                 step).It is the numerator of the estimate of the */
  /*                 squared scale. */
  /*      weights  : n x 1 vector. Weights assigned to each observation */
  /*                In this case weights are 0,1. 1 for the units */
  /*                associated with the smallest h squared residuals */
  /*                from final iteration 0 for the other units. */
  /*    exitflag   : scalar which informs about convergence. exitflag = */
  /*                0 implies normal convergence */
  /*  For performance reasons, the output structure is created only at */
  /*  the end */
  /*  outIRWLS =
   * struct('betarw',[],'yhat',[],'weights',[],'exiflag',[],'numscale2rw',[]);
   */
  /*  Residuals for the initialbeta */
  /*  Squared residuals for all the observations */
  i = newb->size[0];
  newb->size[0] = y->size[0];
  emxEnsureCapacity_real_T(newb, i);
  vlen = y->size[0];
  for (i = 0; i < vlen; i++) {
    newb->data[i] = y->data[i] - yhat->contents->data[i];
  }
  emxInit_real_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = newb->size[0];
  emxEnsureCapacity_real_T(r2, i);
  nx = newb->size[0];
  for (k = 0; k < nx; k++) {
    r2->data[k] = newb->data[k] * newb->data[k];
  }
  /*  Ordering of squared residuals */
  i = newb->size[0];
  newb->size[0] = r2->size[0];
  emxEnsureCapacity_real_T(newb, i);
  vlen = r2->size[0];
  for (i = 0; i < vlen; i++) {
    newb->data[i] = r2->data[i];
  }
  emxInit_int32_T(&i_r2s, 1);
  sort(newb, i_r2s);
  /*  ininumscale2 = initial value for trimmed sum of squares of */
  /*  residuals */
  if (1.0 > h) {
    i = 0;
  } else {
    i = (int)h;
  }
  k = newb->size[0];
  newb->size[0] = i;
  emxEnsureCapacity_real_T(newb, k);
  ininumscale2 = blockedSummation(newb, i);
  /*  Initialize parameters for the refining steps loop */
  exitfl = 0.0;
  i = outIRWLS->betarw->size[0];
  outIRWLS->betarw->size[0] = 1;
  emxEnsureCapacity_real_T(outIRWLS->betarw, i);
  outIRWLS->betarw->data[0] = 0.0;
  outIRWLS->numscale2rw = 0.0;
  /*  MATLAC C coder initialization */
  iter = 0.0;
  betadiff = 9999.0;
  if (lshiftYN->contents == 1.0) {
    if (1 > initialbeta->size[0]) {
      vlen = 0;
    } else {
      vlen = initialbeta->size[0];
    }
    i = beta->contents->size[0];
    beta->contents->size[0] = vlen;
    emxEnsureCapacity_real_T(beta->contents, i);
    for (i = 0; i < vlen; i++) {
      beta->contents->data[i] = initialbeta->data[i];
    }
  } else {
    i = beta->contents->size[0];
    beta->contents->size[0] = initialbeta->size[0];
    emxEnsureCapacity_real_T(beta->contents, i);
    vlen = initialbeta->size[0];
    for (i = 0; i < vlen; i++) {
      beta->contents->data[i] = initialbeta->data[i];
    }
  }
  emxInit_real_T(&Xseld, 2);
  emxInit_boolean_T(&x, 1);
  emxInit_real_T(&b_Xseld, 2);
  emxInit_real_T(&b_y, 1);
  exitg1 = false;
  while ((!exitg1) && ((betadiff > reftol) && (iter < refsteps))) {
    iter++;
    if (constr->contents == 1.0) {
      /*  Constrained sum of the smallest squared residuals */
      /*  Constrained in the sense that initialbeta(end) is always */
      /*  forced to be in the h subset */
      /*  Check that unit initialbeta(end) belongs to subset in each */
      /*  concentration step */
      if (1.0 > h) {
        vlen = 0;
      } else {
        vlen = (int)h;
      }
      i = x->size[0];
      x->size[0] = vlen;
      emxEnsureCapacity_boolean_T(x, i);
      for (i = 0; i < vlen; i++) {
        x->data[i] =
            (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] - 1]);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        nx = 0;
      } else {
        nx = x->data[0];
        for (k = 2; k <= vlen; k++) {
          nx += x->data[k - 1];
        }
      }
      if (nx == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        bsb->contents->data[vlen] = initialbeta->data[initialbeta->size[0] - 1];
      } else {
        /*  i_r2s= units with smallest h squared residuals */
        if (1.0 > h) {
          vlen = 0;
        } else {
          vlen = (int)h;
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        /*  new coefficients based on units with smallest h squared */
        /*  residuals */
      }
    } else if (constr->contents == 2.0) {
      /*  Check that units initialbeta(end) and initialbeta(end)-1 */
      /*  belong to subset in each concentration step */
      if (1.0 > h) {
        vlen = 0;
      } else {
        vlen = (int)h;
      }
      i = x->size[0];
      x->size[0] = vlen;
      emxEnsureCapacity_boolean_T(x, i);
      for (i = 0; i < vlen; i++) {
        x->data[i] =
            (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] - 1]);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        nz = 0;
      } else {
        nz = x->data[0];
        for (k = 2; k <= vlen; k++) {
          nz += x->data[k - 1];
        }
      }
      if (1.0 > h) {
        vlen = 0;
      } else {
        vlen = (int)h;
      }
      i = x->size[0];
      x->size[0] = vlen;
      emxEnsureCapacity_boolean_T(x, i);
      for (i = 0; i < vlen; i++) {
        x->data[i] = (i_r2s->data[i] ==
                      initialbeta->data[initialbeta->size[0] - 1] - 1.0);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        nx = 0;
      } else {
        nx = x->data[0];
        for (k = 2; k <= vlen; k++) {
          nx += x->data[k - 1];
        }
      }
      if ((nz == 0) && (nx == 0)) {
        if (1.0 > h - 2.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 2.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 2;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        bsb->contents->data[vlen] =
            initialbeta->data[initialbeta->size[0] - 1] - 1.0;
        bsb->contents->data[vlen + 1] =
            initialbeta->data[initialbeta->size[0] - 1];
      } else if (nz == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        bsb->contents->data[vlen] = initialbeta->data[initialbeta->size[0] - 1];
      } else if (nx == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        bsb->contents->data[vlen] =
            initialbeta->data[initialbeta->size[0] - 1] - 1.0;
      } else {
        if (1.0 > h) {
          vlen = 0;
        } else {
          vlen = (int)h;
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
      }
    } else {
      if (1.0 > h) {
        vlen = 0;
      } else {
        vlen = (int)h;
      }
      i = bsb->contents->size[0];
      bsb->contents->size[0] = vlen;
      emxEnsureCapacity_real_T(bsb->contents, i);
      for (i = 0; i < vlen; i++) {
        bsb->contents->data[i] = i_r2s->data[i];
      }
    }
    if ((varampl->contents == 0.0) && (lshiftYN->contents == 0.0)) {
      /*  In this case the model is linear */
      /*  Function lik constructs fitted values and residual sum of */
      /*  squares */
      vlen = Xsel->contents->size[1];
      i = Xseld->size[0] * Xseld->size[1];
      Xseld->size[0] = bsb->contents->size[0];
      Xseld->size[1] = vlen;
      emxEnsureCapacity_real_T(Xseld, i);
      for (i = 0; i < vlen; i++) {
        nx = bsb->contents->size[0];
        for (k = 0; k < nx; k++) {
          Xseld->data[k + Xseld->size[0] * i] =
              Xsel->contents->data[((int)bsb->contents->data[k] +
                                    Xsel->contents->size[0] * i) -
                                   1];
        }
      }
      i = b_y->size[0];
      b_y->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(b_y, i);
      vlen = bsb->contents->size[0];
      for (i = 0; i < vlen; i++) {
        b_y->data[i] = y->data[(int)bsb->contents->data[i] - 1];
      }
      mldivide(Xseld, b_y, outIRWLS->betarw);
      /*  update residuals */
      mtimes(Xsel->contents, outIRWLS->betarw, yhat->contents);
      exitfl = 0.0;
    } else if (lshiftYN->contents == 1.0) {
      if (varampl->contents > 0.0) {
        /*  No minimization is used but just ALS */
        if (verLess2016b->contents) {
          ALSbsxfun(reftolALS, refstepsALS, indlinsc, Xseaso, bsb, isemptyX,
                    lshiftYN, Xtrend, Seq, varampl, Xlshift, X, yin, trend,
                    nexpl, otherind, initialbeta, outIRWLS->betarw, &exitfl);
        } else {
          b_ALS(Seq, bsb, Xseaso, Xtrend, yin, trend, nexpl, varampl, isemptyX,
                lshiftYN, Xlshift, X, reftolALS, refstepsALS, indlinsc,
                otherind, initialbeta, outIRWLS->betarw, &exitfl);
        }
        /*  Construct vector of fitted values for all the */
        /*  observations */
        i = bsb->contents->size[0];
        bsb->contents->size[0] = seq->contents->size[0];
        emxEnsureCapacity_real_T(bsb->contents, i);
        vlen = seq->contents->size[0];
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = seq->contents->data[i];
        }
        lik(Xtrend, bsb, trend, seasonal, s, yhatseaso, Xseaso, varampl, Seq,
            nexpl, isemptyX, X, lshiftYN, Xlshift, yhat, outIRWLS->betarw);
      } else {
        /*  If there is just level shift */
        /*  we update estimate of beta using simple LS */
        if ((Xsel->contents->size[0] != 0) && (Xsel->contents->size[1] != 0)) {
          nx = Xsel->contents->size[0];
        } else if ((Xlshift->contents->size[0] != 0) &&
                   (Xlshift->contents->size[1] != 0)) {
          nx = Xlshift->contents->size[0];
        } else {
          nx = Xsel->contents->size[0];
          if (nx <= 0) {
            nx = 0;
          }
          if (Xlshift->contents->size[0] > nx) {
            nx = Xlshift->contents->size[0];
          }
        }
        empty_non_axis_sizes = (nx == 0);
        if (empty_non_axis_sizes || ((Xsel->contents->size[0] != 0) &&
                                     (Xsel->contents->size[1] != 0))) {
          vlen = Xsel->contents->size[1];
        } else {
          vlen = 0;
        }
        if (empty_non_axis_sizes || ((Xlshift->contents->size[0] != 0) &&
                                     (Xlshift->contents->size[1] != 0))) {
          nz = Xlshift->contents->size[1];
        } else {
          nz = 0;
        }
        i = Xseld->size[0] * Xseld->size[1];
        Xseld->size[0] = nx;
        Xseld->size[1] = vlen + nz;
        emxEnsureCapacity_real_T(Xseld, i);
        for (i = 0; i < vlen; i++) {
          for (k = 0; k < nx; k++) {
            Xseld->data[k + Xseld->size[0] * i] =
                Xsel->contents->data[k + nx * i];
          }
        }
        for (i = 0; i < nz; i++) {
          for (k = 0; k < nx; k++) {
            Xseld->data[k + Xseld->size[0] * (i + vlen)] =
                Xlshift->contents->data[k + nx * i];
          }
        }
        /*  newb = new estimate of beta just using units forming */
        /*  subset (newb does not contain the position of level */
        /*  shift in the last position) */
        vlen = Xseld->size[1];
        i = b_Xseld->size[0] * b_Xseld->size[1];
        b_Xseld->size[0] = bsb->contents->size[0];
        b_Xseld->size[1] = Xseld->size[1];
        emxEnsureCapacity_real_T(b_Xseld, i);
        for (i = 0; i < vlen; i++) {
          nx = bsb->contents->size[0];
          for (k = 0; k < nx; k++) {
            b_Xseld->data[k + b_Xseld->size[0] * i] =
                Xseld->data[((int)bsb->contents->data[k] + Xseld->size[0] * i) -
                            1];
          }
        }
        i = b_y->size[0];
        b_y->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(b_y, i);
        vlen = bsb->contents->size[0];
        for (i = 0; i < vlen; i++) {
          b_y->data[i] = y->data[(int)bsb->contents->data[i] - 1];
        }
        mldivide(b_Xseld, b_y, newb);
        /*  yhat = vector of fitted values for all obs */
        mtimes(Xseld, newb, yhat->contents);
        /*  newbeta = new estimate of beta  just using units */
        /*  forming subset (newb also contains as last element */
        /*  the position of level shift) */
        i = outIRWLS->betarw->size[0];
        outIRWLS->betarw->size[0] = newb->size[0] + 1;
        emxEnsureCapacity_real_T(outIRWLS->betarw, i);
        vlen = newb->size[0];
        for (i = 0; i < vlen; i++) {
          outIRWLS->betarw->data[i] = newb->data[i];
        }
        outIRWLS->betarw->data[newb->size[0]] =
            initialbeta->data[initialbeta->size[0] - 1];
        exitfl = 0.0;
      }
    } else {
      /*  model is non linear because there is just the time varying amplitude
       * in seasonal component */
      /*  Use Alternative least squares to update beta (just using */
      /*  the units forming subset) */
      if (verLess2016b->contents) {
        ALSbsxfun(reftolALS, refstepsALS, indlinsc, Xseaso, bsb, isemptyX,
                  lshiftYN, Xtrend, Seq, varampl, Xlshift, X, yin, trend, nexpl,
                  otherind, beta->contents, outIRWLS->betarw, &exitfl);
      } else {
        b_ALS(Seq, bsb, Xseaso, Xtrend, yin, trend, nexpl, varampl, isemptyX,
              lshiftYN, Xlshift, X, reftolALS, refstepsALS, indlinsc, otherind,
              beta->contents, outIRWLS->betarw, &exitfl);
      }
      /*  Call lik  with bsb=seq in order to create the vector */
      /*  of fitted values (yhat) using all the observations */
      i = bsb->contents->size[0];
      bsb->contents->size[0] = seq->contents->size[0];
      emxEnsureCapacity_real_T(bsb->contents, i);
      vlen = seq->contents->size[0];
      for (i = 0; i < vlen; i++) {
        bsb->contents->data[i] = seq->contents->data[i];
      }
      lik(Xtrend, bsb, trend, seasonal, s, yhatseaso, Xseaso, varampl, Seq,
          nexpl, isemptyX, X, lshiftYN, Xlshift, yhat, outIRWLS->betarw);
    }
    /*  disp([beta newbeta]) */
    /*  betadiff is linked to the tolerance (specified in scalar */
    /*  reftol) */
    i = newb->size[0];
    newb->size[0] = beta->contents->size[0];
    emxEnsureCapacity_real_T(newb, i);
    vlen = beta->contents->size[0];
    for (i = 0; i < vlen; i++) {
      newb->data[i] = beta->contents->data[i] - outIRWLS->betarw->data[i];
    }
    if (newb->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = newb->size[0];
      for (k = 0; k < i; k++) {
        betadiff += fabs(newb->data[k]);
      }
    }
    i = newb->size[0];
    newb->size[0] = beta->contents->size[0];
    emxEnsureCapacity_real_T(newb, i);
    vlen = beta->contents->size[0];
    for (i = 0; i < vlen; i++) {
      newb->data[i] = beta->contents->data[i];
    }
    if (newb->size[0] == 0) {
      c_y = 0.0;
    } else {
      c_y = 0.0;
      i = newb->size[0];
      for (k = 0; k < i; k++) {
        c_y += fabs(newb->data[k]);
      }
    }
    betadiff /= c_y;
    /*  exit from the loop if new beta contains nan In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = x->size[0];
    x->size[0] = outIRWLS->betarw->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    vlen = outIRWLS->betarw->size[0];
    for (i = 0; i < vlen; i++) {
      x->data[i] = rtIsNaN(outIRWLS->betarw->data[i]);
    }
    if (any(x) || (exitfl != 0.0)) {
      i = outIRWLS->betarw->size[0];
      outIRWLS->betarw->size[0] = initialbeta->size[0];
      emxEnsureCapacity_real_T(outIRWLS->betarw, i);
      vlen = initialbeta->size[0];
      for (i = 0; i < vlen; i++) {
        outIRWLS->betarw->data[i] = initialbeta->data[i];
      }
      outIRWLS->numscale2rw = ininumscale2;
      exitg1 = true;
    } else {
      /*  update residuals */
      i = newb->size[0];
      newb->size[0] = y->size[0];
      emxEnsureCapacity_real_T(newb, i);
      vlen = y->size[0];
      for (i = 0; i < vlen; i++) {
        newb->data[i] = y->data[i] - yhat->contents->data[i];
      }
      i = r2->size[0];
      r2->size[0] = newb->size[0];
      emxEnsureCapacity_real_T(r2, i);
      nx = newb->size[0];
      for (k = 0; k < nx; k++) {
        r2->data[k] = newb->data[k] * newb->data[k];
      }
      /*  Ordering of all new squared residuals */
      i = newb->size[0];
      newb->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(newb, i);
      vlen = r2->size[0];
      for (i = 0; i < vlen; i++) {
        newb->data[i] = r2->data[i];
      }
      sort(newb, i_r2s);
      /*  update beta */
      i = beta->contents->size[0];
      beta->contents->size[0] = outIRWLS->betarw->size[0];
      emxEnsureCapacity_real_T(beta->contents, i);
      vlen = outIRWLS->betarw->size[0];
      for (i = 0; i < vlen; i++) {
        beta->contents->data[i] = outIRWLS->betarw->data[i];
      }
    }
  }
  emxFree_real_T(&b_y);
  emxFree_real_T(&b_Xseld);
  emxFree_real_T(&Xseld);
  /*  newbeta = the final estimate of beta to be stored in outIRWLS.betarw */
  /* outIRWLS.betarw = newbeta; */
  /*  yhat = the final fitted values for all the observations using */
  /*  final estimate of beta, to be stored in outIRWLS.yhat */
  /* outIRWLS.yhat=yhat; */
  if (exitfl == 0.0) {
    if (constr->contents == 1.0) {
      if (1.0 > h) {
        vlen = 0;
      } else {
        vlen = (int)h;
      }
      i = x->size[0];
      x->size[0] = vlen;
      emxEnsureCapacity_boolean_T(x, i);
      for (i = 0; i < vlen; i++) {
        x->data[i] =
            (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] - 1]);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        nx = 0;
      } else {
        nx = x->data[0];
        for (k = 2; k <= vlen; k++) {
          nx += x->data[k - 1];
        }
      }
      if (nx == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        bsb->contents->data[vlen] = initialbeta->data[initialbeta->size[0] - 1];
      } else {
        /*  i_r2s= units with smallest h squared residuals */
        if (1.0 > h) {
          vlen = 0;
        } else {
          vlen = (int)h;
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        /*  new coefficients based on units with smallest h squared */
        /*  residuals */
      }
    } else if (constr->contents == 2.0) {
      /*  Force both initialbeta(end) and initialbeta(end)-1 to */
      /*  belong to the subset */
      if (1.0 > h) {
        vlen = 0;
      } else {
        vlen = (int)h;
      }
      i = x->size[0];
      x->size[0] = vlen;
      emxEnsureCapacity_boolean_T(x, i);
      for (i = 0; i < vlen; i++) {
        x->data[i] =
            (i_r2s->data[i] == initialbeta->data[initialbeta->size[0] - 1]);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        nz = 0;
      } else {
        nz = x->data[0];
        for (k = 2; k <= vlen; k++) {
          nz += x->data[k - 1];
        }
      }
      if (1.0 > h) {
        vlen = 0;
      } else {
        vlen = (int)h;
      }
      i = x->size[0];
      x->size[0] = vlen;
      emxEnsureCapacity_boolean_T(x, i);
      for (i = 0; i < vlen; i++) {
        x->data[i] = (i_r2s->data[i] ==
                      initialbeta->data[initialbeta->size[0] - 1] - 1.0);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        nx = 0;
      } else {
        nx = x->data[0];
        for (k = 2; k <= vlen; k++) {
          nx += x->data[k - 1];
        }
      }
      if ((nz == 0) && (nx == 0)) {
        if (1.0 > h - 2.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 2.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 2;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        bsb->contents->data[vlen] =
            initialbeta->data[initialbeta->size[0] - 1] - 1.0;
        bsb->contents->data[vlen + 1] =
            initialbeta->data[initialbeta->size[0] - 1];
      } else if (nz == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        bsb->contents->data[vlen] = initialbeta->data[initialbeta->size[0] - 1];
      } else if (nx == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
        bsb->contents->data[vlen] =
            initialbeta->data[initialbeta->size[0] - 1] - 1.0;
      } else {
        if (1.0 > h) {
          vlen = 0;
        } else {
          vlen = (int)h;
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s->data[i];
        }
      }
    } else {
      if (1.0 > h) {
        vlen = 0;
      } else {
        vlen = (int)h;
      }
      i = bsb->contents->size[0];
      bsb->contents->size[0] = vlen;
      emxEnsureCapacity_real_T(bsb->contents, i);
      for (i = 0; i < vlen; i++) {
        bsb->contents->data[i] = i_r2s->data[i];
      }
    }
    i = newb->size[0];
    newb->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(newb, i);
    vlen = bsb->contents->size[0];
    for (i = 0; i < vlen; i++) {
      newb->data[i] = r2->data[(int)bsb->contents->data[i] - 1];
    }
    outIRWLS->numscale2rw = blockedSummation(newb, bsb->contents->size[0]);
    /*  numscale2 = the final estimate of trimmed sum of squares of */
    /*  residuals, to be stored in outIRWLS.numscale2rw */
    /* outIRWLS.numscale2rw = numscale2; */
  } else {
    /* outIRWLS.numscale2rw = numscale2; */
  }
  emxFree_boolean_T(&x);
  emxFree_real_T(&newb);
  emxFree_real_T(&r2);
  /*  weights = the final estimate of the weights for each observation, */
  /*  to be stored in outIRWLS.weights. In this case weights are 0,1. 1 */
  /*  for the units associated with the units formig subset from  final */
  /*  iteration 0 for the other units. */
  i = weights->contents->size[0];
  weights->contents->size[0] = zerT1->contents->size[0];
  emxEnsureCapacity_boolean_T(weights->contents, i);
  vlen = zerT1->contents->size[0];
  for (i = 0; i < vlen; i++) {
    weights->contents->data[i] = zerT1->contents->data[i];
  }
  i = i_r2s->size[0];
  i_r2s->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_int32_T(i_r2s, i);
  vlen = bsb->contents->size[0];
  for (i = 0; i < vlen; i++) {
    i_r2s->data[i] = (int)bsb->contents->data[i];
  }
  vlen = i_r2s->size[0];
  for (i = 0; i < vlen; i++) {
    weights->contents->data[i_r2s->data[i] - 1] = true;
  }
  emxFree_int32_T(&i_r2s);
  /* outIRWLS.weights=weights; */
  /*  exitfl = the exit flag to be stored in outIRWLS.exiflag */
  /* outIRWLS.exiflag=exitfl; */
  /*  Store all output variables */
  i = outIRWLS->yhat->size[0];
  outIRWLS->yhat->size[0] = yhat->contents->size[0];
  emxEnsureCapacity_real_T(outIRWLS->yhat, i);
  vlen = yhat->contents->size[0];
  for (i = 0; i < vlen; i++) {
    outIRWLS->yhat->data[i] = yhat->contents->data[i];
  }
  i = outIRWLS->weights->size[0];
  outIRWLS->weights->size[0] = weights->contents->size[0];
  emxEnsureCapacity_boolean_T(outIRWLS->weights, i);
  vlen = weights->contents->size[0];
  for (i = 0; i < vlen; i++) {
    outIRWLS->weights->data[i] = weights->contents->data[i];
  }
  outIRWLS->exiflag = exitfl;
}

double b_corfactorRAW(double n, double alpha)
{
  double fp_500_n;
  double fp_875_n;
  double rawcorfac;
  /*  corfactorRAW function */
  fp_500_n = 1.0 - 1.2995580068132053 / rt_powd_snf(n, 0.604756680630497);
  fp_875_n = 1.0 - 0.70357229237653807 / rt_powd_snf(n, 1.01646567502486);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
  }
  rawcorfac = 1.0 / fp_500_n;
  if ((rawcorfac <= 0.0) || (rawcorfac > 50.0)) {
    rawcorfac = 1.0;
    /*  if msg==true */
    /*  end */
  }
  return rawcorfac;
}

void lik(const c_captured_var *Xtrend, const c_captured_var *bsb,
         const captured_var *trend, const captured_var *seasonal,
         const captured_var *s, c_captured_var *yhatseaso,
         const c_captured_var *Xseaso, const captured_var *varampl,
         const c_captured_var *Seq, const captured_var *nexpl,
         const b_captured_var *isemptyX, const c_captured_var *X,
         const captured_var *lshiftYN, const c_captured_var *Xlshift,
         c_captured_var *yhat, const emxArray_real_T *beta0)
{
  emxArray_real_T *B;
  emxArray_real_T *C;
  emxArray_real_T *a;
  emxArray_real_T *b_a;
  emxArray_real_T *yhatX;
  emxArray_real_T *yhatlshift;
  emxArray_uint32_T *r;
  double d;
  double npar;
  int aoffset;
  int b_i;
  int i;
  int i1;
  int inner;
  int k;
  int loop_ub;
  emxInit_real_T(&a, 2);
  /*  lik computes the objective function (residual sum of squares/2 = negative
   */
  /*  log likelihood) which must be minimized for the units specified inside */
  /*  global variable bsb. Note that given that yhat is global it is possible */
  /*  to call this function to compute fitted values for the units specified in
   * bsb */
  aoffset = Xtrend->contents->size[1];
  i = a->size[0] * a->size[1];
  a->size[0] = bsb->contents->size[0];
  a->size[1] = aoffset;
  emxEnsureCapacity_real_T(a, i);
  for (i = 0; i < aoffset; i++) {
    loop_ub = bsb->contents->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      a->data[b_i + a->size[0] * i] =
          Xtrend->contents->data[((int)bsb->contents->data[b_i] +
                                  Xtrend->contents->size[0] * i) -
                                 1];
    }
  }
  npar = trend->contents + 1.0;
  emxInit_real_T(&b_a, 2);
  emxInit_real_T(&C, 1);
  if (seasonal->contents > 0.0) {
    if (seasonal->contents < s->contents / 2.0) {
      emxInit_uint32_T(&r, 2);
      d = seasonal->contents * 2.0;
      i = r->size[0] * r->size[1];
      r->size[0] = 1;
      aoffset = (int)floor(d - 1.0);
      r->size[1] = aoffset + 1;
      emxEnsureCapacity_uint32_T(r, i);
      for (i = 0; i <= aoffset; i++) {
        r->data[i] = (unsigned int)(npar + ((double)i + 1.0));
      }
      aoffset = Xseaso->contents->size[1];
      i = b_a->size[0] * b_a->size[1];
      b_a->size[0] = bsb->contents->size[0];
      b_a->size[1] = aoffset;
      emxEnsureCapacity_real_T(b_a, i);
      for (i = 0; i < aoffset; i++) {
        loop_ub = bsb->contents->size[0];
        for (b_i = 0; b_i < loop_ub; b_i++) {
          b_a->data[b_i + b_a->size[0] * i] =
              Xseaso->contents->data[((int)bsb->contents->data[b_i] +
                                      Xseaso->contents->size[0] * i) -
                                     1];
        }
      }
      emxInit_real_T(&B, 2);
      i = B->size[0] * B->size[1];
      B->size[0] = 1;
      B->size[1] = r->size[1];
      emxEnsureCapacity_real_T(B, i);
      aoffset = r->size[1];
      for (i = 0; i < aoffset; i++) {
        B->data[i] = beta0->data[(int)r->data[i] - 1];
      }
      emxFree_uint32_T(&r);
      loop_ub = b_a->size[0] - 1;
      inner = b_a->size[1];
      i = C->size[0];
      C->size[0] = b_a->size[0];
      emxEnsureCapacity_real_T(C, i);
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        C->data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * b_a->size[0];
        for (b_i = 0; b_i <= loop_ub; b_i++) {
          C->data[b_i] += b_a->data[aoffset + b_i] * B->data[k];
        }
      }
      emxFree_real_T(&B);
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = C->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = C->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] = C->data[i];
      }
      npar += d;
    } else {
      if (npar + 1.0 > (npar + seasonal->contents * 2.0) - 1.0) {
        i = 1;
      } else {
        i = (int)(npar + 1.0);
      }
      aoffset = Xseaso->contents->size[1];
      b_i = b_a->size[0] * b_a->size[1];
      b_a->size[0] = bsb->contents->size[0];
      b_a->size[1] = aoffset;
      emxEnsureCapacity_real_T(b_a, b_i);
      for (b_i = 0; b_i < aoffset; b_i++) {
        loop_ub = bsb->contents->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_a->data[i1 + b_a->size[0] * b_i] =
              Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                      Xseaso->contents->size[0] * b_i) -
                                     1];
        }
      }
      loop_ub = b_a->size[0] - 1;
      inner = b_a->size[1];
      b_i = C->size[0];
      C->size[0] = b_a->size[0];
      emxEnsureCapacity_real_T(C, b_i);
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        C->data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * b_a->size[0];
        for (b_i = 0; b_i <= loop_ub; b_i++) {
          C->data[b_i] += b_a->data[aoffset + b_i] * beta0->data[(i + k) - 1];
        }
      }
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = C->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = C->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] = C->data[i];
      }
      npar = (npar + seasonal->contents * 2.0) - 1.0;
    }
    if (varampl->contents > 0.0) {
      d = varampl->contents + 1.0;
      if (2.0 > d) {
        i = 0;
        b_i = 0;
      } else {
        i = 1;
        b_i = (int)d;
      }
      d = (npar + 1.0) + nexpl->contents;
      if (d > (npar + varampl->contents) + nexpl->contents) {
        i1 = 1;
      } else {
        i1 = (int)d;
      }
      inner = b_a->size[0] * b_a->size[1];
      b_a->size[0] = bsb->contents->size[0];
      aoffset = b_i - i;
      b_a->size[1] = aoffset;
      emxEnsureCapacity_real_T(b_a, inner);
      for (b_i = 0; b_i < aoffset; b_i++) {
        loop_ub = bsb->contents->size[0];
        for (inner = 0; inner < loop_ub; inner++) {
          b_a->data[inner + b_a->size[0] * b_i] =
              Seq->contents->data[((int)bsb->contents->data[inner] +
                                   Seq->contents->size[0] * (i + b_i)) -
                                  1];
        }
      }
      loop_ub = b_a->size[0] - 1;
      inner = b_a->size[1];
      i = C->size[0];
      C->size[0] = b_a->size[0];
      emxEnsureCapacity_real_T(C, i);
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        C->data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * b_a->size[0];
        for (b_i = 0; b_i <= loop_ub; b_i++) {
          C->data[b_i] += b_a->data[aoffset + b_i] * beta0->data[(i1 + k) - 1];
        }
      }
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = C->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = C->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] *= C->data[i] + 1.0;
      }
      npar += varampl->contents;
    }
  }
  emxInit_real_T(&yhatX, 1);
  if (isemptyX->contents) {
    i = yhatX->size[0];
    yhatX->size[0] = 1;
    emxEnsureCapacity_real_T(yhatX, i);
    yhatX->data[0] = 0.0;
  } else {
    /*  Note the order of coefficients is trend, linear part of */
    /*  seasonal component, expl variables, non linear part of */
    /*  seasonal component, level shift */
    d = (npar + 1.0) - varampl->contents;
    if (d > (npar + nexpl->contents) - varampl->contents) {
      i = 1;
    } else {
      i = (int)d;
    }
    aoffset = X->contents->size[1];
    b_i = b_a->size[0] * b_a->size[1];
    b_a->size[0] = bsb->contents->size[0];
    b_a->size[1] = aoffset;
    emxEnsureCapacity_real_T(b_a, b_i);
    for (b_i = 0; b_i < aoffset; b_i++) {
      loop_ub = bsb->contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_a->data[i1 + b_a->size[0] * b_i] =
            X->contents->data[((int)bsb->contents->data[i1] +
                               X->contents->size[0] * b_i) -
                              1];
      }
    }
    loop_ub = b_a->size[0] - 1;
    inner = b_a->size[1];
    b_i = yhatX->size[0];
    yhatX->size[0] = b_a->size[0];
    emxEnsureCapacity_real_T(yhatX, b_i);
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      yhatX->data[b_i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * b_a->size[0];
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        yhatX->data[b_i] += b_a->data[aoffset + b_i] * beta0->data[(i + k) - 1];
      }
    }
    npar += nexpl->contents;
  }
  emxFree_real_T(&b_a);
  emxInit_real_T(&yhatlshift, 1);
  if (lshiftYN->contents == 1.0) {
    /*   \beta_(npar+1)* I(t \geq \beta_(npar+2)) where beta_(npar+1) */
    /*   is a real number and \beta_(npar+2) is a integer which */
    /*   denotes the period in which level shift shows up */
    i = yhatlshift->size[0];
    yhatlshift->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(yhatlshift, i);
    aoffset = bsb->contents->size[0];
    for (i = 0; i < aoffset; i++) {
      yhatlshift->data[i] =
          Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
    }
    aoffset = yhatlshift->size[0];
    for (i = 0; i < aoffset; i++) {
      yhatlshift->data[i] *= beta0->data[(int)(npar + 1.0) - 1];
    }
  } else {
    i = yhatlshift->size[0];
    yhatlshift->size[0] = 1;
    emxEnsureCapacity_real_T(yhatlshift, i);
    yhatlshift->data[0] = 0.0;
  }
  /*  Fitted values from trend (yhattrend), (time varying) seasonal */
  /*  (yhatseaso), explanatory variables (yhatX) and level shift */
  /*  component (yhatlshift) */
  loop_ub = a->size[0] - 1;
  inner = a->size[1];
  i = C->size[0];
  C->size[0] = a->size[0];
  emxEnsureCapacity_real_T(C, i);
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    C->data[b_i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * a->size[0];
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      C->data[b_i] += a->data[aoffset + b_i] * beta0->data[k];
    }
  }
  emxFree_real_T(&a);
  i = yhat->contents->size[0];
  yhat->contents->size[0] = C->size[0];
  emxEnsureCapacity_real_T(yhat->contents, i);
  aoffset = C->size[0];
  for (i = 0; i < aoffset; i++) {
    yhat->contents->data[i] =
        ((C->data[i] + yhatseaso->contents->data[i]) + yhatX->data[i]) +
        yhatlshift->data[i];
  }
  emxFree_real_T(&C);
  emxFree_real_T(&yhatlshift);
  emxFree_real_T(&yhatX);
  /*          % Additional regression due to the presence of the autoregressive
   */
  /*          % component */
  /*          if ARp>0 */
  /*              Yhatlagged=zeros(length(bsb),ARp); */
  /*              for jj=1:ARp */
  /*                  Yhatlagged(:,jj)=[NaN(jj,1); yhat(1:end-jj)]; */
  /*              end */
  /*              Yhatlagged=Yhatlagged(ARp+1:end,:); */
  /*              yinbsb=yin(bsb); */
  /*              blagged=Yhatlagged\yinbsb(ARp+1:end); */
  /*              yhat(ARp+1:end)=Yhatlagged*blagged; */
  /*          end */
  /*  obj = sum of squares of residuals/2 = negative log likelihood */
  /*  format long */
  /*  disp(obj) */
}

void likyhat(const captured_var *trend, const captured_var *seasonal,
             const captured_var *s, c_captured_var *yhatseaso,
             const c_captured_var *Xseasof, const captured_var *varampl,
             const c_captured_var *Seqf, const captured_var *nexpl,
             const b_captured_var *isemptyX, const c_captured_var *Xf,
             const captured_var *lshiftYN, const c_captured_var *Xlshiftf,
             const emxArray_real_T *beta0, const emxArray_real_T *Xtrendf,
             emxArray_real_T *objyhat)
{
  emxArray_real_T *A;
  emxArray_real_T *B;
  emxArray_real_T *yhatX;
  emxArray_real_T *yhatlshift;
  emxArray_uint32_T *r;
  double d;
  double npar;
  int aoffset;
  int b_i;
  int i;
  int i1;
  int inner;
  int k;
  int mc;
  /*  likyhat computes fitted values using vector of regression coefficients */
  /*  beta0. Note that matrices Xtrendf, Xseasof, Seqf, Xf contain n-k rows. */
  /*  This function is called in the very last step of the procedure when */
  /*  routine nlinfit is invoked. Please, note the difference beween likyhat */
  /*  and lik */
  npar = trend->contents + 1.0;
  emxInit_real_T(&yhatX, 1);
  emxInit_real_T(&A, 2);
  if (seasonal->contents > 0.0) {
    if (seasonal->contents < s->contents / 2.0) {
      emxInit_uint32_T(&r, 2);
      d = seasonal->contents * 2.0;
      i = r->size[0] * r->size[1];
      r->size[0] = 1;
      aoffset = (int)floor(d - 1.0);
      r->size[1] = aoffset + 1;
      emxEnsureCapacity_uint32_T(r, i);
      for (i = 0; i <= aoffset; i++) {
        r->data[i] = (unsigned int)(npar + ((double)i + 1.0));
      }
      i = A->size[0] * A->size[1];
      A->size[0] = Xseasof->contents->size[0];
      A->size[1] = Xseasof->contents->size[1];
      emxEnsureCapacity_real_T(A, i);
      aoffset = Xseasof->contents->size[0] * Xseasof->contents->size[1];
      for (i = 0; i < aoffset; i++) {
        A->data[i] = Xseasof->contents->data[i];
      }
      emxInit_real_T(&B, 2);
      i = B->size[0] * B->size[1];
      B->size[0] = 1;
      B->size[1] = r->size[1];
      emxEnsureCapacity_real_T(B, i);
      aoffset = r->size[1];
      for (i = 0; i < aoffset; i++) {
        B->data[i] = beta0->data[(int)r->data[i] - 1];
      }
      emxFree_uint32_T(&r);
      mc = A->size[0] - 1;
      inner = A->size[1];
      i = yhatX->size[0];
      yhatX->size[0] = A->size[0];
      emxEnsureCapacity_real_T(yhatX, i);
      for (b_i = 0; b_i <= mc; b_i++) {
        yhatX->data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * A->size[0];
        for (b_i = 0; b_i <= mc; b_i++) {
          yhatX->data[b_i] += A->data[aoffset + b_i] * B->data[k];
        }
      }
      emxFree_real_T(&B);
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = yhatX->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = yhatX->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] = yhatX->data[i];
      }
      npar += d;
    } else {
      if (npar + 1.0 > (npar + seasonal->contents * 2.0) - 1.0) {
        i = 1;
      } else {
        i = (int)(npar + 1.0);
      }
      b_i = A->size[0] * A->size[1];
      A->size[0] = Xseasof->contents->size[0];
      A->size[1] = Xseasof->contents->size[1];
      emxEnsureCapacity_real_T(A, b_i);
      aoffset = Xseasof->contents->size[0] * Xseasof->contents->size[1];
      for (b_i = 0; b_i < aoffset; b_i++) {
        A->data[b_i] = Xseasof->contents->data[b_i];
      }
      mc = A->size[0] - 1;
      inner = A->size[1];
      b_i = yhatX->size[0];
      yhatX->size[0] = A->size[0];
      emxEnsureCapacity_real_T(yhatX, b_i);
      for (b_i = 0; b_i <= mc; b_i++) {
        yhatX->data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * A->size[0];
        for (b_i = 0; b_i <= mc; b_i++) {
          yhatX->data[b_i] += A->data[aoffset + b_i] * beta0->data[(i + k) - 1];
        }
      }
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = yhatX->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = yhatX->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] = yhatX->data[i];
      }
      npar = (npar + seasonal->contents * 2.0) - 1.0;
    }
    if (varampl->contents > 0.0) {
      d = varampl->contents + 1.0;
      if (2.0 > d) {
        i = 0;
        b_i = 0;
      } else {
        i = 1;
        b_i = (int)d;
      }
      d = (npar + 1.0) + nexpl->contents;
      if (d > (npar + varampl->contents) + nexpl->contents) {
        i1 = 1;
      } else {
        i1 = (int)d;
      }
      aoffset = Seqf->contents->size[0];
      inner = A->size[0] * A->size[1];
      A->size[0] = aoffset;
      mc = b_i - i;
      A->size[1] = mc;
      emxEnsureCapacity_real_T(A, inner);
      for (b_i = 0; b_i < mc; b_i++) {
        for (inner = 0; inner < aoffset; inner++) {
          A->data[inner + A->size[0] * b_i] =
              Seqf->contents->data[inner + Seqf->contents->size[0] * (i + b_i)];
        }
      }
      mc = A->size[0] - 1;
      inner = A->size[1];
      i = yhatX->size[0];
      yhatX->size[0] = A->size[0];
      emxEnsureCapacity_real_T(yhatX, i);
      for (b_i = 0; b_i <= mc; b_i++) {
        yhatX->data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * A->size[0];
        for (b_i = 0; b_i <= mc; b_i++) {
          yhatX->data[b_i] +=
              A->data[aoffset + b_i] * beta0->data[(i1 + k) - 1];
        }
      }
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = yhatX->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = yhatX->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] *= yhatX->data[i] + 1.0;
      }
      npar += varampl->contents;
    }
  }
  if (isemptyX->contents) {
    i = yhatX->size[0];
    yhatX->size[0] = 1;
    emxEnsureCapacity_real_T(yhatX, i);
    yhatX->data[0] = 0.0;
  } else {
    /*  Note the order of coefficients is trend, linear part of */
    /*  seasonal component, expl variables, non linear part of */
    /*  seasonal component, level shift */
    d = (npar + 1.0) - varampl->contents;
    if (d > (npar + nexpl->contents) - varampl->contents) {
      i = 1;
    } else {
      i = (int)d;
    }
    aoffset = Xf->contents->size[0];
    mc = Xf->contents->size[1];
    b_i = A->size[0] * A->size[1];
    A->size[0] = aoffset;
    A->size[1] = mc;
    emxEnsureCapacity_real_T(A, b_i);
    for (b_i = 0; b_i < mc; b_i++) {
      for (i1 = 0; i1 < aoffset; i1++) {
        A->data[i1 + A->size[0] * b_i] =
            Xf->contents->data[i1 + Xf->contents->size[0] * b_i];
      }
    }
    mc = A->size[0] - 1;
    inner = A->size[1];
    b_i = yhatX->size[0];
    yhatX->size[0] = A->size[0];
    emxEnsureCapacity_real_T(yhatX, b_i);
    for (b_i = 0; b_i <= mc; b_i++) {
      yhatX->data[b_i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * A->size[0];
      for (b_i = 0; b_i <= mc; b_i++) {
        yhatX->data[b_i] += A->data[aoffset + b_i] * beta0->data[(i + k) - 1];
      }
    }
    npar += nexpl->contents;
  }
  emxFree_real_T(&A);
  emxInit_real_T(&yhatlshift, 1);
  if (lshiftYN->contents == 1.0) {
    /*   \beta_(npar+1)* I(t \geq \beta_(npar+2)) where beta_(npar+1) */
    /*   is a real number and \beta_(npar+2) is a integer which */
    /*   denotes the period in which level shift shows up */
    i = yhatlshift->size[0];
    yhatlshift->size[0] = Xlshiftf->contents->size[0];
    emxEnsureCapacity_real_T(yhatlshift, i);
    aoffset = Xlshiftf->contents->size[0];
    for (i = 0; i < aoffset; i++) {
      yhatlshift->data[i] =
          beta0->data[(int)(npar + 1.0) - 1] * Xlshiftf->contents->data[i];
    }
  } else {
    i = yhatlshift->size[0];
    yhatlshift->size[0] = 1;
    emxEnsureCapacity_real_T(yhatlshift, i);
    yhatlshift->data[0] = 0.0;
  }
  /*  objhat = fitted values from trend (yhattrend), (time varying) seasonal */
  /*  (yhatseaso), explanatory variables (yhatX) and level shift */
  /*  component (yhatlshift) */
  mc = Xtrendf->size[0] - 1;
  inner = Xtrendf->size[1];
  i = objyhat->size[0];
  objyhat->size[0] = Xtrendf->size[0];
  emxEnsureCapacity_real_T(objyhat, i);
  for (b_i = 0; b_i <= mc; b_i++) {
    objyhat->data[b_i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * Xtrendf->size[0];
    for (b_i = 0; b_i <= mc; b_i++) {
      objyhat->data[b_i] += Xtrendf->data[aoffset + b_i] * beta0->data[k];
    }
  }
  aoffset = objyhat->size[0];
  for (i = 0; i < aoffset; i++) {
    objyhat->data[i] =
        ((objyhat->data[i] + yhatseaso->contents->data[i]) + yhatX->data[i]) +
        yhatlshift->data[i];
  }
  emxFree_real_T(&yhatlshift);
  emxFree_real_T(&yhatX);
}

/* End of code generation (LTSts.c) */
