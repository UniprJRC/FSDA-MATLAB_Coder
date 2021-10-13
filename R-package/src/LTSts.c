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
#include <R.h>

#include "LTSts.h"
#include "FSRinvmdr.h"
#include "GYfilt.h"
#include "HUrho.h"
#include "RobRegrSize.h"
#include "Score.h"
#include "any.h"
#include "array2table.h"
#include "bc.h"
#include "blockedSummation.h"
#include "bsxfun.h"
#include "colon.h"
#include "diag.h"
#include "div.h"
#include "eml_erfcore.h"
#include "eml_setop.h"
#include "erfcinv.h"
#include "fcdf.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "inv.h"
#include "lsqcurvefit.h"
#include "minOrMax.h"
#include "mldivide.h"
#include "mtimes.h"
#include "prctile.h"
#include "randsample.h"
#include "rank.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sprintf.h"
#include "str2double.h"
#include "subsets.h"
#include "tcdf.h"
#include "unibiv.h"
#include "unsafeSxfun.h"
#include "zscore.h"
#include "zscoreFS.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Declarations */
static void ALS(const c_captured_var *Seq, const c_captured_var *bsb,
                const c_captured_var *Xseaso, const c_captured_var *Xtrend,
                const c_captured_var *yin, const captured_var *trend,
                const captured_var *nexpl, const captured_var *varampl,
                const b_captured_var *isemptyX, const captured_var *lshiftYN,
                const c_captured_var *Xlshift, const c_captured_var *X,
                const captured_var *reftolALS, const captured_var *refstepsALS,
                const c_captured_var *indlinsc, const c_captured_var *otherind,
                const emxArray_real_T *beta0, emxArray_real_T *newbeta);

static void
ALSbsxfun(const captured_var *reftolALS, const captured_var *refstepsALS,
          const c_captured_var *indlinsc, const c_captured_var *Xseaso,
          const c_captured_var *bsb, const b_captured_var *isemptyX,
          const captured_var *lshiftYN, const c_captured_var *Xtrend,
          const c_captured_var *Seq, const captured_var *varampl,
          const c_captured_var *Xlshift, const c_captured_var *X,
          const c_captured_var *yin, const captured_var *trend,
          const captured_var *nexpl, const c_captured_var *otherind,
          const emxArray_real_T *beta0, emxArray_real_T *newbeta);

static void
IRWLSreg(const captured_var *reftolALS, const captured_var *refstepsALS,
         const c_captured_var *indlinsc, const c_captured_var *Xseaso,
         c_captured_var *bsb, const b_captured_var *isemptyX,
         const captured_var *lshiftYN, const c_captured_var *Xtrend,
         const c_captured_var *Seq, const captured_var *varampl,
         const c_captured_var *Xlshift, const c_captured_var *X,
         const c_captured_var *yin, const captured_var *trend,
         const captured_var *nexpl, const c_captured_var *otherind,
         const captured_var *seasonal, const captured_var *s,
         c_captured_var *yhatseaso, c_captured_var *yhat, c_captured_var *beta,
         const captured_var *constr, const c_captured_var *Xsel,
         const b_captured_var *verLess2016b, const c_captured_var *seq,
         d_captured_var *weights, const d_captured_var *zerT1,
         const emxArray_real_T *y, const emxArray_real_T *initialbeta,
         double refsteps, double reftol, double h, c_struct_T *outIRWLS);

static void ae_binary_expand_op(c_captured_var *yhat,
                                const emxArray_real_T *yhattrend,
                                const c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX);

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

static void
b_ALSbsxfun(const captured_var *reftolALS, const captured_var *refstepsALS,
            const c_captured_var *indlinsc, const c_captured_var *Xseaso,
            const c_captured_var *bsb, const b_captured_var *isemptyX,
            const captured_var *lshiftYN, const c_captured_var *Xtrend,
            const c_captured_var *Seq, const captured_var *varampl,
            const c_captured_var *Xlshift, const c_captured_var *X,
            const c_captured_var *yin, const captured_var *trend,
            const captured_var *nexpl, const c_captured_var *otherind,
            const emxArray_real_T *beta0, emxArray_real_T *newbeta,
            double *exitflag);

static void be_binary_expand_op(c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX);

static void c_plus(emxArray_real_T *yhatnlseaso, const emxArray_real_T *Seqbsb);

static double corfactorRAW(double n, double alpha);

static void de_binary_expand_op(emxArray_real_T *newb,
                                const c_captured_var *beta,
                                const c_struct_T *outIRWLS);

static void fe_binary_expand_op(emxArray_real_T *objyhat,
                                const c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX,
                                const emxArray_real_T *beta0, double npar,
                                const c_captured_var *Xlshiftf);

static void ge_binary_expand_op(emxArray_real_T *objyhat,
                                const c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX);

static void kd_binary_expand_op(emxArray_boolean_T *weightsst,
                                const emxArray_real_T *y, double factor);

static void ld_binary_expand_op(emxArray_real_T *beta0,
                                const c_captured_var *yin,
                                const emxArray_real_T *yhatrob, double x);

static void lik(const c_captured_var *Xtrend, const c_captured_var *bsb,
                const captured_var *trend, const captured_var *seasonal,
                const captured_var *s, c_captured_var *yhatseaso,
                const c_captured_var *Xseaso, const captured_var *varampl,
                const c_captured_var *Seq, const captured_var *nexpl,
                const b_captured_var *isemptyX, const c_captured_var *X,
                const captured_var *lshiftYN, const c_captured_var *Xlshift,
                c_captured_var *yhat, const emxArray_real_T *beta0);

static void nd_binary_expand_op(emxArray_real_T *beta0,
                                const c_captured_var *yin,
                                const c_captured_var *bsb,
                                const c_captured_var *yhat, double sh0,
                                double varargin_10_huberc);

static void od_binary_expand_op(emxArray_real_T *beta0,
                                const d_captured_var *weights);

static void pd_binary_expand_op(struct_LTSts_T *out, const c_captured_var *yin,
                                const c_captured_var *yhat);

static void
rd_binary_expand_op(emxArray_real_T *yhatnlseaso, const emxArray_real_T *r3,
                    const emxArray_real_T *r4, const emxArray_real_T *at,
                    const emxArray_real_T *a, const emxArray_real_T *b0145);

static void sd_binary_expand_op(emxArray_real_T *yhatnlseaso,
                                const emxArray_real_T *r3,
                                const emxArray_real_T *r4,
                                const emxArray_real_T *at);

static void
td_binary_expand_op(emxArray_real_T *yhatnlseaso, const emxArray_real_T *r3,
                    const emxArray_real_T *r4, const emxArray_real_T *at,
                    const emxArray_real_T *a, const emxArray_real_T *b0145);

static void ud_binary_expand_op(emxArray_real_T *yhatnlseaso,
                                const emxArray_real_T *r3,
                                const emxArray_real_T *r4,
                                const emxArray_real_T *at);

static void vd_binary_expand_op(emxArray_real_T *r1,
                                const emxArray_real_T *yhatnlseaso,
                                const emxArray_real_T *Xseasobsb,
                                const emxArray_real_T *yinbsb);

static void wd_binary_expand_op(emxArray_real_T *Xlshiftbsb,
                                const emxArray_real_T *XtrendXbsbXseasonXlshift,
                                const emxArray_real_T *yinbsb);

static void xd_binary_expand_op(emxArray_real_T *XtrendXbsbXseasonXlshift,
                                const emxArray_int32_T *r1,
                                const emxArray_real_T *Xlshiftbsb,
                                const emxArray_real_T *Seqbsbvarampl);

static void yd_binary_expand_op(c_captured_var *yhat,
                                const emxArray_real_T *yhattrend,
                                const c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX,
                                const emxArray_real_T *beta0, double npar,
                                const emxArray_real_T *b);

/* Function Definitions */
static void ALS(const c_captured_var *Seq, const c_captured_var *bsb,
                const c_captured_var *Xseaso, const c_captured_var *Xtrend,
                const c_captured_var *yin, const captured_var *trend,
                const captured_var *nexpl, const captured_var *varampl,
                const b_captured_var *isemptyX, const captured_var *lshiftYN,
                const c_captured_var *Xlshift, const c_captured_var *X,
                const captured_var *reftolALS, const captured_var *refstepsALS,
                const c_captured_var *indlinsc, const c_captured_var *otherind,
                const emxArray_real_T *beta0, emxArray_real_T *newbeta)
{
  emxArray_boolean_T *r3;
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
  emxArray_real_T *indnlseaso;
  emxArray_real_T *indnlseasoc;
  emxArray_real_T *oldbeta;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  emxArray_real_T *yhatnlseaso;
  emxArray_real_T *yinbsb;
  const double *beta0_data;
  double a_tmp;
  double b;
  double b_tmp;
  double betadiff;
  double iter;
  double *Seqbsb_data;
  double *Seqbsbvarampl_data;
  double *Xbsb_data;
  double *Xlshiftbsb_data;
  double *Xseasobsb_data;
  double *XtrendXbsbXseasonXlshift_data;
  double *XtrendbsbXbsb_data;
  double *Xtrendbsb_data;
  double *indnlseaso_data;
  double *indnlseasoc_data;
  double *newbeta_data;
  double *oldbeta_data;
  double *y_data;
  double *yinbsb_data;
  int b_input_sizes_idx_1;
  int b_sizes_idx_1;
  int i;
  int i1;
  int i2;
  int input_sizes_idx_1;
  int loop_ub;
  int sizes_idx_1;
  int *r4;
  bool empty_non_axis_sizes;
  bool exitg1;
  bool *r5;
  beta0_data = beta0->data;
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
  newbeta_data = newbeta->data;
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    newbeta_data[i] = beta0_data[i];
  }
  emxInit_real_T(&oldbeta, 1);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(oldbeta, i);
  oldbeta_data = oldbeta->data;
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbeta_data[i] = beta0_data[i];
  }
  emxInit_real_T(&Seqbsb, 1);
  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
  /*  Define all the relevant matrices before the loop */
  i = Seqbsb->size[0];
  Seqbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(Seqbsb, i);
  Seqbsb_data = Seqbsb->data;
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seqbsb_data[i] = Seq->contents->data[(int)bsb->contents->data[i] - 1];
  }
  emxInit_real_T(&Xseasobsb, 2);
  loop_ub = Xseaso->contents->size[1];
  i = Xseasobsb->size[0] * Xseasobsb->size[1];
  Xseasobsb->size[0] = bsb->contents->size[0];
  Xseasobsb->size[1] = loop_ub;
  emxEnsureCapacity_real_T(Xseasobsb, i);
  Xseasobsb_data = Xseasobsb->data;
  for (i = 0; i < loop_ub; i++) {
    input_sizes_idx_1 = bsb->contents->size[0];
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      Xseasobsb_data[i1 + Xseasobsb->size[0] * i] =
          Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                  Xseaso->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&Xtrendbsb, 2);
  loop_ub = Xtrend->contents->size[1];
  i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
  Xtrendbsb->size[0] = bsb->contents->size[0];
  Xtrendbsb->size[1] = loop_ub;
  emxEnsureCapacity_real_T(Xtrendbsb, i);
  Xtrendbsb_data = Xtrendbsb->data;
  for (i = 0; i < loop_ub; i++) {
    input_sizes_idx_1 = bsb->contents->size[0];
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      Xtrendbsb_data[i1 + Xtrendbsb->size[0] * i] =
          Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                  Xtrend->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&yinbsb, 1);
  i = yinbsb->size[0];
  yinbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(yinbsb, i);
  yinbsb_data = yinbsb->data;
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    yinbsb_data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
  }
  a_tmp = (trend->contents + 2.0) + nexpl->contents;
  b_tmp = a_tmp + varampl->contents;
  emxInit_real_T(&indnlseaso, 2);
  indnlseaso_data = indnlseaso->data;
  if (rtIsNaN(a_tmp) || rtIsNaN(b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso_data = indnlseaso->data;
    indnlseaso_data[0] = rtNaN;
  } else if (b_tmp - 1.0 < a_tmp) {
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 0;
  } else if ((rtIsInf(a_tmp) || rtIsInf(b_tmp - 1.0)) &&
             (a_tmp == b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso_data = indnlseaso->data;
    indnlseaso_data[0] = rtNaN;
  } else if (floor(a_tmp) == a_tmp) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    loop_ub = (int)floor((b_tmp - 1.0) - a_tmp);
    indnlseaso->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso_data = indnlseaso->data;
    for (i = 0; i <= loop_ub; i++) {
      indnlseaso_data[i] = a_tmp + (double)i;
    }
  } else {
    eml_float_colon(a_tmp, b_tmp - 1.0, indnlseaso);
    indnlseaso_data = indnlseaso->data;
  }
  b = varampl->contents + 1.0;
  if (2.0 > b) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = (int)b;
  }
  emxInit_real_T(&Seqbsbvarampl, 2);
  i2 = Seqbsbvarampl->size[0] * Seqbsbvarampl->size[1];
  Seqbsbvarampl->size[0] = bsb->contents->size[0];
  loop_ub = i1 - i;
  Seqbsbvarampl->size[1] = loop_ub;
  emxEnsureCapacity_real_T(Seqbsbvarampl, i2);
  Seqbsbvarampl_data = Seqbsbvarampl->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    input_sizes_idx_1 = bsb->contents->size[0];
    for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
      Seqbsbvarampl_data[i2 + Seqbsbvarampl->size[0] * i1] =
          Seq->contents->data[((int)bsb->contents->data[i2] +
                               Seq->contents->size[0] * (i + i1)) -
                              1];
    }
  }
  emxInit_real_T(&Xlshiftbsb, 1);
  emxInit_real_T(&XtrendXbsbXseasonXlshift, 2);
  emxInit_real_T(&indnlseasoc, 2);
  indnlseasoc_data = indnlseasoc->data;
  emxInit_real_T(&Xbsb, 2);
  emxInit_real_T(&y, 2);
  y_data = y->data;
  if (isemptyX->contents) {
    if (lshiftYN->contents == 1.0) {
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftbsb, i);
      Xlshiftbsb_data = Xlshiftbsb->data;
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        Xlshiftbsb_data[i] =
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
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 +
                                        XtrendXbsbXseasonXlshift->size[0] * i] =
              Xtrendbsb_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                                                 (i + input_sizes_idx_1)] =
              Seqbsbvarampl_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                                                 i1] = Xlshiftbsb_data[i2];
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
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb_data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      Xtrendbsb_data = Xtrendbsb->data;
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * input_sizes_idx_1] =
              Xlshiftbsb_data[i1];
        }
      }
      b = trend->contents + 1.0;
      if (rtIsNaN(b)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else if (b < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(b) && (1.0 == b)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int)floor(b - 1.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        for (i = 0; i <= loop_ub; i++) {
          y_data[i] = (double)i + 1.0;
        }
      }
      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(indnlseasoc, i);
      indnlseasoc_data = indnlseasoc->data;
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        indnlseasoc_data[i] = y_data[i];
      }
      indnlseasoc_data[y->size[1]] = b_tmp;
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
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 +
                                        XtrendXbsbXseasonXlshift->size[0] * i] =
              Xtrendbsb_data[i1 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                                                 (i + input_sizes_idx_1)] =
              Seqbsbvarampl_data[i1 + loop_ub * i];
        }
      }
      b = trend->contents + 1.0;
      if (rtIsNaN(b)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        indnlseasoc_data[0] = rtNaN;
      } else if (b < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (rtIsInf(b) && (1.0 == b)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        indnlseasoc_data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        loop_ub = (int)floor(b - 1.0);
        indnlseasoc->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        for (i = 0; i <= loop_ub; i++) {
          indnlseasoc_data[i] = (double)i + 1.0;
        }
      }
    }
  } else {
    loop_ub = X->contents->size[1];
    i = Xbsb->size[0] * Xbsb->size[1];
    Xbsb->size[0] = bsb->contents->size[0];
    Xbsb->size[1] = loop_ub;
    emxEnsureCapacity_real_T(Xbsb, i);
    Xbsb_data = Xbsb->data;
    for (i = 0; i < loop_ub; i++) {
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        Xbsb_data[i1 + Xbsb->size[0] * i] =
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
    XtrendbsbXbsb_data = XtrendbsbXbsb->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendbsbXbsb_data[i1 + XtrendbsbXbsb->size[0] * i] =
            Xtrendbsb_data[i1 + loop_ub * i];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendbsbXbsb_data[i1 +
                           XtrendbsbXbsb->size[0] * (i + input_sizes_idx_1)] =
            Xbsb_data[i1 + loop_ub * i];
      }
    }
    if (lshiftYN->contents == 1.0) {
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftbsb, i);
      Xlshiftbsb_data = Xlshiftbsb->data;
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        Xlshiftbsb_data[i] =
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
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 +
                                        XtrendXbsbXseasonXlshift->size[0] * i] =
              XtrendbsbXbsb_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                                                 (i + b_input_sizes_idx_1)] =
              Seqbsbvarampl_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                                                 i1] = Xlshiftbsb_data[i2];
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
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb_data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      i1 = b_sizes_idx_1 + input_sizes_idx_1;
      Xtrendbsb->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      Xtrendbsb_data = Xtrendbsb->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xtrendbsb_data[i2 + Xtrendbsb->size[0] * (i + b_sizes_idx_1)] =
              Xbsb_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xtrendbsb_data[i2 + Xtrendbsb->size[0] * i1] = Xlshiftbsb_data[i2];
        }
      }
      b = (trend->contents + 1.0) + nexpl->contents;
      if (rtIsNaN(b)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else if (b < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(b) && (1.0 == b)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int)floor(b - 1.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        for (i = 0; i <= loop_ub; i++) {
          y_data[i] = (double)i + 1.0;
        }
      }
      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(indnlseasoc, i);
      indnlseasoc_data = indnlseasoc->data;
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        indnlseasoc_data[i] = y_data[i];
      }
      indnlseasoc_data[y->size[1]] = b_tmp;
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
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 +
                                        XtrendXbsbXseasonXlshift->size[0] * i] =
              XtrendbsbXbsb_data[i1 + loop_ub * i];
        }
      }
      for (i = 0; i < b_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                                                 (i + b_input_sizes_idx_1)] =
              Seqbsbvarampl_data[i1 + loop_ub * i];
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
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb_data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      Xtrendbsb_data = Xtrendbsb->data;
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * (i + input_sizes_idx_1)] =
              Xbsb_data[i1 + loop_ub * i];
        }
      }
      b = (trend->contents + 1.0) + nexpl->contents;
      if (rtIsNaN(b)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        indnlseasoc_data[0] = rtNaN;
      } else if (b < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (rtIsInf(b) && (1.0 == b)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        indnlseasoc_data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        loop_ub = (int)floor(b - 1.0);
        indnlseasoc->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        for (i = 0; i <= loop_ub; i++) {
          indnlseasoc_data[i] = (double)i + 1.0;
        }
      }
    }
    emxFree_real_T(&XtrendbsbXbsb);
  }
  emxInit_real_T(&yhatnlseaso, 1);
  emxInit_int32_T(&r, 1);
  emxInit_int32_T(&r1, 2);
  emxInit_real_T(&r2, 1);
  emxInit_boolean_T(&r3, 1);
  exitg1 = false;
  while ((!exitg1) &&
         ((betadiff > reftolALS->contents) && (iter < refstepsALS->contents))) {
    iter++;
    /*  b2378 estimate of linear part of seasonal component */
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      y_data[i] = newbeta_data[(int)indlinsc->contents->data[i] - 1];
    }
    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    mtimes(Xseasobsb, y, Xlshiftbsb);
    Xlshiftbsb_data = Xlshiftbsb->data;
    /*  OLS to estimate coefficients of trend + expl variables + non lin coeff
     * of */
    /*  seasonal + coefficient of fixed level shift */
    /*  trlshift is the matrix of explanatory variables */
    i = r->size[0];
    r->size[0] = indnlseaso->size[1];
    emxEnsureCapacity_int32_T(r, i);
    r4 = r->data;
    loop_ub = indnlseaso->size[1];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = (int)indnlseaso_data[i] - 1;
    }
    if (Xlshiftbsb->size[0] == Seqbsbvarampl->size[0]) {
      loop_ub = Seqbsbvarampl->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = Xlshiftbsb->size[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                                                 r4[i]] =
              Xlshiftbsb_data[i1] *
              Seqbsbvarampl_data[i1 + Seqbsbvarampl->size[0] * i];
        }
      }
    } else {
      xd_binary_expand_op(XtrendXbsbXseasonXlshift, r, Xlshiftbsb,
                          Seqbsbvarampl);
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
    }
    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    if (yinbsb->size[0] == Xlshiftbsb->size[0]) {
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = yinbsb->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      XtrendbsbXbsb_data = yhatnlseaso->data;
      loop_ub = yinbsb->size[0];
      for (i = 0; i < loop_ub; i++) {
        XtrendbsbXbsb_data[i] = yinbsb_data[i] - Xlshiftbsb_data[i];
      }
      mldivide(XtrendXbsbXseasonXlshift, yhatnlseaso, Xlshiftbsb);
      Xlshiftbsb_data = Xlshiftbsb->data;
    } else {
      wd_binary_expand_op(Xlshiftbsb, XtrendXbsbXseasonXlshift, yinbsb);
      Xlshiftbsb_data = Xlshiftbsb->data;
    }
    /*  Now find new coefficients of linear part of seasonal */
    /*  component in the regression of y-trend-expl-lsihft versus */
    /*  vector which contains non linear part of seasonal component */
    /*  which multiplies each column of matrix Xseaso (linear part of */
    /*  seasonal component) */
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseaso->size[1];
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    loop_ub = indnlseaso->size[1];
    for (i = 0; i < loop_ub; i++) {
      y_data[i] = Xlshiftbsb_data[(int)indnlseaso_data[i] - 1];
    }
    mtimes(Seqbsbvarampl, y, yhatnlseaso);
    if (Seqbsb->size[0] == yhatnlseaso->size[0]) {
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = Seqbsb->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      XtrendbsbXbsb_data = yhatnlseaso->data;
      loop_ub = Seqbsb->size[0];
      for (i = 0; i < loop_ub; i++) {
        XtrendbsbXbsb_data[i] += Seqbsb_data[i];
      }
    } else {
      c_plus(yhatnlseaso, Seqbsb);
      XtrendbsbXbsb_data = yhatnlseaso->data;
    }
    /*  Store new value of beta */
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    r4 = r1->data;
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = (int)indlinsc->contents->data[i];
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseasoc->size[1];
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    loop_ub = indnlseasoc->size[1];
    for (i = 0; i < loop_ub; i++) {
      y_data[i] = Xlshiftbsb_data[(int)indnlseasoc_data[i] - 1];
    }
    mtimes(Xtrendbsb, y, r2);
    Xtrendbsb_data = r2->data;
    if ((yhatnlseaso->size[0] == Xseasobsb->size[0]) &&
        (yinbsb->size[0] == r2->size[0])) {
      i = Xbsb->size[0] * Xbsb->size[1];
      Xbsb->size[0] = yhatnlseaso->size[0];
      Xbsb->size[1] = Xseasobsb->size[1];
      emxEnsureCapacity_real_T(Xbsb, i);
      Xbsb_data = Xbsb->data;
      loop_ub = Xseasobsb->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = yhatnlseaso->size[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          Xbsb_data[i1 + Xbsb->size[0] * i] =
              XtrendbsbXbsb_data[i1] *
              Xseasobsb_data[i1 + Xseasobsb->size[0] * i];
        }
      }
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = yinbsb->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      XtrendbsbXbsb_data = yhatnlseaso->data;
      loop_ub = yinbsb->size[0];
      for (i = 0; i < loop_ub; i++) {
        XtrendbsbXbsb_data[i] = yinbsb_data[i] - Xtrendbsb_data[i];
      }
      mldivide(Xbsb, yhatnlseaso, r2);
      Xtrendbsb_data = r2->data;
    } else {
      vd_binary_expand_op(r2, yhatnlseaso, Xseasobsb, yinbsb);
      Xtrendbsb_data = r2->data;
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta_data[r4[i] - 1] = Xtrendbsb_data[i];
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    r4 = r1->data;
    loop_ub = otherind->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = (int)otherind->contents->data[i];
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta_data[r4[i] - 1] = Xlshiftbsb_data[i];
    }
    /*  betadiff is linked to the tolerance (specified in scalar */
    /*  reftol) */
    if (oldbeta->size[0] == newbeta->size[0]) {
      loop_ub = oldbeta->size[0];
      for (i = 0; i < loop_ub; i++) {
        oldbeta_data[i] -= newbeta_data[i];
      }
    } else {
      c_minus(oldbeta, newbeta);
      oldbeta_data = oldbeta->data;
    }
    if (oldbeta->size[0] == 0) {
      a_tmp = 0.0;
    } else {
      a_tmp = 0.0;
      i = oldbeta->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        a_tmp += fabs(oldbeta_data[loop_ub]);
      }
    }
    if (newbeta->size[0] == 0) {
      b = 0.0;
    } else {
      b = 0.0;
      i = newbeta->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        b += fabs(newbeta_data[loop_ub]);
      }
    }
    betadiff = a_tmp / b;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(oldbeta, i);
    oldbeta_data = oldbeta->data;
    loop_ub = newbeta->size[0];
    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = r3->size[0];
    r3->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    r5 = r3->data;
    for (i = 0; i < loop_ub; i++) {
      oldbeta_data[i] = newbeta_data[i];
      r5[i] = rtIsNaN(newbeta_data[i]);
    }
    if (b_any(r3)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(newbeta, i);
      newbeta_data = newbeta->data;
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        newbeta_data[i] = beta0_data[i];
      }
      exitg1 = true;
    }
  }
  emxFree_boolean_T(&r3);
  emxFree_real_T(&r2);
  emxFree_real_T(&y);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&yhatnlseaso);
  emxFree_real_T(&Xbsb);
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

static void
ALSbsxfun(const captured_var *reftolALS, const captured_var *refstepsALS,
          const c_captured_var *indlinsc, const c_captured_var *Xseaso,
          const c_captured_var *bsb, const b_captured_var *isemptyX,
          const captured_var *lshiftYN, const c_captured_var *Xtrend,
          const c_captured_var *Seq, const captured_var *varampl,
          const c_captured_var *Xlshift, const c_captured_var *X,
          const c_captured_var *yin, const captured_var *trend,
          const captured_var *nexpl, const c_captured_var *otherind,
          const emxArray_real_T *beta0, emxArray_real_T *newbeta)
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
  const double *beta0_data;
  double betadiff;
  double iter;
  double y;
  double *a_data;
  double *at_data;
  double *b0145_data;
  double *b_b0145_data;
  double *newbeta_data;
  double *oldbeta_data;
  double *r4;
  double *tr_expl_nls_lshift_data;
  double *varargin_2_data;
  double *yhatnlseaso_data;
  int b_input_sizes_idx_1;
  int i;
  int i1;
  int i2;
  int input_sizes_idx_1;
  int loop_ub;
  int result;
  int sizes_idx_1;
  int *r5;
  signed char c_input_sizes_idx_1;
  bool empty_non_axis_sizes;
  bool exitg1;
  bool *r6;
  beta0_data = beta0->data;
  iter = 0.0;
  betadiff = 9999.0;
  i = newbeta->size[0];
  newbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(newbeta, i);
  newbeta_data = newbeta->data;
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    newbeta_data[i] = beta0_data[i];
  }
  emxInit_real_T(&oldbeta, 1);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(oldbeta, i);
  oldbeta_data = oldbeta->data;
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbeta_data[i] = beta0_data[i];
  }
  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
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
    b0145_data = b_b0145->data;
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      b0145_data[i] = newbeta_data[(int)indlinsc->contents->data[i] - 1];
    }
    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    loop_ub = Xseaso->contents->size[1];
    i = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    a->size[1] = loop_ub;
    emxEnsureCapacity_real_T(a, i);
    a_data = a->data;
    for (i = 0; i < loop_ub; i++) {
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        a_data[i1 + a->size[0] * i] =
            Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                    Xseaso->contents->size[0] * i) -
                                   1];
      }
    }
    mtimes(a, b_b0145, at);
    at_data = at->data;
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
        b_b0145_data = varargin_1->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
               b_input_sizes_idx_1++) {
            b_b0145_data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
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
        b0145_data = b_Seq->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
            b0145_data[i2 + b_Seq->size[0] * i1] =
                Seq->contents->data[((int)bsb->contents->data[i2] +
                                     Seq->contents->size[0] * (i + i1)) -
                                    1];
          }
        }
        c_bsxfun(at, b_Seq, varargin_2);
        varargin_2_data = varargin_2->data;
        i = yhatnlseaso->size[0];
        yhatnlseaso->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(yhatnlseaso, i);
        yhatnlseaso_data = yhatnlseaso->data;
        loop_ub = bsb->contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          yhatnlseaso_data[i] =
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
        tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] * i] =
                b_b0145_data[i2 + result * i];
          }
        }
        for (i = 0; i < b_input_sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] *
                                             (i + input_sizes_idx_1)] =
                varargin_2_data[i2 + result * i];
          }
        }
        for (i = 0; i < sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] * i1] =
                yhatnlseaso_data[i2];
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
        b_b0145_data = varargin_1->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
               b_input_sizes_idx_1++) {
            b_b0145_data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
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
        b0145_data = b_Seq->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
            b0145_data[i2 + b_Seq->size[0] * i1] =
                Seq->contents->data[((int)bsb->contents->data[i2] +
                                     Seq->contents->size[0] * (i + i1)) -
                                    1];
          }
        }
        c_bsxfun(at, b_Seq, varargin_2);
        varargin_2_data = varargin_2->data;
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
        tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          for (i1 = 0; i1 < result; i1++) {
            tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] * i] =
                b_b0145_data[i1 + result * i];
          }
        }
        for (i = 0; i < sizes_idx_1; i++) {
          for (i1 = 0; i1 < result; i1++) {
            tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] *
                                             (i + input_sizes_idx_1)] =
                varargin_2_data[i1 + result * i];
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
      b_b0145_data = varargin_1->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          b_b0145_data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
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
      varargin_2_data = varargin_2->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          varargin_2_data[b_input_sizes_idx_1 + varargin_2->size[0] * i2] =
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
      b0145_data = b_Seq->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
          b0145_data[i2 + b_Seq->size[0] * i1] =
              Seq->contents->data[((int)bsb->contents->data[i2] +
                                   Seq->contents->size[0] * (i + i1)) -
                                  1];
        }
      }
      c_bsxfun(at, b_Seq, r2);
      r4 = r2->data;
      i = varargin_3->size[0] * varargin_3->size[1];
      varargin_3->size[0] = r2->size[0];
      varargin_3->size[1] = r2->size[1];
      emxEnsureCapacity_real_T(varargin_3, i);
      b0145_data = varargin_3->data;
      loop_ub = r2->size[0] * r2->size[1];
      for (i = 0; i < loop_ub; i++) {
        b0145_data[i] = r4[i];
      }
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      yhatnlseaso_data = yhatnlseaso->data;
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatnlseaso_data[i] =
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
      tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] * i] =
              b_b0145_data[i2 + result * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] *
                                           (i + input_sizes_idx_1)] =
              varargin_2_data[i2 + result * i];
        }
      }
      loop_ub = c_input_sizes_idx_1;
      for (i = 0; i < loop_ub; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] *
                                           ((i + input_sizes_idx_1) +
                                            b_input_sizes_idx_1)] =
              b0145_data[i2 + result * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] * i1] =
              yhatnlseaso_data[i2];
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
      b_b0145_data = varargin_1->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          b_b0145_data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
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
      varargin_2_data = varargin_2->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          varargin_2_data[b_input_sizes_idx_1 + varargin_2->size[0] * i2] =
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
      b0145_data = b_Seq->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
          b0145_data[i2 + b_Seq->size[0] * i1] =
              Seq->contents->data[((int)bsb->contents->data[i2] +
                                   Seq->contents->size[0] * (i + i1)) -
                                  1];
        }
      }
      c_bsxfun(at, b_Seq, a);
      a_data = a->data;
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
      tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] * i] =
              b_b0145_data[i1 + result * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] *
                                           (i + input_sizes_idx_1)] =
              varargin_2_data[i1 + result * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] *
                                           ((i + input_sizes_idx_1) +
                                            b_input_sizes_idx_1)] =
              a_data[i1 + result * i];
        }
      }
    }
    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    i = r->size[0];
    r->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(r, i);
    r4 = r->data;
    loop_ub = bsb->contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
    }
    if (r->size[0] == at->size[0]) {
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        r4[i] -= at_data[i];
      }
      mldivide(tr_expl_nls_lshift, r, b0145);
      b_b0145_data = b0145->data;
    } else {
      sd_binary_expand_op(b0145, tr_expl_nls_lshift, r, at);
      b_b0145_data = b0145->data;
    }
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
    yhatnlseaso_data = yhatnlseaso->data;
    loop_ub = bsb->contents->size[0];
    for (result = 0; result < loop_ub; result++) {
      yhatnlseaso_data[result] =
          Seq->contents->data[(int)bsb->contents->data[result] - 1];
    }
    result = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    loop_ub = i1 - i;
    a->size[1] = loop_ub;
    emxEnsureCapacity_real_T(a, result);
    a_data = a->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      input_sizes_idx_1 = bsb->contents->size[0];
      for (result = 0; result < input_sizes_idx_1; result++) {
        a_data[result + a->size[0] * i1] =
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
    b0145_data = b_b0145->data;
    for (i = 0; i < loop_ub; i++) {
      b0145_data[i] = b_b0145_data[i2 + i];
    }
    mtimes(a, b_b0145, r);
    r4 = r->data;
    if (yhatnlseaso->size[0] == r->size[0]) {
      loop_ub = yhatnlseaso->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatnlseaso_data[i] += r4[i];
      }
    } else {
      plus(yhatnlseaso, r);
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
        r4 = r->data;
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xtrend->contents->size[1];
        i = a->size[0] * a->size[1];
        a->size[0] = bsb->contents->size[0];
        a->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(a, i);
        a_data = a->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            a_data[i1 + a->size[0] * i] =
                Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                        Xtrend->contents->size[0] * i) -
                                       1];
          }
        }
        i = b_a->size[0];
        b_a->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(b_a, i);
        a_data = b_a->data;
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          a_data[i] = Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xseaso->contents->size[1];
        i = b_Seq->size[0] * b_Seq->size[1];
        b_Seq->size[0] = bsb->contents->size[0];
        b_Seq->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(b_Seq, i);
        b0145_data = b_Seq->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            b0145_data[i1 + b_Seq->size[0] * i] =
                Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                        Xseaso->contents->size[0] * i) -
                                       1];
          }
        }
        c_bsxfun(yhatnlseaso, b_Seq, r2);
        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(b_b0145, i);
        b0145_data = b_b0145->data;
        for (i = 0; i < loop_ub; i++) {
          b0145_data[i] = b_b0145_data[i];
        }
        mtimes(a, b_b0145, at);
        at_data = at->data;
        if (r->size[0] == 1) {
          i = at->size[0];
        } else {
          i = r->size[0];
        }
        if ((r->size[0] == at->size[0]) && (i == b_a->size[0])) {
          loop_ub = r->size[0];
          for (i = 0; i < loop_ub; i++) {
            r4[i] = (r4[i] - at_data[i]) -
                    a_data[i] * b_b0145_data[b0145->size[0] - 1];
          }
          mldivide(r2, r, yhatnlseaso);
          yhatnlseaso_data = yhatnlseaso->data;
        } else {
          rd_binary_expand_op(yhatnlseaso, r2, r, at, b_a, b0145);
          yhatnlseaso_data = yhatnlseaso->data;
        }
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
        r4 = r->data;
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xtrend->contents->size[1];
        i = a->size[0] * a->size[1];
        a->size[0] = bsb->contents->size[0];
        a->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(a, i);
        a_data = a->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            a_data[i1 + a->size[0] * i] =
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
        b0145_data = b_Seq->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            b0145_data[i1 + b_Seq->size[0] * i] =
                Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                        Xseaso->contents->size[0] * i) -
                                       1];
          }
        }
        c_bsxfun(yhatnlseaso, b_Seq, r2);
        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(b_b0145, i);
        b0145_data = b_b0145->data;
        for (i = 0; i < loop_ub; i++) {
          b0145_data[i] = b_b0145_data[i];
        }
        mtimes(a, b_b0145, at);
        at_data = at->data;
        if (r->size[0] == at->size[0]) {
          loop_ub = r->size[0];
          for (i = 0; i < loop_ub; i++) {
            r4[i] -= at_data[i];
          }
          mldivide(r2, r, yhatnlseaso);
          yhatnlseaso_data = yhatnlseaso->data;
        } else {
          sd_binary_expand_op(yhatnlseaso, r2, r, at);
          yhatnlseaso_data = yhatnlseaso->data;
        }
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
      r4 = r->data;
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
      }
      input_sizes_idx_1 = Xtrend->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(a, i);
      a_data = a->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        result = bsb->contents->size[0];
        for (i1 = 0; i1 < result; i1++) {
          a_data[i1 + a->size[0] * i] =
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
      tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          tr_expl_nls_lshift_data[b_input_sizes_idx_1 +
                                  tr_expl_nls_lshift->size[0] * i2] =
              X->contents->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                                 X->contents->size[0] * i2) -
                                1];
        }
      }
      i2 = b_a->size[0];
      b_a->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(b_a, i2);
      a_data = b_a->data;
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        a_data[i2] = Xlshift->contents->data[(int)bsb->contents->data[i2] - 1];
      }
      input_sizes_idx_1 = Xseaso->contents->size[1];
      i2 = b_Seq->size[0] * b_Seq->size[1];
      b_Seq->size[0] = bsb->contents->size[0];
      b_Seq->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(b_Seq, i2);
      b0145_data = b_Seq->data;
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          b0145_data[b_input_sizes_idx_1 + b_Seq->size[0] * i2] =
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
      b0145_data = b_b0145->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        b0145_data[i2] = b_b0145_data[i2];
      }
      mtimes(a, b_b0145, at);
      at_data = at->data;
      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      loop_ub = i1 - i;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_b0145, i2);
      b0145_data = b_b0145->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b0145_data[i1] = b_b0145_data[i + i1];
      }
      mtimes(tr_expl_nls_lshift, b_b0145, yhatnlseaso);
      yhatnlseaso_data = yhatnlseaso->data;
      if (r->size[0] == 1) {
        i = at->size[0];
      } else {
        i = r->size[0];
      }
      if (r->size[0] == 1) {
        i1 = at->size[0];
      } else {
        i1 = r->size[0];
      }
      if (i1 == 1) {
        i1 = yhatnlseaso->size[0];
      } else if (r->size[0] == 1) {
        i1 = at->size[0];
      } else {
        i1 = r->size[0];
      }
      if ((r->size[0] == at->size[0]) && (i == yhatnlseaso->size[0]) &&
          (i1 == b_a->size[0])) {
        loop_ub = r->size[0];
        for (i = 0; i < loop_ub; i++) {
          r4[i] = ((r4[i] - at_data[i]) - yhatnlseaso_data[i]) -
                  a_data[i] * b_b0145_data[b0145->size[0] - 1];
        }
        mldivide(r2, r, yhatnlseaso);
        yhatnlseaso_data = yhatnlseaso->data;
      } else {
        td_binary_expand_op(yhatnlseaso, r2, r, at, b_a, b0145);
        yhatnlseaso_data = yhatnlseaso->data;
      }
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
      r4 = r->data;
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
      }
      input_sizes_idx_1 = Xtrend->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(a, i);
      a_data = a->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        result = bsb->contents->size[0];
        for (i1 = 0; i1 < result; i1++) {
          a_data[i1 + a->size[0] * i] =
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
      tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          tr_expl_nls_lshift_data[b_input_sizes_idx_1 +
                                  tr_expl_nls_lshift->size[0] * i2] =
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
      b0145_data = b_Seq->data;
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          b0145_data[b_input_sizes_idx_1 + b_Seq->size[0] * i2] =
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
      b0145_data = b_b0145->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        b0145_data[i2] = b_b0145_data[i2];
      }
      mtimes(a, b_b0145, at);
      at_data = at->data;
      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      loop_ub = i1 - i;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_b0145, i2);
      b0145_data = b_b0145->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b0145_data[i1] = b_b0145_data[i + i1];
      }
      mtimes(tr_expl_nls_lshift, b_b0145, yhatnlseaso);
      yhatnlseaso_data = yhatnlseaso->data;
      if (r->size[0] == 1) {
        i = at->size[0];
      } else {
        i = r->size[0];
      }
      if ((r->size[0] == at->size[0]) && (i == yhatnlseaso->size[0])) {
        loop_ub = r->size[0];
        for (i = 0; i < loop_ub; i++) {
          r4[i] = (r4[i] - at_data[i]) - yhatnlseaso_data[i];
        }
        mldivide(r2, r, yhatnlseaso);
        yhatnlseaso_data = yhatnlseaso->data;
      } else {
        ud_binary_expand_op(yhatnlseaso, r2, r, at);
        yhatnlseaso_data = yhatnlseaso->data;
      }
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    r5 = r1->data;
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r5[i] = (int)indlinsc->contents->data[i];
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta_data[r5[i] - 1] = yhatnlseaso_data[i];
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    r5 = r1->data;
    loop_ub = otherind->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r5[i] = (int)otherind->contents->data[i];
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta_data[r5[i] - 1] = b_b0145_data[i];
    }
    /*  betadiff is linked to the tolerance (specified in reftol) */
    if (oldbeta->size[0] == newbeta->size[0]) {
      loop_ub = oldbeta->size[0];
      for (i = 0; i < loop_ub; i++) {
        oldbeta_data[i] -= newbeta_data[i];
      }
    } else {
      c_minus(oldbeta, newbeta);
      oldbeta_data = oldbeta->data;
    }
    if (oldbeta->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = oldbeta->size[0];
      for (result = 0; result < i; result++) {
        betadiff += fabs(oldbeta_data[result]);
      }
    }
    if (newbeta->size[0] == 0) {
      y = 0.0;
    } else {
      y = 0.0;
      i = newbeta->size[0];
      for (result = 0; result < i; result++) {
        y += fabs(newbeta_data[result]);
      }
    }
    betadiff /= y;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(oldbeta, i);
    oldbeta_data = oldbeta->data;
    loop_ub = newbeta->size[0];
    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = r3->size[0];
    r3->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    r6 = r3->data;
    for (i = 0; i < loop_ub; i++) {
      oldbeta_data[i] = newbeta_data[i];
      r6[i] = rtIsNaN(newbeta_data[i]);
    }
    if (b_any(r3)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(newbeta, i);
      newbeta_data = newbeta->data;
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        newbeta_data[i] = beta0_data[i];
      }
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
}

static void
IRWLSreg(const captured_var *reftolALS, const captured_var *refstepsALS,
         const c_captured_var *indlinsc, const c_captured_var *Xseaso,
         c_captured_var *bsb, const b_captured_var *isemptyX,
         const captured_var *lshiftYN, const c_captured_var *Xtrend,
         const c_captured_var *Seq, const captured_var *varampl,
         const c_captured_var *Xlshift, const c_captured_var *X,
         const c_captured_var *yin, const captured_var *trend,
         const captured_var *nexpl, const c_captured_var *otherind,
         const captured_var *seasonal, const captured_var *s,
         c_captured_var *yhatseaso, c_captured_var *yhat, c_captured_var *beta,
         const captured_var *constr, const c_captured_var *Xsel,
         const b_captured_var *verLess2016b, const c_captured_var *seq,
         d_captured_var *weights, const d_captured_var *zerT1,
         const emxArray_real_T *y, const emxArray_real_T *initialbeta,
         double refsteps, double reftol, double h, c_struct_T *outIRWLS)
{
  emxArray_boolean_T *x;
  emxArray_int32_T *i_r2s;
  emxArray_real_T *Xseld;
  emxArray_real_T *b_Xseld;
  emxArray_real_T *b_newb;
  emxArray_real_T *newb;
  emxArray_real_T *r2;
  const double *initialbeta_data;
  const double *y_data;
  double betadiff;
  double exitfl;
  double ininumscale2;
  double iter;
  double varargin_1;
  double *b_newb_data;
  double *newb_data;
  double *r2_data;
  int b_nz;
  int i;
  int k;
  int nz;
  int vlen;
  int *i_r2s_data;
  bool empty_non_axis_sizes;
  bool exitg1;
  bool *x_data;
  initialbeta_data = initialbeta->data;
  y_data = y->data;
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
  emxInit_real_T(&r2, 1);
  if (y->size[0] == yhat->contents->size[0]) {
    i = r2->size[0];
    r2->size[0] = y->size[0];
    emxEnsureCapacity_real_T(r2, i);
    r2_data = r2->data;
    vlen = y->size[0];
    for (i = 0; i < vlen; i++) {
      varargin_1 = y_data[i] - yhat->contents->data[i];
      r2_data[i] = varargin_1 * varargin_1;
    }
  } else {
    ce_binary_expand_op(r2, y, yhat);
    r2_data = r2->data;
  }
  emxInit_real_T(&newb, 1);
  /*  Ordering of squared residuals */
  i = newb->size[0];
  newb->size[0] = r2->size[0];
  emxEnsureCapacity_real_T(newb, i);
  newb_data = newb->data;
  vlen = r2->size[0];
  for (i = 0; i < vlen; i++) {
    newb_data[i] = r2_data[i];
  }
  emxInit_int32_T(&i_r2s, 1);
  emxInit_real_T(&b_newb, 1);
  sort(newb, i_r2s);
  i_r2s_data = i_r2s->data;
  newb_data = newb->data;
  /*  ininumscale2 = initial value for trimmed sum of squares of */
  /*  residuals */
  if (1.0 > h) {
    vlen = 0;
  } else {
    vlen = (int)h;
  }
  i = b_newb->size[0];
  b_newb->size[0] = vlen;
  emxEnsureCapacity_real_T(b_newb, i);
  b_newb_data = b_newb->data;
  for (i = 0; i < vlen; i++) {
    b_newb_data[i] = newb_data[i];
  }
  ininumscale2 = blockedSummation(b_newb, vlen);
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
      beta->contents->data[i] = initialbeta_data[i];
    }
  } else {
    i = beta->contents->size[0];
    beta->contents->size[0] = initialbeta->size[0];
    emxEnsureCapacity_real_T(beta->contents, i);
    vlen = initialbeta->size[0];
    for (i = 0; i < vlen; i++) {
      beta->contents->data[i] = initialbeta_data[i];
    }
  }
  emxInit_real_T(&Xseld, 2);
  emxInit_boolean_T(&x, 1);
  emxInit_real_T(&b_Xseld, 2);
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
      x_data = x->data;
      for (i = 0; i < vlen; i++) {
        x_data[i] =
            (i_r2s_data[i] == initialbeta_data[initialbeta->size[0] - 1]);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        b_nz = 0;
      } else {
        b_nz = x_data[0];
        for (k = 2; k <= vlen; k++) {
          b_nz += x_data[k - 1];
        }
      }
      if (b_nz == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s_data[i];
        }
        bsb->contents->data[vlen] = initialbeta_data[initialbeta->size[0] - 1];
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
          bsb->contents->data[i] = i_r2s_data[i];
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
      x_data = x->data;
      for (i = 0; i < vlen; i++) {
        x_data[i] =
            (i_r2s_data[i] == initialbeta_data[initialbeta->size[0] - 1]);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        nz = 0;
      } else {
        nz = x_data[0];
        for (k = 2; k <= vlen; k++) {
          nz += x_data[k - 1];
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
      x_data = x->data;
      for (i = 0; i < vlen; i++) {
        x_data[i] =
            (i_r2s_data[i] == initialbeta_data[initialbeta->size[0] - 1] - 1.0);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        b_nz = 0;
      } else {
        b_nz = x_data[0];
        for (k = 2; k <= vlen; k++) {
          b_nz += x_data[k - 1];
        }
      }
      if ((nz == 0) && (b_nz == 0)) {
        if (1.0 > h - 2.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 2.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 2;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s_data[i];
        }
        bsb->contents->data[vlen] =
            initialbeta_data[initialbeta->size[0] - 1] - 1.0;
        bsb->contents->data[vlen + 1] =
            initialbeta_data[initialbeta->size[0] - 1];
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
          bsb->contents->data[i] = i_r2s_data[i];
        }
        bsb->contents->data[vlen] = initialbeta_data[initialbeta->size[0] - 1];
      } else if (b_nz == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s_data[i];
        }
        bsb->contents->data[vlen] =
            initialbeta_data[initialbeta->size[0] - 1] - 1.0;
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
          bsb->contents->data[i] = i_r2s_data[i];
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
        bsb->contents->data[i] = i_r2s_data[i];
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
      newb_data = Xseld->data;
      for (i = 0; i < vlen; i++) {
        b_nz = bsb->contents->size[0];
        for (k = 0; k < b_nz; k++) {
          newb_data[k + Xseld->size[0] * i] =
              Xsel->contents->data[((int)bsb->contents->data[k] +
                                    Xsel->contents->size[0] * i) -
                                   1];
        }
      }
      i = b_newb->size[0];
      b_newb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(b_newb, i);
      b_newb_data = b_newb->data;
      vlen = bsb->contents->size[0];
      for (i = 0; i < vlen; i++) {
        b_newb_data[i] = y_data[(int)bsb->contents->data[i] - 1];
      }
      mldivide(Xseld, b_newb, outIRWLS->betarw);
      /*  update residuals */
      mtimes(Xsel->contents, outIRWLS->betarw, yhat->contents);
      exitfl = 0.0;
    } else if (lshiftYN->contents == 1.0) {
      if (varampl->contents > 0.0) {
        /*  No minimization is used but just ALS */
        if (verLess2016b->contents) {
          b_ALSbsxfun(reftolALS, refstepsALS, indlinsc, Xseaso, bsb, isemptyX,
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
          b_nz = Xsel->contents->size[0];
        } else if ((Xlshift->contents->size[0] != 0) &&
                   (Xlshift->contents->size[1] != 0)) {
          b_nz = Xlshift->contents->size[0];
        } else {
          b_nz = Xsel->contents->size[0];
          if (b_nz < 0) {
            b_nz = 0;
          }
          if (Xlshift->contents->size[0] > b_nz) {
            b_nz = Xlshift->contents->size[0];
          }
        }
        empty_non_axis_sizes = (b_nz == 0);
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
        Xseld->size[0] = b_nz;
        Xseld->size[1] = vlen + nz;
        emxEnsureCapacity_real_T(Xseld, i);
        newb_data = Xseld->data;
        for (i = 0; i < vlen; i++) {
          for (k = 0; k < b_nz; k++) {
            newb_data[k + Xseld->size[0] * i] =
                Xsel->contents->data[k + b_nz * i];
          }
        }
        for (i = 0; i < nz; i++) {
          for (k = 0; k < b_nz; k++) {
            newb_data[k + Xseld->size[0] * (i + vlen)] =
                Xlshift->contents->data[k + b_nz * i];
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
        b_newb_data = b_Xseld->data;
        for (i = 0; i < vlen; i++) {
          b_nz = bsb->contents->size[0];
          for (k = 0; k < b_nz; k++) {
            b_newb_data[k + b_Xseld->size[0] * i] =
                newb_data[((int)bsb->contents->data[k] + Xseld->size[0] * i) -
                          1];
          }
        }
        i = b_newb->size[0];
        b_newb->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(b_newb, i);
        b_newb_data = b_newb->data;
        vlen = bsb->contents->size[0];
        for (i = 0; i < vlen; i++) {
          b_newb_data[i] = y_data[(int)bsb->contents->data[i] - 1];
        }
        mldivide(b_Xseld, b_newb, newb);
        newb_data = newb->data;
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
          outIRWLS->betarw->data[i] = newb_data[i];
        }
        outIRWLS->betarw->data[newb->size[0]] =
            initialbeta_data[initialbeta->size[0] - 1];
        exitfl = 0.0;
      }
    } else {
      /*  model is non linear because there is just the time varying amplitude
       * in seasonal component */
      /*  Use Alternative least squares to update beta (just using */
      /*  the units forming subset) */
      if (verLess2016b->contents) {
        b_ALSbsxfun(reftolALS, refstepsALS, indlinsc, Xseaso, bsb, isemptyX,
                    lshiftYN, Xtrend, Seq, varampl, Xlshift, X, yin, trend,
                    nexpl, otherind, beta->contents, outIRWLS->betarw, &exitfl);
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
    if (beta->contents->size[0] == outIRWLS->betarw->size[0]) {
      i = newb->size[0];
      newb->size[0] = beta->contents->size[0];
      emxEnsureCapacity_real_T(newb, i);
      newb_data = newb->data;
      vlen = beta->contents->size[0];
      for (i = 0; i < vlen; i++) {
        newb_data[i] = beta->contents->data[i] - outIRWLS->betarw->data[i];
      }
    } else {
      de_binary_expand_op(newb, beta, outIRWLS);
      newb_data = newb->data;
    }
    if (newb->size[0] == 0) {
      varargin_1 = 0.0;
    } else {
      varargin_1 = 0.0;
      i = newb->size[0];
      for (k = 0; k < i; k++) {
        varargin_1 += fabs(newb_data[k]);
      }
    }
    i = newb->size[0];
    newb->size[0] = beta->contents->size[0];
    emxEnsureCapacity_real_T(newb, i);
    newb_data = newb->data;
    vlen = beta->contents->size[0];
    for (i = 0; i < vlen; i++) {
      newb_data[i] = beta->contents->data[i];
    }
    if (newb->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = newb->size[0];
      for (k = 0; k < i; k++) {
        betadiff += fabs(newb_data[k]);
      }
    }
    betadiff = varargin_1 / betadiff;
    /*  exit from the loop if new beta contains nan In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = x->size[0];
    x->size[0] = outIRWLS->betarw->size[0];
    emxEnsureCapacity_boolean_T(x, i);
    x_data = x->data;
    vlen = outIRWLS->betarw->size[0];
    for (i = 0; i < vlen; i++) {
      x_data[i] = rtIsNaN(outIRWLS->betarw->data[i]);
    }
    if (b_any(x) || (exitfl != 0.0)) {
      i = outIRWLS->betarw->size[0];
      outIRWLS->betarw->size[0] = initialbeta->size[0];
      emxEnsureCapacity_real_T(outIRWLS->betarw, i);
      vlen = initialbeta->size[0];
      for (i = 0; i < vlen; i++) {
        outIRWLS->betarw->data[i] = initialbeta_data[i];
      }
      outIRWLS->numscale2rw = ininumscale2;
      exitg1 = true;
    } else {
      /*  update residuals */
      if (y->size[0] == yhat->contents->size[0]) {
        i = r2->size[0];
        r2->size[0] = y->size[0];
        emxEnsureCapacity_real_T(r2, i);
        r2_data = r2->data;
        vlen = y->size[0];
        for (i = 0; i < vlen; i++) {
          varargin_1 = y_data[i] - yhat->contents->data[i];
          r2_data[i] = varargin_1 * varargin_1;
        }
      } else {
        ce_binary_expand_op(r2, y, yhat);
        r2_data = r2->data;
      }
      /*  Ordering of all new squared residuals */
      i = newb->size[0];
      newb->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(newb, i);
      newb_data = newb->data;
      vlen = r2->size[0];
      for (i = 0; i < vlen; i++) {
        newb_data[i] = r2_data[i];
      }
      sort(newb, i_r2s);
      i_r2s_data = i_r2s->data;
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
  emxFree_real_T(&b_Xseld);
  emxFree_real_T(&b_newb);
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
      x_data = x->data;
      for (i = 0; i < vlen; i++) {
        x_data[i] =
            (i_r2s_data[i] == initialbeta_data[initialbeta->size[0] - 1]);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        b_nz = 0;
      } else {
        b_nz = x_data[0];
        for (k = 2; k <= vlen; k++) {
          b_nz += x_data[k - 1];
        }
      }
      if (b_nz == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s_data[i];
        }
        bsb->contents->data[vlen] = initialbeta_data[initialbeta->size[0] - 1];
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
          bsb->contents->data[i] = i_r2s_data[i];
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
      x_data = x->data;
      for (i = 0; i < vlen; i++) {
        x_data[i] =
            (i_r2s_data[i] == initialbeta_data[initialbeta->size[0] - 1]);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        nz = 0;
      } else {
        nz = x_data[0];
        for (k = 2; k <= vlen; k++) {
          nz += x_data[k - 1];
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
      x_data = x->data;
      for (i = 0; i < vlen; i++) {
        x_data[i] =
            (i_r2s_data[i] == initialbeta_data[initialbeta->size[0] - 1] - 1.0);
      }
      vlen = x->size[0];
      if (x->size[0] == 0) {
        b_nz = 0;
      } else {
        b_nz = x_data[0];
        for (k = 2; k <= vlen; k++) {
          b_nz += x_data[k - 1];
        }
      }
      if ((nz == 0) && (b_nz == 0)) {
        if (1.0 > h - 2.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 2.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 2;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s_data[i];
        }
        bsb->contents->data[vlen] =
            initialbeta_data[initialbeta->size[0] - 1] - 1.0;
        bsb->contents->data[vlen + 1] =
            initialbeta_data[initialbeta->size[0] - 1];
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
          bsb->contents->data[i] = i_r2s_data[i];
        }
        bsb->contents->data[vlen] = initialbeta_data[initialbeta->size[0] - 1];
      } else if (b_nz == 0) {
        if (1.0 > h - 1.0) {
          vlen = 0;
        } else {
          vlen = (int)(h - 1.0);
        }
        i = bsb->contents->size[0];
        bsb->contents->size[0] = vlen + 1;
        emxEnsureCapacity_real_T(bsb->contents, i);
        for (i = 0; i < vlen; i++) {
          bsb->contents->data[i] = i_r2s_data[i];
        }
        bsb->contents->data[vlen] =
            initialbeta_data[initialbeta->size[0] - 1] - 1.0;
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
          bsb->contents->data[i] = i_r2s_data[i];
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
        bsb->contents->data[i] = i_r2s_data[i];
      }
    }
    i = newb->size[0];
    newb->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(newb, i);
    newb_data = newb->data;
    vlen = bsb->contents->size[0];
    for (i = 0; i < vlen; i++) {
      newb_data[i] = r2_data[(int)bsb->contents->data[i] - 1];
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
  i_r2s_data = i_r2s->data;
  vlen = bsb->contents->size[0];
  for (i = 0; i < vlen; i++) {
    i_r2s_data[i] = (int)bsb->contents->data[i];
  }
  vlen = i_r2s->size[0];
  for (i = 0; i < vlen; i++) {
    weights->contents->data[i_r2s_data[i] - 1] = true;
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

static void ae_binary_expand_op(c_captured_var *yhat,
                                const emxArray_real_T *yhattrend,
                                const c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX)
{
  const double *yhatX_data;
  const double *yhattrend_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  yhatX_data = yhatX->data;
  yhattrend_data = yhattrend->data;
  i = yhat->contents->size[0];
  if (yhatX->size[0] == 1) {
    if (yhatseaso->contents->size[0] == 1) {
      yhat->contents->size[0] = yhattrend->size[0];
    } else {
      yhat->contents->size[0] = yhatseaso->contents->size[0];
    }
  } else {
    yhat->contents->size[0] = yhatX->size[0];
  }
  emxEnsureCapacity_real_T(yhat->contents, i);
  stride_0_0 = (yhattrend->size[0] != 1);
  stride_1_0 = (yhatseaso->contents->size[0] != 1);
  stride_2_0 = (yhatX->size[0] != 1);
  if (yhatX->size[0] == 1) {
    if (yhatseaso->contents->size[0] == 1) {
      loop_ub = yhattrend->size[0];
    } else {
      loop_ub = yhatseaso->contents->size[0];
    }
  } else {
    loop_ub = yhatX->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    yhat->contents->data[i] = (yhattrend_data[i * stride_0_0] +
                               yhatseaso->contents->data[i * stride_1_0]) +
                              yhatX_data[i * stride_2_0];
  }
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
  emxArray_boolean_T *r3;
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
  emxArray_real_T *indnlseaso;
  emxArray_real_T *indnlseasoc;
  emxArray_real_T *oldbeta;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  emxArray_real_T *yhatnlseaso;
  emxArray_real_T *yinbsb;
  const double *beta0_data;
  double a_tmp;
  double b;
  double b_tmp;
  double betadiff;
  double iter;
  double *Seqbsb_data;
  double *Seqbsbvarampl_data;
  double *Xbsb_data;
  double *Xlshiftbsb_data;
  double *Xseasobsb_data;
  double *XtrendXbsbXseasonXlshift_data;
  double *XtrendbsbXbsb_data;
  double *Xtrendbsb_data;
  double *indnlseaso_data;
  double *indnlseasoc_data;
  double *newbeta_data;
  double *oldbeta_data;
  double *y_data;
  double *yinbsb_data;
  int b_exitflag;
  int b_input_sizes_idx_1;
  int b_sizes_idx_1;
  int i;
  int i1;
  int i2;
  int input_sizes_idx_1;
  int loop_ub;
  int sizes_idx_1;
  int *r4;
  bool empty_non_axis_sizes;
  bool exitg1;
  bool *r5;
  beta0_data = beta0->data;
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
  newbeta_data = newbeta->data;
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    newbeta_data[i] = beta0_data[i];
  }
  emxInit_real_T(&oldbeta, 1);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(oldbeta, i);
  oldbeta_data = oldbeta->data;
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbeta_data[i] = beta0_data[i];
  }
  emxInit_real_T(&Seqbsb, 1);
  /*  exitflag = flag which informs about convergence. exitflag =0 */
  /*  implies normal convergence, else no convergence has been obtained */
  b_exitflag = 0;
  /*  Define all the relevant matrices before the loop */
  i = Seqbsb->size[0];
  Seqbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(Seqbsb, i);
  Seqbsb_data = Seqbsb->data;
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seqbsb_data[i] = Seq->contents->data[(int)bsb->contents->data[i] - 1];
  }
  emxInit_real_T(&Xseasobsb, 2);
  loop_ub = Xseaso->contents->size[1];
  i = Xseasobsb->size[0] * Xseasobsb->size[1];
  Xseasobsb->size[0] = bsb->contents->size[0];
  Xseasobsb->size[1] = loop_ub;
  emxEnsureCapacity_real_T(Xseasobsb, i);
  Xseasobsb_data = Xseasobsb->data;
  for (i = 0; i < loop_ub; i++) {
    input_sizes_idx_1 = bsb->contents->size[0];
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      Xseasobsb_data[i1 + Xseasobsb->size[0] * i] =
          Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                  Xseaso->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&Xtrendbsb, 2);
  loop_ub = Xtrend->contents->size[1];
  i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
  Xtrendbsb->size[0] = bsb->contents->size[0];
  Xtrendbsb->size[1] = loop_ub;
  emxEnsureCapacity_real_T(Xtrendbsb, i);
  Xtrendbsb_data = Xtrendbsb->data;
  for (i = 0; i < loop_ub; i++) {
    input_sizes_idx_1 = bsb->contents->size[0];
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      Xtrendbsb_data[i1 + Xtrendbsb->size[0] * i] =
          Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                  Xtrend->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&yinbsb, 1);
  i = yinbsb->size[0];
  yinbsb->size[0] = bsb->contents->size[0];
  emxEnsureCapacity_real_T(yinbsb, i);
  yinbsb_data = yinbsb->data;
  loop_ub = bsb->contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    yinbsb_data[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
  }
  a_tmp = (trend->contents + 2.0) + nexpl->contents;
  b_tmp = a_tmp + varampl->contents;
  emxInit_real_T(&indnlseaso, 2);
  indnlseaso_data = indnlseaso->data;
  if (rtIsNaN(a_tmp) || rtIsNaN(b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso_data = indnlseaso->data;
    indnlseaso_data[0] = rtNaN;
  } else if (b_tmp - 1.0 < a_tmp) {
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 0;
  } else if ((rtIsInf(a_tmp) || rtIsInf(b_tmp - 1.0)) &&
             (a_tmp == b_tmp - 1.0)) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    indnlseaso->size[1] = 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso_data = indnlseaso->data;
    indnlseaso_data[0] = rtNaN;
  } else if (floor(a_tmp) == a_tmp) {
    i = indnlseaso->size[0] * indnlseaso->size[1];
    indnlseaso->size[0] = 1;
    loop_ub = (int)floor((b_tmp - 1.0) - a_tmp);
    indnlseaso->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(indnlseaso, i);
    indnlseaso_data = indnlseaso->data;
    for (i = 0; i <= loop_ub; i++) {
      indnlseaso_data[i] = a_tmp + (double)i;
    }
  } else {
    eml_float_colon(a_tmp, b_tmp - 1.0, indnlseaso);
    indnlseaso_data = indnlseaso->data;
  }
  b = varampl->contents + 1.0;
  if (2.0 > b) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = (int)b;
  }
  emxInit_real_T(&Seqbsbvarampl, 2);
  i2 = Seqbsbvarampl->size[0] * Seqbsbvarampl->size[1];
  Seqbsbvarampl->size[0] = bsb->contents->size[0];
  loop_ub = i1 - i;
  Seqbsbvarampl->size[1] = loop_ub;
  emxEnsureCapacity_real_T(Seqbsbvarampl, i2);
  Seqbsbvarampl_data = Seqbsbvarampl->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    input_sizes_idx_1 = bsb->contents->size[0];
    for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
      Seqbsbvarampl_data[i2 + Seqbsbvarampl->size[0] * i1] =
          Seq->contents->data[((int)bsb->contents->data[i2] +
                               Seq->contents->size[0] * (i + i1)) -
                              1];
    }
  }
  emxInit_real_T(&Xlshiftbsb, 1);
  emxInit_real_T(&XtrendXbsbXseasonXlshift, 2);
  emxInit_real_T(&indnlseasoc, 2);
  indnlseasoc_data = indnlseasoc->data;
  emxInit_real_T(&Xbsb, 2);
  emxInit_real_T(&y, 2);
  y_data = y->data;
  if (isemptyX->contents) {
    if (lshiftYN->contents == 1.0) {
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftbsb, i);
      Xlshiftbsb_data = Xlshiftbsb->data;
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        Xlshiftbsb_data[i] =
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
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 +
                                        XtrendXbsbXseasonXlshift->size[0] * i] =
              Xtrendbsb_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                                                 (i + input_sizes_idx_1)] =
              Seqbsbvarampl_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                                                 i1] = Xlshiftbsb_data[i2];
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
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb_data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      Xtrendbsb_data = Xtrendbsb->data;
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * input_sizes_idx_1] =
              Xlshiftbsb_data[i1];
        }
      }
      b = trend->contents + 1.0;
      if (rtIsNaN(b)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else if (b < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(b) && (1.0 == b)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int)floor(b - 1.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        for (i = 0; i <= loop_ub; i++) {
          y_data[i] = (double)i + 1.0;
        }
      }
      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(indnlseasoc, i);
      indnlseasoc_data = indnlseasoc->data;
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        indnlseasoc_data[i] = y_data[i];
      }
      indnlseasoc_data[y->size[1]] = b_tmp;
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
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 +
                                        XtrendXbsbXseasonXlshift->size[0] * i] =
              Xtrendbsb_data[i1 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                                                 (i + input_sizes_idx_1)] =
              Seqbsbvarampl_data[i1 + loop_ub * i];
        }
      }
      b = trend->contents + 1.0;
      if (rtIsNaN(b)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        indnlseasoc_data[0] = rtNaN;
      } else if (b < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (rtIsInf(b) && (1.0 == b)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        indnlseasoc_data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        loop_ub = (int)floor(b - 1.0);
        indnlseasoc->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        for (i = 0; i <= loop_ub; i++) {
          indnlseasoc_data[i] = (double)i + 1.0;
        }
      }
    }
  } else {
    loop_ub = X->contents->size[1];
    i = Xbsb->size[0] * Xbsb->size[1];
    Xbsb->size[0] = bsb->contents->size[0];
    Xbsb->size[1] = loop_ub;
    emxEnsureCapacity_real_T(Xbsb, i);
    Xbsb_data = Xbsb->data;
    for (i = 0; i < loop_ub; i++) {
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        Xbsb_data[i1 + Xbsb->size[0] * i] =
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
    XtrendbsbXbsb_data = XtrendbsbXbsb->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendbsbXbsb_data[i1 + XtrendbsbXbsb->size[0] * i] =
            Xtrendbsb_data[i1 + loop_ub * i];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        XtrendbsbXbsb_data[i1 +
                           XtrendbsbXbsb->size[0] * (i + input_sizes_idx_1)] =
            Xbsb_data[i1 + loop_ub * i];
      }
    }
    if (lshiftYN->contents == 1.0) {
      i = Xlshiftbsb->size[0];
      Xlshiftbsb->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftbsb, i);
      Xlshiftbsb_data = Xlshiftbsb->data;
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        Xlshiftbsb_data[i] =
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
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 +
                                        XtrendXbsbXseasonXlshift->size[0] * i] =
              XtrendbsbXbsb_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                                                 (i + b_input_sizes_idx_1)] =
              Seqbsbvarampl_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          XtrendXbsbXseasonXlshift_data[i2 + XtrendXbsbXseasonXlshift->size[0] *
                                                 i1] = Xlshiftbsb_data[i2];
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
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb_data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      i1 = b_sizes_idx_1 + input_sizes_idx_1;
      Xtrendbsb->size[1] = i1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      Xtrendbsb_data = Xtrendbsb->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xtrendbsb_data[i2 + Xtrendbsb->size[0] * (i + b_sizes_idx_1)] =
              Xbsb_data[i2 + loop_ub * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xtrendbsb_data[i2 + Xtrendbsb->size[0] * i1] = Xlshiftbsb_data[i2];
        }
      }
      b = (trend->contents + 1.0) + nexpl->contents;
      if (rtIsNaN(b)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else if (b < 1.0) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(b) && (1.0 == b)) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        y_data[0] = rtNaN;
      } else {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        loop_ub = (int)floor(b - 1.0);
        y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(y, i);
        y_data = y->data;
        for (i = 0; i <= loop_ub; i++) {
          y_data[i] = (double)i + 1.0;
        }
      }
      i = indnlseasoc->size[0] * indnlseasoc->size[1];
      indnlseasoc->size[0] = 1;
      indnlseasoc->size[1] = y->size[1] + 1;
      emxEnsureCapacity_real_T(indnlseasoc, i);
      indnlseasoc_data = indnlseasoc->data;
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        indnlseasoc_data[i] = y_data[i];
      }
      indnlseasoc_data[y->size[1]] = b_tmp;
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
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 +
                                        XtrendXbsbXseasonXlshift->size[0] * i] =
              XtrendbsbXbsb_data[i1 + loop_ub * i];
        }
      }
      for (i = 0; i < b_sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                                                 (i + b_input_sizes_idx_1)] =
              Seqbsbvarampl_data[i1 + loop_ub * i];
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
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * i] =
              Xtrendbsb_data[i1 + loop_ub * i];
        }
      }
      i = Xtrendbsb->size[0] * Xtrendbsb->size[1];
      Xtrendbsb->size[0] = loop_ub;
      Xtrendbsb->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xtrendbsb, i);
      Xtrendbsb_data = Xtrendbsb->data;
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Xtrendbsb_data[i1 + Xtrendbsb->size[0] * (i + input_sizes_idx_1)] =
              Xbsb_data[i1 + loop_ub * i];
        }
      }
      b = (trend->contents + 1.0) + nexpl->contents;
      if (rtIsNaN(b)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        indnlseasoc_data[0] = rtNaN;
      } else if (b < 1.0) {
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 0;
      } else if (rtIsInf(b) && (1.0 == b)) {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        indnlseasoc->size[1] = 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        indnlseasoc_data[0] = rtNaN;
      } else {
        i = indnlseasoc->size[0] * indnlseasoc->size[1];
        indnlseasoc->size[0] = 1;
        loop_ub = (int)floor(b - 1.0);
        indnlseasoc->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(indnlseasoc, i);
        indnlseasoc_data = indnlseasoc->data;
        for (i = 0; i <= loop_ub; i++) {
          indnlseasoc_data[i] = (double)i + 1.0;
        }
      }
    }
    emxFree_real_T(&XtrendbsbXbsb);
  }
  emxInit_real_T(&yhatnlseaso, 1);
  emxInit_int32_T(&r, 1);
  emxInit_int32_T(&r1, 2);
  emxInit_real_T(&r2, 1);
  emxInit_boolean_T(&r3, 1);
  exitg1 = false;
  while ((!exitg1) &&
         ((betadiff > reftolALS->contents) && (iter < refstepsALS->contents))) {
    iter++;
    /*  b2378 estimate of linear part of seasonal component */
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      y_data[i] = newbeta_data[(int)indlinsc->contents->data[i] - 1];
    }
    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    mtimes(Xseasobsb, y, Xlshiftbsb);
    Xlshiftbsb_data = Xlshiftbsb->data;
    /*  OLS to estimate coefficients of trend + expl variables + non lin coeff
     * of */
    /*  seasonal + coefficient of fixed level shift */
    /*  trlshift is the matrix of explanatory variables */
    i = r->size[0];
    r->size[0] = indnlseaso->size[1];
    emxEnsureCapacity_int32_T(r, i);
    r4 = r->data;
    loop_ub = indnlseaso->size[1];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = (int)indnlseaso_data[i] - 1;
    }
    if (Xlshiftbsb->size[0] == Seqbsbvarampl->size[0]) {
      loop_ub = Seqbsbvarampl->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = Xlshiftbsb->size[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          XtrendXbsbXseasonXlshift_data[i1 + XtrendXbsbXseasonXlshift->size[0] *
                                                 r4[i]] =
              Xlshiftbsb_data[i1] *
              Seqbsbvarampl_data[i1 + Seqbsbvarampl->size[0] * i];
        }
      }
    } else {
      xd_binary_expand_op(XtrendXbsbXseasonXlshift, r, Xlshiftbsb,
                          Seqbsbvarampl);
      XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
    }
    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    if (yinbsb->size[0] == Xlshiftbsb->size[0]) {
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = yinbsb->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      XtrendbsbXbsb_data = yhatnlseaso->data;
      loop_ub = yinbsb->size[0];
      for (i = 0; i < loop_ub; i++) {
        XtrendbsbXbsb_data[i] = yinbsb_data[i] - Xlshiftbsb_data[i];
      }
      mldivide(XtrendXbsbXseasonXlshift, yhatnlseaso, Xlshiftbsb);
      Xlshiftbsb_data = Xlshiftbsb->data;
    } else {
      wd_binary_expand_op(Xlshiftbsb, XtrendXbsbXseasonXlshift, yinbsb);
      Xlshiftbsb_data = Xlshiftbsb->data;
    }
    /*  Now find new coefficients of linear part of seasonal */
    /*  component in the regression of y-trend-expl-lsihft versus */
    /*  vector which contains non linear part of seasonal component */
    /*  which multiplies each column of matrix Xseaso (linear part of */
    /*  seasonal component) */
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseaso->size[1];
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    loop_ub = indnlseaso->size[1];
    for (i = 0; i < loop_ub; i++) {
      y_data[i] = Xlshiftbsb_data[(int)indnlseaso_data[i] - 1];
    }
    mtimes(Seqbsbvarampl, y, yhatnlseaso);
    if (Seqbsb->size[0] == yhatnlseaso->size[0]) {
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = Seqbsb->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      XtrendbsbXbsb_data = yhatnlseaso->data;
      loop_ub = Seqbsb->size[0];
      for (i = 0; i < loop_ub; i++) {
        XtrendbsbXbsb_data[i] += Seqbsb_data[i];
      }
    } else {
      c_plus(yhatnlseaso, Seqbsb);
      XtrendbsbXbsb_data = yhatnlseaso->data;
    }
    /*  Store new value of beta */
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    r4 = r1->data;
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = (int)indlinsc->contents->data[i];
    }
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = indnlseasoc->size[1];
    emxEnsureCapacity_real_T(y, i);
    y_data = y->data;
    loop_ub = indnlseasoc->size[1];
    for (i = 0; i < loop_ub; i++) {
      y_data[i] = Xlshiftbsb_data[(int)indnlseasoc_data[i] - 1];
    }
    mtimes(Xtrendbsb, y, r2);
    Xtrendbsb_data = r2->data;
    if ((yhatnlseaso->size[0] == Xseasobsb->size[0]) &&
        (yinbsb->size[0] == r2->size[0])) {
      i = Xbsb->size[0] * Xbsb->size[1];
      Xbsb->size[0] = yhatnlseaso->size[0];
      Xbsb->size[1] = Xseasobsb->size[1];
      emxEnsureCapacity_real_T(Xbsb, i);
      Xbsb_data = Xbsb->data;
      loop_ub = Xseasobsb->size[1];
      for (i = 0; i < loop_ub; i++) {
        input_sizes_idx_1 = yhatnlseaso->size[0];
        for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
          Xbsb_data[i1 + Xbsb->size[0] * i] =
              XtrendbsbXbsb_data[i1] *
              Xseasobsb_data[i1 + Xseasobsb->size[0] * i];
        }
      }
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = yinbsb->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      XtrendbsbXbsb_data = yhatnlseaso->data;
      loop_ub = yinbsb->size[0];
      for (i = 0; i < loop_ub; i++) {
        XtrendbsbXbsb_data[i] = yinbsb_data[i] - Xtrendbsb_data[i];
      }
      mldivide(Xbsb, yhatnlseaso, r2);
      Xtrendbsb_data = r2->data;
    } else {
      vd_binary_expand_op(r2, yhatnlseaso, Xseasobsb, yinbsb);
      Xtrendbsb_data = r2->data;
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta_data[r4[i] - 1] = Xtrendbsb_data[i];
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    r4 = r1->data;
    loop_ub = otherind->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = (int)otherind->contents->data[i];
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta_data[r4[i] - 1] = Xlshiftbsb_data[i];
    }
    /*  betadiff is linked to the tolerance (specified in scalar */
    /*  reftol) */
    if (oldbeta->size[0] == newbeta->size[0]) {
      loop_ub = oldbeta->size[0];
      for (i = 0; i < loop_ub; i++) {
        oldbeta_data[i] -= newbeta_data[i];
      }
    } else {
      c_minus(oldbeta, newbeta);
      oldbeta_data = oldbeta->data;
    }
    if (oldbeta->size[0] == 0) {
      a_tmp = 0.0;
    } else {
      a_tmp = 0.0;
      i = oldbeta->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        a_tmp += fabs(oldbeta_data[loop_ub]);
      }
    }
    if (newbeta->size[0] == 0) {
      b = 0.0;
    } else {
      b = 0.0;
      i = newbeta->size[0];
      for (loop_ub = 0; loop_ub < i; loop_ub++) {
        b += fabs(newbeta_data[loop_ub]);
      }
    }
    betadiff = a_tmp / b;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(oldbeta, i);
    oldbeta_data = oldbeta->data;
    loop_ub = newbeta->size[0];
    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = r3->size[0];
    r3->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    r5 = r3->data;
    for (i = 0; i < loop_ub; i++) {
      oldbeta_data[i] = newbeta_data[i];
      r5[i] = rtIsNaN(newbeta_data[i]);
    }
    if (b_any(r3)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(newbeta, i);
      newbeta_data = newbeta->data;
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        newbeta_data[i] = beta0_data[i];
      }
      b_exitflag = -1;
      exitg1 = true;
    }
  }
  emxFree_boolean_T(&r3);
  emxFree_real_T(&r2);
  emxFree_real_T(&y);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r);
  emxFree_real_T(&yhatnlseaso);
  emxFree_real_T(&Xbsb);
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

static void
b_ALSbsxfun(const captured_var *reftolALS, const captured_var *refstepsALS,
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
  const double *beta0_data;
  double betadiff;
  double iter;
  double y;
  double *a_data;
  double *at_data;
  double *b0145_data;
  double *b_b0145_data;
  double *newbeta_data;
  double *oldbeta_data;
  double *r4;
  double *tr_expl_nls_lshift_data;
  double *varargin_2_data;
  double *yhatnlseaso_data;
  int b_exitflag;
  int b_input_sizes_idx_1;
  int i;
  int i1;
  int i2;
  int input_sizes_idx_1;
  int loop_ub;
  int result;
  int sizes_idx_1;
  int *r5;
  signed char c_input_sizes_idx_1;
  bool empty_non_axis_sizes;
  bool exitg1;
  bool *r6;
  beta0_data = beta0->data;
  iter = 0.0;
  betadiff = 9999.0;
  i = newbeta->size[0];
  newbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(newbeta, i);
  newbeta_data = newbeta->data;
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    newbeta_data[i] = beta0_data[i];
  }
  emxInit_real_T(&oldbeta, 1);
  i = oldbeta->size[0];
  oldbeta->size[0] = beta0->size[0];
  emxEnsureCapacity_real_T(oldbeta, i);
  oldbeta_data = oldbeta->data;
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    oldbeta_data[i] = beta0_data[i];
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
    b0145_data = b_b0145->data;
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      b0145_data[i] = newbeta_data[(int)indlinsc->contents->data[i] - 1];
    }
    /*  at= yhatseaso = fitted values for linear part of seasonal */
    /*  component */
    loop_ub = Xseaso->contents->size[1];
    i = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    a->size[1] = loop_ub;
    emxEnsureCapacity_real_T(a, i);
    a_data = a->data;
    for (i = 0; i < loop_ub; i++) {
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        a_data[i1 + a->size[0] * i] =
            Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                    Xseaso->contents->size[0] * i) -
                                   1];
      }
    }
    mtimes(a, b_b0145, at);
    at_data = at->data;
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
        b_b0145_data = varargin_1->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
               b_input_sizes_idx_1++) {
            b_b0145_data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
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
        b0145_data = b_Seq->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
            b0145_data[i2 + b_Seq->size[0] * i1] =
                Seq->contents->data[((int)bsb->contents->data[i2] +
                                     Seq->contents->size[0] * (i + i1)) -
                                    1];
          }
        }
        c_bsxfun(at, b_Seq, varargin_2);
        varargin_2_data = varargin_2->data;
        i = yhatnlseaso->size[0];
        yhatnlseaso->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(yhatnlseaso, i);
        yhatnlseaso_data = yhatnlseaso->data;
        loop_ub = bsb->contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          yhatnlseaso_data[i] =
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
        tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] * i] =
                b_b0145_data[i2 + result * i];
          }
        }
        for (i = 0; i < b_input_sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] *
                                             (i + input_sizes_idx_1)] =
                varargin_2_data[i2 + result * i];
          }
        }
        for (i = 0; i < sizes_idx_1; i++) {
          for (i2 = 0; i2 < result; i2++) {
            tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] * i1] =
                yhatnlseaso_data[i2];
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
        b_b0145_data = varargin_1->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
               b_input_sizes_idx_1++) {
            b_b0145_data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
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
        b0145_data = b_Seq->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          input_sizes_idx_1 = bsb->contents->size[0];
          for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
            b0145_data[i2 + b_Seq->size[0] * i1] =
                Seq->contents->data[((int)bsb->contents->data[i2] +
                                     Seq->contents->size[0] * (i + i1)) -
                                    1];
          }
        }
        c_bsxfun(at, b_Seq, varargin_2);
        varargin_2_data = varargin_2->data;
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
        tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          for (i1 = 0; i1 < result; i1++) {
            tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] * i] =
                b_b0145_data[i1 + result * i];
          }
        }
        for (i = 0; i < sizes_idx_1; i++) {
          for (i1 = 0; i1 < result; i1++) {
            tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] *
                                             (i + input_sizes_idx_1)] =
                varargin_2_data[i1 + result * i];
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
      b_b0145_data = varargin_1->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          b_b0145_data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
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
      varargin_2_data = varargin_2->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          varargin_2_data[b_input_sizes_idx_1 + varargin_2->size[0] * i2] =
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
      b0145_data = b_Seq->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
          b0145_data[i2 + b_Seq->size[0] * i1] =
              Seq->contents->data[((int)bsb->contents->data[i2] +
                                   Seq->contents->size[0] * (i + i1)) -
                                  1];
        }
      }
      c_bsxfun(at, b_Seq, r2);
      r4 = r2->data;
      i = varargin_3->size[0] * varargin_3->size[1];
      varargin_3->size[0] = r2->size[0];
      varargin_3->size[1] = r2->size[1];
      emxEnsureCapacity_real_T(varargin_3, i);
      b0145_data = varargin_3->data;
      loop_ub = r2->size[0] * r2->size[1];
      for (i = 0; i < loop_ub; i++) {
        b0145_data[i] = r4[i];
      }
      i = yhatnlseaso->size[0];
      yhatnlseaso->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(yhatnlseaso, i);
      yhatnlseaso_data = yhatnlseaso->data;
      loop_ub = bsb->contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatnlseaso_data[i] =
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
      tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] * i] =
              b_b0145_data[i2 + result * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] *
                                           (i + input_sizes_idx_1)] =
              varargin_2_data[i2 + result * i];
        }
      }
      loop_ub = c_input_sizes_idx_1;
      for (i = 0; i < loop_ub; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] *
                                           ((i + input_sizes_idx_1) +
                                            b_input_sizes_idx_1)] =
              b0145_data[i2 + result * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i2 = 0; i2 < result; i2++) {
          tr_expl_nls_lshift_data[i2 + tr_expl_nls_lshift->size[0] * i1] =
              yhatnlseaso_data[i2];
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
      b_b0145_data = varargin_1->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          b_b0145_data[b_input_sizes_idx_1 + varargin_1->size[0] * i2] =
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
      varargin_2_data = varargin_2->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < input_sizes_idx_1;
             b_input_sizes_idx_1++) {
          varargin_2_data[b_input_sizes_idx_1 + varargin_2->size[0] * i2] =
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
      b0145_data = b_Seq->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
          b0145_data[i2 + b_Seq->size[0] * i1] =
              Seq->contents->data[((int)bsb->contents->data[i2] +
                                   Seq->contents->size[0] * (i + i1)) -
                                  1];
        }
      }
      c_bsxfun(at, b_Seq, a);
      a_data = a->data;
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
      tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] * i] =
              b_b0145_data[i1 + result * i];
        }
      }
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] *
                                           (i + input_sizes_idx_1)] =
              varargin_2_data[i1 + result * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          tr_expl_nls_lshift_data[i1 + tr_expl_nls_lshift->size[0] *
                                           ((i + input_sizes_idx_1) +
                                            b_input_sizes_idx_1)] =
              a_data[i1 + result * i];
        }
      }
    }
    /*  b0145 = coefficients of intercept trend + expl var + non */
    /*  linear part of seasonal component + level shift */
    i = r->size[0];
    r->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(r, i);
    r4 = r->data;
    loop_ub = bsb->contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
    }
    if (r->size[0] == at->size[0]) {
      loop_ub = r->size[0];
      for (i = 0; i < loop_ub; i++) {
        r4[i] -= at_data[i];
      }
      mldivide(tr_expl_nls_lshift, r, b0145);
      b_b0145_data = b0145->data;
    } else {
      sd_binary_expand_op(b0145, tr_expl_nls_lshift, r, at);
      b_b0145_data = b0145->data;
    }
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
    yhatnlseaso_data = yhatnlseaso->data;
    loop_ub = bsb->contents->size[0];
    for (result = 0; result < loop_ub; result++) {
      yhatnlseaso_data[result] =
          Seq->contents->data[(int)bsb->contents->data[result] - 1];
    }
    result = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    loop_ub = i1 - i;
    a->size[1] = loop_ub;
    emxEnsureCapacity_real_T(a, result);
    a_data = a->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      input_sizes_idx_1 = bsb->contents->size[0];
      for (result = 0; result < input_sizes_idx_1; result++) {
        a_data[result + a->size[0] * i1] =
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
    b0145_data = b_b0145->data;
    for (i = 0; i < loop_ub; i++) {
      b0145_data[i] = b_b0145_data[i2 + i];
    }
    mtimes(a, b_b0145, r);
    r4 = r->data;
    if (yhatnlseaso->size[0] == r->size[0]) {
      loop_ub = yhatnlseaso->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatnlseaso_data[i] += r4[i];
      }
    } else {
      plus(yhatnlseaso, r);
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
        r4 = r->data;
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xtrend->contents->size[1];
        i = a->size[0] * a->size[1];
        a->size[0] = bsb->contents->size[0];
        a->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(a, i);
        a_data = a->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            a_data[i1 + a->size[0] * i] =
                Xtrend->contents->data[((int)bsb->contents->data[i1] +
                                        Xtrend->contents->size[0] * i) -
                                       1];
          }
        }
        i = b_a->size[0];
        b_a->size[0] = bsb->contents->size[0];
        emxEnsureCapacity_real_T(b_a, i);
        a_data = b_a->data;
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          a_data[i] = Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xseaso->contents->size[1];
        i = b_Seq->size[0] * b_Seq->size[1];
        b_Seq->size[0] = bsb->contents->size[0];
        b_Seq->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(b_Seq, i);
        b0145_data = b_Seq->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            b0145_data[i1 + b_Seq->size[0] * i] =
                Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                        Xseaso->contents->size[0] * i) -
                                       1];
          }
        }
        c_bsxfun(yhatnlseaso, b_Seq, r2);
        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(b_b0145, i);
        b0145_data = b_b0145->data;
        for (i = 0; i < loop_ub; i++) {
          b0145_data[i] = b_b0145_data[i];
        }
        mtimes(a, b_b0145, at);
        at_data = at->data;
        if (r->size[0] == 1) {
          i = at->size[0];
        } else {
          i = r->size[0];
        }
        if ((r->size[0] == at->size[0]) && (i == b_a->size[0])) {
          loop_ub = r->size[0];
          for (i = 0; i < loop_ub; i++) {
            r4[i] = (r4[i] - at_data[i]) -
                    a_data[i] * b_b0145_data[b0145->size[0] - 1];
          }
          mldivide(r2, r, yhatnlseaso);
          yhatnlseaso_data = yhatnlseaso->data;
        } else {
          rd_binary_expand_op(yhatnlseaso, r2, r, at, b_a, b0145);
          yhatnlseaso_data = yhatnlseaso->data;
        }
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
        r4 = r->data;
        input_sizes_idx_1 = bsb->contents->size[0];
        for (i = 0; i < input_sizes_idx_1; i++) {
          r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
        }
        input_sizes_idx_1 = Xtrend->contents->size[1];
        i = a->size[0] * a->size[1];
        a->size[0] = bsb->contents->size[0];
        a->size[1] = input_sizes_idx_1;
        emxEnsureCapacity_real_T(a, i);
        a_data = a->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            a_data[i1 + a->size[0] * i] =
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
        b0145_data = b_Seq->data;
        for (i = 0; i < input_sizes_idx_1; i++) {
          result = bsb->contents->size[0];
          for (i1 = 0; i1 < result; i1++) {
            b0145_data[i1 + b_Seq->size[0] * i] =
                Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                        Xseaso->contents->size[0] * i) -
                                       1];
          }
        }
        c_bsxfun(yhatnlseaso, b_Seq, r2);
        i = b_b0145->size[0] * b_b0145->size[1];
        b_b0145->size[0] = 1;
        b_b0145->size[1] = loop_ub;
        emxEnsureCapacity_real_T(b_b0145, i);
        b0145_data = b_b0145->data;
        for (i = 0; i < loop_ub; i++) {
          b0145_data[i] = b_b0145_data[i];
        }
        mtimes(a, b_b0145, at);
        at_data = at->data;
        if (r->size[0] == at->size[0]) {
          loop_ub = r->size[0];
          for (i = 0; i < loop_ub; i++) {
            r4[i] -= at_data[i];
          }
          mldivide(r2, r, yhatnlseaso);
          yhatnlseaso_data = yhatnlseaso->data;
        } else {
          sd_binary_expand_op(yhatnlseaso, r2, r, at);
          yhatnlseaso_data = yhatnlseaso->data;
        }
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
      r4 = r->data;
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
      }
      input_sizes_idx_1 = Xtrend->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(a, i);
      a_data = a->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        result = bsb->contents->size[0];
        for (i1 = 0; i1 < result; i1++) {
          a_data[i1 + a->size[0] * i] =
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
      tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          tr_expl_nls_lshift_data[b_input_sizes_idx_1 +
                                  tr_expl_nls_lshift->size[0] * i2] =
              X->contents->data[((int)bsb->contents->data[b_input_sizes_idx_1] +
                                 X->contents->size[0] * i2) -
                                1];
        }
      }
      i2 = b_a->size[0];
      b_a->size[0] = bsb->contents->size[0];
      emxEnsureCapacity_real_T(b_a, i2);
      a_data = b_a->data;
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        a_data[i2] = Xlshift->contents->data[(int)bsb->contents->data[i2] - 1];
      }
      input_sizes_idx_1 = Xseaso->contents->size[1];
      i2 = b_Seq->size[0] * b_Seq->size[1];
      b_Seq->size[0] = bsb->contents->size[0];
      b_Seq->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(b_Seq, i2);
      b0145_data = b_Seq->data;
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          b0145_data[b_input_sizes_idx_1 + b_Seq->size[0] * i2] =
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
      b0145_data = b_b0145->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        b0145_data[i2] = b_b0145_data[i2];
      }
      mtimes(a, b_b0145, at);
      at_data = at->data;
      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      loop_ub = i1 - i;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_b0145, i2);
      b0145_data = b_b0145->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b0145_data[i1] = b_b0145_data[i + i1];
      }
      mtimes(tr_expl_nls_lshift, b_b0145, yhatnlseaso);
      yhatnlseaso_data = yhatnlseaso->data;
      if (r->size[0] == 1) {
        i = at->size[0];
      } else {
        i = r->size[0];
      }
      if (r->size[0] == 1) {
        i1 = at->size[0];
      } else {
        i1 = r->size[0];
      }
      if (i1 == 1) {
        i1 = yhatnlseaso->size[0];
      } else if (r->size[0] == 1) {
        i1 = at->size[0];
      } else {
        i1 = r->size[0];
      }
      if ((r->size[0] == at->size[0]) && (i == yhatnlseaso->size[0]) &&
          (i1 == b_a->size[0])) {
        loop_ub = r->size[0];
        for (i = 0; i < loop_ub; i++) {
          r4[i] = ((r4[i] - at_data[i]) - yhatnlseaso_data[i]) -
                  a_data[i] * b_b0145_data[b0145->size[0] - 1];
        }
        mldivide(r2, r, yhatnlseaso);
        yhatnlseaso_data = yhatnlseaso->data;
      } else {
        td_binary_expand_op(yhatnlseaso, r2, r, at, b_a, b0145);
        yhatnlseaso_data = yhatnlseaso->data;
      }
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
      r4 = r->data;
      input_sizes_idx_1 = bsb->contents->size[0];
      for (i = 0; i < input_sizes_idx_1; i++) {
        r4[i] = yin->contents->data[(int)bsb->contents->data[i] - 1];
      }
      input_sizes_idx_1 = Xtrend->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = input_sizes_idx_1;
      emxEnsureCapacity_real_T(a, i);
      a_data = a->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        result = bsb->contents->size[0];
        for (i1 = 0; i1 < result; i1++) {
          a_data[i1 + a->size[0] * i] =
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
      tr_expl_nls_lshift_data = tr_expl_nls_lshift->data;
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          tr_expl_nls_lshift_data[b_input_sizes_idx_1 +
                                  tr_expl_nls_lshift->size[0] * i2] =
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
      b0145_data = b_Seq->data;
      for (i2 = 0; i2 < input_sizes_idx_1; i2++) {
        result = bsb->contents->size[0];
        for (b_input_sizes_idx_1 = 0; b_input_sizes_idx_1 < result;
             b_input_sizes_idx_1++) {
          b0145_data[b_input_sizes_idx_1 + b_Seq->size[0] * i2] =
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
      b0145_data = b_b0145->data;
      for (i2 = 0; i2 < loop_ub; i2++) {
        b0145_data[i2] = b_b0145_data[i2];
      }
      mtimes(a, b_b0145, at);
      at_data = at->data;
      i2 = b_b0145->size[0] * b_b0145->size[1];
      b_b0145->size[0] = 1;
      loop_ub = i1 - i;
      b_b0145->size[1] = loop_ub;
      emxEnsureCapacity_real_T(b_b0145, i2);
      b0145_data = b_b0145->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b0145_data[i1] = b_b0145_data[i + i1];
      }
      mtimes(tr_expl_nls_lshift, b_b0145, yhatnlseaso);
      yhatnlseaso_data = yhatnlseaso->data;
      if (r->size[0] == 1) {
        i = at->size[0];
      } else {
        i = r->size[0];
      }
      if ((r->size[0] == at->size[0]) && (i == yhatnlseaso->size[0])) {
        loop_ub = r->size[0];
        for (i = 0; i < loop_ub; i++) {
          r4[i] = (r4[i] - at_data[i]) - yhatnlseaso_data[i];
        }
        mldivide(r2, r, yhatnlseaso);
        yhatnlseaso_data = yhatnlseaso->data;
      } else {
        ud_binary_expand_op(yhatnlseaso, r2, r, at);
        yhatnlseaso_data = yhatnlseaso->data;
      }
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = indlinsc->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    r5 = r1->data;
    loop_ub = indlinsc->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r5[i] = (int)indlinsc->contents->data[i];
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta_data[r5[i] - 1] = yhatnlseaso_data[i];
    }
    i = r1->size[0] * r1->size[1];
    r1->size[0] = 1;
    r1->size[1] = otherind->contents->size[1];
    emxEnsureCapacity_int32_T(r1, i);
    r5 = r1->data;
    loop_ub = otherind->contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      r5[i] = (int)otherind->contents->data[i];
    }
    loop_ub = r1->size[1];
    for (i = 0; i < loop_ub; i++) {
      newbeta_data[r5[i] - 1] = b_b0145_data[i];
    }
    /*  betadiff is linked to the tolerance (specified in reftol) */
    if (oldbeta->size[0] == newbeta->size[0]) {
      loop_ub = oldbeta->size[0];
      for (i = 0; i < loop_ub; i++) {
        oldbeta_data[i] -= newbeta_data[i];
      }
    } else {
      c_minus(oldbeta, newbeta);
      oldbeta_data = oldbeta->data;
    }
    if (oldbeta->size[0] == 0) {
      betadiff = 0.0;
    } else {
      betadiff = 0.0;
      i = oldbeta->size[0];
      for (result = 0; result < i; result++) {
        betadiff += fabs(oldbeta_data[result]);
      }
    }
    if (newbeta->size[0] == 0) {
      y = 0.0;
    } else {
      y = 0.0;
      i = newbeta->size[0];
      for (result = 0; result < i; result++) {
        y += fabs(newbeta_data[result]);
      }
    }
    betadiff /= y;
    i = oldbeta->size[0];
    oldbeta->size[0] = newbeta->size[0];
    emxEnsureCapacity_real_T(oldbeta, i);
    oldbeta_data = oldbeta->data;
    loop_ub = newbeta->size[0];
    /*  exit from the loop if the new beta has singular values. In */
    /*  such a case, any intermediate estimate is not reliable and we */
    /*  can just keep the initialbeta and initial scale. */
    i = r3->size[0];
    r3->size[0] = newbeta->size[0];
    emxEnsureCapacity_boolean_T(r3, i);
    r6 = r3->data;
    for (i = 0; i < loop_ub; i++) {
      oldbeta_data[i] = newbeta_data[i];
      r6[i] = rtIsNaN(newbeta_data[i]);
    }
    if (b_any(r3)) {
      i = newbeta->size[0];
      newbeta->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(newbeta, i);
      newbeta_data = newbeta->data;
      loop_ub = beta0->size[0];
      for (i = 0; i < loop_ub; i++) {
        newbeta_data[i] = beta0_data[i];
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

static void be_binary_expand_op(c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX)
{
  emxArray_real_T *b_yhatX;
  const double *yhatX_data;
  double *b_yhatX_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  yhatX_data = yhatX->data;
  emxInit_real_T(&b_yhatX, 1);
  i = b_yhatX->size[0];
  if (yhatseaso->contents->size[0] == 1) {
    b_yhatX->size[0] = yhatX->size[0];
  } else {
    b_yhatX->size[0] = yhatseaso->contents->size[0];
  }
  emxEnsureCapacity_real_T(b_yhatX, i);
  b_yhatX_data = b_yhatX->data;
  stride_0_0 = (yhatX->size[0] != 1);
  stride_1_0 = (yhatseaso->contents->size[0] != 1);
  if (yhatseaso->contents->size[0] == 1) {
    loop_ub = yhatX->size[0];
  } else {
    loop_ub = yhatseaso->contents->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_yhatX_data[i] = (yhatX_data[i * stride_0_0] + 1.0) *
                      yhatseaso->contents->data[i * stride_1_0];
  }
  i = yhatseaso->contents->size[0];
  yhatseaso->contents->size[0] = b_yhatX->size[0];
  emxEnsureCapacity_real_T(yhatseaso->contents, i);
  loop_ub = b_yhatX->size[0];
  for (i = 0; i < loop_ub; i++) {
    yhatseaso->contents->data[i] = b_yhatX_data[i];
  }
  emxFree_real_T(&b_yhatX);
}

static void c_plus(emxArray_real_T *yhatnlseaso, const emxArray_real_T *Seqbsb)
{
  emxArray_real_T *b_Seqbsb;
  const double *Seqbsb_data;
  double *b_Seqbsb_data;
  double *yhatnlseaso_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  Seqbsb_data = Seqbsb->data;
  yhatnlseaso_data = yhatnlseaso->data;
  emxInit_real_T(&b_Seqbsb, 1);
  i = b_Seqbsb->size[0];
  if (yhatnlseaso->size[0] == 1) {
    b_Seqbsb->size[0] = Seqbsb->size[0];
  } else {
    b_Seqbsb->size[0] = yhatnlseaso->size[0];
  }
  emxEnsureCapacity_real_T(b_Seqbsb, i);
  b_Seqbsb_data = b_Seqbsb->data;
  stride_0_0 = (Seqbsb->size[0] != 1);
  stride_1_0 = (yhatnlseaso->size[0] != 1);
  if (yhatnlseaso->size[0] == 1) {
    loop_ub = Seqbsb->size[0];
  } else {
    loop_ub = yhatnlseaso->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_Seqbsb_data[i] =
        Seqbsb_data[i * stride_0_0] + yhatnlseaso_data[i * stride_1_0];
  }
  i = yhatnlseaso->size[0];
  yhatnlseaso->size[0] = b_Seqbsb->size[0];
  emxEnsureCapacity_real_T(yhatnlseaso, i);
  yhatnlseaso_data = yhatnlseaso->data;
  loop_ub = b_Seqbsb->size[0];
  for (i = 0; i < loop_ub; i++) {
    yhatnlseaso_data[i] = b_Seqbsb_data[i];
  }
  emxFree_real_T(&b_Seqbsb);
}

static double corfactorRAW(double n, double alpha)
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

static void de_binary_expand_op(emxArray_real_T *newb,
                                const c_captured_var *beta,
                                const c_struct_T *outIRWLS)
{
  double *newb_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  i = newb->size[0];
  if (outIRWLS->betarw->size[0] == 1) {
    newb->size[0] = beta->contents->size[0];
  } else {
    newb->size[0] = outIRWLS->betarw->size[0];
  }
  emxEnsureCapacity_real_T(newb, i);
  newb_data = newb->data;
  stride_0_0 = (beta->contents->size[0] != 1);
  stride_1_0 = (outIRWLS->betarw->size[0] != 1);
  if (outIRWLS->betarw->size[0] == 1) {
    loop_ub = beta->contents->size[0];
  } else {
    loop_ub = outIRWLS->betarw->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    newb_data[i] = beta->contents->data[i * stride_0_0] -
                   outIRWLS->betarw->data[i * stride_1_0];
  }
}

static void fe_binary_expand_op(emxArray_real_T *objyhat,
                                const c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX,
                                const emxArray_real_T *beta0, double npar,
                                const c_captured_var *Xlshiftf)
{
  emxArray_real_T *b_objyhat;
  const double *beta0_data;
  const double *yhatX_data;
  double b_beta0;
  double *b_objyhat_data;
  double *objyhat_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  beta0_data = beta0->data;
  yhatX_data = yhatX->data;
  objyhat_data = objyhat->data;
  emxInit_real_T(&b_objyhat, 1);
  b_beta0 = beta0_data[(int)(npar + 1.0) - 1];
  i = b_objyhat->size[0];
  if (Xlshiftf->contents->size[0] == 1) {
    if (yhatX->size[0] == 1) {
      if (yhatseaso->contents->size[0] == 1) {
        b_objyhat->size[0] = objyhat->size[0];
      } else {
        b_objyhat->size[0] = yhatseaso->contents->size[0];
      }
    } else {
      b_objyhat->size[0] = yhatX->size[0];
    }
  } else {
    b_objyhat->size[0] = Xlshiftf->contents->size[0];
  }
  emxEnsureCapacity_real_T(b_objyhat, i);
  b_objyhat_data = b_objyhat->data;
  stride_0_0 = (objyhat->size[0] != 1);
  stride_1_0 = (yhatseaso->contents->size[0] != 1);
  stride_2_0 = (yhatX->size[0] != 1);
  stride_3_0 = (Xlshiftf->contents->size[0] != 1);
  if (Xlshiftf->contents->size[0] == 1) {
    if (yhatX->size[0] == 1) {
      if (yhatseaso->contents->size[0] == 1) {
        loop_ub = objyhat->size[0];
      } else {
        loop_ub = yhatseaso->contents->size[0];
      }
    } else {
      loop_ub = yhatX->size[0];
    }
  } else {
    loop_ub = Xlshiftf->contents->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_objyhat_data[i] = ((objyhat_data[i * stride_0_0] +
                          yhatseaso->contents->data[i * stride_1_0]) +
                         yhatX_data[i * stride_2_0]) +
                        b_beta0 * Xlshiftf->contents->data[i * stride_3_0];
  }
  i = objyhat->size[0];
  objyhat->size[0] = b_objyhat->size[0];
  emxEnsureCapacity_real_T(objyhat, i);
  objyhat_data = objyhat->data;
  loop_ub = b_objyhat->size[0];
  for (i = 0; i < loop_ub; i++) {
    objyhat_data[i] = b_objyhat_data[i];
  }
  emxFree_real_T(&b_objyhat);
}

static void ge_binary_expand_op(emxArray_real_T *objyhat,
                                const c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX)
{
  emxArray_real_T *b_objyhat;
  const double *yhatX_data;
  double *b_objyhat_data;
  double *objyhat_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  yhatX_data = yhatX->data;
  objyhat_data = objyhat->data;
  emxInit_real_T(&b_objyhat, 1);
  i = b_objyhat->size[0];
  if (yhatX->size[0] == 1) {
    if (yhatseaso->contents->size[0] == 1) {
      b_objyhat->size[0] = objyhat->size[0];
    } else {
      b_objyhat->size[0] = yhatseaso->contents->size[0];
    }
  } else {
    b_objyhat->size[0] = yhatX->size[0];
  }
  emxEnsureCapacity_real_T(b_objyhat, i);
  b_objyhat_data = b_objyhat->data;
  stride_0_0 = (objyhat->size[0] != 1);
  stride_1_0 = (yhatseaso->contents->size[0] != 1);
  stride_2_0 = (yhatX->size[0] != 1);
  if (yhatX->size[0] == 1) {
    if (yhatseaso->contents->size[0] == 1) {
      loop_ub = objyhat->size[0];
    } else {
      loop_ub = yhatseaso->contents->size[0];
    }
  } else {
    loop_ub = yhatX->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_objyhat_data[i] = (objyhat_data[i * stride_0_0] +
                         yhatseaso->contents->data[i * stride_1_0]) +
                        yhatX_data[i * stride_2_0];
  }
  i = objyhat->size[0];
  objyhat->size[0] = b_objyhat->size[0];
  emxEnsureCapacity_real_T(objyhat, i);
  objyhat_data = objyhat->data;
  loop_ub = b_objyhat->size[0];
  for (i = 0; i < loop_ub; i++) {
    objyhat_data[i] = b_objyhat_data[i];
  }
  emxFree_real_T(&b_objyhat);
}

static void kd_binary_expand_op(emxArray_boolean_T *weightsst,
                                const emxArray_real_T *y, double factor)
{
  emxArray_boolean_T *b_weightsst;
  const double *y_data;
  double d;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *b_weightsst_data;
  bool *weightsst_data;
  y_data = y->data;
  weightsst_data = weightsst->data;
  emxInit_boolean_T(&b_weightsst, 1);
  d = 2.58 * factor;
  i = b_weightsst->size[0];
  if (y->size[0] == 1) {
    b_weightsst->size[0] = weightsst->size[0];
  } else {
    b_weightsst->size[0] = y->size[0];
  }
  emxEnsureCapacity_boolean_T(b_weightsst, i);
  b_weightsst_data = b_weightsst->data;
  stride_0_0 = (weightsst->size[0] != 1);
  stride_1_0 = (y->size[0] != 1);
  if (y->size[0] == 1) {
    loop_ub = weightsst->size[0];
  } else {
    loop_ub = y->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_weightsst_data[i] =
        (weightsst_data[i * stride_0_0] || (y_data[i * stride_1_0] < d));
  }
  i = weightsst->size[0];
  weightsst->size[0] = b_weightsst->size[0];
  emxEnsureCapacity_boolean_T(weightsst, i);
  weightsst_data = weightsst->data;
  loop_ub = b_weightsst->size[0];
  for (i = 0; i < loop_ub; i++) {
    weightsst_data[i] = b_weightsst_data[i];
  }
  emxFree_boolean_T(&b_weightsst);
}

static void ld_binary_expand_op(emxArray_real_T *beta0,
                                const c_captured_var *yin,
                                const emxArray_real_T *yhatrob, double x)
{
  const double *yhatrob_data;
  double *beta0_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  yhatrob_data = yhatrob->data;
  i = beta0->size[0];
  if (yhatrob->size[0] == 1) {
    beta0->size[0] = yin->contents->size[0];
  } else {
    beta0->size[0] = yhatrob->size[0];
  }
  emxEnsureCapacity_real_T(beta0, i);
  beta0_data = beta0->data;
  stride_0_0 = (yin->contents->size[0] != 1);
  stride_1_0 = (yhatrob->size[0] != 1);
  if (yhatrob->size[0] == 1) {
    loop_ub = yin->contents->size[0];
  } else {
    loop_ub = yhatrob->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    beta0_data[i] =
        (yin->contents->data[i * stride_0_0] - yhatrob_data[i * stride_1_0]) /
        x;
  }
}

static void lik(const c_captured_var *Xtrend, const c_captured_var *bsb,
                const captured_var *trend, const captured_var *seasonal,
                const captured_var *s, c_captured_var *yhatseaso,
                const c_captured_var *Xseaso, const captured_var *varampl,
                const c_captured_var *Seq, const captured_var *nexpl,
                const b_captured_var *isemptyX, const c_captured_var *X,
                const captured_var *lshiftYN, const c_captured_var *Xlshift,
                c_captured_var *yhat, const emxArray_real_T *beta0)
{
  emxArray_real_T *B;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *yhatX;
  emxArray_real_T *yhattrend;
  emxArray_uint32_T *r;
  const double *beta0_data;
  double d;
  double npar;
  double *B_data;
  double *a_data;
  double *yhatX_data;
  double *yhattrend_data;
  int aoffset;
  int b_i;
  int i;
  int i1;
  int inner;
  int k;
  int loop_ub;
  unsigned int *r1;
  beta0_data = beta0->data;
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
  a_data = a->data;
  for (i = 0; i < aoffset; i++) {
    loop_ub = bsb->contents->size[0];
    for (b_i = 0; b_i < loop_ub; b_i++) {
      a_data[b_i + a->size[0] * i] =
          Xtrend->contents->data[((int)bsb->contents->data[b_i] +
                                  Xtrend->contents->size[0] * i) -
                                 1];
    }
  }
  emxInit_real_T(&yhattrend, 1);
  loop_ub = a->size[0] - 1;
  inner = a->size[1];
  i = yhattrend->size[0];
  yhattrend->size[0] = a->size[0];
  emxEnsureCapacity_real_T(yhattrend, i);
  yhattrend_data = yhattrend->data;
  for (b_i = 0; b_i <= loop_ub; b_i++) {
    yhattrend_data[b_i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * a->size[0];
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      yhattrend_data[b_i] += a_data[aoffset + b_i] * beta0_data[k];
    }
  }
  npar = trend->contents + 1.0;
  emxInit_real_T(&yhatX, 1);
  if (seasonal->contents > 0.0) {
    if (seasonal->contents < s->contents / 2.0) {
      emxInit_uint32_T(&r, 2);
      d = seasonal->contents * 2.0;
      i = r->size[0] * r->size[1];
      r->size[0] = 1;
      aoffset = (int)floor(d - 1.0);
      r->size[1] = aoffset + 1;
      emxEnsureCapacity_uint32_T(r, i);
      r1 = r->data;
      for (i = 0; i <= aoffset; i++) {
        r1[i] = (unsigned int)(npar + ((double)i + 1.0));
      }
      aoffset = Xseaso->contents->size[1];
      i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = aoffset;
      emxEnsureCapacity_real_T(a, i);
      a_data = a->data;
      for (i = 0; i < aoffset; i++) {
        loop_ub = bsb->contents->size[0];
        for (b_i = 0; b_i < loop_ub; b_i++) {
          a_data[b_i + a->size[0] * i] =
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
      B_data = B->data;
      aoffset = r->size[1];
      for (i = 0; i < aoffset; i++) {
        B_data[i] = beta0_data[(int)r1[i] - 1];
      }
      emxFree_uint32_T(&r);
      loop_ub = a->size[0] - 1;
      inner = a->size[1];
      i = yhatX->size[0];
      yhatX->size[0] = a->size[0];
      emxEnsureCapacity_real_T(yhatX, i);
      yhatX_data = yhatX->data;
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        yhatX_data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * a->size[0];
        for (b_i = 0; b_i <= loop_ub; b_i++) {
          yhatX_data[b_i] += a_data[aoffset + b_i] * B_data[k];
        }
      }
      emxFree_real_T(&B);
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = yhatX->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = yhatX->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] = yhatX_data[i];
      }
      npar += d;
    } else {
      if (npar + 1.0 > (npar + seasonal->contents * 2.0) - 1.0) {
        i = 1;
      } else {
        i = (int)(npar + 1.0);
      }
      aoffset = Xseaso->contents->size[1];
      b_i = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      a->size[1] = aoffset;
      emxEnsureCapacity_real_T(a, b_i);
      a_data = a->data;
      for (b_i = 0; b_i < aoffset; b_i++) {
        loop_ub = bsb->contents->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          a_data[i1 + a->size[0] * b_i] =
              Xseaso->contents->data[((int)bsb->contents->data[i1] +
                                      Xseaso->contents->size[0] * b_i) -
                                     1];
        }
      }
      loop_ub = a->size[0] - 1;
      inner = a->size[1];
      b_i = yhatX->size[0];
      yhatX->size[0] = a->size[0];
      emxEnsureCapacity_real_T(yhatX, b_i);
      yhatX_data = yhatX->data;
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        yhatX_data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * a->size[0];
        for (b_i = 0; b_i <= loop_ub; b_i++) {
          yhatX_data[b_i] += a_data[aoffset + b_i] * beta0_data[(i + k) - 1];
        }
      }
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = yhatX->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = yhatX->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] = yhatX_data[i];
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
      inner = a->size[0] * a->size[1];
      a->size[0] = bsb->contents->size[0];
      aoffset = b_i - i;
      a->size[1] = aoffset;
      emxEnsureCapacity_real_T(a, inner);
      a_data = a->data;
      for (b_i = 0; b_i < aoffset; b_i++) {
        loop_ub = bsb->contents->size[0];
        for (inner = 0; inner < loop_ub; inner++) {
          a_data[inner + a->size[0] * b_i] =
              Seq->contents->data[((int)bsb->contents->data[inner] +
                                   Seq->contents->size[0] * (i + b_i)) -
                                  1];
        }
      }
      loop_ub = a->size[0] - 1;
      inner = a->size[1];
      i = yhatX->size[0];
      yhatX->size[0] = a->size[0];
      emxEnsureCapacity_real_T(yhatX, i);
      yhatX_data = yhatX->data;
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        yhatX_data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * a->size[0];
        for (b_i = 0; b_i <= loop_ub; b_i++) {
          yhatX_data[b_i] += a_data[aoffset + b_i] * beta0_data[(i1 + k) - 1];
        }
      }
      if (yhatX->size[0] == yhatseaso->contents->size[0]) {
        i = yhatseaso->contents->size[0];
        yhatseaso->contents->size[0] = yhatX->size[0];
        emxEnsureCapacity_real_T(yhatseaso->contents, i);
        aoffset = yhatX->size[0];
        for (i = 0; i < aoffset; i++) {
          yhatseaso->contents->data[i] *= yhatX_data[i] + 1.0;
        }
      } else {
        be_binary_expand_op(yhatseaso, yhatX);
      }
      npar += varampl->contents;
    }
  }
  if (isemptyX->contents) {
    i = yhatX->size[0];
    yhatX->size[0] = 1;
    emxEnsureCapacity_real_T(yhatX, i);
    yhatX_data = yhatX->data;
    yhatX_data[0] = 0.0;
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
    b_i = a->size[0] * a->size[1];
    a->size[0] = bsb->contents->size[0];
    a->size[1] = aoffset;
    emxEnsureCapacity_real_T(a, b_i);
    a_data = a->data;
    for (b_i = 0; b_i < aoffset; b_i++) {
      loop_ub = bsb->contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        a_data[i1 + a->size[0] * b_i] =
            X->contents->data[((int)bsb->contents->data[i1] +
                               X->contents->size[0] * b_i) -
                              1];
      }
    }
    loop_ub = a->size[0] - 1;
    inner = a->size[1];
    b_i = yhatX->size[0];
    yhatX->size[0] = a->size[0];
    emxEnsureCapacity_real_T(yhatX, b_i);
    yhatX_data = yhatX->data;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      yhatX_data[b_i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * a->size[0];
      for (b_i = 0; b_i <= loop_ub; b_i++) {
        yhatX_data[b_i] += a_data[aoffset + b_i] * beta0_data[(i + k) - 1];
      }
    }
    npar += nexpl->contents;
  }
  emxFree_real_T(&a);
  if (lshiftYN->contents == 1.0) {
    emxInit_real_T(&b, 1);
    /*   \beta_(npar+1)* I(t \geq \beta_(npar+2)) where beta_(npar+1) */
    /*   is a real number and \beta_(npar+2) is a integer which */
    /*   denotes the period in which level shift shows up */
    i = b->size[0];
    b->size[0] = bsb->contents->size[0];
    emxEnsureCapacity_real_T(b, i);
    a_data = b->data;
    aoffset = bsb->contents->size[0];
    for (i = 0; i < aoffset; i++) {
      a_data[i] = Xlshift->contents->data[(int)bsb->contents->data[i] - 1];
    }
    /*  Fitted values from trend (yhattrend), (time varying) seasonal */
    /*  (yhatseaso), explanatory variables (yhatX) and level shift */
    /*  component (yhatlshift) */
    if (yhattrend->size[0] == 1) {
      aoffset = yhatseaso->contents->size[0];
    } else {
      aoffset = yhattrend->size[0];
    }
    if (yhattrend->size[0] == 1) {
      loop_ub = yhatseaso->contents->size[0];
    } else {
      loop_ub = yhattrend->size[0];
    }
    if (loop_ub == 1) {
      loop_ub = yhatX->size[0];
    } else if (yhattrend->size[0] == 1) {
      loop_ub = yhatseaso->contents->size[0];
    } else {
      loop_ub = yhattrend->size[0];
    }
    if ((yhattrend->size[0] == yhatseaso->contents->size[0]) &&
        (aoffset == yhatX->size[0]) && (loop_ub == b->size[0])) {
      i = yhat->contents->size[0];
      yhat->contents->size[0] = yhattrend->size[0];
      emxEnsureCapacity_real_T(yhat->contents, i);
      aoffset = yhattrend->size[0];
      for (i = 0; i < aoffset; i++) {
        yhat->contents->data[i] =
            ((yhattrend_data[i] + yhatseaso->contents->data[i]) +
             yhatX_data[i]) +
            beta0_data[(int)(npar + 1.0) - 1] * a_data[i];
      }
    } else {
      yd_binary_expand_op(yhat, yhattrend, yhatseaso, yhatX, beta0, npar, b);
    }
    emxFree_real_T(&b);
  } else {
    if (yhattrend->size[0] == 1) {
      aoffset = yhatseaso->contents->size[0];
    } else {
      aoffset = yhattrend->size[0];
    }
    if ((yhattrend->size[0] == yhatseaso->contents->size[0]) &&
        (aoffset == yhatX->size[0])) {
      i = yhat->contents->size[0];
      yhat->contents->size[0] = yhattrend->size[0];
      emxEnsureCapacity_real_T(yhat->contents, i);
      aoffset = yhattrend->size[0];
      for (i = 0; i < aoffset; i++) {
        yhat->contents->data[i] =
            (yhattrend_data[i] + yhatseaso->contents->data[i]) + yhatX_data[i];
      }
    } else {
      ae_binary_expand_op(yhat, yhattrend, yhatseaso, yhatX);
    }
  }
  emxFree_real_T(&yhatX);
  emxFree_real_T(&yhattrend);
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

static void nd_binary_expand_op(emxArray_real_T *beta0,
                                const c_captured_var *yin,
                                const c_captured_var *bsb,
                                const c_captured_var *yhat, double sh0,
                                double varargin_10_huberc)
{
  emxArray_real_T *b_yin;
  double *yin_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  emxInit_real_T(&b_yin, 1);
  i = b_yin->size[0];
  if (yhat->contents->size[0] == 1) {
    b_yin->size[0] = bsb->contents->size[0];
  } else {
    b_yin->size[0] = yhat->contents->size[0];
  }
  emxEnsureCapacity_real_T(b_yin, i);
  yin_data = b_yin->data;
  stride_0_0 = (bsb->contents->size[0] != 1);
  stride_1_0 = (yhat->contents->size[0] != 1);
  if (yhat->contents->size[0] == 1) {
    loop_ub = bsb->contents->size[0];
  } else {
    loop_ub = yhat->contents->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    yin_data[i] =
        (yin->contents->data[(int)bsb->contents->data[i * stride_0_0] - 1] -
         yhat->contents->data[i * stride_1_0]) /
        sh0;
  }
  HUrho(b_yin, varargin_10_huberc, beta0);
  emxFree_real_T(&b_yin);
}

static void od_binary_expand_op(emxArray_real_T *beta0,
                                const d_captured_var *weights)
{
  emxArray_real_T *b_weights;
  double *beta0_data;
  double *weights_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  beta0_data = beta0->data;
  emxInit_real_T(&b_weights, 1);
  i = b_weights->size[0];
  if (beta0->size[0] == 1) {
    b_weights->size[0] = weights->contents->size[0];
  } else {
    b_weights->size[0] = beta0->size[0];
  }
  emxEnsureCapacity_real_T(b_weights, i);
  weights_data = b_weights->data;
  stride_0_0 = (weights->contents->size[0] != 1);
  stride_1_0 = (beta0->size[0] != 1);
  if (beta0->size[0] == 1) {
    loop_ub = weights->contents->size[0];
  } else {
    loop_ub = beta0->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    weights_data[i] = (double)weights->contents->data[i * stride_0_0] *
                      beta0_data[i * stride_1_0];
  }
  i = beta0->size[0];
  beta0->size[0] = b_weights->size[0];
  emxEnsureCapacity_real_T(beta0, i);
  beta0_data = beta0->data;
  loop_ub = b_weights->size[0];
  for (i = 0; i < loop_ub; i++) {
    beta0_data[i] = weights_data[i];
  }
  emxFree_real_T(&b_weights);
}

static void pd_binary_expand_op(struct_LTSts_T *out, const c_captured_var *yin,
                                const c_captured_var *yhat)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  i = out->residuals->size[0];
  if (yhat->contents->size[0] == 1) {
    out->residuals->size[0] = yin->contents->size[0];
  } else {
    out->residuals->size[0] = yhat->contents->size[0];
  }
  emxEnsureCapacity_real_T(out->residuals, i);
  stride_0_0 = (yin->contents->size[0] != 1);
  stride_1_0 = (yhat->contents->size[0] != 1);
  if (yhat->contents->size[0] == 1) {
    loop_ub = yin->contents->size[0];
  } else {
    loop_ub = yhat->contents->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = yin->contents->data[i * stride_0_0] -
                              yhat->contents->data[i * stride_1_0];
  }
}

static void
rd_binary_expand_op(emxArray_real_T *yhatnlseaso, const emxArray_real_T *r3,
                    const emxArray_real_T *r4, const emxArray_real_T *at,
                    const emxArray_real_T *a, const emxArray_real_T *b0145)
{
  emxArray_real_T *r1;
  const double *a_data;
  const double *at_data;
  const double *b0145_data;
  const double *r;
  double b_b0145;
  double *r2;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  b0145_data = b0145->data;
  a_data = a->data;
  at_data = at->data;
  r = r4->data;
  emxInit_real_T(&r1, 1);
  b_b0145 = b0145_data[b0145->size[0] - 1];
  i = r1->size[0];
  if (a->size[0] == 1) {
    if (at->size[0] == 1) {
      r1->size[0] = r4->size[0];
    } else {
      r1->size[0] = at->size[0];
    }
  } else {
    r1->size[0] = a->size[0];
  }
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (r4->size[0] != 1);
  stride_1_0 = (at->size[0] != 1);
  stride_2_0 = (a->size[0] != 1);
  if (a->size[0] == 1) {
    if (at->size[0] == 1) {
      loop_ub = r4->size[0];
    } else {
      loop_ub = at->size[0];
    }
  } else {
    loop_ub = a->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r2[i] = (r[i * stride_0_0] - at_data[i * stride_1_0]) -
            a_data[i * stride_2_0] * b_b0145;
  }
  mldivide(r3, r1, yhatnlseaso);
  emxFree_real_T(&r1);
}

static void sd_binary_expand_op(emxArray_real_T *yhatnlseaso,
                                const emxArray_real_T *r3,
                                const emxArray_real_T *r4,
                                const emxArray_real_T *at)
{
  emxArray_real_T *r1;
  const double *at_data;
  const double *r;
  double *r2;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  at_data = at->data;
  r = r4->data;
  emxInit_real_T(&r1, 1);
  i = r1->size[0];
  if (at->size[0] == 1) {
    r1->size[0] = r4->size[0];
  } else {
    r1->size[0] = at->size[0];
  }
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (r4->size[0] != 1);
  stride_1_0 = (at->size[0] != 1);
  if (at->size[0] == 1) {
    loop_ub = r4->size[0];
  } else {
    loop_ub = at->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r2[i] = r[i * stride_0_0] - at_data[i * stride_1_0];
  }
  mldivide(r3, r1, yhatnlseaso);
  emxFree_real_T(&r1);
}

static void
td_binary_expand_op(emxArray_real_T *yhatnlseaso, const emxArray_real_T *r3,
                    const emxArray_real_T *r4, const emxArray_real_T *at,
                    const emxArray_real_T *a, const emxArray_real_T *b0145)
{
  emxArray_real_T *r1;
  const double *a_data;
  const double *at_data;
  const double *b0145_data;
  const double *r;
  double b_b0145;
  double *r2;
  double *yhatnlseaso_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  b0145_data = b0145->data;
  a_data = a->data;
  at_data = at->data;
  r = r4->data;
  yhatnlseaso_data = yhatnlseaso->data;
  emxInit_real_T(&r1, 1);
  b_b0145 = b0145_data[b0145->size[0] - 1];
  i = r1->size[0];
  if (a->size[0] == 1) {
    if (yhatnlseaso->size[0] == 1) {
      if (at->size[0] == 1) {
        r1->size[0] = r4->size[0];
      } else {
        r1->size[0] = at->size[0];
      }
    } else {
      r1->size[0] = yhatnlseaso->size[0];
    }
  } else {
    r1->size[0] = a->size[0];
  }
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (r4->size[0] != 1);
  stride_1_0 = (at->size[0] != 1);
  stride_2_0 = (yhatnlseaso->size[0] != 1);
  stride_3_0 = (a->size[0] != 1);
  if (a->size[0] == 1) {
    if (yhatnlseaso->size[0] == 1) {
      if (at->size[0] == 1) {
        loop_ub = r4->size[0];
      } else {
        loop_ub = at->size[0];
      }
    } else {
      loop_ub = yhatnlseaso->size[0];
    }
  } else {
    loop_ub = a->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r2[i] = ((r[i * stride_0_0] - at_data[i * stride_1_0]) -
             yhatnlseaso_data[i * stride_2_0]) -
            a_data[i * stride_3_0] * b_b0145;
  }
  mldivide(r3, r1, yhatnlseaso);
  emxFree_real_T(&r1);
}

static void ud_binary_expand_op(emxArray_real_T *yhatnlseaso,
                                const emxArray_real_T *r3,
                                const emxArray_real_T *r4,
                                const emxArray_real_T *at)
{
  emxArray_real_T *r1;
  const double *at_data;
  const double *r;
  double *r2;
  double *yhatnlseaso_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  at_data = at->data;
  r = r4->data;
  yhatnlseaso_data = yhatnlseaso->data;
  emxInit_real_T(&r1, 1);
  i = r1->size[0];
  if (yhatnlseaso->size[0] == 1) {
    if (at->size[0] == 1) {
      r1->size[0] = r4->size[0];
    } else {
      r1->size[0] = at->size[0];
    }
  } else {
    r1->size[0] = yhatnlseaso->size[0];
  }
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  stride_0_0 = (r4->size[0] != 1);
  stride_1_0 = (at->size[0] != 1);
  stride_2_0 = (yhatnlseaso->size[0] != 1);
  if (yhatnlseaso->size[0] == 1) {
    if (at->size[0] == 1) {
      loop_ub = r4->size[0];
    } else {
      loop_ub = at->size[0];
    }
  } else {
    loop_ub = yhatnlseaso->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    r2[i] = (r[i * stride_0_0] - at_data[i * stride_1_0]) -
            yhatnlseaso_data[i * stride_2_0];
  }
  mldivide(r3, r1, yhatnlseaso);
  emxFree_real_T(&r1);
}

static void vd_binary_expand_op(emxArray_real_T *r1,
                                const emxArray_real_T *yhatnlseaso,
                                const emxArray_real_T *Xseasobsb,
                                const emxArray_real_T *yinbsb)
{
  emxArray_real_T *b_yhatnlseaso;
  emxArray_real_T *b_yinbsb;
  const double *Xseasobsb_data;
  const double *yhatnlseaso_data;
  const double *yinbsb_data;
  double *b_yhatnlseaso_data;
  double *r;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int yhatnlseaso_idx_0;
  yinbsb_data = yinbsb->data;
  Xseasobsb_data = Xseasobsb->data;
  yhatnlseaso_data = yhatnlseaso->data;
  r = r1->data;
  emxInit_real_T(&b_yhatnlseaso, 2);
  yhatnlseaso_idx_0 = yhatnlseaso->size[0];
  i = b_yhatnlseaso->size[0] * b_yhatnlseaso->size[1];
  if (Xseasobsb->size[0] == 1) {
    b_yhatnlseaso->size[0] = yhatnlseaso_idx_0;
  } else {
    b_yhatnlseaso->size[0] = Xseasobsb->size[0];
  }
  b_yhatnlseaso->size[1] = Xseasobsb->size[1];
  emxEnsureCapacity_real_T(b_yhatnlseaso, i);
  b_yhatnlseaso_data = b_yhatnlseaso->data;
  stride_0_0 = (yhatnlseaso_idx_0 != 1);
  stride_1_0 = (Xseasobsb->size[0] != 1);
  loop_ub = Xseasobsb->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (Xseasobsb->size[0] == 1) {
      b_loop_ub = yhatnlseaso_idx_0;
    } else {
      b_loop_ub = Xseasobsb->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_yhatnlseaso_data[i1 + b_yhatnlseaso->size[0] * i] =
          yhatnlseaso_data[i1 * stride_0_0] *
          Xseasobsb_data[i1 * stride_1_0 + Xseasobsb->size[0] * i];
    }
  }
  emxInit_real_T(&b_yinbsb, 1);
  i = b_yinbsb->size[0];
  if (r1->size[0] == 1) {
    b_yinbsb->size[0] = yinbsb->size[0];
  } else {
    b_yinbsb->size[0] = r1->size[0];
  }
  emxEnsureCapacity_real_T(b_yinbsb, i);
  b_yhatnlseaso_data = b_yinbsb->data;
  stride_0_0 = (yinbsb->size[0] != 1);
  stride_1_0 = (r1->size[0] != 1);
  if (r1->size[0] == 1) {
    loop_ub = yinbsb->size[0];
  } else {
    loop_ub = r1->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_yhatnlseaso_data[i] = yinbsb_data[i * stride_0_0] - r[i * stride_1_0];
  }
  mldivide(b_yhatnlseaso, b_yinbsb, r1);
  emxFree_real_T(&b_yinbsb);
  emxFree_real_T(&b_yhatnlseaso);
}

static void wd_binary_expand_op(emxArray_real_T *Xlshiftbsb,
                                const emxArray_real_T *XtrendXbsbXseasonXlshift,
                                const emxArray_real_T *yinbsb)
{
  emxArray_real_T *b_yinbsb;
  const double *yinbsb_data;
  double *Xlshiftbsb_data;
  double *b_yinbsb_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  yinbsb_data = yinbsb->data;
  Xlshiftbsb_data = Xlshiftbsb->data;
  emxInit_real_T(&b_yinbsb, 1);
  i = b_yinbsb->size[0];
  if (Xlshiftbsb->size[0] == 1) {
    b_yinbsb->size[0] = yinbsb->size[0];
  } else {
    b_yinbsb->size[0] = Xlshiftbsb->size[0];
  }
  emxEnsureCapacity_real_T(b_yinbsb, i);
  b_yinbsb_data = b_yinbsb->data;
  stride_0_0 = (yinbsb->size[0] != 1);
  stride_1_0 = (Xlshiftbsb->size[0] != 1);
  if (Xlshiftbsb->size[0] == 1) {
    loop_ub = yinbsb->size[0];
  } else {
    loop_ub = Xlshiftbsb->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_yinbsb_data[i] =
        yinbsb_data[i * stride_0_0] - Xlshiftbsb_data[i * stride_1_0];
  }
  mldivide(XtrendXbsbXseasonXlshift, b_yinbsb, Xlshiftbsb);
  emxFree_real_T(&b_yinbsb);
}

static void xd_binary_expand_op(emxArray_real_T *XtrendXbsbXseasonXlshift,
                                const emxArray_int32_T *r1,
                                const emxArray_real_T *Xlshiftbsb,
                                const emxArray_real_T *Seqbsbvarampl)
{
  const double *Seqbsbvarampl_data;
  const double *Xlshiftbsb_data;
  double *XtrendXbsbXseasonXlshift_data;
  const int *r;
  int Xlshiftbsb_idx_0;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  Seqbsbvarampl_data = Seqbsbvarampl->data;
  Xlshiftbsb_data = Xlshiftbsb->data;
  r = r1->data;
  XtrendXbsbXseasonXlshift_data = XtrendXbsbXseasonXlshift->data;
  Xlshiftbsb_idx_0 = Xlshiftbsb->size[0];
  stride_0_0 = (Xlshiftbsb_idx_0 != 1);
  stride_1_0 = (Seqbsbvarampl->size[0] != 1);
  loop_ub = Seqbsbvarampl->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (Seqbsbvarampl->size[0] == 1) {
      b_loop_ub = Xlshiftbsb_idx_0;
    } else {
      b_loop_ub = Seqbsbvarampl->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      XtrendXbsbXseasonXlshift_data[i1 +
                                    XtrendXbsbXseasonXlshift->size[0] * r[i]] =
          Xlshiftbsb_data[i1 * stride_0_0] *
          Seqbsbvarampl_data[i1 * stride_1_0 + Seqbsbvarampl->size[0] * i];
    }
  }
}

static void yd_binary_expand_op(c_captured_var *yhat,
                                const emxArray_real_T *yhattrend,
                                const c_captured_var *yhatseaso,
                                const emxArray_real_T *yhatX,
                                const emxArray_real_T *beta0, double npar,
                                const emxArray_real_T *b)
{
  const double *b_data;
  const double *beta0_data;
  const double *yhatX_data;
  const double *yhattrend_data;
  double b_beta0;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  b_data = b->data;
  beta0_data = beta0->data;
  yhatX_data = yhatX->data;
  yhattrend_data = yhattrend->data;
  b_beta0 = beta0_data[(int)(npar + 1.0) - 1];
  i = yhat->contents->size[0];
  if (b->size[0] == 1) {
    if (yhatX->size[0] == 1) {
      if (yhatseaso->contents->size[0] == 1) {
        yhat->contents->size[0] = yhattrend->size[0];
      } else {
        yhat->contents->size[0] = yhatseaso->contents->size[0];
      }
    } else {
      yhat->contents->size[0] = yhatX->size[0];
    }
  } else {
    yhat->contents->size[0] = b->size[0];
  }
  emxEnsureCapacity_real_T(yhat->contents, i);
  stride_0_0 = (yhattrend->size[0] != 1);
  stride_1_0 = (yhatseaso->contents->size[0] != 1);
  stride_2_0 = (yhatX->size[0] != 1);
  stride_3_0 = (b->size[0] != 1);
  if (b->size[0] == 1) {
    if (yhatX->size[0] == 1) {
      if (yhatseaso->contents->size[0] == 1) {
        loop_ub = yhattrend->size[0];
      } else {
        loop_ub = yhatseaso->contents->size[0];
      }
    } else {
      loop_ub = yhatX->size[0];
    }
  } else {
    loop_ub = b->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    yhat->contents->data[i] = ((yhattrend_data[i * stride_0_0] +
                                yhatseaso->contents->data[i * stride_1_0]) +
                               yhatX_data[i * stride_2_0]) +
                              b_beta0 * b_data[i * stride_3_0];
  }
}

void LTSts(const emxArray_real_T *y, double varargin_2, bool varargin_4,
           double varargin_6, bool varargin_8, double varargin_10_wlength,
           double varargin_10_typeres, double varargin_10_huberc,
           double varargin_12_bestr, double varargin_12_refsteps,
           double varargin_12_refstepsbestr, double varargin_12_reftol,
           double varargin_12_reftolbestr,
           const struct_LTStsmodel_T varargin_14, bool varargin_16,
           double varargin_18, const double varargin_22_data[],
           const int varargin_22_size[2], double varargin_24,
           double varargin_26, double varargin_28, bool varargin_30,
           struct_LTSts_T *out)
{
  static const char b_cv[5] = {'L', 'T', 'S', 't', 's'};
  b_captured_var isemptyX;
  b_captured_var verLess2016b;
  b_struct_T a__25;
  c_captured_var Seq;
  c_captured_var Seqf;
  c_captured_var X;
  c_captured_var Xf;
  c_captured_var Xlshift;
  c_captured_var Xlshiftf;
  c_captured_var Xseaso;
  c_captured_var Xseasof;
  c_captured_var Xsel;
  c_captured_var Xtrend;
  c_captured_var beta;
  c_captured_var bsb;
  c_captured_var indlinsc;
  c_captured_var otherind;
  c_captured_var seq;
  c_captured_var yhat;
  c_captured_var yhatseaso;
  c_captured_var yin;
  c_struct_T b_expl_temp;
  c_struct_T expl_temp;
  captured_var constr;
  captured_var lshiftYN;
  captured_var nexpl;
  captured_var refstepsALS;
  captured_var reftolALS;
  captured_var s;
  captured_var seasonal;
  captured_var trend;
  captured_var varampl;
  d_captured_var weights;
  d_captured_var zerT1;
  emxArray_boolean_T b_varargin_22_data;
  emxArray_boolean_T *Weights;
  emxArray_boolean_T *r1;
  emxArray_boolean_T *weightsst;
  emxArray_boolean_T *x;
  emxArray_char_T *sstring;
  emxArray_char_T_1x310 b_hmin;
  emxArray_int32_T *NumScale2ind;
  emxArray_int32_T *ia;
  emxArray_int32_T *r;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_real_T *C;
  emxArray_real_T *Cr;
  emxArray_real_T *LSH;
  emxArray_real_T *Ylagged;
  emxArray_real_T *allnumscale2;
  emxArray_real_T *b_Ylagged;
  emxArray_real_T *b_brob;
  emxArray_real_T *b_yin;
  emxArray_real_T *bestbetas;
  emxArray_real_T *bestbetastoadd;
  emxArray_real_T *bestyhat;
  emxArray_real_T *bestyhattoadd;
  emxArray_real_T *beta0;
  emxArray_real_T *betaini;
  emxArray_real_T *brob;
  emxArray_real_T *brobLSH;
  emxArray_real_T *numscale2LSH;
  emxArray_real_T *p_all;
  emxArray_real_T *posvarampl;
  emxArray_real_T *selWithoutLastHarmonic;
  emxArray_real_T *selWithoutLastHarmonic_tmp;
  emxArray_real_T *yhatrob;
  f_struct_T a__24;
  creal_T dc;
  double lsdet[3];
  double nsamp_data[2];
  double nsampsubsequentsteps_data[2];
  const double *y_data;
  double a;
  double bdp;
  double bestrLSH;
  double bestrdiv2;
  double factor;
  double h;
  double ij;
  double lsh;
  double ncomb;
  double ncombLSH;
  double nselected;
  double p;
  double pini;
  double posLS;
  double sworst;
  double *C_data;
  double *Cr_data;
  double *LSH_data;
  double *allnumscale2_data;
  double *bestbetas_data;
  double *bestbetastoadd_data;
  double *bestyhat_data;
  double *bestyhattoadd_data;
  double *beta0_data;
  double *betaini_data;
  double *brobLSH_data;
  double *brob_data;
  double *numscale2LSH_data;
  double *p_all_data;
  double *selWithoutLastHarmonic_data;
  double *yhatrob_data;
  int b_varargin_22_size[2];
  int c_size[2];
  int nsampsubsequentsteps_size[2];
  int LSH_idx_0;
  int T;
  int b_loop_ub;
  int c_loop_ub;
  int d_loop_ub;
  int e_loop_ub;
  int end;
  int exitg1;
  int f_loop_ub;
  int g_loop_ub;
  int h_loop_ub;
  int hmin;
  int i;
  int i1;
  int i2;
  int i3;
  int i4;
  unsigned int ibest;
  int ilsh;
  int input_sizes_idx_1;
  int j;
  int loop_ub;
  int loop_ub_tmp;
  int nsamp_size_idx_0;
  int nsamp_size_idx_1;
  int nseaso;
  int nx;
  int sizes_idx_1;
  int vlen;
  int *NumScale2ind_data;
  int *ia_data;
  int *r5;
  char b_sstring_data[2];
  signed char b_input_sizes_idx_1;
  char *sstring_data;
  bool c_varargin_22_data[2];
  bool empty_non_axis_sizes;
  bool exitg2;
  bool *Weights_data;
  bool *weightsst_data;
  bool *x_data;
  y_data = y->data;
  emxInitStruct_captured_var(&Xlshiftf);
  emxInitStruct_captured_var1(&Seqf);
  emxInitStruct_captured_var1(&Xf);
  emxInitStruct_captured_var1(&Xseasof);
  emxInitStruct_captured_var1(&Xlshift);
  emxInitStruct_captured_var(&yhatseaso);
  emxInitStruct_captured_var(&yin);
  Xlshift.contents->size[0] = 0;
  Xlshift.contents->size[1] = 0;
  Xseasof.contents->size[0] = 0;
  Xseasof.contents->size[1] = 0;
  Xf.contents->size[0] = 0;
  Xf.contents->size[1] = 0;
  /* LTSts extends LTS estimator to time series */
  /*  */
  /* <a href="matlab: docsearchFS('LTSts')">Link to the help function</a> */
  /*  */
  /*  It is possible to set a model with a trend (up to third order), a */
  /*  seasonality (constant or of varying amplitude and with a different number
   */
  /*  of harmonics) and a level shift (in this last case it is possible to */
  /*  specify the window in which level shift has to be searched for). */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         Time series to analyze. Vector. A row or a column vector */
  /*                with T elements, which contains the time series. */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*          bdp : breakdown point. Scalar. It measures the fraction of
   * outliers */
  /*                the algorithm should resist. In this case any value greater
   */
  /*                than 0 but smaller or equal than 0.5 will do fine. Please */
  /*                specify h or bdp, but not both. */
  /*                  Example - 'bdp',0.4 */
  /*                  Data Types - double */
  /*  */
  /*      conflev : Confidence level. Scalar. Scalar between 0 and 1 containing
   */
  /*                Confidence level which is used to declare units as */
  /*                outliers. Usually conflev=0.95, 0.975 0.99 (individual */
  /*                alpha) or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous */
  /*                alpha). Default value is 0.975. */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*   dispresults : Display results of final fit. Boolean. If dispresults is */
  /*                true,  labels of coefficients, estimated coefficients, */
  /*                standard errors, tstat and p-values are shown on the */
  /*                screen in a fully formatted way. The default value of */
  /*                dispresults is false. */
  /*                Example - 'dispresults',true */
  /*                Data Types - logical */
  /*  */
  /*            h : The number of observations that determined the least */
  /*                trimmed squares estimator. Scalar. h is an integer greater
   */
  /*                than p (number of columns of matrix X including the */
  /*                intercept but smaller then n. If the purpose is outlier */
  /*                detection than h does not have to be smaller than */
  /*                [0.5*(T+p+1)]. The default value of h is [0.75*T]. Note */
  /*                that if h is supplied input argument bdp is ignored. */
  /*                  Example - 'h',round(n*0.75) */
  /*                  Data Types - double */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false. */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove
   */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*  lshiftlocref: Parameters for local shift refinement. Structure. */
  /*                This option is used just if model.lshift is greater then 0.
   */
  /*                In order to precisely identify level shift position it is */
  /*                necessary to consider a local sum of squares varying the */
  /*                position of the level shift around the first tentative */
  /*                position keeping all the other parameters fixed. This */
  /*                structure contains the following fields: */
  /*                lshiftlocref.wlength = scalar greater than 0 which */
  /*                    identifies the length of the window. The default value
   */
  /*                    is 15, that is the tentative level shift position */
  /*                    varies from tl-15, tl-15, ..., tl+14, tl+15, where tl is
   */
  /*                    the best preliminary tentative level shift position. */
  /*               lshiftlocref.typeres = scalar which identifies the type of */
  /*                    residuals to consider. If typerres =1, the local */
  /*                    residuals sum of squares is based on huberized (scaled)
   */
  /*                    residuals (this is the default */
  /*                    choice) else raw residuals are used. */
  /*               lshiftlocref.huberc= tuning constant for Huber estimator just
   */
  /*                    in case lshiftlocref.typeres=1. The default value is 2.
   */
  /*                Example - 'lshiftlocref',lshiftlocref.typeres=2 */
  /*                Data Types - struct */
  /*  */
  /*        lts   : structure which controls a set of options of the */
  /*                maximization procedure. Structure. Structure with the */
  /*                following fields: */
  /*                    lts.bestr   = scalar defining number of "best betas" to
   */
  /*                                remember from the subsamples. These will be
   */
  /*                                later iterated until convergence. */
  /*                                The default is 20 (10 of them are the best
   */
  /*                                from previous iteration in case a level */
  /*                                shift is present). */
  /*                   lts.refsteps = scalar defining number of concentration */
  /*                                steps (default = 2). refsteps = 0 means */
  /*                                "raw-subsampling" without iterations. */
  /*              lts.refstepsbestr = scalar defining maximum number of refining
   */
  /*                                steps for each best subset (default=50). */
  /*                    lts.reftol  = scalar. Default value of tolerance for */
  /*                                the refining steps */
  /*                                The default value is 1e-6; */
  /*               lts.reftolbestr  = scalar. Default value of tolerance for */
  /*                                the refining steps for each of the best */
  /*                                subsets The default value is 1e-8. */
  /*                 Example - 'lts',lts */
  /*                 Data Types - struct */
  /*               Remark: if lts is an empty value all default values of */
  /*               structure lts will be used. */
  /*  */
  /*       model :  model type. Structure. A structure which specifies the model
   */
  /*                which will be used. The model structure contains the
   * following */
  /*                fields: */
  /*                model.s = scalar (length of seasonal period). For monthly */
  /*                          data s=12 (default), for quartely data s=4, ... */
  /*                model.trend = scalar (order of the trend component). */
  /*                        trend = 0 implies no trend; */
  /*                        trend = 1 implies linear trend with intercept
   * (default); */
  /*                        trend = 2 implies quadratic trend; */
  /*                        trend = 3 implies cubic trend. */
  /*                        Admissible values for trend are, 0, 1, 2 and 3. */
  /*                        In the paper RPRH to denote the order of the trend
   */
  /*                        symbol A is used. */
  /*                model.seasonal = scalar (integer specifying number of */
  /*                         frequencies, i.e. harmonics, in the seasonal */
  /*                         component. Possible values for seasonal are */
  /*                         $0,1, 2, ..., [s/2]$, where $[s/2]=floor(s/2)$. */
  /*                         If seasonal =0 we assume there is no seasonal */
  /*                         component. */
  /*                         If seasonal =1 (default) we have: */
  /*                         $\beta_1 \cos( 2 \pi t/s) + \beta_2 sin ( 2 \pi
   * t/s)$; */
  /*                         if seasonal =2 we have: */
  /*                         $\beta_1 \cos( 2 \pi t/s) + \beta_2 \sin ( 2 \pi
   * t/s) */
  /*                         + \beta_3 \cos(4 \pi t/s) + \beta_4 \sin (4 \pi
   * t/s)$. */
  /*                         Note that when $s$ is even the sine term disappears
   */
  /*                         for $j=s/2$ and so the maximum number of */
  /*                         trigonometric parameters is $s-1$. */
  /*                         If seasonal is a number greater than 100 then it */
  /*                         is possible to specify how the seasonal component
   */
  /*                         grows over time. */
  /*                         For example, seasonal = 101 implies a seasonal */
  /*                         component which just uses one frequency */
  /*                         which grows linearly over time as follows: */
  /*                         $(1+\beta_3 t)\times ( \beta_1 cos( 2 \pi t/s) + */
  /*                         \beta_2 \sin ( 2 \pi t/s))$. */
  /*                         For example, seasonal =201 implies a seasonal */
  /*                         component which just uses one frequency */
  /*                         which grows in a quadratic way over time as */
  /*                         follows: */
  /*                         $(1+\beta_3 t + \beta_4  t^2)\times( \beta_1 \cos(
   */
  /*                         2 \pi t/s) + \beta_2 \sin ( 2 \pi t/s))$. */
  /*                         seasonal =0 implies a non seasonal model. */
  /*                        In the paper RPRH to denote the number of */
  /*                        frequencies of the seasonal component */
  /*                        symbol B is used, while symbol G is used to denote
   */
  /*                        the order of the trend of the seasonal component. */
  /*                        Therefore, for example, model.seasonal=201 */
  /*                        corresponds to B=1 and G=2, while model.seasonal=3
   */
  /*                        corresponds to B=3 and G=0; */
  /*                model.X  =  matrix of size T-by-nexpl containing the */
  /*                          values of nexpl extra covariates which are likely
   */
  /*                          to affect y. */
  /*                model.lshift = scalar or vector associated to level shift */
  /*                        component. lshift=0 (default) implies no level */
  /*                        shift component. */
  /*                        If model.lshift is vector of positive integers, */
  /*                          then it is associated to the positions of level */
  /*                          shifts which have to be considered. The most */
  /*                          significant one is included in the fitted model.
   */
  /*                          For example if model.lshift =[13 20 36] a */
  /*                          tentative level shift is imposed in position */
  /*                          $t=13$, $t=20$ and $t=36$. The most significant */
  /*                          among these positions in included in the final */
  /*                          model. In other words, the following extra */
  /*                          parameters are added to the final model: */
  /*                          $\beta_{LS1}* I(t \geq \beta_{LS2})$ where */
  /*                          $\beta_{LS1}$ is a real number (associated with */
  /*                          the magnitude of the level shift) and */
  /*                          $\beta_{LS2}$ is an integer which assumes values
   */
  /*                          13, 20 or 36 and and $I$ denotes the indicator */
  /*                          function. */
  /*                          As a particular case, if model.lshift =13 then a
   */
  /*                          level shift in position $t=13$ is added to the */
  /*                          model. In other words the following additional */
  /*                          parameters are added: $\beta_{LS1}* I(t \geq 13)$
   */
  /*                          where $\beta_{LS1}$ is a real number and $I$ */
  /*                          denotes the indicator function. */
  /*                        If lshift = -1 tentative level shifts are */
  /*                          considered for positions $p+1,p+2, ..., T-p$ and
   */
  /*                          the most significant one is included in the final
   */
  /*                          model ($p$ is the total number of parameters in */
  /*                          the fitted model). Note that lshift=-1 is not */
  /*                          supported for C-coder translation. */
  /*                        In the paper RPRH $\beta_{LS1}$ is denoted with */
  /*                        symbol $\delta_1$, while, $\beta_{LS2}$ is denoted
   */
  /*                        with symbol $\delta_2$. */
  /*                model.ARp = vector with non negative integer numbers */
  /*                        specifying the autoregressive */
  /*                        components. For example:  */
  /*                         model.ARp=[1 2] means a AR(2) process;  */
  /*                         model.ARp=2 means just the lag 2 component; */
  /*                         model.ARp=[1 2 5 8] means AR(2) + lag 5 + lag 8; */
  /*                         model.ARp=0 (default) means no autoregressive
   * component.                Example - 'model', model */
  /*                  Data Types - struct */
  /*                Remark: the default model is for monthly data with a linear
   */
  /*                trend (2 parameters) + seasonal component with just one */
  /*                harmonic (2 parameters), no additional explanatory */
  /*                variables and no level shift that is */
  /*                                model=struct; */
  /*                                model.s=12; */
  /*                                model.trend=1; */
  /*                                model.seasonal=1; */
  /*                                model.X=''; */
  /*                                model.lshift=0; */
  /*                Using the notation of the paper RPRH we have A=1, B=1; and
   */
  /*                $\delta_1=0$. */
  /*  */
  /*         msg  : Messages on the screen. Boolean. */
  /*                Scalar which controls whether to display or not messages */
  /*                on the screen. If msg==true (default) messages are displayed
   * on */
  /*                the screen about estimated time to compute the estimator */
  /*                and the warnings about 'MATLAB:rankDeficientMatrix', */
  /*                'MATLAB:singularMatrix' and 'MATLAB:nearlySingularMatrix' */
  /*                are set to off else no message is displayed on the screen */
  /*                Example - 'msg',true */
  /*                Data Types - logical */
  /*  */
  /* nbestindexes : position of the best solutions. Positive integer. For each
   */
  /*                tentative level shift solution, it is interesenting to */
  /*                understand whether best solutions of target function come */
  /*                from subsets associated with current level shift solution */
  /*                or from best solutions from previous tentative level shift
   */
  /*                position.  The indexes from 1 to lts.bestr/2 are associated
   */
  /*                with subsets just extracted. The indexes from lts.bestr/2+1
   */
  /*                to lts.bestr are associated with best solutions from */
  /*                previous tentative level shift. More precisely: */
  /*                index lts.bestr/2+1 is associated with best solution from */
  /*                previous tentative level shift; */
  /*                index lts.bestr/2+2 is associated with second best solution
   */
  /*                from previous tentative level shift; */
  /*                ... */
  /*                nbestindexes is an integer which specifies how many indexes
   */
  /*                we want to store. The default value of nbestindexes  is 3.
   */
  /*                Example - 'nbestindexes',5 */
  /*                Data Types - double */
  /*  */
  /*       nocheck: Check input arguments. Boolean. If nocheck is equal to true
   * no */
  /*                check is performed on matrix y and matrix X. Notice that y
   */
  /*                and X are left unchanged. In other words the additioanl */
  /*                column of ones for the intercept is not added. As default */
  /*                nocheck=false. The controls on h, bdp and nsamp still
   * remain. */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*        nsamp : number of subsamples to extract. Scalar or vector of
   * length 2. */
  /*                Vector of length 1 or 2 which controls the number of */
  /*                subsamples which will be extracted to find the robust */
  /*                estimator. If lshift is not equal to 0 then nsamp(1) */
  /*                controls the number of subsets which have to be extracted */
  /*                to find the solution for t=lshift(1). nsamp(2) controls the
   */
  /*                number of subsets which have to be extracted to find the */
  /*                solution for t=lshift(2), lshift(3), ..., lshift(end). */
  /*                Note that nsamp(2) is generally smaller than nsamp(1) */
  /*                because in order to compute the best solution for */
  /*                t=lshift(2), lshift(3), ..., lshift(end), we use the
   * lts.bestr/2 */
  /*                best solutions from previous t (after shifting the */
  /*                position of the level shift in the estimator of beta). If */
  /*                lshift is a vector of positive integers the default value */
  /*                of nsamp is (500 250). If */
  /*                lshift is a vector of positive integers and nsamp is
   * supplied as a scalar the default */
  /*                is to extract [nsamp/2] subsamples for t=lshift(1), */
  /*                lshift(2), ... Therefore, for example, in order to extract
   */
  /*                600 subsamples for t=lshift(1) and 300 subsamples for t= */
  /*                lshift(2) ... you can use nsamp =600 or nsamp=[600 300]. */
  /*                The default value of nsamp is 1000; */
  /*                  Example - 'nsamp',500 */
  /*                  Data Types - double */
  /*                Remark: if nsamp=0 all subsets will be extracted. */
  /*                They will be (n choose p). */
  /*  */
  /*  refstepsALS :   Maximum iterations inside ALS. Scalar. Maximum number */
  /*                  of iterations inside ALS routine. Default value of */
  /*                  tolerance for the refining steps inside ALS routine. The
   */
  /*                  default value is 50. */
  /*                  Example - 'refstepsALS',20 */
  /*                  Data Types - double */
  /*  */
  /*   reftolALS  :   Tolerance inside ALS. Scalar. Tolerance value of tolerance
   */
  /*                  for the refining steps inside ALS routine. The default */
  /*                  value is 1e-03. */
  /*                  Example - 'reftolALS',1e-05 */
  /*                  Data Types - double */
  /*  */
  /* SmallSampleCor:Small sample correction factor to control empirical size of
   */
  /*                the test.  Scalar equal to 1 or 2 (default) or 3 or 4. */
  /*                - If SmallSampleCor=1 in the reweighting step the nominal */
  /*                  threshold based on $\chi^2_{0.99}$ is multiplied by the */
  /*                  small sample correction factor which guarrantees that the
   */
  /*                  empirical size of the test is equal to the nominal size.
   */
  /*                  Given that the correction factors were obtained through */
  /*                  simulation for a linear model, the number of explanatory
   */
  /*                  which is used to compute the correction factor refers to
   */
  /*                  all explanatory variables except the non linear components
   */
  /*                  in the seasonal part of the model. For example, in a model
   */
  /*                  with linear trend 4 seasonal harmonics + level shift and
   */
  /*                  second order trend in the seasonal component the number of
   */
  /*                  explanatory variables used is 11 = total number of */
  /*                  variables -2 = 2 (linear trend) + 8 (4 seasonal harmonics)
   */
  /*                  +1 (level shift). */
  /*                - If SmallSampleCor =2 Gervini and Yohai procedure is called
   */
  /*                  with 'iterating' false and 'alpha' 0.99 is invoked, that
   * is: */
  /*                  weights=GYfilt(stdres,'iterating',false,'alpha',0.99); */
  /*                - If SmallSampleCor =3 Gervini and Yohai procedure  called
   */
  /*                  with 'iterating' true and 'alpha' 0.99 is invoked, that
   * is: */
  /*                  weights=GYfilt(stdres,'iterating',true,'alpha',0.99); */
  /*                - If SmallSampleCor =4  $\chi^2_{0.99}$ threshold is used
   * that is: */
  /*                  weights = abs(stdres)<=sqrt(chi2inv(0.99,1)); */
  /*                  Example - 'SmallSampleCor',3 */
  /*                  Data Types - double */
  /*  */
  /*        yxsave : store X and y. Boolean. Scalar that is set to 1 to request
   */
  /*                 that the response vector y and data matrix X are saved */
  /*                 into the output structure out. */
  /*                 Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - logical */
  /*  */
  /*        plots : Plots on the screen. Scalar. */
  /*                If plots = 1, a two panel plot will be shown on the screen.
   */
  /*                The upper panel contains the orginal time series with */
  /*                fitted values. The bottom panel will contain the plot */
  /*                of robust residuals against index number. The confidence */
  /*                level which is used to draw the horizontal lines associated
   */
  /*                with the bands for the residuals is specified in input */
  /*                option conflev. If conflev is missing a nominal 0.975 */
  /*                confidence interval will be used. If plots =2 the following
   */
  /*                additional plots will be shown on the screen. */
  /*                1) Boxplot of the distribution of the lts.bestr values of */
  /*                the target function for each tentative level shift position;
   */
  /*                2) A two panel plot which shows the values of the local sum
   */
  /*                of squares varying the position of the level shift around */
  /*                the first tentative position keeping all the other */
  /*                parameters fixed. Top panel refers to Huberized residuals */
  /*                sum of squares and bottom panel refers to residual sum of */
  /*                squares. */
  /*                3) A plot which shows the indexes of the best nbestindexes
   */
  /*                solutions for each tentative level shift position. */
  /*                4) A plot which shows the relative frequency of inclusion */
  /*                of each unit in the best h-subset after lts.refsteps */
  /*                refining steps. */
  /*                5) A plot which shows the relative frequency of inclusion */
  /*                of each unit inside the best nbestindexes subsets which are
   */
  /*                brought to full convergence. */
  /*                The default value of plot is 0 i.e. no plot is shown on the
   */
  /*                screen. */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*        Remark: The user should only give the input arguments that have to
   */
  /*                change their default value. The name of the input arguments
   */
  /*                needs to be followed by their value. The order of the input
   */
  /*                arguments is of no importance. */
  /*  */
  /*   Output: */
  /*  */
  /*   out :     A structure containing the following fields */
  /*  */
  /*              out.B =   Matrix containing estimated beta coefficients, */
  /*                        (including the intercept when
   * options.intercept=true) */
  /*                        standard errors, t-stat and p-values */
  /*                        The content of matrix B is as follows: */
  /*                        1st col = beta coefficients */
  /*                         The order of the beta coefficients is as follows:
   */
  /*                         1) trend elements (if present). If the trend is */
  /*                         of order two there are r+1 coefficients if the */
  /*                         intercept is present otherwise there are just r */
  /*                         components; */
  /*                         2) linear part of seasonal component 2, 4, 6, ...,
   */
  /*                         s-2, s-1 coefficients (if present); */
  /*                         3) coefficients associated with the matrix of */
  /*                         explanatory variables which have a potential effect
   */
  /*                         on the time series under study (X or */
  /*                         autoregressive part); If model.ARp>0 the first */
  /*                         model.ARp elements refer to the autoregressive */
  /*                         component. */
  /*                         4) non linear part of seasonal component, that is
   */
  /*                         varying amplitude. If varying amplitude is of order
   */
  /*                         k there are k coefficients (if present); */
  /*                         5) level shift component (if present). In out.B it
   */
  /*                         is shown just the real number which identifies the
   */
  /*                         magnitude of the upward (downward) level shift. */
  /*                         The integer which specifies the time in which */
  /*                         level shift takes place is given in output */
  /*                         out.posLS. */
  /*                        2nd col = standard errors; */
  /*                        3rd col = t-statistics; */
  /*                        4th col = p values. */
  /*           out.Btable = same thing as out.B but in table format. */
  /*                out.h = The number of observations that have determined the
   */
  /*                        initial LTS estimator, i.e. the value of h. */
  /*               out.bs = Vector containing the units with the smallest p+k */
  /*                        squared residuals before the reweighting step, */
  /*                        where p is the total number of the parameters in */
  /*                        the model and p+k is smallest number of units such
   */
  /*                        that the design matrix is full rank. */
  /*                        out.bs can be used to initialize the forward */
  /*                        search. */
  /*          out.Hsubset = matrix of size T-by-r */
  /*                        containing units forming best H subset for each */
  /*                        tentative level shift which is considered. r is */
  /*                        number of tentative level shift positions whicha re
   */
  /*                        considered. For example if model.lshift=[13 21 40]
   */
  /*                        r is equal to 3. Units belonging to subset are */
  /*                        given with their row number, units not belonging to
   */
  /*                        subset have missing values */
  /*                        This output is present just if input option */
  /*                        model.lshift is not equal to 0. */
  /*            out.posLS = scalar associated with best tentative level shift */
  /*                        position. This output is present just if input */
  /*                        option model.lshift is not equal to 0. */
  /*      out.numscale2 = matrix of size lts.bestr-by-(T-2*lshift) containing */
  /*                        (in the columns) the values of the lts.bestr
   * smallest */
  /*                        values of the target function. Target function =
   * truncated */
  /*                        residuals sum of squares. */
  /*      out.BestIndexes = matrix of size nbestindexes-by-(T-2*lshift) */
  /*                        containing in each column the indexes */
  /*                        associated with the best nbestindexes solutions. */
  /*                        The indexes from lts.bestr/2+1 to lts.bestr are */
  /*                        associated with best solutions from previous */
  /*                        tentative level shift. */
  /*                        More precisely: */
  /*                        index lts.bestr/2+1 is associated with best solution
   */
  /*                        from previous tentative level shift; */
  /*                        index lts.bestr/2+2 is associated with best solution
   */
  /*                        from previous tentative level shift. */
  /*                        This output is present just if input option */
  /*                        model.lshift is not equal to 0. */
  /*          out.Likloc  = matrix of size (2*lshiftlocref.wlength+1)-by-3 */
  /*                        containing local sum of squares of residuals in */
  /*                        order to decide best position of level shift: */
  /*                        1st col = position of level shift; */
  /*                        2nd col = local sum of squares of huberized
   * residuals; */
  /*                        3rd col = local sum of squares of raw residuals. */
  /*                        This output is present just if input option */
  /*                        model.lshift is not equal to 0. */
  /*              out.RES = Matrix of size T-by-(T-lshift) containing scaled */
  /*                        residuals for all the T units of the original time
   */
  /*                        series monitored in steps lshift+1, lshift+2, ...,
   */
  /*                        T-lshift, where lshift+1 is the first tentative */
  /*                        level shift position, lshift +2 is the second level
   */
  /*                        shift position, and so on. This output is present */
  /*                        just if input option model.lshift is not equal to 0.
   */
  /*             out.yhat = vector of fitted values after final (NLS=non linear
   */
  /*                        least squares) step. */
  /*                        $ (\hat \eta_1, \hat \eta_2, \ldots, \hat \eta_T)'$
   */
  /*        out.residuals = Vector T-by-1 containing the scaled residuals from
   */
  /*                        after final NLS step. */
  /*          out.weights = Vector containing weights after adaptive */
  /*                        reweighting. The elements of */
  /*                        this vector are 0 or 1. These weights identify the
   */
  /*                        observations which are used to compute the final */
  /*                        NLS estimate. */
  /*            out.scale = Final scale estimate of the residuals using final
   * weights. */
  /*                      \[ */
  /*                      \hat \sigma = cor \times \sum_{i \in S_m} [y_i-
   * \eta(x_i,\hat \beta)]^2/(m-p) */
  /*                      \] */
  /*                      where $S_m$ is a set of cardinality $m$ which */
  /*                      contains the units not declared as outliers, $p$ */
  /*                      is the total number of estimated parameters and $cor$
   */
  /*                      is a correction factor to make the estimator */
  /*                      consistent. */
  /*          out.conflev = confidence level which is used to declare outliers.
   */
  /*                        Remark: scalar out.conflev will be used to draw the
   */
  /*                        horizontal lines (confidence bands) in the plots */
  /*         out.outliers = vector containing the list of the units declared */
  /*                        as outliers using confidence level specified in */
  /*                        input scalar conflev. */
  /*    out.outliersPval  =  p-value of the units declared as outliers. */
  /*          out.singsub = Number of subsets wihtout full rank. Notice that if
   */
  /*                        this number is greater than 0.1*(number of */
  /*                        subsamples) a warning is produced on the screen */
  /*             out.invXX = $cov(\beta)/\hat \sigma^2$. p-by-p, square matrix.
   */
  /*                        If the model is linear out.invXX  is equal to */
  /*                        $(X'X)^{-1}$, else out.invXX is equal to
   * $(A'A)^{-1}$ */
  /*                        where $A$ is the matrix of partial derivatives. More
   */
  /*                        precisely: */
  /*                        \[ */
  /*                        a_{i,j}=\frac{\partial \eta_i(x_i, \hat
   * \beta)}{\partial \hat \beta_j} */
  /*                        \] */
  /*                        where */
  /*                        \begin{eqnarray} */
  /*                        y_i & = & \eta(x_i,\beta)+ \epsilon_i  \\ */
  /*                            & = & \eta_i +\epsilon_i \\ */
  /*                            & = & \eta(x_i,\hat \beta)+ e_i  \\ */
  /*                            & = & \hat \eta_i + e_i */
  /*                        \end{eqnarray} */
  /*  out.LastHarmonicPval = combined p value for the two coefficients of the */
  /*                         last harmonic (this p value comes from an F test).
   */
  /*  out.LevelShiftPval  =  p value of the level shift which takes into */
  /*                        account (this pvalue comes from Bonferronization to
   */
  /*                        take it account that if you impose a level shift, */
  /*                        this component is always found). */
  /*             out.y    = response vector y. */
  /*             out.X    = data matrix X containing trend, seasonal, expl */
  /*                        (with autoregressive component) and */
  /*                        lshift, if the model is linear or linearized */
  /*                        version of $\eta(x_i, \beta)$ if the model is non */
  /*                        linear containing in the columns partial */
  /*                        derivatives evaluated in correspondence of */
  /*                        out.B(:,1) with respect to each parameter. In other
   */
  /*                        words, the $i,j$-th element of out.X is */
  /*                        \[ */
  /*                        \frac{\partial \eta_i(x_i, \hat \beta)}{\partial
   * \hat \beta_j} */
  /*                        \] */
  /*                        $j=1, 2, \ldots, p$, $i \in S_m$. */
  /*                        The size of this matrix is: */
  /*                        n-length(out.outliers)-by-p */
  /*                        The field is present only if option */
  /*                        yxsave is set to 1. */
  /*            out.class = 'LTSts'. */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : cell  containing the indices of the subsamples */
  /*                        extracted for computing the estimate (the so called
   */
  /*                        elemental sets) for each tentative level shift */
  /*                        position. */
  /*                        C{1} is associated with the subsamples for */
  /*                        first tentative level shift position; */
  /*                        C{2} is associated with the subsamples for */
  /*                        second tentative level shift position; */
  /*                        ... */
  /*                        C{end} is associated with the subsamples for */
  /*                        last tentative level shift position; */
  /*  */
  /*  See also LXS, wedgeplot */
  /*  */
  /*  References: */
  /*  */
  /*  Rousseeuw, P.J., Perrotta D., Riani M. and Hubert, M. (2018), Robust */
  /*  Monitoring of Many Time Series with Application to Fraud Detection, */
  /*  "Econometrics and Statistics". [RPRH] */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by Marco Riani, Domenico Perrotta, Peter */
  /*  Rousseeuw and Mia Hubert */
  /*  */
  /* <a href="matlab: docsearchFS('LTSts')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate:: 2019-12-15 21:09:21 #$: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Simulated data with linear trend and level shift. */
  /*     % No seasonal component. */
  /*     rng('default') */
  /*     T=45; */
  /*     a=1; */
  /*     b=0.8; */
  /*     sig=1; */
  /*     seq=(1:T)'; */
  /*     y=a+b*seq+sig*randn(T,1); */
  /*     % Add a level shift in the simulated series */
  /*     y(round(T/2):end)=y(round(T/2):end)+10; */
  /*     % model with a linear trend, non seasonal and level shift */
  /*     model=struct; */
  /*     model.trend=1; */
  /*     model.seasonal=0; */
  /*     % Potential level shift position is investigated in positions: */
  /*     % t=11, t=12, ..., t=T-10. */
  /*     model.lshift=11:T-10; */
  /*     out=LTSts(y,'model',model,'plots',1); */
  /*     % Using the notation of the paper RPRH: A=1, B=1, G=0 and $\delta_1>0$.
   */
  /*     str=strcat('A=1, B=0, G=0, $\delta_2=',num2str(out.posLS),'$'); */
  /*     title(findobj(gcf,'-regexp','Tag','LTSts:ts'),str,'interpreter','latex');
   */
  /* } */
  /* { */
  /*     % Airline data: linear trend + just one harmonic for seasonal
   * component. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yr = repmat((1949:1960),12,1); */
  /*     mo = repmat((1:12)',1,12); */
  /*     time = datestr(datenum(yr(:),mo(:),1)); */
  /*     ts = timeseries(y(:),time,'name','AirlinePassengers'); */
  /*     ts.TimeInfo.Format = 'dd-mmm-yyyy'; */
  /*     tscol = tscollection(ts); */
  /*     % plot airline data */
  /*     plot(ts) */
  /*     % linear trend + just one harmonic for seasonal component */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=1;           % just one harmonic */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model,'dispresults',true); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted
   * values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=1, G=0, $\delta_1=0$'}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with linear trend and six harmonics for seasonal component. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=6;           % six harmonics */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted
   * values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=6, G=0, $\delta_1=0$'}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Model with linear trend, two harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend (1). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=102;         % two harmonics with time varying
   * seasonality */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted
   * values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=2, G=1, $\delta_1=0$'}; */
  /*    title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with linear trend, six harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend (2). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=106;         % six harmonics with linear time varying
   * seasonality */
  /*     model.lshift=0;             % no level shift */
  /*     % out=fitTSLS(y,'model',model); */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted
   * values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=6, G=1, $\delta_1=0$'}; */
  /*    title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Contaminated time series with upward level shift. */
  /*     % Model with linear trend, six harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yLS=y; */
  /*     yLS(55:end)=yLS(55:end)+130; */
  /*     model=struct; */
  /*     model.trend=1;                          % linear trend */
  /*     model.s=12;                             % monthly time series */
  /*     model.seasonal=1; */
  /*     model.lshift=14:length(yLS)-13;         % impose level shift */
  /*     out=LTSts(yLS,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(yLS,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted
   * values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=1, G=0 and $\delta_1>0$.
   */
  /*     str=strcat('A=1, B=1, G=0, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Contaminated time series with downward level shift. */
  /*     % Model with linear trend, three harmonics for seasonal component and
   */
  /*     % varying amplitude using a linear trend). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yLS=y; */
  /*     yLS(35:end)=yLS(35:end)-300; */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=103; */
  /*     model.lshift=26:length(yLS)-25; */
  /*     out=LTSts(yLS,'model',model,'msg',0); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(yLS,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted
   * values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=3, G=1 and $\delta_1>0$.
   */
  /*     str=strcat('A=1, B=3, G=1, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with an explanatory variable using log-transformed series. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     y1=log(y); */
  /*     % Model with linear trend, two harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend). */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=106; */
  /*     model.lshift=0; */
  /*     model.X=randn(length(y),1); */
  /*     out=LTSts(y1,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y1,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted
   * values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=6, G=1 and $\delta_1>0$.
   */
  /*     str=strcat('A=1, B=6, G=1, $\delta_1=0$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     %% Example 1 used in the paper RPRH. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     % Two short level shifts in opposite directions and an isolated
   * outlier. */
  /*     % Add a level shift contamination plus some outliers. */
  /*     y1=y(:); */
  /*     y1(50:55)=y1(50:55)-300; */
  /*     y1(70:75)=y1(70:75)+300; */
  /*     y1(90:90)=y1(90:90)+300; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift
   */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     % Estimate the parameters */
  /*     [out]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',1,'lshiftlocref',lshiftlocref,'msg',0); */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$.
   */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     axeslast=findobj('-regexp','Tag','LTSts:ts'); */
  /*     title(axeslast(end),numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /* } */
  /* { */
  /*     %% Example 2 used in the paper RPRH. */
  /*     % A persisting level shift and three isolated outliers, two of which in
   */
  /*     % proximity of the level shift. */
  /*         % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     close all */
  /*     y1=y(:); */
  /*     y1(68:end)=y1(68:end)+1300; */
  /*     y1(67)=y1(67)-600; */
  /*     y1(45)=y1(45)-800; */
  /*     y1(68:69)=y1(68:69)+800; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift
   */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     % Estimate the parameters */
  /*     [out, varargout]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',1,'lshiftlocref',lshiftlocref,'msg',0); */
  /*  */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$.
   */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(findobj('-regexp','Tag','LTSts:ts'),numpar,'interpreter','LaTeX','FontSize',16);
   */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /*  */
  /* } */
  /* { */
  /*     %% Example 3 used in the paper RPRH. */
  /*     % A persisting level shift preceded and followed in the proximity by */
  /*     % other two short level shifts, and an isolated outlier. */
  /*         % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    %
   * Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    %
   * Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    %
   * Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    %
   * Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    %
   * May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    %
   * Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    %
   * Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    %
   * Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    %
   * Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    %
   * Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    %
   * Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; %
   * Dec */
  /*     y1=y(:); */
  /*     y1(50:55)=y1(50:55)-300; */
  /*     y1(68:end)=y1(68:end)-700; */
  /*     y1(70:75)=y1(70:75)+300; */
  /*     y1(90:90)=y1(90:90)+300; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift
   */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     close all */
  /*     % Estimate the parameters */
  /*     [out, varargout]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',2,'lshiftlocref',lshiftlocref,'msg',0); */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$.
   */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(findobj('-regexp','Tag','LTSts:ts'),numpar,'interpreter','LaTeX','FontSize',16);
   */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /*  */
  /* } */
  /* { */
  /*  */
  /*     %% Examples 4 and 5 used in the paper RPRH: trade data. */
  /*     close all; clear all; */
  /*     % the datasets */
  /*     load('P12119085'); */
  /*     load('P17049075'); */
  /*     Y4 = P12119085{:,1}; */
  /*     Y5 = P17049075{:,1}; */
  /*  */
  /*     % the model */
  /*     model           = struct; */
  /*     model.trend     = 1; */
  /*     model.seasonal  = 102; */
  /*     model.s         = 12; */
  /*     model.lshift    = 14:length(Y4)-13; */
  /*  */
  /*     % LTSts */
  /*     out4 = LTSts(Y4,'model',model,'plots',0,'dispresults',true,'msg',0); */
  /*     out5 = LTSts(Y5,'model',model,'plots',0,'dispresults',true,'msg',0); */
  /*  */
  /*     % the wedgeplot with the time series and the detected outliers and */
  /*     % level shift */
  /*     wedgeplot(out4,'extradata',Y4,'titl','P12119085, imports of plants from
   * KN to UK'); */
  /*     wedgeplot(out5,'extradata',Y5,'titl','P17049075, imports of sugars from
   * UA to LT'); */
  /*  */
  /*     % Forecasts with a 99.9 per cent confidence level */
  /*     nfore=10; */
  /*     outfore4 =
   * forecastTS(out4,'model',model,'nfore',nfore,'conflev',0.999,'titl','LTSts
   * forecast for P12119085, imports of plants from KN to UK'); */
  /*     outfore5 =
   * forecastTS(out5,'model',model,'nfore',nfore,'conflev',0.999,'titl','LTSts
   * forecast for P17049075, imports of sugars from UA to LT'); */
  /*  */
  /*     % Comparing with FS (needs conflev option) */
  /*  */
  /*     outLTS4 = LTSts(Y4,'model',model,'plots',1,'conflev',0.99,'msg',0); */
  /*     title(findobj(gcf,'Tag','LTSts:ts'),'P12119085, LTS with
   * conflev=0.99'); */
  /*      */
  /*     outFRS4 = FSRts(Y4,'model',model,'plots',1); */
  /*     title(findobj(gcf,'Tag','FSRts:ts'),'P12119085, FS with default
   * conflev'); */
  /*  */
  /*     outLTS5 = LTSts(Y5,'model',model,'plots',1,'conflev',0.99,'msg',0); */
  /*     title(findobj(gcf,'Tag','LTSts:ts'),'P17049075, LTS with
   * conflev=0.99'); */
  /*  */
  /*     outFRS5 = FSRts(Y5,'model',model,'plots',1); */
  /*     title(findobj(gcf,'Tag','FSRts:ts'),'P17049075, FS with default
   * conflev'); */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /*  setting global variable yin */
  i = yin.contents->size[0];
  yin.contents->size[0] = y->size[0];
  emxEnsureCapacity_real_T(yin.contents, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    yin.contents->data[i] = y_data[i];
  }
  emxInit_real_T(&Cr, 2);
  Cr_data = Cr->data;
  /*  Extract size of the data */
  T = y->size[0];
  /*  seq is the vector which will contain linear time trend */
  if (y->size[0] < 1) {
    Cr->size[0] = 1;
    Cr->size[1] = 0;
  } else {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = y->size[0];
    emxEnsureCapacity_real_T(Cr, i);
    Cr_data = Cr->data;
    loop_ub = y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Cr_data[i] = (double)i + 1.0;
    }
  }
  emxInitStruct_captured_var(&seq);
  i = seq.contents->size[0];
  seq.contents->size[0] = Cr->size[1];
  emxEnsureCapacity_real_T(seq.contents, i);
  loop_ub = Cr->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq.contents->data[i] = Cr_data[i];
  }
  emxInitStruct_captured_var2(&zerT1);
  i = zerT1.contents->size[0];
  zerT1.contents->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(zerT1.contents, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    zerT1.contents->data[i] = false;
  }
  emxInit_real_T(&brob, 1);
  /*  Set up values for default model */
  /*  linear trend */
  /*  monthly time series */
  /*  just one harmonic */
  /*  no extra explanatory variable */
  /*  no level shift */
  /*  no autoregressive component */
  /*  h to be implemented for LTS */
  /*  Set the default value for h (the default is 75 per cent of the data) */
  hmin = (int)floor(0.5 * (double)y->size[0]);
  /*  default value for ALS iterations */
  /*  default values for structure which contains the parameters associated */
  /*  with local level shift refinement */
  /*  nbestindexesdef is a positive integer which specifies how many indices of
   */
  /*  the smallest values of the target functions we want to retain. */
  /*  dispresultsdef Boolean about display results. */
  /*  User options */
  /*  singsub= scalar which will contain the number of singular subsets which */
  /*  are extracted (that is the subsets of size p which are not full rank) */
  /*  initialize brob which will be the vector of estimated robust regression */
  /*  coefficients */
  i = brob->size[0];
  brob->size[0] = y->size[0];
  emxEnsureCapacity_real_T(brob, i);
  brob_data = brob->data;
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    brob_data[i] = -99.0;
  }
  /*  Write in structure 'options' the options chosen by the user */
  nsamp_size_idx_0 = varargin_22_size[0];
  nsamp_size_idx_1 = varargin_22_size[1];
  loop_ub_tmp = varargin_22_size[0] * varargin_22_size[1];
  if (0 <= loop_ub_tmp - 1) {
    memcpy(&nsamp_data[0], &varargin_22_data[0], loop_ub_tmp * sizeof(double));
  }
  emxInit_real_T(&beta0, 1);
  /*  Default values for the optional parameters are set inside structure */
  /*  'options' */
  /*  Get model parameters */
  s.contents = varargin_14.s;
  /*  get periodicity of time series */
  trend.contents = varargin_14.trend;
  /*  get kind of  trend */
  seasonal.contents = varargin_14.seasonal;
  /*  get number of harmonics */
  /*  get level shift */
  /*  nbestindexes = indexes of the best  nbestindexes solutions for each */
  /*  tentative position of level shift */
  /*  Check if the optional user parameters are valid. */
  a = trend.contents;
  f_do_vectors(a, (double *)&nselected, c_size, (int *)&nx, &input_sizes_idx_1,
               (int *)&sizes_idx_1, &vlen);
  /*  Construct the matrices which are fixed in each step of the minimization */
  /*  procedure */
  i = beta0->size[0];
  beta0->size[0] = seq.contents->size[0];
  emxEnsureCapacity_real_T(beta0, i);
  beta0_data = beta0->data;
  loop_ub = seq.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    nselected = seq.contents->data[i];
    beta0_data[i] = nselected * nselected;
  }
  emxInit_real_T(&betaini, 1);
  i = betaini->size[0];
  betaini->size[0] = seq.contents->size[0];
  emxEnsureCapacity_real_T(betaini, i);
  betaini_data = betaini->data;
  loop_ub = seq.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    nselected = seq.contents->data[i];
    betaini_data[i] = rt_powd_snf(nselected, 3.0);
  }
  emxInitStruct_captured_var1(&Seq);
  i = Seq.contents->size[0] * Seq.contents->size[1];
  Seq.contents->size[0] = y->size[0];
  Seq.contents->size[1] = 4;
  emxEnsureCapacity_real_T(Seq.contents, i);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i] = 1.0;
  }
  loop_ub = seq.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0]] = seq.contents->data[i];
  }
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0] * 2] = beta0_data[i];
  }
  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0] * 3] = betaini_data[i];
  }
  /*  Define matrix which contains linear quadratic of cubic trend */
  emxInitStruct_captured_var1(&Xtrend);
  if (varargin_8) {
    a = trend.contents + 1.0;
    if (1.0 > a) {
      loop_ub = 0;
    } else {
      loop_ub = (int)a;
    }
    vlen = Seq.contents->size[0];
    i = Xtrend.contents->size[0] * Xtrend.contents->size[1];
    Xtrend.contents->size[0] = Seq.contents->size[0];
    Xtrend.contents->size[1] = loop_ub;
    emxEnsureCapacity_real_T(Xtrend.contents, i);
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < vlen; i1++) {
        Xtrend.contents->data[i1 + Xtrend.contents->size[0] * i] =
            Seq.contents->data[i1 + Seq.contents->size[0] * i];
      }
    }
  } else {
    a = trend.contents + 1.0;
    if (2.0 > a) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = (int)a;
    }
    loop_ub = Seq.contents->size[0];
    j = Xtrend.contents->size[0] * Xtrend.contents->size[1];
    Xtrend.contents->size[0] = Seq.contents->size[0];
    vlen = i1 - i;
    Xtrend.contents->size[1] = vlen;
    emxEnsureCapacity_real_T(Xtrend.contents, j);
    for (i1 = 0; i1 < vlen; i1++) {
      for (j = 0; j < loop_ub; j++) {
        Xtrend.contents->data[j + Xtrend.contents->size[0] * i1] =
            Seq.contents->data[j + Seq.contents->size[0] * (i + i1)];
      }
    }
  }
  /*  seasonal component */
  i = yhatseaso.contents->size[0];
  yhatseaso.contents->size[0] = 1;
  emxEnsureCapacity_real_T(yhatseaso.contents, i);
  yhatseaso.contents->data[0] = 0.0;
  emxInitStruct_captured_var1(&Xseaso);
  if (seasonal.contents > 0.0) {
    emxInit_char_T(&sstring, 2);
    d_sprintf(seasonal.contents, sstring);
    sstring_data = sstring->data;
    /*  sstring=num2str(seasonal); TODO */
    if (seasonal.contents > 100.0) {
      dc = str2double(sstring_data[0]);
      varampl.contents = dc.re;
      b_sstring_data[0] = sstring_data[1];
      b_sstring_data[1] = sstring_data[2];
      dc = b_str2double(b_sstring_data);
      seasonal.contents = dc.re;
    } else {
      varampl.contents = 0.0;
    }
    emxFree_char_T(&sstring);
    i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
    Xseaso.contents->size[0] = y->size[0];
    Xseaso.contents->size[1] = (int)(seasonal.contents * 2.0);
    emxEnsureCapacity_real_T(Xseaso.contents, i);
    loop_ub = y->size[0] * (int)(seasonal.contents * 2.0);
    for (i = 0; i < loop_ub; i++) {
      Xseaso.contents->data[i] = 0.0;
    }
    a = seasonal.contents;
    i = (int)a;
    for (j = 0; j < i; j++) {
      a = 2.0 * ((double)j + 1.0);
      nselected = a * 3.1415926535897931;
      loop_ub = seq.contents->size[0];
      i1 = beta0->size[0];
      beta0->size[0] = seq.contents->size[0];
      emxEnsureCapacity_real_T(beta0, i1);
      beta0_data = beta0->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        beta0_data[i1] = nselected * seq.contents->data[i1] / s.contents;
      }
      nx = beta0->size[0];
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
        beta0_data[input_sizes_idx_1] = cos(beta0_data[input_sizes_idx_1]);
      }
      loop_ub = seq.contents->size[0];
      i1 = betaini->size[0];
      betaini->size[0] = seq.contents->size[0];
      emxEnsureCapacity_real_T(betaini, i1);
      betaini_data = betaini->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        betaini_data[i1] = nselected * seq.contents->data[i1] / s.contents;
      }
      nx = betaini->size[0];
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
        betaini_data[input_sizes_idx_1] = sin(betaini_data[input_sizes_idx_1]);
      }
      loop_ub = beta0->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xseaso.contents
            ->data[i1 + Xseaso.contents->size[0] * ((int)(a + -1.0) - 1)] =
            beta0_data[i1];
      }
      loop_ub = betaini->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xseaso.contents->data[i1 + Xseaso.contents->size[0] * ((int)a - 1)] =
            betaini_data[i1];
      }
    }
    /*  Remark: when s is even the sine term disapperas for j=s/2 and so the */
    /*  maximum number of trigonometric terms is s-1 */
    if (seasonal.contents == s.contents / 2.0) {
      if (1 > Xseaso.contents->size[1] - 1) {
        loop_ub = 0;
      } else {
        loop_ub = Xseaso.contents->size[1] - 1;
      }
      nx = Xseaso.contents->size[0] - 1;
      vlen = Xseaso.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < vlen; i1++) {
          Xseaso.contents->data[i1 + (nx + 1) * i] =
              Xseaso.contents->data[i1 + Xseaso.contents->size[0] * i];
        }
      }
      i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
      Xseaso.contents->size[0] = nx + 1;
      Xseaso.contents->size[1] = loop_ub;
      emxEnsureCapacity_real_T(Xseaso.contents, i);
    }
    nseaso = Xseaso.contents->size[1];
  } else {
    nseaso = 0;
    varampl.contents = 0.0;
    Xseaso.contents->size[0] = 0;
    Xseaso.contents->size[1] = 0;
  }
  emxInitStruct_captured_var1(&X);
  i = X.contents->size[0] * X.contents->size[1];
  X.contents->size[0] = varargin_14.X->size[0];
  X.contents->size[1] = varargin_14.X->size[1];
  emxEnsureCapacity_real_T(X.contents, i);
  loop_ub = varargin_14.X->size[0] * varargin_14.X->size[1];
  for (i = 0; i < loop_ub; i++) {
    X.contents->data[i] = varargin_14.X->data[i];
  }
  /*  Order of the autoregressive component */
  if ((varargin_14.ARp->size[0] == 0) || (varargin_14.ARp->size[1] == 0)) {
    input_sizes_idx_1 = 0;
  } else {
    nx = varargin_14.ARp->size[0];
    input_sizes_idx_1 = varargin_14.ARp->size[1];
    if (nx >= input_sizes_idx_1) {
      input_sizes_idx_1 = nx;
    }
  }
  /*  ARp=ARp(1); */
  emxInit_real_T(&Ylagged, 2);
  if ((varargin_14.ARp->size[0] * varargin_14.ARp->size[1] != 1) ||
      (!(varargin_14.ARp->data[0] == 0.0))) {
    /*  Ylagged = matrix which contains lagged values of Y */
    i = Ylagged->size[0] * Ylagged->size[1];
    Ylagged->size[0] = y->size[0];
    Ylagged->size[1] = input_sizes_idx_1;
    emxEnsureCapacity_real_T(Ylagged, i);
    betaini_data = Ylagged->data;
    for (j = 0; j < input_sizes_idx_1; j++) {
      if (1.0 > varargin_14.ARp->data[j]) {
        loop_ub = 0;
      } else {
        loop_ub = (int)varargin_14.ARp->data[j];
      }
      a = (double)y->size[0] - varargin_14.ARp->data[j];
      if (1.0 > a) {
        vlen = 0;
      } else {
        vlen = (int)a;
      }
      for (i = 0; i < loop_ub; i++) {
        betaini_data[i + Ylagged->size[0] * j] = y_data[i];
      }
      for (i = 0; i < vlen; i++) {
        betaini_data[(i + loop_ub) + Ylagged->size[0] * j] = y_data[i];
      }
    }
    if ((Ylagged->size[0] != 0) && (Ylagged->size[1] != 0)) {
      nx = Ylagged->size[0];
    } else if ((varargin_14.X->size[0] != 0) && (varargin_14.X->size[1] != 0)) {
      nx = varargin_14.X->size[0];
    } else {
      nx = Ylagged->size[0];
      if (varargin_14.X->size[0] > Ylagged->size[0]) {
        nx = varargin_14.X->size[0];
      }
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes ||
        ((Ylagged->size[0] != 0) && (Ylagged->size[1] != 0))) {
      input_sizes_idx_1 = Ylagged->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((varargin_14.X->size[0] != 0) && (varargin_14.X->size[1] != 0))) {
      sizes_idx_1 = varargin_14.X->size[1];
    } else {
      sizes_idx_1 = 0;
    }
    i = X.contents->size[0] * X.contents->size[1];
    X.contents->size[0] = nx;
    X.contents->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(X.contents, i);
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        X.contents->data[i1 + X.contents->size[0] * i] =
            betaini_data[i1 + nx * i];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        X.contents->data[i1 + X.contents->size[0] * (i + input_sizes_idx_1)] =
            varargin_14.X->data[i1 + nx * i];
      }
    }
  } else {
    /*  In this case there is no ARp component */
  }
  /*  nexpl = number of potential explanatory variables */
  isemptyX.contents =
      ((X.contents->size[0] == 0) || (X.contents->size[1] == 0));
  if (isemptyX.contents) {
    nexpl.contents = 0.0;
  } else {
    nexpl.contents = X.contents->size[1];
  }
  /*  pini = number of parameters in the linear model without level shifts nor
   */
  /*  varying amplitude */
  /*  ntrend = number of trend parameters, */
  /*  nseaso = number of parameters associated with the harmonics, */
  /*  nexpl = number of explanatory variables, */
  pini = (double)((unsigned int)Xtrend.contents->size[1] + nseaso) +
         nexpl.contents;
  /*  p = total number of parameters in the model */
  /*  nini + */
  /*  varampl = number of parameters involving time varying trend, */
  /*  + 2 additional parameters if there is a level shift component */
  lshiftYN.contents = 0.0;
  if (varargin_14.lshift->data[0] != 0.0) {
    lshiftYN.contents = 1.0;
  }
  p = (pini + varampl.contents) + lshiftYN.contents * 2.0;
  /*  lshift=-1 is not valid in MATLAB C coder */
  /*  indexes of linear part of seasonal component */
  emxInitStruct_captured_var1(&indlinsc);
  if (seasonal.contents < 6.0) {
    a = trend.contents + 2.0;
    bestrLSH = (trend.contents + 1.0) + seasonal.contents * 2.0;
    if (rtIsNaN(a) || rtIsNaN(bestrLSH)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      indlinsc.contents->data[0] = rtNaN;
    } else if (bestrLSH < a) {
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 0;
    } else if ((rtIsInf(a) || rtIsInf(bestrLSH)) && (a == bestrLSH)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      indlinsc.contents->data[0] = rtNaN;
    } else if (floor(a) == a) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      loop_ub = (int)floor(bestrLSH - a);
      indlinsc.contents->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      for (i = 0; i <= loop_ub; i++) {
        indlinsc.contents->data[i] = a + (double)i;
      }
    } else {
      eml_float_colon(a, bestrLSH, indlinsc.contents);
    }
  } else {
    a = trend.contents + 2.0;
    bestrLSH = ((trend.contents + 1.0) + seasonal.contents * 2.0) - 1.0;
    if (rtIsNaN(a) || rtIsNaN(bestrLSH)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      indlinsc.contents->data[0] = rtNaN;
    } else if (bestrLSH < a) {
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 0;
    } else if ((rtIsInf(a) || rtIsInf(bestrLSH)) && (a == bestrLSH)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      indlinsc.contents->data[0] = rtNaN;
    } else if (floor(a) == a) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      loop_ub = (int)floor(bestrLSH - a);
      indlinsc.contents->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(indlinsc.contents, i);
      for (i = 0; i <= loop_ub; i++) {
        indlinsc.contents->data[i] = a + (double)i;
      }
    } else {
      eml_float_colon(a, bestrLSH, indlinsc.contents);
    }
  }
  if (rtIsNaN(p)) {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = 1;
    emxEnsureCapacity_real_T(Cr, i);
    Cr_data = Cr->data;
    Cr_data[0] = rtNaN;
  } else if (p < 1.0) {
    Cr->size[0] = 1;
    Cr->size[1] = 0;
  } else if (rtIsInf(p) && (1.0 == p)) {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = 1;
    emxEnsureCapacity_real_T(Cr, i);
    Cr_data = Cr->data;
    Cr_data[0] = rtNaN;
  } else {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    loop_ub = (int)floor(p - 1.0);
    Cr->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(Cr, i);
    Cr_data = Cr->data;
    for (i = 0; i <= loop_ub; i++) {
      Cr_data[i] = (double)i + 1.0;
    }
  }
  emxInitStruct_captured_var1(&otherind);
  emxInit_int32_T(&ia, 1);
  e_do_vectors(Cr, indlinsc.contents, otherind.contents, ia, &vlen);
  if (lshiftYN.contents == 1.0) {
    i = otherind.contents->size[0] * otherind.contents->size[1];
    if (1 > otherind.contents->size[1] - 1) {
      otherind.contents->size[1] = 0;
    } else {
      otherind.contents->size[1]--;
    }
    emxEnsureCapacity_real_T(otherind.contents, i);
  }
  /*  If the number of all possible subsets is <10000 the default is to extract
   */
  /*  all subsets otherwise just 10000. Notice that we use bc, a fast version */
  /*  of nchoosek. One may also use the approximation */
  /*  floor(exp(gammaln(n+1)-gammaln(n-p+1)-gammaln(pini+1))+0.5) */
  ncomb = bc(y->size[0], pini);
  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp The user has only specified h: no need to specify bdp. */
  if (varargin_6 < hmin) {
    int2str(hmin, b_hmin.data, b_hmin.size);
  }
  bdp = 1.0 - varargin_6 / (double)y->size[0];
  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  b_varargin_22_size[0] = varargin_22_size[0];
  b_varargin_22_size[1] = varargin_22_size[1];
  for (i = 0; i < loop_ub_tmp; i++) {
    c_varargin_22_data[i] = (varargin_22_data[i] > ncomb);
  }
  b_varargin_22_data.data = &c_varargin_22_data[0];
  b_varargin_22_data.size = &b_varargin_22_size[0];
  b_varargin_22_data.allocatedSize = 2;
  b_varargin_22_data.numDimensions = 2;
  b_varargin_22_data.canFreeData = false;
  if (b_ifWhileCond(&b_varargin_22_data)) {
    nsamp_size_idx_0 = 1;
    nsamp_size_idx_1 = 1;
    nsamp_data[0] = 0.0;
  }
  h = floor(varargin_6);
  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  nsampsubsequentsteps_size[0] = nsamp_size_idx_0;
  nsampsubsequentsteps_size[1] = nsamp_size_idx_1;
  loop_ub = nsamp_size_idx_0 * nsamp_size_idx_1;
  for (i = 0; i < loop_ub; i++) {
    nsampsubsequentsteps_data[i] = nsamp_data[i] / 2.0;
  }
  b_round(nsampsubsequentsteps_data, nsampsubsequentsteps_size);
  /*  small sample correction factor */
  if (varampl.contents > 0.0) {
    /*  Convergence criteria inside ALS loop */
    reftolALS.contents = varargin_26;
    refstepsALS.contents = varargin_24;
    verLess2016b.contents = true;
  } else {
    verLess2016b.contents = false;
    reftolALS.contents = 0.0;
    refstepsALS.contents = 0.0;
  }
  constr.contents = 0.0;
  /*  Confidence level which is used for outlier detection */
  /*  Scalar which controls the messages displayed on the screen */
  emxInit_real_T(&LSH, 2);
  if (lshiftYN.contents == 1.0) {
    /*  If a level shift is present, it is necessary to */
    /*  reestimate a linear model each time with a different */
    /*  level shift and, if  take the one which minimizes the target */
    /*  function (residual sum of squares/2 = negative log */
    /*  likelihood) */
    /*  With the instruction below we want to make sure that LSH is a row */
    /*  vector */
    sizes_idx_1 = varargin_14.lshift->size[0] * varargin_14.lshift->size[1];
    i = LSH->size[0] * LSH->size[1];
    LSH->size[0] = 1;
    LSH->size[1] = sizes_idx_1;
    emxEnsureCapacity_real_T(LSH, i);
    LSH_data = LSH->data;
    for (i = 0; i < sizes_idx_1; i++) {
      LSH_data[i] = varargin_14.lshift->data[i];
    }
    /*  total number of subsets to pass to procedure subsets */
    ncombLSH = bc((double)y->size[0] - 1.0, pini + 1.0);
  } else {
    i = LSH->size[0] * LSH->size[1];
    LSH->size[0] = 1;
    LSH->size[1] = 1;
    emxEnsureCapacity_real_T(LSH, i);
    LSH_data = LSH->data;
    LSH_data[0] = 0.0;
    ncombLSH = 0.0;
  }
  /*  lLSH = length of tentative level shift positions */
  /*  ScaleLSH= estimate of the squared scale for each value of LSH which has
   * been */
  /*  considered */
  i = betaini->size[0];
  betaini->size[0] = LSH->size[1];
  emxEnsureCapacity_real_T(betaini, i);
  betaini_data = betaini->data;
  loop_ub = LSH->size[1];
  for (i = 0; i < loop_ub; i++) {
    betaini_data[i] = LSH_data[i];
  }
  if (betaini->size[0] != 0) {
    nx = betaini->size[0];
  } else if (LSH->size[1] != 0) {
    nx = LSH->size[1];
  } else {
    nx = 0;
  }
  empty_non_axis_sizes = (nx == 0);
  if (empty_non_axis_sizes || (betaini->size[0] != 0)) {
    b_input_sizes_idx_1 = 1;
  } else {
    b_input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (LSH->size[1] != 0)) {
    sizes_idx_1 = 2;
  } else {
    sizes_idx_1 = 0;
  }
  emxInit_real_T(&numscale2LSH, 2);
  i = numscale2LSH->size[0] * numscale2LSH->size[1];
  numscale2LSH->size[0] = nx;
  numscale2LSH->size[1] = b_input_sizes_idx_1 + sizes_idx_1;
  emxEnsureCapacity_real_T(numscale2LSH, i);
  numscale2LSH_data = numscale2LSH->data;
  loop_ub = b_input_sizes_idx_1;
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      numscale2LSH_data[i1] = betaini_data[i1];
    }
  }
  for (i = 0; i < sizes_idx_1; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      numscale2LSH_data[i1 + numscale2LSH->size[0] *
                                 (i + b_input_sizes_idx_1)] = 0.0;
    }
  }
  emxInit_real_T(&allnumscale2, 1);
  /*  yhatrobLSH = vector of fitted values for each value of LSH */
  /*  ilsh is a counter which is linked to the rows of LSH */
  /*  ilsh=0; */
  bestrdiv2 = rt_roundd_snf(varargin_12_bestr / 2.0);
  /*  allnumscale2 will contain the best best estimates of the target function
   */
  /*  for a tentative value of level shift position */
  loop_ub_tmp = (int)varargin_12_bestr;
  i = allnumscale2->size[0];
  allnumscale2->size[0] = (int)varargin_12_bestr;
  emxEnsureCapacity_real_T(allnumscale2, i);
  allnumscale2_data = allnumscale2->data;
  for (i = 0; i < loop_ub_tmp; i++) {
    allnumscale2_data[i] = 0.0;
  }
  emxInit_int32_T(&NumScale2ind, 2);
  emxInit_boolean_T(&Weights, 2);
  emxInit_real_T(&brobLSH, 2);
  /*  Store all bestr target functions for each tentative level shift */
  /*  position (target function = truncated residual sum of squares) */
  i = out->numscale2->size[0] * out->numscale2->size[1];
  out->numscale2->size[0] = (int)varargin_12_bestr;
  out->numscale2->size[1] = LSH->size[1];
  emxEnsureCapacity_real_T(out->numscale2, i);
  /*  Store the position of the indexes occupying nbestindexes best solutions of
   * target */
  /*  function for each tentative level shift position */
  /*  1-bestrdiv2       = solutions from fresh subsets. */
  /*  bestrdiv2+1-bestr = best solutions coming from previous tentative level */
  /*  shift position */
  i = NumScale2ind->size[0] * NumScale2ind->size[1];
  NumScale2ind->size[0] = (int)varargin_18;
  NumScale2ind->size[1] = LSH->size[1];
  emxEnsureCapacity_int32_T(NumScale2ind, i);
  NumScale2ind_data = NumScale2ind->data;
  /*  Weights = units forming subset for the solution associated to the minimum
   */
  /*  scale for each value of LSH */
  i = Weights->size[0] * Weights->size[1];
  Weights->size[0] = y->size[0];
  Weights->size[1] = LSH->size[1];
  emxEnsureCapacity_boolean_T(Weights, i);
  Weights_data = Weights->data;
  i = brobLSH->size[0] * brobLSH->size[1];
  brobLSH->size[0] = (int)p;
  brobLSH->size[1] = LSH->size[1];
  emxEnsureCapacity_real_T(brobLSH, i);
  brobLSH_data = brobLSH->data;
  /*  Construct matrix X (called Xsel) which contains the linear part of the
   * model */
  emxInitStruct_captured_var1(&Xsel);
  if (seasonal.contents == 0.0) {
    if (isemptyX.contents) {
      i = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = Xtrend.contents->size[0];
      Xsel.contents->size[1] = Xtrend.contents->size[1];
      emxEnsureCapacity_real_T(Xsel.contents, i);
      loop_ub = Xtrend.contents->size[0] * Xtrend.contents->size[1];
      for (i = 0; i < loop_ub; i++) {
        Xsel.contents->data[i] = Xtrend.contents->data[i];
      }
    } else {
      if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
        nx = Xtrend.contents->size[0];
      } else if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
        nx = X.contents->size[0];
      } else {
        nx = Xtrend.contents->size[0];
        if (X.contents->size[0] > Xtrend.contents->size[0]) {
          nx = X.contents->size[0];
        }
      }
      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes || ((Xtrend.contents->size[0] != 0) &&
                                   (Xtrend.contents->size[1] != 0))) {
        b_input_sizes_idx_1 = (signed char)Xtrend.contents->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          ((X.contents->size[0] != 0) && (X.contents->size[1] != 0))) {
        sizes_idx_1 = X.contents->size[1];
      } else {
        sizes_idx_1 = 0;
      }
      i = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = nx;
      Xsel.contents->size[1] = b_input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(Xsel.contents, i);
      loop_ub = b_input_sizes_idx_1;
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < nx; i1++) {
          Xsel.contents->data[i1 + Xsel.contents->size[0] * i] =
              Xtrend.contents->data[i1 + nx * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < nx; i1++) {
          Xsel.contents
              ->data[i1 + Xsel.contents->size[0] * (i + b_input_sizes_idx_1)] =
              X.contents->data[i1 + nx * i];
        }
      }
    }
  } else if (isemptyX.contents) {
    if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
      nx = Xtrend.contents->size[0];
    } else if ((Xseaso.contents->size[0] != 0) &&
               (Xseaso.contents->size[1] != 0)) {
      nx = Xseaso.contents->size[0];
    } else {
      nx = Xtrend.contents->size[0];
      if (Xseaso.contents->size[0] > Xtrend.contents->size[0]) {
        nx = Xseaso.contents->size[0];
      }
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes ||
        ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0))) {
      b_input_sizes_idx_1 = (signed char)Xtrend.contents->size[1];
    } else {
      b_input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((Xseaso.contents->size[0] != 0) && (Xseaso.contents->size[1] != 0))) {
      sizes_idx_1 = Xseaso.contents->size[1];
    } else {
      sizes_idx_1 = 0;
    }
    i = Xsel.contents->size[0] * Xsel.contents->size[1];
    Xsel.contents->size[0] = nx;
    Xsel.contents->size[1] = b_input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(Xsel.contents, i);
    loop_ub = b_input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        Xsel.contents->data[i1 + Xsel.contents->size[0] * i] =
            Xtrend.contents->data[i1 + nx * i];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        Xsel.contents
            ->data[i1 + Xsel.contents->size[0] * (i + b_input_sizes_idx_1)] =
            Xseaso.contents->data[i1 + nx * i];
      }
    }
  } else {
    if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
      nx = Xtrend.contents->size[0];
    } else if ((Xseaso.contents->size[0] != 0) &&
               (Xseaso.contents->size[1] != 0)) {
      nx = Xseaso.contents->size[0];
    } else if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
      nx = X.contents->size[0];
    } else {
      nx = Xtrend.contents->size[0];
      if (Xseaso.contents->size[0] > Xtrend.contents->size[0]) {
        nx = Xseaso.contents->size[0];
      }
      if (X.contents->size[0] > nx) {
        nx = X.contents->size[0];
      }
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes ||
        ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0))) {
      b_input_sizes_idx_1 = (signed char)Xtrend.contents->size[1];
    } else {
      b_input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((Xseaso.contents->size[0] != 0) && (Xseaso.contents->size[1] != 0))) {
      input_sizes_idx_1 = Xseaso.contents->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes ||
        ((X.contents->size[0] != 0) && (X.contents->size[1] != 0))) {
      sizes_idx_1 = X.contents->size[1];
    } else {
      sizes_idx_1 = 0;
    }
    i = Xsel.contents->size[0] * Xsel.contents->size[1];
    Xsel.contents->size[0] = nx;
    Xsel.contents->size[1] =
        (b_input_sizes_idx_1 + input_sizes_idx_1) + sizes_idx_1;
    emxEnsureCapacity_real_T(Xsel.contents, i);
    loop_ub = b_input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        Xsel.contents->data[i1 + Xsel.contents->size[0] * i] =
            Xtrend.contents->data[i1 + nx * i];
      }
    }
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        Xsel.contents
            ->data[i1 + Xsel.contents->size[0] * (i + b_input_sizes_idx_1)] =
            Xseaso.contents->data[i1 + nx * i];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        Xsel.contents
            ->data[i1 + Xsel.contents->size[0] *
                            ((i + b_input_sizes_idx_1) + input_sizes_idx_1)] =
            X.contents->data[i1 + nx * i];
      }
    }

    /*  zero for varampl is automatically included because b0 is */
    /*  initialized as a vector of zeroes b0=[b0;zeros(varampl,1)]; */
  }
  /*  WEIisum = matrix which will contain the number of times each units has */
  /*  been included into the best h-subset after two iterations */
  /*  WEIisumbest10 = matrix which will contain the number of times each units
   * has */
  /*  been included into the best h-subsets among the bestr/2 best */
  i = out->RES->size[0] * out->RES->size[1];
  out->RES->size[0] = y->size[0];
  out->RES->size[1] = LSH->size[1];
  emxEnsureCapacity_real_T(out->RES, i);
  /*  Consistency factor based on the variance of the truncated normal */
  /*  distribution. 1-h/n=trimming percentage Compute variance of the truncated
   */
  /*  normal distribution. */
  nselected = 0.5 * (h / (double)y->size[0] + 1.0);
  if ((nselected >= 0.0) && (nselected <= 1.0)) {
    a = -1.4142135623730951 * erfcinv(2.0 * nselected);
  } else {
    a = rtNaN;
  }
  emxInit_real_T(&bestyhattoadd, 2);
  /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
  factor = 1.0 / sqrt(1.0 - 2.0 * ((double)y->size[0] / h) * a *
                                (exp(-0.5 * a * a) / 2.5066282746310002));
  /*  Initialize 2D or 3D array which stores indexes of extracted */
  /*  subsets for each tentative level shift position */
  /*  Initialization of Ccell is necessary for MATLAB C coder */
  i = bestyhattoadd->size[0] * bestyhattoadd->size[1];
  bestyhattoadd->size[0] = (int)pini;
  bestyhattoadd->size[1] = (int)pini;
  emxEnsureCapacity_real_T(bestyhattoadd, i);
  bestyhattoadd_data = bestyhattoadd->data;
  nx = (int)pini * (int)pini;
  for (i = 0; i < nx; i++) {
    bestyhattoadd_data[i] = 0.0;
  }
  emxInit_real_T(&bestbetastoadd, 2);
  i = bestbetastoadd->size[0] * bestbetastoadd->size[1];
  bestbetastoadd->size[0] = (int)pini;
  bestbetastoadd->size[1] = (int)pini;
  emxEnsureCapacity_real_T(bestbetastoadd, i);
  bestbetastoadd_data = bestbetastoadd->data;
  for (i = 0; i < nx; i++) {
    bestbetastoadd_data[i] = 0.0;
  }
  emxInitStruct_captured_var(&bsb);
  emxInit_real_T(&yhatrob, 1);
  emxInit_boolean_T(&weightsst, 1);
  i = bsb.contents->size[0];
  bsb.contents->size[0] = 1;
  emxEnsureCapacity_real_T(bsb.contents, i);
  bsb.contents->data[0] = 0.0;
  ibest = 0U;
  i = yhatrob->size[0];
  yhatrob->size[0] = 1;
  emxEnsureCapacity_real_T(yhatrob, i);
  yhatrob_data = yhatrob->data;
  yhatrob_data[0] = 0.0;
  i = weightsst->size[0];
  weightsst->size[0] = 1;
  emxEnsureCapacity_boolean_T(weightsst, i);
  weightsst_data = weightsst->data;
  weightsst_data[0] = false;
  posLS = 0.0;
  i = out->Likloc->size[0] * out->Likloc->size[1];
  out->Likloc->size[0] = 1;
  out->Likloc->size[1] = 1;
  emxEnsureCapacity_real_T(out->Likloc, i);
  out->Likloc->data[0] = 0.0;
  i = LSH->size[1];
  emxInitStruct_captured_var2(&weights);
  emxInitStruct_captured_var(&yhat);
  emxInitStruct_captured_var(&beta);
  emxInit_real_T(&bestbetas, 2);
  emxInit_real_T(&bestyhat, 2);
  emxInit_real_T(&C, 2);
  emxInit_int32_T(&r, 2);
  emxInit_boolean_T(&x, 2);
  emxInit_boolean_T(&r1, 1);
  emxInitStruct_struct_T2(&expl_temp);
  emxInitStruct_struct_T2(&b_expl_temp);
  emxInit_real_T(&b_Ylagged, 2);
  emxInit_real_T(&b_yin, 1);
  for (ilsh = 0; ilsh < i; ilsh++) {
    lsh = LSH_data[ilsh];
    /*  ilsh=ilsh+1; */
    sworst = rtInf;
    if (ilsh + 1 > 1) {
      nsamp_size_idx_0 = nsampsubsequentsteps_size[0];
      nsamp_size_idx_1 = nsampsubsequentsteps_size[1];
      loop_ub = nsampsubsequentsteps_size[0] * nsampsubsequentsteps_size[1];
      if (0 <= loop_ub - 1) {
        memcpy(&nsamp_data[0], &nsampsubsequentsteps_data[0],
               loop_ub * sizeof(double));
      }
      bestrLSH = bestrdiv2;
      nx = (int)bestrdiv2;
      i1 = out->residuals->size[0];
      out->residuals->size[0] = (int)bestrdiv2;
      emxEnsureCapacity_real_T(out->residuals, i1);
      for (i1 = 0; i1 < nx; i1++) {
        out->residuals->data[i1] = rtInf;
      }
      i1 = bestbetas->size[0] * bestbetas->size[1];
      bestbetas->size[0] = (int)bestrdiv2;
      bestbetas->size[1] = (int)p;
      emxEnsureCapacity_real_T(bestbetas, i1);
      bestbetas_data = bestbetas->data;
      loop_ub = (int)bestrdiv2 * (int)p;
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestbetas_data[i1] = 0.0;
      }
      i1 = bestyhat->size[0] * bestyhat->size[1];
      bestyhat->size[0] = T;
      bestyhat->size[1] = (int)bestrdiv2;
      emxEnsureCapacity_real_T(bestyhat, i1);
      bestyhat_data = bestyhat->data;
      loop_ub = T * (int)bestrdiv2;
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestyhat_data[i1] = 0.0;
      }
    } else {
      i1 = bestbetas->size[0] * bestbetas->size[1];
      bestbetas->size[0] = (int)varargin_12_bestr;
      bestbetas->size[1] = (int)p;
      emxEnsureCapacity_real_T(bestbetas, i1);
      bestbetas_data = bestbetas->data;
      loop_ub = (int)varargin_12_bestr * (int)p;
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestbetas_data[i1] = 0.0;
      }
      i1 = bestyhat->size[0] * bestyhat->size[1];
      bestyhat->size[0] = T;
      bestyhat->size[1] = (int)varargin_12_bestr;
      emxEnsureCapacity_real_T(bestyhat, i1);
      bestyhat_data = bestyhat->data;
      loop_ub = T * (int)varargin_12_bestr;
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestyhat_data[i1] = 0.0;
      }
      i1 = out->residuals->size[0];
      out->residuals->size[0] = (int)varargin_12_bestr;
      emxEnsureCapacity_real_T(out->residuals, i1);
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        out->residuals->data[i1] = rtInf;
      }
      bestrLSH = varargin_12_bestr;
    }
    if (lshiftYN.contents == 1.0) {
      /*  Xlshift = explanatory variable associated with */
      /*  level shift Xlshift is 0 up to lsh-1 and 1 from */
      /*  lsh to T */
      a = LSH_data[ilsh];
      i1 = beta0->size[0];
      beta0->size[0] = (int)(a - 1.0) + (int)(((double)T - a) + 1.0);
      emxEnsureCapacity_real_T(beta0, i1);
      beta0_data = beta0->data;
      loop_ub = (int)(a - 1.0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        beta0_data[i1] = 0.0;
      }
      loop_ub = (int)(((double)T - LSH_data[ilsh]) + 1.0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        beta0_data[i1 + (int)(LSH_data[ilsh] - 1.0)] = 1.0;
      }
      i1 = Xlshift.contents->size[0] * Xlshift.contents->size[1];
      Xlshift.contents->size[0] = beta0->size[0];
      Xlshift.contents->size[1] = 1;
      emxEnsureCapacity_real_T(Xlshift.contents, i1);
      loop_ub = beta0->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xlshift.contents->data[i1] = beta0_data[i1];
      }
      i1 = Ylagged->size[0] * Ylagged->size[1];
      Ylagged->size[0] = nsamp_size_idx_0;
      Ylagged->size[1] = nsamp_size_idx_1;
      emxEnsureCapacity_real_T(Ylagged, i1);
      betaini_data = Ylagged->data;
      loop_ub = nsamp_size_idx_0 * nsamp_size_idx_1 - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        betaini_data[i1] = nsamp_data[i1];
      }
      c_subsets(Ylagged, (double)T - 1.0, pini + 1.0, ncombLSH, out->invXX,
                &nselected);
      if ((int)nselected != 0) {
        nx = (int)nselected;
      } else if (((int)nselected != 0) && ((int)(pini + 1.0) != 0)) {
        nx = (int)nselected;
      } else {
        nx = (int)nselected;
        if (nx < 0) {
          nx = 0;
        }
        if ((int)nselected > nx) {
          nx = (int)nselected;
        }
      }
      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes || ((int)nselected != 0)) {
        b_input_sizes_idx_1 = 1;
      } else {
        b_input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes ||
          (((int)nselected != 0) && ((int)(pini + 1.0) != 0))) {
        sizes_idx_1 = (int)(pini + 1.0);
      } else {
        sizes_idx_1 = 0;
      }
      i1 = C->size[0] * C->size[1];
      C->size[0] = nx;
      C->size[1] = b_input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(C, i1);
      C_data = C->data;
      loop_ub = b_input_sizes_idx_1;
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (j = 0; j < nx; j++) {
          C_data[j] = LSH_data[ilsh];
        }
      }
      for (i1 = 0; i1 < sizes_idx_1; i1++) {
        for (j = 0; j < nx; j++) {
          C_data[j + C->size[0] * (i1 + b_input_sizes_idx_1)] = 0.0;
        }
      }
      /*  Make sure that observation lsh is always included in the subset */
      /*  and that the subset contains at least one unit smaller than lsh */
      i1 = (int)nselected;
      if (0 <= (int)nselected - 1) {
        i3 = out->invXX->size[1];
        g_loop_ub = out->invXX->size[1];
        end = out->invXX->size[1] - 1;
      }
      for (nx = 0; nx < i1; nx++) {
        j = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = i3;
        emxEnsureCapacity_real_T(Cr, j);
        Cr_data = Cr->data;
        for (j = 0; j < g_loop_ub; j++) {
          Cr_data[j] = out->invXX->data[nx + out->invXX->size[0] * j];
        }
        /*  Observations greater or equal than lsh will be increased by one */
        vlen = 0;
        for (hmin = 0; hmin <= end; hmin++) {
          if (Cr_data[hmin] >= lsh) {
            vlen++;
          }
        }
        j = r->size[0] * r->size[1];
        r->size[0] = 1;
        r->size[1] = vlen;
        emxEnsureCapacity_int32_T(r, j);
        ia_data = r->data;
        sizes_idx_1 = 0;
        for (hmin = 0; hmin <= end; hmin++) {
          if (Cr_data[hmin] >= lsh) {
            ia_data[sizes_idx_1] = hmin + 1;
            sizes_idx_1++;
          }
        }
        loop_ub = r->size[1];
        for (j = 0; j < loop_ub; j++) {
          Cr_data[ia_data[j] - 1] =
              out->invXX->data[nx + out->invXX->size[0] * (ia_data[j] - 1)] +
              1.0;
        }
        /*  Make sure there is at least one observation smaller than lsh */
        /*  if sum(boo)==0 then in the subset there is no observation */
        /*  which is smaller than lsh */
        j = x->size[0] * x->size[1];
        x->size[0] = 1;
        x->size[1] = Cr->size[1];
        emxEnsureCapacity_boolean_T(x, j);
        x_data = x->data;
        loop_ub = Cr->size[1];
        for (j = 0; j < loop_ub; j++) {
          x_data[j] = (Cr_data[j] < lsh);
        }
        vlen = x->size[1];
        if (x->size[1] == 0) {
          sizes_idx_1 = 0;
        } else {
          sizes_idx_1 = x_data[0];
          for (input_sizes_idx_1 = 2; input_sizes_idx_1 <= vlen;
               input_sizes_idx_1++) {
            sizes_idx_1 += x_data[input_sizes_idx_1 - 1];
          }
        }
        if (sizes_idx_1 < 1) {
          Cr_data[0] = b_randsample(lsh - 1.0);
        }
        j = (2 <= C->size[1]);
        loop_ub = Cr->size[1];
        for (input_sizes_idx_1 = 0; input_sizes_idx_1 < loop_ub;
             input_sizes_idx_1++) {
          C_data[nx + C->size[0] * (j + input_sizes_idx_1)] =
              Cr_data[input_sizes_idx_1];
        }
      }
    } else {
      /*  If there is no level shift component */
      i1 = Ylagged->size[0] * Ylagged->size[1];
      Ylagged->size[0] = nsamp_size_idx_0;
      Ylagged->size[1] = nsamp_size_idx_1;
      emxEnsureCapacity_real_T(Ylagged, i1);
      betaini_data = Ylagged->data;
      loop_ub = nsamp_size_idx_0 * nsamp_size_idx_1 - 1;
      for (i1 = 0; i1 <= loop_ub; i1++) {
        betaini_data[i1] = nsamp_data[i1];
      }
      c_subsets(Ylagged, T, pini, ncomb, out->invXX, &nselected);
      i1 = C->size[0] * C->size[1];
      C->size[0] = out->invXX->size[0];
      C->size[1] = out->invXX->size[1];
      emxEnsureCapacity_real_T(C, i1);
      C_data = C->data;
      loop_ub = out->invXX->size[0] * out->invXX->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        C_data[i1] = out->invXX->data[i1];
      }
    }
    /*  Store indexes of extracted subsets if nargout is greater than 1 */
    /*  yhatall= matrix which will contain fitted values for each extracted */
    /*  subset */
    /*  yhatall=zeros(T,nselected); */
    /*  WEIi = matrix which will contain indication of the units forming best */
    /*  h subset. Each column refers to a subset */
    /*  ij is a scalar used to ensure that the best first bestr solutions are */
    /*  stored in order to be brought to full convergence */
    /*  subsets are stored */
    ij = 1.0;
    /*  Loop through all nselected subsamples */
    i1 = (int)nselected;
    if (0 <= (int)nselected - 1) {
      b_loop_ub = (int)p;
      c_loop_ub = C->size[1];
      d_loop_ub = C->size[1];
      LSH_idx_0 = C->size[1];
      e_loop_ub = C->size[1];
    }
    for (hmin = 0; hmin < i1; hmin++) {
      /*  Initialize b0 as vector of zeroes for each subset */
      /*  The order of the elements of b0 is as follows */
      /*  1) trend elements (if present). If the trend is order two r are */
      /*  r+1 coefficients if the intercept is present otherwise there are */
      /*  just r components (Xtrend) */
      /*  2) linear part of seasonal component 2, 4, 6, ..., s-2, s-1
       * coefficients */
      /*  (if present)   (Xseaso) */
      /*  3) coefficients associated with the matrix of explanatory variables */
      /*  which have a potential effect on the time series under study (X) */
      /*  4) non linear part of seasonal component, that is varying amplitude.
       */
      /*  If varying amplitude is of order k there are k coefficients (if */
      /*  present) (Seq) */
      /*  5) level shift component (if present). In this case there are two */
      /*  coefficients, the second (which is also the last element of */
      /*  vector b0) is an integer which specifies the time in which level */
      /*  shift takes place and the first (which is also the penultime */
      /*  element of vector b0) is a real number which identifies the */
      /*  magnitude of the upward (downward) level shift (Xlshift) */
      j = beta0->size[0];
      beta0->size[0] = (int)p;
      emxEnsureCapacity_real_T(beta0, j);
      beta0_data = beta0->data;
      for (j = 0; j < b_loop_ub; j++) {
        beta0_data[j] = 0.0;
      }
      /*  extract a subset of size p */
      if (lshiftYN.contents == 0.0) {
        Xlshift.contents->size[0] = 0;
        Xlshift.contents->size[1] = 0;
      }
      if ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0)) {
        nx = Xsel.contents->size[0];
      } else if ((Xlshift.contents->size[0] != 0) &&
                 (Xlshift.contents->size[1] != 0)) {
        nx = Xlshift.contents->size[0];
      } else {
        nx = Xsel.contents->size[0];
        if (Xlshift.contents->size[0] > Xsel.contents->size[0]) {
          nx = Xlshift.contents->size[0];
        }
      }
      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes ||
          ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0))) {
        loop_ub = Xsel.contents->size[1];
      } else {
        loop_ub = 0;
      }
      if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
                                   (Xlshift.contents->size[1] != 0))) {
        vlen = Xlshift.contents->size[1];
      } else {
        vlen = 0;
      }
      j = Ylagged->size[0] * Ylagged->size[1];
      Ylagged->size[0] = nx;
      Ylagged->size[1] = loop_ub + vlen;
      emxEnsureCapacity_real_T(Ylagged, j);
      betaini_data = Ylagged->data;
      for (j = 0; j < loop_ub; j++) {
        for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx;
             input_sizes_idx_1++) {
          betaini_data[input_sizes_idx_1 + Ylagged->size[0] * j] =
              Xsel.contents->data[input_sizes_idx_1 + nx * j];
        }
      }
      for (j = 0; j < vlen; j++) {
        for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx;
             input_sizes_idx_1++) {
          betaini_data[input_sizes_idx_1 + Ylagged->size[0] * loop_ub] =
              Xlshift.contents->data[input_sizes_idx_1];
        }
      }
      /*  Preliminary OLS estimates (including tentative level shift) based */
      /*  just on the units forming subset */
      j = bsb.contents->size[0];
      bsb.contents->size[0] = c_loop_ub;
      emxEnsureCapacity_real_T(bsb.contents, j);
      for (j = 0; j < c_loop_ub; j++) {
        bsb.contents->data[j] = C_data[hmin + C->size[0] * j];
      }
      loop_ub = Ylagged->size[1];
      j = b_Ylagged->size[0] * b_Ylagged->size[1];
      b_Ylagged->size[0] = d_loop_ub;
      b_Ylagged->size[1] = Ylagged->size[1];
      emxEnsureCapacity_real_T(b_Ylagged, j);
      p_all_data = b_Ylagged->data;
      for (j = 0; j < loop_ub; j++) {
        for (input_sizes_idx_1 = 0; input_sizes_idx_1 < d_loop_ub;
             input_sizes_idx_1++) {
          p_all_data[input_sizes_idx_1 + b_Ylagged->size[0] * j] =
              betaini_data[((int)C_data[hmin + C->size[0] * input_sizes_idx_1] +
                            Ylagged->size[0] * j) -
                           1];
        }
      }
      j = b_yin->size[0];
      b_yin->size[0] = LSH_idx_0;
      emxEnsureCapacity_real_T(b_yin, j);
      selWithoutLastHarmonic_data = b_yin->data;
      for (j = 0; j < e_loop_ub; j++) {
        selWithoutLastHarmonic_data[j] =
            yin.contents->data[(int)C_data[hmin + C->size[0] * j] - 1];
      }
      mldivide(b_Ylagged, b_yin, betaini);
      betaini_data = betaini->data;
      /*  Check if betaini contains NaN */
      j = r1->size[0];
      r1->size[0] = betaini->size[0];
      emxEnsureCapacity_boolean_T(r1, j);
      x_data = r1->data;
      loop_ub = betaini->size[0];
      for (j = 0; j < loop_ub; j++) {
        x_data[j] = rtIsNaN(betaini_data[j]);
      }
      if (!b_any(r1)) {
        /*  The first pini components are associated with */
        /*  trend and seasonal (without varying */
        /*  amplitude) and explanatory variables */
        if (1.0 > pini) {
          loop_ub = 0;
        } else {
          loop_ub = (int)pini;
        }
        for (j = 0; j < loop_ub; j++) {
          beta0_data[j] = betaini_data[j];
        }
        if (lshiftYN.contents == 1.0) {
          /*  The last two components of beta0 are the associated with */
          /*  level shift. More precisely penultimate position is for the */
          /*  coefficient of level shift and, final position is the integer */
          /*  which specifies the starting point of level shift */
          nx = beta0->size[0] - 1;
          beta0_data[beta0->size[0] - 2] = betaini_data[betaini->size[0] - 1];
          beta0_data[nx] = lsh;
        }
        if (varampl.contents > 0.0) {
          if (verLess2016b.contents) {
            ALSbsxfun(&reftolALS, &refstepsALS, &indlinsc, &Xseaso, &bsb,
                      &isemptyX, &lshiftYN, &Xtrend, &Seq, &varampl, &Xlshift,
                      &X, &yin, &trend, &nexpl, &otherind, beta0,
                      beta.contents);
          } else {
            ALS(&Seq, &bsb, &Xseaso, &Xtrend, &yin, &trend, &nexpl, &varampl,
                &isemptyX, &lshiftYN, &Xlshift, &X, &reftolALS, &refstepsALS,
                &indlinsc, &otherind, beta0, beta.contents);
          }
          /*   betaoutCHK=ALSbsxfun(beta0); */
          /*  dd=1; */
        } else {
          j = beta.contents->size[0];
          beta.contents->size[0] = beta0->size[0];
          emxEnsureCapacity_real_T(beta.contents, j);
          loop_ub = beta0->size[0];
          for (j = 0; j < loop_ub; j++) {
            beta.contents->data[j] = beta0_data[j];
          }
          /* disp(['lsh' num2str(lsh)]) */
          /* disp(beta0) */
          /* disp('------') */
        }
        /*  Compute  fitted values (for all units). Therefore recall function */
        /*  lik but this time computed using all observations */
        loop_ub = seq.contents->size[0];
        j = bsb.contents->size[0];
        bsb.contents->size[0] = seq.contents->size[0];
        emxEnsureCapacity_real_T(bsb.contents, j);
        for (j = 0; j < loop_ub; j++) {
          bsb.contents->data[j] = seq.contents->data[j];
        }
        /*  Procedure lik computes yhat (fitted values for all the */
        /*  observations using parameter estimates based on bsb). vector yhat */
        /*  will be used inside procedure IRWLSreg as starting value of the */
        /*  iterations (concentration steps) */
        lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
            &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat,
            beta.contents);
        /*  1(a) ii. -  Now apply concentration steps */
        j = beta0->size[0];
        beta0->size[0] = beta.contents->size[0];
        emxEnsureCapacity_real_T(beta0, j);
        beta0_data = beta0->data;
        loop_ub = beta.contents->size[0] - 1;
        for (j = 0; j <= loop_ub; j++) {
          beta0_data[j] = beta.contents->data[j];
        }
        IRWLSreg(&reftolALS, &refstepsALS, &indlinsc, &Xseaso, &bsb, &isemptyX,
                 &lshiftYN, &Xtrend, &Seq, &varampl, &Xlshift, &X, &yin, &trend,
                 &nexpl, &otherind, &seasonal, &s, &yhatseaso, &yhat, &beta,
                 &constr, &Xsel, &verLess2016b, &seq, &weights, &zerT1,
                 yin.contents, beta0, varargin_12_refsteps, varargin_12_reftol,
                 h, &b_expl_temp);
        j = expl_temp.betarw->size[0];
        expl_temp.betarw->size[0] = b_expl_temp.betarw->size[0];
        emxEnsureCapacity_real_T(expl_temp.betarw, j);
        loop_ub = b_expl_temp.betarw->size[0];
        for (j = 0; j < loop_ub; j++) {
          expl_temp.betarw->data[j] = b_expl_temp.betarw->data[j];
        }
        /*  Store weights */
        /*  Store fitted values for each subset */
        /*  yhatall(:,i)=tmp.yhat; */
        /*  1(c) Consider only the 10 subsets that yield the lowest objective */
        /*  function so far. */
        if (ij > bestrLSH) {
          if (b_expl_temp.numscale2rw < sworst) {
            /*  Store numscale2rw, betarw and indexes of the units */
            /*  forming the best subset for the current iteration */
            /*  Find position of the maximum value of previously */
            /*  stored best numerator of squared scaled */
            c_maximum(out->residuals, &sworst, &sizes_idx_1);
            out->residuals->data[sizes_idx_1 - 1] = b_expl_temp.numscale2rw;
            loop_ub = expl_temp.betarw->size[0];
            for (j = 0; j < loop_ub; j++) {
              bestbetas_data[(sizes_idx_1 + bestbetas->size[0] * j) - 1] =
                  expl_temp.betarw->data[j];
            }
            loop_ub = yhat.contents->size[0];
            for (j = 0; j < loop_ub; j++) {
              bestyhat_data[j + bestyhat->size[0] * (sizes_idx_1 - 1)] =
                  yhat.contents->data[j];
            }
            /*  sworst = best scale among the bestr found up to now */
            sworst = b_maximum(out->residuals);
          }
        } else {
          out->residuals->data[(int)ij - 1] = b_expl_temp.numscale2rw;
          loop_ub = expl_temp.betarw->size[0];
          for (j = 0; j < loop_ub; j++) {
            bestbetas_data[((int)ij + bestbetas->size[0] * j) - 1] =
                expl_temp.betarw->data[j];
          }
          loop_ub = yhat.contents->size[0];
          for (j = 0; j < loop_ub; j++) {
            bestyhat_data[j + bestyhat->size[0] * ((int)ij - 1)] =
                yhat.contents->data[j];
          }
          /*  sworst = best scale among the bestr found up to now */
          sworst = b_maximum(out->residuals);
          ij++;
          j = brob->size[0];
          brob->size[0] = 1;
          emxEnsureCapacity_real_T(brob, j);
          brob_data = brob->data;
          brob_data[0] = 1.0;
        }
      }
    }
    /*  Store for each tentative level shift the number of times each unit */
    /*  belonged to the best subset */
    /*  1 (b) */
    /*  With the 0 subsets that yield the lowest objective function so far. */
    /*  Apply C-steps to these until full convergence. */
    /*  perform C-steps on best 'bestr' solutions, till convergence or for a */
    /*  maximum of refstepsbestr steps using a convergence tolerance as */
    /*  specified by scalar reftolbestr */
    /*  If ilsh >1 it is necessary also to consider the 10 best solutions from
     */
    /*  step j-1 */
    if (ilsh + 1 != 1) {
      if ((bestyhat->size[0] != 0) && (bestyhat->size[1] != 0)) {
        nx = bestyhat->size[0];
      } else if ((bestyhattoadd->size[0] != 0) &&
                 (bestyhattoadd->size[1] != 0)) {
        nx = bestyhattoadd->size[0];
      } else {
        nx = bestyhat->size[0];
        if (bestyhattoadd->size[0] > bestyhat->size[0]) {
          nx = bestyhattoadd->size[0];
        }
      }
      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes ||
          ((bestyhat->size[0] != 0) && (bestyhat->size[1] != 0))) {
        loop_ub = bestyhat->size[1];
      } else {
        loop_ub = 0;
      }
      if (empty_non_axis_sizes ||
          ((bestyhattoadd->size[0] != 0) && (bestyhattoadd->size[1] != 0))) {
        vlen = bestyhattoadd->size[1];
      } else {
        vlen = 0;
      }
      for (i1 = 0; i1 < loop_ub; i1++) {
        for (j = 0; j < nx; j++) {
          bestyhat_data[j + bestyhat->size[0] * i1] =
              bestyhat_data[j + nx * i1];
        }
      }
      i1 = bestyhat->size[0] * bestyhat->size[1];
      bestyhat->size[0] = nx;
      bestyhat->size[1] = loop_ub + vlen;
      emxEnsureCapacity_real_T(bestyhat, i1);
      bestyhat_data = bestyhat->data;
      for (i1 = 0; i1 < vlen; i1++) {
        for (j = 0; j < nx; j++) {
          bestyhat_data[j + bestyhat->size[0] * (i1 + loop_ub)] =
              bestyhattoadd_data[j + nx * i1];
        }
      }
      if ((bestbetas->size[0] != 0) && (bestbetas->size[1] != 0)) {
        nx = bestbetas->size[1];
      } else if ((bestbetastoadd->size[0] != 0) &&
                 (bestbetastoadd->size[1] != 0)) {
        nx = bestbetastoadd->size[1];
      } else {
        nx = bestbetas->size[1];
        if (bestbetastoadd->size[1] > bestbetas->size[1]) {
          nx = bestbetastoadd->size[1];
        }
      }
      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes ||
          ((bestbetas->size[0] != 0) && (bestbetas->size[1] != 0))) {
        loop_ub = bestbetas->size[0];
      } else {
        loop_ub = 0;
      }
      if (empty_non_axis_sizes ||
          ((bestbetastoadd->size[0] != 0) && (bestbetastoadd->size[1] != 0))) {
        sizes_idx_1 = bestbetastoadd->size[0];
      } else {
        sizes_idx_1 = 0;
      }
      i1 = b_Ylagged->size[0] * b_Ylagged->size[1];
      b_Ylagged->size[0] = loop_ub + sizes_idx_1;
      b_Ylagged->size[1] = nx;
      emxEnsureCapacity_real_T(b_Ylagged, i1);
      p_all_data = b_Ylagged->data;
      for (i1 = 0; i1 < nx; i1++) {
        for (j = 0; j < loop_ub; j++) {
          p_all_data[j + b_Ylagged->size[0] * i1] =
              bestbetas_data[j + loop_ub * i1];
        }
      }
      for (i1 = 0; i1 < nx; i1++) {
        for (j = 0; j < sizes_idx_1; j++) {
          p_all_data[(j + loop_ub) + b_Ylagged->size[0] * i1] =
              bestbetastoadd_data[j + sizes_idx_1 * i1];
        }
      }
      i1 = bestbetas->size[0] * bestbetas->size[1];
      bestbetas->size[0] = b_Ylagged->size[0];
      bestbetas->size[1] = b_Ylagged->size[1];
      emxEnsureCapacity_real_T(bestbetas, i1);
      bestbetas_data = bestbetas->data;
      loop_ub = b_Ylagged->size[0] * b_Ylagged->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestbetas_data[i1] = p_all_data[i1];
      }
    }
    /*  numsuperbestscale2 = numerator of estimate of super best squared */
    /*  scale */
    nselected = rtInf;
    /*  Just to have an idea about y and yhat for a particular lsh value */
    /*  plot([y bestyhat(:,1)]) */
    if (0 <= (int)varargin_12_bestr - 1) {
      i2 = bestyhat->size[0];
      f_loop_ub = bestyhat->size[0];
      i4 = bestbetas->size[1];
      h_loop_ub = bestbetas->size[1];
    }
    for (nx = 0; nx < loop_ub_tmp; nx++) {
      i1 = yhat.contents->size[0];
      yhat.contents->size[0] = i2;
      emxEnsureCapacity_real_T(yhat.contents, i1);
      for (i1 = 0; i1 < f_loop_ub; i1++) {
        yhat.contents->data[i1] = bestyhat_data[i1 + bestyhat->size[0] * nx];
      }
      i1 = b_yin->size[0];
      b_yin->size[0] = i4;
      emxEnsureCapacity_real_T(b_yin, i1);
      selWithoutLastHarmonic_data = b_yin->data;
      for (i1 = 0; i1 < h_loop_ub; i1++) {
        selWithoutLastHarmonic_data[i1] =
            bestbetas_data[nx + bestbetas->size[0] * i1];
      }
      IRWLSreg(&reftolALS, &refstepsALS, &indlinsc, &Xseaso, &bsb, &isemptyX,
               &lshiftYN, &Xtrend, &Seq, &varampl, &Xlshift, &X, &yin, &trend,
               &nexpl, &otherind, &seasonal, &s, &yhatseaso, &yhat, &beta,
               &constr, &Xsel, &verLess2016b, &seq, &weights, &zerT1,
               yin.contents, b_yin, varargin_12_refstepsbestr,
               varargin_12_reftolbestr, h, &expl_temp);
      /*  Store information about the units forming best h subset among the */
      /*  10 best */
      allnumscale2_data[nx] = expl_temp.numscale2rw;
      /*  allscales(i,2)=tmp.betarw(end); */
      if (expl_temp.numscale2rw < nselected) {
        /*  brob = superbestbeta */
        i1 = brob->size[0];
        brob->size[0] = expl_temp.betarw->size[0];
        emxEnsureCapacity_real_T(brob, i1);
        brob_data = brob->data;
        loop_ub = expl_temp.betarw->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          brob_data[i1] = expl_temp.betarw->data[i1];
        }
        /*  bs = superbestsubset, units forming best subset according to */
        /*  fastlts */
        /*  bs = bestsubsetall(ii,:); */
        i1 = yhatrob->size[0];
        yhatrob->size[0] = expl_temp.yhat->size[0];
        emxEnsureCapacity_real_T(yhatrob, i1);
        yhatrob_data = yhatrob->data;
        loop_ub = expl_temp.yhat->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          yhatrob_data[i1] = expl_temp.yhat->data[i1];
        }
        nselected = expl_temp.numscale2rw;
        ibest = nx + 1U;
        i1 = weightsst->size[0];
        weightsst->size[0] = expl_temp.weights->size[0];
        emxEnsureCapacity_boolean_T(weightsst, i1);
        weightsst_data = weightsst->data;
        loop_ub = expl_temp.weights->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          weightsst_data[i1] = expl_temp.weights->data[i1];
        }
      }
    }
    /*  Store the bestrdiv2 best values of target function */
    loop_ub = allnumscale2->size[0];
    i1 = beta0->size[0];
    beta0->size[0] = allnumscale2->size[0];
    emxEnsureCapacity_real_T(beta0, i1);
    beta0_data = beta0->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta0_data[i1] = allnumscale2_data[i1];
    }
    sort(beta0, ia);
    ia_data = ia->data;
    i1 = betaini->size[0];
    betaini->size[0] = ia->size[0];
    emxEnsureCapacity_real_T(betaini, i1);
    betaini_data = betaini->data;
    loop_ub = ia->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      betaini_data[i1] = ia_data[i1];
    }
    if (1.0 > bestrdiv2) {
      loop_ub = 0;
    } else {
      loop_ub = (int)bestrdiv2;
    }
    vlen = bestyhat->size[0];
    i1 = bestyhattoadd->size[0] * bestyhattoadd->size[1];
    bestyhattoadd->size[0] = bestyhat->size[0];
    bestyhattoadd->size[1] = loop_ub;
    emxEnsureCapacity_real_T(bestyhattoadd, i1);
    bestyhattoadd_data = bestyhattoadd->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      for (j = 0; j < vlen; j++) {
        bestyhattoadd_data[j + bestyhattoadd->size[0] * i1] =
            bestyhat_data[j + bestyhat->size[0] * ((int)betaini_data[i1] - 1)];
      }
    }
    if (1.0 > bestrdiv2) {
      loop_ub = 0;
    } else {
      loop_ub = (int)bestrdiv2;
    }
    vlen = bestbetas->size[1];
    i1 = bestbetastoadd->size[0] * bestbetastoadd->size[1];
    bestbetastoadd->size[0] = loop_ub;
    bestbetastoadd->size[1] = bestbetas->size[1];
    emxEnsureCapacity_real_T(bestbetastoadd, i1);
    bestbetastoadd_data = bestbetastoadd->data;
    for (i1 = 0; i1 < vlen; i1++) {
      for (j = 0; j < loop_ub; j++) {
        bestbetastoadd_data[j + bestbetastoadd->size[0] * i1] =
            bestbetas_data[((int)betaini_data[j] + bestbetas->size[0] * i1) -
                           1];
      }
    }
    /*  The last element of estimated beta coefficients is the point in */
    /*  which level shift takes place. This has to be increased by one */
    /*  unit. Please note that betas are stored in rows therefore we have */
    /*  to change the last column */
    i1 = b_yin->size[0];
    b_yin->size[0] = loop_ub;
    emxEnsureCapacity_real_T(b_yin, i1);
    selWithoutLastHarmonic_data = b_yin->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      selWithoutLastHarmonic_data[i1] =
          bestbetastoadd_data[i1 + bestbetastoadd->size[0] *
                                       (bestbetas->size[1] - 1)] +
          1.0;
    }
    loop_ub = b_yin->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      bestbetastoadd_data[i1 +
                          bestbetastoadd->size[0] * (bestbetas->size[1] - 1)] =
          selWithoutLastHarmonic_data[i1];
    }
    numscale2LSH_data[ilsh + numscale2LSH->size[0]] = nselected;
    numscale2LSH_data[ilsh + numscale2LSH->size[0] * 2] = ibest;
    loop_ub = brob->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      brobLSH_data[i1 + brobLSH->size[0] * ilsh] = brob_data[i1];
    }
    /*  plot(seq,[y yhatrob]) */
    /*  title(['Level shift in step t=' num2str(LSH(ilsh))]) */
    loop_ub = allnumscale2->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->numscale2->data[i1 + out->numscale2->size[0] * ilsh] =
          allnumscale2_data[i1];
    }
    nselected = sqrt(nselected / h);
    loop_ub = yin.contents->size[0];
    if (yin.contents->size[0] == yhatrob->size[0]) {
      i1 = beta0->size[0];
      beta0->size[0] = yin.contents->size[0];
      emxEnsureCapacity_real_T(beta0, i1);
      beta0_data = beta0->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        beta0_data[i1] =
            (yin.contents->data[i1] - yhatrob_data[i1]) / nselected;
      }
    } else {
      ld_binary_expand_op(beta0, &yin, yhatrob, nselected);
      beta0_data = beta0->data;
    }
    loop_ub = beta0->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->RES->data[i1 + out->RES->size[0] * ilsh] = beta0_data[i1];
    }
    nx = beta0->size[0];
    i1 = b_yin->size[0];
    b_yin->size[0] = beta0->size[0];
    emxEnsureCapacity_real_T(b_yin, i1);
    selWithoutLastHarmonic_data = b_yin->data;
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
      selWithoutLastHarmonic_data[input_sizes_idx_1] =
          fabs(beta0_data[input_sizes_idx_1]);
    }
    loop_ub = weightsst->size[0];
    if (weightsst->size[0] == b_yin->size[0]) {
      a = 2.58 * factor;
      for (i1 = 0; i1 < loop_ub; i1++) {
        weightsst_data[i1] =
            (weightsst_data[i1] || (selWithoutLastHarmonic_data[i1] < a));
      }
    } else {
      kd_binary_expand_op(weightsst, b_yin, factor);
      weightsst_data = weightsst->data;
    }
    /*  disp(sum(weightsst)) */
    loop_ub = weightsst->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      Weights_data[i1 + Weights->size[0] * ilsh] = weightsst_data[i1];
    }
    /*  Store the indexes among the bestr best, forming the bestrdiv2 best */
    /*  estimates of the target function (target function = numerator of */
    /*  squared scale) */
    if (1.0 > varargin_18) {
      loop_ub = 0;
    } else {
      loop_ub = (int)varargin_18;
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      NumScale2ind_data[i1 + NumScale2ind->size[0] * ilsh] =
          (int)betaini_data[i1];
    }
    if ((lshiftYN.contents == 1.0) && varargin_16) {
      Rprintf("Level shift for t=%.0f\n", LSH_data[ilsh]);
      //fflush(stdout);
    }
  }
  emxFreeStruct_struct_T2(&b_expl_temp);
  emxFreeStruct_struct_T2(&expl_temp);
  emxFree_boolean_T(&r1);
  emxFree_boolean_T(&x);
  emxFree_int32_T(&r);
  emxFree_real_T(&C);
  emxFree_real_T(&bestyhat);
  emxFree_real_T(&bestbetas);
  emxFree_real_T(&bestbetastoadd);
  emxFreeStruct_captured_var1(&zerT1);
  emxFreeStruct_captured_var(&indlinsc);
  emxFreeStruct_captured_var(&otherind);
  /*  save RES to output structure (these residuals can be used for example to
   */
  /*  prouduce the double wedge plot, see function wedgeplot for more details)
   */
  i = Ylagged->size[0] * Ylagged->size[1];
  Ylagged->size[0] = Weights->size[0];
  Ylagged->size[1] = Weights->size[1];
  emxEnsureCapacity_real_T(Ylagged, i);
  betaini_data = Ylagged->data;
  loop_ub = Weights->size[0] * Weights->size[1];
  for (i = 0; i < loop_ub; i++) {
    betaini_data[i] = Weights_data[i];
  }
  emxFree_boolean_T(&Weights);
  i = Ylagged->size[1];
  emxInit_int32_T(&r2, 1);
  emxInit_int32_T(&r3, 1);
  emxInit_int32_T(&r4, 1);
  for (j = 0; j < i; j++) {
    loop_ub = Ylagged->size[0];
    i1 = weightsst->size[0];
    weightsst->size[0] = Ylagged->size[0];
    emxEnsureCapacity_boolean_T(weightsst, i1);
    weightsst_data = weightsst->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      weightsst_data[i1] = (betaini_data[i1 + Ylagged->size[0] * j] == 1.0);
    }
    end = weightsst->size[0] - 1;
    vlen = 0;
    for (hmin = 0; hmin <= end; hmin++) {
      if (weightsst_data[hmin]) {
        vlen++;
      }
    }
    i1 = r2->size[0];
    r2->size[0] = vlen;
    emxEnsureCapacity_int32_T(r2, i1);
    ia_data = r2->data;
    sizes_idx_1 = 0;
    for (hmin = 0; hmin <= end; hmin++) {
      if (weightsst_data[hmin]) {
        ia_data[sizes_idx_1] = hmin + 1;
        sizes_idx_1++;
      }
    }
    end = weightsst->size[0] - 1;
    vlen = 0;
    for (hmin = 0; hmin <= end; hmin++) {
      if (weightsst_data[hmin]) {
        vlen++;
      }
    }
    i1 = r3->size[0];
    r3->size[0] = vlen;
    emxEnsureCapacity_int32_T(r3, i1);
    r5 = r3->data;
    sizes_idx_1 = 0;
    for (hmin = 0; hmin <= end; hmin++) {
      if (weightsst_data[hmin]) {
        r5[sizes_idx_1] = hmin + 1;
        sizes_idx_1++;
      }
    }
    loop_ub = r2->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      betaini_data[(r5[i1] + Ylagged->size[0] * j) - 1] =
          seq.contents->data[ia_data[i1] - 1];
    }
    end = weightsst->size[0] - 1;
    vlen = 0;
    for (hmin = 0; hmin <= end; hmin++) {
      if (!weightsst_data[hmin]) {
        vlen++;
      }
    }
    i1 = r4->size[0];
    r4->size[0] = vlen;
    emxEnsureCapacity_int32_T(r4, i1);
    ia_data = r4->data;
    sizes_idx_1 = 0;
    for (hmin = 0; hmin <= end; hmin++) {
      if (!weightsst_data[hmin]) {
        ia_data[sizes_idx_1] = hmin + 1;
        sizes_idx_1++;
      }
    }
    loop_ub = r4->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      betaini_data[(ia_data[i1] + Ylagged->size[0] * j) - 1] = rtNaN;
    }
  }
  emxFree_int32_T(&r4);
  emxFree_int32_T(&r3);
  /*  Store units forming best h subset */
  i = out->Hsubset->size[0] * out->Hsubset->size[1];
  out->Hsubset->size[0] = Ylagged->size[0];
  out->Hsubset->size[1] = Ylagged->size[1];
  emxEnsureCapacity_real_T(out->Hsubset, i);
  loop_ub = Ylagged->size[0] * Ylagged->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Hsubset->data[i] = betaini_data[i];
  }
  loop_ub = numscale2LSH->size[0];
  i = b_yin->size[0];
  b_yin->size[0] = numscale2LSH->size[0];
  emxEnsureCapacity_real_T(b_yin, i);
  selWithoutLastHarmonic_data = b_yin->data;
  for (i = 0; i < loop_ub; i++) {
    selWithoutLastHarmonic_data[i] =
        numscale2LSH_data[i + numscale2LSH->size[0]];
  }
  d_minimum(b_yin, &sworst, &sizes_idx_1);
  loop_ub = brobLSH->size[0];
  i = brob->size[0];
  brob->size[0] = brobLSH->size[0];
  emxEnsureCapacity_real_T(brob, i);
  brob_data = brob->data;
  for (i = 0; i < loop_ub; i++) {
    brob_data[i] = brobLSH_data[i + brobLSH->size[0] * (sizes_idx_1 - 1)];
  }
  /*  Pass from numerator of squared estimate of the scale to proper scale */
  /*  estimate */
  ij = sqrt(numscale2LSH_data[(sizes_idx_1 + numscale2LSH->size[0]) - 1] / h);
  /*  Consistency factor */
  /*  Apply small sample correction factor of Pison et al. */
  ncomb = ij * factor *
          sqrt(corfactorRAW(yin.contents->size[0],
                            h / (double)yin.contents->size[0]));
  emxFree_real_T(&numscale2LSH);
  if (lshiftYN.contents == 1.0) {
    /*  Compute the residuals locally just changing the position of the level */
    /*  shift */
    sworst = varargin_10_wlength;
    a = brobLSH_data[(brobLSH->size[0] + brobLSH->size[0] * (sizes_idx_1 - 1)) -
                     1] -
        varargin_10_wlength;
    bestrLSH =
        brobLSH_data[(brobLSH->size[0] + brobLSH->size[0] * (sizes_idx_1 - 1)) -
                     1] +
        varargin_10_wlength;
    if (rtIsNaN(a) || rtIsNaN(bestrLSH)) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = 1;
      emxEnsureCapacity_real_T(Cr, i);
      Cr_data = Cr->data;
      Cr_data[0] = rtNaN;
    } else if (bestrLSH < a) {
      Cr->size[0] = 1;
      Cr->size[1] = 0;
    } else if ((rtIsInf(a) || rtIsInf(bestrLSH)) && (a == bestrLSH)) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = 1;
      emxEnsureCapacity_real_T(Cr, i);
      Cr_data = Cr->data;
      Cr_data[0] = rtNaN;
    } else if (floor(a) == a) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      loop_ub = (int)floor(bestrLSH - a);
      Cr->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(Cr, i);
      Cr_data = Cr->data;
      for (i = 0; i <= loop_ub; i++) {
        Cr_data[i] = a + (double)i;
      }
    } else {
      eml_float_colon(a, bestrLSH, Cr);
      Cr_data = Cr->data;
    }
    /*  Reduce width of tloc dinamically */
    nselected = c_minimum(LSH);
    lsh = d_maximum(LSH);
    /*  make sure that tloc is in the range LSHmin and LSHmax */
    while (((d_maximum(Cr) > lsh) || (c_minimum(Cr) < nselected)) &&
           (!(sworst == 0.0))) {
      sworst--;
      a = brobLSH_data[(brobLSH->size[0] +
                        brobLSH->size[0] * (sizes_idx_1 - 1)) -
                       1] -
          sworst;
      bestrLSH = brobLSH_data[(brobLSH->size[0] +
                               brobLSH->size[0] * (sizes_idx_1 - 1)) -
                              1] +
                 sworst;
      if (rtIsNaN(a) || rtIsNaN(bestrLSH)) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = 1;
        emxEnsureCapacity_real_T(Cr, i);
        Cr_data = Cr->data;
        Cr_data[0] = rtNaN;
      } else if (bestrLSH < a) {
        Cr->size[0] = 1;
        Cr->size[1] = 0;
      } else if ((rtIsInf(a) || rtIsInf(bestrLSH)) && (a == bestrLSH)) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = 1;
        emxEnsureCapacity_real_T(Cr, i);
        Cr_data = Cr->data;
        Cr_data[0] = rtNaN;
      } else if (floor(a) == a) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        loop_ub = (int)floor(bestrLSH - a);
        Cr->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(Cr, i);
        Cr_data = Cr->data;
        for (i = 0; i <= loop_ub; i++) {
          Cr_data[i] = a + (double)i;
        }
      } else {
        eml_float_colon(a, bestrLSH, Cr);
        Cr_data = Cr->data;
      }
    }
    i = bsb.contents->size[0];
    bsb.contents->size[0] = Cr->size[1];
    emxEnsureCapacity_real_T(bsb.contents, i);
    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsb.contents->data[i] = Cr_data[i];
    }
    i = betaini->size[0];
    betaini->size[0] = Cr->size[1];
    emxEnsureCapacity_real_T(betaini, i);
    betaini_data = betaini->data;
    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      betaini_data[i] = Cr_data[i];
    }
    if (betaini->size[0] != 0) {
      nx = betaini->size[0];
    } else if (Cr->size[1] != 0) {
      nx = Cr->size[1];
    } else {
      nx = 0;
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || (betaini->size[0] != 0)) {
      b_input_sizes_idx_1 = 1;
    } else {
      b_input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || (Cr->size[1] != 0)) {
      sizes_idx_1 = 3;
    } else {
      sizes_idx_1 = 0;
    }
    i = out->Likloc->size[0] * out->Likloc->size[1];
    out->Likloc->size[0] = nx;
    out->Likloc->size[1] = b_input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(out->Likloc, i);
    loop_ub = b_input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        out->Likloc->data[i1] = betaini_data[i1];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        out->Likloc
            ->data[i1 + out->Likloc->size[0] * (i + b_input_sizes_idx_1)] = 0.0;
      }
    }
    i = (int)(Cr_data[Cr->size[1] - 1] + (1.0 - Cr_data[0]));
    for (j = 0; j < i; j++) {
      sworst = Cr_data[0] + (double)j;
      loop_ub = brob->size[0];
      i1 = betaini->size[0];
      betaini->size[0] = brob->size[0];
      emxEnsureCapacity_real_T(betaini, i1);
      betaini_data = betaini->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        betaini_data[i1] = brob_data[i1];
      }
      betaini_data[brobLSH->size[0] - 1] = sworst;
      loop_ub = (int)(((double)T - sworst) + 1.0);
      i1 = beta0->size[0];
      beta0->size[0] = (int)(sworst - 1.0) + loop_ub;
      emxEnsureCapacity_real_T(beta0, i1);
      beta0_data = beta0->data;
      vlen = (int)(sworst - 1.0);
      for (i1 = 0; i1 < vlen; i1++) {
        beta0_data[i1] = 0.0;
      }
      for (i1 = 0; i1 < loop_ub; i1++) {
        beta0_data[i1 + (int)(sworst - 1.0)] = 1.0;
      }
      i1 = Xlshift.contents->size[0] * Xlshift.contents->size[1];
      Xlshift.contents->size[0] = beta0->size[0];
      Xlshift.contents->size[1] = 1;
      emxEnsureCapacity_real_T(Xlshift.contents, i1);
      loop_ub = beta0->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xlshift.contents->data[i1] = beta0_data[i1];
      }
      lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
          &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, betaini);
      if (bsb.contents->size[0] == yhat.contents->size[0]) {
        i1 = b_yin->size[0];
        b_yin->size[0] = bsb.contents->size[0];
        emxEnsureCapacity_real_T(b_yin, i1);
        selWithoutLastHarmonic_data = b_yin->data;
        loop_ub = bsb.contents->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          selWithoutLastHarmonic_data[i1] =
              (yin.contents->data[(int)bsb.contents->data[i1] - 1] -
               yhat.contents->data[i1]) /
              ij;
        }
        HUrho(b_yin, varargin_10_huberc, beta0);
        beta0_data = beta0->data;
      } else {
        nd_binary_expand_op(beta0, &yin, &bsb, &yhat, ij, varargin_10_huberc);
        beta0_data = beta0->data;
      }
      i1 = b_yin->size[0];
      b_yin->size[0] = beta0->size[0];
      emxEnsureCapacity_real_T(b_yin, i1);
      selWithoutLastHarmonic_data = b_yin->data;
      loop_ub = beta0->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        nselected = beta0_data[i1];
        selWithoutLastHarmonic_data[i1] = nselected * nselected;
      }
      out->Likloc->data[j + out->Likloc->size[0]] =
          blockedSummation(b_yin, b_yin->size[0]);
      if (bsb.contents->size[0] == yhat.contents->size[0]) {
        i1 = b_yin->size[0];
        b_yin->size[0] = bsb.contents->size[0];
        emxEnsureCapacity_real_T(b_yin, i1);
        selWithoutLastHarmonic_data = b_yin->data;
        loop_ub = bsb.contents->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          nselected = yin.contents->data[(int)bsb.contents->data[i1] - 1] -
                      yhat.contents->data[i1];
          selWithoutLastHarmonic_data[i1] = nselected * nselected;
        }
      } else {
        md_binary_expand_op(b_yin, &yin, &bsb, &yhat);
      }
      out->Likloc->data[j + out->Likloc->size[0] * 2] =
          blockedSummation(b_yin, b_yin->size[0]);
    }
    /*  Use Huberized residual sum of squares to find minimum */
    loop_ub = out->Likloc->size[0];
    i = b_yin->size[0];
    b_yin->size[0] = out->Likloc->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    selWithoutLastHarmonic_data = b_yin->data;
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic_data[i] =
          out->Likloc->data[i + out->Likloc->size[0] *
                                    ((int)(varargin_10_typeres + 1.0) - 1)];
    }
    d_minimum(b_yin, &sworst, &sizes_idx_1);
    posLS = out->Likloc->data[sizes_idx_1 - 1];
    i = beta0->size[0];
    beta0->size[0] = (int)(posLS - 1.0) +
                     (int)(((double)yin.contents->size[0] - posLS) + 1.0);
    emxEnsureCapacity_real_T(beta0, i);
    beta0_data = beta0->data;
    loop_ub = (int)(posLS - 1.0);
    for (i = 0; i < loop_ub; i++) {
      beta0_data[i] = 0.0;
    }
    loop_ub = (int)(((double)yin.contents->size[0] - posLS) + 1.0);
    for (i = 0; i < loop_ub; i++) {
      beta0_data[i + (int)(posLS - 1.0)] = 1.0;
    }
    i = Xlshift.contents->size[0] * Xlshift.contents->size[1];
    Xlshift.contents->size[0] = beta0->size[0];
    Xlshift.contents->size[1] = 1;
    emxEnsureCapacity_real_T(Xlshift.contents, i);
    loop_ub = beta0->size[0];
    for (i = 0; i < loop_ub; i++) {
      Xlshift.contents->data[i] = beta0_data[i];
    }
    brob_data[brobLSH->size[0] - 1] = posLS;
  }
  i = bsb.contents->size[0];
  bsb.contents->size[0] = seq.contents->size[0];
  emxEnsureCapacity_real_T(bsb.contents, i);
  loop_ub = seq.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsb.contents->data[i] = seq.contents->data[i];
  }
  /*  Compute fitted values using final estimate of beta for all the */
  /*  observations */
  lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl, &Seq,
      &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, brob);
  /*  REWEIGHTING STEP */
  /*  residuals = Raw residuals using final estimate of beta */
  if (yin.contents->size[0] == yhat.contents->size[0]) {
    i = out->residuals->size[0];
    out->residuals->size[0] = yin.contents->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    loop_ub = yin.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] = yin.contents->data[i] - yhat.contents->data[i];
    }
  } else {
    pd_binary_expand_op(out, &yin, &yhat);
  }
  /*  Find the units with the smallest absolute p+1 residuals (before */
  /*  reweighting step) */
  nx = out->residuals->size[0];
  i = b_yin->size[0];
  b_yin->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_yin, i);
  selWithoutLastHarmonic_data = b_yin->data;
  for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
    selWithoutLastHarmonic_data[input_sizes_idx_1] =
        fabs(out->residuals->data[input_sizes_idx_1]);
  }
  sort(b_yin, ia);
  ia_data = ia->data;
  i = betaini->size[0];
  betaini->size[0] = ia->size[0];
  emxEnsureCapacity_real_T(betaini, i);
  betaini_data = betaini->data;
  loop_ub = ia->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini_data[i] = ia_data[i];
  }
  nx = (int)(p + 1.0);
  i = out->bs->size[0];
  out->bs->size[0] = (int)(p + 1.0);
  emxEnsureCapacity_real_T(out->bs, i);
  for (i = 0; i < nx; i++) {
    out->bs->data[i] = betaini_data[i];
  }
  ij = 0.0;
  if (2 > Xsel.contents->size[1]) {
    i = 0;
    i1 = 0;
  } else {
    i = 1;
    i1 = Xsel.contents->size[1];
  }
  loop_ub_tmp = i1 - i;
  do {
    exitg1 = 0;
    a = p + ij;
    if (1.0 > a) {
      loop_ub = 0;
    } else {
      loop_ub = (int)a;
    }
    i1 = out->bs->size[0];
    out->bs->size[0] = loop_ub;
    emxEnsureCapacity_real_T(out->bs, i1);
    for (i1 = 0; i1 < loop_ub; i1++) {
      out->bs->data[i1] = betaini_data[i1];
    }
    i1 = b_Ylagged->size[0] * b_Ylagged->size[1];
    b_Ylagged->size[0] = loop_ub;
    b_Ylagged->size[1] = loop_ub_tmp;
    emxEnsureCapacity_real_T(b_Ylagged, i1);
    p_all_data = b_Ylagged->data;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      for (j = 0; j < loop_ub; j++) {
        p_all_data[j + b_Ylagged->size[0] * i1] =
            Xsel.contents->data[((int)betaini_data[j] +
                                 Xsel.contents->size[0] * (i + i1)) -
                                1];
      }
    }
    zscore(b_Ylagged, Ylagged);
    nx = local_rank(Ylagged);
    if (nx < pini - 1.0) {
      ij++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  /* if the robust s0 is too small, compute it with a set of different methods:
   */
  /* Qn, Sn, std and the interquantile difference for increasing percentages */
  /* ([0.25-0.75], [0.26-0.76], ...) */
  if (fabs(ncomb) < 1.0E-7) {
    zscoreFS(out->residuals, betaini, &sworst, &ncomb);
    if (ncomb == 0.0) {
      b_zscoreFS(out->residuals, betaini, &sworst, &ncomb);
    }
    if (ncomb == 0.0) {
      c_zscoreFS(out->residuals, betaini, &sworst, &ncomb);
    }
    if (ncomb == 0.0) {
      nx = out->residuals->size[0];
      i = betaini->size[0];
      betaini->size[0] = out->residuals->size[0];
      emxEnsureCapacity_real_T(betaini, i);
      betaini_data = betaini->data;
      for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
        betaini_data[input_sizes_idx_1] =
            fabs(out->residuals->data[input_sizes_idx_1]);
      }
      j = 0;
      exitg2 = false;
      while ((!exitg2) && (j < 25)) {
        ncomb = prctile(betaini, (double)j + 75.0) -
                prctile(betaini, 100.0 - ((double)j + 75.0));
        if (ncomb > 0.0) {
          exitg2 = true;
        } else {
          j++;
        }
      }
    }
    /* weights = abs(residuals)<=1e-7; */
    /*  stdres = residuals/s0; */
  }
  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] /= ncomb;
  }
  if (varargin_28 == 1.0) {
    nselected = pini + lshiftYN.contents;
    if (bdp == -99.0) {
      bdp = 1.0 - varargin_6 / (double)yin.contents->size[0];
    }
    if (yin.contents->size[0] < 50) {
      loop_ub = 50;
    } else {
      loop_ub = yin.contents->size[0];
    }
    nselected = RobRegrSize(loop_ub, nselected, bdp);
    nx = out->residuals->size[0];
    i = b_yin->size[0];
    b_yin->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    selWithoutLastHarmonic_data = b_yin->data;
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
      selWithoutLastHarmonic_data[input_sizes_idx_1] =
          fabs(out->residuals->data[input_sizes_idx_1]);
    }
    a = 2.5758293035489004 * sqrt(nselected / 6.6348966010212136);
    i = weights.contents->size[0];
    weights.contents->size[0] = b_yin->size[0];
    emxEnsureCapacity_boolean_T(weights.contents, i);
    loop_ub = b_yin->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights.contents->data[i] = (selWithoutLastHarmonic_data[i] <= a);
    }
  } else if (varargin_28 == 2.0) {
    GYfilt(out->residuals, weights.contents);
  } else if (varargin_28 == 3.0) {
    b_GYfilt(out->residuals, weights.contents);
  } else if (varargin_28 == 4.0) {
    nx = out->residuals->size[0];
    i = b_yin->size[0];
    b_yin->size[0] = out->residuals->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    selWithoutLastHarmonic_data = b_yin->data;
    for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
      selWithoutLastHarmonic_data[input_sizes_idx_1] =
          fabs(out->residuals->data[input_sizes_idx_1]);
    }
    i = weights.contents->size[0];
    weights.contents->size[0] = b_yin->size[0];
    emxEnsureCapacity_boolean_T(weights.contents, i);
    loop_ub = b_yin->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights.contents->data[i] =
          (selWithoutLastHarmonic_data[i] <= 2.5758293035489004);
    }
  }
  /*  else */
  /*      % There is an approximate perfect fit for the first h observations. */
  /*      % We consider as outliers all units with residual greater than 1e-7.
   */
  /*      weights = abs(residuals)<=1e-7; */
  /*  */
  /*      %     % Store the weights */
  /*      %     out.weights=weights; */
  /*  */
  /*      % s is set to 0 */
  /*  %     s0=0; */
  /*  % */
  /*  %     % Standardized residuals are artificially set equal to raw
   * residuals. */
  /*  %     stdres=residuals; */
  /*  end */
  /*  weights is a boolean vector. */
  end = weights.contents->size[0] - 1;
  vlen = 0;
  for (hmin = 0; hmin <= end; hmin++) {
    if (weights.contents->data[hmin]) {
      vlen++;
    }
  }
  emxInit_int32_T(&r6, 1);
  i = r6->size[0];
  r6->size[0] = vlen;
  emxEnsureCapacity_int32_T(r6, i);
  ia_data = r6->data;
  sizes_idx_1 = 0;
  for (hmin = 0; hmin <= end; hmin++) {
    if (weights.contents->data[hmin]) {
      ia_data[sizes_idx_1] = hmin + 1;
      sizes_idx_1++;
    }
  }
  i = bsb.contents->size[0];
  bsb.contents->size[0] = r6->size[0];
  emxEnsureCapacity_real_T(bsb.contents, i);
  loop_ub = r6->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsb.contents->data[i] = seq.contents->data[ia_data[i] - 1];
  }
  emxFree_int32_T(&r6);
  /*  Store bsb to use in order to find sum of squares of residuals for */
  /*  reduced model. */
  i = allnumscale2->size[0];
  allnumscale2->size[0] = bsb.contents->size[0];
  emxEnsureCapacity_real_T(allnumscale2, i);
  allnumscale2_data = allnumscale2->data;
  loop_ub = bsb.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    allnumscale2_data[i] = bsb.contents->data[i];
  }
  /*  Find new estimate of beta using only observations which have */
  /*  weight equal to 1. Notice that new brob overwrites old brob */
  /*  computed previously. */
  emxInitStruct_struct_T1(&a__25);
  emxInit_real_T(&b_brob, 1);
  if ((varampl.contents == 0.0) && (lshiftYN.contents == 0.0)) {
    /*  In this case the model is linear */
    /*  Function lik constructs fitted values and residual sum of */
    /*  squares */
    loop_ub = Xsel.contents->size[1];
    i = b_Ylagged->size[0] * b_Ylagged->size[1];
    b_Ylagged->size[0] = bsb.contents->size[0];
    b_Ylagged->size[1] = Xsel.contents->size[1];
    emxEnsureCapacity_real_T(b_Ylagged, i);
    p_all_data = b_Ylagged->data;
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        p_all_data[i1 + b_Ylagged->size[0] * i] =
            Xsel.contents->data[((int)bsb.contents->data[i1] +
                                 Xsel.contents->size[0] * i) -
                                1];
      }
    }
    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    selWithoutLastHarmonic_data = b_yin->data;
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic_data[i] =
          yin.contents->data[(int)bsb.contents->data[i] - 1];
    }
    mldivide(b_Ylagged, b_yin, beta.contents);
    /*  update fitted values */
    /*  find fitted values using all observations */
    mtimes(Xsel.contents, beta.contents, yhat.contents);
    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    selWithoutLastHarmonic_data = b_yin->data;
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      nx = (int)bsb.contents->data[i] - 1;
      nselected = yin.contents->data[nx] - yhat.contents->data[nx];
      selWithoutLastHarmonic_data[i] = nselected * nselected;
    }
    a = blockedSummation(b_yin, b_yin->size[0]) /
        (h - (double)Xsel.contents->size[1]);
    c_mtimes(Xsel.contents, Xsel.contents, Ylagged);
    inv(Ylagged, out->invXX);
    i = Ylagged->size[0] * Ylagged->size[1];
    Ylagged->size[0] = out->invXX->size[0];
    Ylagged->size[1] = out->invXX->size[1];
    emxEnsureCapacity_real_T(Ylagged, i);
    betaini_data = Ylagged->data;
    loop_ub = out->invXX->size[0] * out->invXX->size[1];
    for (i = 0; i < loop_ub; i++) {
      betaini_data[i] = a * out->invXX->data[i];
    }
    i = brobLSH->size[0] * brobLSH->size[1];
    brobLSH->size[0] = Xsel.contents->size[0];
    brobLSH->size[1] = Xsel.contents->size[1];
    emxEnsureCapacity_real_T(brobLSH, i);
    brobLSH_data = brobLSH->data;
    loop_ub = Xsel.contents->size[0] * Xsel.contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      brobLSH_data[i] = Xsel.contents->data[i];
    }
  } else if ((varampl.contents == 0.0) && (lshiftYN.contents == 1.0)) {
    /*  In this case there is just level shift however we do not redo */
    /*  the non linear estimation but a simple LS */
    if ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0)) {
      nx = Xsel.contents->size[0];
    } else if ((Xlshift.contents->size[0] != 0) &&
               (Xlshift.contents->size[1] != 0)) {
      nx = Xlshift.contents->size[0];
    } else {
      nx = Xsel.contents->size[0];
      if (Xlshift.contents->size[0] > Xsel.contents->size[0]) {
        nx = Xlshift.contents->size[0];
      }
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes ||
        ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0))) {
      input_sizes_idx_1 = Xsel.contents->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
                                 (Xlshift.contents->size[1] != 0))) {
      sizes_idx_1 = Xlshift.contents->size[1];
    } else {
      sizes_idx_1 = 0;
    }
    i = brobLSH->size[0] * brobLSH->size[1];
    brobLSH->size[0] = nx;
    brobLSH->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(brobLSH, i);
    brobLSH_data = brobLSH->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        brobLSH_data[i1 + brobLSH->size[0] * i] =
            Xsel.contents->data[i1 + nx * i];
      }
    }
    for (i = 0; i < sizes_idx_1; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        brobLSH_data[i1 + brobLSH->size[0] * input_sizes_idx_1] =
            Xlshift.contents->data[i1];
      }
    }
    loop_ub = brobLSH->size[1];
    i = b_Ylagged->size[0] * b_Ylagged->size[1];
    b_Ylagged->size[0] = bsb.contents->size[0];
    b_Ylagged->size[1] = brobLSH->size[1];
    emxEnsureCapacity_real_T(b_Ylagged, i);
    p_all_data = b_Ylagged->data;
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        p_all_data[i1 + b_Ylagged->size[0] * i] =
            brobLSH_data[((int)bsb.contents->data[i1] + brobLSH->size[0] * i) -
                         1];
      }
    }
    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    selWithoutLastHarmonic_data = b_yin->data;
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic_data[i] =
          yin.contents->data[(int)bsb.contents->data[i] - 1];
    }
    mldivide(b_Ylagged, b_yin, beta.contents);
    /*  find fitted values using all observations */
    mtimes(brobLSH, beta.contents, yhat.contents);
    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(b_yin, i);
    selWithoutLastHarmonic_data = b_yin->data;
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      nx = (int)bsb.contents->data[i] - 1;
      nselected = yin.contents->data[nx] - yhat.contents->data[nx];
      selWithoutLastHarmonic_data[i] = nselected * nselected;
    }
    a = blockedSummation(b_yin, b_yin->size[0]) /
        (h - (double)brobLSH->size[1]);
    loop_ub = brobLSH->size[1];
    i = b_Ylagged->size[0] * b_Ylagged->size[1];
    b_Ylagged->size[0] = bsb.contents->size[0];
    b_Ylagged->size[1] = brobLSH->size[1];
    emxEnsureCapacity_real_T(b_Ylagged, i);
    p_all_data = b_Ylagged->data;
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        p_all_data[i1 + b_Ylagged->size[0] * i] =
            brobLSH_data[((int)bsb.contents->data[i1] + brobLSH->size[0] * i) -
                         1];
      }
    }
    loop_ub = brobLSH->size[1];
    i = bestyhattoadd->size[0] * bestyhattoadd->size[1];
    bestyhattoadd->size[0] = bsb.contents->size[0];
    bestyhattoadd->size[1] = brobLSH->size[1];
    emxEnsureCapacity_real_T(bestyhattoadd, i);
    bestyhattoadd_data = bestyhattoadd->data;
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        bestyhattoadd_data[i1 + bestyhattoadd->size[0] * i] =
            brobLSH_data[((int)bsb.contents->data[i1] + brobLSH->size[0] * i) -
                         1];
      }
    }
    c_mtimes(b_Ylagged, bestyhattoadd, Ylagged);
    inv(Ylagged, out->invXX);
    i = Ylagged->size[0] * Ylagged->size[1];
    Ylagged->size[0] = out->invXX->size[0];
    Ylagged->size[1] = out->invXX->size[1];
    emxEnsureCapacity_real_T(Ylagged, i);
    betaini_data = Ylagged->data;
    loop_ub = out->invXX->size[0] * out->invXX->size[1];
    for (i = 0; i < loop_ub; i++) {
      betaini_data[i] = a * out->invXX->data[i];
    }
  } else {
    /*  model is non linear because there is time varying amplitude in seasonal
     * component */
    loop_ub = Xtrend.contents->size[1];
    i = Ylagged->size[0] * Ylagged->size[1];
    Ylagged->size[0] = bsb.contents->size[0];
    Ylagged->size[1] = Xtrend.contents->size[1];
    emxEnsureCapacity_real_T(Ylagged, i);
    betaini_data = Ylagged->data;
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        betaini_data[i1 + Ylagged->size[0] * i] =
            Xtrend.contents->data[((int)bsb.contents->data[i1] +
                                   Xtrend.contents->size[0] * i) -
                                  1];
      }
    }
    loop_ub = Xseaso.contents->size[1];
    i = Xseasof.contents->size[0] * Xseasof.contents->size[1];
    Xseasof.contents->size[0] = bsb.contents->size[0];
    Xseasof.contents->size[1] = Xseaso.contents->size[1];
    emxEnsureCapacity_real_T(Xseasof.contents, i);
    for (i = 0; i < loop_ub; i++) {
      vlen = bsb.contents->size[0];
      for (i1 = 0; i1 < vlen; i1++) {
        Xseasof.contents->data[i1 + Xseasof.contents->size[0] * i] =
            Xseaso.contents->data[((int)bsb.contents->data[i1] +
                                   Xseaso.contents->size[0] * i) -
                                  1];
      }
    }
    if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
      loop_ub = X.contents->size[1];
      i = Xf.contents->size[0] * Xf.contents->size[1];
      Xf.contents->size[0] = bsb.contents->size[0];
      Xf.contents->size[1] = X.contents->size[1];
      emxEnsureCapacity_real_T(Xf.contents, i);
      for (i = 0; i < loop_ub; i++) {
        vlen = bsb.contents->size[0];
        for (i1 = 0; i1 < vlen; i1++) {
          Xf.contents->data[i1 + Xf.contents->size[0] * i] =
              X.contents->data[((int)bsb.contents->data[i1] +
                                X.contents->size[0] * i) -
                               1];
        }
      }
    }
    i = Seqf.contents->size[0] * Seqf.contents->size[1];
    Seqf.contents->size[0] = bsb.contents->size[0];
    Seqf.contents->size[1] = 4;
    emxEnsureCapacity_real_T(Seqf.contents, i);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < 4; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        Seqf.contents->data[i1 + Seqf.contents->size[0] * i] =
            Seq.contents->data[((int)bsb.contents->data[i1] +
                                Seq.contents->size[0] * i) -
                               1];
      }
    }
    i = beta0->size[0];
    beta0->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(beta0, i);
    beta0_data = beta0->data;
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      beta0_data[i] = yin.contents->data[(int)bsb.contents->data[i] - 1];
    }
    /*  Find new estimate of scale using only observations which have */
    /*  weight equal to 1. */
    i = weights.contents->size[0];
    weights.contents->size[0] = yin.contents->size[0];
    emxEnsureCapacity_boolean_T(weights.contents, i);
    loop_ub = yin.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights.contents->data[i] = false;
    }
    i = r2->size[0];
    r2->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_int32_T(r2, i);
    ia_data = r2->data;
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      ia_data[i] = (int)bsb.contents->data[i];
    }
    loop_ub = r2->size[0];
    for (i = 0; i < loop_ub; i++) {
      weights.contents->data[ia_data[i] - 1] = true;
    }
    /*  MATLAB CCODER PART nlinfit replaced by lsqcurvefit */
    if (lshiftYN.contents == 1.0) {
      i = Xlshiftf.contents->size[0];
      Xlshiftf.contents->size[0] = bsb.contents->size[0];
      emxEnsureCapacity_real_T(Xlshiftf.contents, i);
      loop_ub = bsb.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        Xlshiftf.contents->data[i] =
            Xlshift.contents->data[(int)bsb.contents->data[i] - 1];
      }
      if (1 > brob->size[0] - 1) {
        loop_ub = 0;
      } else {
        loop_ub = brob->size[0] - 1;
      }
      i = b_brob->size[0];
      b_brob->size[0] = loop_ub;
      emxEnsureCapacity_real_T(b_brob, i);
      p_all_data = b_brob->data;
      for (i = 0; i < loop_ub; i++) {
        p_all_data[i] = brob_data[i];
      }
      i = b_yin->size[0];
      b_yin->size[0] = brob->size[0] - 1;
      emxEnsureCapacity_real_T(b_yin, i);
      selWithoutLastHarmonic_data = b_yin->data;
      loop_ub = brob->size[0] - 1;
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic_data[i] = rtMinusInf;
      }
      i = yhatrob->size[0];
      yhatrob->size[0] = brob->size[0] - 1;
      emxEnsureCapacity_real_T(yhatrob, i);
      yhatrob_data = yhatrob->data;
      loop_ub = brob->size[0] - 1;
      for (i = 0; i < loop_ub; i++) {
        yhatrob_data[i] = rtInf;
      }
      lsqcurvefit(&trend, &seasonal, &s, &yhatseaso, &Xseasof, &varampl, &Seqf,
                  &nexpl, &isemptyX, &Xf, &lshiftYN, &Xlshiftf, b_brob, Ylagged,
                  beta0, b_yin, yhatrob, beta.contents, &sworst, betaini,
                  &nselected, &a__24, &a__25, brobLSH);
      brobLSH_data = brobLSH->data;
    } else {
      i = Xlshiftf.contents->size[0];
      Xlshiftf.contents->size[0] = 1;
      emxEnsureCapacity_real_T(Xlshiftf.contents, i);
      Xlshiftf.contents->data[0] = 0.0;
      /*  [betaoutCHK,resnorm,residual,exitflag,output,lambda,XlinCHK]=
       * lsqcurvefit(@likyhat,brobfinal,Xtrendf,yf); */
      i = b_yin->size[0];
      b_yin->size[0] = brob->size[0];
      emxEnsureCapacity_real_T(b_yin, i);
      selWithoutLastHarmonic_data = b_yin->data;
      loop_ub = brob->size[0];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic_data[i] = rtMinusInf;
      }
      i = yhatrob->size[0];
      yhatrob->size[0] = brob->size[0];
      emxEnsureCapacity_real_T(yhatrob, i);
      yhatrob_data = yhatrob->data;
      loop_ub = brob->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatrob_data[i] = rtInf;
      }
      lsqcurvefit(&trend, &seasonal, &s, &yhatseaso, &Xseasof, &varampl, &Seqf,
                  &nexpl, &isemptyX, &Xf, &lshiftYN, &Xlshiftf, brob, Ylagged,
                  beta0, b_yin, yhatrob, beta.contents, &sworst, betaini,
                  &nselected, &a__24, &a__25, brobLSH);
      brobLSH_data = brobLSH->data;
    }
    i = Ylagged->size[0] * Ylagged->size[1];
    Ylagged->size[0] = 1;
    Ylagged->size[1] = 1;
    emxEnsureCapacity_real_T(Ylagged, i);
    betaini_data = Ylagged->data;
    betaini_data[0] = 1.0 / (double)beta.contents->size[0];
    /*          MSE=(residuals'*residuals)/length(betaout); */
    /*          covB=MSE*inv(XlinCHK'*XlinCHK)*MSE; */
    i = out->invXX->size[0] * out->invXX->size[1];
    out->invXX->size[0] = 1;
    out->invXX->size[1] = 1;
    emxEnsureCapacity_real_T(out->invXX, i);
    out->invXX->data[0] = 1.0 / (double)beta.contents->size[0];
    /*  Now compute again vector yhat using final vector betaout */
    i = bsb.contents->size[0];
    bsb.contents->size[0] = seq.contents->size[0];
    emxEnsureCapacity_real_T(bsb.contents, i);
    loop_ub = seq.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      bsb.contents->data[i] = seq.contents->data[i];
    }
    lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
        &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, beta.contents);
  }
  emxFree_real_T(&b_brob);
  emxFreeStruct_struct_T1(&a__25);
  emxFree_int32_T(&r2);
  emxFree_real_T(&yhatrob);
  emxFree_real_T(&bestyhattoadd);
  /*  Store beta standard error, t stat and p values */
  diag(Ylagged, beta0);
  beta0_data = beta0->data;
  nx = beta0->size[0];
  for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
    beta0_data[input_sizes_idx_1] = sqrt(beta0_data[input_sizes_idx_1]);
  }
  if (beta.contents->size[0] == beta0->size[0]) {
    i = out->residuals->size[0];
    out->residuals->size[0] = beta.contents->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    loop_ub = beta.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] = beta.contents->data[i] / beta0_data[i];
    }
  } else {
    qd_binary_expand_op(out, &beta, beta0);
  }
  nx = out->residuals->size[0];
  i = b_yin->size[0];
  b_yin->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_yin, i);
  selWithoutLastHarmonic_data = b_yin->data;
  for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
    selWithoutLastHarmonic_data[input_sizes_idx_1] =
        fabs(out->residuals->data[input_sizes_idx_1]);
  }
  loop_ub = b_yin->size[0];
  for (i = 0; i < loop_ub; i++) {
    selWithoutLastHarmonic_data[i] = -selWithoutLastHarmonic_data[i];
  }
  tcdf(b_yin, y->size[0] - beta.contents->size[0], betaini);
  betaini_data = betaini->data;
  i = out->B->size[0] * out->B->size[1];
  out->B->size[0] = beta.contents->size[0];
  out->B->size[1] = 4;
  emxEnsureCapacity_real_T(out->B, i);
  loop_ub = beta.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i] = beta.contents->data[i];
  }
  loop_ub = beta0->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0]] = beta0_data[i];
  }
  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0] * 2] = out->residuals->data[i];
  }
  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0] * 3] = 2.0 * betaini_data[i];
  }
  if (lshiftYN.contents == 1.0) {
    /*  Store position of level shift */
    out->posLS.size[0] = 1;
    out->posLS.size[1] = 1;
    out->posLS.data[0] = posLS;
  } else {
    out->posLS.size[0] = 0;
    out->posLS.size[1] = 0;
  }
  /*  Computation of reweighted residuals. */
  if (yin.contents->size[0] == yhat.contents->size[0]) {
    i = out->residuals->size[0];
    out->residuals->size[0] = yin.contents->size[0];
    emxEnsureCapacity_real_T(out->residuals, i);
    loop_ub = yin.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] = yin.contents->data[i] - yhat.contents->data[i];
    }
  } else {
    pd_binary_expand_op(out, &yin, &yhat);
  }
  /*  s2full */
  lsh = 0.0;
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    sworst = out->residuals->data[(int)allnumscale2_data[i] - 1];
    lsh += sworst * sworst;
  }
  /*  s0 =sqrt(MSE) */
  /*  Compute new standardized residuals. */
  /*  Apply consistency factor to reweighted estimate of sigma */
  vlen = weights.contents->size[0];
  if (weights.contents->size[0] == 0) {
    nx = 0;
  } else {
    nx = weights.contents->data[0];
    for (input_sizes_idx_1 = 2; input_sizes_idx_1 <= vlen;
         input_sizes_idx_1++) {
      nx += weights.contents->data[input_sizes_idx_1 - 1];
    }
  }
  vlen = weights.contents->size[0];
  if (weights.contents->size[0] == 0) {
    sizes_idx_1 = 0;
  } else {
    sizes_idx_1 = weights.contents->data[0];
    for (input_sizes_idx_1 = 2; input_sizes_idx_1 <= vlen;
         input_sizes_idx_1++) {
      sizes_idx_1 += weights.contents->data[input_sizes_idx_1 - 1];
    }
  }
  sworst = sizes_idx_1;
  if (nx < yin.contents->size[0]) {
    /*  Make sure that hrew has at least T/2 observations */
    if (nx < (double)yin.contents->size[0] / 2.0) {
      sworst = (double)yin.contents->size[0] / 2.0;
    }
    /*  factor=consistencyfactor(hrew,n,1); */
    nselected = 0.5 * (sworst / (double)yin.contents->size[0] + 1.0);
    if ((nselected >= 0.0) && (nselected <= 1.0)) {
      a = -1.4142135623730951 * erfcinv(2.0 * nselected);
    } else {
      a = rtNaN;
    }
    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    /*  Apply small sample correction factor to reweighted estimate */
    /*  of sigma */
    factor = 1.0 /
             sqrt(1.0 - 2.0 * ((double)yin.contents->size[0] / sworst) * a *
                            (exp(-0.5 * a * a) / 2.5066282746310002)) *
             sqrt(corfactorREW(yin.contents->size[0],
                               sworst / (double)yin.contents->size[0]));
  } else {
    factor = 1.0;
  }
  i = beta0->size[0];
  beta0->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(beta0, i);
  beta0_data = beta0->data;
  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    nselected = out->residuals->data[i];
    beta0_data[i] = nselected * nselected;
  }
  if (weights.contents->size[0] == beta0->size[0]) {
    i = beta0->size[0];
    beta0->size[0] = weights.contents->size[0];
    emxEnsureCapacity_real_T(beta0, i);
    beta0_data = beta0->data;
    loop_ub = weights.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      beta0_data[i] *= (double)weights.contents->data[i];
    }
  } else {
    od_binary_expand_op(beta0, &weights);
  }
  vlen = weights.contents->size[0];
  if (weights.contents->size[0] == 0) {
    sizes_idx_1 = 0;
  } else {
    sizes_idx_1 = weights.contents->data[0];
    for (input_sizes_idx_1 = 2; input_sizes_idx_1 <= vlen;
         input_sizes_idx_1++) {
      sizes_idx_1 += weights.contents->data[input_sizes_idx_1 - 1];
    }
  }
  ncomb = sqrt(blockedSummation(beta0, beta0->size[0]) /
               ((double)sizes_idx_1 - 1.0)) *
          factor;
  if (!(ncomb == 0.0)) {
    loop_ub = out->residuals->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] /= ncomb;
    }
  }
  /*  Declare as outliers the observations which have a standardized */
  /*  residual greater than cutoff. REMARK: while the first threshold */
  /*  was based on the Student T (with modified degrees of freedom), in */
  /*  this second round the threshold is based on the Normal. Notice */
  /*  that: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = */
  /*  norminv(0.9875) */
  i = out->yhat->size[0];
  out->yhat->size[0] = yhat.contents->size[0];
  emxEnsureCapacity_real_T(out->yhat, i);
  loop_ub = yhat.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->yhat->data[i] = yhat.contents->data[i];
  }
  /*  Store quantities in the out structure */
  nx = out->residuals->size[0];
  i = b_yin->size[0];
  b_yin->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_yin, i);
  selWithoutLastHarmonic_data = b_yin->data;
  for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
    selWithoutLastHarmonic_data[input_sizes_idx_1] =
        fabs(out->residuals->data[input_sizes_idx_1]);
  }
  nselected = (varargin_2 + 1.0) / 2.0;
  if ((nselected >= 0.0) && (nselected <= 1.0)) {
    nselected = -1.4142135623730951 * erfcinv(2.0 * nselected);
  } else {
    nselected = rtNaN;
  }
  i = weightsst->size[0];
  weightsst->size[0] = b_yin->size[0];
  emxEnsureCapacity_boolean_T(weightsst, i);
  weightsst_data = weightsst->data;
  loop_ub = b_yin->size[0];
  for (i = 0; i < loop_ub; i++) {
    weightsst_data[i] = (selWithoutLastHarmonic_data[i] > nselected);
  }
  end = weightsst->size[0] - 1;
  vlen = 0;
  for (hmin = 0; hmin <= end; hmin++) {
    if (weightsst_data[hmin]) {
      vlen++;
    }
  }
  emxInit_int32_T(&r7, 1);
  i = r7->size[0];
  r7->size[0] = vlen;
  emxEnsureCapacity_int32_T(r7, i);
  ia_data = r7->data;
  sizes_idx_1 = 0;
  for (hmin = 0; hmin <= end; hmin++) {
    if (weightsst_data[hmin]) {
      ia_data[sizes_idx_1] = hmin + 1;
      sizes_idx_1++;
    }
  }
  i = out->outliers->size[0];
  out->outliers->size[0] = r7->size[0];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = r7->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliers->data[i] = seq.contents->data[ia_data[i] - 1];
  }
  emxFree_int32_T(&r7);
  emxFreeStruct_captured_var(&seq);
  /* decomment the following two lines to get outlier pvalues */
  nx = out->residuals->size[0];
  i = b_yin->size[0];
  b_yin->size[0] = out->residuals->size[0];
  emxEnsureCapacity_real_T(b_yin, i);
  selWithoutLastHarmonic_data = b_yin->data;
  for (input_sizes_idx_1 = 0; input_sizes_idx_1 < nx; input_sizes_idx_1++) {
    selWithoutLastHarmonic_data[input_sizes_idx_1] =
        fabs(out->residuals->data[input_sizes_idx_1]);
  }
  loop_ub = b_yin->size[0];
  for (i = 0; i < loop_ub; i++) {
    selWithoutLastHarmonic_data[i] = -selWithoutLastHarmonic_data[i];
  }
  emxInit_real_T(&p_all, 1);
  i = p_all->size[0];
  p_all->size[0] = b_yin->size[0];
  emxEnsureCapacity_real_T(p_all, i);
  p_all_data = p_all->data;
  i = b_yin->size[0];
  for (input_sizes_idx_1 = 0; input_sizes_idx_1 < i; input_sizes_idx_1++) {
    sworst = eml_erfcore(-selWithoutLastHarmonic_data[input_sizes_idx_1] /
                         1.4142135623730951);
    p_all_data[input_sizes_idx_1] = 0.5 * sworst;
  }
  end = weightsst->size[0] - 1;
  vlen = 0;
  for (hmin = 0; hmin <= end; hmin++) {
    if (weightsst_data[hmin]) {
      vlen++;
    }
  }
  emxInit_int32_T(&r8, 1);
  i = r8->size[0];
  r8->size[0] = vlen;
  emxEnsureCapacity_int32_T(r8, i);
  ia_data = r8->data;
  sizes_idx_1 = 0;
  for (hmin = 0; hmin <= end; hmin++) {
    if (weightsst_data[hmin]) {
      ia_data[sizes_idx_1] = hmin + 1;
      sizes_idx_1++;
    }
  }
  emxFree_boolean_T(&weightsst);
  i = out->outliersPval->size[0];
  out->outliersPval->size[0] = r8->size[0];
  emxEnsureCapacity_real_T(out->outliersPval, i);
  loop_ub = r8->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->outliersPval->data[i] = p_all_data[ia_data[i] - 1];
  }
  emxFree_int32_T(&r8);
  emxFree_real_T(&p_all);
  /*  Store robust estimate of s */
  out->scale = ncomb;
  /*  Store the 20 best estimates of the scale for each tentative level shift */
  /*  which is considered */
  /*  Store indices forming the bestrdiv2 best estimates of the target function
   */
  i = out->BestIndexes->size[0] * out->BestIndexes->size[1];
  out->BestIndexes->size[0] = NumScale2ind->size[0];
  out->BestIndexes->size[1] = NumScale2ind->size[1];
  emxEnsureCapacity_real_T(out->BestIndexes, i);
  loop_ub = NumScale2ind->size[0] * NumScale2ind->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->BestIndexes->data[i] = NumScale2ind_data[i];
  }
  emxFree_int32_T(&NumScale2ind);
  /*  Store scaled residuals */
  /*  Store units forming best initial subset of p-1 observations */
  /*  Store list of units declared as outliers */
  /*  out.outliers=seq(weights==0); */
  /*  Store confidence level which is used to draw the horizontal lines in the
   */
  /*  plot */
  out->conflev = varargin_2;
  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = h;
  /*  Store vector of weights (values equal to 1 are associated with units */
  /*  parteciapting to the fit) */
  i = out->weights->size[0];
  out->weights->size[0] = weights.contents->size[0];
  emxEnsureCapacity_boolean_T(out->weights, i);
  loop_ub = weights.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->weights->data[i] = weights.contents->data[i];
  }
  emxFreeStruct_captured_var1(&weights);
  /*  Store number of singular subsets */
  out->singsub = 0.0;
  /*  Store information about the class of the object */
  for (i = 0; i < 5; i++) {
    out->class[i] = b_cv[i];
  }
  if (!(lshiftYN.contents == 1.0)) {
    i = out->Likloc->size[0] * out->Likloc->size[1];
    out->Likloc->size[0] = 1;
    out->Likloc->size[1] = 1;
    emxEnsureCapacity_real_T(out->Likloc, i);
    out->Likloc->data[0] = 0.0;
  } else {
    /*  Store local improvement of the likelihood */
  }
  /*  Store response */
  i = out->y->size[0];
  out->y->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(out->y, i);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->y->data[i] = yin.contents->data[i];
  }
  if (varargin_30) {
    if (varargin_8) {
      /*  Store X (without the column of ones if there is an intercept) */
      if (2 > brobLSH->size[1]) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = brobLSH->size[1];
      }
      loop_ub = brobLSH->size[0];
      j = out->X->size[0] * out->X->size[1];
      out->X->size[0] = brobLSH->size[0];
      vlen = i1 - i;
      out->X->size[1] = vlen;
      emxEnsureCapacity_real_T(out->X, j);
      for (i1 = 0; i1 < vlen; i1++) {
        for (j = 0; j < loop_ub; j++) {
          out->X->data[j + out->X->size[0] * i1] =
              brobLSH_data[j + brobLSH->size[0] * (i + i1)];
        }
      }
    } else {
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = brobLSH->size[0];
      out->X->size[1] = brobLSH->size[1];
      emxEnsureCapacity_real_T(out->X, i);
      loop_ub = brobLSH->size[0] * brobLSH->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->X->data[i] = brobLSH_data[i];
      }
    }
  } else {
    out->X->size[0] = 0;
    out->X->size[1] = 0;
  }
  /*  b_trend = {'b_trend1'; 'b_trend2'; 'b_trend3'; 'b_trend4'}; */
  /*  b_seaso = {'b_cos1'; 'b_sin1'; 'b_cos2'; 'b_sin2'; ... */
  /*      'b_cos3'; 'b_sin3'; 'b_cos4'; 'b_sin4'; ... */
  /*      'b_cos5'; 'b_sin5'; 'b_cos6'}; */
  /*  b_AR =    {'b_AR1'; 'b_AR2'; 'b_AR3'; 'b_AR4'; 'b_AR5'; 'b_AR6'}; */
  /*  b_X  =    {'b_X1'; 'b_X2'; 'b_X3'; 'b_X4'; 'b_X5'; 'b_X6'}; */
  /*  b_varampl = {'b_varampl'; 'b_varamp2'; 'b_varamp3'}; */
  /*  b_lshift  = {'b_lshift' ; 't_lshift'}; */
  /*  */
  /*  if ARp>0 */
  /*       b_expl=[b_AR(1:ARp); b_X(1:nexpl-ARp)]; */
  /*  else */
  /*      b_expl=b_X; */
  /*  end */
  /*  */
  /*  if seasonal>0 */
  /*      if 2*seasonal==s */
  /*          lab=[b_trend(1:trend+1); b_seaso]; */
  /*      else */
  /*          lab=[b_trend(1:trend+1); b_seaso(1:2*seasonal)]; */
  /*      end */
  /*  else */
  /*      lab=b_trend(1:trend+1); */
  /*  end */
  /*  */
  /*  if nexpl>0 */
  /*      lab=[lab;b_expl(1:nexpl)]; */
  /*  end */
  /*  if varampl>0 */
  /*      lab=[lab;b_varampl(1:varampl)]; */
  /*      posvarampl=length(lab)-varampl+1:length(lab); */
  /*  else */
  /*      posvarampl=[]; */
  /*  end */
  /*  if lshiftYN==1 */
  /*      lab=[lab; b_lshift(1)]; */
  /*  end */
  /*  b_AR =    ['b_AutoR1'; 'b_AutoR2'; 'b_AutoR3'; 'b_AutoR4'; 'b_AutoR5';
   * 'b_AutoR6']; */
  /*  b_AR=char(strcat('b_auto', num2str((1:99)'))); */
  /*  Code generation does not support string arrays */
  /*  b_trend = ["b_trend1"; "b_trend2"; "b_trend3"; "b_trend4"]; */
  /*  b_seaso = ["b_cos1"; "b_sin1"; "b_cos2"; "b_sin2"; ... */
  /*      "b_cos3"; "b_sin3"; "b_cos4"; "b_sin4"; ... */
  /*      "b_cos5"; "b_sin5"; "b_cos6"]; */
  /*  b_AR =    ["b_AR1"; "b_AR2"; "b_AR3"; "b_AR4"; "b_AR5"; "b_AR6"]; */
  /*  b_X  =    ["b_X1"; "b_X2"; "b_X3"; "b_X4"; "b_X5"; "b_X6"]; */
  /*  b_varampl = ["b_varampl"; "b_varamp2"; "b_varamp3"]; */
  /*  b_lshift  = ["b_lshift" ; "t_lshift"]; */
  if (seasonal.contents > 0.0) {
    if (2.0 * seasonal.contents == s.contents) {
      a = trend.contents + 1.0;
      if (1.0 > a) {
        i = 0;
      } else {
        i = (int)a;
      }
      nx = i + 11;
    } else {
      a = trend.contents + 1.0;
      sworst = 2.0 * seasonal.contents;
      if (1.0 > a) {
        i = 0;
      } else {
        i = (int)a;
      }
      if (1.0 > sworst) {
        i1 = 0;
      } else {
        i1 = (int)sworst;
      }
      nx = i + i1;
    }
  } else {
    a = trend.contents + 1.0;
    if (1.0 > a) {
      nx = 0;
    } else {
      nx = (int)a;
    }
  }
  if (nexpl.contents > 0.0) {
    a = nexpl.contents;
    if (1.0 > a) {
      i = 0;
    } else {
      i = (int)a;
    }
    nx += i;
  }
  emxInit_real_T(&posvarampl, 2);
  if (varampl.contents > 0.0) {
    a = varampl.contents;
    if (1.0 > a) {
      i = 0;
    } else {
      i = (int)a;
    }
    nx += i;
    if (nx >= 8) {
      sizes_idx_1 = nx;
    } else {
      sizes_idx_1 = 8;
    }
    if (nx == 0) {
      input_sizes_idx_1 = 0;
    } else {
      input_sizes_idx_1 = sizes_idx_1;
    }
    if (nx >= 8) {
      sizes_idx_1 = nx;
    } else {
      sizes_idx_1 = 8;
    }
    if (nx == 0) {
      sizes_idx_1 = 0;
    }
    a = ((double)sizes_idx_1 - varampl.contents) + 1.0;
    if (rtIsNaN(a)) {
      i = posvarampl->size[0] * posvarampl->size[1];
      posvarampl->size[0] = 1;
      posvarampl->size[1] = 1;
      emxEnsureCapacity_real_T(posvarampl, i);
      p_all_data = posvarampl->data;
      p_all_data[0] = rtNaN;
    } else if (input_sizes_idx_1 < a) {
      posvarampl->size[0] = 1;
      posvarampl->size[1] = 0;
    } else if (rtIsInf(a) && (a == input_sizes_idx_1)) {
      i = posvarampl->size[0] * posvarampl->size[1];
      posvarampl->size[0] = 1;
      posvarampl->size[1] = 1;
      emxEnsureCapacity_real_T(posvarampl, i);
      p_all_data = posvarampl->data;
      p_all_data[0] = rtNaN;
    } else if (floor(a) == a) {
      i = posvarampl->size[0] * posvarampl->size[1];
      posvarampl->size[0] = 1;
      loop_ub = (int)((double)input_sizes_idx_1 - a);
      posvarampl->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(posvarampl, i);
      p_all_data = posvarampl->data;
      for (i = 0; i <= loop_ub; i++) {
        p_all_data[i] = a + (double)i;
      }
    } else {
      eml_float_colon(a, input_sizes_idx_1, posvarampl);
    }
  } else {
    posvarampl->size[0] = 1;
    posvarampl->size[1] = 0;
  }
  /*  if verLessThan ('matlab','8.2.0') */
  /*  else */
  /*  Store matrix B in table format (with labels for rows and columns) */
  array2table(out->B, &out->Btable.metaDim.length, &out->Btable.rowDim.length,
              &out->Btable.varDim, out->Btable.data,
              out->Btable.arrayProps.Description.size);
  /*  end */
  if (varargin_4 && (lshiftYN.contents == 1.0)) {
    Rprintf("Level shift position t=%.0f\n", posLS);
    //fflush(stdout);
  }
  /*  Create plots */
  /*  Part of the code to find the F test for the final harmonic of the seasonal
   */
  /*  component part */
  i = bsb.contents->size[0];
  bsb.contents->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(bsb.contents, i);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsb.contents->data[i] = allnumscale2_data[i];
  }
  out->LastHarmonicPval.size[0] = 0;
  out->LastHarmonicPval.size[1] = 0;
  emxInit_real_T(&selWithoutLastHarmonic, 2);
  emxInit_real_T(&selWithoutLastHarmonic_tmp, 2);
  p_all_data = selWithoutLastHarmonic_tmp->data;
  if ((seasonal.contents > 0.0) && (seasonal.contents < 6.0)) {
    /*  selWithoutLastHarmonic = indexes of the linear part of the model after
     * excluding the last harmonic */
    bestrLSH = ((double)Xtrend.contents->size[1] + (double)nseaso) - 2.0;
    if (bestrLSH < 1.0) {
      selWithoutLastHarmonic_tmp->size[0] = 1;
      selWithoutLastHarmonic_tmp->size[1] = 0;
    } else {
      i = selWithoutLastHarmonic_tmp->size[0] *
          selWithoutLastHarmonic_tmp->size[1];
      selWithoutLastHarmonic_tmp->size[0] = 1;
      selWithoutLastHarmonic_tmp->size[1] = (int)(bestrLSH - 1.0) + 1;
      emxEnsureCapacity_real_T(selWithoutLastHarmonic_tmp, i);
      p_all_data = selWithoutLastHarmonic_tmp->data;
      loop_ub = (int)(bestrLSH - 1.0);
      for (i = 0; i <= loop_ub; i++) {
        p_all_data[i] = (double)i + 1.0;
      }
    }
    a = ((double)Xtrend.contents->size[1] + (double)nseaso) + 1.0;
    if (Xsel.contents->size[1] < a) {
      Cr->size[0] = 1;
      Cr->size[1] = 0;
    } else if (a == a) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = (int)((double)Xsel.contents->size[1] - a) + 1;
      emxEnsureCapacity_real_T(Cr, i);
      Cr_data = Cr->data;
      loop_ub = (int)((double)Xsel.contents->size[1] - a);
      for (i = 0; i <= loop_ub; i++) {
        Cr_data[i] = a + (double)i;
      }
    } else {
      eml_float_colon(a, Xsel.contents->size[1], Cr);
      Cr_data = Cr->data;
    }
    i = selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->size[1];
    selWithoutLastHarmonic->size[0] = 1;
    selWithoutLastHarmonic->size[1] =
        selWithoutLastHarmonic_tmp->size[1] + Cr->size[1];
    emxEnsureCapacity_real_T(selWithoutLastHarmonic, i);
    selWithoutLastHarmonic_data = selWithoutLastHarmonic->data;
    loop_ub = selWithoutLastHarmonic_tmp->size[1];
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic_data[i] = p_all_data[i];
    }
    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic_data[i + selWithoutLastHarmonic_tmp->size[1]] =
          Cr_data[i];
    }
    if ((varampl.contents == 0.0) && (lshiftYN.contents == 0.0)) {
      /*  In this case the model is linear */
      /*  Function lik constructs fitted values and residual sum of */
      /*  squares */
      i = betaini->size[0];
      betaini->size[0] = selWithoutLastHarmonic->size[1];
      emxEnsureCapacity_real_T(betaini, i);
      betaini_data = betaini->data;
      loop_ub = selWithoutLastHarmonic->size[1];
      for (i = 0; i < loop_ub; i++) {
        betaini_data[i] = selWithoutLastHarmonic_data[i];
      }
      /*  update fitted values */
      i = b_Ylagged->size[0] * b_Ylagged->size[1];
      b_Ylagged->size[0] = allnumscale2->size[0];
      b_Ylagged->size[1] = betaini->size[0];
      emxEnsureCapacity_real_T(b_Ylagged, i);
      p_all_data = b_Ylagged->data;
      loop_ub = betaini->size[0];
      for (i = 0; i < loop_ub; i++) {
        vlen = allnumscale2->size[0];
        for (i1 = 0; i1 < vlen; i1++) {
          p_all_data[i1 + b_Ylagged->size[0] * i] =
              Xsel.contents
                  ->data[((int)allnumscale2_data[i1] +
                          Xsel.contents->size[0] * ((int)betaini_data[i] - 1)) -
                         1];
        }
      }
      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(b_yin, i);
      selWithoutLastHarmonic_data = b_yin->data;
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic_data[i] =
            yin.contents->data[(int)allnumscale2_data[i] - 1];
      }
      mldivide(b_Ylagged, b_yin, beta0);
      loop_ub = Xsel.contents->size[0];
      i = b_Ylagged->size[0] * b_Ylagged->size[1];
      b_Ylagged->size[0] = Xsel.contents->size[0];
      b_Ylagged->size[1] = betaini->size[0];
      emxEnsureCapacity_real_T(b_Ylagged, i);
      p_all_data = b_Ylagged->data;
      vlen = betaini->size[0];
      for (i = 0; i < vlen; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          p_all_data[i1 + b_Ylagged->size[0] * i] =
              Xsel.contents->data[i1 + Xsel.contents->size[0] *
                                           ((int)betaini_data[i] - 1)];
        }
      }
      mtimes(b_Ylagged, beta0, yhat.contents);
      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(b_yin, i);
      selWithoutLastHarmonic_data = b_yin->data;
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        nx = (int)allnumscale2_data[i] - 1;
        nselected = yin.contents->data[nx] - yhat.contents->data[nx];
        selWithoutLastHarmonic_data[i] = nselected * nselected;
      }
      nselected = blockedSummation(b_yin, b_yin->size[0]);
    } else if ((varampl.contents == 0.0) && (lshiftYN.contents == 1.0)) {
      /*  In this case there is just level shift however we do not redo */
      /*  the non linear estimation but a simple LS */
      loop_ub = Xsel.contents->size[0];
      i = Ylagged->size[0] * Ylagged->size[1];
      Ylagged->size[0] = Xsel.contents->size[0];
      Ylagged->size[1] = selWithoutLastHarmonic->size[1];
      emxEnsureCapacity_real_T(Ylagged, i);
      betaini_data = Ylagged->data;
      vlen = selWithoutLastHarmonic->size[1];
      for (i = 0; i < vlen; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          betaini_data[i1 + Ylagged->size[0] * i] =
              Xsel.contents
                  ->data[i1 + Xsel.contents->size[0] *
                                  ((int)selWithoutLastHarmonic_data[i] - 1)];
        }
      }
      if ((Xsel.contents->size[0] != 0) &&
          (selWithoutLastHarmonic->size[1] != 0)) {
        nx = Xsel.contents->size[0];
      } else if ((Xlshift.contents->size[0] != 0) &&
                 (Xlshift.contents->size[1] != 0)) {
        nx = Xlshift.contents->size[0];
      } else {
        if (Xsel.contents->size[0] > 0) {
          nx = Xsel.contents->size[0];
        } else {
          nx = 0;
        }
        if (Xlshift.contents->size[0] > nx) {
          nx = Xlshift.contents->size[0];
        }
      }
      empty_non_axis_sizes = (nx == 0);
      if (empty_non_axis_sizes || ((Xsel.contents->size[0] != 0) &&
                                   (selWithoutLastHarmonic->size[1] != 0))) {
        input_sizes_idx_1 = selWithoutLastHarmonic->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
                                   (Xlshift.contents->size[1] != 0))) {
        sizes_idx_1 = Xlshift.contents->size[1];
      } else {
        sizes_idx_1 = 0;
      }
      i = brobLSH->size[0] * brobLSH->size[1];
      brobLSH->size[0] = nx;
      brobLSH->size[1] = input_sizes_idx_1 + sizes_idx_1;
      emxEnsureCapacity_real_T(brobLSH, i);
      brobLSH_data = brobLSH->data;
      for (i = 0; i < input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < nx; i1++) {
          brobLSH_data[i1 + brobLSH->size[0] * i] = betaini_data[i1 + nx * i];
        }
      }
      for (i = 0; i < sizes_idx_1; i++) {
        for (i1 = 0; i1 < nx; i1++) {
          brobLSH_data[i1 + brobLSH->size[0] * input_sizes_idx_1] =
              Xlshift.contents->data[i1];
        }
      }
      /*  find fitted values using all observations */
      loop_ub = brobLSH->size[1];
      i = b_Ylagged->size[0] * b_Ylagged->size[1];
      b_Ylagged->size[0] = allnumscale2->size[0];
      b_Ylagged->size[1] = brobLSH->size[1];
      emxEnsureCapacity_real_T(b_Ylagged, i);
      p_all_data = b_Ylagged->data;
      for (i = 0; i < loop_ub; i++) {
        vlen = allnumscale2->size[0];
        for (i1 = 0; i1 < vlen; i1++) {
          p_all_data[i1 + b_Ylagged->size[0] * i] =
              brobLSH_data[((int)allnumscale2_data[i1] + brobLSH->size[0] * i) -
                           1];
        }
      }
      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(b_yin, i);
      selWithoutLastHarmonic_data = b_yin->data;
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic_data[i] =
            yin.contents->data[(int)allnumscale2_data[i] - 1];
      }
      mldivide(b_Ylagged, b_yin, beta0);
      mtimes(brobLSH, beta0, yhat.contents);
      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(b_yin, i);
      selWithoutLastHarmonic_data = b_yin->data;
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        nx = (int)allnumscale2_data[i] - 1;
        nselected = yin.contents->data[nx] - yhat.contents->data[nx];
        selWithoutLastHarmonic_data[i] = nselected * nselected;
      }
      nselected = blockedSummation(b_yin, b_yin->size[0]);
    } else {
      /*  model is non linear because there is time varying amplitude in
       * seasonal component */
      /*  Remove the last harmonic from Xseaso */
      a = seasonal.contents - 1.0;
      seasonal.contents = a;
      if (seasonal.contents == 0.0) {
        Xseaso.contents->size[0] = 0;
        Xseaso.contents->size[1] = 0;
        Xseasof.contents->size[0] = 0;
        Xseasof.contents->size[1] = 0;
        i = yhatseaso.contents->size[0];
        yhatseaso.contents->size[0] = 1;
        emxEnsureCapacity_real_T(yhatseaso.contents, i);
        yhatseaso.contents->data[0] = 0.0;
      } else {
        if (1.0 > (double)Xseaso.contents->size[1] - 2.0) {
          loop_ub = 0;
        } else {
          loop_ub = Xseaso.contents->size[1] - 2;
        }
        nx = Xseaso.contents->size[0] - 1;
        vlen = Xseaso.contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < vlen; i1++) {
            Xseaso.contents->data[i1 + (nx + 1) * i] =
                Xseaso.contents->data[i1 + Xseaso.contents->size[0] * i];
          }
        }
        i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
        Xseaso.contents->size[0] = nx + 1;
        Xseaso.contents->size[1] = loop_ub;
        emxEnsureCapacity_real_T(Xseaso.contents, i);
        i = Xseasof.contents->size[0] * Xseasof.contents->size[1];
        Xseasof.contents->size[0] = allnumscale2->size[0];
        Xseasof.contents->size[1] = loop_ub;
        emxEnsureCapacity_real_T(Xseasof.contents, i);
        for (i = 0; i < loop_ub; i++) {
          vlen = allnumscale2->size[0];
          for (i1 = 0; i1 < vlen; i1++) {
            Xseasof.contents->data[i1 + Xseasof.contents->size[0] * i] =
                Xseaso.contents->data[((int)allnumscale2_data[i1] +
                                       Xseaso.contents->size[0] * i) -
                                      1];
          }
        }
      }
      if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
        loop_ub = X.contents->size[1];
        i = Xf.contents->size[0] * Xf.contents->size[1];
        Xf.contents->size[0] = allnumscale2->size[0];
        Xf.contents->size[1] = X.contents->size[1];
        emxEnsureCapacity_real_T(Xf.contents, i);
        for (i = 0; i < loop_ub; i++) {
          vlen = allnumscale2->size[0];
          for (i1 = 0; i1 < vlen; i1++) {
            Xf.contents->data[i1 + Xf.contents->size[0] * i] =
                X.contents->data[((int)allnumscale2_data[i1] +
                                  X.contents->size[0] * i) -
                                 1];
          }
        }
      }
      i = Seqf.contents->size[0] * Seqf.contents->size[1];
      Seqf.contents->size[0] = allnumscale2->size[0];
      Seqf.contents->size[1] = 4;
      emxEnsureCapacity_real_T(Seqf.contents, i);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < 4; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Seqf.contents->data[i1 + Seqf.contents->size[0] * i] =
              Seq.contents->data[((int)allnumscale2_data[i1] +
                                  Seq.contents->size[0] * i) -
                                 1];
        }
      }
      a = ((double)Xtrend.contents->size[1] + (double)nseaso) + 1.0;
      if (brob->size[0] < a) {
        Cr->size[0] = 1;
        Cr->size[1] = 0;
      } else if (a == a) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = (int)((double)brob->size[0] - a) + 1;
        emxEnsureCapacity_real_T(Cr, i);
        Cr_data = Cr->data;
        loop_ub = (int)((double)brob->size[0] - a);
        for (i = 0; i <= loop_ub; i++) {
          Cr_data[i] = a + (double)i;
        }
      } else {
        eml_float_colon(a, brob->size[0], Cr);
        Cr_data = Cr->data;
      }
      i = selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->size[1];
      selWithoutLastHarmonic->size[0] = 1;
      selWithoutLastHarmonic->size[1] =
          selWithoutLastHarmonic_tmp->size[1] + Cr->size[1];
      emxEnsureCapacity_real_T(selWithoutLastHarmonic, i);
      selWithoutLastHarmonic_data = selWithoutLastHarmonic->data;
      loop_ub = selWithoutLastHarmonic_tmp->size[1];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic_data[i] = p_all_data[i];
      }
      loop_ub = Cr->size[1];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic_data[i + selWithoutLastHarmonic_tmp->size[1]] =
            Cr_data[i];
      }
      /*  If there is no seasonality it is also necessary to */
      /*  remove the non linear part of the seasonal component */
      /*  that is, it is necessary to select the elements of vector
       * selWithoutLastHarmonic */
      /*  apart from those which are in posvarampl */
      if (seasonal.contents == 0.0) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = selWithoutLastHarmonic->size[1];
        emxEnsureCapacity_real_T(Cr, i);
        Cr_data = Cr->data;
        loop_ub =
            selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->size[1] -
            1;
        for (i = 0; i <= loop_ub; i++) {
          Cr_data[i] = selWithoutLastHarmonic_data[i];
        }
        e_do_vectors(Cr, posvarampl, selWithoutLastHarmonic, ia, &vlen);
        selWithoutLastHarmonic_data = selWithoutLastHarmonic->data;
        varampl.contents = 0.0;
      }
      /*  TODO nlinfit not supported by MATLAB C Coder */
      if (lshiftYN.contents == 1.0) {
        if (1 > selWithoutLastHarmonic->size[1] - 1) {
          loop_ub = 0;
        } else {
          loop_ub = selWithoutLastHarmonic->size[1] - 1;
        }
        i = beta.contents->size[0];
        beta.contents->size[0] = loop_ub;
        emxEnsureCapacity_real_T(beta.contents, i);
        for (i = 0; i < loop_ub; i++) {
          beta.contents->data[i] =
              brob_data[(int)selWithoutLastHarmonic_data[i] - 1];
        }
      } else {
        i = beta.contents->size[0];
        beta.contents->size[0] = selWithoutLastHarmonic->size[1];
        emxEnsureCapacity_real_T(beta.contents, i);
        loop_ub = selWithoutLastHarmonic->size[1];
        for (i = 0; i < loop_ub; i++) {
          beta.contents->data[i] =
              brob_data[(int)selWithoutLastHarmonic_data[i] - 1];
        }
      }
      lik(&Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
          &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat,
          beta.contents);
      /*  Computation of residuals. */
      if (bsb.contents->size[0] == yhat.contents->size[0]) {
        i = b_yin->size[0];
        b_yin->size[0] = bsb.contents->size[0];
        emxEnsureCapacity_real_T(b_yin, i);
        selWithoutLastHarmonic_data = b_yin->data;
        loop_ub = bsb.contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          nselected = yin.contents->data[(int)bsb.contents->data[i] - 1] -
                      yhat.contents->data[i];
          selWithoutLastHarmonic_data[i] = nselected * nselected;
        }
      } else {
        md_binary_expand_op(b_yin, &yin, &bsb, &yhat);
      }
      nselected = blockedSummation(b_yin, b_yin->size[0]);
    }
    sworst = (double)bsb.contents->size[0] - p;
    out->LastHarmonicPval.size[0] = 1;
    out->LastHarmonicPval.size[1] = 1;
    out->LastHarmonicPval.data[0] =
        1.0 - fcdf((nselected - lsh) / 2.0 / (lsh / sworst), sworst);
  } else if (seasonal.contents > 0.0) {
    /*  In presence of 6 harmonics, the last one is just made up of a single */
    /*  variable, therefore the p value is just the p value of the assocaited */
    /*  t-stat */
    out->LastHarmonicPval.size[0] = 1;
    out->LastHarmonicPval.size[1] = 1;
    out->LastHarmonicPval.data[0] =
        out->B
            ->data[((Xtrend.contents->size[1] + nseaso) + out->B->size[0] * 3) -
                   1];
  }
  emxFree_real_T(&b_yin);
  emxFree_real_T(&b_Ylagged);
  emxFree_int32_T(&ia);
  emxFree_real_T(&selWithoutLastHarmonic_tmp);
  emxFree_real_T(&selWithoutLastHarmonic);
  emxFree_real_T(&posvarampl);
  emxFree_real_T(&betaini);
  emxFree_real_T(&beta0);
  emxFree_real_T(&Cr);
  emxFree_real_T(&brobLSH);
  emxFree_real_T(&allnumscale2);
  emxFree_real_T(&Ylagged);
  emxFree_real_T(&brob);
  emxFreeStruct_captured_var(&yin);
  emxFreeStruct_captured_var(&Seq);
  emxFreeStruct_captured_var(&Xtrend);
  emxFreeStruct_captured_var(&Xseaso);
  emxFreeStruct_captured_var(&X);
  emxFreeStruct_captured_var(&Xsel);
  emxFreeStruct_captured_var(&bsb);
  emxFreeStruct_captured_var(&Xlshift);
  emxFreeStruct_captured_var(&beta);
  emxFreeStruct_captured_var(&yhat);
  if (lshiftYN.contents == 1.0) {
    nsamp_data[0] = LSH->size[1];
    nsamp_data[1] =
        fabs(out->B->data[(out->B->size[0] + out->B->size[0] * 2) - 1]);
    FSRinvmdr(nsamp_data, p - 1.0, lsdet);
    out->LevelShiftPval.size[0] = 1;
    out->LevelShiftPval.size[1] = 1;
    out->LevelShiftPval.data[0] = 1.0 - lsdet[1];
  } else {
    out->LevelShiftPval.size[0] = 0;
    out->LevelShiftPval.size[1] = 0;
  }
  emxFree_real_T(&LSH);
  /*  check about the y global variable */
  emxFreeStruct_captured_var(&yhatseaso);
  emxFreeStruct_captured_var(&Xseasof);
  emxFreeStruct_captured_var(&Xf);
  emxFreeStruct_captured_var(&Seqf);
  emxFreeStruct_captured_var(&Xlshiftf);
}

double corfactorREW(double n, double alpha)
{
  double fp_500_n;
  double fp_875_n;
  double rewcorfac;
  /*  corfactorREW function */
  fp_500_n = 1.0 - 3.0373378792330419 / rt_powd_snf(n, 1.5182890270453);
  fp_875_n = 1.0 - 0.51660962465337334 / rt_powd_snf(n, 0.88939595831888);
  if ((0.5 <= alpha) && (alpha <= 0.875)) {
    fp_500_n += (fp_875_n - fp_500_n) / 0.375 * (alpha - 0.5);
  } else if ((0.875 < alpha) && (alpha < 1.0)) {
    fp_500_n = fp_875_n + (1.0 - fp_875_n) / 0.125 * (alpha - 0.875);
  } else {
    fp_500_n = 1.0;
  }
  rewcorfac = 1.0 / fp_500_n;
  if ((rewcorfac <= 0.0) || (rewcorfac > 50.0)) {
    rewcorfac = 1.0;
    /*   if msg==true */
    /*   end */
  }
  return rewcorfac;
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
  emxArray_uint32_T *r;
  const double *Xtrendf_data;
  const double *beta0_data;
  double d;
  double npar;
  double *A_data;
  double *B_data;
  double *objyhat_data;
  double *yhatX_data;
  int aoffset;
  int b_i;
  int i;
  int i1;
  int inner;
  int k;
  int mc;
  unsigned int *r1;
  Xtrendf_data = Xtrendf->data;
  beta0_data = beta0->data;
  /*  likyhat computes fitted values using vector of regression coefficients */
  /*  beta0. Note that matrices Xtrendf, Xseasof, Seqf, Xf contain n-k rows. */
  /*  This function is called in the very last step of the procedure when */
  /*  routine nlinfit is invoked. Please, note the difference beween likyhat */
  /*  and lik */
  mc = Xtrendf->size[0] - 1;
  inner = Xtrendf->size[1];
  i = objyhat->size[0];
  objyhat->size[0] = Xtrendf->size[0];
  emxEnsureCapacity_real_T(objyhat, i);
  objyhat_data = objyhat->data;
  for (b_i = 0; b_i <= mc; b_i++) {
    objyhat_data[b_i] = 0.0;
  }
  for (k = 0; k < inner; k++) {
    aoffset = k * Xtrendf->size[0];
    for (b_i = 0; b_i <= mc; b_i++) {
      objyhat_data[b_i] += Xtrendf_data[aoffset + b_i] * beta0_data[k];
    }
  }
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
      r1 = r->data;
      for (i = 0; i <= aoffset; i++) {
        r1[i] = (unsigned int)(npar + ((double)i + 1.0));
      }
      i = A->size[0] * A->size[1];
      A->size[0] = Xseasof->contents->size[0];
      A->size[1] = Xseasof->contents->size[1];
      emxEnsureCapacity_real_T(A, i);
      A_data = A->data;
      aoffset = Xseasof->contents->size[0] * Xseasof->contents->size[1];
      for (i = 0; i < aoffset; i++) {
        A_data[i] = Xseasof->contents->data[i];
      }
      emxInit_real_T(&B, 2);
      i = B->size[0] * B->size[1];
      B->size[0] = 1;
      B->size[1] = r->size[1];
      emxEnsureCapacity_real_T(B, i);
      B_data = B->data;
      aoffset = r->size[1];
      for (i = 0; i < aoffset; i++) {
        B_data[i] = beta0_data[(int)r1[i] - 1];
      }
      emxFree_uint32_T(&r);
      mc = A->size[0] - 1;
      inner = A->size[1];
      i = yhatX->size[0];
      yhatX->size[0] = A->size[0];
      emxEnsureCapacity_real_T(yhatX, i);
      yhatX_data = yhatX->data;
      for (b_i = 0; b_i <= mc; b_i++) {
        yhatX_data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * A->size[0];
        for (b_i = 0; b_i <= mc; b_i++) {
          yhatX_data[b_i] += A_data[aoffset + b_i] * B_data[k];
        }
      }
      emxFree_real_T(&B);
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = yhatX->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = yhatX->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] = yhatX_data[i];
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
      A_data = A->data;
      aoffset = Xseasof->contents->size[0] * Xseasof->contents->size[1];
      for (b_i = 0; b_i < aoffset; b_i++) {
        A_data[b_i] = Xseasof->contents->data[b_i];
      }
      mc = A->size[0] - 1;
      inner = A->size[1];
      b_i = yhatX->size[0];
      yhatX->size[0] = A->size[0];
      emxEnsureCapacity_real_T(yhatX, b_i);
      yhatX_data = yhatX->data;
      for (b_i = 0; b_i <= mc; b_i++) {
        yhatX_data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * A->size[0];
        for (b_i = 0; b_i <= mc; b_i++) {
          yhatX_data[b_i] += A_data[aoffset + b_i] * beta0_data[(i + k) - 1];
        }
      }
      i = yhatseaso->contents->size[0];
      yhatseaso->contents->size[0] = yhatX->size[0];
      emxEnsureCapacity_real_T(yhatseaso->contents, i);
      aoffset = yhatX->size[0];
      for (i = 0; i < aoffset; i++) {
        yhatseaso->contents->data[i] = yhatX_data[i];
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
      A_data = A->data;
      for (b_i = 0; b_i < mc; b_i++) {
        for (inner = 0; inner < aoffset; inner++) {
          A_data[inner + A->size[0] * b_i] =
              Seqf->contents->data[inner + Seqf->contents->size[0] * (i + b_i)];
        }
      }
      mc = A->size[0] - 1;
      inner = A->size[1];
      i = yhatX->size[0];
      yhatX->size[0] = A->size[0];
      emxEnsureCapacity_real_T(yhatX, i);
      yhatX_data = yhatX->data;
      for (b_i = 0; b_i <= mc; b_i++) {
        yhatX_data[b_i] = 0.0;
      }
      for (k = 0; k < inner; k++) {
        aoffset = k * A->size[0];
        for (b_i = 0; b_i <= mc; b_i++) {
          yhatX_data[b_i] += A_data[aoffset + b_i] * beta0_data[(i1 + k) - 1];
        }
      }
      if (yhatX->size[0] == yhatseaso->contents->size[0]) {
        i = yhatseaso->contents->size[0];
        yhatseaso->contents->size[0] = yhatX->size[0];
        emxEnsureCapacity_real_T(yhatseaso->contents, i);
        aoffset = yhatX->size[0];
        for (i = 0; i < aoffset; i++) {
          yhatseaso->contents->data[i] *= yhatX_data[i] + 1.0;
        }
      } else {
        be_binary_expand_op(yhatseaso, yhatX);
      }
      npar += varampl->contents;
    }
  }
  if (isemptyX->contents) {
    i = yhatX->size[0];
    yhatX->size[0] = 1;
    emxEnsureCapacity_real_T(yhatX, i);
    yhatX_data = yhatX->data;
    yhatX_data[0] = 0.0;
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
    A_data = A->data;
    for (b_i = 0; b_i < mc; b_i++) {
      for (i1 = 0; i1 < aoffset; i1++) {
        A_data[i1 + A->size[0] * b_i] =
            Xf->contents->data[i1 + Xf->contents->size[0] * b_i];
      }
    }
    mc = A->size[0] - 1;
    inner = A->size[1];
    b_i = yhatX->size[0];
    yhatX->size[0] = A->size[0];
    emxEnsureCapacity_real_T(yhatX, b_i);
    yhatX_data = yhatX->data;
    for (b_i = 0; b_i <= mc; b_i++) {
      yhatX_data[b_i] = 0.0;
    }
    for (k = 0; k < inner; k++) {
      aoffset = k * A->size[0];
      for (b_i = 0; b_i <= mc; b_i++) {
        yhatX_data[b_i] += A_data[aoffset + b_i] * beta0_data[(i + k) - 1];
      }
    }
    npar += nexpl->contents;
  }
  emxFree_real_T(&A);
  if (lshiftYN->contents == 1.0) {
    /*   \beta_(npar+1)* I(t \geq \beta_(npar+2)) where beta_(npar+1) */
    /*   is a real number and \beta_(npar+2) is a integer which */
    /*   denotes the period in which level shift shows up */
    /*  objhat = fitted values from trend (yhattrend), (time varying) seasonal
     */
    /*  (yhatseaso), explanatory variables (yhatX) and level shift */
    /*  component (yhatlshift) */
    if (objyhat->size[0] == 1) {
      mc = yhatseaso->contents->size[0];
    } else {
      mc = objyhat->size[0];
    }
    if (objyhat->size[0] == 1) {
      aoffset = yhatseaso->contents->size[0];
    } else {
      aoffset = objyhat->size[0];
    }
    if (aoffset == 1) {
      aoffset = yhatX->size[0];
    } else if (objyhat->size[0] == 1) {
      aoffset = yhatseaso->contents->size[0];
    } else {
      aoffset = objyhat->size[0];
    }
    if ((objyhat->size[0] == yhatseaso->contents->size[0]) &&
        (mc == yhatX->size[0]) && (aoffset == Xlshiftf->contents->size[0])) {
      aoffset = objyhat->size[0];
      for (i = 0; i < aoffset; i++) {
        objyhat_data[i] =
            ((objyhat_data[i] + yhatseaso->contents->data[i]) + yhatX_data[i]) +
            beta0_data[(int)(npar + 1.0) - 1] * Xlshiftf->contents->data[i];
      }
    } else {
      fe_binary_expand_op(objyhat, yhatseaso, yhatX, beta0, npar, Xlshiftf);
    }
  } else {
    /*  objhat = fitted values from trend (yhattrend), (time varying) seasonal
     */
    /*  (yhatseaso), explanatory variables (yhatX) and level shift */
    /*  component (yhatlshift) */
    if (objyhat->size[0] == 1) {
      mc = yhatseaso->contents->size[0];
    } else {
      mc = objyhat->size[0];
    }
    if ((objyhat->size[0] == yhatseaso->contents->size[0]) &&
        (mc == yhatX->size[0])) {
      aoffset = objyhat->size[0];
      for (i = 0; i < aoffset; i++) {
        objyhat_data[i] =
            (objyhat_data[i] + yhatseaso->contents->data[i]) + yhatX_data[i];
      }
    } else {
      ge_binary_expand_op(objyhat, yhatseaso, yhatX);
    }
  }
  emxFree_real_T(&yhatX);
}

/* End of code generation (LTSts.c) */
