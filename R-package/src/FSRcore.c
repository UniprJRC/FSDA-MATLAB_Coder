/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRcore.c
 *
 * Code generation for function 'FSRcore'
 *
 */

/* Include files */
#include <R.h>

#include "FSRcore.h"
#include "FSM.h"
#include "FSRbonfbound.h"
#include "FSRbsb.h"
#include "FSRenvmdr.h"
#include "cat1.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "eml_setop.h"
#include "find.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_internal_types.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "ifWhileCond.h"
#include "int2str.h"
#include "isequal.h"
#include "minOrMax.h"
#include "mtimes.h"
#include "print_processing.h"
#include "rt_nonfinite.h"
#include "sortrows.h"
#include "unique.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

/* Function Declarations */
static void ac_binary_expand_op(emxArray_boolean_T *b_bool, const struct_T *out,
                                int i1, int i2, const emxArray_real_T *gmin,
                                int i3, int i4, int c001);

static void bc_binary_expand_op(emxArray_boolean_T *r1, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void cc_binary_expand_op(emxArray_boolean_T *r1, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void dc_binary_expand_op(emxArray_boolean_T *r1, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void ec_binary_expand_op(emxArray_boolean_T *r1, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void fc_binary_expand_op(emxArray_boolean_T *b_bool, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void qc_binary_expand_op(emxArray_boolean_T *r1,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void rc_binary_expand_op(emxArray_boolean_T *r1,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void sc_binary_expand_op(emxArray_boolean_T *r1,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void tc_binary_expand_op(emxArray_boolean_T *r1,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void uc_binary_expand_op(emxArray_boolean_T *b_bool,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin);

static void yb_binary_expand_op(emxArray_boolean_T *b_bool,
                                const emxArray_real_T *gmin1, int i1, int i2,
                                const struct_T *out, int i3, int i4);

/* Function Definitions */
static void ac_binary_expand_op(emxArray_boolean_T *b_bool, const struct_T *out,
                                int i1, int i2, const emxArray_real_T *gmin,
                                int i3, int i4, int c001)
{
  const double *gmin_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *bool_data;
  gmin_data = gmin->data;
  i = b_bool->size[0];
  if ((i4 - i3) + 1 == 1) {
    b_bool->size[0] = (i2 - i1) + 1;
  } else {
    b_bool->size[0] = (i4 - i3) + 1;
  }
  emxEnsureCapacity_boolean_T(b_bool, i);
  bool_data = b_bool->data;
  stride_0_0 = ((i2 - i1) + 1 != 1);
  stride_1_0 = ((i4 - i3) + 1 != 1);
  if ((i4 - i3) + 1 == 1) {
    loop_ub = (i2 - i1) + 1;
  } else {
    loop_ub = (i4 - i3) + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    bool_data[i] = (out->mdr->data[(i1 + i * stride_0_0) + out->mdr->size[0]] <
                    gmin_data[(i3 + i * stride_1_0) + gmin->size[0] * c001]);
  }
}

static void bc_binary_expand_op(emxArray_boolean_T *r1, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  gmin_data = gmin->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = r1->size[0];
  if (i1 == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(r1, loop_ub);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (out->mdr->data[i * stride_0_0 + out->mdr->size[0]] <
            gmin_data[i * stride_1_0 + gmin->size[0] * 5]);
  }
}

static void cc_binary_expand_op(emxArray_boolean_T *r1, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  gmin_data = gmin->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = r1->size[0];
  if (i1 == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(r1, loop_ub);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (out->mdr->data[i * stride_0_0 + out->mdr->size[0]] >
            gmin_data[i * stride_1_0 + gmin->size[0] * 4]);
  }
}

static void dc_binary_expand_op(emxArray_boolean_T *r1, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  gmin_data = gmin->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = r1->size[0];
  if (i1 == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(r1, loop_ub);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (out->mdr->data[i * stride_0_0 + out->mdr->size[0]] >
            gmin_data[i * stride_1_0 + gmin->size[0] * 3]);
  }
}

static void ec_binary_expand_op(emxArray_boolean_T *r1, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  gmin_data = gmin->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = r1->size[0];
  if (i1 == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(r1, loop_ub);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (out->mdr->data[i * stride_0_0 + out->mdr->size[0]] >
            gmin_data[i * stride_1_0 + gmin->size[0] * 2]);
  }
}

static void fc_binary_expand_op(emxArray_boolean_T *b_bool, const struct_T *out,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *bool_data;
  gmin_data = gmin->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = b_bool->size[0];
  if (i1 == 1) {
    b_bool->size[0] = i;
  } else {
    b_bool->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(b_bool, loop_ub);
  bool_data = b_bool->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    bool_data[i] = (out->mdr->data[i * stride_0_0 + out->mdr->size[0]] >
                    gmin_data[i * stride_1_0 + gmin->size[0]]);
  }
}

static void qc_binary_expand_op(emxArray_boolean_T *r1,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  const double *mdr_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  gmin_data = gmin->data;
  mdr_data = mdr->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = r1->size[0];
  if (i1 == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(r1, loop_ub);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (mdr_data[i * stride_0_0 + mdr->size[0]] <
            gmin_data[i * stride_1_0 + gmin->size[0] * 5]);
  }
}

static void rc_binary_expand_op(emxArray_boolean_T *r1,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  const double *mdr_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  gmin_data = gmin->data;
  mdr_data = mdr->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = r1->size[0];
  if (i1 == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(r1, loop_ub);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (mdr_data[i * stride_0_0 + mdr->size[0]] >
            gmin_data[i * stride_1_0 + gmin->size[0] * 4]);
  }
}

static void sc_binary_expand_op(emxArray_boolean_T *r1,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  const double *mdr_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  gmin_data = gmin->data;
  mdr_data = mdr->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = r1->size[0];
  if (i1 == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(r1, loop_ub);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (mdr_data[i * stride_0_0 + mdr->size[0]] >
            gmin_data[i * stride_1_0 + gmin->size[0] * 3]);
  }
}

static void tc_binary_expand_op(emxArray_boolean_T *r1,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  const double *mdr_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  gmin_data = gmin->data;
  mdr_data = mdr->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = r1->size[0];
  if (i1 == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(r1, loop_ub);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (mdr_data[i * stride_0_0 + mdr->size[0]] >
            gmin_data[i * stride_1_0 + gmin->size[0] * 2]);
  }
}

static void uc_binary_expand_op(emxArray_boolean_T *b_bool,
                                const emxArray_real_T *mdr,
                                const emxArray_int32_T *ia,
                                const emxArray_real_T *gmin)
{
  const double *gmin_data;
  const double *mdr_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *bool_data;
  gmin_data = gmin->data;
  mdr_data = mdr->data;
  i = ia->size[0];
  i1 = gmin->size[0];
  loop_ub = b_bool->size[0];
  if (i1 == 1) {
    b_bool->size[0] = i;
  } else {
    b_bool->size[0] = i1;
  }
  emxEnsureCapacity_boolean_T(b_bool, loop_ub);
  bool_data = b_bool->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (i1 != 1);
  if (i1 == 1) {
    loop_ub = i;
  } else {
    loop_ub = i1;
  }
  for (i = 0; i < loop_ub; i++) {
    bool_data[i] = (mdr_data[i * stride_0_0 + mdr->size[0]] >
                    gmin_data[i * stride_1_0 + gmin->size[0]]);
  }
}

static void yb_binary_expand_op(emxArray_boolean_T *b_bool,
                                const emxArray_real_T *gmin1, int i1, int i2,
                                const struct_T *out, int i3, int i4)
{
  const double *gmin1_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *bool_data;
  gmin1_data = gmin1->data;
  i = b_bool->size[0];
  if ((i4 - i3) + 1 == 1) {
    b_bool->size[0] = (i2 - i1) + 1;
  } else {
    b_bool->size[0] = (i4 - i3) + 1;
  }
  emxEnsureCapacity_boolean_T(b_bool, i);
  bool_data = b_bool->data;
  stride_0_0 = ((i2 - i1) + 1 != 1);
  stride_1_0 = ((i4 - i3) + 1 != 1);
  if ((i4 - i3) + 1 == 1) {
    loop_ub = (i2 - i1) + 1;
  } else {
    loop_ub = (i4 - i3) + 1;
  }
  for (i = 0; i < loop_ub; i++) {
    bool_data[i] = (gmin1_data[(i1 + i * stride_0_0) + gmin1->size[0] * 3] >
                    out->mdr->data[(i3 + i * stride_1_0) + out->mdr->size[0]]);
  }
}

void FSRcore(const emxArray_real_T *INP_y, const emxArray_real_T *INP_X,
             double INP_n, double INP_p, const emxArray_real_T *INP_mdr,
             double INP_init, const emxArray_real_T *INP_Un,
             const emxArray_real_T *INP_bb, const emxArray_real_T *INP_Bcoeff,
             const emxArray_real_T *INP_S2, bool INP_weak,
             const double options_bonflev_data[],
             const int options_bonflev_size[2], bool options_msg, struct_T *out)
{
  emxArray_boolean_T b_tmp_data;
  emxArray_boolean_T nout_data;
  emxArray_boolean_T *b_beta;
  emxArray_boolean_T *b_bool;
  emxArray_boolean_T *r10;
  emxArray_boolean_T *r13;
  emxArray_boolean_T *r19;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *r8;
  emxArray_char_T_1x310 b_out;
  emxArray_int32_T *ia;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r12;
  emxArray_int32_T *r14;
  emxArray_int32_T *r15;
  emxArray_int32_T *r16;
  emxArray_int32_T *r17;
  emxArray_int32_T *r18;
  emxArray_int32_T *r20;
  emxArray_int32_T *r6;
  emxArray_real_T c_options_bonflev_data;
  emxArray_real_T *Un;
  emxArray_real_T *Xy;
  emxArray_real_T *add;
  emxArray_real_T *b_Xy;
  emxArray_real_T *b_add;
  emxArray_real_T *b_gmin;
  emxArray_real_T *beta;
  emxArray_real_T *gbonf;
  emxArray_real_T *gmin;
  emxArray_real_T *gmin1;
  emxArray_real_T *good;
  emxArray_real_T *gval;
  double validatedHoleFilling[6];
  const double *INP_Bcoeff_data;
  const double *INP_S2_data;
  const double *INP_Un_data;
  const double *INP_X_data;
  const double *INP_bb_data;
  const double *INP_mdr_data;
  const double *INP_y_data;
  double d;
  double ii;
  double mdag;
  double ndecl;
  double *beta_data;
  double *gbonf_data;
  double *gmin1_data;
  double *gmin_data;
  double *gval_data;
  unsigned int uv[31];
  unsigned int b_nout_data[10];
  unsigned int uv1[10];
  int b_options_bonflev_size[2];
  int b_tmp_size[2];
  int nout_size[2];
  int tmp_size[2];
  int b_i;
  int b_signal;
  int c001;
  int c99;
  int c999;
  int c9999;
  int c99999;
  int c_i;
  int i;
  int i1;
  int i2;
  unsigned int ij;
  int input_sizes_idx_1;
  int loop_ub;
  int nmdr;
  int nout_size_idx_0;
  int nout_size_idx_1;
  int sto;
  int trueCount;
  int vlen=0;
  int *ia_data;
  signed char c_tmp_data[5];
  signed char sizes_idx_1;
  bool x[31];
  bool c_nout_data[5];
  bool NoFalseSig;
  bool b_options_bonflev_data;
  bool condition2;
  bool condition3;
  bool condition4;
  bool empty_non_axis_sizes;
  bool exitg1;
  bool exitg2;
  bool tmp_data;
  bool *bool_data;
  bool *r11;
  bool *r4;
  bool *r7;
  bool *r9;
  INP_S2_data = INP_S2->data;
  INP_Bcoeff_data = INP_Bcoeff->data;
  INP_bb_data = INP_bb->data;
  INP_Un_data = INP_Un->data;
  INP_mdr_data = INP_mdr->data;
  INP_X_data = INP_X->data;
  INP_y_data = INP_y->data;
  /* FSRcore scans the trajectory of mdr to check for exceedances */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     INP    :   Structure containing monitoring of mdr and other quantities.
   * Structure. */
  /*                Structure containing the following fields. */
  /*    INP.y   =   Response variable. Vector. Response variable, specified as
   */
  /*                a vector of length n, where n is the number of */
  /*                observations. Each entry in y is the response for the */
  /*                corresponding row of X. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*   INP.X =      Predictor variables. Matrix. Matrix of explanatory */
  /*                variables (also called 'regressors') of dimension n x p */
  /*                where p denotes the number of explanatory variables */
  /*                including the intercept. */
  /*   INP.n =      Number of observations. Scalar. Number of rows of matrix X.
   */
  /*   INP.p =      Number of predictor variables. Scalar. Number of columns of
   */
  /*                matrix X. */
  /*   INP.mdr =    Minimum deletion residual. Matrix.  n -init x 2 matrix */
  /*                which contains the monitoring of minimum deletion residual
   */
  /*                at each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1). */
  /*                2nd col = minimum deletion residual. */
  /*                Depending on the string 'model', mdr refers to OLS */
  /*                mdr, GLS mdr or Bayes regression mdr. */
  /*   INP.init =   Search initialization. Scalar. */
  /*                It specifies the point where the user has started */
  /*                monitoring mdr. */
  /*   INP.Un  =    Units included in each step. Matrix. */
  /*                (n-init) x 11 matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. Un(1,2) for example contains
   */
  /*                the unit included in step init+1. Un(end,2) contains the */
  /*                units included in the final step of the search. */
  /*                Un has 11 columns because we store up to 10 units */
  /*                simultaneously in each step. */
  /*    INP.bb=     Units included in each step. Matrix. */
  /*                n-by-(n-init+1) or matrix n-by-r matrix which the units */
  /*                belonging to the subset at each step of the forward search
   */
  /*                or at selected steps. */
  /*   INP.Bcoeff=  Estimated regression coefficients. Matrix. */
  /*                (n-init+1) x (p+1) matrix containing the monitoring of */
  /*                estimated beta coefficients in each step of the forward */
  /*                search. The first column contains the fwd search index. */
  /*                Depending on the string 'model', Bcoeff refers to OLS */
  /*                coefficents, GLS coefficients or Bayes regression */
  /*                coefficients. */
  /*  INP.Hetero=  Estimated coefficients in the skedastic equation. Matrix. */
  /*                (n-init+1) x (r+1) matrix containing the monitoring of */
  /*                estimated skedastic coefficients in each step of the forward
   */
  /*                search. The first column contains the fwd search index. */
  /*                This input is used just if strcmp(model,'H') */
  /*   INP.S2 =   Estimate of $sigma^2$.  (n-init+1)-by-2 matrix containing the
   */
  /*                monitoring of S2.  Depending on the string 'model', S2 */
  /*                refers to OLS, GLS or in the Baysian case it is the */
  /*                posterior estimate of $\sigma^2$. */
  /*    INP.Z =     Predictor variables in the regression equation (necessary */
  /*                input just if model='H'). Matrix. */
  /*                n x r matrix or vector of length r. */
  /*                If Z is a n x r matrix it contains the r variables which */
  /*                form the scedastic function as follows (if input option
   * art==1) */
  /*                \[ */
  /*                \omega_i = 1 + exp(\gamma_0 + \gamma_1 Z(i,1) + ...+
   * \gamma_{r} Z(i,r)) */
  /*                \] */
  /*                If Z is a vector of length r it contains the indexes of the
   */
  /*                columns of matrix X which form the scedastic function as */
  /*                follows */
  /*                \[ */
  /*                \omega_i = 1 +  exp(\gamma_0 + \gamma_1 X(i,Z(1)) + ...+ */
  /*                \gamma_{r} X(i,Z(r))) */
  /*                \] */
  /*  */
  /*    INP.beta0 = Prior mean of $\beta$ (necessary */
  /*                input just if model='B'). p-times-1 vector. */
  /*    INP.R     = Matrix associated with covariance matrix of $\beta$
   * (necessary */
  /*                input just if model='B'). p-times-p */
  /*                positive definite matrix. */
  /*                It can be interpreted as X0'X0 where X0 is a n0 x p */
  /*                matrix coming from previous experiments (assuming that the
   */
  /*                intercept is included in the model) */
  /*  */
  /*                The prior distribution of $\tau_0$ is a gamma distribution
   * with */
  /*                parameters $a_0$ and $b_0$, that is */
  /*  */
  /*                 \[     p(\tau_0) \propto \tau^{a_0-1} \exp (-b_0 \tau) */
  /*                        \qquad   E(\tau_0)= a_0/b_0               \] */
  /*  */
  /*    INP.tau0 =  Prior estimate of tau (necessary */
  /*                input just if model='B'). Scalar. Prior estimate of $\tau=1/
   * \sigma^2 =a_0/b_0$. */
  /*      INP.n0 =  Number of previous experiments (necessary */
  /*                input just if model='B'). Scalar. Sometimes it helps */
  /*                to think of the prior information as coming from n0 */
  /*                previous experiments. Therefore we assume that matrix X0 */
  /*                (which defines R), was made up of n0 observations. */
  /*                  Data Types - struct */
  /*   model :      type of regression model. Character. */
  /*                Possible values are '' (default) | 'H' | 'B'. */
  /*                '' stands for linear regression; */
  /*                'H' stands for heteroskedastic regression; */
  /*                'B' stands for Bayesian regression. */
  /*                This input is used to reconstruct the units belonging to */
  /*                subset at step n-decl where decl is the number of units */
  /*                declared as outliers. More precisely, if n>5000 matrix BB */
  /*                just contains the units belonging to subset in selected */
  /*                steps, therefore in order to find the units inside subset at
   */
  /*                step n-decl, FSRcore calls: */
  /*                routine FSRbsb.m in presence of linear regression; */
  /*                routine FSRHbsb.m in presence of heteroskedastic regression;
   */
  /*                routine FSRBbsb.m in presence of Bayesian regression; */
  /*                  Data Types - char */
  /*     options:   Additional options. Stucture. Structure containing optional
   */
  /*                parameters which are passed to directly through functions */
  /*                FSR.m, FSRH.m or FSRB.m. */
  /*                  Data Types - struct */
  /*  */
  /*      weak:     Indicator to use a different decision rule to detect */
  /*                the signal and flag outliers. false (default) | true. */
  /*                If weak==false default FSRcore values are used, */
  /*                if weak==true 'stronger' quantiles are used  as a */
  /*                decision rule to trim outliers and VIOM outliers */
  /* 				are the ones entering the Search after the first signal.
   */
  /*                Example - 'weak',true */
  /*                Data Types - boolean */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*      out :     A structure containing the following fields */
  /*  out.ListOut  =  k x 1 vector containing the list of the units declared as
   */
  /*                  outliers or NaN if the sample is homogeneous. */
  /*  out.outliers =  out.ListOut. This field is added for homogeneity with the
   */
  /*                  other robust estimators. */
  /*  out.beta   =  p-by-1 vector containing the estimated regression */
  /*                parameter in step n-k. Depending on the string 'model', */
  /*                beta refers to OLS coefficents, GLS coefficients or Bayes */
  /*                regression coefficients. */
  /*  out.scale   = estimate of the scale. Depending on the string 'model', */
  /*                beta refers to OLS coefficents, GLS coefficients or it is */
  /*                the inverse of the posterior estimate of the square root of
   * tau. */
  /*  out.mdr    =  (n-init) x 2 matrix */
  /*                1st col = fwd search index */
  /*                2nd col = value of minimum deletion residual in each step */
  /*                of the fwd search. Depending on the string 'model', */
  /*                mdr is found using linear regression, heteroskedastic */
  /*                regression or Bayes regression. */
  /*  out.Un     =  (n-init) x 11 matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*  out.nout    = 2 x 5 matrix containing the number of times mdr went out */
  /*                of particular quantiles. */
  /*                First row contains quantiles 1 99 99.9 99.99 99.999. */
  /*                Second row contains the frequency distribution. */
  /*  out.outliersVIOM = m x 1 vector containing the list of the units declared
   * as */
  /*                     VIOM outliers or NaN if they are not present. */
  /*                     Present only if weak == true. */
  /*  out.ListCl =  (n-m-k) x 1 vector of non-outlying units. */
  /*                Present only if weak == true. */
  /*  */
  /*  More About: */
  /*  */
  /*  The rules for declaring units as outliers are the same for standard */
  /*  regression, heteroskedastic regression and Bayesian regression. Therefore
   */
  /*  this function is called by: */
  /*  FSR.m  = outlier detection procedure for linear regression; */
  /*  FSRB.m = outlier detection procedure in Bayesian linear regression; */
  /*  FSRH.m = outlier detection procedure for heteroskedastic models; */
  /*  If ndecl units are declared as outliers, it is necessary to find the */
  /*  units forming subset at step n-decl. If n<=5000 input matrix INP.bb */
  /*  contains the storing of the units belonging to subset in all steps, else
   */
  /*  if INP.bb does not contain the units in step n-decl procedure calls */
  /*  routine FSRbsb.m or FSRHbsb.m or FSRBbsb.m. */
  /*  */
  /*  See also: FSR.m, FSRH.m, FSRB.m */
  /*  */
  /*  References: */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Beginning of code */
  /*  Extract required input variables */
  i = out->mdr->size[0] * out->mdr->size[1];
  out->mdr->size[0] = INP_mdr->size[0];
  out->mdr->size[1] = INP_mdr->size[1];
  emxEnsureCapacity_real_T(out->mdr, i);
  loop_ub = INP_mdr->size[0] * INP_mdr->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->mdr->data[i] = INP_mdr_data[i];
  }
  i = out->Un->size[0] * out->Un->size[1];
  out->Un->size[0] = INP_Un->size[0];
  out->Un->size[1] = INP_Un->size[1];
  emxEnsureCapacity_real_T(out->Un, i);
  loop_ub = INP_Un->size[0] * INP_Un->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Un->data[i] = INP_Un_data[i];
  }
  emxInit_real_T(&good, 2);
  emxInit_real_T(&beta, 2);
  /*  Set the intercept */
  /*  intcolumn = the index of the first constant column found in X, or empty.
   */
  /*  Used here to check if X includes the constant term for the intercept. */
  /*  The variable 'intercept' will be used later for plotting. */
  maximum(INP_X, beta);
  beta_data = beta->data;
  minimum(INP_X, good);
  if (beta->size[1] != good->size[1]) {
    gc_binary_expand_op((int *)&vlen, tmp_size, beta, good);
  }
  /*  Extract other options */
  if (rtIsNaN(INP_n)) {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 1;
    emxEnsureCapacity_real_T(out->ListCl, i);
    out->ListCl->data[0] = rtNaN;
  } else if (INP_n < 1.0) {
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 0;
  } else if (rtIsInf(INP_n) && (1.0 == INP_n)) {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 1;
    emxEnsureCapacity_real_T(out->ListCl, i);
    out->ListCl->data[0] = rtNaN;
  } else {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    loop_ub = (int)floor(INP_n - 1.0);
    out->ListCl->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(out->ListCl, i);
    for (i = 0; i <= loop_ub; i++) {
      out->ListCl->data[i] = (double)i + 1.0;
    }
  }
  /*  Model-related settings */
  /*  correction in case of Bayesian model to account for number of */
  /*  (fictitious) observations in the prior */
  emxInit_real_T(&gbonf, 2);
  emxInit_real_T(&gmin, 2);
  emxInit_boolean_T(&b_bool, 1);
  emxInit_real_T(&add, 1);
  emxInit_int32_T(&ia, 1);
  emxInit_real_T(&b_add, 1);
  if ((options_bonflev_size[0] != 0) && (options_bonflev_size[1] != 0)) {
    b_options_bonflev_size[0] = 1;
    b_options_bonflev_size[1] = 1;
    b_options_bonflev_data = (options_bonflev_data[0] < 1.0);
    nout_data.data = &b_options_bonflev_data;
    nout_data.size = &b_options_bonflev_size[0];
    nout_data.allocatedSize = 1;
    nout_data.numDimensions = 2;
    nout_data.canFreeData = false;
    if (b_ifWhileCond(&nout_data)) {
      FSRbonfbound(INP_n, INP_p, options_bonflev_data, options_bonflev_size,
                   INP_init, gbonf);
      gbonf_data = gbonf->data;
      /*  correction in case of Bayesian model to account for prior */
      /*  observations */
    } else {
      /*  in this case the threshold is constant therefore there is no need */
      /*  to change n */
      if (rtIsNaN(INP_init) || rtIsNaN(INP_n - 1.0)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        beta_data[0] = rtNaN;
      } else if (INP_n - 1.0 < INP_init) {
        beta->size[0] = 1;
        beta->size[1] = 0;
      } else if ((rtIsInf(INP_init) || rtIsInf(INP_n - 1.0)) &&
                 (INP_init == INP_n - 1.0)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        beta_data[0] = rtNaN;
      } else if (floor(INP_init) == INP_init) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        loop_ub = (int)floor((INP_n - 1.0) - INP_init);
        beta->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        for (i = 0; i <= loop_ub; i++) {
          beta_data[i] = INP_init + (double)i;
        }
      } else {
        eml_float_colon(INP_init, INP_n - 1.0, beta);
        beta_data = beta->data;
      }
      loop_ub = (int)(INP_n - INP_init);
      i = add->size[0];
      add->size[0] = loop_ub;
      emxEnsureCapacity_real_T(add, i);
      gmin_data = add->data;
      for (i = 0; i < loop_ub; i++) {
        gmin_data[i] = 1.0;
      }
      c_options_bonflev_data.data = (double *)&options_bonflev_data[0];
      c_options_bonflev_data.size = (int *)&options_bonflev_size[0];
      c_options_bonflev_data.allocatedSize = -1;
      c_options_bonflev_data.numDimensions = 2;
      c_options_bonflev_data.canFreeData = false;
      mtimes(&c_options_bonflev_data, add, b_add);
      gval_data = b_add->data;
      i = gbonf->size[0] * gbonf->size[1];
      gbonf->size[0] = beta->size[1];
      gbonf->size[1] = 2;
      emxEnsureCapacity_real_T(gbonf, i);
      gbonf_data = gbonf->data;
      loop_ub = beta->size[1];
      for (i = 0; i < loop_ub; i++) {
        gbonf_data[i] = beta_data[i];
      }
      loop_ub = b_add->size[0];
      for (i = 0; i < loop_ub; i++) {
        gbonf_data[i + gbonf->size[0]] = gval_data[i];
      }
    }
    ndecl = 0.0;
    /*  declarations necessary for MATLAB C coder */
    c99 = -1;
    c999 = -1;
    c9999 = -1;
    c99999 = -1;
    c001 = -1;
    i = gmin->size[0] * gmin->size[1];
    gmin->size[0] = 1;
    gmin->size[1] = 1;
    emxEnsureCapacity_real_T(gmin, i);
    gmin_data = gmin->data;
    gmin_data[0] = 0.0;
    NoFalseSig = true;
    nout_size_idx_0 = 1;
    nout_size_idx_1 = 1;
    b_nout_data[0] = 0U;
  } else {
    i = gbonf->size[0] * gbonf->size[1];
    gbonf->size[0] = 1;
    gbonf->size[1] = 1;
    emxEnsureCapacity_real_T(gbonf, i);
    gbonf_data = gbonf->data;
    gbonf_data[0] = 0.0;
    /*  Initialization necessary for MATLAB C coder */
    /*  lowexceed=false means than outlier detection is just based on upper */
    /*  exceedances */
    /*  Compute theoretical envelopes based on all observations */
    /*  Compute theoretical envelopes for minimum deletion residual based on all
     */
    /*  the observations for the above quantiles. */
    FSRenvmdr(INP_n, INP_p, INP_init, gmin);
    gmin_data = gmin->data;
    /*  gmin = the matrix which contains envelopes based on all observations. */
    /*  1st col of gmin = fwd search index */
    /*  2nd col of gmin = 99% envelope */
    /*  3rd col of gmin = 99.9% envelope */
    /*  4th col of gmin = 99.99% envelope */
    /*  5th col of gmin = 99.999% envelope */
    /*  6th col of gmin = 1% envelope */
    /*  7th col of gmin = 50% envelope */
    /*  correction in case of Bayesian model to account for number of */
    /*  (fictitious) observations in the prior */
    /*  Thus, set the columns of gmin where the theoretical quantiles are
     * located. */
    c99 = 1;
    c999 = 2;
    c9999 = 3;
    c99999 = 4;
    c001 = 5;
    loop_ub = INP_mdr->size[0];
    i = b_bool->size[0];
    b_bool->size[0] = INP_mdr->size[0];
    emxEnsureCapacity_boolean_T(b_bool, i);
    bool_data = b_bool->data;
    for (i = 0; i < loop_ub; i++) {
      bool_data[i] = (INP_mdr_data[i] >= INP_init);
    }
    input_sizes_idx_1 = b_bool->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        trueCount++;
      }
    }
    i = ia->size[0];
    ia->size[0] = trueCount;
    emxEnsureCapacity_int32_T(ia, i);
    ia_data = ia->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    loop_ub = INP_mdr->size[1];
    i = out->mdr->size[0] * out->mdr->size[1];
    out->mdr->size[0] = ia->size[0];
    out->mdr->size[1] = INP_mdr->size[1];
    emxEnsureCapacity_real_T(out->mdr, i);
    for (i = 0; i < loop_ub; i++) {
      trueCount = ia->size[0];
      for (i1 = 0; i1 < trueCount; i1++) {
        out->mdr->data[i1 + out->mdr->size[0] * i] =
            INP_mdr_data[(ia_data[i1] + INP_mdr->size[0] * i) - 1];
      }
    }
    ndecl = INP_mdr_data[ia_data[0] - 1];
    loop_ub = gmin->size[0];
    i = b_bool->size[0];
    b_bool->size[0] = gmin->size[0];
    emxEnsureCapacity_boolean_T(b_bool, i);
    bool_data = b_bool->data;
    for (i = 0; i < loop_ub; i++) {
      bool_data[i] = (gmin_data[i] >= ndecl);
    }
    input_sizes_idx_1 = b_bool->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        trueCount++;
      }
    }
    emxInit_int32_T(&r, 1);
    i = r->size[0];
    r->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r, i);
    ia_data = r->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxInit_real_T(&b_gmin, 2);
    vlen = gmin->size[1] - 1;
    i = b_gmin->size[0] * b_gmin->size[1];
    b_gmin->size[0] = r->size[0];
    b_gmin->size[1] = gmin->size[1];
    emxEnsureCapacity_real_T(b_gmin, i);
    gval_data = b_gmin->data;
    for (i = 0; i <= vlen; i++) {
      loop_ub = r->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        gval_data[i1 + b_gmin->size[0] * i] =
            gmin_data[(ia_data[i1] + gmin->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r);
    i = gmin->size[0] * gmin->size[1];
    gmin->size[0] = b_gmin->size[0];
    gmin->size[1] = b_gmin->size[1];
    emxEnsureCapacity_real_T(gmin, i);
    gmin_data = gmin->data;
    loop_ub = b_gmin->size[0] * b_gmin->size[1];
    for (i = 0; i < loop_ub; i++) {
      gmin_data[i] = gval_data[i];
    }
    emxFree_real_T(&b_gmin);
    /*  Store in nout the number of times the observed mdr (d_min) lies above:
     */
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = b_bool->size[0];
      b_bool->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(b_bool, i);
      bool_data = b_bool->data;
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = (out->mdr->data[i + out->mdr->size[0]] >
                        gmin_data[i + gmin->size[0]]);
      }
    } else {
      fc_binary_expand_op(b_bool, out, ia, gmin);
      bool_data = b_bool->data;
    }
    emxInit_boolean_T(&r3, 1);
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = r3->size[0];
      r3->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(r3, i);
      r4 = r3->data;
      for (i = 0; i < loop_ub; i++) {
        r4[i] = (out->mdr->data[i + out->mdr->size[0]] >
                 gmin_data[i + gmin->size[0] * 2]);
      }
    } else {
      ec_binary_expand_op(r3, out, ia, gmin);
      r4 = r3->data;
    }
    emxInit_boolean_T(&r5, 1);
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = r5->size[0];
      r5->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(r5, i);
      r7 = r5->data;
      for (i = 0; i < loop_ub; i++) {
        r7[i] = (out->mdr->data[i + out->mdr->size[0]] >
                 gmin_data[i + gmin->size[0] * 3]);
      }
    } else {
      dc_binary_expand_op(r5, out, ia, gmin);
      r7 = r5->data;
    }
    emxInit_boolean_T(&r8, 1);
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = r8->size[0];
      r8->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(r8, i);
      r9 = r8->data;
      for (i = 0; i < loop_ub; i++) {
        r9[i] = (out->mdr->data[i + out->mdr->size[0]] >
                 gmin_data[i + gmin->size[0] * 4]);
      }
    } else {
      cc_binary_expand_op(r8, out, ia, gmin);
      r9 = r8->data;
    }
    emxInit_boolean_T(&r10, 1);
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = r10->size[0];
      r10->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(r10, i);
      r11 = r10->data;
      for (i = 0; i < loop_ub; i++) {
        r11[i] = (out->mdr->data[i + out->mdr->size[0]] <
                  gmin_data[i + gmin->size[0] * 5]);
      }
    } else {
      bc_binary_expand_op(r10, out, ia, gmin);
      r11 = r10->data;
    }
    input_sizes_idx_1 = b_bool->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        trueCount++;
      }
    }
    emxInit_int32_T(&r12, 1);
    i = r12->size[0];
    r12->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r12, i);
    ia_data = r12->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    input_sizes_idx_1 = r3->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r4[b_i]) {
        trueCount++;
      }
    }
    emxInit_int32_T(&r14, 1);
    i = r14->size[0];
    r14->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r14, i);
    ia_data = r14->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r4[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxFree_boolean_T(&r3);
    input_sizes_idx_1 = r5->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r7[b_i]) {
        trueCount++;
      }
    }
    emxInit_int32_T(&r16, 1);
    i = r16->size[0];
    r16->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r16, i);
    ia_data = r16->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r7[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxFree_boolean_T(&r5);
    input_sizes_idx_1 = r8->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r9[b_i]) {
        trueCount++;
      }
    }
    emxInit_int32_T(&r18, 1);
    i = r18->size[0];
    r18->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r18, i);
    ia_data = r18->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r9[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxFree_boolean_T(&r8);
    input_sizes_idx_1 = r10->size[0] - 1;
    trueCount = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r11[b_i]) {
        trueCount++;
      }
    }
    emxInit_int32_T(&r20, 1);
    i = r20->size[0];
    r20->size[0] = trueCount;
    emxEnsureCapacity_int32_T(r20, i);
    ia_data = r20->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r11[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxFree_boolean_T(&r10);
    /*        % the 99% envelope */
    /*       % the 99.9% envelope */
    /*      % the 99.99% envelope */
    /*     % the 99.999% envelope */
    /*  the 1% envelope */
    for (i = 0; i < 5; i++) {
      uv1[i << 1] = (unsigned int)iv[i];
    }
    uv1[1] = (unsigned int)r20->size[0];
    uv1[3] = (unsigned int)r12->size[0];
    uv1[5] = (unsigned int)r14->size[0];
    uv1[7] = (unsigned int)r16->size[0];
    uv1[9] = (unsigned int)r18->size[0];
    nout_size_idx_0 = 2;
    nout_size_idx_1 = 5;
    emxFree_int32_T(&r20);
    emxFree_int32_T(&r18);
    emxFree_int32_T(&r16);
    emxFree_int32_T(&r14);
    emxFree_int32_T(&r12);
    for (i = 0; i < 10; i++) {
      b_nout_data[i] = uv1[i];
    }
    /*  NoFalseSig = boolean linked to the fact that the signal is good or not
     */
    /*  NoFalseSig is set to 1 if the condition for an INCONTROVERTIBLE SIGNAL
     * is */
    /*  fulfilled. */
    trueCount = 0;
    vlen = 0;
    for (b_i = 0; b_i < 5; b_i++) {
      empty_non_axis_sizes = ((int)b_nout_data[2 * b_i] == 9999);
      if (empty_non_axis_sizes) {
        trueCount++;
        c_tmp_data[vlen] = (signed char)(b_i + 1);
        vlen++;
      }
    }
    nout_size[0] = 1;
    nout_size[1] = trueCount;
    for (i = 0; i < trueCount; i++) {
      c_nout_data[i] = ((int)b_nout_data[2 * (c_tmp_data[i] - 1) + 1] >= 10);
    }
    nout_data.data = &c_nout_data[0];
    nout_data.size = &nout_size[0];
    nout_data.allocatedSize = 5;
    nout_data.numDimensions = 2;
    nout_data.canFreeData = false;
    NoFalseSig = c_ifWhileCond(&nout_data);
    /*  Divide central part from final part of the search */
    ndecl = INP_n - floor(13.0 * sqrt(INP_n / 200.0));
  }
  emxInit_real_T(&gmin1, 2);
  /*  Initialization necessary for MATLAB C Coder */
  i = gmin1->size[0] * gmin1->size[1];
  gmin1->size[0] = 1;
  gmin1->size[1] = 1;
  emxEnsureCapacity_real_T(gmin1, i);
  gmin1_data = gmin1->data;
  gmin1_data[0] = 0.0;
  ii = 0.0;
  /*  Part 1. Signal detection and validation */
  nmdr = out->mdr->size[0] - 1;
  b_signal = 0;
  sto = 0;
  mdag = -1.0;
  /*  Stage 1a: signal detection */
  /*  Signal dection is based on monitoring consecutive triplets or single */
  /*  extreme values */
  /*  Check if signal must be based on consecutive exceedances of envelope */
  /*  of mdr or on exceedance of global Bonferroni level */
  empty_non_axis_sizes = (options_bonflev_size[0] == 0);
  condition2 = (options_bonflev_size[1] == 0);
  emxInit_real_T(&gval, 2);
  if (empty_non_axis_sizes || condition2) {
    /*  Signal detection loop */
    b_i = 2;
    c_i = 2;
    exitg2 = false;
    while ((!exitg2) && (c_i - 2 <= nmdr - 2)) {
      b_i = c_i;
      if ((double)(c_i - 2) + 3.0 < (ndecl - INP_init) + 1.0) {
        /*  CENTRAL PART OF THE SEARCH */
        /*  Extreme triplet or an extreme single value */
        /*  Three consecutive values of d_min above the 99.99% threshold or 1 */
        /*  above 99.999% envelope */
        if (((out->mdr->data[c_i + out->mdr->size[0]] >
              gmin_data[c_i + gmin->size[0] * c9999]) &&
             (out->mdr->data[(c_i + out->mdr->size[0]) + 1] >
              gmin_data[(c_i + gmin->size[0] * c9999) + 1]) &&
             (out->mdr->data[(c_i + out->mdr->size[0]) - 1] >
              gmin_data[(c_i + gmin->size[0] * c9999) - 1])) ||
            (out->mdr->data[c_i + out->mdr->size[0]] >
             gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1]) ||
            (out->mdr->data[c_i + out->mdr->size[0]] >
             gmin_data[c_i + gmin->size[0] * c99999])) {
          if (options_msg) {
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
          }
          if ((out->mdr->data[c_i + out->mdr->size[0]] >
               gmin_data[c_i + gmin->size[0] * c9999]) &&
              (out->mdr->data[(c_i + out->mdr->size[0]) + 1] >
               gmin_data[(c_i + gmin->size[0] * c9999) + 1]) &&
              (out->mdr->data[(c_i + out->mdr->size[0]) - 1] >
               gmin_data[(c_i + gmin->size[0] * c9999) - 1])) {
            if (options_msg) {
              int2str(out->mdr->data[c_i], b_out.data, b_out.size);
              int2str(INP_n, b_out.data, b_out.size);
              int2str(out->mdr->data[c_i - 1], b_out.data, b_out.size);
              int2str(INP_n, b_out.data, b_out.size);
              int2str(out->mdr->data[c_i + 1], b_out.data, b_out.size);
              int2str(INP_n, b_out.data, b_out.size);
            }
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
            int2str(out->mdr->data[c_i - 1], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
            int2str(out->mdr->data[c_i + 1], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
          }
          if (out->mdr->data[c_i + out->mdr->size[0]] >
              gmin_data[c_i + gmin->size[0] * c99999]) {
            if (options_msg) {
              int2str(out->mdr->data[c_i], b_out.data, b_out.size);
              int2str(INP_n, b_out.data, b_out.size);
            }
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
          }
          if (out->mdr->data[c_i + out->mdr->size[0]] >
              gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1]) {
            if (options_msg) {
              int2str(out->mdr->data[c_i], b_out.data, b_out.size);
              int2str(INP_n, b_out.data, b_out.size);
            }
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
            NoFalseSig = true;
            /*  i.e., no need of further validation */
          }
          /* '------------------------------------------------'; */
          b_signal = 1;
        }
      } else if (c_i + 1 < out->mdr->size[0] - 1) {
        /*  FINAL PART OF THE SEARCH */
        /*  Extreme couple adjacent to an exceedance */
        /*  Two consecutive values of mdr above the 99.99% envelope and 1 above
         * 99% */
        /*              if ( (mdr(i,2)   > gmin(i,c999)   && mdr(i+1,2) >
         * gmin(i+1,c999) && mdr(i-1,2) > gmin(i-1,c99)) || ... */
        /*                   (mdr(i-1,2) > gmin(i-1,c999) && mdr(i,2)   >
         * gmin(i,c999)   && mdr(i+1,2) > gmin(i+1,c99)) || ... */
        /*                    mdr(i,2)   > gmin(end,c99)  || ... */
        /*                    mdr(i,2)   > gmin(i,c99999) ) */
        if ((out->mdr->data[c_i + out->mdr->size[0]] >
             gmin_data[c_i + gmin->size[0] * c999]) &&
            (out->mdr->data[(c_i + out->mdr->size[0]) + 1] >
             gmin_data[(c_i + gmin->size[0] * c999) + 1]) &&
            (out->mdr->data[(c_i + out->mdr->size[0]) - 1] >
             gmin_data[(c_i + gmin->size[0] * c99) - 1])) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }
        if ((out->mdr->data[(c_i + out->mdr->size[0]) - 1] >
             gmin_data[(c_i + gmin->size[0] * c999) - 1]) &&
            (out->mdr->data[c_i + out->mdr->size[0]] >
             gmin_data[c_i + gmin->size[0] * c999]) &&
            (out->mdr->data[(c_i + out->mdr->size[0]) + 1] >
             gmin_data[(c_i + gmin->size[0] * c99) + 1])) {
          condition2 = true;
        } else {
          condition2 = false;
        }
        condition3 = (out->mdr->data[c_i + out->mdr->size[0]] >
                      gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1]);
        condition4 = (out->mdr->data[c_i + out->mdr->size[0]] >
                      gmin_data[c_i + gmin->size[0] * c99999]);
        if (empty_non_axis_sizes || condition2 || condition3 || condition4) {
          if (options_msg) {
            /*  disp(['Signal in final part of the search: step '
             * num2str(mdr(i,1)) ' because']); */
            Rprintf("Signal in final part of the search: step %.0f because",
                   out->mdr->data[c_i]);
            //fflush(stdout);
          }
          if (empty_non_axis_sizes) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.9% and
               * rmin('  int2str(mdr(i+1,1)) ',' int2str(n) ')>99.9% and rmin('
               * int2str(mdr(i-1,1)) ',' int2str(n) ')>99%']); */
              print_processing(
                  out->mdr->data[c_i], INP_n, out->mdr->data[c_i + 1], INP_n,
                  out->mdr->data[c_i - 1], INP_n, validatedHoleFilling);
              Rprintf("\nrmin(%.0f,%.0f)>99.9%% and rmin(%.0f,%.0f)>99.9%% and "
                     "rmin(%.0f,%.0f)>99%%",
                     validatedHoleFilling[0], validatedHoleFilling[1],
                     validatedHoleFilling[2], validatedHoleFilling[3],
                     validatedHoleFilling[4], validatedHoleFilling[5]);
              //fflush(stdout);
            }
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
            int2str(out->mdr->data[c_i - 1], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
            int2str(out->mdr->data[c_i + 1], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
          }
          if (condition2) {
            if (options_msg) {
              /*    disp(['rmin('  int2str(mdr(i-1,1)) ',' int2str(n) ')>99.9%
               * and rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.9% and
               * rmin('  int2str(mdr(i+1,1)) ',' int2str(n) ')>99%']); */
              print_processing(
                  out->mdr->data[c_i - 1], INP_n, out->mdr->data[c_i], INP_n,
                  out->mdr->data[c_i + 1], INP_n, validatedHoleFilling);
              Rprintf("\nrmin(%.0f,%.0f)>99.9%% and rmin(%.0f,%.0f)>99.9%% and "
                     "rmin(%.0f,%.0f)>99%%",
                     validatedHoleFilling[0], validatedHoleFilling[1],
                     validatedHoleFilling[2], validatedHoleFilling[3],
                     validatedHoleFilling[4], validatedHoleFilling[5]);
              //fflush(stdout);
            }
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
            int2str(out->mdr->data[c_i - 1], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
            int2str(out->mdr->data[c_i + 1], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
          }
          if (condition3) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99% at
               * final step: Bonferroni signal in the final part of the
               * search.']); */
              Rprintf("\nrmin(%.0f,%.0f)>99%% at final step: Bonferroni signal "
                     "in the final part of the search.",
                     out->mdr->data[c_i], INP_n);
              //fflush(stdout);
            }
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
          }
          /*  Extreme single value above the upper threshold */
          if (condition4) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.999%']);
               */
              Rprintf("\nrmin(%.0f,%.0f)>99.999%%", out->mdr->data[c_i], INP_n);
              //fflush(stdout);
            }
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
          }
          if (options_msg) {
            Rprintf("\n------------------------------------------------");
            //fflush(stdout);
          }
          /*  Signal is always considered true if it takes place in the */
          /*  final part of the search */
          NoFalseSig = true;
          b_signal = 1;
        }
      } else if (((out->mdr->data[c_i + out->mdr->size[0]] >
                   gmin_data[c_i + gmin->size[0] * c999]) ||
                  (out->mdr->data[c_i + out->mdr->size[0]] >
                   gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1])) &&
                 (c_i + 1 == out->mdr->size[0] - 1)) {
        /*  potential couple of outliers */
        b_signal = 1;
        if (out->mdr->data[c_i + out->mdr->size[0]] >
            gmin_data[c_i + gmin->size[0] * c999]) {
          if (options_msg) {
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
          }
          int2str(out->mdr->data[c_i], b_out.data, b_out.size);
          int2str(INP_n, b_out.data, b_out.size);
        }
        if (out->mdr->data[c_i + out->mdr->size[0]] >
            gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1]) {
          if (options_msg) {
            int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            int2str(INP_n, b_out.data, b_out.size);
          }
          int2str(out->mdr->data[c_i], b_out.data, b_out.size);
          int2str(INP_n, b_out.data, b_out.size);
        }
      } else if ((out->mdr->data[c_i + out->mdr->size[0]] >
                  gmin_data[c_i + gmin->size[0] * c99]) &&
                 (c_i + 1 == out->mdr->size[0])) {
        /*  a single outlier */
        b_signal = 1;
        int2str(out->mdr->data[c_i], b_out.data, b_out.size);
        int2str(INP_n, b_out.data, b_out.size);
      }
      /*         %% Stage 1b: signal validation */
      if (b_signal == 1) {
        if (options_msg) {
          Rprintf("\n-------------------\n");
          //fflush(stdout);
        }
        /*  mdag is $m^\dagger$ */
        mdag = out->mdr->data[c_i];
        if (out->mdr->data[c_i] < INP_n - 2.0) {
          /*  Check if the signal is incontrovertible */
          /*  Incontrovertible signal = 3 consecutive values of d_min > */
          /*  99.999% threshold */
          if ((out->mdr->data[c_i + out->mdr->size[0]] >
               gmin_data[c_i + gmin->size[0] * c99999]) &&
              (out->mdr->data[(c_i + out->mdr->size[0]) - 1] >
               gmin_data[(c_i + gmin->size[0] * c99999) - 1]) &&
              (out->mdr->data[(c_i + out->mdr->size[0]) + 1] >
               gmin_data[(c_i + gmin->size[0] * c99999) + 1])) {
            if (options_msg) {
              int2str(out->mdr->data[c_i], b_out.data, b_out.size);
            }
            NoFalseSig = true;
          }
        } else {
          NoFalseSig = true;
        }
        /*  if the following statement is true, observed curve of r_min is */
        /*  above 99.99% and later is below 1%: peak followed by dip */
        if (out->mdr->size[0] > (mdag - out->mdr->data[0]) + 31.0) {
          for (i = 0; i < 31; i++) {
            uv[i] = ((unsigned int)i + c_i) + 2U;
          }
          for (i = 0; i < 31; i++) {
            vlen = (int)uv[i] - 1;
            x[i] = (out->mdr->data[vlen + out->mdr->size[0]] <
                    gmin_data[vlen + gmin->size[0] * c001]);
          }
          input_sizes_idx_1 = x[0];
          for (trueCount = 0; trueCount < 30; trueCount++) {
            input_sizes_idx_1 += x[trueCount + 1];
          }
          if (input_sizes_idx_1 >= 2) {
            NoFalseSig = true;
            /*  Peak followed by dip */
          }
        } else {
          if (c_i + 2U > (unsigned int)out->mdr->size[0]) {
            i = -1;
            i1 = -1;
          } else {
            i = c_i;
            i1 = out->mdr->size[0] - 1;
          }
          if (c_i + 2U > (unsigned int)gmin->size[0]) {
            i2 = -1;
            trueCount = -1;
          } else {
            i2 = c_i;
            trueCount = gmin->size[0] - 1;
          }
          loop_ub = i1 - i;
          if (loop_ub == trueCount - i2) {
            i1 = b_bool->size[0];
            b_bool->size[0] = loop_ub;
            emxEnsureCapacity_boolean_T(b_bool, i1);
            bool_data = b_bool->data;
            for (i1 = 0; i1 < loop_ub; i1++) {
              bool_data[i1] =
                  (out->mdr->data[((i + i1) + out->mdr->size[0]) + 1] <
                   gmin_data[((i2 + i1) + gmin->size[0] * c001) + 1]);
            }
          } else {
            ac_binary_expand_op(b_bool, out, i + 1, i1, gmin, i2 + 1, trueCount,
                                c001);
            bool_data = b_bool->data;
          }
          vlen = b_bool->size[0];
          if (b_bool->size[0] == 0) {
            input_sizes_idx_1 = 0;
          } else {
            input_sizes_idx_1 = bool_data[0];
            for (trueCount = 2; trueCount <= vlen; trueCount++) {
              input_sizes_idx_1 += bool_data[trueCount - 1];
            }
          }
          if (input_sizes_idx_1 >= 2) {
            NoFalseSig = true;
            /* Peak followed by dip in the final part of the search'; */
          }
        }
        /*  if at this point NoFalseSig==0 it means that: */
        /*  1) n9999<10 */
        /*  2) signal tool place in the central part of the search */
        /*  3) signal was not incontrovertible */
        /*  4) there was not a peak followed by dip */
        if (!NoFalseSig) {
          /*  Compute the final value of the envelope based on */
          /*  mdr(i+1,1)=mdagger+1 observations */
          /* [gval]=FSRenvmdr(mdag+1,p,'prob',0.01,'m0',mdag); */
          b_FSRenvmdr(mdag + 1.0, INP_p, mdag, gval);
          gval_data = gval->data;
          if (out->mdr->data[c_i + out->mdr->size[0]] <
              gval_data[gval->size[0]]) {
            if (options_msg) {
              int2str(mdag, b_out.data, b_out.size);
            }
            /*  increase mdag of the search by one unit */
            mdag = 0.0;
          } else {
            NoFalseSig = true;
          }
        }
        /*  If the signal has been validated get out of the signal detection */
        /*  loop and move to stage 2: superimposition of the envelopes */
        if (NoFalseSig) {
          exitg2 = true;
        } else {
          c_i++;
        }
      } else {
        c_i++;
      }
    }
  } else {
    b_i = 0;
    c_i = 0;
    exitg1 = false;
    while ((!exitg1) && (c_i <= nmdr)) {
      b_i = c_i;
      /*  Outlier detection based on Bonferroni threshold */
      if (out->mdr->data[c_i + out->mdr->size[0]] >
          gbonf_data[c_i + gbonf->size[0] * (gbonf->size[1] - 1)]) {
        if (options_msg) {
          int2str(out->mdr->data[c_i], b_out.data, b_out.size);
          int2str(INP_n, b_out.data, b_out.size);
        }
        int2str(out->mdr->data[c_i], b_out.data, b_out.size);
        int2str(INP_n, b_out.data, b_out.size);
        b_signal = 1;
        exitg1 = true;
      } else {
        c_i++;
      }
    }
  }
  emxFree_real_T(&gmin);
  emxFree_real_T(&gbonf);
  /*  Create figure containing mdr + envelopes based on all the observations. */
  /*  Part 2: envelope resuperimposition */
  /*  if a validated signal took place, superimposition of the envelopes starts
   */
  /*  from m^\dagger-1 */
  if (b_signal == 1) {
    if ((options_bonflev_size[0] == 0) || (options_bonflev_size[1] == 0)) {
      if (options_msg) {
        int2str(mdag - 1.0, b_out.data, b_out.size);
      }
      /*  First resuperimposed envelope is based on mdag-1 observations */
      /*  Notice that mdr(i,1) = m dagger */
      i = (int)(INP_n + (1.0 - (mdag - 1.0)));
      ndecl = mdag - 1.0;
      vlen = 0;
      exitg1 = false;
      while ((!exitg1) && (vlen <= i - 1)) {
        ndecl = (mdag - 1.0) + (double)vlen;
        /*  Compute theoretical envelopes based on tr observations */
        if (!INP_weak) {
          c_FSRenvmdr(ndecl, INP_p, INP_init, gmin1);
          gmin1_data = gmin1->data;
        } else {
          /*  use a stronger decision rule to flag outliers (useful in presence
           * of VIOMs) */
          d_FSRenvmdr(ndecl, INP_p, INP_init, gmin1);
          gmin1_data = gmin1->data;
        }
        i1 = gmin1->size[0] - b_i;
        ii = (double)(b_i + 1) - 1.0;
        input_sizes_idx_1 = 0;
        exitg2 = false;
        while ((!exitg2) && (input_sizes_idx_1 <= i1)) {
          ii = ((double)(b_i + 1) - 1.0) + (double)input_sizes_idx_1;
          /*  CHECK IF STOPPING RULE IS FULFILLED */
          /*  ii>=size(gmin1,1)-2 = final, penultimate or antepenultimate value
           */
          /*  of the resuperimposed envelope based on tr observations */
          d = out->mdr->data[((int)ii + out->mdr->size[0]) - 1];
          if ((d > gmin1_data[((int)ii + gmin1->size[0] * c99) - 1]) &&
              ((int)ii >= gmin1->size[0] - 2)) {
            /*  Condition S1 */
            int2str(out->mdr->data[(int)ii - 1], b_out.data, b_out.size);
            int2str(ndecl, b_out.data, b_out.size);
            if (options_msg) {
              int2str(out->mdr->data[(int)ii - 1], b_out.data, b_out.size);
              int2str(ndecl, b_out.data, b_out.size);
            }
            sto = 1;
            exitg2 = true;
          } else if (((int)ii < gmin1->size[0] - 2) &&
                     (d > gmin1_data[((int)ii + gmin1->size[0] * c999) - 1])) {
            /*  Condition S2 */
            int2str(out->mdr->data[(int)ii - 1], b_out.data, b_out.size);
            int2str(ndecl, b_out.data, b_out.size);
            if (options_msg) {
              int2str(out->mdr->data[(int)ii - 1], b_out.data, b_out.size);
              int2str(ndecl, b_out.data, b_out.size);
            }
            sto = 1;
            exitg2 = true;
          } else {
            /*  mdr is inside the envelopes, so keep resuperimposing */
            input_sizes_idx_1++;
          }
        }
        if (sto == 1) {
          exitg1 = true;
        } else {
          vlen++;
        }
      }
      /*         %% Stage 2a: subset validation */
      /*  In this part we check whether the subset is homogeneous. In other */
      /*  words we verify conditions H1 and H2 */
      /*  tr= m^\dagger+k+1 */
      /*  m^\dagger+k=tr-1 */
      /*  m*=mdr(ii,1) */
      /*  Condition H2 */
      /*  Check if stopping rule takes place at m* <m^\dagger+k */
      if (out->mdr->data[(int)ii - 1] < ndecl - 1.0) {
        /*  Condition H2b and H2a */
        if ((unsigned int)ii + 1U > (unsigned int)gmin1->size[0]) {
          i = 0;
          i1 = 0;
          i2 = 0;
          trueCount = 0;
        } else {
          i = (int)(unsigned int)ii;
          i1 = gmin1->size[0];
          i2 = (int)(unsigned int)ii;
          trueCount = gmin1->size[0];
        }
        loop_ub = i1 - i;
        if (loop_ub == trueCount - i2) {
          i1 = b_bool->size[0];
          b_bool->size[0] = loop_ub;
          emxEnsureCapacity_boolean_T(b_bool, i1);
          bool_data = b_bool->data;
          for (i1 = 0; i1 < loop_ub; i1++) {
            bool_data[i1] = (gmin1_data[(i + i1) + gmin1->size[0] * 3] >
                             out->mdr->data[(i2 + i1) + out->mdr->size[0]]);
          }
        } else {
          yb_binary_expand_op(b_bool, gmin1, i, i1 - 1, out, i2, trueCount - 1);
          bool_data = b_bool->data;
        }
        vlen = b_bool->size[0];
        if (b_bool->size[0] == 0) {
          input_sizes_idx_1 = 0;
        } else {
          input_sizes_idx_1 = bool_data[0];
          for (trueCount = 2; trueCount <= vlen; trueCount++) {
            input_sizes_idx_1 += bool_data[trueCount - 1];
          }
        }
        if (input_sizes_idx_1 > 0) {
          if (options_msg) {
            int2str(ndecl - 1.0, b_out.data, b_out.size);
          }
          /*  Find m^{1%} that is the step where mdr goes below the 1% */
          /*  threshold for the first time */
          /*  gfind = concatenate all the steps from m^*+1 to m^\dagger+k-1 */
          if ((unsigned int)ii + 1U > (unsigned int)gmin1->size[0]) {
            i = 0;
            i1 = 0;
            i2 = 0;
            trueCount = 0;
            input_sizes_idx_1 = 0;
            vlen = 0;
          } else {
            i = (int)(unsigned int)ii;
            i1 = gmin1->size[0];
            i2 = (int)(unsigned int)ii;
            trueCount = gmin1->size[0];
            input_sizes_idx_1 = (int)(unsigned int)ii;
            vlen = gmin1->size[0];
          }
          loop_ub = trueCount - i2;
          if (loop_ub == vlen - input_sizes_idx_1) {
            trueCount = i1 - i;
            i1 = gval->size[0] * gval->size[1];
            gval->size[0] = trueCount;
            gval->size[1] = 2;
            emxEnsureCapacity_real_T(gval, i1);
            gval_data = gval->data;
            for (i1 = 0; i1 < trueCount; i1++) {
              gval_data[i1] = gmin1_data[i + i1];
            }
            for (i = 0; i < loop_ub; i++) {
              gval_data[i + gval->size[0]] =
                  (gmin1_data[(i2 + i) + gmin1->size[0] * 3] >
                   out->mdr->data[(input_sizes_idx_1 + i) + out->mdr->size[0]]);
            }
          } else {
            xb_binary_expand_op(gval, gmin1, i, i1 - 1, i2, trueCount - 1, out,
                                input_sizes_idx_1, vlen - 1);
            gval_data = gval->data;
          }
          /*  select from gfind the steps where mdr was below 1% threshold */
          /*  gfind(1,1) contains the first step where mdr was below 1% */
          loop_ub = gval->size[0];
          i = b_bool->size[0];
          b_bool->size[0] = gval->size[0];
          emxEnsureCapacity_boolean_T(b_bool, i);
          bool_data = b_bool->data;
          for (i = 0; i < loop_ub; i++) {
            bool_data[i] = (gval_data[i + gval->size[0]] > 0.0);
          }
          input_sizes_idx_1 = b_bool->size[0] - 1;
          trueCount = 0;
          for (c_i = 0; c_i <= input_sizes_idx_1; c_i++) {
            if (bool_data[c_i]) {
              trueCount++;
            }
          }
          emxInit_int32_T(&r15, 1);
          i = r15->size[0];
          r15->size[0] = trueCount;
          emxEnsureCapacity_int32_T(r15, i);
          ia_data = r15->data;
          vlen = 0;
          for (c_i = 0; c_i <= input_sizes_idx_1; c_i++) {
            if (bool_data[c_i]) {
              ia_data[vlen] = c_i + 1;
              vlen++;
            }
          }
          /*  find maximum in the interval m^\dagger=mdr(i,1) to the step */
          /*  prior to the one where mdr goes below 1% envelope */
          if (r15->size[0] == 1) {
            ndecl = gval_data[ia_data[0] - 1];
          } else {
            /*  Make sure that gfind(1,1)-mdr(1,1) is not smaller */
            /*  than i otherwise tr  becomes empty */
            d = gval_data[ia_data[0] - 1] - out->mdr->data[0];
            if (d >= b_i + 1) {
              if (b_i + 1 > d) {
                b_i = 0;
                i = 0;
              } else {
                i = (int)d;
              }
              loop_ub = i - b_i;
              i = gval->size[0] * gval->size[1];
              gval->size[0] = loop_ub;
              gval->size[1] = 2;
              emxEnsureCapacity_real_T(gval, i);
              gval_data = gval->data;
              for (i = 0; i < 2; i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  gval_data[i1 + gval->size[0] * i] =
                      out->mdr->data[(b_i + i1) + out->mdr->size[0] * i];
                }
              }
              d_sortrows(gval);
              gval_data = gval->data;
              ndecl = gval_data[gval->size[0] - 1];
            } else {
              ndecl = out->mdr->data[b_i];
            }
          }
          emxFree_int32_T(&r15);
          /*  Instruction necessary for MATlAB C coder */
          if (options_msg) {
            /*  disp(['Using the criterion of the maximum, the group of
             * homogenous obs. is=' int2str(tr)]); */
            Rprintf("Using the criterion of the maximum, the group of "
                   "homogenous obs. is= %.0f\n",
                   ndecl);
            //fflush(stdout);
          }
          /*  tr is redefined and is associated with the step associated to */
          /*  the maximum value of r_min */
          /*  try=sormcl[rows(sormcl),1]+1; */
          ndecl++;
        } else if (options_msg) {
          int2str(ndecl - 1.0, b_out.data, b_out.size);
        }
      }
      ndecl = (INP_n - ndecl) + 1.0;
    } else {
      ndecl = INP_n - out->mdr->data[b_i];
    }
    if (options_msg) {
      int2str(ndecl, b_out.data, b_out.size);
    }
  } else {
    ndecl = 0.0;
  }
  emxFree_real_T(&gval);
  emxFree_real_T(&gmin1);
  /*  End of the forward search */
  /*  Plot entry order of the untis */
  /*  plot([Un(1,1)-1;Un(:,1)],bb','x') */
  emxInit_real_T(&Xy, 2);
  if (ndecl > 0.0) {
    /*  Now find the list of the units declared as outliers */
    /*  bsel=~isnan(bb(:,tr-init+1)); */
    /*  ListOut=setdiff(1:n,bsel,1); */
    /*  REMARK: If the units forming subset have not been stored for all */
    /*  steps of the fwd search then it is necessary to call procedure FSRbsb */
    /*  to find unit forming subset in step n-decl */
    d = INP_n - INP_init;
    emxInit_real_T(&b_Xy, 2);
    emxInit_int32_T(&r1, 1);
    if (INP_bb->size[1] < d + 1.0) {
      emxInit_boolean_T(&r2, 2);
      /*  then it is necessary to understand what are the units belonging to */
      /*  subset in step n-ndecl. */
      /*  colbb is the column number of bb which contains the units forming */
      /*  subset in the largest step which has been stored among those */
      /*  which are smaller or equal than n-decl. */
      /*  The units in column colbb of matrix bb will form the initial */
      /*  subset in the call of routine FSRbsb */
      /*   if sum(~isnan(bb(:,colbb)))<n-ndecl then it is necessary to call */
      /*   procedure FSRbsb or FSRHbsb or FSRBbsb */
      i = r2->size[0] * r2->size[1];
      r2->size[0] = INP_bb->size[0];
      r2->size[1] = INP_bb->size[1];
      emxEnsureCapacity_boolean_T(r2, i);
      r4 = r2->data;
      loop_ub = INP_bb->size[0] * INP_bb->size[1];
      for (i = 0; i < loop_ub; i++) {
        r4[i] = rtIsNaN(INP_bb_data[i]);
      }
      emxInit_int32_T(&r6, 2);
      emxInit_boolean_T(&b_beta, 2);
      b_combineVectorElements(r2, r6);
      ia_data = r6->data;
      i = b_beta->size[0] * b_beta->size[1];
      b_beta->size[0] = 1;
      b_beta->size[1] = r6->size[1];
      emxEnsureCapacity_boolean_T(b_beta, i);
      bool_data = b_beta->data;
      loop_ub = r6->size[1];
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = (ia_data[i] >= ndecl);
      }
      f_eml_find(b_beta, (int *)&vlen, tmp_size);
      emxFree_boolean_T(&b_beta);
      loop_ub = INP_bb->size[0];
      i = r2->size[0] * r2->size[1];
      r2->size[0] = INP_bb->size[0];
      r2->size[1] = tmp_size[1];
      emxEnsureCapacity_boolean_T(r2, i);
      r4 = r2->data;
      trueCount = tmp_size[1];
      if (0 <= trueCount - 1) {
        for (i = 0; i < loop_ub; i++) {
          r4[i] = rtIsNaN(INP_bb_data[i + INP_bb->size[0] * (vlen - 1)]);
        }
      }
      emxInit_boolean_T(&r13, 2);
      i = r13->size[0] * r13->size[1];
      r13->size[0] = r2->size[0];
      r13->size[1] = r2->size[1];
      emxEnsureCapacity_boolean_T(r13, i);
      r7 = r13->data;
      loop_ub = r2->size[0] * r2->size[1];
      for (i = 0; i < loop_ub; i++) {
        r7[i] = !r4[i];
      }
      b_combineVectorElements(r13, r6);
      ia_data = r6->data;
      ii = INP_n - ndecl;
      b_tmp_size[0] = 1;
      b_tmp_size[1] = r6->size[1];
      loop_ub = r6->size[1];
      emxFree_boolean_T(&r13);
      for (i = 0; i < loop_ub; i++) {
        tmp_data = (ia_data[i] < ii);
      }
      emxFree_int32_T(&r6);
      b_tmp_data.data = &tmp_data;
      b_tmp_data.size = &b_tmp_size[0];
      b_tmp_data.allocatedSize = 1;
      b_tmp_data.numDimensions = 2;
      b_tmp_data.canFreeData = false;
      if (c_ifWhileCond(&b_tmp_data)) {
        loop_ub = INP_bb->size[0];
        i = r2->size[0] * r2->size[1];
        r2->size[0] = INP_bb->size[0];
        r2->size[1] = tmp_size[1];
        emxEnsureCapacity_boolean_T(r2, i);
        r4 = r2->data;
        trueCount = tmp_size[1];
        if (0 <= trueCount - 1) {
          for (i = 0; i < loop_ub; i++) {
            r4[i] = rtIsNaN(INP_bb_data[i + INP_bb->size[0] * (vlen - 1)]);
          }
        }
        emxInit_boolean_T(&r19, 2);
        i = r19->size[0] * r19->size[1];
        r19->size[0] = r2->size[0];
        r19->size[1] = r2->size[1];
        emxEnsureCapacity_boolean_T(r19, i);
        r7 = r19->data;
        loop_ub = r2->size[0] * r2->size[1];
        for (i = 0; i < loop_ub; i++) {
          r7[i] = !r4[i];
        }
        input_sizes_idx_1 = r19->size[0] * r19->size[1] - 1;
        trueCount = 0;
        for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
          if (r7[b_i]) {
            trueCount++;
          }
        }
        i = r1->size[0];
        r1->size[0] = trueCount;
        emxEnsureCapacity_int32_T(r1, i);
        ia_data = r1->data;
        vlen = 0;
        for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
          if (r7[b_i]) {
            ia_data[vlen] = b_i + 1;
            vlen++;
          }
        }
        emxFree_boolean_T(&r19);
        /*  Call procedure FSRbsb */
        i = add->size[0];
        add->size[0] = r1->size[0];
        emxEnsureCapacity_real_T(add, i);
        gmin_data = add->data;
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          gmin_data[i] = out->ListCl->data[ia_data[i] - 1];
        }
        emxInit_real_T(&Un, 2);
        FSRbsb(INP_y, INP_X, add, INP_n - ndecl, Un, b_Xy);
        gbonf_data = b_Xy->data;
        gval_data = Un->data;
        i = out->Un->size[0] * out->Un->size[1];
        out->Un->size[0] = Un->size[0];
        out->Un->size[1] = 11;
        emxEnsureCapacity_real_T(out->Un, i);
        loop_ub = Un->size[0] * 11;
        for (i = 0; i < loop_ub; i++) {
          out->Un->data[i] = gval_data[i];
        }
        emxFree_real_T(&Un);
        /*  The first column of BB contains the units forming subset in */
        /*  step n-ndecl */
        loop_ub = b_Xy->size[0];
        i = add->size[0];
        add->size[0] = b_Xy->size[0];
        emxEnsureCapacity_real_T(add, i);
        gmin_data = add->data;
        for (i = 0; i < loop_ub; i++) {
          gmin_data[i] = gbonf_data[i];
        }
        b_do_vectors(out->ListCl, add, out->ListOut, ia, &vlen);
      } else {
        loop_ub = INP_bb->size[0];
        i = r2->size[0] * r2->size[1];
        r2->size[0] = INP_bb->size[0];
        r2->size[1] = tmp_size[1];
        emxEnsureCapacity_boolean_T(r2, i);
        r4 = r2->data;
        trueCount = tmp_size[1];
        if (0 <= trueCount - 1) {
          for (i = 0; i < loop_ub; i++) {
            r4[i] = rtIsNaN(INP_bb_data[i + INP_bb->size[0] * (vlen - 1)]);
          }
        }
        input_sizes_idx_1 = r2->size[0] * r2->size[1] - 1;
        trueCount = 0;
        for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
          if (r4[b_i]) {
            trueCount++;
          }
        }
        i = r1->size[0];
        r1->size[0] = trueCount;
        emxEnsureCapacity_int32_T(r1, i);
        ia_data = r1->data;
        vlen = 0;
        for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
          if (r4[b_i]) {
            ia_data[vlen] = b_i + 1;
            vlen++;
          }
        }
        i = out->ListOut->size[0] * out->ListOut->size[1];
        out->ListOut->size[0] = 1;
        out->ListOut->size[1] = r1->size[0];
        emxEnsureCapacity_real_T(out->ListOut, i);
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          out->ListOut->data[i] = out->ListCl->data[ia_data[i] - 1];
        }
      }
      emxFree_boolean_T(&r2);
    } else {
      vlen = (int)((double)INP_bb->size[1] - ndecl);
      loop_ub = INP_bb->size[0];
      i = add->size[0];
      add->size[0] = INP_bb->size[0];
      emxEnsureCapacity_real_T(add, i);
      gmin_data = add->data;
      for (i = 0; i < loop_ub; i++) {
        gmin_data[i] = INP_bb_data[i + INP_bb->size[0] * (vlen - 1)];
      }
      i = b_bool->size[0];
      b_bool->size[0] = add->size[0];
      emxEnsureCapacity_boolean_T(b_bool, i);
      bool_data = b_bool->data;
      loop_ub = add->size[0];
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = rtIsNaN(gmin_data[i]);
      }
      input_sizes_idx_1 = b_bool->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (bool_data[b_i]) {
          trueCount++;
        }
      }
      i = r1->size[0];
      r1->size[0] = trueCount;
      emxEnsureCapacity_int32_T(r1, i);
      ia_data = r1->data;
      vlen = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (bool_data[b_i]) {
          ia_data[vlen] = b_i + 1;
          vlen++;
        }
      }
      i = out->ListOut->size[0] * out->ListOut->size[1];
      out->ListOut->size[0] = 1;
      out->ListOut->size[1] = r1->size[0];
      emxEnsureCapacity_real_T(out->ListOut, i);
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->ListOut->data[i] = out->ListCl->data[ia_data[i] - 1];
      }
    }
    emxFree_int32_T(&r1);
    /*  Add to ListOut all the units which have equal values in terms of X */
    /*  and to y to those declared as outliers */
    vlen = (int)rt_roundd_snf(INP_n * 5.0);
    i = add->size[0];
    add->size[0] = vlen;
    emxEnsureCapacity_real_T(add, i);
    gmin_data = add->data;
    for (i = 0; i < vlen; i++) {
      gmin_data[i] = 0.0;
    }
    e_do_vectors(out->ListCl, out->ListOut, good, ia, &vlen);
    gmin1_data = good->data;
    if ((INP_X->size[0] != 0) && (INP_X->size[1] != 0)) {
      vlen = INP_X->size[0];
    } else if (INP_y->size[0] != 0) {
      vlen = INP_y->size[0];
    } else {
      vlen = INP_X->size[0];
    }
    empty_non_axis_sizes = (vlen == 0);
    if (empty_non_axis_sizes ||
        ((INP_X->size[0] != 0) && (INP_X->size[1] != 0))) {
      input_sizes_idx_1 = INP_X->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || (INP_y->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    i = b_Xy->size[0] * b_Xy->size[1];
    b_Xy->size[0] = vlen;
    b_Xy->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(b_Xy, i);
    gbonf_data = b_Xy->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < vlen; i1++) {
        gbonf_data[i1 + b_Xy->size[0] * i] = INP_X_data[i1 + vlen * i];
      }
    }
    loop_ub = sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < vlen; i1++) {
        gbonf_data[i1 + b_Xy->size[0] * input_sizes_idx_1] = INP_y_data[i1];
      }
    }
    ij = 0U;
    i = out->ListOut->size[1];
    for (b_i = 0; b_i < i; b_i++) {
      i1 = good->size[1];
      for (trueCount = 0; trueCount < i1; trueCount++) {
        vlen = (int)gmin1_data[trueCount];
        input_sizes_idx_1 = (int)out->ListOut->data[b_i];
        loop_ub = b_Xy->size[1];
        i2 = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = b_Xy->size[1];
        emxEnsureCapacity_real_T(beta, i2);
        beta_data = beta->data;
        i2 = Xy->size[0] * Xy->size[1];
        Xy->size[0] = 1;
        Xy->size[1] = b_Xy->size[1];
        emxEnsureCapacity_real_T(Xy, i2);
        gval_data = Xy->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          beta_data[i2] = gbonf_data[(vlen + b_Xy->size[0] * i2) - 1];
          gval_data[i2] =
              gbonf_data[(input_sizes_idx_1 + b_Xy->size[0] * i2) - 1];
        }
        if (isequal(beta, Xy)) {
          ij++;
          gmin_data[(int)ij - 1] = gmin1_data[trueCount];
        }
        /*    disp(['i' num2str(i) 'j' num2str(j)]) */
      }
    }
    emxFree_real_T(&b_Xy);
    if ((int)ij > 0) {
      i = add->size[0];
      add->size[0] = (int)ij;
      emxEnsureCapacity_real_T(add, i);
      gmin_data = add->data;
      i = b_add->size[0];
      b_add->size[0] = add->size[0];
      emxEnsureCapacity_real_T(b_add, i);
      gval_data = b_add->data;
      loop_ub = add->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        gval_data[i] = gmin_data[i];
      }
      unique_vector(b_add, add);
      gmin_data = add->data;
      i = out->ListOut->size[1];
      loop_ub = add->size[0];
      i1 = out->ListOut->size[0] * out->ListOut->size[1];
      out->ListOut->size[1] += add->size[0];
      emxEnsureCapacity_real_T(out->ListOut, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        out->ListOut->data[i + i1] = gmin_data[i1];
      }
    }
    /*  Store the values of beta coefficients in step n-ndecl */
    /*  Remark: if ndecl>n-init then the number of outliers is set to n-init */
    ndecl = fmin(d, out->ListOut->size[1]);
    /*  Note that the S2 which comes out from procedure FSRBmdr (differently */
    /*  from FSRmdr and FSRHmdr is rescaled, that is it has been inflated by */
    /*  the consistency term, therefore in order to find the unrescaled one */
    /*  we have to recall procedure regressB). Given that the estimate of beta
     */
    /*  is also affected we also need to recompute it */
    if (2 > INP_Bcoeff->size[1]) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = INP_Bcoeff->size[1];
    }
    vlen = (int)((double)INP_Bcoeff->size[0] - ndecl);
    i2 = beta->size[0] * beta->size[1];
    beta->size[0] = 1;
    loop_ub = i1 - i;
    beta->size[1] = loop_ub;
    emxEnsureCapacity_real_T(beta, i2);
    beta_data = beta->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta_data[i1] =
          INP_Bcoeff_data[(vlen + INP_Bcoeff->size[0] * (i + i1)) - 1];
    }
    out->scale = sqrt(
        INP_S2_data[((int)((double)INP_S2->size[0] - ndecl) + INP_S2->size[0]) -
                    1]);
  } else {
    /*  No outlier is found. */
    /*  Store the values of beta coefficients in final step of the fwd search */
    i = out->ListOut->size[0] * out->ListOut->size[1];
    out->ListOut->size[0] = 1;
    out->ListOut->size[1] = 1;
    emxEnsureCapacity_real_T(out->ListOut, i);
    out->ListOut->data[0] = rtNaN;
    if (2 > INP_Bcoeff->size[1]) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = INP_Bcoeff->size[1];
    }
    i2 = beta->size[0] * beta->size[1];
    beta->size[0] = 1;
    loop_ub = i1 - i;
    beta->size[1] = loop_ub;
    emxEnsureCapacity_real_T(beta, i2);
    beta_data = beta->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta_data[i1] = INP_Bcoeff_data[(INP_Bcoeff->size[0] +
                                       INP_Bcoeff->size[0] * (i + i1)) -
                                      1];
    }
    out->scale = sqrt(INP_S2_data[(INP_S2->size[0] + INP_S2->size[0]) - 1]);
  }
  emxFree_real_T(&b_add);
  /*  Plots */
  /*  the plots section has been placed after the output structures to resure */
  /*  "as is" plot sections copied from other functions: LTSts in paeticular. */
  /*  Scatter plot matrix with the outliers shown with a different symbol */
  /*  Structure returned by function FSR */
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = out->ListOut->size[1];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = out->ListOut->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    out->outliers->data[i] = out->ListOut->data[i];
  }
  /*  If you wish that the output also contains the list of units not declared
   */
  /*  as outliers, please uncomment the two following lines. */
  /*  ListIn=seq(~isnan(bb(:,end-ndecl))); */
  /*  out.ListIn=ListIn; */
  if ((options_bonflev_size[0] == 0) || (options_bonflev_size[1] == 0)) {
    out->nout.size[0] = nout_size_idx_0;
    out->nout.size[1] = nout_size_idx_1;
    loop_ub = nout_size_idx_0 * nout_size_idx_1;
    for (i = 0; i < loop_ub; i++) {
      out->nout.data[i] = b_nout_data[i];
    }
  } else {
    out->nout.size[0] = 0;
    out->nout.size[1] = 0;
  }
  i = out->beta->size[0];
  out->beta->size[0] = beta->size[1];
  emxEnsureCapacity_real_T(out->beta, i);
  loop_ub = beta->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = beta_data[i];
  }
  if (INP_weak) {
    if (mdag > -1.0) {
      out->mdag.size[0] = 1;
      out->mdag.size[1] = 1;
      out->mdag.data[0] = mdag;
      ndecl = INP_n - mdag;
      vlen = (int)((double)INP_bb->size[1] - ndecl);
      loop_ub = INP_bb->size[0];
      i = add->size[0];
      add->size[0] = INP_bb->size[0];
      emxEnsureCapacity_real_T(add, i);
      gmin_data = add->data;
      for (i = 0; i < loop_ub; i++) {
        gmin_data[i] = INP_bb_data[i + INP_bb->size[0] * (vlen - 1)];
      }
      i = b_bool->size[0];
      b_bool->size[0] = add->size[0];
      emxEnsureCapacity_boolean_T(b_bool, i);
      bool_data = b_bool->data;
      loop_ub = add->size[0];
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = rtIsNaN(gmin_data[i]);
      }
      loop_ub = b_bool->size[0];
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = !bool_data[i];
      }
      input_sizes_idx_1 = b_bool->size[0] - 1;
      trueCount = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (bool_data[b_i]) {
          trueCount++;
        }
      }
      emxInit_int32_T(&r17, 1);
      i = r17->size[0];
      r17->size[0] = trueCount;
      emxEnsureCapacity_int32_T(r17, i);
      ia_data = r17->data;
      vlen = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (bool_data[b_i]) {
          ia_data[vlen] = b_i + 1;
          vlen++;
        }
      }
      i = good->size[0] * good->size[1];
      good->size[0] = 1;
      good->size[1] = r17->size[0];
      emxEnsureCapacity_real_T(good, i);
      gmin1_data = good->data;
      loop_ub = r17->size[0];
      for (i = 0; i < loop_ub; i++) {
        gmin1_data[i] = out->ListCl->data[ia_data[i] - 1];
      }
      emxFree_int32_T(&r17);
      i = out->ListCl->size[0] * out->ListCl->size[1];
      out->ListCl->size[0] = 1;
      out->ListCl->size[1] = good->size[1];
      emxEnsureCapacity_real_T(out->ListCl, i);
      loop_ub = good->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->ListCl->data[i] = gmin1_data[i];
      }
      out->scale = sqrt(INP_S2_data[((int)((double)INP_S2->size[0] - ndecl) +
                                     INP_S2->size[0]) -
                                    1]);
      /*  out.outliersVIOM = setdiff(1:n, [out.ListCl, ListOut]); */
      if (rtIsNaN(INP_n)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        beta_data[0] = rtNaN;
      } else if (INP_n < 1.0) {
        beta->size[0] = 1;
        beta->size[1] = 0;
      } else if (rtIsInf(INP_n) && (1.0 == INP_n)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        beta_data[0] = rtNaN;
      } else {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = (int)floor(INP_n - 1.0) + 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        loop_ub = (int)floor(INP_n - 1.0);
        for (i = 0; i <= loop_ub; i++) {
          beta_data[i] = (double)i + 1.0;
        }
      }
      i = Xy->size[0] * Xy->size[1];
      Xy->size[0] = 1;
      Xy->size[1] = good->size[1] + out->ListOut->size[1];
      emxEnsureCapacity_real_T(Xy, i);
      gval_data = Xy->data;
      loop_ub = good->size[1];
      for (i = 0; i < loop_ub; i++) {
        gval_data[i] = gmin1_data[i];
      }
      loop_ub = out->ListOut->size[1];
      for (i = 0; i < loop_ub; i++) {
        gval_data[i + good->size[1]] = out->ListOut->data[i];
      }
      e_do_vectors(beta, Xy, out->VIOMout, ia, &vlen);
    } else {
      out->mdag.size[0] = 1;
      out->mdag.size[1] = 1;
      out->mdag.data[0] = INP_n;
      i = out->VIOMout->size[0] * out->VIOMout->size[1];
      out->VIOMout->size[0] = 1;
      out->VIOMout->size[1] = 1;
      emxEnsureCapacity_real_T(out->VIOMout, i);
      out->VIOMout->data[0] = rtNaN;
    }
  } else {
    out->mdag.size[0] = 0;
    out->mdag.size[1] = 0;
    i = out->VIOMout->size[0] * out->VIOMout->size[1];
    out->VIOMout->size[0] = 1;
    out->VIOMout->size[1] = 1;
    emxEnsureCapacity_real_T(out->VIOMout, i);
    out->VIOMout->data[0] = rtNaN;
  }
  emxFree_real_T(&Xy);
  emxFree_int32_T(&ia);
  emxFree_real_T(&beta);
  emxFree_real_T(&good);
  emxFree_real_T(&add);
  emxFree_boolean_T(&b_bool);
}

