/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSMenvmmd.c
 *
 * Code generation for function 'FSMenvmmd'
 *
 */

/* Include files */
#include "FSMenvmmd.h"
#include "chi2cdf.h"
#include "chi2inv.h"
#include "colon.h"
#include "div.h"
#include "finv.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void ab_binary_expand_op(emxArray_real_T *r,
                                const emxArray_real_T *b_tmp,
                                const emxArray_real_T *b,
                                const emxArray_real_T *a,
                                const emxArray_real_T *quant, double v);

static void bb_binary_expand_op(emxArray_real_T *b, double n,
                                const emxArray_real_T *quant);

static void db_binary_expand_op(emxArray_real_T *r,
                                const emxArray_real_T *b_tmp,
                                const emxArray_real_T *b,
                                const emxArray_real_T *b_b_tmp,
                                const emxArray_real_T *quant, double v);

static void x_binary_expand_op(emxArray_real_T *b, double n,
                               const emxArray_real_T *quant);

static void y_binary_expand_op(emxArray_real_T *b_tmp, double v,
                               const emxArray_real_T *b,
                               const emxArray_real_T *r1);

/* Function Definitions */
static void ab_binary_expand_op(emxArray_real_T *r,
                                const emxArray_real_T *b_tmp,
                                const emxArray_real_T *b,
                                const emxArray_real_T *a,
                                const emxArray_real_T *quant, double v)
{
  emxArray_real_T *b_b;
  emxArray_real_T *b_b_tmp;
  const double *a_data;
  const double *b_data;
  const double *b_tmp_data;
  const double *quant_data;
  double *b_b_tmp_data;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int aux_3_1;
  int b_quant;
  int i;
  int i1;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  int stride_2_0;
  int stride_3_0;
  quant_data = quant->data;
  a_data = a->data;
  b_data = b->data;
  b_tmp_data = b_tmp->data;
  emxInit_real_T(&b_b_tmp, 2);
  i = b_b_tmp->size[0] * b_b_tmp->size[1];
  if (quant->size[0] == 1) {
    b_quant = a->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = b->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = a->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_b_tmp->size[0] = b_tmp->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = a->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_b_tmp->size[0] = b->size[0];
    } else if (quant->size[0] == 1) {
      b_b_tmp->size[0] = a->size[0];
    } else {
      b_b_tmp->size[0] = quant->size[0];
    }
  }
  b_b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(b_b_tmp, i);
  b_b_tmp_data = b_b_tmp->data;
  stride_0_0 = (b_tmp->size[0] != 1);
  stride_0_1 = (b_tmp->size[1] != 1);
  stride_1_0 = (b->size[0] != 1);
  stride_1_1 = (b->size[1] != 1);
  stride_2_0 = (a->size[0] != 1);
  stride_3_0 = (quant->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  aux_3_1 = 0;
  for (i = 0; i < 6; i++) {
    if (quant->size[0] == 1) {
      b_quant = a->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = b->size[0];
    } else if (quant->size[0] == 1) {
      b_quant = a->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = b_tmp->size[0];
    } else {
      if (quant->size[0] == 1) {
        b_quant = a->size[0];
      } else {
        b_quant = quant->size[0];
      }
      if (b_quant == 1) {
        b_quant = b->size[0];
      } else if (quant->size[0] == 1) {
        b_quant = a->size[0];
      } else {
        b_quant = quant->size[0];
      }
    }
    for (i1 = 0; i1 < b_quant; i1++) {
      b_b_tmp_data[i1 + b_b_tmp->size[0] * i] =
          b_tmp_data[i1 * stride_0_0 + b_tmp->size[0] * aux_0_1] /
          ((b_data[i1 * stride_1_0 + b->size[0] * aux_1_1] + 1.0) +
           a_data[i1 * stride_2_0 + a->size[0] * aux_2_1] *
               quant_data[i1 * stride_3_0 + quant->size[0] * aux_3_1]);
    }
    aux_3_1++;
    aux_2_1++;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  emxInit_real_T(&b_b, 2);
  i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b->size[0];
  b_b->size[1] = b->size[1];
  emxEnsureCapacity_real_T(b_b, i);
  b_b_tmp_data = b_b->data;
  b_quant = b->size[0] * b->size[1];
  for (i = 0; i < b_quant; i++) {
    b_b_tmp_data[i] = b_data[i] - v;
  }
  b_finv(b_b_tmp, v, b_b, r);
  emxFree_real_T(&b_b);
  emxFree_real_T(&b_b_tmp);
}

static void bb_binary_expand_op(emxArray_real_T *b, double n,
                                const emxArray_real_T *quant)
{
  emxArray_real_T *b_n;
  const double *quant_data;
  double *b_data;
  double *n_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  quant_data = quant->data;
  b_data = b->data;
  emxInit_real_T(&b_n, 2);
  i = b_n->size[0] * b_n->size[1];
  if (quant->size[0] == 1) {
    b_n->size[0] = b->size[0];
  } else {
    b_n->size[0] = quant->size[0];
  }
  if (quant->size[1] == 1) {
    b_n->size[1] = b->size[1];
  } else {
    b_n->size[1] = quant->size[1];
  }
  emxEnsureCapacity_real_T(b_n, i);
  n_data = b_n->data;
  stride_0_0 = (b->size[0] != 1);
  stride_0_1 = (b->size[1] != 1);
  stride_1_0 = (quant->size[0] != 1);
  stride_1_1 = (quant->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (quant->size[1] == 1) {
    loop_ub = b->size[1];
  } else {
    loop_ub = quant->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (quant->size[0] == 1) {
      b_loop_ub = b->size[0];
    } else {
      b_loop_ub = quant->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      n_data[i1 + b_n->size[0] * i] =
          n / b_data[i1 * stride_0_0 + b->size[0] * aux_0_1] *
          quant_data[i1 * stride_1_0 + quant->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = b->size[0] * b->size[1];
  b->size[0] = b_n->size[0];
  b->size[1] = b_n->size[1];
  emxEnsureCapacity_real_T(b, i);
  b_data = b->data;
  loop_ub = b_n->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_n->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_data[i1 + b->size[0] * i] = n_data[i1 + b_n->size[0] * i];
    }
  }
  emxFree_real_T(&b_n);
}

static void db_binary_expand_op(emxArray_real_T *r,
                                const emxArray_real_T *b_tmp,
                                const emxArray_real_T *b,
                                const emxArray_real_T *b_b_tmp,
                                const emxArray_real_T *quant, double v)
{
  emxArray_real_T *b_b;
  emxArray_real_T *c_b_tmp;
  const double *b_b_tmp_data;
  const double *b_data;
  const double *b_tmp_data;
  const double *quant_data;
  double *c_b_tmp_data;
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
  b_tmp_data = b_b_tmp->data;
  b_data = b->data;
  b_b_tmp_data = b_tmp->data;
  emxInit_real_T(&c_b_tmp, 2);
  i = c_b_tmp->size[0] * c_b_tmp->size[1];
  if (quant->size[0] == 1) {
    b_quant = b_b_tmp->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    b_quant = b->size[0];
  } else if (quant->size[0] == 1) {
    b_quant = b_b_tmp->size[0];
  } else {
    b_quant = quant->size[0];
  }
  if (b_quant == 1) {
    c_b_tmp->size[0] = b_tmp->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = b_b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      c_b_tmp->size[0] = b->size[0];
    } else if (quant->size[0] == 1) {
      c_b_tmp->size[0] = b_b_tmp->size[0];
    } else {
      c_b_tmp->size[0] = quant->size[0];
    }
  }
  if (quant->size[1] == 1) {
    b_quant = b_b_tmp->size[1];
  } else {
    b_quant = quant->size[1];
  }
  if (b_quant == 1) {
    b_quant = b->size[1];
  } else if (quant->size[1] == 1) {
    b_quant = b_b_tmp->size[1];
  } else {
    b_quant = quant->size[1];
  }
  if (b_quant == 1) {
    c_b_tmp->size[1] = b_tmp->size[1];
  } else {
    if (quant->size[1] == 1) {
      b_quant = b_b_tmp->size[1];
    } else {
      b_quant = quant->size[1];
    }
    if (b_quant == 1) {
      c_b_tmp->size[1] = b->size[1];
    } else if (quant->size[1] == 1) {
      c_b_tmp->size[1] = b_b_tmp->size[1];
    } else {
      c_b_tmp->size[1] = quant->size[1];
    }
  }
  emxEnsureCapacity_real_T(c_b_tmp, i);
  c_b_tmp_data = c_b_tmp->data;
  stride_0_0 = (b_tmp->size[0] != 1);
  stride_0_1 = (b_tmp->size[1] != 1);
  stride_1_0 = (b->size[0] != 1);
  stride_1_1 = (b->size[1] != 1);
  stride_2_0 = (b_b_tmp->size[0] != 1);
  stride_2_1 = (b_b_tmp->size[1] != 1);
  stride_3_0 = (quant->size[0] != 1);
  stride_3_1 = (quant->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  aux_3_1 = 0;
  if (quant->size[1] == 1) {
    b_quant = b_b_tmp->size[1];
  } else {
    b_quant = quant->size[1];
  }
  if (b_quant == 1) {
    b_quant = b->size[1];
  } else if (quant->size[1] == 1) {
    b_quant = b_b_tmp->size[1];
  } else {
    b_quant = quant->size[1];
  }
  if (b_quant == 1) {
    loop_ub = b_tmp->size[1];
  } else {
    if (quant->size[1] == 1) {
      b_quant = b_b_tmp->size[1];
    } else {
      b_quant = quant->size[1];
    }
    if (b_quant == 1) {
      loop_ub = b->size[1];
    } else if (quant->size[1] == 1) {
      loop_ub = b_b_tmp->size[1];
    } else {
      loop_ub = quant->size[1];
    }
  }
  for (i = 0; i < loop_ub; i++) {
    if (quant->size[0] == 1) {
      b_quant = b_b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = b->size[0];
    } else if (quant->size[0] == 1) {
      b_quant = b_b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      b_quant = b_tmp->size[0];
    } else {
      if (quant->size[0] == 1) {
        b_quant = b_b_tmp->size[0];
      } else {
        b_quant = quant->size[0];
      }
      if (b_quant == 1) {
        b_quant = b->size[0];
      } else if (quant->size[0] == 1) {
        b_quant = b_b_tmp->size[0];
      } else {
        b_quant = quant->size[0];
      }
    }
    for (i1 = 0; i1 < b_quant; i1++) {
      c_b_tmp_data[i1 + c_b_tmp->size[0] * i] =
          b_b_tmp_data[i1 * stride_0_0 + b_tmp->size[0] * aux_0_1] /
          ((b_data[i1 * stride_1_0 + b->size[0] * aux_1_1] + 1.0) +
           b_tmp_data[i1 * stride_2_0 + b_b_tmp->size[0] * aux_2_1] *
               quant_data[i1 * stride_3_0 + quant->size[0] * aux_3_1]);
    }
    aux_3_1 += stride_3_1;
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  emxInit_real_T(&b_b, 2);
  i = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b->size[0];
  b_b->size[1] = b->size[1];
  emxEnsureCapacity_real_T(b_b, i);
  c_b_tmp_data = b_b->data;
  loop_ub = b->size[0] * b->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_b_tmp_data[i] = b_data[i] - v;
  }
  b_finv(c_b_tmp, v, b_b, r);
  emxFree_real_T(&b_b);
  emxFree_real_T(&c_b_tmp);
}

static void x_binary_expand_op(emxArray_real_T *b, double n,
                               const emxArray_real_T *quant)
{
  emxArray_real_T *b_n;
  const double *quant_data;
  double *b_data;
  double *n_data;
  int aux_0_1;
  int aux_1_1;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  quant_data = quant->data;
  b_data = b->data;
  emxInit_real_T(&b_n, 2);
  i = b_n->size[0] * b_n->size[1];
  if (quant->size[0] == 1) {
    b_n->size[0] = b->size[0];
  } else {
    b_n->size[0] = quant->size[0];
  }
  b_n->size[1] = 6;
  emxEnsureCapacity_real_T(b_n, i);
  n_data = b_n->data;
  stride_0_0 = (b->size[0] != 1);
  stride_0_1 = (b->size[1] != 1);
  stride_1_0 = (quant->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < 6; i++) {
    if (quant->size[0] == 1) {
      loop_ub = b->size[0];
    } else {
      loop_ub = quant->size[0];
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      n_data[i1 + b_n->size[0] * i] =
          n / b_data[i1 * stride_0_0 + b->size[0] * aux_0_1] *
          quant_data[i1 * stride_1_0 + quant->size[0] * aux_1_1];
    }
    aux_1_1++;
    aux_0_1 += stride_0_1;
  }
  i = b->size[0] * b->size[1];
  b->size[0] = b_n->size[0];
  b->size[1] = 6;
  emxEnsureCapacity_real_T(b, i);
  b_data = b->data;
  for (i = 0; i < 6; i++) {
    loop_ub = b_n->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_data[i1 + b->size[0] * i] = n_data[i1 + b_n->size[0] * i];
    }
  }
  emxFree_real_T(&b_n);
}

static void y_binary_expand_op(emxArray_real_T *b_tmp, double v,
                               const emxArray_real_T *b,
                               const emxArray_real_T *r1)
{
  emxArray_real_T *b_v;
  const double *b_data;
  const double *r;
  double *b_tmp_data;
  double *v_data;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int aux_3_1;
  int aux_4_1;
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
  int stride_4_0;
  r = r1->data;
  b_data = b->data;
  b_tmp_data = b_tmp->data;
  emxInit_real_T(&b_v, 2);
  i = b_v->size[0] * b_v->size[1];
  if (r1->size[0] == 1) {
    if (b->size[0] == 1) {
      b_v->size[0] = b_tmp->size[0];
    } else {
      b_v->size[0] = b->size[0];
    }
  } else {
    b_v->size[0] = r1->size[0];
  }
  b_v->size[1] = 6;
  emxEnsureCapacity_real_T(b_v, i);
  v_data = b_v->data;
  stride_0_0 = (b_tmp->size[0] != 1);
  stride_0_1 = (b_tmp->size[1] != 1);
  stride_1_0 = (b->size[0] != 1);
  stride_1_1 = (b->size[1] != 1);
  stride_2_0 = (b->size[0] != 1);
  stride_2_1 = (b->size[1] != 1);
  stride_3_0 = (b->size[0] != 1);
  stride_3_1 = (b->size[1] != 1);
  stride_4_0 = (r1->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  aux_3_1 = 0;
  aux_4_1 = 0;
  for (i = 0; i < 6; i++) {
    if (r1->size[0] == 1) {
      if (b->size[0] == 1) {
        loop_ub = b_tmp->size[0];
      } else {
        loop_ub = b->size[0];
      }
    } else {
      loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      v_data[i1 + b_v->size[0] * i] =
          v *
          (b_tmp_data[i1 * stride_0_0 + b_tmp->size[0] * aux_0_1] /
           b_data[i1 * stride_1_0 + b->size[0] * aux_1_1]) *
          (b_data[i1 * stride_2_0 + b->size[0] * aux_2_1] - 1.0) /
          (b_data[i1 * stride_3_0 + b->size[0] * aux_3_1] - v) *
          r[i1 * stride_4_0 + r1->size[0] * aux_4_1];
    }
    aux_4_1++;
    aux_3_1 += stride_3_1;
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b_v->size[0];
  b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  for (i = 0; i < 6; i++) {
    loop_ub = b_v->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_tmp_data[i1 + b_tmp->size[0] * i] = v_data[i1 + b_v->size[0] * i];
    }
  }
  emxFree_real_T(&b_v);
}

void FSMenvmmd(double n, double v, double varargin_4, emxArray_real_T *MMDenv)
{
  static const double varargin_2[6] = {0.99, 0.999, 0.9999, 0.99999, 0.01, 0.5};
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  double b_options_prob_data[36];
  double options_prob_data[18];
  double tmp_data[6];
  double *MMDenv_data;
  double *a_data;
  double *b_data;
  double *b_tmp_data;
  double *m_data;
  double *quant_data;
  double *r3;
  int tmp_size[2];
  int i;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
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
  for (k = 0; k < 6; k++) {
    options_prob_data[k] = varargin_2[k];
  }
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  MMDenv_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    MMDenv_data = y->data;
    MMDenv_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    MMDenv_data = y->data;
    MMDenv_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, k);
    MMDenv_data = y->data;
    for (k = 0; k <= nrows; k++) {
      MMDenv_data[k] = varargin_4 + (double)k;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    MMDenv_data = y->data;
  }
  emxInit_real_T(&m, 1);
  k = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, k);
  m_data = m->data;
  nrows = y->size[1];
  for (k = 0; k < nrows; k++) {
    m_data[k] = MMDenv_data[k];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&b, 2);
  /*  mm = fwd search index replicated lp times. */
  k = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 6;
  emxEnsureCapacity_real_T(b, k);
  b_data = b->data;
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 6; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      b_data[ibtile + k] = m_data[k];
    }
  }
  emxInit_real_T(&a, 2);
  /*  finv finds the inverse of the F distribution. */
  k = a->size[0] * a->size[1];
  a->size[0] = b->size[0];
  a->size[1] = 6;
  emxEnsureCapacity_real_T(a, k);
  a_data = a->data;
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    a_data[k] = n - b_data[k];
  }
  emxInit_real_T(&b_tmp, 2);
  k = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b->size[0];
  b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(b_tmp, k);
  b_tmp_data = b_tmp->data;
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_tmp_data[k] = b_data[k] + 1.0;
  }
  for (k = 0; k < 6; k++) {
    b_options_prob_data[k] = options_prob_data[k];
  }
  tmp_size[0] = 1;
  tmp_size[1] = 6;
  for (k = 0; k < 6; k++) {
    tmp_data[k] = 1.0 - b_options_prob_data[k];
  }
  emxInit_real_T(&b_b_tmp, 2);
  k = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = a->size[0];
  b_b_tmp->size[1] = 6;
  emxEnsureCapacity_real_T(b_b_tmp, k);
  MMDenv_data = b_b_tmp->data;
  nrows = a->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    MMDenv_data[k] = 2.0 * a_data[k];
  }
  emxInit_real_T(&b_b, 2);
  k = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b_tmp->size[0];
  b_b->size[1] = 6;
  emxEnsureCapacity_real_T(b_b, k);
  MMDenv_data = b_b->data;
  nrows = b_tmp->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    MMDenv_data[k] = 2.0 * b_tmp_data[k];
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&r, 2);
  emxInit_real_T(&r1, 2);
  repmat(tmp_data, tmp_size, m->size[0], r1);
  c_finv(r1, b_b_tmp, b_b, r);
  MMDenv_data = r->data;
  k = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(quant, k);
  quant_data = quant->data;
  nrows = r->size[0] * r->size[1];
  emxFree_real_T(&r1);
  for (k = 0; k < nrows; k++) {
    quant_data[k] = MMDenv_data[k];
  }
  /*  from the equivalence with the incomplete beta distribution. */
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  if (a->size[0] == 1) {
    nrows = quant->size[0];
  } else {
    nrows = a->size[0];
  }
  if (b->size[0] == 1) {
    if (a->size[0] == 1) {
      ibtile = quant->size[0];
    } else {
      ibtile = a->size[0];
    }
  } else {
    ibtile = b->size[0];
  }
  if ((a->size[0] == quant->size[0]) && (b->size[0] == nrows) &&
      (b_tmp->size[0] == ibtile)) {
    k = b_b_tmp->size[0] * b_b_tmp->size[1];
    b_b_tmp->size[0] = b_tmp->size[0];
    b_b_tmp->size[1] = 6;
    emxEnsureCapacity_real_T(b_b_tmp, k);
    MMDenv_data = b_b_tmp->data;
    nrows = b_tmp->size[0] * 6;
    for (k = 0; k < nrows; k++) {
      MMDenv_data[k] =
          b_tmp_data[k] / ((b_data[k] + 1.0) + a_data[k] * quant_data[k]);
    }
    k = b_b->size[0] * b_b->size[1];
    b_b->size[0] = b->size[0];
    b_b->size[1] = 6;
    emxEnsureCapacity_real_T(b_b, k);
    MMDenv_data = b_b->data;
    nrows = b->size[0] * 6;
    for (k = 0; k < nrows; k++) {
      MMDenv_data[k] = b_data[k] - v;
    }
    b_finv(b_b_tmp, v, b_b, r);
    MMDenv_data = r->data;
  } else {
    ab_binary_expand_op(r, b_tmp, b, a, quant, v);
    MMDenv_data = r->data;
  }
  emxFree_real_T(&b_b_tmp);
  emxInit_real_T(&r2, 2);
  k = r2->size[0] * r2->size[1];
  r2->size[0] = r->size[0];
  r2->size[1] = r->size[1];
  emxEnsureCapacity_real_T(r2, k);
  r3 = r2->data;
  nrows = r->size[0] * r->size[1];
  for (k = 0; k < nrows; k++) {
    r3[k] = MMDenv_data[k];
  }
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  k = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b->size[0];
  b_b->size[1] = b->size[1];
  emxEnsureCapacity_real_T(b_b, k);
  MMDenv_data = b_b->data;
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    MMDenv_data[k] = b_data[k] / n;
  }
  b_chi2inv(b_b, v, r);
  MMDenv_data = r->data;
  k = a->size[0] * a->size[1];
  a->size[0] = r->size[0];
  a->size[1] = r->size[1];
  emxEnsureCapacity_real_T(a, k);
  a_data = a->data;
  nrows = r->size[0] * r->size[1];
  emxFree_real_T(&b_b);
  for (k = 0; k < nrows; k++) {
    a_data[k] = MMDenv_data[k];
  }
  chi2cdf(a, v + 2.0, r);
  MMDenv_data = r->data;
  k = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(quant, k);
  quant_data = quant->data;
  nrows = r->size[0] * r->size[1];
  emxFree_real_T(&a);
  for (k = 0; k < nrows; k++) {
    quant_data[k] = MMDenv_data[k];
  }
  emxFree_real_T(&r);
  if (b_tmp->size[0] == 1) {
    nrows = b->size[0];
  } else {
    nrows = b_tmp->size[0];
  }
  if (b_tmp->size[0] == 1) {
    ibtile = b->size[0];
  } else {
    ibtile = b_tmp->size[0];
  }
  if (ibtile == 1) {
    ibtile = b->size[0];
  } else if (b_tmp->size[0] == 1) {
    ibtile = b->size[0];
  } else {
    ibtile = b_tmp->size[0];
  }
  if (b_tmp->size[0] == 1) {
    k = b->size[0];
  } else {
    k = b_tmp->size[0];
  }
  if (k == 1) {
    k = b->size[0];
  } else if (b_tmp->size[0] == 1) {
    k = b->size[0];
  } else {
    k = b_tmp->size[0];
  }
  if (b_tmp->size[0] == 1) {
    outsize_idx_1 = b->size[0];
  } else {
    outsize_idx_1 = b_tmp->size[0];
  }
  if (k == 1) {
    k = b->size[0];
  } else if (outsize_idx_1 == 1) {
    k = b->size[0];
  } else if (b_tmp->size[0] == 1) {
    k = b->size[0];
  } else {
    k = b_tmp->size[0];
  }
  if ((b_tmp->size[0] == b->size[0]) && (b_tmp->size[1] == b->size[1]) &&
      (nrows == b->size[0]) && (ibtile == b->size[0]) && (k == r2->size[0])) {
    nrows = b_tmp->size[0] * b_tmp->size[1];
    for (k = 0; k < nrows; k++) {
      b_tmp_data[k] = v * (b_tmp_data[k] / b_data[k]) * (b_data[k] - 1.0) /
                      (b_data[k] - v) * r3[k];
    }
  } else {
    y_binary_expand_op(b_tmp, v, b, r2);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&r2);
  nrows = b_tmp->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_tmp_data[k] = sqrt(b_tmp_data[k]);
  }
  if (b->size[0] == quant->size[0]) {
    nrows = b->size[0] * b->size[1];
    for (k = 0; k < nrows; k++) {
      b_data[k] = n / b_data[k] * quant_data[k];
    }
  } else {
    x_binary_expand_op(b, n, quant);
    b_data = b->data;
  }
  emxFree_real_T(&quant);
  nrows = b->size[0] * 6;
  for (k = 0; k < nrows; k++) {
    b_data[k] = sqrt(b_data[k]);
  }
  if ((b_tmp->size[0] == b->size[0]) && (b_tmp->size[1] == b->size[1])) {
    nrows = b_tmp->size[0] * b_tmp->size[1];
    for (k = 0; k < nrows; k++) {
      b_tmp_data[k] /= b_data[k];
    }
  } else {
    rdivide(b_tmp, b);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&b);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (b_tmp->size[0] != 0) {
    ibtile = b_tmp->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_tmp->size[0] != 0)) {
    outsize_idx_1 = 6;
  } else {
    outsize_idx_1 = 0;
  }
  k = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = ibtile;
  MMDenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MMDenv, k);
  MMDenv_data = MMDenv->data;
  nrows = input_sizes_idx_1;
  for (k = 0; k < nrows; k++) {
    for (i = 0; i < ibtile; i++) {
      MMDenv_data[i] = m_data[i];
    }
  }
  emxFree_real_T(&m);
  for (k = 0; k < outsize_idx_1; k++) {
    for (i = 0; i < ibtile; i++) {
      MMDenv_data[i + MMDenv->size[0] * (k + input_sizes_idx_1)] =
          b_tmp_data[i + ibtile * k];
    }
  }
  emxFree_real_T(&b_tmp);
}

void b_FSMenvmmd(double n, double v, double varargin_4, emxArray_real_T *MMDenv)
{
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_tmp;
  emxArray_real_T *c_b_tmp;
  emxArray_real_T *m;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *y;
  double options_prob_data[18];
  double b_options_prob_data[16];
  double tmp_data[4];
  double *MMDenv_data;
  double *b_b_tmp_data;
  double *b_data;
  double *b_tmp_data;
  double *m_data;
  double *quant_data;
  int tmp_size[2];
  int d_b_tmp;
  int e_b_tmp;
  int f_b_tmp;
  int ibtile;
  int k;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
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
  options_prob_data[0] = 0.99;
  options_prob_data[1] = 0.999;
  options_prob_data[2] = 0.01;
  options_prob_data[3] = 0.5;
  /*  Check that the initial subset size is not greater than n-1 */
  /*  Envelopes generation */
  /*  Make sure that prob is a row vector. */
  /*  m = column vector which contains fwd search index. */
  emxInit_real_T(&y, 2);
  MMDenv_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    MMDenv_data = y->data;
    MMDenv_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, k);
    MMDenv_data = y->data;
    MMDenv_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    k = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, k);
    MMDenv_data = y->data;
    for (k = 0; k <= nrows; k++) {
      MMDenv_data[k] = varargin_4 + (double)k;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    MMDenv_data = y->data;
  }
  emxInit_real_T(&m, 1);
  k = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, k);
  m_data = m->data;
  nrows = y->size[1];
  for (k = 0; k < nrows; k++) {
    m_data[k] = MMDenv_data[k];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&b, 2);
  /*  mm = fwd search index replicated lp times. */
  k = b->size[0] * b->size[1];
  b->size[0] = m->size[0];
  b->size[1] = 4;
  emxEnsureCapacity_real_T(b, k);
  b_data = b->data;
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < 4; outsize_idx_1++) {
    ibtile = outsize_idx_1 * nrows;
    for (k = 0; k < nrows; k++) {
      b_data[ibtile + k] = m_data[k];
    }
  }
  emxInit_real_T(&b_tmp, 2);
  /*  finv finds the inverse of the F distribution. */
  k = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b->size[0];
  b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_tmp, k);
  b_tmp_data = b_tmp->data;
  nrows = b->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    b_tmp_data[k] = n - b_data[k];
  }
  emxInit_real_T(&b_b_tmp, 2);
  k = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = b->size[0];
  b_b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(b_b_tmp, k);
  b_b_tmp_data = b_b_tmp->data;
  nrows = b->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    b_b_tmp_data[k] = b_data[k] + 1.0;
  }
  for (k = 0; k < 4; k++) {
    b_options_prob_data[k] = options_prob_data[k];
  }
  tmp_size[0] = 1;
  tmp_size[1] = 4;
  for (k = 0; k < 4; k++) {
    tmp_data[k] = 1.0 - b_options_prob_data[k];
  }
  emxInit_real_T(&c_b_tmp, 2);
  k = c_b_tmp->size[0] * c_b_tmp->size[1];
  c_b_tmp->size[0] = b_tmp->size[0];
  c_b_tmp->size[1] = 4;
  emxEnsureCapacity_real_T(c_b_tmp, k);
  MMDenv_data = c_b_tmp->data;
  nrows = b_tmp->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    MMDenv_data[k] = 2.0 * b_tmp_data[k];
  }
  emxInit_real_T(&b_b, 2);
  k = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b_b_tmp->size[0];
  b_b->size[1] = 4;
  emxEnsureCapacity_real_T(b_b, k);
  MMDenv_data = b_b->data;
  nrows = b_b_tmp->size[0] * 4;
  for (k = 0; k < nrows; k++) {
    MMDenv_data[k] = 2.0 * b_b_tmp_data[k];
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&r, 2);
  emxInit_real_T(&r1, 2);
  repmat(tmp_data, tmp_size, m->size[0], r1);
  c_finv(r1, c_b_tmp, b_b, r);
  MMDenv_data = r->data;
  k = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(quant, k);
  quant_data = quant->data;
  nrows = r->size[0] * r->size[1];
  for (k = 0; k < nrows; k++) {
    quant_data[k] = MMDenv_data[k];
  }
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
  if (b->size[0] == 1) {
    if (b_tmp->size[0] == 1) {
      nrows = quant->size[0];
    } else {
      nrows = b_tmp->size[0];
    }
  } else {
    nrows = b->size[0];
  }
  if ((b_tmp->size[0] == quant->size[0]) && (4 == quant->size[1]) &&
      (b->size[0] == d_b_tmp) && (b_b_tmp->size[0] == nrows)) {
    k = c_b_tmp->size[0] * c_b_tmp->size[1];
    c_b_tmp->size[0] = b_b_tmp->size[0];
    c_b_tmp->size[1] = 4;
    emxEnsureCapacity_real_T(c_b_tmp, k);
    MMDenv_data = c_b_tmp->data;
    nrows = b_b_tmp->size[0] * 4;
    for (k = 0; k < nrows; k++) {
      MMDenv_data[k] =
          b_b_tmp_data[k] / ((b_data[k] + 1.0) + b_tmp_data[k] * quant_data[k]);
    }
    k = b_b->size[0] * b_b->size[1];
    b_b->size[0] = b->size[0];
    b_b->size[1] = 4;
    emxEnsureCapacity_real_T(b_b, k);
    MMDenv_data = b_b->data;
    nrows = b->size[0] * 4;
    for (k = 0; k < nrows; k++) {
      MMDenv_data[k] = b_data[k] - v;
    }
    b_finv(c_b_tmp, v, b_b, r);
    MMDenv_data = r->data;
  } else {
    db_binary_expand_op(r, b_b_tmp, b, b_tmp, quant, v);
    MMDenv_data = r->data;
  }
  emxFree_real_T(&c_b_tmp);
  emxFree_real_T(&b_tmp);
  k = r1->size[0] * r1->size[1];
  r1->size[0] = r->size[0];
  r1->size[1] = r->size[1];
  emxEnsureCapacity_real_T(r1, k);
  b_tmp_data = r1->data;
  nrows = r->size[0] * r->size[1];
  for (k = 0; k < nrows; k++) {
    b_tmp_data[k] = MMDenv_data[k];
  }
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  k = b_b->size[0] * b_b->size[1];
  b_b->size[0] = b->size[0];
  b_b->size[1] = b->size[1];
  emxEnsureCapacity_real_T(b_b, k);
  MMDenv_data = b_b->data;
  nrows = b->size[0] * b->size[1];
  for (k = 0; k < nrows; k++) {
    MMDenv_data[k] = b_data[k] / n;
  }
  b_chi2inv(b_b, v, r);
  MMDenv_data = r->data;
  k = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(quant, k);
  quant_data = quant->data;
  nrows = r->size[0] * r->size[1];
  emxFree_real_T(&b_b);
  for (k = 0; k < nrows; k++) {
    quant_data[k] = MMDenv_data[k];
  }
  chi2cdf(quant, v + 2.0, r);
  MMDenv_data = r->data;
  k = quant->size[0] * quant->size[1];
  quant->size[0] = r->size[0];
  quant->size[1] = r->size[1];
  emxEnsureCapacity_real_T(quant, k);
  quant_data = quant->data;
  nrows = r->size[0] * r->size[1];
  for (k = 0; k < nrows; k++) {
    quant_data[k] = MMDenv_data[k];
  }
  emxFree_real_T(&r);
  if (b_b_tmp->size[0] == 1) {
    d_b_tmp = b->size[0];
  } else {
    d_b_tmp = b_b_tmp->size[0];
  }
  if (b_b_tmp->size[1] == 1) {
    nrows = b->size[1];
  } else {
    nrows = b_b_tmp->size[1];
  }
  if (b_b_tmp->size[0] == 1) {
    ibtile = b->size[0];
  } else {
    ibtile = b_b_tmp->size[0];
  }
  if (ibtile == 1) {
    ibtile = b->size[0];
  } else if (b_b_tmp->size[0] == 1) {
    ibtile = b->size[0];
  } else {
    ibtile = b_b_tmp->size[0];
  }
  if (b_b_tmp->size[1] == 1) {
    k = b->size[1];
  } else {
    k = b_b_tmp->size[1];
  }
  if (k == 1) {
    k = b->size[1];
  } else if (b_b_tmp->size[1] == 1) {
    k = b->size[1];
  } else {
    k = b_b_tmp->size[1];
  }
  if (b_b_tmp->size[0] == 1) {
    outsize_idx_1 = b->size[0];
  } else {
    outsize_idx_1 = b_b_tmp->size[0];
  }
  if (outsize_idx_1 == 1) {
    outsize_idx_1 = b->size[0];
  } else if (b_b_tmp->size[0] == 1) {
    outsize_idx_1 = b->size[0];
  } else {
    outsize_idx_1 = b_b_tmp->size[0];
  }
  if (b_b_tmp->size[0] == 1) {
    e_b_tmp = b->size[0];
  } else {
    e_b_tmp = b_b_tmp->size[0];
  }
  if (outsize_idx_1 == 1) {
    outsize_idx_1 = b->size[0];
  } else if (e_b_tmp == 1) {
    outsize_idx_1 = b->size[0];
  } else if (b_b_tmp->size[0] == 1) {
    outsize_idx_1 = b->size[0];
  } else {
    outsize_idx_1 = b_b_tmp->size[0];
  }
  if (b_b_tmp->size[1] == 1) {
    e_b_tmp = b->size[1];
  } else {
    e_b_tmp = b_b_tmp->size[1];
  }
  if (e_b_tmp == 1) {
    e_b_tmp = b->size[1];
  } else if (b_b_tmp->size[1] == 1) {
    e_b_tmp = b->size[1];
  } else {
    e_b_tmp = b_b_tmp->size[1];
  }
  if (b_b_tmp->size[1] == 1) {
    f_b_tmp = b->size[1];
  } else {
    f_b_tmp = b_b_tmp->size[1];
  }
  if (e_b_tmp == 1) {
    e_b_tmp = b->size[1];
  } else if (f_b_tmp == 1) {
    e_b_tmp = b->size[1];
  } else if (b_b_tmp->size[1] == 1) {
    e_b_tmp = b->size[1];
  } else {
    e_b_tmp = b_b_tmp->size[1];
  }
  if ((b_b_tmp->size[0] == b->size[0]) && (b_b_tmp->size[1] == b->size[1]) &&
      (d_b_tmp == b->size[0]) && (nrows == b->size[1]) &&
      (ibtile == b->size[0]) && (k == b->size[1]) &&
      (outsize_idx_1 == r1->size[0]) && (e_b_tmp == r1->size[1])) {
    nrows = b_b_tmp->size[0] * b_b_tmp->size[1];
    for (k = 0; k < nrows; k++) {
      b_b_tmp_data[k] = v * (b_b_tmp_data[k] / b_data[k]) * (b_data[k] - 1.0) /
                        (b_data[k] - v) * b_tmp_data[k];
    }
  } else {
    cb_binary_expand_op(b_b_tmp, v, b, r1);
    b_b_tmp_data = b_b_tmp->data;
  }
  emxFree_real_T(&r1);
  nrows = b_b_tmp->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    b_b_tmp_data[k] = sqrt(b_b_tmp_data[k]);
  }
  if ((b->size[0] == quant->size[0]) && (b->size[1] == quant->size[1])) {
    nrows = b->size[0] * b->size[1];
    for (k = 0; k < nrows; k++) {
      b_data[k] = n / b_data[k] * quant_data[k];
    }
  } else {
    bb_binary_expand_op(b, n, quant);
    b_data = b->data;
  }
  emxFree_real_T(&quant);
  nrows = b->size[0] << 2;
  for (k = 0; k < nrows; k++) {
    b_data[k] = sqrt(b_data[k]);
  }
  if ((b_b_tmp->size[0] == b->size[0]) && (b_b_tmp->size[1] == b->size[1])) {
    nrows = b_b_tmp->size[0] * b_b_tmp->size[1];
    for (k = 0; k < nrows; k++) {
      b_b_tmp_data[k] /= b_data[k];
    }
  } else {
    rdivide(b_b_tmp, b);
    b_b_tmp_data = b_b_tmp->data;
  }
  emxFree_real_T(&b);
  if (m->size[0] != 0) {
    ibtile = m->size[0];
  } else if (b_b_tmp->size[0] != 0) {
    ibtile = b_b_tmp->size[0];
  } else {
    ibtile = 0;
  }
  empty_non_axis_sizes = (ibtile == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes || (b_b_tmp->size[0] != 0)) {
    outsize_idx_1 = 4;
  } else {
    outsize_idx_1 = 0;
  }
  k = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = ibtile;
  MMDenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MMDenv, k);
  MMDenv_data = MMDenv->data;
  nrows = input_sizes_idx_1;
  for (k = 0; k < nrows; k++) {
    for (e_b_tmp = 0; e_b_tmp < ibtile; e_b_tmp++) {
      MMDenv_data[e_b_tmp] = m_data[e_b_tmp];
    }
  }
  emxFree_real_T(&m);
  for (k = 0; k < outsize_idx_1; k++) {
    for (e_b_tmp = 0; e_b_tmp < ibtile; e_b_tmp++) {
      MMDenv_data[e_b_tmp + MMDenv->size[0] * (k + input_sizes_idx_1)] =
          b_b_tmp_data[e_b_tmp + ibtile * k];
    }
  }
  emxFree_real_T(&b_b_tmp);
}