void b_FSRcore(const emxArray_real_T *INP_y, const emxArray_real_T *INP_X,
               double INP_n, double INP_p, const emxArray_real_T *INP_mdr,
               double INP_init, const emxArray_real_T *INP_Un,
               const emxArray_real_T *INP_bb, const emxArray_real_T *INP_Bcoeff,
               const emxArray_real_T *INP_S2, bool INP_weak,
               const double options_bonflev_data[],
               const int options_bonflev_size[2], bool options_msg,
               struct_T *out)
{
  emxArray_boolean_T b_tmp_data;
  emxArray_boolean_T nout_data;
  emxArray_boolean_T *b_beta;
  emxArray_boolean_T *b_bool;
  emxArray_boolean_T *r10;
  emxArray_boolean_T *r13;
  emxArray_boolean_T *r19;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r5;
  emxArray_boolean_T *r8;
  emxArray_char_T_1x310 b_mdr;
  emxArray_int32_T *ia;
  emxArray_int32_T *r;
  emxArray_int32_T *r1;
  emxArray_int32_T *r12;
  emxArray_int32_T *r14;
  emxArray_int32_T *r15;
  emxArray_int32_T *r16;
  emxArray_int32_T *r17;
  emxArray_int32_T *r18;
  emxArray_int32_T *r20;
  emxArray_int32_T *r6;
  emxArray_real_T c_options_bonflev_data;
  emxArray_real_T *Un;
  emxArray_real_T *Xy;
  emxArray_real_T *add;
  emxArray_real_T *b_Xy;
  emxArray_real_T *b_add;
  emxArray_real_T *b_gmin;
  emxArray_real_T *beta;
  emxArray_real_T *gbonf;
  emxArray_real_T *gmin;
  emxArray_real_T *gmin1;
  emxArray_real_T *good;
  emxArray_real_T *gval;
  emxArray_real_T *mdr;
  double validatedHoleFilling[6];
  const double *INP_Bcoeff_data;
  const double *INP_S2_data;
  const double *INP_Un_data;
  const double *INP_X_data;
  const double *INP_bb_data;
  const double *INP_mdr_data;
  const double *INP_y_data;
  double d;
  double ii;
  double mdag;
  double ndecl;
  double *beta_data;
  double *gbonf_data;
  double *gmin1_data;
  double *gmin_data;
  double *gval_data;
  double *mdr_data;
  unsigned int uv[31];
  unsigned int b_nout_data[10];
  unsigned int uv1[10];
  int b_options_bonflev_size[2];
  int b_tmp_size[2];
  int nout_size[2];
  int tmp_size[2];
  int b_i;
  int b_signal;
  int c001;
  int c99;
  int c999;
  int c9999;
  int c99999;
  int c_i;
  int i;
  int i1;
  int i2;
  unsigned int ij;
  int input_sizes_idx_1;
  int loop_ub;
  int nmdr;
  int nout_size_idx_0;
  int nout_size_idx_1;
  int sto;
  int vlen=0;
  int *ia_data;
  signed char c_tmp_data[5];
  signed char sizes_idx_1;
  bool x[31];
  bool c_nout_data[5];
  bool NoFalseSig;
  bool b_options_bonflev_data;
  bool condition2;
  bool condition3;
  bool condition4;
  bool empty_non_axis_sizes;
  bool exitg1;
  bool exitg2;
  bool tmp_data;
  bool *bool_data;
  bool *r11;
  bool *r4;
  bool *r7;
  bool *r9;
  INP_S2_data = INP_S2->data;
  INP_Bcoeff_data = INP_Bcoeff->data;
  INP_bb_data = INP_bb->data;
  INP_Un_data = INP_Un->data;
  INP_mdr_data = INP_mdr->data;
  INP_X_data = INP_X->data;
  INP_y_data = INP_y->data;
  emxInit_real_T(&mdr, 2);
  /* FSRcore scans the trajectory of mdr to check for exceedances */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     INP    :   Structure containing monitoring of mdr and other quantities.
   * Structure. */
  /*                Structure containing the following fields. */
  /*    INP.y   =   Response variable. Vector. Response variable, specified as
   */
  /*                a vector of length n, where n is the number of */
  /*                observations. Each entry in y is the response for the */
  /*                corresponding row of X. */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*   INP.X =      Predictor variables. Matrix. Matrix of explanatory */
  /*                variables (also called 'regressors') of dimension n x p */
  /*                where p denotes the number of explanatory variables */
  /*                including the intercept. */
  /*   INP.n =      Number of observations. Scalar. Number of rows of matrix X.
   */
  /*   INP.p =      Number of predictor variables. Scalar. Number of columns of
   */
  /*                matrix X. */
  /*   INP.mdr =    Minimum deletion residual. Matrix.  n -init x 2 matrix */
  /*                which contains the monitoring of minimum deletion residual
   */
  /*                at each step of the forward search. */
  /*                1st col = fwd search index (from init to n-1). */
  /*                2nd col = minimum deletion residual. */
  /*                Depending on the string 'model', mdr refers to OLS */
  /*                mdr, GLS mdr or Bayes regression mdr. */
  /*   INP.init =   Search initialization. Scalar. */
  /*                It specifies the point where the user has started */
  /*                monitoring mdr. */
  /*   INP.Un  =    Units included in each step. Matrix. */
  /*                (n-init) x 11 matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. Un(1,2) for example contains
   */
  /*                the unit included in step init+1. Un(end,2) contains the */
  /*                units included in the final step of the search. */
  /*                Un has 11 columns because we store up to 10 units */
  /*                simultaneously in each step. */
  /*    INP.bb=     Units included in each step. Matrix. */
  /*                n-by-(n-init+1) or matrix n-by-r matrix which the units */
  /*                belonging to the subset at each step of the forward search
   */
  /*                or at selected steps. */
  /*   INP.Bcoeff=  Estimated regression coefficients. Matrix. */
  /*                (n-init+1) x (p+1) matrix containing the monitoring of */
  /*                estimated beta coefficients in each step of the forward */
  /*                search. The first column contains the fwd search index. */
  /*                Depending on the string 'model', Bcoeff refers to OLS */
  /*                coefficents, GLS coefficients or Bayes regression */
  /*                coefficients. */
  /*  INP.Hetero=  Estimated coefficients in the skedastic equation. Matrix. */
  /*                (n-init+1) x (r+1) matrix containing the monitoring of */
  /*                estimated skedastic coefficients in each step of the forward
   */
  /*                search. The first column contains the fwd search index. */
  /*                This input is used just if strcmp(model,'H') */
  /*   INP.S2 =   Estimate of $sigma^2$.  (n-init+1)-by-2 matrix containing the
   */
  /*                monitoring of S2.  Depending on the string 'model', S2 */
  /*                refers to OLS, GLS or in the Baysian case it is the */
  /*                posterior estimate of $\sigma^2$. */
  /*    INP.Z =     Predictor variables in the regression equation (necessary */
  /*                input just if model='H'). Matrix. */
  /*                n x r matrix or vector of length r. */
  /*                If Z is a n x r matrix it contains the r variables which */
  /*                form the scedastic function as follows (if input option
   * art==1) */
  /*                \[ */
  /*                \omega_i = 1 + exp(\gamma_0 + \gamma_1 Z(i,1) + ...+
   * \gamma_{r} Z(i,r)) */
  /*                \] */
  /*                If Z is a vector of length r it contains the indexes of the
   */
  /*                columns of matrix X which form the scedastic function as */
  /*                follows */
  /*                \[ */
  /*                \omega_i = 1 +  exp(\gamma_0 + \gamma_1 X(i,Z(1)) + ...+ */
  /*                \gamma_{r} X(i,Z(r))) */
  /*                \] */
  /*  */
  /*    INP.beta0 = Prior mean of $\beta$ (necessary */
  /*                input just if model='B'). p-times-1 vector. */
  /*    INP.R     = Matrix associated with covariance matrix of $\beta$
   * (necessary */
  /*                input just if model='B'). p-times-p */
  /*                positive definite matrix. */
  /*                It can be interpreted as X0'X0 where X0 is a n0 x p */
  /*                matrix coming from previous experiments (assuming that the
   */
  /*                intercept is included in the model) */
  /*  */
  /*                The prior distribution of $\tau_0$ is a gamma distribution
   * with */
  /*                parameters $a_0$ and $b_0$, that is */
  /*  */
  /*                 \[     p(\tau_0) \propto \tau^{a_0-1} \exp (-b_0 \tau) */
  /*                        \qquad   E(\tau_0)= a_0/b_0               \] */
  /*  */
  /*    INP.tau0 =  Prior estimate of tau (necessary */
  /*                input just if model='B'). Scalar. Prior estimate of $\tau=1/
   * \sigma^2 =a_0/b_0$. */
  /*      INP.n0 =  Number of previous experiments (necessary */
  /*                input just if model='B'). Scalar. Sometimes it helps */
  /*                to think of the prior information as coming from n0 */
  /*                previous experiments. Therefore we assume that matrix X0 */
  /*                (which defines R), was made up of n0 observations. */
  /*                  Data Types - struct */
  /*   model :      type of regression model. Character. */
  /*                Possible values are '' (default) | 'H' | 'B'. */
  /*                '' stands for linear regression; */
  /*                'H' stands for heteroskedastic regression; */
  /*                'B' stands for Bayesian regression. */
  /*                This input is used to reconstruct the units belonging to */
  /*                subset at step n-decl where decl is the number of units */
  /*                declared as outliers. More precisely, if n>5000 matrix BB */
  /*                just contains the units belonging to subset in selected */
  /*                steps, therefore in order to find the units inside subset at
   */
  /*                step n-decl, FSRcore calls: */
  /*                routine FSRbsb.m in presence of linear regression; */
  /*                routine FSRHbsb.m in presence of heteroskedastic regression;
   */
  /*                routine FSRBbsb.m in presence of Bayesian regression; */
  /*                  Data Types - char */
  /*     options:   Additional options. Stucture. Structure containing optional
   */
  /*                parameters which are passed to directly through functions */
  /*                FSR.m, FSRH.m or FSRB.m. */
  /*                  Data Types - struct */
  /*  */
  /*      weak:     Indicator to use a different decision rule to detect */
  /*                the signal and flag outliers. false (default) | true. */
  /*                If weak==false default FSRcore values are used, */
  /*                if weak==true 'stronger' quantiles are used  as a */
  /*                decision rule to trim outliers and VIOM outliers */
  /* 				are the ones entering the Search after the first signal.
   */
  /*                Example - 'weak',true */
  /*                Data Types - boolean */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*  Output: */
  /*  */
  /*      out :     A structure containing the following fields */
  /*  out.ListOut  =  k x 1 vector containing the list of the units declared as
   */
  /*                  outliers or NaN if the sample is homogeneous. */
  /*  out.outliers =  out.ListOut. This field is added for homogeneity with the
   */
  /*                  other robust estimators. */
  /*  out.beta   =  p-by-1 vector containing the estimated regression */
  /*                parameter in step n-k. Depending on the string 'model', */
  /*                beta refers to OLS coefficents, GLS coefficients or Bayes */
  /*                regression coefficients. */
  /*  out.scale   = estimate of the scale. Depending on the string 'model', */
  /*                beta refers to OLS coefficents, GLS coefficients or it is */
  /*                the inverse of the posterior estimate of the square root of
   * tau. */
  /*  out.mdr    =  (n-init) x 2 matrix */
  /*                1st col = fwd search index */
  /*                2nd col = value of minimum deletion residual in each step */
  /*                of the fwd search. Depending on the string 'model', */
  /*                mdr is found using linear regression, heteroskedastic */
  /*                regression or Bayes regression. */
  /*  out.Un     =  (n-init) x 11 matrix which contains the unit(s) included */
  /*                in the subset at each step of the fwd search. */
  /*                REMARK: in every step the new subset is compared with the */
  /*                old subset. Un contains the unit(s) present in the new */
  /*                subset but not in the old one. */
  /*                Un(1,2) for example contains the unit included in step */
  /*                init+1. */
  /*                Un(end,2) contains the units included in the final step */
  /*                of the search. */
  /*  out.nout    = 2 x 5 matrix containing the number of times mdr went out */
  /*                of particular quantiles. */
  /*                First row contains quantiles 1 99 99.9 99.99 99.999. */
  /*                Second row contains the frequency distribution. */
  /*  out.outliersVIOM = m x 1 vector containing the list of the units declared
   * as */
  /*                     VIOM outliers or NaN if they are not present. */
  /*                     Present only if weak == true. */
  /*  out.ListCl =  (n-m-k) x 1 vector of non-outlying units. */
  /*                Present only if weak == true. */
  /*  */
  /*  More About: */
  /*  */
  /*  The rules for declaring units as outliers are the same for standard */
  /*  regression, heteroskedastic regression and Bayesian regression. Therefore
   */
  /*  this function is called by: */
  /*  FSR.m  = outlier detection procedure for linear regression; */
  /*  FSRB.m = outlier detection procedure in Bayesian linear regression; */
  /*  FSRH.m = outlier detection procedure for heteroskedastic models; */
  /*  If ndecl units are declared as outliers, it is necessary to find the */
  /*  units forming subset at step n-decl. If n<=5000 input matrix INP.bb */
  /*  contains the storing of the units belonging to subset in all steps, else
   */
  /*  if INP.bb does not contain the units in step n-decl procedure calls */
  /*  routine FSRbsb.m or FSRHbsb.m or FSRBbsb.m. */
  /*  */
  /*  See also: FSR.m, FSRH.m, FSRB.m */
  /*  */
  /*  References: */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Beginning of code */
  /*  Extract required input variables */
  i = mdr->size[0] * mdr->size[1];
  mdr->size[0] = INP_mdr->size[0];
  mdr->size[1] = INP_mdr->size[1];
  emxEnsureCapacity_real_T(mdr, i);
  mdr_data = mdr->data;
  loop_ub = INP_mdr->size[0] * INP_mdr->size[1];
  for (i = 0; i < loop_ub; i++) {
    mdr_data[i] = INP_mdr_data[i];
  }
  i = out->Un->size[0] * out->Un->size[1];
  out->Un->size[0] = INP_Un->size[0];
  out->Un->size[1] = INP_Un->size[1];
  emxEnsureCapacity_real_T(out->Un, i);
  loop_ub = INP_Un->size[0] * INP_Un->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->Un->data[i] = INP_Un_data[i];
  }
  emxInit_real_T(&good, 2);
  emxInit_real_T(&beta, 2);
  /*  Set the intercept */
  /*  intcolumn = the index of the first constant column found in X, or empty.
   */
  /*  Used here to check if X includes the constant term for the intercept. */
  /*  The variable 'intercept' will be used later for plotting. */
  maximum(INP_X, beta);
  beta_data = beta->data;
  minimum(INP_X, good);
  if (beta->size[1] != good->size[1]) {
    gc_binary_expand_op((int *)&vlen, tmp_size, beta, good);
  }
  /*  Extract other options */
  if (rtIsNaN(INP_n)) {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 1;
    emxEnsureCapacity_real_T(out->ListCl, i);
    out->ListCl->data[0] = rtNaN;
  } else if (INP_n < 1.0) {
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 0;
  } else if (rtIsInf(INP_n) && (1.0 == INP_n)) {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    out->ListCl->size[1] = 1;
    emxEnsureCapacity_real_T(out->ListCl, i);
    out->ListCl->data[0] = rtNaN;
  } else {
    i = out->ListCl->size[0] * out->ListCl->size[1];
    out->ListCl->size[0] = 1;
    loop_ub = (int)floor(INP_n - 1.0);
    out->ListCl->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(out->ListCl, i);
    for (i = 0; i <= loop_ub; i++) {
      out->ListCl->data[i] = (double)i + 1.0;
    }
  }
  /*  Model-related settings */
  /*  correction in case of Bayesian model to account for number of */
  /*  (fictitious) observations in the prior */
  emxInit_real_T(&gbonf, 2);
  emxInit_real_T(&gmin, 2);
  emxInit_boolean_T(&b_bool, 1);
  emxInit_real_T(&add, 1);
  emxInit_int32_T(&ia, 1);
  emxInit_real_T(&b_add, 1);
  if ((options_bonflev_size[0] != 0) && (options_bonflev_size[1] != 0)) {
    b_options_bonflev_size[0] = 1;
    b_options_bonflev_size[1] = 1;
    b_options_bonflev_data = (options_bonflev_data[0] < 1.0);
    nout_data.data = &b_options_bonflev_data;
    nout_data.size = &b_options_bonflev_size[0];
    nout_data.allocatedSize = 1;
    nout_data.numDimensions = 2;
    nout_data.canFreeData = false;
    if (b_ifWhileCond(&nout_data)) {
      FSRbonfbound(INP_n, INP_p, options_bonflev_data, options_bonflev_size,
                   INP_init, gbonf);
      gbonf_data = gbonf->data;
      /*  correction in case of Bayesian model to account for prior */
      /*  observations */
    } else {
      /*  in this case the threshold is constant therefore there is no need */
      /*  to change n */
      if (rtIsNaN(INP_init) || rtIsNaN(INP_n - 1.0)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        beta_data[0] = rtNaN;
      } else if (INP_n - 1.0 < INP_init) {
        beta->size[0] = 1;
        beta->size[1] = 0;
      } else if ((rtIsInf(INP_init) || rtIsInf(INP_n - 1.0)) &&
                 (INP_init == INP_n - 1.0)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        beta_data[0] = rtNaN;
      } else if (floor(INP_init) == INP_init) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        loop_ub = (int)floor((INP_n - 1.0) - INP_init);
        beta->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        for (i = 0; i <= loop_ub; i++) {
          beta_data[i] = INP_init + (double)i;
        }
      } else {
        eml_float_colon(INP_init, INP_n - 1.0, beta);
        beta_data = beta->data;
      }
      loop_ub = (int)(INP_n - INP_init);
      i = add->size[0];
      add->size[0] = loop_ub;
      emxEnsureCapacity_real_T(add, i);
      gmin_data = add->data;
      for (i = 0; i < loop_ub; i++) {
        gmin_data[i] = 1.0;
      }
      c_options_bonflev_data.data = (double *)&options_bonflev_data[0];
      c_options_bonflev_data.size = (int *)&options_bonflev_size[0];
      c_options_bonflev_data.allocatedSize = -1;
      c_options_bonflev_data.numDimensions = 2;
      c_options_bonflev_data.canFreeData = false;
      mtimes(&c_options_bonflev_data, add, b_add);
      gval_data = b_add->data;
      i = gbonf->size[0] * gbonf->size[1];
      gbonf->size[0] = beta->size[1];
      gbonf->size[1] = 2;
      emxEnsureCapacity_real_T(gbonf, i);
      gbonf_data = gbonf->data;
      loop_ub = beta->size[1];
      for (i = 0; i < loop_ub; i++) {
        gbonf_data[i] = beta_data[i];
      }
      loop_ub = b_add->size[0];
      for (i = 0; i < loop_ub; i++) {
        gbonf_data[i + gbonf->size[0]] = gval_data[i];
      }
    }
    ndecl = 0.0;
    /*  declarations necessary for MATLAB C coder */
    c99 = -1;
    c999 = -1;
    c9999 = -1;
    c99999 = -1;
    c001 = -1;
    i = gmin->size[0] * gmin->size[1];
    gmin->size[0] = 1;
    gmin->size[1] = 1;
    emxEnsureCapacity_real_T(gmin, i);
    gmin_data = gmin->data;
    gmin_data[0] = 0.0;
    NoFalseSig = true;
    nout_size_idx_0 = 1;
    nout_size_idx_1 = 1;
    b_nout_data[0] = 0U;
  } else {
    i = gbonf->size[0] * gbonf->size[1];
    gbonf->size[0] = 1;
    gbonf->size[1] = 1;
    emxEnsureCapacity_real_T(gbonf, i);
    gbonf_data = gbonf->data;
    gbonf_data[0] = 0.0;
    /*  Initialization necessary for MATLAB C coder */
    /*  lowexceed=false means than outlier detection is just based on upper */
    /*  exceedances */
    /*  Compute theoretical envelopes based on all observations */
    /*  Compute theoretical envelopes for minimum deletion residual based on all
     */
    /*  the observations for the above quantiles. */
    FSRenvmdr(INP_n, INP_p, INP_init, gmin);
    gmin_data = gmin->data;
    /*  gmin = the matrix which contains envelopes based on all observations. */
    /*  1st col of gmin = fwd search index */
    /*  2nd col of gmin = 99% envelope */
    /*  3rd col of gmin = 99.9% envelope */
    /*  4th col of gmin = 99.99% envelope */
    /*  5th col of gmin = 99.999% envelope */
    /*  6th col of gmin = 1% envelope */
    /*  7th col of gmin = 50% envelope */
    /*  correction in case of Bayesian model to account for number of */
    /*  (fictitious) observations in the prior */
    /*  Thus, set the columns of gmin where the theoretical quantiles are
     * located. */
    c99 = 1;
    c999 = 2;
    c9999 = 3;
    c99999 = 4;
    c001 = 5;
    loop_ub = INP_mdr->size[0];
    i = b_bool->size[0];
    b_bool->size[0] = INP_mdr->size[0];
    emxEnsureCapacity_boolean_T(b_bool, i);
    bool_data = b_bool->data;
    for (i = 0; i < loop_ub; i++) {
      bool_data[i] = (INP_mdr_data[i] >= INP_init);
    }
    input_sizes_idx_1 = b_bool->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        nmdr++;
      }
    }
    i = ia->size[0];
    ia->size[0] = nmdr;
    emxEnsureCapacity_int32_T(ia, i);
    ia_data = ia->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    i = mdr->size[0] * mdr->size[1];
    mdr->size[0] = ia->size[0];
    mdr->size[1] = 2;
    emxEnsureCapacity_real_T(mdr, i);
    mdr_data = mdr->data;
    loop_ub = ia->size[0];
    for (i = 0; i < 2; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        mdr_data[i1 + mdr->size[0] * i] =
            INP_mdr_data[(ia_data[i1] + INP_mdr->size[0] * i) - 1];
      }
    }
    ndecl = INP_mdr_data[ia_data[0] - 1];
    loop_ub = gmin->size[0];
    i = b_bool->size[0];
    b_bool->size[0] = gmin->size[0];
    emxEnsureCapacity_boolean_T(b_bool, i);
    bool_data = b_bool->data;
    for (i = 0; i < loop_ub; i++) {
      bool_data[i] = (gmin_data[i] >= ndecl);
    }
    input_sizes_idx_1 = b_bool->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        nmdr++;
      }
    }
    emxInit_int32_T(&r, 1);
    i = r->size[0];
    r->size[0] = nmdr;
    emxEnsureCapacity_int32_T(r, i);
    ia_data = r->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxInit_real_T(&b_gmin, 2);
    vlen = gmin->size[1] - 1;
    i = b_gmin->size[0] * b_gmin->size[1];
    b_gmin->size[0] = r->size[0];
    b_gmin->size[1] = gmin->size[1];
    emxEnsureCapacity_real_T(b_gmin, i);
    gval_data = b_gmin->data;
    for (i = 0; i <= vlen; i++) {
      loop_ub = r->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        gval_data[i1 + b_gmin->size[0] * i] =
            gmin_data[(ia_data[i1] + gmin->size[0] * i) - 1];
      }
    }
    emxFree_int32_T(&r);
    i = gmin->size[0] * gmin->size[1];
    gmin->size[0] = b_gmin->size[0];
    gmin->size[1] = b_gmin->size[1];
    emxEnsureCapacity_real_T(gmin, i);
    gmin_data = gmin->data;
    loop_ub = b_gmin->size[0] * b_gmin->size[1];
    for (i = 0; i < loop_ub; i++) {
      gmin_data[i] = gval_data[i];
    }
    emxFree_real_T(&b_gmin);
    /*  Store in nout the number of times the observed mdr (d_min) lies above:
     */
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = b_bool->size[0];
      b_bool->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(b_bool, i);
      bool_data = b_bool->data;
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] =
            (mdr_data[i + mdr->size[0]] > gmin_data[i + gmin->size[0]]);
      }
    } else {
      uc_binary_expand_op(b_bool, mdr, ia, gmin);
      bool_data = b_bool->data;
    }
    emxInit_boolean_T(&r3, 1);
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = r3->size[0];
      r3->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(r3, i);
      r4 = r3->data;
      for (i = 0; i < loop_ub; i++) {
        r4[i] = (mdr_data[i + mdr->size[0]] > gmin_data[i + gmin->size[0] * 2]);
      }
    } else {
      tc_binary_expand_op(r3, mdr, ia, gmin);
      r4 = r3->data;
    }
    emxInit_boolean_T(&r5, 1);
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = r5->size[0];
      r5->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(r5, i);
      r7 = r5->data;
      for (i = 0; i < loop_ub; i++) {
        r7[i] = (mdr_data[i + mdr->size[0]] > gmin_data[i + gmin->size[0] * 3]);
      }
    } else {
      sc_binary_expand_op(r5, mdr, ia, gmin);
      r7 = r5->data;
    }
    emxInit_boolean_T(&r8, 1);
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = r8->size[0];
      r8->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(r8, i);
      r9 = r8->data;
      for (i = 0; i < loop_ub; i++) {
        r9[i] = (mdr_data[i + mdr->size[0]] > gmin_data[i + gmin->size[0] * 4]);
      }
    } else {
      rc_binary_expand_op(r8, mdr, ia, gmin);
      r9 = r8->data;
    }
    emxInit_boolean_T(&r10, 1);
    if (ia->size[0] == gmin->size[0]) {
      loop_ub = ia->size[0];
      i = r10->size[0];
      r10->size[0] = ia->size[0];
      emxEnsureCapacity_boolean_T(r10, i);
      r11 = r10->data;
      for (i = 0; i < loop_ub; i++) {
        r11[i] =
            (mdr_data[i + mdr->size[0]] < gmin_data[i + gmin->size[0] * 5]);
      }
    } else {
      qc_binary_expand_op(r10, mdr, ia, gmin);
      r11 = r10->data;
    }
    input_sizes_idx_1 = b_bool->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        nmdr++;
      }
    }
    emxInit_int32_T(&r12, 1);
    i = r12->size[0];
    r12->size[0] = nmdr;
    emxEnsureCapacity_int32_T(r12, i);
    ia_data = r12->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (bool_data[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    input_sizes_idx_1 = r3->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r4[b_i]) {
        nmdr++;
      }
    }
    emxInit_int32_T(&r14, 1);
    i = r14->size[0];
    r14->size[0] = nmdr;
    emxEnsureCapacity_int32_T(r14, i);
    ia_data = r14->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r4[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxFree_boolean_T(&r3);
    input_sizes_idx_1 = r5->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r7[b_i]) {
        nmdr++;
      }
    }
    emxInit_int32_T(&r16, 1);
    i = r16->size[0];
    r16->size[0] = nmdr;
    emxEnsureCapacity_int32_T(r16, i);
    ia_data = r16->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r7[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxFree_boolean_T(&r5);
    input_sizes_idx_1 = r8->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r9[b_i]) {
        nmdr++;
      }
    }
    emxInit_int32_T(&r18, 1);
    i = r18->size[0];
    r18->size[0] = nmdr;
    emxEnsureCapacity_int32_T(r18, i);
    ia_data = r18->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r9[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxFree_boolean_T(&r8);
    input_sizes_idx_1 = r10->size[0] - 1;
    nmdr = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r11[b_i]) {
        nmdr++;
      }
    }
    emxInit_int32_T(&r20, 1);
    i = r20->size[0];
    r20->size[0] = nmdr;
    emxEnsureCapacity_int32_T(r20, i);
    ia_data = r20->data;
    vlen = 0;
    for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
      if (r11[b_i]) {
        ia_data[vlen] = b_i + 1;
        vlen++;
      }
    }
    emxFree_boolean_T(&r10);
    /*        % the 99% envelope */
    /*       % the 99.9% envelope */
    /*      % the 99.99% envelope */
    /*     % the 99.999% envelope */
    /*  the 1% envelope */
    for (i = 0; i < 5; i++) {
      uv1[i << 1] = (unsigned int)iv[i];
    }
    uv1[1] = (unsigned int)r20->size[0];
    uv1[3] = (unsigned int)r12->size[0];
    uv1[5] = (unsigned int)r14->size[0];
    uv1[7] = (unsigned int)r16->size[0];
    uv1[9] = (unsigned int)r18->size[0];
    nout_size_idx_0 = 2;
    nout_size_idx_1 = 5;
    emxFree_int32_T(&r20);
    emxFree_int32_T(&r18);
    emxFree_int32_T(&r16);
    emxFree_int32_T(&r14);
    emxFree_int32_T(&r12);
    for (i = 0; i < 10; i++) {
      b_nout_data[i] = uv1[i];
    }
    /*  NoFalseSig = boolean linked to the fact that the signal is good or not
     */
    /*  NoFalseSig is set to 1 if the condition for an INCONTROVERTIBLE SIGNAL
     * is */
    /*  fulfilled. */
    nmdr = 0;
    vlen = 0;
    for (b_i = 0; b_i < 5; b_i++) {
      empty_non_axis_sizes = ((int)b_nout_data[2 * b_i] == 9999);
      if (empty_non_axis_sizes) {
        nmdr++;
        c_tmp_data[vlen] = (signed char)(b_i + 1);
        vlen++;
      }
    }
    nout_size[0] = 1;
    nout_size[1] = nmdr;
    for (i = 0; i < nmdr; i++) {
      c_nout_data[i] = ((int)b_nout_data[2 * (c_tmp_data[i] - 1) + 1] >= 10);
    }
    nout_data.data = &c_nout_data[0];
    nout_data.size = &nout_size[0];
    nout_data.allocatedSize = 5;
    nout_data.numDimensions = 2;
    nout_data.canFreeData = false;
    NoFalseSig = c_ifWhileCond(&nout_data);
    /*  Divide central part from final part of the search */
    ndecl = INP_n - floor(13.0 * sqrt(INP_n / 200.0));
  }
  emxInit_real_T(&gmin1, 2);
  /*  Initialization necessary for MATLAB C Coder */
  i = gmin1->size[0] * gmin1->size[1];
  gmin1->size[0] = 1;
  gmin1->size[1] = 1;
  emxEnsureCapacity_real_T(gmin1, i);
  gmin1_data = gmin1->data;
  gmin1_data[0] = 0.0;
  ii = 0.0;
  /*  Part 1. Signal detection and validation */
  nmdr = mdr->size[0] - 1;
  b_signal = 0;
  sto = 0;
  mdag = -1.0;
  /*  Stage 1a: signal detection */
  /*  Signal dection is based on monitoring consecutive triplets or single */
  /*  extreme values */
  /*  Check if signal must be based on consecutive exceedances of envelope */
  /*  of mdr or on exceedance of global Bonferroni level */
  empty_non_axis_sizes = (options_bonflev_size[0] == 0);
  condition2 = (options_bonflev_size[1] == 0);
  emxInit_real_T(&gval, 2);
  if (empty_non_axis_sizes || condition2) {
    /*  Signal detection loop */
    b_i = 2;
    c_i = 2;
    exitg2 = false;
    while ((!exitg2) && (c_i - 2 <= nmdr - 2)) {
      b_i = c_i;
      if ((double)(c_i - 2) + 3.0 < (ndecl - INP_init) + 1.0) {
        /*  CENTRAL PART OF THE SEARCH */
        /*  Extreme triplet or an extreme single value */
        /*  Three consecutive values of d_min above the 99.99% threshold or 1 */
        /*  above 99.999% envelope */
        if (((mdr_data[c_i + mdr->size[0]] >
              gmin_data[c_i + gmin->size[0] * c9999]) &&
             (mdr_data[(c_i + mdr->size[0]) + 1] >
              gmin_data[(c_i + gmin->size[0] * c9999) + 1]) &&
             (mdr_data[(c_i + mdr->size[0]) - 1] >
              gmin_data[(c_i + gmin->size[0] * c9999) - 1])) ||
            (mdr_data[c_i + mdr->size[0]] >
             gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1]) ||
            (mdr_data[c_i + mdr->size[0]] >
             gmin_data[c_i + gmin->size[0] * c99999])) {
          if (options_msg) {
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
          }
          if ((mdr_data[c_i + mdr->size[0]] >
               gmin_data[c_i + gmin->size[0] * c9999]) &&
              (mdr_data[(c_i + mdr->size[0]) + 1] >
               gmin_data[(c_i + gmin->size[0] * c9999) + 1]) &&
              (mdr_data[(c_i + mdr->size[0]) - 1] >
               gmin_data[(c_i + gmin->size[0] * c9999) - 1])) {
            if (options_msg) {
              int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
              int2str(INP_n, b_mdr.data, b_mdr.size);
              int2str(mdr_data[c_i - 1], b_mdr.data, b_mdr.size);
              int2str(INP_n, b_mdr.data, b_mdr.size);
              int2str(mdr_data[c_i + 1], b_mdr.data, b_mdr.size);
              int2str(INP_n, b_mdr.data, b_mdr.size);
            }
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
            int2str(mdr_data[c_i - 1], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
            int2str(mdr_data[c_i + 1], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
          }
          if (mdr_data[c_i + mdr->size[0]] >
              gmin_data[c_i + gmin->size[0] * c99999]) {
            if (options_msg) {
              int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
              int2str(INP_n, b_mdr.data, b_mdr.size);
            }
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
          }
          if (mdr_data[c_i + mdr->size[0]] >
              gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1]) {
            if (options_msg) {
              int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
              int2str(INP_n, b_mdr.data, b_mdr.size);
            }
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
            NoFalseSig = true;
            /*  i.e., no need of further validation */
          }
          /* '------------------------------------------------'; */
          b_signal = 1;
        }
      } else if (c_i + 1 < mdr->size[0] - 1) {
        /*  FINAL PART OF THE SEARCH */
        /*  Extreme couple adjacent to an exceedance */
        /*  Two consecutive values of mdr above the 99.99% envelope and 1 above
         * 99% */
        /*              if ( (mdr(i,2)   > gmin(i,c999)   && mdr(i+1,2) >
         * gmin(i+1,c999) && mdr(i-1,2) > gmin(i-1,c99)) || ... */
        /*                   (mdr(i-1,2) > gmin(i-1,c999) && mdr(i,2)   >
         * gmin(i,c999)   && mdr(i+1,2) > gmin(i+1,c99)) || ... */
        /*                    mdr(i,2)   > gmin(end,c99)  || ... */
        /*                    mdr(i,2)   > gmin(i,c99999) ) */
        if ((mdr_data[c_i + mdr->size[0]] >
             gmin_data[c_i + gmin->size[0] * c999]) &&
            (mdr_data[(c_i + mdr->size[0]) + 1] >
             gmin_data[(c_i + gmin->size[0] * c999) + 1]) &&
            (mdr_data[(c_i + mdr->size[0]) - 1] >
             gmin_data[(c_i + gmin->size[0] * c99) - 1])) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }
        if ((mdr_data[(c_i + mdr->size[0]) - 1] >
             gmin_data[(c_i + gmin->size[0] * c999) - 1]) &&
            (mdr_data[c_i + mdr->size[0]] >
             gmin_data[c_i + gmin->size[0] * c999]) &&
            (mdr_data[(c_i + mdr->size[0]) + 1] >
             gmin_data[(c_i + gmin->size[0] * c99) + 1])) {
          condition2 = true;
        } else {
          condition2 = false;
        }
        condition3 = (mdr_data[c_i + mdr->size[0]] >
                      gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1]);
        condition4 = (mdr_data[c_i + mdr->size[0]] >
                      gmin_data[c_i + gmin->size[0] * c99999]);
        if (empty_non_axis_sizes || condition2 || condition3 || condition4) {
          if (options_msg) {
            /*  disp(['Signal in final part of the search: step '
             * num2str(mdr(i,1)) ' because']); */
            Rprintf("Signal in final part of the search: step %.0f because",
                   mdr_data[c_i]);
            //fflush(stdout);
          }
          if (empty_non_axis_sizes) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.9% and
               * rmin('  int2str(mdr(i+1,1)) ',' int2str(n) ')>99.9% and rmin('
               * int2str(mdr(i-1,1)) ',' int2str(n) ')>99%']); */
              print_processing(mdr_data[c_i], INP_n, mdr_data[c_i + 1], INP_n,
                               mdr_data[c_i - 1], INP_n, validatedHoleFilling);
              Rprintf("\nrmin(%.0f,%.0f)>99.9%% and rmin(%.0f,%.0f)>99.9%% and "
                     "rmin(%.0f,%.0f)>99%%",
                     validatedHoleFilling[0], validatedHoleFilling[1],
                     validatedHoleFilling[2], validatedHoleFilling[3],
                     validatedHoleFilling[4], validatedHoleFilling[5]);
              //fflush(stdout);
            }
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
            int2str(mdr_data[c_i - 1], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
            int2str(mdr_data[c_i + 1], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
          }
          if (condition2) {
            if (options_msg) {
              /*    disp(['rmin('  int2str(mdr(i-1,1)) ',' int2str(n) ')>99.9%
               * and rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.9% and
               * rmin('  int2str(mdr(i+1,1)) ',' int2str(n) ')>99%']); */
              print_processing(mdr_data[c_i - 1], INP_n, mdr_data[c_i], INP_n,
                               mdr_data[c_i + 1], INP_n, validatedHoleFilling);
              Rprintf("\nrmin(%.0f,%.0f)>99.9%% and rmin(%.0f,%.0f)>99.9%% and "
                     "rmin(%.0f,%.0f)>99%%",
                     validatedHoleFilling[0], validatedHoleFilling[1],
                     validatedHoleFilling[2], validatedHoleFilling[3],
                     validatedHoleFilling[4], validatedHoleFilling[5]);
              //fflush(stdout);
            }
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
            int2str(mdr_data[c_i - 1], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
            int2str(mdr_data[c_i + 1], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
          }
          if (condition3) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99% at
               * final step: Bonferroni signal in the final part of the
               * search.']); */
              Rprintf("\nrmin(%.0f,%.0f)>99%% at final step: Bonferroni signal "
                     "in the final part of the search.",
                     mdr_data[c_i], INP_n);
              //fflush(stdout);
            }
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
          }
          /*  Extreme single value above the upper threshold */
          if (condition4) {
            if (options_msg) {
              /*  disp(['rmin('  int2str(mdr(i,1)) ',' int2str(n) ')>99.999%']);
               */
              Rprintf("\nrmin(%.0f,%.0f)>99.999%%", mdr_data[c_i], INP_n);
              //fflush(stdout);
            }
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
          }
          if (options_msg) {
            Rprintf("\n------------------------------------------------");
            //fflush(stdout);
          }
          /*  Signal is always considered true if it takes place in the */
          /*  final part of the search */
          NoFalseSig = true;
          b_signal = 1;
        }
      } else if (((mdr_data[c_i + mdr->size[0]] >
                   gmin_data[c_i + gmin->size[0] * c999]) ||
                  (mdr_data[c_i + mdr->size[0]] >
                   gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1])) &&
                 (c_i + 1 == mdr->size[0] - 1)) {
        /*  potential couple of outliers */
        b_signal = 1;
        if (mdr_data[c_i + mdr->size[0]] >
            gmin_data[c_i + gmin->size[0] * c999]) {
          if (options_msg) {
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
          }
          int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
          int2str(INP_n, b_mdr.data, b_mdr.size);
        }
        if (mdr_data[c_i + mdr->size[0]] >
            gmin_data[(gmin->size[0] + gmin->size[0] * c99) - 1]) {
          if (options_msg) {
            int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            int2str(INP_n, b_mdr.data, b_mdr.size);
          }
          int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
          int2str(INP_n, b_mdr.data, b_mdr.size);
        }
      } else if ((mdr_data[c_i + mdr->size[0]] >
                  gmin_data[c_i + gmin->size[0] * c99]) &&
                 (c_i + 1 == mdr->size[0])) {
        /*  a single outlier */
        b_signal = 1;
        int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
        int2str(INP_n, b_mdr.data, b_mdr.size);
      }
      /*         %% Stage 1b: signal validation */
      if (b_signal == 1) {
        if (options_msg) {
          Rprintf("\n-------------------\n");
          //fflush(stdout);
        }
        /*  mdag is $m^\dagger$ */
        mdag = mdr_data[c_i];
        if (mdr_data[c_i] < INP_n - 2.0) {
          /*  Check if the signal is incontrovertible */
          /*  Incontrovertible signal = 3 consecutive values of d_min > */
          /*  99.999% threshold */
          if ((mdr_data[c_i + mdr->size[0]] >
               gmin_data[c_i + gmin->size[0] * c99999]) &&
              (mdr_data[(c_i + mdr->size[0]) - 1] >
               gmin_data[(c_i + gmin->size[0] * c99999) - 1]) &&
              (mdr_data[(c_i + mdr->size[0]) + 1] >
               gmin_data[(c_i + gmin->size[0] * c99999) + 1])) {
            if (options_msg) {
              int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
            }
            NoFalseSig = true;
          }
        } else {
          NoFalseSig = true;
        }
        /*  if the following statement is true, observed curve of r_min is */
        /*  above 99.99% and later is below 1%: peak followed by dip */
        if (mdr->size[0] > (mdag - mdr_data[0]) + 31.0) {
          for (i = 0; i < 31; i++) {
            uv[i] = ((unsigned int)i + c_i) + 2U;
          }
          for (i = 0; i < 31; i++) {
            vlen = (int)uv[i] - 1;
            x[i] = (mdr_data[vlen + mdr->size[0]] <
                    gmin_data[vlen + gmin->size[0] * c001]);
          }
          input_sizes_idx_1 = x[0];
          for (loop_ub = 0; loop_ub < 30; loop_ub++) {
            input_sizes_idx_1 += x[loop_ub + 1];
          }
          if (input_sizes_idx_1 >= 2) {
            NoFalseSig = true;
            /*  Peak followed by dip */
          }
        } else {
          if (c_i + 2U > (unsigned int)mdr->size[0]) {
            i = -1;
            i1 = -1;
          } else {
            i = c_i;
            i1 = mdr->size[0] - 1;
          }
          if (c_i + 2U > (unsigned int)gmin->size[0]) {
            i2 = -1;
            input_sizes_idx_1 = -1;
          } else {
            i2 = c_i;
            input_sizes_idx_1 = gmin->size[0] - 1;
          }
          loop_ub = i1 - i;
          if (loop_ub == input_sizes_idx_1 - i2) {
            i1 = b_bool->size[0];
            b_bool->size[0] = loop_ub;
            emxEnsureCapacity_boolean_T(b_bool, i1);
            bool_data = b_bool->data;
            for (i1 = 0; i1 < loop_ub; i1++) {
              bool_data[i1] =
                  (mdr_data[((i + i1) + mdr->size[0]) + 1] <
                   gmin_data[((i2 + i1) + gmin->size[0] * c001) + 1]);
            }
          } else {
            ob_binary_expand_op(b_bool, mdr, i + 1, i1, gmin, i2 + 1,
                                input_sizes_idx_1, c001);
            bool_data = b_bool->data;
          }
          vlen = b_bool->size[0];
          if (b_bool->size[0] == 0) {
            input_sizes_idx_1 = 0;
          } else {
            input_sizes_idx_1 = bool_data[0];
            for (loop_ub = 2; loop_ub <= vlen; loop_ub++) {
              input_sizes_idx_1 += bool_data[loop_ub - 1];
            }
          }
          if (input_sizes_idx_1 >= 2) {
            NoFalseSig = true;
            /* Peak followed by dip in the final part of the search'; */
          }
        }
        /*  if at this point NoFalseSig==0 it means that: */
        /*  1) n9999<10 */
        /*  2) signal tool place in the central part of the search */
        /*  3) signal was not incontrovertible */
        /*  4) there was not a peak followed by dip */
        if (!NoFalseSig) {
          /*  Compute the final value of the envelope based on */
          /*  mdr(i+1,1)=mdagger+1 observations */
          /* [gval]=FSRenvmdr(mdag+1,p,'prob',0.01,'m0',mdag); */
          b_FSRenvmdr(mdag + 1.0, INP_p, mdag, gval);
          gval_data = gval->data;
          if (mdr_data[c_i + mdr->size[0]] < gval_data[gval->size[0]]) {
            if (options_msg) {
              int2str(mdag, b_mdr.data, b_mdr.size);
            }
            /*  increase mdag of the search by one unit */
            mdag = 0.0;
          } else {
            NoFalseSig = true;
          }
        }
        /*  If the signal has been validated get out of the signal detection */
        /*  loop and move to stage 2: superimposition of the envelopes */
        if (NoFalseSig) {
          exitg2 = true;
        } else {
          c_i++;
        }
      } else {
        c_i++;
      }
    }
  } else {
    b_i = 0;
    c_i = 0;
    exitg1 = false;
    while ((!exitg1) && (c_i <= nmdr)) {
      b_i = c_i;
      /*  Outlier detection based on Bonferroni threshold */
      if (mdr_data[c_i + mdr->size[0]] >
          gbonf_data[c_i + gbonf->size[0] * (gbonf->size[1] - 1)]) {
        if (options_msg) {
          int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
          int2str(INP_n, b_mdr.data, b_mdr.size);
        }
        int2str(mdr_data[c_i], b_mdr.data, b_mdr.size);
        int2str(INP_n, b_mdr.data, b_mdr.size);
        b_signal = 1;
        exitg1 = true;
      } else {
        c_i++;
      }
    }
  }
  emxFree_real_T(&gmin);
  emxFree_real_T(&gbonf);
  /*  Create figure containing mdr + envelopes based on all the observations. */
  /*  Part 2: envelope resuperimposition */
  /*  if a validated signal took place, superimposition of the envelopes starts
   */
  /*  from m^\dagger-1 */
  if (b_signal == 1) {
    if ((options_bonflev_size[0] == 0) || (options_bonflev_size[1] == 0)) {
      if (options_msg) {
        int2str(mdag - 1.0, b_mdr.data, b_mdr.size);
      }
      /*  First resuperimposed envelope is based on mdag-1 observations */
      /*  Notice that mdr(i,1) = m dagger */
      i = (int)(INP_n + (1.0 - (mdag - 1.0)));
      ndecl = mdag - 1.0;
      vlen = 0;
      exitg1 = false;
      while ((!exitg1) && (vlen <= i - 1)) {
        ndecl = (mdag - 1.0) + (double)vlen;
        /*  Compute theoretical envelopes based on tr observations */
        if (!INP_weak) {
          c_FSRenvmdr(ndecl, INP_p, INP_init, gmin1);
          gmin1_data = gmin1->data;
        } else {
          /*  use a stronger decision rule to flag outliers (useful in presence
           * of VIOMs) */
          d_FSRenvmdr(ndecl, INP_p, INP_init, gmin1);
          gmin1_data = gmin1->data;
        }
        i1 = gmin1->size[0] - b_i;
        ii = (double)(b_i + 1) - 1.0;
        input_sizes_idx_1 = 0;
        exitg2 = false;
        while ((!exitg2) && (input_sizes_idx_1 <= i1)) {
          ii = ((double)(b_i + 1) - 1.0) + (double)input_sizes_idx_1;
          /*  CHECK IF STOPPING RULE IS FULFILLED */
          /*  ii>=size(gmin1,1)-2 = final, penultimate or antepenultimate value
           */
          /*  of the resuperimposed envelope based on tr observations */
          d = mdr_data[((int)ii + mdr->size[0]) - 1];
          if ((d > gmin1_data[((int)ii + gmin1->size[0] * c99) - 1]) &&
              ((int)ii >= gmin1->size[0] - 2)) {
            /*  Condition S1 */
            int2str(mdr_data[(int)ii - 1], b_mdr.data, b_mdr.size);
            int2str(ndecl, b_mdr.data, b_mdr.size);
            if (options_msg) {
              int2str(mdr_data[(int)ii - 1], b_mdr.data, b_mdr.size);
              int2str(ndecl, b_mdr.data, b_mdr.size);
            }
            sto = 1;
            exitg2 = true;
          } else if (((int)ii < gmin1->size[0] - 2) &&
                     (d > gmin1_data[((int)ii + gmin1->size[0] * c999) - 1])) {
            /*  Condition S2 */
            int2str(mdr_data[(int)ii - 1], b_mdr.data, b_mdr.size);
            int2str(ndecl, b_mdr.data, b_mdr.size);
            if (options_msg) {
              int2str(mdr_data[(int)ii - 1], b_mdr.data, b_mdr.size);
              int2str(ndecl, b_mdr.data, b_mdr.size);
            }
            sto = 1;
            exitg2 = true;
          } else {
            /*  mdr is inside the envelopes, so keep resuperimposing */
            input_sizes_idx_1++;
          }
        }
        if (sto == 1) {
          exitg1 = true;
        } else {
          vlen++;
        }
      }
      /*         %% Stage 2a: subset validation */
      /*  In this part we check whether the subset is homogeneous. In other */
      /*  words we verify conditions H1 and H2 */
      /*  tr= m^\dagger+k+1 */
      /*  m^\dagger+k=tr-1 */
      /*  m*=mdr(ii,1) */
      /*  Condition H2 */
      /*  Check if stopping rule takes place at m* <m^\dagger+k */
      if (mdr_data[(int)ii - 1] < ndecl - 1.0) {
        /*  Condition H2b and H2a */
        if ((unsigned int)ii + 1U > (unsigned int)gmin1->size[0]) {
          i = 0;
          i1 = 0;
          i2 = 0;
          input_sizes_idx_1 = 0;
        } else {
          i = (int)(unsigned int)ii;
          i1 = gmin1->size[0];
          i2 = (int)(unsigned int)ii;
          input_sizes_idx_1 = gmin1->size[0];
        }
        loop_ub = i1 - i;
        if (loop_ub == input_sizes_idx_1 - i2) {
          i1 = b_bool->size[0];
          b_bool->size[0] = loop_ub;
          emxEnsureCapacity_boolean_T(b_bool, i1);
          bool_data = b_bool->data;
          for (i1 = 0; i1 < loop_ub; i1++) {
            bool_data[i1] = (gmin1_data[(i + i1) + gmin1->size[0] * 3] >
                             mdr_data[(i2 + i1) + mdr->size[0]]);
          }
        } else {
          nb_binary_expand_op(b_bool, gmin1, i, i1 - 1, mdr, i2,
                              input_sizes_idx_1 - 1);
          bool_data = b_bool->data;
        }
        vlen = b_bool->size[0];
        if (b_bool->size[0] == 0) {
          input_sizes_idx_1 = 0;
        } else {
          input_sizes_idx_1 = bool_data[0];
          for (loop_ub = 2; loop_ub <= vlen; loop_ub++) {
            input_sizes_idx_1 += bool_data[loop_ub - 1];
          }
        }
        if (input_sizes_idx_1 > 0) {
          if (options_msg) {
            int2str(ndecl - 1.0, b_mdr.data, b_mdr.size);
          }
          /*  Find m^{1%} that is the step where mdr goes below the 1% */
          /*  threshold for the first time */
          /*  gfind = concatenate all the steps from m^*+1 to m^\dagger+k-1 */
          if ((unsigned int)ii + 1U > (unsigned int)gmin1->size[0]) {
            i = 0;
            i1 = 0;
            i2 = 0;
            input_sizes_idx_1 = 0;
            nmdr = 0;
            vlen = 0;
          } else {
            i = (int)(unsigned int)ii;
            i1 = gmin1->size[0];
            i2 = (int)(unsigned int)ii;
            input_sizes_idx_1 = gmin1->size[0];
            nmdr = (int)(unsigned int)ii;
            vlen = gmin1->size[0];
          }
          loop_ub = input_sizes_idx_1 - i2;
          if (loop_ub == vlen - nmdr) {
            input_sizes_idx_1 = i1 - i;
            i1 = gval->size[0] * gval->size[1];
            gval->size[0] = input_sizes_idx_1;
            gval->size[1] = 2;
            emxEnsureCapacity_real_T(gval, i1);
            gval_data = gval->data;
            for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
              gval_data[i1] = gmin1_data[i + i1];
            }
            for (i = 0; i < loop_ub; i++) {
              gval_data[i + gval->size[0]] =
                  (gmin1_data[(i2 + i) + gmin1->size[0] * 3] >
                   mdr_data[(nmdr + i) + mdr->size[0]]);
            }
          } else {
            mb_binary_expand_op(gval, gmin1, i, i1 - 1, i2,
                                input_sizes_idx_1 - 1, mdr, nmdr, vlen - 1);
            gval_data = gval->data;
          }
          /*  select from gfind the steps where mdr was below 1% threshold */
          /*  gfind(1,1) contains the first step where mdr was below 1% */
          loop_ub = gval->size[0];
          i = b_bool->size[0];
          b_bool->size[0] = gval->size[0];
          emxEnsureCapacity_boolean_T(b_bool, i);
          bool_data = b_bool->data;
          for (i = 0; i < loop_ub; i++) {
            bool_data[i] = (gval_data[i + gval->size[0]] > 0.0);
          }
          input_sizes_idx_1 = b_bool->size[0] - 1;
          nmdr = 0;
          for (c_i = 0; c_i <= input_sizes_idx_1; c_i++) {
            if (bool_data[c_i]) {
              nmdr++;
            }
          }
          emxInit_int32_T(&r15, 1);
          i = r15->size[0];
          r15->size[0] = nmdr;
          emxEnsureCapacity_int32_T(r15, i);
          ia_data = r15->data;
          vlen = 0;
          for (c_i = 0; c_i <= input_sizes_idx_1; c_i++) {
            if (bool_data[c_i]) {
              ia_data[vlen] = c_i + 1;
              vlen++;
            }
          }
          /*  find maximum in the interval m^\dagger=mdr(i,1) to the step */
          /*  prior to the one where mdr goes below 1% envelope */
          if (r15->size[0] == 1) {
            ndecl = gval_data[ia_data[0] - 1];
          } else {
            /*  Make sure that gfind(1,1)-mdr(1,1) is not smaller */
            /*  than i otherwise tr  becomes empty */
            d = gval_data[ia_data[0] - 1] - mdr_data[0];
            if (d >= b_i + 1) {
              if (b_i + 1 > d) {
                b_i = 0;
                i = 0;
              } else {
                i = (int)d;
              }
              loop_ub = i - b_i;
              i = gval->size[0] * gval->size[1];
              gval->size[0] = loop_ub;
              gval->size[1] = 2;
              emxEnsureCapacity_real_T(gval, i);
              gval_data = gval->data;
              for (i = 0; i < 2; i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  gval_data[i1 + gval->size[0] * i] =
                      mdr_data[(b_i + i1) + mdr->size[0] * i];
                }
              }
              d_sortrows(gval);
              gval_data = gval->data;
              ndecl = gval_data[gval->size[0] - 1];
            } else {
              ndecl = mdr_data[b_i];
            }
          }
          emxFree_int32_T(&r15);
          /*  Instruction necessary for MATlAB C coder */
          if (options_msg) {
            /*  disp(['Using the criterion of the maximum, the group of
             * homogenous obs. is=' int2str(tr)]); */
            Rprintf("Using the criterion of the maximum, the group of "
                   "homogenous obs. is= %.0f\n",
                   ndecl);
            //fflush(stdout);
          }
          /*  tr is redefined and is associated with the step associated to */
          /*  the maximum value of r_min */
          /*  try=sormcl[rows(sormcl),1]+1; */
          ndecl++;
        } else if (options_msg) {
          int2str(ndecl - 1.0, b_mdr.data, b_mdr.size);
        }
      }
      ndecl = (INP_n - ndecl) + 1.0;
    } else {
      ndecl = INP_n - mdr_data[b_i];
    }
    if (options_msg) {
      int2str(ndecl, b_mdr.data, b_mdr.size);
    }
  } else {
    ndecl = 0.0;
  }
  emxFree_real_T(&gval);
  emxFree_real_T(&gmin1);
  /*  End of the forward search */
  /*  Plot entry order of the untis */
  /*  plot([Un(1,1)-1;Un(:,1)],bb','x') */
  emxInit_real_T(&Xy, 2);
  if (ndecl > 0.0) {
    /*  Now find the list of the units declared as outliers */
    /*  bsel=~isnan(bb(:,tr-init+1)); */
    /*  ListOut=setdiff(1:n,bsel,1); */
    /*  REMARK: If the units forming subset have not been stored for all */
    /*  steps of the fwd search then it is necessary to call procedure FSRbsb */
    /*  to find unit forming subset in step n-decl */
    d = INP_n - INP_init;
    emxInit_real_T(&b_Xy, 2);
    emxInit_int32_T(&r1, 1);
    if (INP_bb->size[1] < d + 1.0) {
      emxInit_boolean_T(&r2, 2);
      /*  then it is necessary to understand what are the units belonging to */
      /*  subset in step n-ndecl. */
      /*  colbb is the column number of bb which contains the units forming */
      /*  subset in the largest step which has been stored among those */
      /*  which are smaller or equal than n-decl. */
      /*  The units in column colbb of matrix bb will form the initial */
      /*  subset in the call of routine FSRbsb */
      /*   if sum(~isnan(bb(:,colbb)))<n-ndecl then it is necessary to call */
      /*   procedure FSRbsb or FSRHbsb or FSRBbsb */
      i = r2->size[0] * r2->size[1];
      r2->size[0] = INP_bb->size[0];
      r2->size[1] = INP_bb->size[1];
      emxEnsureCapacity_boolean_T(r2, i);
      r4 = r2->data;
      loop_ub = INP_bb->size[0] * INP_bb->size[1];
      for (i = 0; i < loop_ub; i++) {
        r4[i] = rtIsNaN(INP_bb_data[i]);
      }
      emxInit_int32_T(&r6, 2);
      emxInit_boolean_T(&b_beta, 2);
      b_combineVectorElements(r2, r6);
      ia_data = r6->data;
      i = b_beta->size[0] * b_beta->size[1];
      b_beta->size[0] = 1;
      b_beta->size[1] = r6->size[1];
      emxEnsureCapacity_boolean_T(b_beta, i);
      bool_data = b_beta->data;
      loop_ub = r6->size[1];
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = (ia_data[i] >= ndecl);
      }
      f_eml_find(b_beta, (int *)&vlen, tmp_size);
      emxFree_boolean_T(&b_beta);
      loop_ub = INP_bb->size[0];
      i = r2->size[0] * r2->size[1];
      r2->size[0] = INP_bb->size[0];
      r2->size[1] = tmp_size[1];
      emxEnsureCapacity_boolean_T(r2, i);
      r4 = r2->data;
      input_sizes_idx_1 = tmp_size[1];
      if (0 <= input_sizes_idx_1 - 1) {
        for (i = 0; i < loop_ub; i++) {
          r4[i] = rtIsNaN(INP_bb_data[i + INP_bb->size[0] * (vlen - 1)]);
        }
      }
      emxInit_boolean_T(&r13, 2);
      i = r13->size[0] * r13->size[1];
      r13->size[0] = r2->size[0];
      r13->size[1] = r2->size[1];
      emxEnsureCapacity_boolean_T(r13, i);
      r7 = r13->data;
      loop_ub = r2->size[0] * r2->size[1];
      for (i = 0; i < loop_ub; i++) {
        r7[i] = !r4[i];
      }
      b_combineVectorElements(r13, r6);
      ia_data = r6->data;
      ii = INP_n - ndecl;
      b_tmp_size[0] = 1;
      b_tmp_size[1] = r6->size[1];
      loop_ub = r6->size[1];
      emxFree_boolean_T(&r13);
      for (i = 0; i < loop_ub; i++) {
        tmp_data = (ia_data[i] < ii);
      }
      emxFree_int32_T(&r6);
      b_tmp_data.data = &tmp_data;
      b_tmp_data.size = &b_tmp_size[0];
      b_tmp_data.allocatedSize = 1;
      b_tmp_data.numDimensions = 2;
      b_tmp_data.canFreeData = false;
      if (c_ifWhileCond(&b_tmp_data)) {
        loop_ub = INP_bb->size[0];
        i = r2->size[0] * r2->size[1];
        r2->size[0] = INP_bb->size[0];
        r2->size[1] = tmp_size[1];
        emxEnsureCapacity_boolean_T(r2, i);
        r4 = r2->data;
        input_sizes_idx_1 = tmp_size[1];
        if (0 <= input_sizes_idx_1 - 1) {
          for (i = 0; i < loop_ub; i++) {
            r4[i] = rtIsNaN(INP_bb_data[i + INP_bb->size[0] * (vlen - 1)]);
          }
        }
        emxInit_boolean_T(&r19, 2);
        i = r19->size[0] * r19->size[1];
        r19->size[0] = r2->size[0];
        r19->size[1] = r2->size[1];
        emxEnsureCapacity_boolean_T(r19, i);
        r7 = r19->data;
        loop_ub = r2->size[0] * r2->size[1];
        for (i = 0; i < loop_ub; i++) {
          r7[i] = !r4[i];
        }
        input_sizes_idx_1 = r19->size[0] * r19->size[1] - 1;
        nmdr = 0;
        for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
          if (r7[b_i]) {
            nmdr++;
          }
        }
        i = r1->size[0];
        r1->size[0] = nmdr;
        emxEnsureCapacity_int32_T(r1, i);
        ia_data = r1->data;
        vlen = 0;
        for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
          if (r7[b_i]) {
            ia_data[vlen] = b_i + 1;
            vlen++;
          }
        }
        emxFree_boolean_T(&r19);
        /*  Call procedure FSRbsb */
        i = add->size[0];
        add->size[0] = r1->size[0];
        emxEnsureCapacity_real_T(add, i);
        gmin_data = add->data;
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          gmin_data[i] = out->ListCl->data[ia_data[i] - 1];
        }
        emxInit_real_T(&Un, 2);
        FSRbsb(INP_y, INP_X, add, INP_n - ndecl, Un, b_Xy);
        gbonf_data = b_Xy->data;
        gval_data = Un->data;
        i = out->Un->size[0] * out->Un->size[1];
        out->Un->size[0] = Un->size[0];
        out->Un->size[1] = 11;
        emxEnsureCapacity_real_T(out->Un, i);
        loop_ub = Un->size[0] * 11;
        for (i = 0; i < loop_ub; i++) {
          out->Un->data[i] = gval_data[i];
        }
        emxFree_real_T(&Un);
        /*  The first column of BB contains the units forming subset in */
        /*  step n-ndecl */
        loop_ub = b_Xy->size[0];
        i = add->size[0];
        add->size[0] = b_Xy->size[0];
        emxEnsureCapacity_real_T(add, i);
        gmin_data = add->data;
        for (i = 0; i < loop_ub; i++) {
          gmin_data[i] = gbonf_data[i];
        }
        b_do_vectors(out->ListCl, add, out->ListOut, ia, &vlen);
      } else {
        loop_ub = INP_bb->size[0];
        i = r2->size[0] * r2->size[1];
        r2->size[0] = INP_bb->size[0];
        r2->size[1] = tmp_size[1];
        emxEnsureCapacity_boolean_T(r2, i);
        r4 = r2->data;
        input_sizes_idx_1 = tmp_size[1];
        if (0 <= input_sizes_idx_1 - 1) {
          for (i = 0; i < loop_ub; i++) {
            r4[i] = rtIsNaN(INP_bb_data[i + INP_bb->size[0] * (vlen - 1)]);
          }
        }
        input_sizes_idx_1 = r2->size[0] * r2->size[1] - 1;
        nmdr = 0;
        for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
          if (r4[b_i]) {
            nmdr++;
          }
        }
        i = r1->size[0];
        r1->size[0] = nmdr;
        emxEnsureCapacity_int32_T(r1, i);
        ia_data = r1->data;
        vlen = 0;
        for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
          if (r4[b_i]) {
            ia_data[vlen] = b_i + 1;
            vlen++;
          }
        }
        i = out->ListOut->size[0] * out->ListOut->size[1];
        out->ListOut->size[0] = 1;
        out->ListOut->size[1] = r1->size[0];
        emxEnsureCapacity_real_T(out->ListOut, i);
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          out->ListOut->data[i] = out->ListCl->data[ia_data[i] - 1];
        }
      }
      emxFree_boolean_T(&r2);
    } else {
      vlen = (int)((double)INP_bb->size[1] - ndecl);
      loop_ub = INP_bb->size[0];
      i = add->size[0];
      add->size[0] = INP_bb->size[0];
      emxEnsureCapacity_real_T(add, i);
      gmin_data = add->data;
      for (i = 0; i < loop_ub; i++) {
        gmin_data[i] = INP_bb_data[i + INP_bb->size[0] * (vlen - 1)];
      }
      i = b_bool->size[0];
      b_bool->size[0] = add->size[0];
      emxEnsureCapacity_boolean_T(b_bool, i);
      bool_data = b_bool->data;
      loop_ub = add->size[0];
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = rtIsNaN(gmin_data[i]);
      }
      input_sizes_idx_1 = b_bool->size[0] - 1;
      nmdr = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (bool_data[b_i]) {
          nmdr++;
        }
      }
      i = r1->size[0];
      r1->size[0] = nmdr;
      emxEnsureCapacity_int32_T(r1, i);
      ia_data = r1->data;
      vlen = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (bool_data[b_i]) {
          ia_data[vlen] = b_i + 1;
          vlen++;
        }
      }
      i = out->ListOut->size[0] * out->ListOut->size[1];
      out->ListOut->size[0] = 1;
      out->ListOut->size[1] = r1->size[0];
      emxEnsureCapacity_real_T(out->ListOut, i);
      loop_ub = r1->size[0];
      for (i = 0; i < loop_ub; i++) {
        out->ListOut->data[i] = out->ListCl->data[ia_data[i] - 1];
      }
    }
    emxFree_int32_T(&r1);
    /*  Add to ListOut all the units which have equal values in terms of X */
    /*  and to y to those declared as outliers */
    vlen = (int)rt_roundd_snf(INP_n * 5.0);
    i = add->size[0];
    add->size[0] = vlen;
    emxEnsureCapacity_real_T(add, i);
    gmin_data = add->data;
    for (i = 0; i < vlen; i++) {
      gmin_data[i] = 0.0;
    }
    e_do_vectors(out->ListCl, out->ListOut, good, ia, &vlen);
    gmin1_data = good->data;
    if ((INP_X->size[0] != 0) && (INP_X->size[1] != 0)) {
      vlen = INP_X->size[0];
    } else if (INP_y->size[0] != 0) {
      vlen = INP_y->size[0];
    } else {
      vlen = INP_X->size[0];
    }
    empty_non_axis_sizes = (vlen == 0);
    if (empty_non_axis_sizes ||
        ((INP_X->size[0] != 0) && (INP_X->size[1] != 0))) {
      input_sizes_idx_1 = INP_X->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if (empty_non_axis_sizes || (INP_y->size[0] != 0)) {
      sizes_idx_1 = 1;
    } else {
      sizes_idx_1 = 0;
    }
    i = b_Xy->size[0] * b_Xy->size[1];
    b_Xy->size[0] = vlen;
    b_Xy->size[1] = input_sizes_idx_1 + sizes_idx_1;
    emxEnsureCapacity_real_T(b_Xy, i);
    gbonf_data = b_Xy->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < vlen; i1++) {
        gbonf_data[i1 + b_Xy->size[0] * i] = INP_X_data[i1 + vlen * i];
      }
    }
    loop_ub = sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < vlen; i1++) {
        gbonf_data[i1 + b_Xy->size[0] * input_sizes_idx_1] = INP_y_data[i1];
      }
    }
    ij = 0U;
    i = out->ListOut->size[1];
    for (b_i = 0; b_i < i; b_i++) {
      i1 = good->size[1];
      for (nmdr = 0; nmdr < i1; nmdr++) {
        vlen = (int)gmin1_data[nmdr];
        input_sizes_idx_1 = (int)out->ListOut->data[b_i];
        loop_ub = b_Xy->size[1];
        i2 = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = b_Xy->size[1];
        emxEnsureCapacity_real_T(beta, i2);
        beta_data = beta->data;
        i2 = Xy->size[0] * Xy->size[1];
        Xy->size[0] = 1;
        Xy->size[1] = b_Xy->size[1];
        emxEnsureCapacity_real_T(Xy, i2);
        gval_data = Xy->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          beta_data[i2] = gbonf_data[(vlen + b_Xy->size[0] * i2) - 1];
          gval_data[i2] =
              gbonf_data[(input_sizes_idx_1 + b_Xy->size[0] * i2) - 1];
        }
        if (isequal(beta, Xy)) {
          ij++;
          gmin_data[(int)ij - 1] = gmin1_data[nmdr];
        }
        /*    disp(['i' num2str(i) 'j' num2str(j)]) */
      }
    }
    emxFree_real_T(&b_Xy);
    if ((int)ij > 0) {
      i = add->size[0];
      add->size[0] = (int)ij;
      emxEnsureCapacity_real_T(add, i);
      gmin_data = add->data;
      i = b_add->size[0];
      b_add->size[0] = add->size[0];
      emxEnsureCapacity_real_T(b_add, i);
      gval_data = b_add->data;
      loop_ub = add->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        gval_data[i] = gmin_data[i];
      }
      unique_vector(b_add, add);
      gmin_data = add->data;
      i = out->ListOut->size[1];
      loop_ub = add->size[0];
      i1 = out->ListOut->size[0] * out->ListOut->size[1];
      out->ListOut->size[1] += add->size[0];
      emxEnsureCapacity_real_T(out->ListOut, i1);
      for (i1 = 0; i1 < loop_ub; i1++) {
        out->ListOut->data[i + i1] = gmin_data[i1];
      }
    }
    /*  Store the values of beta coefficients in step n-ndecl */
    /*  Remark: if ndecl>n-init then the number of outliers is set to n-init */
    ndecl = fmin(d, out->ListOut->size[1]);
    /*  Note that the S2 which comes out from procedure FSRBmdr (differently */
    /*  from FSRmdr and FSRHmdr is rescaled, that is it has been inflated by */
    /*  the consistency term, therefore in order to find the unrescaled one */
    /*  we have to recall procedure regressB). Given that the estimate of beta
     */
    /*  is also affected we also need to recompute it */
    if (2 > INP_Bcoeff->size[1]) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = INP_Bcoeff->size[1];
    }
    vlen = (int)((double)INP_Bcoeff->size[0] - ndecl);
    i2 = beta->size[0] * beta->size[1];
    beta->size[0] = 1;
    loop_ub = i1 - i;
    beta->size[1] = loop_ub;
    emxEnsureCapacity_real_T(beta, i2);
    beta_data = beta->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta_data[i1] =
          INP_Bcoeff_data[(vlen + INP_Bcoeff->size[0] * (i + i1)) - 1];
    }
    out->scale = sqrt(
        INP_S2_data[((int)((double)INP_S2->size[0] - ndecl) + INP_S2->size[0]) -
                    1]);
  } else {
    /*  No outlier is found. */
    /*  Store the values of beta coefficients in final step of the fwd search */
    i = out->ListOut->size[0] * out->ListOut->size[1];
    out->ListOut->size[0] = 1;
    out->ListOut->size[1] = 1;
    emxEnsureCapacity_real_T(out->ListOut, i);
    out->ListOut->data[0] = rtNaN;
    if (2 > INP_Bcoeff->size[1]) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = INP_Bcoeff->size[1];
    }
    i2 = beta->size[0] * beta->size[1];
    beta->size[0] = 1;
    loop_ub = i1 - i;
    beta->size[1] = loop_ub;
    emxEnsureCapacity_real_T(beta, i2);
    beta_data = beta->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      beta_data[i1] = INP_Bcoeff_data[(INP_Bcoeff->size[0] +
                                       INP_Bcoeff->size[0] * (i + i1)) -
                                      1];
    }
    out->scale = sqrt(INP_S2_data[(INP_S2->size[0] + INP_S2->size[0]) - 1]);
  }
  emxFree_real_T(&b_add);
  /*  Plots */
  /*  the plots section has been placed after the output structures to resure */
  /*  "as is" plot sections copied from other functions: LTSts in paeticular. */
  /*  Scatter plot matrix with the outliers shown with a different symbol */
  /*  Structure returned by function FSR */
  i = out->outliers->size[0] * out->outliers->size[1];
  out->outliers->size[0] = 1;
  out->outliers->size[1] = out->ListOut->size[1];
  emxEnsureCapacity_real_T(out->outliers, i);
  loop_ub = out->ListOut->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    out->outliers->data[i] = out->ListOut->data[i];
  }
  /*  If you wish that the output also contains the list of units not declared
   */
  /*  as outliers, please uncomment the two following lines. */
  /*  ListIn=seq(~isnan(bb(:,end-ndecl))); */
  /*  out.ListIn=ListIn; */
  i = out->mdr->size[0] * out->mdr->size[1];
  out->mdr->size[0] = mdr->size[0];
  out->mdr->size[1] = 2;
  emxEnsureCapacity_real_T(out->mdr, i);
  loop_ub = mdr->size[0] * 2;
  for (i = 0; i < loop_ub; i++) {
    out->mdr->data[i] = mdr_data[i];
  }
  emxFree_real_T(&mdr);
  if ((options_bonflev_size[0] == 0) || (options_bonflev_size[1] == 0)) {
    out->nout.size[0] = nout_size_idx_0;
    out->nout.size[1] = nout_size_idx_1;
    loop_ub = nout_size_idx_0 * nout_size_idx_1;
    for (i = 0; i < loop_ub; i++) {
      out->nout.data[i] = b_nout_data[i];
    }
  } else {
    out->nout.size[0] = 0;
    out->nout.size[1] = 0;
  }
  i = out->beta->size[0];
  out->beta->size[0] = beta->size[1];
  emxEnsureCapacity_real_T(out->beta, i);
  loop_ub = beta->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->beta->data[i] = beta_data[i];
  }
  if (INP_weak) {
    if (mdag > -1.0) {
      out->mdag.size[0] = 1;
      out->mdag.size[1] = 1;
      out->mdag.data[0] = mdag;
      ndecl = INP_n - mdag;
      vlen = (int)((double)INP_bb->size[1] - ndecl);
      loop_ub = INP_bb->size[0];
      i = add->size[0];
      add->size[0] = INP_bb->size[0];
      emxEnsureCapacity_real_T(add, i);
      gmin_data = add->data;
      for (i = 0; i < loop_ub; i++) {
        gmin_data[i] = INP_bb_data[i + INP_bb->size[0] * (vlen - 1)];
      }
      i = b_bool->size[0];
      b_bool->size[0] = add->size[0];
      emxEnsureCapacity_boolean_T(b_bool, i);
      bool_data = b_bool->data;
      loop_ub = add->size[0];
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = rtIsNaN(gmin_data[i]);
      }
      loop_ub = b_bool->size[0];
      for (i = 0; i < loop_ub; i++) {
        bool_data[i] = !bool_data[i];
      }
      input_sizes_idx_1 = b_bool->size[0] - 1;
      nmdr = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (bool_data[b_i]) {
          nmdr++;
        }
      }
      emxInit_int32_T(&r17, 1);
      i = r17->size[0];
      r17->size[0] = nmdr;
      emxEnsureCapacity_int32_T(r17, i);
      ia_data = r17->data;
      vlen = 0;
      for (b_i = 0; b_i <= input_sizes_idx_1; b_i++) {
        if (bool_data[b_i]) {
          ia_data[vlen] = b_i + 1;
          vlen++;
        }
      }
      i = good->size[0] * good->size[1];
      good->size[0] = 1;
      good->size[1] = r17->size[0];
      emxEnsureCapacity_real_T(good, i);
      gmin1_data = good->data;
      loop_ub = r17->size[0];
      for (i = 0; i < loop_ub; i++) {
        gmin1_data[i] = out->ListCl->data[ia_data[i] - 1];
      }
      emxFree_int32_T(&r17);
      i = out->ListCl->size[0] * out->ListCl->size[1];
      out->ListCl->size[0] = 1;
      out->ListCl->size[1] = good->size[1];
      emxEnsureCapacity_real_T(out->ListCl, i);
      loop_ub = good->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->ListCl->data[i] = gmin1_data[i];
      }
      out->scale = sqrt(INP_S2_data[((int)((double)INP_S2->size[0] - ndecl) +
                                     INP_S2->size[0]) -
                                    1]);
      /*  out.outliersVIOM = setdiff(1:n, [out.ListCl, ListOut]); */
      if (rtIsNaN(INP_n)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        beta_data[0] = rtNaN;
      } else if (INP_n < 1.0) {
        beta->size[0] = 1;
        beta->size[1] = 0;
      } else if (rtIsInf(INP_n) && (1.0 == INP_n)) {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        beta_data[0] = rtNaN;
      } else {
        i = beta->size[0] * beta->size[1];
        beta->size[0] = 1;
        beta->size[1] = (int)floor(INP_n - 1.0) + 1;
        emxEnsureCapacity_real_T(beta, i);
        beta_data = beta->data;
        loop_ub = (int)floor(INP_n - 1.0);
        for (i = 0; i <= loop_ub; i++) {
          beta_data[i] = (double)i + 1.0;
        }
      }
      i = Xy->size[0] * Xy->size[1];
      Xy->size[0] = 1;
      Xy->size[1] = good->size[1] + out->ListOut->size[1];
      emxEnsureCapacity_real_T(Xy, i);
      gval_data = Xy->data;
      loop_ub = good->size[1];
      for (i = 0; i < loop_ub; i++) {
        gval_data[i] = gmin1_data[i];
      }
      loop_ub = out->ListOut->size[1];
      for (i = 0; i < loop_ub; i++) {
        gval_data[i + good->size[1]] = out->ListOut->data[i];
      }
      e_do_vectors(beta, Xy, out->VIOMout, ia, &vlen);
    } else {
      out->mdag.size[0] = 1;
      out->mdag.size[1] = 1;
      out->mdag.data[0] = INP_n;
      i = out->VIOMout->size[0] * out->VIOMout->size[1];
      out->VIOMout->size[0] = 1;
      out->VIOMout->size[1] = 1;
      emxEnsureCapacity_real_T(out->VIOMout, i);
      out->VIOMout->data[0] = rtNaN;
    }
  } else {
    out->mdag.size[0] = 0;
    out->mdag.size[1] = 0;
    i = out->VIOMout->size[0] * out->VIOMout->size[1];
    out->VIOMout->size[0] = 1;
    out->VIOMout->size[1] = 1;
    emxEnsureCapacity_real_T(out->VIOMout, i);
    out->VIOMout->data[0] = rtNaN;
  }
  emxFree_real_T(&Xy);
  emxFree_int32_T(&ia);
  emxFree_real_T(&beta);
  emxFree_real_T(&good);
  emxFree_real_T(&add);
  emxFree_boolean_T(&b_bool);
}

/* End of code generation (FSRcore.c) */