void c_FSMenvmmd(double n, double v, double varargin_4, emxArray_real_T *MMDenv)
{
  emxArray_real_T *a;
  emxArray_real_T *b_b;
  emxArray_real_T *b_b_tmp;
  emxArray_real_T *b_tmp;
  emxArray_real_T *c_b;
  emxArray_real_T *m;
  emxArray_real_T *quant;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *y;
  double *MMDenv_data;
  double *a_data;
  double *b_data;
  double *b_tmp_data;
  double *m_data;
  double *quant_data;
  double *r3;
  int b;
  int c_b_tmp;
  int d_b_tmp;
  int e_b_tmp;
  int itilerow;
  int nrows;
  int outsize_idx_1;
  signed char input_sizes_idx_1;
  bool empty_non_axis_sizes;
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
  emxInit_real_T(&y, 2);
  MMDenv_data = y->data;
  if (rtIsNaN(varargin_4) || rtIsNaN(n - 1.0)) {
    b = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, b);
    MMDenv_data = y->data;
    MMDenv_data[0] = rtNaN;
  } else if (n - 1.0 < varargin_4) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if ((rtIsInf(varargin_4) || rtIsInf(n - 1.0)) &&
             (varargin_4 == n - 1.0)) {
    b = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(y, b);
    MMDenv_data = y->data;
    MMDenv_data[0] = rtNaN;
  } else if (floor(varargin_4) == varargin_4) {
    b = y->size[0] * y->size[1];
    y->size[0] = 1;
    nrows = (int)floor((n - 1.0) - varargin_4);
    y->size[1] = nrows + 1;
    emxEnsureCapacity_real_T(y, b);
    MMDenv_data = y->data;
    for (b = 0; b <= nrows; b++) {
      MMDenv_data[b] = varargin_4 + (double)b;
    }
  } else {
    eml_float_colon(varargin_4, n - 1.0, y);
    MMDenv_data = y->data;
  }
  emxInit_real_T(&m, 1);
  b = m->size[0];
  m->size[0] = y->size[1];
  emxEnsureCapacity_real_T(m, b);
  m_data = m->data;
  nrows = y->size[1];
  for (b = 0; b < nrows; b++) {
    m_data[b] = MMDenv_data[b];
  }
  emxFree_real_T(&y);
  emxInit_real_T(&b_b, 2);
  /*  mm = fwd search index replicated lp times. */
  b = b_b->size[0] * b_b->size[1];
  b_b->size[0] = m->size[0];
  b_b->size[1] = 1;
  emxEnsureCapacity_real_T(b_b, b);
  b_data = b_b->data;
  nrows = m->size[0];
  for (outsize_idx_1 = 0; outsize_idx_1 < nrows; outsize_idx_1++) {
    b_data[outsize_idx_1] = m_data[outsize_idx_1];
  }
  emxInit_real_T(&a, 2);
  /*  finv finds the inverse of the F distribution. */
  b = a->size[0] * a->size[1];
  a->size[0] = b_b->size[0];
  a->size[1] = 1;
  emxEnsureCapacity_real_T(a, b);
  a_data = a->data;
  nrows = b_b->size[0];
  for (b = 0; b < nrows; b++) {
    a_data[b] = n - b_data[b];
  }
  emxInit_real_T(&b_tmp, 2);
  b = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b_b->size[0];
  b_tmp->size[1] = 1;
  emxEnsureCapacity_real_T(b_tmp, b);
  b_tmp_data = b_tmp->data;
  nrows = b_b->size[0];
  for (b = 0; b < nrows; b++) {
    b_tmp_data[b] = b_data[b] + 1.0;
  }
  emxInit_real_T(&c_b, 2);
  b = c_b->size[0] * c_b->size[1];
  c_b->size[0] = m->size[0];
  c_b->size[1] = 1;
  emxEnsureCapacity_real_T(c_b, b);
  MMDenv_data = c_b->data;
  nrows = m->size[0];
  for (itilerow = 0; itilerow < nrows; itilerow++) {
    MMDenv_data[itilerow] = 0.99;
  }
  emxInit_real_T(&b_b_tmp, 2);
  b = b_b_tmp->size[0] * b_b_tmp->size[1];
  b_b_tmp->size[0] = a->size[0];
  b_b_tmp->size[1] = 1;
  emxEnsureCapacity_real_T(b_b_tmp, b);
  MMDenv_data = b_b_tmp->data;
  nrows = a->size[0];
  for (b = 0; b < nrows; b++) {
    MMDenv_data[b] = 2.0 * a_data[b];
  }
  emxInit_real_T(&r, 2);
  b = r->size[0] * r->size[1];
  r->size[0] = b_tmp->size[0];
  r->size[1] = 1;
  emxEnsureCapacity_real_T(r, b);
  MMDenv_data = r->data;
  nrows = b_tmp->size[0];
  for (b = 0; b < nrows; b++) {
    MMDenv_data[b] = 2.0 * b_tmp_data[b];
  }
  emxInit_real_T(&quant, 2);
  emxInit_real_T(&r1, 2);
  c_finv(c_b, b_b_tmp, r, r1);
  MMDenv_data = r1->data;
  b = quant->size[0] * quant->size[1];
  quant->size[0] = r1->size[0];
  quant->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(quant, b);
  quant_data = quant->data;
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&r);
  for (b = 0; b < nrows; b++) {
    quant_data[b] = MMDenv_data[b];
  }
  /*  from the equivalence with the incomplete beta distribution. */
  /*  cor=(n/(n-1))*v*(mm-1)./(mm-v); */
  /* cor=v*((mm.^2-1)./mm)./(mm-v); */
  /*  Minsca = matrix of the scaled minMD envelopes in each step of the search.
   */
  if (a->size[0] == 1) {
    nrows = quant->size[0];
  } else {
    nrows = a->size[0];
  }
  if (b_b->size[0] == 1) {
    if (a->size[0] == 1) {
      b = quant->size[0];
    } else {
      b = a->size[0];
    }
  } else {
    b = b_b->size[0];
  }
  if ((a->size[0] == quant->size[0]) && (1 == quant->size[1]) &&
      (b_b->size[0] == nrows) && (1 == quant->size[1]) &&
      (b_tmp->size[0] == b) && (1 == quant->size[1])) {
    b = b_b_tmp->size[0] * b_b_tmp->size[1];
    b_b_tmp->size[0] = b_tmp->size[0];
    b_b_tmp->size[1] = 1;
    emxEnsureCapacity_real_T(b_b_tmp, b);
    MMDenv_data = b_b_tmp->data;
    nrows = b_tmp->size[0];
    for (b = 0; b < nrows; b++) {
      MMDenv_data[b] =
          b_tmp_data[b] / ((b_data[b] + 1.0) + a_data[b] * quant_data[b]);
    }
    b = c_b->size[0] * c_b->size[1];
    c_b->size[0] = b_b->size[0];
    c_b->size[1] = 1;
    emxEnsureCapacity_real_T(c_b, b);
    MMDenv_data = c_b->data;
    nrows = b_b->size[0];
    for (b = 0; b < nrows; b++) {
      MMDenv_data[b] = b_data[b] - v;
    }
    b_finv(b_b_tmp, v, c_b, r1);
    MMDenv_data = r1->data;
  } else {
    db_binary_expand_op(r1, b_tmp, b_b, a, quant, v);
    MMDenv_data = r1->data;
  }
  emxFree_real_T(&b_b_tmp);
  emxInit_real_T(&r2, 2);
  b = r2->size[0] * r2->size[1];
  r2->size[0] = r1->size[0];
  r2->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(r2, b);
  r3 = r2->data;
  nrows = r1->size[0] * r1->size[1];
  for (b = 0; b < nrows; b++) {
    r3[b] = MMDenv_data[b];
  }
  /*  Compute Tallis correction factor based on the chi^2 distribution */
  /*  mm/n is the percentage of observations inside subset if scaled is not
   * equal to 1. */
  b = c_b->size[0] * c_b->size[1];
  c_b->size[0] = b_b->size[0];
  c_b->size[1] = b_b->size[1];
  emxEnsureCapacity_real_T(c_b, b);
  MMDenv_data = c_b->data;
  nrows = b_b->size[0] * b_b->size[1];
  for (b = 0; b < nrows; b++) {
    MMDenv_data[b] = b_data[b] / n;
  }
  b_chi2inv(c_b, v, r1);
  MMDenv_data = r1->data;
  b = a->size[0] * a->size[1];
  a->size[0] = r1->size[0];
  a->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(a, b);
  a_data = a->data;
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&c_b);
  for (b = 0; b < nrows; b++) {
    a_data[b] = MMDenv_data[b];
  }
  chi2cdf(a, v + 2.0, r1);
  MMDenv_data = r1->data;
  b = quant->size[0] * quant->size[1];
  quant->size[0] = r1->size[0];
  quant->size[1] = r1->size[1];
  emxEnsureCapacity_real_T(quant, b);
  quant_data = quant->data;
  nrows = r1->size[0] * r1->size[1];
  emxFree_real_T(&a);
  for (b = 0; b < nrows; b++) {
    quant_data[b] = MMDenv_data[b];
  }
  emxFree_real_T(&r1);
  if (b_tmp->size[0] == 1) {
    b = b_b->size[0];
  } else {
    b = b_tmp->size[0];
  }
  if (b_tmp->size[1] == 1) {
    nrows = b_b->size[1];
  } else {
    nrows = b_tmp->size[1];
  }
  if (b_tmp->size[0] == 1) {
    outsize_idx_1 = b_b->size[0];
  } else {
    outsize_idx_1 = b_tmp->size[0];
  }
  if (outsize_idx_1 == 1) {
    outsize_idx_1 = b_b->size[0];
  } else if (b_tmp->size[0] == 1) {
    outsize_idx_1 = b_b->size[0];
  } else {
    outsize_idx_1 = b_tmp->size[0];
  }
  if (b_tmp->size[1] == 1) {
    itilerow = b_b->size[1];
  } else {
    itilerow = b_tmp->size[1];
  }
  if (itilerow == 1) {
    itilerow = b_b->size[1];
  } else if (b_tmp->size[1] == 1) {
    itilerow = b_b->size[1];
  } else {
    itilerow = b_tmp->size[1];
  }
  if (b_tmp->size[0] == 1) {
    c_b_tmp = b_b->size[0];
  } else {
    c_b_tmp = b_tmp->size[0];
  }
  if (c_b_tmp == 1) {
    c_b_tmp = b_b->size[0];
  } else if (b_tmp->size[0] == 1) {
    c_b_tmp = b_b->size[0];
  } else {
    c_b_tmp = b_tmp->size[0];
  }
  if (b_tmp->size[0] == 1) {
    d_b_tmp = b_b->size[0];
  } else {
    d_b_tmp = b_tmp->size[0];
  }
  if (c_b_tmp == 1) {
    c_b_tmp = b_b->size[0];
  } else if (d_b_tmp == 1) {
    c_b_tmp = b_b->size[0];
  } else if (b_tmp->size[0] == 1) {
    c_b_tmp = b_b->size[0];
  } else {
    c_b_tmp = b_tmp->size[0];
  }
  if (b_tmp->size[1] == 1) {
    d_b_tmp = b_b->size[1];
  } else {
    d_b_tmp = b_tmp->size[1];
  }
  if (d_b_tmp == 1) {
    d_b_tmp = b_b->size[1];
  } else if (b_tmp->size[1] == 1) {
    d_b_tmp = b_b->size[1];
  } else {
    d_b_tmp = b_tmp->size[1];
  }
  if (b_tmp->size[1] == 1) {
    e_b_tmp = b_b->size[1];
  } else {
    e_b_tmp = b_tmp->size[1];
  }
  if (d_b_tmp == 1) {
    d_b_tmp = b_b->size[1];
  } else if (e_b_tmp == 1) {
    d_b_tmp = b_b->size[1];
  } else if (b_tmp->size[1] == 1) {
    d_b_tmp = b_b->size[1];
  } else {
    d_b_tmp = b_tmp->size[1];
  }
  if ((b_tmp->size[0] == b_b->size[0]) && (b_tmp->size[1] == b_b->size[1]) &&
      (b == b_b->size[0]) && (nrows == b_b->size[1]) &&
      (outsize_idx_1 == b_b->size[0]) && (itilerow == b_b->size[1]) &&
      (c_b_tmp == r2->size[0]) && (d_b_tmp == r2->size[1])) {
    nrows = b_tmp->size[0] * b_tmp->size[1];
    for (b = 0; b < nrows; b++) {
      b_tmp_data[b] = v * (b_tmp_data[b] / b_data[b]) * (b_data[b] - 1.0) /
                      (b_data[b] - v) * r3[b];
    }
  } else {
    cb_binary_expand_op(b_tmp, v, b_b, r2);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&r2);
  nrows = b_tmp->size[0] * b_tmp->size[1];
  for (outsize_idx_1 = 0; outsize_idx_1 < nrows; outsize_idx_1++) {
    b_tmp_data[outsize_idx_1] = sqrt(b_tmp_data[outsize_idx_1]);
  }
  if ((b_b->size[0] == quant->size[0]) && (b_b->size[1] == quant->size[1])) {
    nrows = b_b->size[0] * b_b->size[1];
    for (b = 0; b < nrows; b++) {
      b_data[b] = n / b_data[b] * quant_data[b];
    }
  } else {
    bb_binary_expand_op(b_b, n, quant);
    b_data = b_b->data;
  }
  emxFree_real_T(&quant);
  nrows = b_b->size[0] * b_b->size[1];
  for (outsize_idx_1 = 0; outsize_idx_1 < nrows; outsize_idx_1++) {
    b_data[outsize_idx_1] = sqrt(b_data[outsize_idx_1]);
  }
  if ((b_tmp->size[0] == b_b->size[0]) && (b_tmp->size[1] == b_b->size[1])) {
    nrows = b_tmp->size[0] * b_tmp->size[1];
    for (b = 0; b < nrows; b++) {
      b_tmp_data[b] /= b_data[b];
    }
  } else {
    rdivide(b_tmp, b_b);
    b_tmp_data = b_tmp->data;
  }
  emxFree_real_T(&b_b);
  if (m->size[0] != 0) {
    itilerow = m->size[0];
  } else if ((b_tmp->size[0] != 0) && (b_tmp->size[1] != 0)) {
    itilerow = b_tmp->size[0];
  } else {
    itilerow = 0;
    if (b_tmp->size[0] > 0) {
      itilerow = b_tmp->size[0];
    }
  }
  empty_non_axis_sizes = (itilerow == 0);
  if (empty_non_axis_sizes || (m->size[0] != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  if (empty_non_axis_sizes ||
      ((b_tmp->size[0] != 0) && (b_tmp->size[1] != 0))) {
    outsize_idx_1 = b_tmp->size[1];
  } else {
    outsize_idx_1 = 0;
  }
  b = MMDenv->size[0] * MMDenv->size[1];
  MMDenv->size[0] = itilerow;
  MMDenv->size[1] = input_sizes_idx_1 + outsize_idx_1;
  emxEnsureCapacity_real_T(MMDenv, b);
  MMDenv_data = MMDenv->data;
  nrows = input_sizes_idx_1;
  for (b = 0; b < nrows; b++) {
    for (c_b_tmp = 0; c_b_tmp < itilerow; c_b_tmp++) {
      MMDenv_data[c_b_tmp] = m_data[c_b_tmp];
    }
  }
  emxFree_real_T(&m);
  for (b = 0; b < outsize_idx_1; b++) {
    for (c_b_tmp = 0; c_b_tmp < itilerow; c_b_tmp++) {
      MMDenv_data[c_b_tmp + MMDenv->size[0] * (b + input_sizes_idx_1)] =
          b_tmp_data[c_b_tmp + itilerow * b];
    }
  }
  emxFree_real_T(&b_tmp);
}

void cb_binary_expand_op(emxArray_real_T *b_tmp, double v,
                         const emxArray_real_T *b, const emxArray_real_T *r1)
{
  emxArray_real_T *b_v;
  const double *b_data;
  const double *r;
  double *b_tmp_data;
  double *v_data;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int aux_3_1;
  int aux_4_1;
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
  int stride_3_0;
  int stride_3_1;
  int stride_4_0;
  int stride_4_1;
  r = r1->data;
  b_data = b->data;
  b_tmp_data = b_tmp->data;
  emxInit_real_T(&b_v, 2);
  i = b_v->size[0] * b_v->size[1];
  if (r1->size[0] == 1) {
    if (b->size[0] == 1) {
      b_v->size[0] = b_tmp->size[0];
    } else {
      b_v->size[0] = b->size[0];
    }
  } else {
    b_v->size[0] = r1->size[0];
  }
  if (r1->size[1] == 1) {
    if (b->size[1] == 1) {
      b_v->size[1] = b_tmp->size[1];
    } else {
      b_v->size[1] = b->size[1];
    }
  } else {
    b_v->size[1] = r1->size[1];
  }
  emxEnsureCapacity_real_T(b_v, i);
  v_data = b_v->data;
  stride_0_0 = (b_tmp->size[0] != 1);
  stride_0_1 = (b_tmp->size[1] != 1);
  stride_1_0 = (b->size[0] != 1);
  stride_1_1 = (b->size[1] != 1);
  stride_2_0 = (b->size[0] != 1);
  stride_2_1 = (b->size[1] != 1);
  stride_3_0 = (b->size[0] != 1);
  stride_3_1 = (b->size[1] != 1);
  stride_4_0 = (r1->size[0] != 1);
  stride_4_1 = (r1->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  aux_3_1 = 0;
  aux_4_1 = 0;
  if (r1->size[1] == 1) {
    if (b->size[1] == 1) {
      loop_ub = b_tmp->size[1];
    } else {
      loop_ub = b->size[1];
    }
  } else {
    loop_ub = r1->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (r1->size[0] == 1) {
      if (b->size[0] == 1) {
        b_loop_ub = b_tmp->size[0];
      } else {
        b_loop_ub = b->size[0];
      }
    } else {
      b_loop_ub = r1->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      v_data[i1 + b_v->size[0] * i] =
          v *
          (b_tmp_data[i1 * stride_0_0 + b_tmp->size[0] * aux_0_1] /
           b_data[i1 * stride_1_0 + b->size[0] * aux_1_1]) *
          (b_data[i1 * stride_2_0 + b->size[0] * aux_2_1] - 1.0) /
          (b_data[i1 * stride_3_0 + b->size[0] * aux_3_1] - v) *
          r[i1 * stride_4_0 + r1->size[0] * aux_4_1];
    }
    aux_4_1 += stride_4_1;
    aux_3_1 += stride_3_1;
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = b_tmp->size[0] * b_tmp->size[1];
  b_tmp->size[0] = b_v->size[0];
  b_tmp->size[1] = b_v->size[1];
  emxEnsureCapacity_real_T(b_tmp, i);
  b_tmp_data = b_tmp->data;
  loop_ub = b_v->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_v->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_tmp_data[i1 + b_tmp->size[0] * i] = v_data[i1 + b_v->size[0] * i];
    }
  }
  emxFree_real_T(&b_v);
}

void eb_binary_expand_op(emxArray_real_T *quant, double n,
                         const emxArray_real_T *mm)
{
  emxArray_real_T *b_n;
  const double *mm_data;
  double *n_data;
  double *quant_data;
  int aux_0_1;
  int aux_1_1;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_1_1;
  mm_data = mm->data;
  quant_data = quant->data;
  emxInit_real_T(&b_n, 2);
  i = b_n->size[0] * b_n->size[1];
  if (quant->size[0] == 1) {
    b_n->size[0] = mm->size[0];
  } else {
    b_n->size[0] = quant->size[0];
  }
  if (quant->size[1] == 1) {
    b_n->size[1] = mm->size[1];
  } else {
    b_n->size[1] = quant->size[1];
  }
  emxEnsureCapacity_real_T(b_n, i);
  n_data = b_n->data;
  stride_0_0 = (mm->size[0] != 1);
  stride_0_1 = (mm->size[1] != 1);
  stride_1_0 = (quant->size[0] != 1);
  stride_1_1 = (quant->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (quant->size[1] == 1) {
    loop_ub = mm->size[1];
  } else {
    loop_ub = quant->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (quant->size[0] == 1) {
      b_loop_ub = mm->size[0];
    } else {
      b_loop_ub = quant->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      n_data[i1 + b_n->size[0] * i] =
          n / mm_data[i1 * stride_0_0 + mm->size[0] * aux_0_1] *
          quant_data[i1 * stride_1_0 + quant->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = quant->size[0] * quant->size[1];
  quant->size[0] = b_n->size[0];
  quant->size[1] = b_n->size[1];
  emxEnsureCapacity_real_T(quant, i);
  quant_data = quant->data;
  loop_ub = b_n->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_n->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      quant_data[i1 + quant->size[0] * i] = n_data[i1 + b_n->size[0] * i];
    }
  }
  emxFree_real_T(&b_n);
}

void fb_binary_expand_op(emxArray_real_T *b_tmp, const emxArray_real_T *b_b_tmp,
                         const emxArray_real_T *mm,
                         const emxArray_real_T *quant, double v)
{
  emxArray_real_T *b_mm;
  emxArray_real_T *c_b_tmp;
  const double *b_tmp_data;
  const double *mm_data;
  const double *quant_data;
  double *b_b_tmp_data;
  double *c_b_tmp_data;
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
  b_tmp_data = b_b_tmp->data;
  b_b_tmp_data = b_tmp->data;
  emxInit_real_T(&c_b_tmp, 2);
  i = c_b_tmp->size[0] * c_b_tmp->size[1];
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
    c_b_tmp->size[0] = b_b_tmp->size[0];
  } else {
    if (quant->size[0] == 1) {
      b_quant = b_tmp->size[0];
    } else {
      b_quant = quant->size[0];
    }
    if (b_quant == 1) {
      c_b_tmp->size[0] = mm->size[0];
    } else if (quant->size[0] == 1) {
      c_b_tmp->size[0] = b_tmp->size[0];
    } else {
      c_b_tmp->size[0] = quant->size[0];
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
    c_b_tmp->size[1] = b_b_tmp->size[1];
  } else {
    if (quant->size[1] == 1) {
      b_quant = b_tmp->size[1];
    } else {
      b_quant = quant->size[1];
    }
    if (b_quant == 1) {
      c_b_tmp->size[1] = mm->size[1];
    } else if (quant->size[1] == 1) {
      c_b_tmp->size[1] = b_tmp->size[1];
    } else {
      c_b_tmp->size[1] = quant->size[1];
    }
  }
  emxEnsureCapacity_real_T(c_b_tmp, i);
  c_b_tmp_data = c_b_tmp->data;
  stride_0_0 = (b_b_tmp->size[0] != 1);
  stride_0_1 = (b_b_tmp->size[1] != 1);
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
    loop_ub = b_b_tmp->size[1];
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
      b_quant = b_b_tmp->size[0];
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
      c_b_tmp_data[i1 + c_b_tmp->size[0] * i] =
          b_tmp_data[i1 * stride_0_0 + b_b_tmp->size[0] * aux_0_1] /
          ((mm_data[i1 * stride_1_0 + mm->size[0] * aux_1_1] + 1.0) +
           b_b_tmp_data[i1 * stride_2_0 + b_tmp->size[0] * aux_2_1] *
               quant_data[i1 * stride_3_0 + quant->size[0] * aux_3_1]);
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
  b_b_tmp_data = b_mm->data;
  loop_ub = mm->size[0] * mm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_b_tmp_data[i] = mm_data[i] - v;
  }
  b_finv(c_b_tmp, v, b_mm, b_tmp);
  emxFree_real_T(&b_mm);
  emxFree_real_T(&c_b_tmp);
}

/* End of code generation (FSMenvmmd.c) */
