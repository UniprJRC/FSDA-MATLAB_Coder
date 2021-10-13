/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * restreigen.c
 *
 * Code generation for function 'restreigen'
 *
 */

/* Include files */
#include "restreigen.h"
#include "blockedSummation.h"
#include "bsxfun.h"
#include "combineVectorElements.h"
#include "div.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "minOrMax.h"
#include "permute.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sum.h"
#include "sumprod.h"
#include <math.h>
#include <string.h>

/* Function Declarations */
static void ag_binary_expand_op(emxArray_real_T *dnis,
                                const emxArray_real_T *ed, double restr,
                                const int csz[2]);

static void bg_binary_expand_op(emxArray_real_T *dnis,
                                const emxArray_real_T *ed, double restr);

static void cg_binary_expand_op(emxArray_real_T *r, const emxArray_real_T *nis,
                                const emxArray_real_T *x,
                                const emxArray_real_T *d,
                                const emxArray_real_T *ee);

static void
dg_binary_expand_op(emxArray_real_T *ee, const emxArray_boolean_T *dltm,
                    const emxArray_real_T *eigenvalues, double dimsor,
                    const emxArray_real_T *solmp, const emxArray_real_T *d,
                    const emxArray_boolean_T *dgtcm, const emxArray_real_T *ed);

static void fg_binary_expand_op(emxArray_real_T *rr,
                                const emxArray_boolean_T *dltm,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *eigenvalues,
                                double dimsor);

static void gg_binary_expand_op(emxArray_real_T *nininmat,
                                const emxArray_boolean_T *dltm,
                                const emxArray_real_T *d,
                                const emxArray_boolean_T *dgtcm, double restr,
                                const emxArray_real_T *eigenvalues,
                                double dimsor);

static void hg_binary_expand_op(emxArray_real_T *oo, const emxArray_real_T *r4,
                                const emxArray_real_T *r5,
                                const emxArray_real_T *ee);

static void ig_binary_expand_op(emxArray_real_T *oo, const emxArray_real_T *nis,
                                double n, const emxArray_real_T *x);

static void
jg_binary_expand_op(emxArray_real_T *ee, const emxArray_real_T *nininmat,
                    const emxArray_real_T *eigenvalues, double dimsor,
                    const emxArray_real_T *oo, const emxArray_boolean_T *c,
                    const emxArray_real_T *ed, const emxArray_boolean_T *b_c);

static void mg_binary_expand_op(emxArray_real_T *nininmat,
                                const emxArray_real_T *ss,
                                const emxArray_real_T *tt, double restr,
                                const emxArray_real_T *ninin);

static void ng_binary_expand_op(emxArray_real_T *r1, const emxArray_real_T *c,
                                const emxArray_real_T *x,
                                const emxArray_real_T *r2,
                                const emxArray_real_T *ee);

static void og_binary_expand_op(emxArray_real_T *ee, const emxArray_real_T *r3,
                                const emxArray_real_T *eigenvalues,
                                double dimsor, const emxArray_real_T *c,
                                const emxArray_boolean_T *dgtcm, double kv,
                                const emxArray_real_T *ed,
                                const emxArray_boolean_T *b_c);

static void pg_binary_expand_op(emxArray_real_T *c,
                                const emxArray_boolean_T *dltm,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *eigenvalues,
                                double dimsor);

static void rf_binary_expand_op(emxArray_real_T *c, const int outsize[2],
                                const emxArray_real_T *x,
                                const emxArray_real_T *eigenvalues,
                                const emxArray_real_T *ee);

static void sf_binary_expand_op(emxArray_real_T *ee,
                                const emxArray_boolean_T *dltm,
                                const emxArray_real_T *eigenvalues,
                                double dimsor, const emxArray_real_T *solmp,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *ed);

static void tf_binary_expand_op(emxArray_real_T *c,
                                const emxArray_boolean_T *dltm,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *eigenvalues,
                                double dimsor);

static void uf_binary_expand_op(emxArray_real_T *c,
                                const emxArray_boolean_T *dltm,
                                const emxArray_real_T *eigenvalues,
                                const emxArray_boolean_T *dgtcm, double restr,
                                double dimsor);

static void vf_binary_expand_op(emxArray_real_T *oo, const emxArray_real_T *x,
                                const emxArray_real_T *c,
                                const emxArray_real_T *ee);

static void wf_binary_expand_op(emxArray_real_T *oo, const emxArray_real_T *nis,
                                const emxArray_real_T *x,
                                const emxArray_real_T *c);

static void xf_binary_expand_op(emxArray_real_T *ee, const emxArray_real_T *r3,
                                const emxArray_real_T *eigenvalues,
                                double dimsor, const emxArray_real_T *c,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *ed,
                                const emxArray_boolean_T *b_c);

static void yf_binary_expand_op(emxArray_real_T *rr, const int csz[2]);

/* Function Definitions */
static void ag_binary_expand_op(emxArray_real_T *dnis,
                                const emxArray_real_T *ed, double restr,
                                const int csz[2])
{
  emxArray_real_T *b_dnis;
  const double *ed_data;
  double *b_dnis_data;
  double *dnis_data;
  int i;
  int stride_0_1;
  int stride_1_1;
  int unnamed_idx_1;
  ed_data = ed->data;
  dnis_data = dnis->data;
  emxInit_real_T(&b_dnis, 2);
  unnamed_idx_1 = csz[1];
  i = b_dnis->size[0] * b_dnis->size[1];
  b_dnis->size[0] = 1;
  if (unnamed_idx_1 == 1) {
    if (ed->size[1] == 1) {
      b_dnis->size[1] = dnis->size[1];
    } else {
      b_dnis->size[1] = ed->size[1];
    }
  } else {
    b_dnis->size[1] = unnamed_idx_1;
  }
  emxEnsureCapacity_real_T(b_dnis, i);
  b_dnis_data = b_dnis->data;
  stride_0_1 = (dnis->size[1] != 1);
  stride_1_1 = (ed->size[1] != 1);
  if (unnamed_idx_1 == 1) {
    if (ed->size[1] == 1) {
      unnamed_idx_1 = dnis->size[1];
    } else {
      unnamed_idx_1 = ed->size[1];
    }
  }
  for (i = 0; i < unnamed_idx_1; i++) {
    b_dnis_data[i] =
        dnis_data[i * stride_0_1] + ed_data[i * stride_1_1] / restr;
  }
  i = dnis->size[0] * dnis->size[1];
  dnis->size[0] = 1;
  dnis->size[1] = b_dnis->size[1];
  emxEnsureCapacity_real_T(dnis, i);
  dnis_data = dnis->data;
  unnamed_idx_1 = b_dnis->size[1];
  for (i = 0; i < unnamed_idx_1; i++) {
    dnis_data[i] = b_dnis_data[i];
  }
  emxFree_real_T(&b_dnis);
}

static void bg_binary_expand_op(emxArray_real_T *dnis,
                                const emxArray_real_T *ed, double restr)
{
  emxArray_real_T *b_dnis;
  const double *ed_data;
  double *b_dnis_data;
  double *dnis_data;
  int i;
  int loop_ub;
  int stride_0_1;
  int stride_1_1;
  ed_data = ed->data;
  dnis_data = dnis->data;
  emxInit_real_T(&b_dnis, 2);
  i = b_dnis->size[0] * b_dnis->size[1];
  b_dnis->size[0] = 1;
  if (ed->size[1] == 1) {
    b_dnis->size[1] = dnis->size[1];
  } else {
    b_dnis->size[1] = ed->size[1];
  }
  emxEnsureCapacity_real_T(b_dnis, i);
  b_dnis_data = b_dnis->data;
  stride_0_1 = (dnis->size[1] != 1);
  stride_1_1 = (ed->size[1] != 1);
  if (ed->size[1] == 1) {
    loop_ub = dnis->size[1];
  } else {
    loop_ub = ed->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_dnis_data[i] =
        dnis_data[i * stride_0_1] + ed_data[i * stride_1_1] / restr;
  }
  i = dnis->size[0] * dnis->size[1];
  dnis->size[0] = 1;
  dnis->size[1] = b_dnis->size[1];
  emxEnsureCapacity_real_T(dnis, i);
  dnis_data = dnis->data;
  loop_ub = b_dnis->size[1];
  for (i = 0; i < loop_ub; i++) {
    dnis_data[i] = b_dnis_data[i];
  }
  emxFree_real_T(&b_dnis);
}

static void cg_binary_expand_op(emxArray_real_T *r, const emxArray_real_T *nis,
                                const emxArray_real_T *x,
                                const emxArray_real_T *d,
                                const emxArray_real_T *ee)
{
  emxArray_real_T *b_nis;
  const double *d_data;
  const double *ee_data;
  const double *nis_data;
  const double *x_data;
  double *b_nis_data;
  int aux_1_1;
  int aux_1_2;
  int aux_3_1;
  int aux_3_2;
  int b_ee;
  int b_loop_ub;
  int d_idx_0;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int nis_idx_0;
  int stride_0_0;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  int stride_2_0;
  int stride_3_0;
  int stride_3_1;
  int stride_3_2;
  ee_data = ee->data;
  d_data = d->data;
  x_data = x->data;
  nis_data = nis->data;
  emxInit_real_T(&b_nis, 3);
  nis_idx_0 = nis->size[0];
  d_idx_0 = d->size[0];
  i = b_nis->size[0] * b_nis->size[1] * b_nis->size[2];
  if (ee->size[0] == 1) {
    b_ee = d_idx_0;
  } else {
    b_ee = ee->size[0];
  }
  if (b_ee == 1) {
    b_ee = x->size[0];
  } else if (ee->size[0] == 1) {
    b_ee = d_idx_0;
  } else {
    b_ee = ee->size[0];
  }
  if (b_ee == 1) {
    b_nis->size[0] = nis_idx_0;
  } else {
    if (ee->size[0] == 1) {
      b_ee = d_idx_0;
    } else {
      b_ee = ee->size[0];
    }
    if (b_ee == 1) {
      b_nis->size[0] = x->size[0];
    } else if (ee->size[0] == 1) {
      b_nis->size[0] = d_idx_0;
    } else {
      b_nis->size[0] = ee->size[0];
    }
  }
  if (ee->size[1] == 1) {
    b_ee = 1;
  } else {
    b_ee = ee->size[1];
  }
  if (b_ee == 1) {
    b_nis->size[1] = x->size[1];
  } else if (ee->size[1] == 1) {
    b_nis->size[1] = 1;
  } else {
    b_nis->size[1] = ee->size[1];
  }
  if (ee->size[2] == 1) {
    b_ee = 1;
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_nis->size[2] = x->size[2];
  } else if (ee->size[2] == 1) {
    b_nis->size[2] = 1;
  } else {
    b_nis->size[2] = ee->size[2];
  }
  emxEnsureCapacity_real_T(b_nis, i);
  b_nis_data = b_nis->data;
  stride_0_0 = (nis_idx_0 != 1);
  stride_1_0 = (x->size[0] != 1);
  stride_1_1 = (x->size[1] != 1);
  stride_1_2 = (x->size[2] != 1);
  stride_2_0 = (d_idx_0 != 1);
  stride_3_0 = (ee->size[0] != 1);
  stride_3_1 = (ee->size[1] != 1);
  stride_3_2 = (ee->size[2] != 1);
  aux_1_2 = 0;
  aux_3_2 = 0;
  if (ee->size[2] == 1) {
    b_ee = 1;
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    loop_ub = x->size[2];
  } else if (ee->size[2] == 1) {
    loop_ub = 1;
  } else {
    loop_ub = ee->size[2];
  }
  for (i = 0; i < loop_ub; i++) {
    aux_1_1 = 0;
    aux_3_1 = 0;
    if (ee->size[1] == 1) {
      b_ee = 1;
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_loop_ub = x->size[1];
    } else if (ee->size[1] == 1) {
      b_loop_ub = 1;
    } else {
      b_loop_ub = ee->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if (ee->size[0] == 1) {
        b_ee = d_idx_0;
      } else {
        b_ee = ee->size[0];
      }
      if (b_ee == 1) {
        b_ee = x->size[0];
      } else if (ee->size[0] == 1) {
        b_ee = d_idx_0;
      } else {
        b_ee = ee->size[0];
      }
      if (b_ee == 1) {
        b_ee = nis_idx_0;
      } else {
        if (ee->size[0] == 1) {
          b_ee = d_idx_0;
        } else {
          b_ee = ee->size[0];
        }
        if (b_ee == 1) {
          b_ee = x->size[0];
        } else if (ee->size[0] == 1) {
          b_ee = d_idx_0;
        } else {
          b_ee = ee->size[0];
        }
      }
      for (i2 = 0; i2 < b_ee; i2++) {
        b_nis_data[(i2 + b_nis->size[0] * i1) +
                   b_nis->size[0] * b_nis->size[1] * i] =
            nis_data[i2 * stride_0_0] *
            (x_data[(i2 * stride_1_0 + x->size[0] * aux_1_1) +
                    x->size[0] * x->size[1] * aux_1_2] +
             d_data[i2 * stride_2_0] /
                 ee_data[(i2 * stride_3_0 + ee->size[0] * aux_3_1) +
                         ee->size[0] * ee->size[1] * aux_3_2]);
      }
      aux_3_1 += stride_3_1;
      aux_1_1 += stride_1_1;
    }
    aux_3_2 += stride_3_2;
    aux_1_2 += stride_1_2;
  }
  c_sum(b_nis, r);
  emxFree_real_T(&b_nis);
}

static void
dg_binary_expand_op(emxArray_real_T *ee, const emxArray_boolean_T *dltm,
                    const emxArray_real_T *eigenvalues, double dimsor,
                    const emxArray_real_T *solmp, const emxArray_real_T *d,
                    const emxArray_boolean_T *dgtcm, const emxArray_real_T *ed)
{
  emxArray_real_T *b_dgtcm;
  emxArray_real_T *b_dltm;
  emxArray_real_T *c_dltm;
  const double *d_data;
  const double *ed_data;
  const double *solmp_data;
  double *b_dgtcm_data;
  double *b_dltm_data;
  double *c_dltm_data;
  double *ee_data;
  int aux_0_1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int aux_3_2;
  int aux_4_2;
  int aux_5_2;
  int eigenvalues_idx_0;
  int eigenvalues_tmp_tmp;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_0_2;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  int stride_2_0;
  int stride_3_0;
  int stride_3_2;
  int stride_4_2;
  int stride_5_0;
  int stride_5_2;
  const bool *dgtcm_data;
  const bool *dltm_data;
  ed_data = ed->data;
  dgtcm_data = dgtcm->data;
  d_data = d->data;
  solmp_data = solmp->data;
  dltm_data = dltm->data;
  emxInit_real_T(&b_dltm, 2);
  eigenvalues_idx_0 = eigenvalues->size[1];
  eigenvalues_tmp_tmp = (int)dimsor;
  i = b_dltm->size[0] * b_dltm->size[1];
  b_dltm->size[0] = eigenvalues_idx_0;
  if (solmp->size[1] == 1) {
    b_dltm->size[1] = (int)dimsor;
  } else {
    b_dltm->size[1] = solmp->size[1];
  }
  emxEnsureCapacity_real_T(b_dltm, i);
  b_dltm_data = b_dltm->data;
  stride_0_1 = ((int)dimsor != 1);
  stride_1_1 = (solmp->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (solmp->size[1] == 1) {
    loop_ub = (int)dimsor;
  } else {
    loop_ub = solmp->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < eigenvalues_idx_0; i1++) {
      b_dltm_data[i1 + b_dltm->size[0] * i] =
          (double)dltm_data[i1 + eigenvalues_idx_0 * aux_0_1] *
          solmp_data[aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  emxInit_real_T(&c_dltm, 2);
  eigenvalues_idx_0 = eigenvalues->size[1];
  i = c_dltm->size[0] * c_dltm->size[1];
  c_dltm->size[0] = dltm->size[0];
  c_dltm->size[1] = dltm->size[1];
  emxEnsureCapacity_real_T(c_dltm, i);
  c_dltm_data = c_dltm->data;
  loop_ub = dltm->size[0] * dltm->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_dltm_data[i] = !dltm_data[i];
  }
  emxInit_real_T(&b_dgtcm, 2);
  stride_0_1 = eigenvalues->size[1];
  stride_1_1 = d->size[0];
  aux_0_1 = eigenvalues->size[1];
  i = b_dgtcm->size[0] * b_dgtcm->size[1];
  b_dgtcm->size[0] = dgtcm->size[0];
  b_dgtcm->size[1] = dgtcm->size[1];
  emxEnsureCapacity_real_T(b_dgtcm, i);
  b_dgtcm_data = b_dgtcm->data;
  loop_ub = dgtcm->size[0] * dgtcm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_dgtcm_data[i] = !dgtcm_data[i];
  }
  aux_1_1 = eigenvalues->size[1];
  i = ee->size[0] * ee->size[1] * ee->size[2];
  if (aux_1_1 == 1) {
    loop_ub = 1;
  } else {
    loop_ub = aux_1_1;
  }
  if (loop_ub == 1) {
    if (aux_0_1 == 1) {
      if (stride_1_1 == 1) {
        loop_ub = stride_0_1;
      } else {
        loop_ub = stride_1_1;
      }
    } else {
      loop_ub = aux_0_1;
    }
    if (loop_ub == 1) {
      ee->size[0] = eigenvalues_idx_0;
    } else if (aux_0_1 == 1) {
      if (stride_1_1 == 1) {
        ee->size[0] = stride_0_1;
      } else {
        ee->size[0] = stride_1_1;
      }
    } else {
      ee->size[0] = aux_0_1;
    }
  } else if (aux_1_1 == 1) {
    ee->size[0] = 1;
  } else {
    ee->size[0] = aux_1_1;
  }
  ee->size[1] = 1;
  ee->size[2] = (int)dimsor;
  emxEnsureCapacity_real_T(ee, i);
  ee_data = ee->data;
  stride_0_0 = (eigenvalues_idx_0 != 1);
  stride_0_2 = ((int)dimsor != 1);
  stride_1_0 = (stride_0_1 != 1);
  stride_1_2 = ((int)dimsor != 1);
  stride_2_0 = (stride_1_1 != 1);
  stride_3_0 = (aux_0_1 != 1);
  stride_3_2 = ((int)dimsor != 1);
  stride_4_2 = ((int)dimsor != 1);
  stride_5_0 = (aux_1_1 != 1);
  stride_5_2 = ((int)dimsor != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_3_2 = 0;
  aux_4_2 = 0;
  aux_5_2 = 0;
  for (i = 0; i < eigenvalues_tmp_tmp; i++) {
    if (aux_1_1 == 1) {
      loop_ub = 1;
    } else {
      loop_ub = aux_1_1;
    }
    if (loop_ub == 1) {
      if (aux_0_1 == 1) {
        if (stride_1_1 == 1) {
          loop_ub = stride_0_1;
        } else {
          loop_ub = stride_1_1;
        }
      } else {
        loop_ub = aux_0_1;
      }
      if (loop_ub == 1) {
        loop_ub = eigenvalues_idx_0;
      } else if (aux_0_1 == 1) {
        if (stride_1_1 == 1) {
          loop_ub = stride_0_1;
        } else {
          loop_ub = stride_1_1;
        }
      } else {
        loop_ub = aux_0_1;
      }
    } else if (aux_1_1 == 1) {
      loop_ub = 1;
    } else {
      loop_ub = aux_1_1;
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      ee_data[i1 + ee->size[0] * ee->size[1] * i] =
          (b_dltm_data[i1 * stride_0_0 + eigenvalues_idx_0 * aux_0_2] +
           c_dltm_data[i1 * stride_1_0 + stride_0_1 * aux_1_2] *
               d_data[i1 * stride_2_0] *
               (double)dgtcm_data[i1 * stride_3_0 + aux_0_1 * aux_3_2]) +
          ed_data[aux_4_2] * b_dgtcm_data[i1 * stride_5_0 + aux_1_1 * aux_5_2];
    }
    aux_5_2 += stride_5_2;
    aux_4_2 += stride_4_2;
    aux_3_2 += stride_3_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  emxFree_real_T(&b_dgtcm);
  emxFree_real_T(&c_dltm);
  emxFree_real_T(&b_dltm);
}

static void fg_binary_expand_op(emxArray_real_T *rr,
                                const emxArray_boolean_T *dltm,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *eigenvalues,
                                double dimsor)
{
  emxArray_real_T c_dltm;
  emxArray_real_T *b_dltm;
  double *b_dltm_data;
  int b_eigenvalues[3];
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
  const bool *dgtcm_data;
  const bool *dltm_data;
  dgtcm_data = dgtcm->data;
  dltm_data = dltm->data;
  emxInit_real_T(&b_dltm, 2);
  i = b_dltm->size[0] * b_dltm->size[1];
  if (dgtcm->size[0] == 1) {
    b_dltm->size[0] = dltm->size[0];
  } else {
    b_dltm->size[0] = dgtcm->size[0];
  }
  if (dgtcm->size[1] == 1) {
    b_dltm->size[1] = dltm->size[1];
  } else {
    b_dltm->size[1] = dgtcm->size[1];
  }
  emxEnsureCapacity_real_T(b_dltm, i);
  b_dltm_data = b_dltm->data;
  stride_0_0 = (dltm->size[0] != 1);
  stride_0_1 = (dltm->size[1] != 1);
  stride_1_0 = (dgtcm->size[0] != 1);
  stride_1_1 = (dgtcm->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (dgtcm->size[1] == 1) {
    loop_ub = dltm->size[1];
  } else {
    loop_ub = dgtcm->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (dgtcm->size[0] == 1) {
      b_loop_ub = dltm->size[0];
    } else {
      b_loop_ub = dgtcm->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_dltm_data[i1 + b_dltm->size[0] * i] =
          (double)dltm_data[i1 * stride_0_0 + dltm->size[0] * aux_0_1] +
          (double)dgtcm_data[i1 * stride_1_0 + dgtcm->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  stride_0_0 = eigenvalues->size[1];
  c_dltm = *b_dltm;
  b_eigenvalues[0] = stride_0_0;
  b_eigenvalues[1] = 1;
  b_eigenvalues[2] = (int)dimsor;
  c_dltm.size = &b_eigenvalues[0];
  c_dltm.numDimensions = 3;
  c_permute(&c_dltm, rr);
  emxFree_real_T(&b_dltm);
}

static void gg_binary_expand_op(emxArray_real_T *nininmat,
                                const emxArray_boolean_T *dltm,
                                const emxArray_real_T *d,
                                const emxArray_boolean_T *dgtcm, double restr,
                                const emxArray_real_T *eigenvalues,
                                double dimsor)
{
  emxArray_real_T c_dltm;
  emxArray_real_T *b_dltm;
  const double *d_data;
  double *b_dltm_data;
  int b_eigenvalues[3];
  int aux_0_1;
  int aux_2_1;
  int b_d_idx_0;
  int c_d_idx_0;
  int d_idx_0;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_2_0;
  int stride_2_1;
  int stride_3_0;
  const bool *dgtcm_data;
  const bool *dltm_data;
  dgtcm_data = dgtcm->data;
  d_data = d->data;
  dltm_data = dltm->data;
  emxInit_real_T(&b_dltm, 2);
  d_idx_0 = d->size[0];
  b_d_idx_0 = d->size[0];
  i = b_dltm->size[0] * b_dltm->size[1];
  if (b_d_idx_0 == 1) {
    c_d_idx_0 = dgtcm->size[0];
  } else {
    c_d_idx_0 = b_d_idx_0;
  }
  if (c_d_idx_0 == 1) {
    if (d_idx_0 == 1) {
      b_dltm->size[0] = dltm->size[0];
    } else {
      b_dltm->size[0] = d_idx_0;
    }
  } else if (b_d_idx_0 == 1) {
    b_dltm->size[0] = dgtcm->size[0];
  } else {
    b_dltm->size[0] = b_d_idx_0;
  }
  if (dgtcm->size[1] == 1) {
    b_dltm->size[1] = dltm->size[1];
  } else {
    b_dltm->size[1] = dgtcm->size[1];
  }
  emxEnsureCapacity_real_T(b_dltm, i);
  b_dltm_data = b_dltm->data;
  stride_0_0 = (dltm->size[0] != 1);
  stride_0_1 = (dltm->size[1] != 1);
  stride_1_0 = (d_idx_0 != 1);
  stride_2_0 = (dgtcm->size[0] != 1);
  stride_2_1 = (dgtcm->size[1] != 1);
  stride_3_0 = (b_d_idx_0 != 1);
  aux_0_1 = 0;
  aux_2_1 = 0;
  if (dgtcm->size[1] == 1) {
    loop_ub = dltm->size[1];
  } else {
    loop_ub = dgtcm->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (b_d_idx_0 == 1) {
      c_d_idx_0 = dgtcm->size[0];
    } else {
      c_d_idx_0 = b_d_idx_0;
    }
    if (c_d_idx_0 == 1) {
      if (d_idx_0 == 1) {
        c_d_idx_0 = dltm->size[0];
      } else {
        c_d_idx_0 = d_idx_0;
      }
    } else if (b_d_idx_0 == 1) {
      c_d_idx_0 = dgtcm->size[0];
    } else {
      c_d_idx_0 = b_d_idx_0;
    }
    for (i1 = 0; i1 < c_d_idx_0; i1++) {
      b_dltm_data[i1 + b_dltm->size[0] * i] =
          (double)dltm_data[i1 * stride_0_0 + dltm->size[0] * aux_0_1] *
              d_data[i1 * stride_1_0] +
          (double)dgtcm_data[i1 * stride_2_0 + dgtcm->size[0] * aux_2_1] *
              d_data[i1 * stride_3_0] / restr;
    }
    aux_2_1 += stride_2_1;
    aux_0_1 += stride_0_1;
  }
  d_idx_0 = eigenvalues->size[1];
  c_dltm = *b_dltm;
  b_eigenvalues[0] = d_idx_0;
  b_eigenvalues[1] = 1;
  b_eigenvalues[2] = (int)dimsor;
  c_dltm.size = &b_eigenvalues[0];
  c_dltm.numDimensions = 3;
  c_permute(&c_dltm, nininmat);
  emxFree_real_T(&b_dltm);
}

static void hg_binary_expand_op(emxArray_real_T *oo, const emxArray_real_T *r4,
                                const emxArray_real_T *r5,
                                const emxArray_real_T *ee)
{
  emxArray_real_T *r2;
  const double *ee_data;
  const double *r;
  const double *r1;
  double *oo_data;
  double *r3;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int aux_2_2;
  int aux_3_1;
  int aux_3_2;
  int b_ee;
  int b_loop_ub;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_0_0;
  int stride_0_2;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  int stride_2_0;
  int stride_2_2;
  int stride_3_0;
  int stride_3_1;
  int stride_3_2;
  ee_data = ee->data;
  r = r5->data;
  r1 = r4->data;
  oo_data = oo->data;
  emxInit_real_T(&r2, 3);
  i = r2->size[0] * r2->size[1] * r2->size[2];
  if (ee->size[0] == 1) {
    b_ee = r5->size[0];
  } else {
    b_ee = ee->size[0];
  }
  if (b_ee == 1) {
    b_ee = oo->size[0];
  } else if (ee->size[0] == 1) {
    b_ee = r5->size[0];
  } else {
    b_ee = ee->size[0];
  }
  if (b_ee == 1) {
    r2->size[0] = r4->size[0];
  } else {
    if (ee->size[0] == 1) {
      b_ee = r5->size[0];
    } else {
      b_ee = ee->size[0];
    }
    if (b_ee == 1) {
      r2->size[0] = oo->size[0];
    } else if (ee->size[0] == 1) {
      r2->size[0] = r5->size[0];
    } else {
      r2->size[0] = ee->size[0];
    }
  }
  if (ee->size[1] == 1) {
    b_ee = 1;
  } else {
    b_ee = ee->size[1];
  }
  if (b_ee == 1) {
    r2->size[1] = oo->size[1];
  } else if (ee->size[1] == 1) {
    r2->size[1] = 1;
  } else {
    r2->size[1] = ee->size[1];
  }
  if (ee->size[2] == 1) {
    b_ee = r5->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_ee = oo->size[2];
  } else if (ee->size[2] == 1) {
    b_ee = r5->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    r2->size[2] = r4->size[2];
  } else {
    if (ee->size[2] == 1) {
      b_ee = r5->size[2];
    } else {
      b_ee = ee->size[2];
    }
    if (b_ee == 1) {
      r2->size[2] = oo->size[2];
    } else if (ee->size[2] == 1) {
      r2->size[2] = r5->size[2];
    } else {
      r2->size[2] = ee->size[2];
    }
  }
  emxEnsureCapacity_real_T(r2, i);
  r3 = r2->data;
  stride_0_0 = (r4->size[0] != 1);
  stride_0_2 = (r4->size[2] != 1);
  stride_1_0 = (oo->size[0] != 1);
  stride_1_1 = (oo->size[1] != 1);
  stride_1_2 = (oo->size[2] != 1);
  stride_2_0 = (r5->size[0] != 1);
  stride_2_2 = (r5->size[2] != 1);
  stride_3_0 = (ee->size[0] != 1);
  stride_3_1 = (ee->size[1] != 1);
  stride_3_2 = (ee->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  if (ee->size[2] == 1) {
    b_ee = r5->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_ee = oo->size[2];
  } else if (ee->size[2] == 1) {
    b_ee = r5->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    loop_ub = r4->size[2];
  } else {
    if (ee->size[2] == 1) {
      b_ee = r5->size[2];
    } else {
      b_ee = ee->size[2];
    }
    if (b_ee == 1) {
      loop_ub = oo->size[2];
    } else if (ee->size[2] == 1) {
      loop_ub = r5->size[2];
    } else {
      loop_ub = ee->size[2];
    }
  }
  for (i = 0; i < loop_ub; i++) {
    aux_1_1 = 0;
    aux_3_1 = 0;
    if (ee->size[1] == 1) {
      b_ee = 1;
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_loop_ub = oo->size[1];
    } else if (ee->size[1] == 1) {
      b_loop_ub = 1;
    } else {
      b_loop_ub = ee->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if (ee->size[0] == 1) {
        b_ee = r5->size[0];
      } else {
        b_ee = ee->size[0];
      }
      if (b_ee == 1) {
        b_ee = oo->size[0];
      } else if (ee->size[0] == 1) {
        b_ee = r5->size[0];
      } else {
        b_ee = ee->size[0];
      }
      if (b_ee == 1) {
        b_ee = r4->size[0];
      } else {
        if (ee->size[0] == 1) {
          b_ee = r5->size[0];
        } else {
          b_ee = ee->size[0];
        }
        if (b_ee == 1) {
          b_ee = oo->size[0];
        } else if (ee->size[0] == 1) {
          b_ee = r5->size[0];
        } else {
          b_ee = ee->size[0];
        }
      }
      for (i2 = 0; i2 < b_ee; i2++) {
        r3[(i2 + r2->size[0] * i1) + r2->size[0] * r2->size[1] * i] =
            r1[i2 * stride_0_0 + r4->size[0] * aux_0_2] *
            (oo_data[(i2 * stride_1_0 + oo->size[0] * aux_1_1) +
                     oo->size[0] * oo->size[1] * aux_1_2] +
             r[i2 * stride_2_0 + r5->size[0] * aux_2_2] /
                 ee_data[(i2 * stride_3_0 + ee->size[0] * aux_3_1) +
                         ee->size[0] * ee->size[1] * aux_3_2]);
      }
      aux_3_1 += stride_3_1;
      aux_1_1 += stride_1_1;
    }
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  i = oo->size[0] * oo->size[1] * oo->size[2];
  oo->size[0] = r2->size[0];
  oo->size[1] = r2->size[1];
  oo->size[2] = r2->size[2];
  emxEnsureCapacity_real_T(oo, i);
  oo_data = oo->data;
  loop_ub = r2->size[2];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r2->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_ee = r2->size[0];
      for (i2 = 0; i2 < b_ee; i2++) {
        oo_data[(i2 + oo->size[0] * i1) + oo->size[0] * oo->size[1] * i] =
            r3[(i2 + r2->size[0] * i1) + r2->size[0] * r2->size[1] * i];
      }
    }
  }
  emxFree_real_T(&r2);
}

static void ig_binary_expand_op(emxArray_real_T *oo, const emxArray_real_T *nis,
                                double n, const emxArray_real_T *x)
{
  emxArray_real_T *b_nis;
  emxArray_real_T *b_x;
  const double *nis_data;
  const double *x_data;
  double *b_nis_data;
  double *oo_data;
  int aux_0_1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int b_loop_ub;
  int c_loop_ub;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_0_2;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  x_data = x->data;
  nis_data = nis->data;
  oo_data = oo->data;
  emxInit_real_T(&b_nis, 1);
  i = b_nis->size[0];
  b_nis->size[0] = nis->size[0];
  emxEnsureCapacity_real_T(b_nis, i);
  b_nis_data = b_nis->data;
  loop_ub = nis->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_nis_data[i] = nis_data[i] / n;
  }
  emxInit_real_T(&b_x, 3);
  i = b_x->size[0] * b_x->size[1] * b_x->size[2];
  if (oo->size[0] == 1) {
    b_x->size[0] = x->size[0];
  } else {
    b_x->size[0] = oo->size[0];
  }
  if (oo->size[1] == 1) {
    b_x->size[1] = x->size[1];
  } else {
    b_x->size[1] = oo->size[1];
  }
  if (oo->size[2] == 1) {
    b_x->size[2] = x->size[2];
  } else {
    b_x->size[2] = oo->size[2];
  }
  emxEnsureCapacity_real_T(b_x, i);
  b_nis_data = b_x->data;
  stride_0_0 = (x->size[0] != 1);
  stride_0_1 = (x->size[1] != 1);
  stride_0_2 = (x->size[2] != 1);
  stride_1_0 = (oo->size[0] != 1);
  stride_1_1 = (oo->size[1] != 1);
  stride_1_2 = (oo->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  if (oo->size[2] == 1) {
    loop_ub = x->size[2];
  } else {
    loop_ub = oo->size[2];
  }
  for (i = 0; i < loop_ub; i++) {
    aux_0_1 = 0;
    aux_1_1 = 0;
    if (oo->size[1] == 1) {
      b_loop_ub = x->size[1];
    } else {
      b_loop_ub = oo->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if (oo->size[0] == 1) {
        c_loop_ub = x->size[0];
      } else {
        c_loop_ub = oo->size[0];
      }
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        b_nis_data[(i2 + b_x->size[0] * i1) + b_x->size[0] * b_x->size[1] * i] =
            x_data[(i2 * stride_0_0 + x->size[0] * aux_0_1) +
                   x->size[0] * x->size[1] * aux_0_2] +
            oo_data[(i2 * stride_1_0 + oo->size[0] * aux_1_1) +
                    oo->size[0] * oo->size[1] * aux_1_2];
      }
      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  k_bsxfun(b_nis, b_x, oo);
  emxFree_real_T(&b_x);
  emxFree_real_T(&b_nis);
}

static void
jg_binary_expand_op(emxArray_real_T *ee, const emxArray_real_T *nininmat,
                    const emxArray_real_T *eigenvalues, double dimsor,
                    const emxArray_real_T *oo, const emxArray_boolean_T *c,
                    const emxArray_real_T *ed, const emxArray_boolean_T *b_c)
{
  emxArray_real_T *r;
  const double *ed_data;
  const double *nininmat_data;
  const double *oo_data;
  double *ee_data;
  double *r1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int aux_2_2;
  int aux_3_2;
  int aux_4_2;
  int b_eigenvalues_idx_0;
  int b_loop_ub;
  int c_eigenvalues_idx_0;
  int d_eigenvalues_idx_0;
  int e_eigenvalues_idx_0;
  int eigenvalues_idx_0;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_0_0;
  int stride_0_2;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  int stride_2_0;
  int stride_2_2;
  int stride_3_0;
  int stride_3_2;
  int stride_4_0;
  int stride_4_2;
  const bool *b_c_data;
  const bool *c_data;
  c_data = b_c->data;
  ed_data = ed->data;
  b_c_data = c->data;
  oo_data = oo->data;
  nininmat_data = nininmat->data;
  emxInit_real_T(&r, 2);
  eigenvalues_idx_0 = eigenvalues->size[1];
  b_eigenvalues_idx_0 = eigenvalues->size[1];
  c_eigenvalues_idx_0 = eigenvalues->size[1];
  i = r->size[0] * r->size[1];
  r->size[0] = c_eigenvalues_idx_0;
  r->size[1] = ed->size[1];
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  loop_ub = ed->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < c_eigenvalues_idx_0; i1++) {
      r1[i1 + r->size[0] * i] = ed_data[i];
    }
  }
  c_eigenvalues_idx_0 = eigenvalues->size[1];
  d_eigenvalues_idx_0 = eigenvalues->size[1];
  i = ee->size[0] * ee->size[1] * ee->size[2];
  if (d_eigenvalues_idx_0 == 1) {
    e_eigenvalues_idx_0 = c_eigenvalues_idx_0;
  } else {
    e_eigenvalues_idx_0 = d_eigenvalues_idx_0;
  }
  if (e_eigenvalues_idx_0 == 1) {
    if (b_eigenvalues_idx_0 == 1) {
      e_eigenvalues_idx_0 = oo->size[0];
    } else {
      e_eigenvalues_idx_0 = b_eigenvalues_idx_0;
    }
    if (e_eigenvalues_idx_0 == 1) {
      ee->size[0] = eigenvalues_idx_0;
    } else if (b_eigenvalues_idx_0 == 1) {
      ee->size[0] = oo->size[0];
    } else {
      ee->size[0] = b_eigenvalues_idx_0;
    }
  } else if (d_eigenvalues_idx_0 == 1) {
    ee->size[0] = c_eigenvalues_idx_0;
  } else {
    ee->size[0] = d_eigenvalues_idx_0;
  }
  if (oo->size[1] == 1) {
    ee->size[1] = 1;
  } else {
    ee->size[1] = oo->size[1];
  }
  if ((int)dimsor == 1) {
    e_eigenvalues_idx_0 = oo->size[2];
    if (e_eigenvalues_idx_0 == 1) {
      ee->size[2] = (int)dimsor;
    } else if ((int)dimsor == 1) {
      ee->size[2] = oo->size[2];
    } else {
      ee->size[2] = (int)dimsor;
    }
  } else {
    ee->size[2] = (int)dimsor;
  }
  emxEnsureCapacity_real_T(ee, i);
  ee_data = ee->data;
  stride_0_0 = (eigenvalues_idx_0 != 1);
  stride_0_2 = ((int)dimsor != 1);
  stride_1_0 = (oo->size[0] != 1);
  stride_1_1 = (oo->size[1] != 1);
  stride_1_2 = (oo->size[2] != 1);
  stride_2_0 = (b_eigenvalues_idx_0 != 1);
  stride_2_2 = ((int)dimsor != 1);
  stride_3_0 = (c_eigenvalues_idx_0 != 1);
  stride_3_2 = ((int)dimsor != 1);
  stride_4_0 = (d_eigenvalues_idx_0 != 1);
  stride_4_2 = ((int)dimsor != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  aux_4_2 = 0;
  if ((int)dimsor == 1) {
    e_eigenvalues_idx_0 = oo->size[2];
    if (e_eigenvalues_idx_0 == 1) {
      loop_ub = (int)dimsor;
    } else if ((int)dimsor == 1) {
      loop_ub = oo->size[2];
    } else {
      loop_ub = (int)dimsor;
    }
  } else {
    loop_ub = (int)dimsor;
  }
  for (i = 0; i < loop_ub; i++) {
    aux_1_1 = 0;
    if (oo->size[1] == 1) {
      b_loop_ub = 1;
    } else {
      b_loop_ub = oo->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if (d_eigenvalues_idx_0 == 1) {
        e_eigenvalues_idx_0 = c_eigenvalues_idx_0;
      } else {
        e_eigenvalues_idx_0 = d_eigenvalues_idx_0;
      }
      if (e_eigenvalues_idx_0 == 1) {
        if (b_eigenvalues_idx_0 == 1) {
          e_eigenvalues_idx_0 = oo->size[0];
        } else {
          e_eigenvalues_idx_0 = b_eigenvalues_idx_0;
        }
        if (e_eigenvalues_idx_0 == 1) {
          e_eigenvalues_idx_0 = eigenvalues_idx_0;
        } else if (b_eigenvalues_idx_0 == 1) {
          e_eigenvalues_idx_0 = oo->size[0];
        } else {
          e_eigenvalues_idx_0 = b_eigenvalues_idx_0;
        }
      } else if (d_eigenvalues_idx_0 == 1) {
        e_eigenvalues_idx_0 = c_eigenvalues_idx_0;
      } else {
        e_eigenvalues_idx_0 = d_eigenvalues_idx_0;
      }
      for (i2 = 0; i2 < e_eigenvalues_idx_0; i2++) {
        ee_data[(i2 + ee->size[0] * i1) + ee->size[0] * ee->size[1] * i] =
            (nininmat_data[i2 * stride_0_0 + eigenvalues_idx_0 * aux_0_2] +
             oo_data[(i2 * stride_1_0 + oo->size[0] * aux_1_1) +
                     oo->size[0] * oo->size[1] * aux_1_2] *
                 (double)b_c_data[i2 * stride_2_0 +
                                  b_eigenvalues_idx_0 * aux_2_2]) +
            r1[i2 * stride_3_0 + c_eigenvalues_idx_0 * aux_3_2] *
                (double)c_data[i2 * stride_4_0 + d_eigenvalues_idx_0 * aux_4_2];
      }
      aux_1_1 += stride_1_1;
    }
    aux_4_2 += stride_4_2;
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  emxFree_real_T(&r);
}

static void mg_binary_expand_op(emxArray_real_T *nininmat,
                                const emxArray_real_T *ss,
                                const emxArray_real_T *tt, double restr,
                                const emxArray_real_T *ninin)
{
  emxArray_real_T *b_ss;
  const double *ss_data;
  const double *tt_data;
  double *b_ss_data;
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
  tt_data = tt->data;
  ss_data = ss->data;
  emxInit_real_T(&b_ss, 2);
  i = b_ss->size[0] * b_ss->size[1];
  if (tt->size[0] == 1) {
    b_ss->size[0] = ss->size[0];
  } else {
    b_ss->size[0] = tt->size[0];
  }
  if (tt->size[1] == 1) {
    b_ss->size[1] = ss->size[1];
  } else {
    b_ss->size[1] = tt->size[1];
  }
  emxEnsureCapacity_real_T(b_ss, i);
  b_ss_data = b_ss->data;
  stride_0_0 = (ss->size[0] != 1);
  stride_0_1 = (ss->size[1] != 1);
  stride_1_0 = (tt->size[0] != 1);
  stride_1_1 = (tt->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (tt->size[1] == 1) {
    loop_ub = ss->size[1];
  } else {
    loop_ub = tt->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (tt->size[0] == 1) {
      b_loop_ub = ss->size[0];
    } else {
      b_loop_ub = tt->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_ss_data[i1 + b_ss->size[0] * i] =
          ss_data[i1 * stride_0_0 + ss->size[0] * aux_0_1] +
          tt_data[i1 * stride_1_0 + tt->size[0] * aux_1_1] / restr;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  d_bsxfun(b_ss, ninin, nininmat);
  emxFree_real_T(&b_ss);
}

static void ng_binary_expand_op(emxArray_real_T *r1, const emxArray_real_T *c,
                                const emxArray_real_T *x,
                                const emxArray_real_T *r2,
                                const emxArray_real_T *ee)
{
  emxArray_real_T *b_c;
  const double *c_data;
  const double *ee_data;
  const double *r;
  const double *x_data;
  double *b_c_data;
  int aux_0_1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int aux_2_1;
  int aux_2_2;
  int aux_3_1;
  int aux_3_2;
  int b_ee;
  int b_loop_ub;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_0_2;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  int stride_2_0;
  int stride_2_1;
  int stride_2_2;
  int stride_3_0;
  int stride_3_1;
  int stride_3_2;
  ee_data = ee->data;
  r = r2->data;
  x_data = x->data;
  c_data = c->data;
  emxInit_real_T(&b_c, 3);
  i = b_c->size[0] * b_c->size[1] * b_c->size[2];
  if (ee->size[0] == 1) {
    b_ee = r2->size[0];
  } else {
    b_ee = ee->size[0];
  }
  if (b_ee == 1) {
    b_ee = x->size[0];
  } else if (ee->size[0] == 1) {
    b_ee = r2->size[0];
  } else {
    b_ee = ee->size[0];
  }
  if (b_ee == 1) {
    b_c->size[0] = c->size[0];
  } else {
    if (ee->size[0] == 1) {
      b_ee = r2->size[0];
    } else {
      b_ee = ee->size[0];
    }
    if (b_ee == 1) {
      b_c->size[0] = x->size[0];
    } else if (ee->size[0] == 1) {
      b_c->size[0] = r2->size[0];
    } else {
      b_c->size[0] = ee->size[0];
    }
  }
  if (ee->size[1] == 1) {
    b_ee = r2->size[1];
  } else {
    b_ee = ee->size[1];
  }
  if (b_ee == 1) {
    b_ee = x->size[1];
  } else if (ee->size[1] == 1) {
    b_ee = r2->size[1];
  } else {
    b_ee = ee->size[1];
  }
  if (b_ee == 1) {
    b_c->size[1] = c->size[1];
  } else {
    if (ee->size[1] == 1) {
      b_ee = r2->size[1];
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_c->size[1] = x->size[1];
    } else if (ee->size[1] == 1) {
      b_c->size[1] = r2->size[1];
    } else {
      b_c->size[1] = ee->size[1];
    }
  }
  if (ee->size[2] == 1) {
    b_ee = r2->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_ee = x->size[2];
  } else if (ee->size[2] == 1) {
    b_ee = r2->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_c->size[2] = c->size[2];
  } else {
    if (ee->size[2] == 1) {
      b_ee = r2->size[2];
    } else {
      b_ee = ee->size[2];
    }
    if (b_ee == 1) {
      b_c->size[2] = x->size[2];
    } else if (ee->size[2] == 1) {
      b_c->size[2] = r2->size[2];
    } else {
      b_c->size[2] = ee->size[2];
    }
  }
  emxEnsureCapacity_real_T(b_c, i);
  b_c_data = b_c->data;
  stride_0_0 = (c->size[0] != 1);
  stride_0_1 = (c->size[1] != 1);
  stride_0_2 = (c->size[2] != 1);
  stride_1_0 = (x->size[0] != 1);
  stride_1_1 = (x->size[1] != 1);
  stride_1_2 = (x->size[2] != 1);
  stride_2_0 = (r2->size[0] != 1);
  stride_2_1 = (r2->size[1] != 1);
  stride_2_2 = (r2->size[2] != 1);
  stride_3_0 = (ee->size[0] != 1);
  stride_3_1 = (ee->size[1] != 1);
  stride_3_2 = (ee->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  if (ee->size[2] == 1) {
    b_ee = r2->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_ee = x->size[2];
  } else if (ee->size[2] == 1) {
    b_ee = r2->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    loop_ub = c->size[2];
  } else {
    if (ee->size[2] == 1) {
      b_ee = r2->size[2];
    } else {
      b_ee = ee->size[2];
    }
    if (b_ee == 1) {
      loop_ub = x->size[2];
    } else if (ee->size[2] == 1) {
      loop_ub = r2->size[2];
    } else {
      loop_ub = ee->size[2];
    }
  }
  for (i = 0; i < loop_ub; i++) {
    aux_0_1 = 0;
    aux_1_1 = 0;
    aux_2_1 = 0;
    aux_3_1 = 0;
    if (ee->size[1] == 1) {
      b_ee = r2->size[1];
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_ee = x->size[1];
    } else if (ee->size[1] == 1) {
      b_ee = r2->size[1];
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_loop_ub = c->size[1];
    } else {
      if (ee->size[1] == 1) {
        b_ee = r2->size[1];
      } else {
        b_ee = ee->size[1];
      }
      if (b_ee == 1) {
        b_loop_ub = x->size[1];
      } else if (ee->size[1] == 1) {
        b_loop_ub = r2->size[1];
      } else {
        b_loop_ub = ee->size[1];
      }
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if (ee->size[0] == 1) {
        b_ee = r2->size[0];
      } else {
        b_ee = ee->size[0];
      }
      if (b_ee == 1) {
        b_ee = x->size[0];
      } else if (ee->size[0] == 1) {
        b_ee = r2->size[0];
      } else {
        b_ee = ee->size[0];
      }
      if (b_ee == 1) {
        b_ee = c->size[0];
      } else {
        if (ee->size[0] == 1) {
          b_ee = r2->size[0];
        } else {
          b_ee = ee->size[0];
        }
        if (b_ee == 1) {
          b_ee = x->size[0];
        } else if (ee->size[0] == 1) {
          b_ee = r2->size[0];
        } else {
          b_ee = ee->size[0];
        }
      }
      for (i2 = 0; i2 < b_ee; i2++) {
        b_c_data[(i2 + b_c->size[0] * i1) + b_c->size[0] * b_c->size[1] * i] =
            c_data[(i2 * stride_0_0 + c->size[0] * aux_0_1) +
                   c->size[0] * c->size[1] * aux_0_2] *
            (x_data[(i2 * stride_1_0 + x->size[0] * aux_1_1) +
                    x->size[0] * x->size[1] * aux_1_2] +
             r[(i2 * stride_2_0 + r2->size[0] * aux_2_1) +
               r2->size[0] * r2->size[1] * aux_2_2] /
                 ee_data[(i2 * stride_3_0 + ee->size[0] * aux_3_1) +
                         ee->size[0] * ee->size[1] * aux_3_2]);
      }
      aux_3_1 += stride_3_1;
      aux_2_1 += stride_2_1;
      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  c_sum(b_c, r1);
  emxFree_real_T(&b_c);
}

static void og_binary_expand_op(emxArray_real_T *ee, const emxArray_real_T *r3,
                                const emxArray_real_T *eigenvalues,
                                double dimsor, const emxArray_real_T *c,
                                const emxArray_boolean_T *dgtcm, double kv,
                                const emxArray_real_T *ed,
                                const emxArray_boolean_T *b_c)
{
  emxArray_real_T *r1;
  const double *b_c_data;
  const double *ed_data;
  const double *r;
  double *ee_data;
  double *r2;
  int aux_0_1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int aux_2_1;
  int aux_2_2;
  int aux_3_1;
  int aux_3_2;
  int aux_4_1;
  int aux_4_2;
  int b_eigenvalues_idx_0;
  int b_eigenvalues_idx_1;
  int b_loop_ub;
  int c_eigenvalues_idx_0;
  int c_eigenvalues_idx_1;
  int d_eigenvalues_idx_0;
  int d_eigenvalues_idx_1;
  int eigenvalues_idx_0;
  int eigenvalues_idx_1;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int loop_ub_tmp;
  int stride_0_0;
  int stride_0_1;
  int stride_0_2;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  int stride_2_0;
  int stride_2_1;
  int stride_2_2;
  int stride_3_0;
  int stride_3_1;
  int stride_3_2;
  int stride_4_0;
  int stride_4_1;
  int stride_4_2;
  const bool *c_data;
  const bool *dgtcm_data;
  c_data = b_c->data;
  ed_data = ed->data;
  dgtcm_data = dgtcm->data;
  b_c_data = c->data;
  r = r3->data;
  emxInit_real_T(&r1, 2);
  eigenvalues_idx_0 = eigenvalues->size[1];
  eigenvalues_idx_1 = eigenvalues->size[0];
  b_eigenvalues_idx_0 = eigenvalues->size[1];
  b_eigenvalues_idx_1 = eigenvalues->size[0];
  loop_ub_tmp = (int)kv;
  i = r1->size[0] * r1->size[1];
  r1->size[0] = (int)kv;
  r1->size[1] = ed->size[1];
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  loop_ub = ed->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      r2[i1 + r1->size[0] * i] = ed_data[i];
    }
  }
  loop_ub_tmp = eigenvalues->size[1];
  c_eigenvalues_idx_1 = eigenvalues->size[0];
  c_eigenvalues_idx_0 = eigenvalues->size[1];
  d_eigenvalues_idx_1 = eigenvalues->size[0];
  i = ee->size[0] * ee->size[1] * ee->size[2];
  if (c_eigenvalues_idx_0 == 1) {
    d_eigenvalues_idx_0 = loop_ub_tmp;
  } else {
    d_eigenvalues_idx_0 = c_eigenvalues_idx_0;
  }
  if (d_eigenvalues_idx_0 == 1) {
    if (b_eigenvalues_idx_0 == 1) {
      d_eigenvalues_idx_0 = c->size[0];
    } else {
      d_eigenvalues_idx_0 = b_eigenvalues_idx_0;
    }
    if (d_eigenvalues_idx_0 == 1) {
      ee->size[0] = eigenvalues_idx_0;
    } else if (b_eigenvalues_idx_0 == 1) {
      ee->size[0] = c->size[0];
    } else {
      ee->size[0] = b_eigenvalues_idx_0;
    }
  } else if (c_eigenvalues_idx_0 == 1) {
    ee->size[0] = loop_ub_tmp;
  } else {
    ee->size[0] = c_eigenvalues_idx_0;
  }
  if (d_eigenvalues_idx_1 == 1) {
    d_eigenvalues_idx_0 = c_eigenvalues_idx_1;
  } else {
    d_eigenvalues_idx_0 = d_eigenvalues_idx_1;
  }
  if (d_eigenvalues_idx_0 == 1) {
    if (b_eigenvalues_idx_1 == 1) {
      d_eigenvalues_idx_0 = c->size[1];
    } else {
      d_eigenvalues_idx_0 = b_eigenvalues_idx_1;
    }
    if (d_eigenvalues_idx_0 == 1) {
      ee->size[1] = eigenvalues_idx_1;
    } else if (b_eigenvalues_idx_1 == 1) {
      ee->size[1] = c->size[1];
    } else {
      ee->size[1] = b_eigenvalues_idx_1;
    }
  } else if (d_eigenvalues_idx_1 == 1) {
    ee->size[1] = c_eigenvalues_idx_1;
  } else {
    ee->size[1] = d_eigenvalues_idx_1;
  }
  if ((int)dimsor == 1) {
    d_eigenvalues_idx_0 = c->size[2];
    if (d_eigenvalues_idx_0 == 1) {
      ee->size[2] = (int)dimsor;
    } else if ((int)dimsor == 1) {
      ee->size[2] = c->size[2];
    } else {
      ee->size[2] = (int)dimsor;
    }
  } else {
    ee->size[2] = (int)dimsor;
  }
  emxEnsureCapacity_real_T(ee, i);
  ee_data = ee->data;
  stride_0_0 = (eigenvalues_idx_0 != 1);
  stride_0_1 = (eigenvalues_idx_1 != 1);
  stride_0_2 = ((int)dimsor != 1);
  stride_1_0 = (c->size[0] != 1);
  stride_1_1 = (c->size[1] != 1);
  stride_1_2 = (c->size[2] != 1);
  stride_2_0 = (b_eigenvalues_idx_0 != 1);
  stride_2_1 = (b_eigenvalues_idx_1 != 1);
  stride_2_2 = ((int)dimsor != 1);
  stride_3_0 = (loop_ub_tmp != 1);
  stride_3_1 = (c_eigenvalues_idx_1 != 1);
  stride_3_2 = ((int)dimsor != 1);
  stride_4_0 = (c_eigenvalues_idx_0 != 1);
  stride_4_1 = (d_eigenvalues_idx_1 != 1);
  stride_4_2 = ((int)dimsor != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  aux_4_2 = 0;
  if ((int)dimsor == 1) {
    d_eigenvalues_idx_0 = c->size[2];
    if (d_eigenvalues_idx_0 == 1) {
      loop_ub = (int)dimsor;
    } else if ((int)dimsor == 1) {
      loop_ub = c->size[2];
    } else {
      loop_ub = (int)dimsor;
    }
  } else {
    loop_ub = (int)dimsor;
  }
  for (i = 0; i < loop_ub; i++) {
    aux_0_1 = 0;
    aux_1_1 = 0;
    aux_2_1 = 0;
    aux_3_1 = 0;
    aux_4_1 = 0;
    if (d_eigenvalues_idx_1 == 1) {
      d_eigenvalues_idx_0 = c_eigenvalues_idx_1;
    } else {
      d_eigenvalues_idx_0 = d_eigenvalues_idx_1;
    }
    if (d_eigenvalues_idx_0 == 1) {
      if (b_eigenvalues_idx_1 == 1) {
        d_eigenvalues_idx_0 = c->size[1];
      } else {
        d_eigenvalues_idx_0 = b_eigenvalues_idx_1;
      }
      if (d_eigenvalues_idx_0 == 1) {
        b_loop_ub = eigenvalues_idx_1;
      } else if (b_eigenvalues_idx_1 == 1) {
        b_loop_ub = c->size[1];
      } else {
        b_loop_ub = b_eigenvalues_idx_1;
      }
    } else if (d_eigenvalues_idx_1 == 1) {
      b_loop_ub = c_eigenvalues_idx_1;
    } else {
      b_loop_ub = d_eigenvalues_idx_1;
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if (c_eigenvalues_idx_0 == 1) {
        d_eigenvalues_idx_0 = loop_ub_tmp;
      } else {
        d_eigenvalues_idx_0 = c_eigenvalues_idx_0;
      }
      if (d_eigenvalues_idx_0 == 1) {
        if (b_eigenvalues_idx_0 == 1) {
          d_eigenvalues_idx_0 = c->size[0];
        } else {
          d_eigenvalues_idx_0 = b_eigenvalues_idx_0;
        }
        if (d_eigenvalues_idx_0 == 1) {
          d_eigenvalues_idx_0 = eigenvalues_idx_0;
        } else if (b_eigenvalues_idx_0 == 1) {
          d_eigenvalues_idx_0 = c->size[0];
        } else {
          d_eigenvalues_idx_0 = b_eigenvalues_idx_0;
        }
      } else if (c_eigenvalues_idx_0 == 1) {
        d_eigenvalues_idx_0 = loop_ub_tmp;
      } else {
        d_eigenvalues_idx_0 = c_eigenvalues_idx_0;
      }
      for (i2 = 0; i2 < d_eigenvalues_idx_0; i2++) {
        ee_data[(i2 + ee->size[0] * i1) + ee->size[0] * ee->size[1] * i] =
            (r[(i2 * stride_0_0 + eigenvalues_idx_0 * aux_0_1) +
               eigenvalues_idx_0 * eigenvalues_idx_1 * aux_0_2] +
             b_c_data[(i2 * stride_1_0 + c->size[0] * aux_1_1) +
                      c->size[0] * c->size[1] * aux_1_2] *
                 (double)dgtcm_data
                     [(i2 * stride_2_0 + b_eigenvalues_idx_0 * aux_2_1) +
                      b_eigenvalues_idx_0 * b_eigenvalues_idx_1 * aux_2_2]) +
            r2[(i2 * stride_3_0 + loop_ub_tmp * aux_3_1) +
               loop_ub_tmp * c_eigenvalues_idx_1 * aux_3_2] *
                (double)
                    c_data[(i2 * stride_4_0 + c_eigenvalues_idx_0 * aux_4_1) +
                           c_eigenvalues_idx_0 * d_eigenvalues_idx_1 * aux_4_2];
      }
      aux_4_1 += stride_4_1;
      aux_3_1 += stride_3_1;
      aux_2_1 += stride_2_1;
      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }
    aux_4_2 += stride_4_2;
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  emxFree_real_T(&r1);
}

static void pg_binary_expand_op(emxArray_real_T *c,
                                const emxArray_boolean_T *dltm,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *eigenvalues,
                                double dimsor)
{
  emxArray_real_T c_dltm;
  emxArray_real_T *b_dltm;
  double *b_dltm_data;
  int b_eigenvalues[3];
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
  const bool *dgtcm_data;
  const bool *dltm_data;
  dgtcm_data = dgtcm->data;
  dltm_data = dltm->data;
  emxInit_real_T(&b_dltm, 2);
  i = b_dltm->size[0] * b_dltm->size[1];
  if (dgtcm->size[0] == 1) {
    b_dltm->size[0] = dltm->size[0];
  } else {
    b_dltm->size[0] = dgtcm->size[0];
  }
  if (dgtcm->size[1] == 1) {
    b_dltm->size[1] = dltm->size[1];
  } else {
    b_dltm->size[1] = dgtcm->size[1];
  }
  emxEnsureCapacity_real_T(b_dltm, i);
  b_dltm_data = b_dltm->data;
  stride_0_0 = (dltm->size[0] != 1);
  stride_0_1 = (dltm->size[1] != 1);
  stride_1_0 = (dgtcm->size[0] != 1);
  stride_1_1 = (dgtcm->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (dgtcm->size[1] == 1) {
    loop_ub = dltm->size[1];
  } else {
    loop_ub = dgtcm->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (dgtcm->size[0] == 1) {
      b_loop_ub = dltm->size[0];
    } else {
      b_loop_ub = dgtcm->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_dltm_data[i1 + b_dltm->size[0] * i] =
          (double)dltm_data[i1 * stride_0_0 + dltm->size[0] * aux_0_1] +
          (double)dgtcm_data[i1 * stride_1_0 + dgtcm->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  stride_0_0 = eigenvalues->size[1];
  stride_0_1 = eigenvalues->size[0];
  c_dltm = *b_dltm;
  b_eigenvalues[0] = stride_0_0;
  b_eigenvalues[1] = stride_0_1;
  b_eigenvalues[2] = (int)dimsor;
  c_dltm.size = &b_eigenvalues[0];
  c_dltm.numDimensions = 3;
  permute(&c_dltm, c);
  emxFree_real_T(&b_dltm);
}

static void rf_binary_expand_op(emxArray_real_T *c, const int outsize[2],
                                const emxArray_real_T *x,
                                const emxArray_real_T *eigenvalues,
                                const emxArray_real_T *ee)
{
  emxArray_real_T *r;
  const double *ee_data;
  const double *eigenvalues_data;
  const double *x_data;
  double *r1;
  int aux_1_1;
  int aux_1_2;
  int aux_2_1;
  int aux_3_1;
  int aux_3_2;
  int b_ee;
  int b_loop_ub;
  int b_unnamed_idx_1;
  int c_unnamed_idx_1;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  int stride_3_1;
  int stride_3_2;
  int unnamed_idx_1;
  ee_data = ee->data;
  eigenvalues_data = eigenvalues->data;
  x_data = x->data;
  emxInit_real_T(&r, 3);
  unnamed_idx_1 = outsize[1];
  b_unnamed_idx_1 = eigenvalues->size[0];
  c_unnamed_idx_1 = eigenvalues->size[0];
  i = r->size[0] * r->size[1] * r->size[2];
  r->size[0] = x->size[0];
  if (ee->size[1] == 1) {
    b_ee = b_unnamed_idx_1;
  } else {
    b_ee = ee->size[1];
  }
  if (b_ee == 1) {
    b_ee = x->size[1];
  } else if (ee->size[1] == 1) {
    b_ee = b_unnamed_idx_1;
  } else {
    b_ee = ee->size[1];
  }
  if (b_ee == 1) {
    r->size[1] = unnamed_idx_1;
  } else {
    if (ee->size[1] == 1) {
      b_ee = b_unnamed_idx_1;
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      r->size[1] = x->size[1];
    } else if (ee->size[1] == 1) {
      r->size[1] = b_unnamed_idx_1;
    } else {
      r->size[1] = ee->size[1];
    }
  }
  if (ee->size[2] == 1) {
    b_ee = 1;
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    r->size[2] = x->size[2];
  } else if (ee->size[2] == 1) {
    r->size[2] = 1;
  } else {
    r->size[2] = ee->size[2];
  }
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  stride_1_0 = (x->size[0] != 1);
  stride_1_1 = (x->size[1] != 1);
  stride_1_2 = (x->size[2] != 1);
  b_unnamed_idx_1 = (b_unnamed_idx_1 != 1);
  stride_3_1 = (ee->size[1] != 1);
  stride_3_2 = (ee->size[2] != 1);
  aux_1_2 = 0;
  aux_3_2 = 0;
  if (ee->size[2] == 1) {
    b_ee = 1;
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    loop_ub = x->size[2];
  } else if (ee->size[2] == 1) {
    loop_ub = 1;
  } else {
    loop_ub = ee->size[2];
  }
  for (i = 0; i < loop_ub; i++) {
    aux_1_1 = 0;
    aux_2_1 = 0;
    aux_3_1 = 0;
    if (ee->size[1] == 1) {
      b_ee = c_unnamed_idx_1;
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_ee = x->size[1];
    } else if (ee->size[1] == 1) {
      b_ee = c_unnamed_idx_1;
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_ee = unnamed_idx_1;
    } else {
      if (ee->size[1] == 1) {
        b_ee = c_unnamed_idx_1;
      } else {
        b_ee = ee->size[1];
      }
      if (b_ee == 1) {
        b_ee = x->size[1];
      } else if (ee->size[1] == 1) {
        b_ee = c_unnamed_idx_1;
      } else {
        b_ee = ee->size[1];
      }
    }
    for (i1 = 0; i1 < b_ee; i1++) {
      b_loop_ub = x->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        r1[(i2 + r->size[0] * i1) + r->size[0] * r->size[1] * i] =
            x_data[(i2 * stride_1_0 + x->size[0] * aux_1_1) +
                   x->size[0] * x->size[1] * aux_1_2] +
            eigenvalues_data[aux_2_1] /
                ee_data[aux_3_1 + ee->size[1] * aux_3_2];
      }
      aux_3_1 += stride_3_1;
      aux_2_1 += b_unnamed_idx_1;
      aux_1_1 += stride_1_1;
    }
    aux_3_2 += stride_3_2;
    aux_1_2 += stride_1_2;
  }
  c_sum(r, c);
  emxFree_real_T(&r);
}

static void sf_binary_expand_op(emxArray_real_T *ee,
                                const emxArray_boolean_T *dltm,
                                const emxArray_real_T *eigenvalues,
                                double dimsor, const emxArray_real_T *solmp,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *ed)
{
  emxArray_real_T *b_dgtcm;
  emxArray_real_T *b_dltm;
  emxArray_real_T *c_dltm;
  const double *ed_data;
  const double *eigenvalues_data;
  const double *solmp_data;
  double *b_dgtcm_data;
  double *b_dltm_data;
  double *c_dltm_data;
  double *ee_data;
  int aux_0_1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int aux_2_1;
  int aux_3_1;
  int aux_3_2;
  int aux_4_2;
  int aux_5_1;
  int aux_5_2;
  int b_unnamed_idx_1;
  int c_unnamed_idx_1;
  int d_unnamed_idx_1;
  int e_unnamed_idx_1;
  int eigenvalues_idx_0;
  int eigenvalues_tmp_tmp;
  int i;
  int i1;
  int loop_ub;
  int stride_0_1;
  int stride_0_2;
  int stride_1_1;
  int stride_1_2;
  int stride_3_1;
  int stride_3_2;
  int stride_4_2;
  int stride_5_1;
  int stride_5_2;
  int unnamed_idx_1;
  const bool *dgtcm_data;
  const bool *dltm_data;
  ed_data = ed->data;
  dgtcm_data = dgtcm->data;
  solmp_data = solmp->data;
  eigenvalues_data = eigenvalues->data;
  dltm_data = dltm->data;
  emxInit_real_T(&b_dltm, 2);
  eigenvalues_idx_0 = eigenvalues->size[0];
  eigenvalues_tmp_tmp = (int)dimsor;
  i = b_dltm->size[0] * b_dltm->size[1];
  b_dltm->size[0] = eigenvalues_idx_0;
  if (solmp->size[1] == 1) {
    b_dltm->size[1] = (int)dimsor;
  } else {
    b_dltm->size[1] = solmp->size[1];
  }
  emxEnsureCapacity_real_T(b_dltm, i);
  b_dltm_data = b_dltm->data;
  stride_0_1 = ((int)dimsor != 1);
  stride_1_1 = (solmp->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (solmp->size[1] == 1) {
    loop_ub = (int)dimsor;
  } else {
    loop_ub = solmp->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < eigenvalues_idx_0; i1++) {
      b_dltm_data[i1 + b_dltm->size[0] * i] =
          (double)dltm_data[i1 + eigenvalues_idx_0 * aux_0_1] *
          solmp_data[aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  emxInit_real_T(&c_dltm, 2);
  unnamed_idx_1 = eigenvalues->size[0];
  i = c_dltm->size[0] * c_dltm->size[1];
  c_dltm->size[0] = dltm->size[0];
  c_dltm->size[1] = dltm->size[1];
  emxEnsureCapacity_real_T(c_dltm, i);
  c_dltm_data = c_dltm->data;
  loop_ub = dltm->size[0] * dltm->size[1];
  for (i = 0; i < loop_ub; i++) {
    c_dltm_data[i] = !dltm_data[i];
  }
  emxInit_real_T(&b_dgtcm, 2);
  b_unnamed_idx_1 = eigenvalues->size[0];
  eigenvalues_idx_0 = eigenvalues->size[0];
  c_unnamed_idx_1 = eigenvalues->size[0];
  d_unnamed_idx_1 = eigenvalues->size[0];
  i = b_dgtcm->size[0] * b_dgtcm->size[1];
  b_dgtcm->size[0] = dgtcm->size[0];
  b_dgtcm->size[1] = dgtcm->size[1];
  emxEnsureCapacity_real_T(b_dgtcm, i);
  b_dgtcm_data = b_dgtcm->data;
  loop_ub = dgtcm->size[0] * dgtcm->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_dgtcm_data[i] = !dgtcm_data[i];
  }
  e_unnamed_idx_1 = eigenvalues->size[0];
  i = ee->size[0] * ee->size[1] * ee->size[2];
  ee->size[0] = 1;
  if (e_unnamed_idx_1 == 1) {
    loop_ub = 1;
  } else {
    loop_ub = e_unnamed_idx_1;
  }
  if (loop_ub == 1) {
    if (d_unnamed_idx_1 == 1) {
      if (eigenvalues_idx_0 == 1) {
        loop_ub = b_unnamed_idx_1;
      } else {
        loop_ub = eigenvalues_idx_0;
      }
    } else {
      loop_ub = d_unnamed_idx_1;
    }
    if (loop_ub == 1) {
      ee->size[1] = unnamed_idx_1;
    } else if (d_unnamed_idx_1 == 1) {
      if (eigenvalues_idx_0 == 1) {
        ee->size[1] = b_unnamed_idx_1;
      } else {
        ee->size[1] = eigenvalues_idx_0;
      }
    } else {
      ee->size[1] = d_unnamed_idx_1;
    }
  } else if (e_unnamed_idx_1 == 1) {
    ee->size[1] = 1;
  } else {
    ee->size[1] = e_unnamed_idx_1;
  }
  ee->size[2] = (int)dimsor;
  emxEnsureCapacity_real_T(ee, i);
  ee_data = ee->data;
  stride_0_1 = (unnamed_idx_1 != 1);
  stride_0_2 = ((int)dimsor != 1);
  stride_1_1 = (b_unnamed_idx_1 != 1);
  stride_1_2 = ((int)dimsor != 1);
  eigenvalues_idx_0 = (eigenvalues_idx_0 != 1);
  stride_3_1 = (d_unnamed_idx_1 != 1);
  stride_3_2 = ((int)dimsor != 1);
  stride_4_2 = ((int)dimsor != 1);
  stride_5_1 = (e_unnamed_idx_1 != 1);
  stride_5_2 = ((int)dimsor != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_3_2 = 0;
  aux_4_2 = 0;
  aux_5_2 = 0;
  for (i = 0; i < eigenvalues_tmp_tmp; i++) {
    aux_0_1 = 0;
    aux_1_1 = 0;
    aux_2_1 = 0;
    aux_3_1 = 0;
    aux_5_1 = 0;
    if (e_unnamed_idx_1 == 1) {
      loop_ub = 1;
    } else {
      loop_ub = e_unnamed_idx_1;
    }
    if (loop_ub == 1) {
      if (d_unnamed_idx_1 == 1) {
        if (c_unnamed_idx_1 == 1) {
          loop_ub = b_unnamed_idx_1;
        } else {
          loop_ub = c_unnamed_idx_1;
        }
      } else {
        loop_ub = d_unnamed_idx_1;
      }
      if (loop_ub == 1) {
        loop_ub = unnamed_idx_1;
      } else if (d_unnamed_idx_1 == 1) {
        if (c_unnamed_idx_1 == 1) {
          loop_ub = b_unnamed_idx_1;
        } else {
          loop_ub = c_unnamed_idx_1;
        }
      } else {
        loop_ub = d_unnamed_idx_1;
      }
    } else if (e_unnamed_idx_1 == 1) {
      loop_ub = 1;
    } else {
      loop_ub = e_unnamed_idx_1;
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      ee_data[i1 + ee->size[1] * i] =
          (b_dltm_data[aux_0_1 + unnamed_idx_1 * aux_0_2] +
           c_dltm_data[aux_1_1 + b_unnamed_idx_1 * aux_1_2] *
               eigenvalues_data[aux_2_1] *
               (double)dgtcm_data[aux_3_1 + d_unnamed_idx_1 * aux_3_2]) +
          ed_data[aux_4_2] * b_dgtcm_data[aux_5_1 + e_unnamed_idx_1 * aux_5_2];
      aux_5_1 += stride_5_1;
      aux_3_1 += stride_3_1;
      aux_2_1 += eigenvalues_idx_0;
      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }
    aux_5_2 += stride_5_2;
    aux_4_2 += stride_4_2;
    aux_3_2 += stride_3_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  emxFree_real_T(&b_dgtcm);
  emxFree_real_T(&c_dltm);
  emxFree_real_T(&b_dltm);
}

static void tf_binary_expand_op(emxArray_real_T *c,
                                const emxArray_boolean_T *dltm,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *eigenvalues,
                                double dimsor)
{
  emxArray_real_T c_dltm;
  emxArray_real_T *b_dltm;
  double *b_dltm_data;
  int b_iv[3];
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
  const bool *dgtcm_data;
  const bool *dltm_data;
  dgtcm_data = dgtcm->data;
  dltm_data = dltm->data;
  emxInit_real_T(&b_dltm, 2);
  i = b_dltm->size[0] * b_dltm->size[1];
  if (dgtcm->size[0] == 1) {
    b_dltm->size[0] = dltm->size[0];
  } else {
    b_dltm->size[0] = dgtcm->size[0];
  }
  if (dgtcm->size[1] == 1) {
    b_dltm->size[1] = dltm->size[1];
  } else {
    b_dltm->size[1] = dgtcm->size[1];
  }
  emxEnsureCapacity_real_T(b_dltm, i);
  b_dltm_data = b_dltm->data;
  stride_0_0 = (dltm->size[0] != 1);
  stride_0_1 = (dltm->size[1] != 1);
  stride_1_0 = (dgtcm->size[0] != 1);
  stride_1_1 = (dgtcm->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (dgtcm->size[1] == 1) {
    loop_ub = dltm->size[1];
  } else {
    loop_ub = dgtcm->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (dgtcm->size[0] == 1) {
      b_loop_ub = dltm->size[0];
    } else {
      b_loop_ub = dgtcm->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_dltm_data[i1 + b_dltm->size[0] * i] =
          (double)dltm_data[i1 * stride_0_0 + dltm->size[0] * aux_0_1] +
          (double)dgtcm_data[i1 * stride_1_0 + dgtcm->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  stride_0_0 = eigenvalues->size[0];
  c_dltm = *b_dltm;
  b_iv[0] = 1;
  b_iv[1] = stride_0_0;
  b_iv[2] = (int)dimsor;
  c_dltm.size = &b_iv[0];
  c_dltm.numDimensions = 3;
  b_permute(&c_dltm, c);
  emxFree_real_T(&b_dltm);
}

static void uf_binary_expand_op(emxArray_real_T *c,
                                const emxArray_boolean_T *dltm,
                                const emxArray_real_T *eigenvalues,
                                const emxArray_boolean_T *dgtcm, double restr,
                                double dimsor)
{
  emxArray_real_T c_dltm;
  emxArray_real_T *b_dltm;
  const double *eigenvalues_data;
  double *b_dltm_data;
  int b_iv[3];
  int aux_0_1;
  int aux_2_1;
  int b_unnamed_idx_0;
  int b_unnamed_idx_1;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_1_0;
  int stride_2_0;
  int stride_2_1;
  int unnamed_idx_0;
  int unnamed_idx_1;
  const bool *dgtcm_data;
  const bool *dltm_data;
  dgtcm_data = dgtcm->data;
  eigenvalues_data = eigenvalues->data;
  dltm_data = dltm->data;
  emxInit_real_T(&b_dltm, 2);
  unnamed_idx_0 = eigenvalues->size[0];
  unnamed_idx_1 = eigenvalues->size[0];
  b_unnamed_idx_0 = eigenvalues->size[0];
  i = b_dltm->size[0] * b_dltm->size[1];
  if (unnamed_idx_1 == 1) {
    b_unnamed_idx_1 = dgtcm->size[0];
  } else {
    b_unnamed_idx_1 = unnamed_idx_1;
  }
  if (b_unnamed_idx_1 == 1) {
    if (unnamed_idx_0 == 1) {
      b_dltm->size[0] = dltm->size[0];
    } else {
      b_dltm->size[0] = unnamed_idx_0;
    }
  } else if (unnamed_idx_1 == 1) {
    b_dltm->size[0] = dgtcm->size[0];
  } else {
    b_dltm->size[0] = unnamed_idx_1;
  }
  if (dgtcm->size[1] == 1) {
    b_dltm->size[1] = dltm->size[1];
  } else {
    b_dltm->size[1] = dgtcm->size[1];
  }
  emxEnsureCapacity_real_T(b_dltm, i);
  b_dltm_data = b_dltm->data;
  stride_0_0 = (dltm->size[0] != 1);
  stride_0_1 = (dltm->size[1] != 1);
  stride_1_0 = (unnamed_idx_0 != 1);
  stride_2_0 = (dgtcm->size[0] != 1);
  stride_2_1 = (dgtcm->size[1] != 1);
  unnamed_idx_1 = (unnamed_idx_1 != 1);
  aux_0_1 = 0;
  aux_2_1 = 0;
  if (dgtcm->size[1] == 1) {
    loop_ub = dltm->size[1];
  } else {
    loop_ub = dgtcm->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (b_unnamed_idx_0 == 1) {
      b_unnamed_idx_1 = dgtcm->size[0];
    } else {
      b_unnamed_idx_1 = b_unnamed_idx_0;
    }
    if (b_unnamed_idx_1 == 1) {
      if (unnamed_idx_0 == 1) {
        b_unnamed_idx_1 = dltm->size[0];
      } else {
        b_unnamed_idx_1 = unnamed_idx_0;
      }
    } else if (b_unnamed_idx_0 == 1) {
      b_unnamed_idx_1 = dgtcm->size[0];
    } else {
      b_unnamed_idx_1 = b_unnamed_idx_0;
    }
    for (i1 = 0; i1 < b_unnamed_idx_1; i1++) {
      b_dltm_data[i1 + b_dltm->size[0] * i] =
          (double)dltm_data[i1 * stride_0_0 + dltm->size[0] * aux_0_1] *
              eigenvalues_data[i1 * stride_1_0] +
          (double)dgtcm_data[i1 * stride_2_0 + dgtcm->size[0] * aux_2_1] *
              eigenvalues_data[i1 * unnamed_idx_1] / restr;
    }
    aux_2_1 += stride_2_1;
    aux_0_1 += stride_0_1;
  }
  unnamed_idx_1 = eigenvalues->size[0];
  c_dltm = *b_dltm;
  b_iv[0] = 1;
  b_iv[1] = unnamed_idx_1;
  b_iv[2] = (int)dimsor;
  c_dltm.size = &b_iv[0];
  c_dltm.numDimensions = 3;
  b_permute(&c_dltm, c);
  emxFree_real_T(&b_dltm);
}

static void vf_binary_expand_op(emxArray_real_T *oo, const emxArray_real_T *x,
                                const emxArray_real_T *c,
                                const emxArray_real_T *ee)
{
  emxArray_real_T *b_oo;
  const double *c_data;
  const double *ee_data;
  const double *x_data;
  double *b_oo_data;
  double *oo_data;
  int aux_0_1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int aux_2_1;
  int aux_2_2;
  int aux_3_1;
  int aux_3_2;
  int b_ee;
  int b_loop_ub;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_0_1;
  int stride_0_2;
  int stride_1_0;
  int stride_1_1;
  int stride_1_2;
  int stride_2_1;
  int stride_2_2;
  int stride_3_1;
  int stride_3_2;
  ee_data = ee->data;
  c_data = c->data;
  x_data = x->data;
  oo_data = oo->data;
  emxInit_real_T(&b_oo, 3);
  i = b_oo->size[0] * b_oo->size[1] * b_oo->size[2];
  b_oo->size[0] = x->size[0];
  if (ee->size[1] == 1) {
    b_ee = c->size[1];
  } else {
    b_ee = ee->size[1];
  }
  if (b_ee == 1) {
    b_ee = x->size[1];
  } else if (ee->size[1] == 1) {
    b_ee = c->size[1];
  } else {
    b_ee = ee->size[1];
  }
  if (b_ee == 1) {
    b_oo->size[1] = oo->size[1];
  } else {
    if (ee->size[1] == 1) {
      b_ee = c->size[1];
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_oo->size[1] = x->size[1];
    } else if (ee->size[1] == 1) {
      b_oo->size[1] = c->size[1];
    } else {
      b_oo->size[1] = ee->size[1];
    }
  }
  if (ee->size[2] == 1) {
    b_ee = c->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_ee = x->size[2];
  } else if (ee->size[2] == 1) {
    b_ee = c->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_oo->size[2] = oo->size[2];
  } else {
    if (ee->size[2] == 1) {
      b_ee = c->size[2];
    } else {
      b_ee = ee->size[2];
    }
    if (b_ee == 1) {
      b_oo->size[2] = x->size[2];
    } else if (ee->size[2] == 1) {
      b_oo->size[2] = c->size[2];
    } else {
      b_oo->size[2] = ee->size[2];
    }
  }
  emxEnsureCapacity_real_T(b_oo, i);
  b_oo_data = b_oo->data;
  stride_0_1 = (oo->size[1] != 1);
  stride_0_2 = (oo->size[2] != 1);
  stride_1_0 = (x->size[0] != 1);
  stride_1_1 = (x->size[1] != 1);
  stride_1_2 = (x->size[2] != 1);
  stride_2_1 = (c->size[1] != 1);
  stride_2_2 = (c->size[2] != 1);
  stride_3_1 = (ee->size[1] != 1);
  stride_3_2 = (ee->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  if (ee->size[2] == 1) {
    b_ee = c->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    b_ee = x->size[2];
  } else if (ee->size[2] == 1) {
    b_ee = c->size[2];
  } else {
    b_ee = ee->size[2];
  }
  if (b_ee == 1) {
    loop_ub = oo->size[2];
  } else {
    if (ee->size[2] == 1) {
      b_ee = c->size[2];
    } else {
      b_ee = ee->size[2];
    }
    if (b_ee == 1) {
      loop_ub = x->size[2];
    } else if (ee->size[2] == 1) {
      loop_ub = c->size[2];
    } else {
      loop_ub = ee->size[2];
    }
  }
  for (i = 0; i < loop_ub; i++) {
    aux_0_1 = 0;
    aux_1_1 = 0;
    aux_2_1 = 0;
    aux_3_1 = 0;
    if (ee->size[1] == 1) {
      b_ee = c->size[1];
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_ee = x->size[1];
    } else if (ee->size[1] == 1) {
      b_ee = c->size[1];
    } else {
      b_ee = ee->size[1];
    }
    if (b_ee == 1) {
      b_ee = oo->size[1];
    } else {
      if (ee->size[1] == 1) {
        b_ee = c->size[1];
      } else {
        b_ee = ee->size[1];
      }
      if (b_ee == 1) {
        b_ee = x->size[1];
      } else if (ee->size[1] == 1) {
        b_ee = c->size[1];
      } else {
        b_ee = ee->size[1];
      }
    }
    for (i1 = 0; i1 < b_ee; i1++) {
      b_loop_ub = x->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_oo_data[(i2 + i1) + b_oo->size[1] * i] =
            oo_data[aux_0_1 + oo->size[1] * aux_0_2] *
            (x_data[(i2 * stride_1_0 + x->size[0] * aux_1_1) +
                    x->size[0] * x->size[1] * aux_1_2] +
             c_data[aux_2_1 + c->size[1] * aux_2_2] /
                 ee_data[aux_3_1 + ee->size[1] * aux_3_2]);
      }
      aux_3_1 += stride_3_1;
      aux_2_1 += stride_2_1;
      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  i = oo->size[0] * oo->size[1] * oo->size[2];
  oo->size[0] = 1;
  oo->size[1] = b_oo->size[1];
  oo->size[2] = b_oo->size[2];
  emxEnsureCapacity_real_T(oo, i);
  oo_data = oo->data;
  loop_ub = b_oo->size[2];
  for (i = 0; i < loop_ub; i++) {
    b_ee = b_oo->size[1];
    for (i1 = 0; i1 < b_ee; i1++) {
      oo_data[i1 + oo->size[1] * i] = b_oo_data[i1 + b_oo->size[1] * i];
    }
  }
  emxFree_real_T(&b_oo);
}

static void wf_binary_expand_op(emxArray_real_T *oo, const emxArray_real_T *nis,
                                const emxArray_real_T *x,
                                const emxArray_real_T *c)
{
  emxArray_real_T *b_x;
  const double *c_data;
  const double *x_data;
  double *b_x_data;
  int aux_0_1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int b_loop_ub;
  int c_loop_ub;
  int i;
  int i1;
  int i2;
  int loop_ub;
  int stride_0_0;
  int stride_0_1;
  int stride_0_2;
  int stride_1_1;
  int stride_1_2;
  c_data = c->data;
  x_data = x->data;
  emxInit_real_T(&b_x, 3);
  i = b_x->size[0] * b_x->size[1] * b_x->size[2];
  b_x->size[0] = x->size[0];
  if (c->size[1] == 1) {
    b_x->size[1] = x->size[1];
  } else {
    b_x->size[1] = c->size[1];
  }
  if (c->size[2] == 1) {
    b_x->size[2] = x->size[2];
  } else {
    b_x->size[2] = c->size[2];
  }
  emxEnsureCapacity_real_T(b_x, i);
  b_x_data = b_x->data;
  stride_0_0 = (x->size[0] != 1);
  stride_0_1 = (x->size[1] != 1);
  stride_0_2 = (x->size[2] != 1);
  stride_1_1 = (c->size[1] != 1);
  stride_1_2 = (c->size[2] != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  if (c->size[2] == 1) {
    loop_ub = x->size[2];
  } else {
    loop_ub = c->size[2];
  }
  for (i = 0; i < loop_ub; i++) {
    aux_0_1 = 0;
    aux_1_1 = 0;
    if (c->size[1] == 1) {
      b_loop_ub = x->size[1];
    } else {
      b_loop_ub = c->size[1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      c_loop_ub = x->size[0];
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        b_x_data[(i2 + i1) + b_x->size[1] * i] =
            x_data[(i2 * stride_0_0 + x->size[0] * aux_0_1) +
                   x->size[0] * x->size[1] * aux_0_2] +
            c_data[aux_1_1 + c->size[1] * aux_1_2];
      }
      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  i_bsxfun(nis, b_x, oo);
  emxFree_real_T(&b_x);
}

static void xf_binary_expand_op(emxArray_real_T *ee, const emxArray_real_T *r3,
                                const emxArray_real_T *eigenvalues,
                                double dimsor, const emxArray_real_T *c,
                                const emxArray_boolean_T *dgtcm,
                                const emxArray_real_T *ed,
                                const emxArray_boolean_T *b_c)
{
  emxArray_real_T *r1;
  const double *b_c_data;
  const double *ed_data;
  const double *r;
  double *ee_data;
  double *r2;
  int aux_0_1;
  int aux_0_2;
  int aux_1_1;
  int aux_1_2;
  int aux_2_1;
  int aux_2_2;
  int aux_3_1;
  int aux_3_2;
  int aux_4_1;
  int aux_4_2;
  int b_unnamed_idx_1;
  int c_unnamed_idx_1;
  int d_unnamed_idx_1;
  int eigenvalues_idx_0;
  int i;
  int i1;
  int loop_ub;
  int stride_0_1;
  int stride_0_2;
  int stride_1_1;
  int stride_1_2;
  int stride_2_1;
  int stride_2_2;
  int stride_3_1;
  int stride_3_2;
  int stride_4_1;
  int stride_4_2;
  int unnamed_idx_1;
  const bool *c_data;
  const bool *dgtcm_data;
  c_data = b_c->data;
  ed_data = ed->data;
  dgtcm_data = dgtcm->data;
  b_c_data = c->data;
  r = r3->data;
  emxInit_real_T(&r1, 2);
  unnamed_idx_1 = eigenvalues->size[0];
  b_unnamed_idx_1 = eigenvalues->size[0];
  eigenvalues_idx_0 = eigenvalues->size[0];
  i = r1->size[0] * r1->size[1];
  r1->size[0] = eigenvalues_idx_0;
  r1->size[1] = ed->size[1];
  emxEnsureCapacity_real_T(r1, i);
  r2 = r1->data;
  loop_ub = ed->size[1];
  for (i = 0; i < loop_ub; i++) {
    for (i1 = 0; i1 < eigenvalues_idx_0; i1++) {
      r2[i1 + r1->size[0] * i] = ed_data[i];
    }
  }
  eigenvalues_idx_0 = eigenvalues->size[0];
  c_unnamed_idx_1 = eigenvalues->size[0];
  i = ee->size[0] * ee->size[1] * ee->size[2];
  ee->size[0] = 1;
  if (c_unnamed_idx_1 == 1) {
    d_unnamed_idx_1 = eigenvalues_idx_0;
  } else {
    d_unnamed_idx_1 = c_unnamed_idx_1;
  }
  if (d_unnamed_idx_1 == 1) {
    if (b_unnamed_idx_1 == 1) {
      d_unnamed_idx_1 = c->size[1];
    } else {
      d_unnamed_idx_1 = b_unnamed_idx_1;
    }
    if (d_unnamed_idx_1 == 1) {
      ee->size[1] = unnamed_idx_1;
    } else if (b_unnamed_idx_1 == 1) {
      ee->size[1] = c->size[1];
    } else {
      ee->size[1] = b_unnamed_idx_1;
    }
  } else if (c_unnamed_idx_1 == 1) {
    ee->size[1] = eigenvalues_idx_0;
  } else {
    ee->size[1] = c_unnamed_idx_1;
  }
  if ((int)dimsor == 1) {
    d_unnamed_idx_1 = c->size[2];
    if (d_unnamed_idx_1 == 1) {
      ee->size[2] = (int)dimsor;
    } else if ((int)dimsor == 1) {
      ee->size[2] = c->size[2];
    } else {
      ee->size[2] = (int)dimsor;
    }
  } else {
    ee->size[2] = (int)dimsor;
  }
  emxEnsureCapacity_real_T(ee, i);
  ee_data = ee->data;
  stride_0_1 = (unnamed_idx_1 != 1);
  stride_0_2 = ((int)dimsor != 1);
  stride_1_1 = (c->size[1] != 1);
  stride_1_2 = (c->size[2] != 1);
  stride_2_1 = (b_unnamed_idx_1 != 1);
  stride_2_2 = ((int)dimsor != 1);
  stride_3_1 = (eigenvalues_idx_0 != 1);
  stride_3_2 = ((int)dimsor != 1);
  stride_4_1 = (c_unnamed_idx_1 != 1);
  stride_4_2 = ((int)dimsor != 1);
  aux_0_2 = 0;
  aux_1_2 = 0;
  aux_2_2 = 0;
  aux_3_2 = 0;
  aux_4_2 = 0;
  if ((int)dimsor == 1) {
    d_unnamed_idx_1 = c->size[2];
    if (d_unnamed_idx_1 == 1) {
      loop_ub = (int)dimsor;
    } else if ((int)dimsor == 1) {
      loop_ub = c->size[2];
    } else {
      loop_ub = (int)dimsor;
    }
  } else {
    loop_ub = (int)dimsor;
  }
  for (i = 0; i < loop_ub; i++) {
    aux_0_1 = 0;
    aux_1_1 = 0;
    aux_2_1 = 0;
    aux_3_1 = 0;
    aux_4_1 = 0;
    if (c_unnamed_idx_1 == 1) {
      d_unnamed_idx_1 = eigenvalues_idx_0;
    } else {
      d_unnamed_idx_1 = c_unnamed_idx_1;
    }
    if (d_unnamed_idx_1 == 1) {
      if (b_unnamed_idx_1 == 1) {
        d_unnamed_idx_1 = c->size[1];
      } else {
        d_unnamed_idx_1 = b_unnamed_idx_1;
      }
      if (d_unnamed_idx_1 == 1) {
        d_unnamed_idx_1 = unnamed_idx_1;
      } else if (b_unnamed_idx_1 == 1) {
        d_unnamed_idx_1 = c->size[1];
      } else {
        d_unnamed_idx_1 = b_unnamed_idx_1;
      }
    } else if (c_unnamed_idx_1 == 1) {
      d_unnamed_idx_1 = eigenvalues_idx_0;
    } else {
      d_unnamed_idx_1 = c_unnamed_idx_1;
    }
    for (i1 = 0; i1 < d_unnamed_idx_1; i1++) {
      ee_data[i1 + ee->size[1] * i] =
          (r[aux_0_1 + unnamed_idx_1 * aux_0_2] +
           b_c_data[aux_1_1 + c->size[1] * aux_1_2] *
               (double)dgtcm_data[aux_2_1 + b_unnamed_idx_1 * aux_2_2]) +
          r2[aux_3_1 + eigenvalues_idx_0 * aux_3_2] *
              (double)c_data[aux_4_1 + c_unnamed_idx_1 * aux_4_2];
      aux_4_1 += stride_4_1;
      aux_3_1 += stride_3_1;
      aux_2_1 += stride_2_1;
      aux_1_1 += stride_1_1;
      aux_0_1 += stride_0_1;
    }
    aux_4_2 += stride_4_2;
    aux_3_2 += stride_3_2;
    aux_2_2 += stride_2_2;
    aux_1_2 += stride_1_2;
    aux_0_2 += stride_0_2;
  }
  emxFree_real_T(&r1);
}

static void yf_binary_expand_op(emxArray_real_T *rr, const int csz[2])
{
  emxArray_real_T *b_rr;
  double *b_rr_data;
  double *rr_data;
  int i;
  int stride_0_1;
  int unnamed_idx_1;
  rr_data = rr->data;
  emxInit_real_T(&b_rr, 2);
  unnamed_idx_1 = csz[1];
  i = b_rr->size[0] * b_rr->size[1];
  b_rr->size[0] = 1;
  if (unnamed_idx_1 == 1) {
    b_rr->size[1] = rr->size[1];
  } else {
    b_rr->size[1] = unnamed_idx_1;
  }
  emxEnsureCapacity_real_T(b_rr, i);
  b_rr_data = b_rr->data;
  stride_0_1 = (rr->size[1] != 1);
  if (unnamed_idx_1 == 1) {
    unnamed_idx_1 = rr->size[1];
  }
  for (i = 0; i < unnamed_idx_1; i++) {
    b_rr_data[i] = rr_data[i * stride_0_1];
  }
  i = rr->size[0] * rr->size[1];
  rr->size[0] = 1;
  rr->size[1] = b_rr->size[1];
  emxEnsureCapacity_real_T(rr, i);
  rr_data = rr->data;
  unnamed_idx_1 = b_rr->size[1];
  for (i = 0; i < unnamed_idx_1; i++) {
    rr_data[i] = b_rr_data[i];
  }
  emxFree_real_T(&b_rr);
}

void b_restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                  double restr, double tol, double userepmat)
{
  emxArray_boolean_T d_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T c_dltm;
  emxArray_real_T *b_dltm;
  emxArray_real_T *d;
  emxArray_real_T *dnis;
  emxArray_real_T *ed;
  emxArray_real_T *ee;
  emxArray_real_T *ninin;
  emxArray_real_T *nininmat;
  emxArray_real_T *nis;
  emxArray_real_T *oo;
  emxArray_real_T *r;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r6;
  emxArray_real_T *r7;
  emxArray_real_T *r8;
  emxArray_real_T *rr;
  emxArray_real_T *solmp;
  emxArray_real_T *ss;
  emxArray_real_T *tt;
  emxArray_real_T *x;
  double b_dv[3];
  const double *niini_data;
  double dimsor;
  double maxdnis;
  double n;
  double *b_dltm_data;
  double *d_data;
  double *dnis_data;
  double *ed_data;
  double *ee_data;
  double *eigenvalues_data;
  double *ninin_data;
  double *nininmat_data;
  double *nis_data;
  double *solmp_data;
  double *ss_data;
  double *tt_data;
  int b_eigenvalues[3];
  int c_eigenvalues[3];
  int d_eigenvalues[3];
  int e_eigenvalues[3];
  int f_eigenvalues[3];
  int h_eigenvalues[3];
  int g_eigenvalues[2];
  int acoef;
  int b_oo;
  int eigenvalues_tmp_tmp;
  int i;
  int i1;
  int ibtile;
  int k;
  int loop_ub;
  int nrows;
  unsigned int unnamed_idx_1;
  int *r5;
  bool *dgtcm_data;
  bool *dltm_data;
  niini_data = niini->data;
  eigenvalues_data = eigenvalues->data;
  emxInit_real_T(&d, 1);
  /* restreigen computes eigenvalues restriction (without Dykstra algorithm) */
  /*  */
  /* <a href="matlab: docsearchFS('restreigen')">Link to the help function</a>
   */
  /*  */
  /*    restreigen restricts the eigenvalues according to the constraint */
  /*    specified in scalar restr. This function is called in every */
  /*    concentration step of function tclust and can also be used inside */
  /*    function MixSim to generate groups with a prespecified level of */
  /*    overlapping. */
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
  /*  userepmat : use repmat, bsxfun or implicit expansion. Scalar. */
  /*              If userepmat is equal to 1, function repmat is used instead */
  /*              of bsxfun inside the procedure. Remark: repmat is built in */
  /*              from MATLAB 2013b so it is faster to use repmat if the */
  /*              current version of MATLAB is >2013a. */
  /*              If userepmat is 2, implicit expansion is used instead of */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues. */
  /*                        The ratio between two possible elements in matrix */
  /*                        out is not greater than restr */
  /*  */
  /*  See also tclust, restrdeter, tclustreg */
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
  /* <a href="matlab: docsearchFS('restreigen')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
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
  /*    out=restreigen(eigenvalues,niini,1.1) */
  /*    disp('Input matrix of unrestricted eigenvalues') */
  /*    disp(eigenvalues) */
  /*    disp('Output matrix of restricted eigenvalues') */
  /*    disp(out) */
  /*    disp('Ratio between largest and smallest unrestricted eigenvalues') */
  /*    disp(max(max(eigenvalues))/min(min(eigenvalues))) */
  /*    disp('Ratio between largest and smallest restricted eigenvalues') */
  /*    disp(max(max(out))/min(min(out))) */
  /* } */
  /*  */
  /* { */
  /*     % Second example of eigenvalue restriction. */
  /*     eigenvalues=abs(randn(3,4)); */
  /*     eigenvalues(:,3)=0; */
  /*     niini=[30;40;20;10]; */
  /*     restreigen(eigenvalues,niini,1.1) */
  /*     eigenvalues(:,3)=1; */
  /*     restreigen(eigenvalues,niini,1.1) */
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
  /*         % if MATLAB version is at least R2013b */
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
  /*         % Uncomment the line below if you want */
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
  /*  userepmat specifies if it is necessary to use function repmat or bsxfun */
  /*  Remark: repmat has become built in from Release 2013b so it is faster to
   */
  /*  use it */
  /*  Initializations */
  i = d->size[0];
  d->size[0] = eigenvalues->size[1];
  emxEnsureCapacity_real_T(d, i);
  d_data = d->data;
  loop_ub = eigenvalues->size[1];
  for (i = 0; i < loop_ub; i++) {
    d_data[i] = eigenvalues_data[i];
  }
  emxInit_real_T(&nis, 1);
  /*  Get number of variables (v) and number of clusters (k) */
  /*  Get number of units of the dataset */
  n = blockedSummation(niini, niini->size[0]);
  /*  We assume that niini is a column vector */
  /*  nis is a matrix which replicates in the columns the sizes of the goups */
  /*  First row of nis = size of first group repated v times */
  /*  Second row of nis = size of second group repated v times */
  /*  .... */
  /*  kth row of nis = size of kth group repated v times */
  i = nis->size[0];
  nis->size[0] = niini->size[0];
  emxEnsureCapacity_real_T(nis, i);
  nis_data = nis->data;
  nrows = niini->size[0];
  for (k = 0; k < nrows; k++) {
    nis_data[k] = niini_data[k];
  }
  emxInit_real_T(&ninin, 1);
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
  i = ninin->size[0];
  ninin->size[0] = eigenvalues->size[1] + eigenvalues->size[1];
  emxEnsureCapacity_real_T(ninin, i);
  ninin_data = ninin->data;
  loop_ub = eigenvalues->size[1];
  for (i = 0; i < loop_ub; i++) {
    ninin_data[i] = eigenvalues_data[i] / restr;
  }
  loop_ub = eigenvalues->size[1];
  for (i = 0; i < loop_ub; i++) {
    ninin_data[i + eigenvalues->size[1]] = eigenvalues_data[i];
  }
  emxInit_real_T(&solmp, 2);
  c_sort(ninin);
  ninin_data = ninin->data;
  /*  dimsor=length(dsor); */
  dimsor = (double)eigenvalues->size[1] * 2.0;
  /*  d1 is like dsor but contains an additional element which is larger than
   * the largest element of dsor */
  /* d1=dsor; */
  /* d1(dimsor+1)=d1(dimsor)*2; */
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
  /*  ed is a set with the middle points of these intervals */
  i = solmp->size[0] * solmp->size[1];
  solmp->size[0] = 1;
  solmp->size[1] = ninin->size[0] + 1;
  emxEnsureCapacity_real_T(solmp, i);
  solmp_data = solmp->data;
  loop_ub = ninin->size[0];
  for (i = 0; i < loop_ub; i++) {
    solmp_data[i] = ninin_data[i];
  }
  emxInit_real_T(&r, 2);
  solmp_data[ninin->size[0]] = ninin_data[(int)dimsor - 1] * 2.0;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = ninin->size[0] + 1;
  emxEnsureCapacity_real_T(r, i);
  tt_data = r->data;
  tt_data[0] = 0.0;
  loop_ub = ninin->size[0];
  for (i = 0; i < loop_ub; i++) {
    tt_data[i + 1] = ninin_data[i];
  }
  emxInit_real_T(&ed, 2);
  i = ed->size[0] * ed->size[1];
  ed->size[0] = 1;
  ed->size[1] = solmp->size[1];
  emxEnsureCapacity_real_T(ed, i);
  ed_data = ed->data;
  loop_ub = solmp->size[1];
  for (i = 0; i < loop_ub; i++) {
    ed_data[i] = (solmp_data[i] + tt_data[i]) / 2.0;
  }
  emxFree_real_T(&r);
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  ibtile = nis->size[0] - 1;
  nrows = 0;
  for (k = 0; k <= ibtile; k++) {
    if (nis_data[k] > 0.0) {
      nrows++;
    }
  }
  emxInit_real_T(&dnis, 1);
  i = dnis->size[0];
  dnis->size[0] = nrows;
  emxEnsureCapacity_real_T(dnis, i);
  dnis_data = dnis->data;
  nrows = 0;
  for (k = 0; k <= ibtile; k++) {
    if (nis_data[k] > 0.0) {
      dnis_data[nrows] = d_data[k];
      nrows++;
    }
  }
  maxdnis = b_maximum(dnis);
  emxInit_boolean_T(&dltm, 2);
  emxInit_boolean_T(&dgtcm, 2);
  emxInit_real_T(&rr, 2);
  emxInit_real_T(&ee, 3);
  emxInit_real_T(&oo, 3);
  emxInit_real_T(&ss, 2);
  emxInit_real_T(&tt, 2);
  emxInit_real_T(&nininmat, 2);
  emxInit_int32_T(&r1, 1);
  emxInit_int32_T(&r2, 2);
  emxInit_real_T(&x, 3);
  emxInit_real_T(&b_dltm, 2);
  emxInit_real_T(&r3, 3);
  emxInit_real_T(&r4, 3);
  if (userepmat == 2.0) {
    if (!(maxdnis <= tol)) {
      /*  we check if the  eigenvalues verify the restrictions */
      /*  abs here is just for computational purposes */
      if (fabs(maxdnis / b_minimum(dnis)) <= restr) {
        /*  If all eigenvalues satisy the constraint */
        /*  no further changes on the eigenvalues required, so return them
         * immediately! */
        /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
        /*  which are greater than zero */
        if (b_minimum(nis) == 0.0) {
          ibtile = nis->size[0] - 1;
          nrows = 0;
          for (k = 0; k <= ibtile; k++) {
            if (nis_data[k] == 0.0) {
              nrows++;
            }
          }
          i = r1->size[0];
          r1->size[0] = nrows;
          emxEnsureCapacity_int32_T(r1, i);
          r5 = r1->data;
          nrows = 0;
          for (k = 0; k <= ibtile; k++) {
            if (nis_data[k] == 0.0) {
              r5[nrows] = k + 1;
              nrows++;
            }
          }
          n = blockedSummation(dnis, dnis->size[0]) / (double)dnis->size[0];
          loop_ub = r1->size[0];
          for (i = 0; i < loop_ub; i++) {
            d_data[r5[i] - 1] = n;
          }
        }
        i = eigenvalues->size[0] * eigenvalues->size[1];
        eigenvalues->size[0] = 1;
        eigenvalues->size[1] = d->size[0];
        emxEnsureCapacity_real_T(eigenvalues, i);
        eigenvalues_data = eigenvalues->data;
        loop_ub = d->size[0];
        for (i = 0; i < loop_ub; i++) {
          eigenvalues_data[i] = d_data[i];
        }
      } else {
        i = ninin->size[0];
        ninin->size[0] = niini->size[0];
        emxEnsureCapacity_real_T(ninin, i);
        ninin_data = ninin->data;
        loop_ub = niini->size[0];
        for (i = 0; i < loop_ub; i++) {
          ninin_data[i] = niini_data[i] / n;
        }
        /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1,
         * ..., dimsor */
        i = dltm->size[0] * dltm->size[1];
        dltm->size[0] = d->size[0];
        dltm->size[1] = ed->size[1];
        emxEnsureCapacity_boolean_T(dltm, i);
        dltm_data = dltm->data;
        loop_ub = ed->size[1];
        for (i = 0; i < loop_ub; i++) {
          nrows = d->size[0];
          for (i1 = 0; i1 < nrows; i1++) {
            dltm_data[i1 + dltm->size[0] * i] = (d_data[i1] < ed_data[i]);
          }
        }
        i = dgtcm->size[0] * dgtcm->size[1];
        dgtcm->size[0] = d->size[0];
        dgtcm->size[1] = ed->size[1];
        emxEnsureCapacity_boolean_T(dgtcm, i);
        dgtcm_data = dgtcm->data;
        loop_ub = ed->size[1];
        for (i = 0; i < loop_ub; i++) {
          nrows = d->size[0];
          for (i1 = 0; i1 < nrows; i1++) {
            dgtcm_data[i1 + dgtcm->size[0] * i] =
                (d_data[i1] > ed_data[i] * restr);
          }
        }
        /*  Do permute and reshape just once */
        /*          ss=sum(permute(reshape(ddltm,k,v,dimsor),[1 3 2]),3); */
        /*          tt=sum(permute(reshape(ddgtcm,k,v,dimsor),[1 3 2]),3); */
        /*          % sum with a loop (less efficient) */
        /*              rrchk=zeros(v,dimsor); */
        /*              sschk=rrchk; */
        /*              ttchk=sschk; */
        /*              dltmdgtcm=dltm+dgtcm; */
        /*          for jj=1:k */
        /*              seqjj=jj:k:k*(v-1)+jj; */
        /*              rrchk(jj,:)=sum(dltmdgtcm(seqjj,:),1); */
        /*              sschk(jj,:)=sum(ddltm(seqjj,:),1); */
        /*              ttchk(jj,:)=sum(ddgtcm(seqjj,:),1); */
        /*          end */
        /*  Vector version of */
        /*  solmp=sum(niini/n.*(s(:,mp)+t(:,mp)/c))/(sum(niini/n.*(r(:,mp)))) */
        /*  Note that solmp corresponds to m* of the equation below (5.4) of */
        /*  FGM2012 */
        /*  There are dimsor values of m*. We must choose the one which is */
        /*  associated to the smallest value of the objective function */
        /*  implemented in vector obj */
        /*          if userepmat ==1 */
        /*              % nininmat=repmat(ninin,1,dimsor); */
        /*              % solmp=sum((ss+tt/c).*nininmat,1)./sum(rr.*nininmat,1);
         */
        /*              solmp=sum((ss+tt/c).*ninin,1)./sum(rr.*ninin,1); */
        /*          else */
        /*              solmp=sum(bsxfun(@times,ss+tt/c,ninin),1)./sum(bsxfun(@times,rr,ninin),1);
         */
        /*          end */
        /*  nininmat=repmat(ninin,1,dimsor); */
        /*  solmp=sum((ss+tt/c).*nininmat,1)./sum(rr.*nininmat,1); */
        if (dltm->size[0] == 1) {
          loop_ub = d->size[0];
        } else {
          loop_ub = dltm->size[0];
        }
        if (dgtcm->size[0] == 1) {
          nrows = d->size[0];
        } else {
          nrows = dgtcm->size[0];
        }
        if ((dltm->size[0] == d->size[0]) && (dgtcm->size[0] == d->size[0]) &&
            (loop_ub == nrows) && (dltm->size[1] == dgtcm->size[1])) {
          i = b_dltm->size[0] * b_dltm->size[1];
          b_dltm->size[0] = dltm->size[0];
          b_dltm->size[1] = dltm->size[1];
          emxEnsureCapacity_real_T(b_dltm, i);
          b_dltm_data = b_dltm->data;
          loop_ub = dltm->size[1];
          for (i = 0; i < loop_ub; i++) {
            nrows = dltm->size[0];
            for (i1 = 0; i1 < nrows; i1++) {
              b_dltm_data[i1 + b_dltm->size[0] * i] =
                  (double)dltm_data[i1 + dltm->size[0] * i] * d_data[i1] +
                  (double)dgtcm_data[i1 + dgtcm->size[0] * i] * d_data[i1] /
                      restr;
            }
          }
          nrows = eigenvalues->size[1];
          c_dltm = *b_dltm;
          e_eigenvalues[0] = nrows;
          e_eigenvalues[1] = 1;
          e_eigenvalues[2] = (int)dimsor;
          c_dltm.size = &e_eigenvalues[0];
          c_dltm.numDimensions = 3;
          c_permute(&c_dltm, nininmat);
          nininmat_data = nininmat->data;
        } else {
          gg_binary_expand_op(nininmat, dltm, d, dgtcm, restr, eigenvalues,
                              dimsor);
          nininmat_data = nininmat->data;
        }
        if (nininmat->size[0] == 0) {
          unnamed_idx_1 = (unsigned int)nininmat->size[1];
          nininmat->size[0] = 0;
          nininmat->size[1] = (int)unnamed_idx_1;
        }
        if ((dltm->size[0] == dgtcm->size[0]) &&
            (dltm->size[1] == dgtcm->size[1])) {
          i = b_dltm->size[0] * b_dltm->size[1];
          b_dltm->size[0] = dltm->size[0];
          b_dltm->size[1] = dltm->size[1];
          emxEnsureCapacity_real_T(b_dltm, i);
          b_dltm_data = b_dltm->data;
          loop_ub = dltm->size[0] * dltm->size[1];
          for (i = 0; i < loop_ub; i++) {
            b_dltm_data[i] = (double)dltm_data[i] + (double)dgtcm_data[i];
          }
          nrows = eigenvalues->size[1];
          c_dltm = *b_dltm;
          f_eigenvalues[0] = nrows;
          f_eigenvalues[1] = 1;
          f_eigenvalues[2] = (int)dimsor;
          c_dltm.size = &f_eigenvalues[0];
          c_dltm.numDimensions = 3;
          c_permute(&c_dltm, rr);
          dnis_data = rr->data;
        } else {
          fg_binary_expand_op(rr, dltm, dgtcm, eigenvalues, dimsor);
          dnis_data = rr->data;
        }
        if (rr->size[0] == 0) {
          unnamed_idx_1 = (unsigned int)rr->size[1];
          rr->size[0] = 0;
          rr->size[1] = (int)unnamed_idx_1;
        }
        if (nininmat->size[0] == ninin->size[0]) {
          i = b_dltm->size[0] * b_dltm->size[1];
          b_dltm->size[0] = nininmat->size[0];
          b_dltm->size[1] = nininmat->size[1];
          emxEnsureCapacity_real_T(b_dltm, i);
          b_dltm_data = b_dltm->data;
          loop_ub = nininmat->size[1];
          for (i = 0; i < loop_ub; i++) {
            nrows = nininmat->size[0];
            for (i1 = 0; i1 < nrows; i1++) {
              b_dltm_data[i1 + b_dltm->size[0] * i] =
                  nininmat_data[i1 + nininmat->size[0] * i] * ninin_data[i1];
            }
          }
          i = nininmat->size[0] * nininmat->size[1];
          nininmat->size[0] = b_dltm->size[0];
          nininmat->size[1] = b_dltm->size[1];
          emxEnsureCapacity_real_T(nininmat, i);
          nininmat_data = nininmat->data;
          loop_ub = b_dltm->size[1];
          for (i = 0; i < loop_ub; i++) {
            nrows = b_dltm->size[0];
            for (i1 = 0; i1 < nrows; i1++) {
              nininmat_data[i1 + nininmat->size[0] * i] =
                  b_dltm_data[i1 + b_dltm->size[0] * i];
            }
          }
          combineVectorElements(nininmat, solmp);
        } else {
          eg_binary_expand_op(solmp, nininmat, ninin);
        }
        if (rr->size[0] == ninin->size[0]) {
          i = b_dltm->size[0] * b_dltm->size[1];
          b_dltm->size[0] = rr->size[0];
          b_dltm->size[1] = rr->size[1];
          emxEnsureCapacity_real_T(b_dltm, i);
          b_dltm_data = b_dltm->data;
          loop_ub = rr->size[1];
          for (i = 0; i < loop_ub; i++) {
            nrows = rr->size[0];
            for (i1 = 0; i1 < nrows; i1++) {
              b_dltm_data[i1 + b_dltm->size[0] * i] =
                  dnis_data[i1 + rr->size[0] * i] * ninin_data[i1];
            }
          }
          i = rr->size[0] * rr->size[1];
          rr->size[0] = b_dltm->size[0];
          rr->size[1] = b_dltm->size[1];
          emxEnsureCapacity_real_T(rr, i);
          dnis_data = rr->data;
          loop_ub = b_dltm->size[1];
          for (i = 0; i < loop_ub; i++) {
            nrows = b_dltm->size[0];
            for (i1 = 0; i1 < nrows; i1++) {
              dnis_data[i1 + rr->size[0] * i] =
                  b_dltm_data[i1 + b_dltm->size[0] * i];
            }
          }
          combineVectorElements(rr, ed);
          ed_data = ed->data;
        } else {
          eg_binary_expand_op(ed, rr, ninin);
          ed_data = ed->data;
        }
        if (solmp->size[1] == ed->size[1]) {
          loop_ub = solmp->size[1] - 1;
          i = solmp->size[0] * solmp->size[1];
          solmp->size[0] = 1;
          emxEnsureCapacity_real_T(solmp, i);
          solmp_data = solmp->data;
          for (i = 0; i <= loop_ub; i++) {
            solmp_data[i] /= ed_data[i];
          }
        } else {
          b_rdivide(solmp, ed);
          solmp_data = solmp->data;
        }
        /*  Now find vector version of */
        /*  e =
         * solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp); */
        /*  which correponds to equation of FGM2012 which defines the */
        /*  truncated eigenvalues */
        /*  The following gets rid of the repmat, which is slow */
        /*  Find solmp*(d<solmp). This is expression is called sdlts which */
        /*  stands for "sol (d less than sol)" */
        i = dltm->size[0] * dltm->size[1];
        dltm->size[0] = d->size[0];
        dltm->size[1] = solmp->size[1];
        emxEnsureCapacity_boolean_T(dltm, i);
        dltm_data = dltm->data;
        loop_ub = solmp->size[1];
        for (i = 0; i < loop_ub; i++) {
          nrows = d->size[0];
          for (i1 = 0; i1 < nrows; i1++) {
            dltm_data[i1 + dltm->size[0] * i] = (d_data[i1] < solmp_data[i]);
          }
        }
        /* dges = reshape(dvec>=solmp,k,v,dimsor); */
        /*  cs is c*solmp */
        i = ed->size[0] * ed->size[1];
        ed->size[0] = 1;
        ed->size[1] = solmp->size[1];
        emxEnsureCapacity_real_T(ed, i);
        ed_data = ed->data;
        loop_ub = solmp->size[1];
        for (i = 0; i < loop_ub; i++) {
          ed_data[i] = solmp_data[i] * restr;
        }
        /*  less efficient code to obtain csr */
        /*  csr = reshape(bsxfun(@times,ones(k*v,1),c*soll),k,v,dimsor); */
        i = dgtcm->size[0] * dgtcm->size[1];
        dgtcm->size[0] = d->size[0];
        dgtcm->size[1] = ed->size[1];
        emxEnsureCapacity_boolean_T(dgtcm, i);
        dgtcm_data = dgtcm->data;
        loop_ub = ed->size[1];
        for (i = 0; i < loop_ub; i++) {
          nrows = d->size[0];
          for (i1 = 0; i1 < nrows; i1++) {
            dgtcm_data[i1 + dgtcm->size[0] * i] = (d_data[i1] <= ed_data[i]);
          }
        }
        /*  More efficient to use not rather than the instruction below */
        /*  dgtcs=reshape(dvec>cs,k,v,dimsor); */
        /*  Array e contains the modified eigenvalues given a particular m */
        /*  evaluted in correspondence of the dimsor points */
        /*  e =
         * solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp); */
        k = eigenvalues->size[1];
        ibtile = eigenvalues->size[1];
        acoef = eigenvalues->size[1];
        nrows = eigenvalues->size[1];
        if (k == 1) {
          k = d->size[0];
        }
        if (ibtile == 1) {
          loop_ub = d->size[0];
        } else {
          loop_ub = ibtile;
        }
        if (loop_ub == 1) {
          ibtile = eigenvalues->size[1];
        } else if (ibtile == 1) {
          ibtile = d->size[0];
        }
        if (nrows == 1) {
          loop_ub = d->size[0];
        } else {
          loop_ub = nrows;
        }
        if (acoef == 1) {
          if (loop_ub == 1) {
            acoef = eigenvalues->size[1];
          } else if (nrows == 1) {
            acoef = d->size[0];
          } else {
            acoef = nrows;
          }
        }
        if (((int)dimsor == solmp->size[1]) &&
            (d->size[0] == eigenvalues->size[1]) &&
            (k == eigenvalues->size[1]) && (eigenvalues->size[1] == ibtile) &&
            (acoef == eigenvalues->size[1])) {
          nrows = eigenvalues->size[1];
          i = b_dltm->size[0] * b_dltm->size[1];
          b_dltm->size[0] = nrows;
          b_dltm->size[1] = (int)dimsor;
          emxEnsureCapacity_real_T(b_dltm, i);
          b_dltm_data = b_dltm->data;
          loop_ub = (int)dimsor;
          for (i = 0; i < loop_ub; i++) {
            for (i1 = 0; i1 < nrows; i1++) {
              b_dltm_data[i1 + b_dltm->size[0] * i] =
                  (double)dltm_data[i1 + nrows * i] * solmp_data[i];
            }
          }
          nrows = eigenvalues->size[1];
          i = ss->size[0] * ss->size[1];
          ss->size[0] = dltm->size[0];
          ss->size[1] = dltm->size[1];
          emxEnsureCapacity_real_T(ss, i);
          ss_data = ss->data;
          loop_ub = dltm->size[0] * dltm->size[1];
          for (i = 0; i < loop_ub; i++) {
            ss_data[i] = !dltm_data[i];
          }
          k = eigenvalues->size[1];
          ibtile = eigenvalues->size[1];
          i = tt->size[0] * tt->size[1];
          tt->size[0] = dgtcm->size[0];
          tt->size[1] = dgtcm->size[1];
          emxEnsureCapacity_real_T(tt, i);
          tt_data = tt->data;
          loop_ub = dgtcm->size[0] * dgtcm->size[1];
          for (i = 0; i < loop_ub; i++) {
            tt_data[i] = !dgtcm_data[i];
          }
          acoef = eigenvalues->size[1];
          i = ee->size[0] * ee->size[1] * ee->size[2];
          ee->size[0] = nrows;
          ee->size[1] = 1;
          ee->size[2] = (int)dimsor;
          emxEnsureCapacity_real_T(ee, i);
          ee_data = ee->data;
          loop_ub = (int)dimsor;
          for (i = 0; i < loop_ub; i++) {
            for (i1 = 0; i1 < nrows; i1++) {
              ee_data[i1 + ee->size[0] * ee->size[1] * i] =
                  (b_dltm_data[i1 + nrows * i] +
                   ss_data[i1 + k * i] * d_data[i1] *
                       (double)dgtcm_data[i1 + ibtile * i]) +
                  ed_data[i] * tt_data[i1 + acoef * i];
            }
          }
        } else {
          dg_binary_expand_op(ee, dltm, eigenvalues, dimsor, solmp, d, dgtcm,
                              ed);
          ee_data = ee->data;
        }
        /*  Alternative way of computing oo */
        /*  nisn=nis/n; */
        /*  oo=nisn.*log(ee)+(nisn.*d)./ee; */
        /*  dmat=repmat(d,1,1,dimsor); */
        /*  logede=log(ee)+dmat./ee; */
        /*  nismat=repmat(nis/n,1,1,dimsor); */
        /*  oo=nismat.*logede; */
        loop_ub = nis->size[0];
        for (i = 0; i < loop_ub; i++) {
          nis_data[i] /= n;
        }
        /*  obj is a vector of size dimsor */
        /*   obj=sum(sum(oo,1)); */
        i = x->size[0] * x->size[1] * x->size[2];
        x->size[0] = ee->size[0];
        x->size[1] = ee->size[1];
        x->size[2] = ee->size[2];
        emxEnsureCapacity_real_T(x, i);
        dnis_data = x->data;
        loop_ub = ee->size[0] * ee->size[1] * ee->size[2];
        for (i = 0; i < loop_ub; i++) {
          dnis_data[i] = ee_data[i];
        }
        nrows = ee->size[0] * ee->size[2];
        for (k = 0; k < nrows; k++) {
          dnis_data[k] = log(dnis_data[k]);
        }
        if (d->size[0] == 1) {
          loop_ub = ee->size[0];
        } else {
          loop_ub = d->size[0];
        }
        if (x->size[0] == 1) {
          if (d->size[0] == 1) {
            nrows = ee->size[0];
          } else {
            nrows = d->size[0];
          }
        } else {
          nrows = x->size[0];
        }
        if ((d->size[0] == ee->size[0]) && (x->size[0] == loop_ub) &&
            (x->size[1] == ee->size[1]) && (x->size[2] == ee->size[2]) &&
            (nis->size[0] == nrows)) {
          i = oo->size[0] * oo->size[1] * oo->size[2];
          oo->size[0] = nis->size[0];
          oo->size[1] = x->size[1];
          oo->size[2] = x->size[2];
          emxEnsureCapacity_real_T(oo, i);
          ninin_data = oo->data;
          loop_ub = x->size[2];
          for (i = 0; i < loop_ub; i++) {
            nrows = x->size[1];
            for (i1 = 0; i1 < nrows; i1++) {
              ibtile = nis->size[0];
              for (acoef = 0; acoef < ibtile; acoef++) {
                ninin_data[(acoef + oo->size[0] * i1) +
                           oo->size[0] * oo->size[1] * i] =
                    nis_data[acoef] *
                    (dnis_data[(acoef + x->size[0] * i1) +
                               x->size[0] * x->size[1] * i] +
                     d_data[acoef] / ee_data[(acoef + ee->size[0] * i1) +
                                             ee->size[0] * ee->size[1] * i]);
              }
            }
          }
          i = x->size[0] * x->size[1] * x->size[2];
          x->size[0] = oo->size[0];
          x->size[1] = oo->size[1];
          x->size[2] = oo->size[2];
          emxEnsureCapacity_real_T(x, i);
          dnis_data = x->data;
          loop_ub = oo->size[2];
          for (i = 0; i < loop_ub; i++) {
            nrows = oo->size[1];
            for (i1 = 0; i1 < nrows; i1++) {
              ibtile = oo->size[0];
              for (acoef = 0; acoef < ibtile; acoef++) {
                dnis_data[(acoef + x->size[0] * i1) +
                          x->size[0] * x->size[1] * i] =
                    ninin_data[(acoef + oo->size[0] * i1) +
                               oo->size[0] * oo->size[1] * i];
              }
            }
          }
          c_sum(x, r3);
        } else {
          cg_binary_expand_op(r3, nis, x, d, ee);
        }
        d_sum(r3, r4);
        h_minimum(r4, &n, &acoef);
        /*  m is the optimum value for the eigenvalues procedure */
        n = solmp_data[acoef - 1];
        /*  plot(1:dimsor,obj) */
        /*  Based on the m value we get the restricted eigenvalues */
        /*  The new eigenvalues are equal to */
        /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
        /*  m                   if old eigenvalues < m */
        /*  cm                  if old eigenvalues > c*m */
        /*  Old inefficient code */
        /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
        ibtile = eigenvalues->size[1];
        for (k = 0; k < ibtile; k++) {
          if (eigenvalues_data[k] < n) {
            eigenvalues_data[k] = n;
          }
        }
        ibtile = eigenvalues->size[1] - 1;
        nrows = 0;
        for (k = 0; k <= ibtile; k++) {
          if (eigenvalues_data[k] > restr * n) {
            nrows++;
          }
        }
        i = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        r2->size[1] = nrows;
        emxEnsureCapacity_int32_T(r2, i);
        r5 = r2->data;
        nrows = 0;
        for (k = 0; k <= ibtile; k++) {
          if (eigenvalues_data[k] > restr * n) {
            r5[nrows] = k + 1;
            nrows++;
          }
        }
        loop_ub = r2->size[1];
        for (i = 0; i < loop_ub; i++) {
          eigenvalues_data[r5[i] - 1] = restr * solmp_data[acoef - 1];
        }
      }
    } else {
      /*  if all the eigenvalues are 0 this means all points are concentrated */
      /*  in k groups and there is a perfect fit */
      /*  no further changes on the eigenvalues required, so return them */
      /*  immediately and stop the procedure! */
    }
  } else if (!(maxdnis <= tol)) {
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    if (fabs(maxdnis / b_minimum(dnis)) <= restr) {
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      if (b_minimum(nis) == 0.0) {
        ibtile = nis->size[0] - 1;
        nrows = 0;
        for (k = 0; k <= ibtile; k++) {
          if (nis_data[k] == 0.0) {
            nrows++;
          }
        }
        i = r1->size[0];
        r1->size[0] = nrows;
        emxEnsureCapacity_int32_T(r1, i);
        r5 = r1->data;
        nrows = 0;
        for (k = 0; k <= ibtile; k++) {
          if (nis_data[k] == 0.0) {
            r5[nrows] = k + 1;
            nrows++;
          }
        }
        n = blockedSummation(dnis, dnis->size[0]) / (double)dnis->size[0];
        loop_ub = r1->size[0];
        for (i = 0; i < loop_ub; i++) {
          d_data[r5[i] - 1] = n;
        }
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = 1;
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      eigenvalues_data = eigenvalues->data;
      loop_ub = d->size[0];
      for (i = 0; i < loop_ub; i++) {
        eigenvalues_data[i] = d_data[i];
      }
    } else {
      /*  REMARK: the following exploits matrix operations for avoiding */
      /*  loops. Given that the code below is difficult to interpret we */
      /*  refer to routine restreigeneasy for a better comprehension */
      /*  of the underlying algorithm */
      i = ninin->size[0];
      ninin->size[0] = niini->size[0];
      emxEnsureCapacity_real_T(ninin, i);
      ninin_data = ninin->data;
      loop_ub = niini->size[0];
      for (i = 0; i < loop_ub; i++) {
        ninin_data[i] = niini_data[i] / n;
      }
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = d->size[0];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      dltm_data = dltm->data;
      if ((d->size[0] != 0) && (ed->size[1] != 0)) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dltm->size[0] - 1;
          for (loop_ub = 0; loop_ub <= i1; loop_ub++) {
            dltm_data[loop_ub + dltm->size[0] * k] =
                (d_data[acoef * loop_ub] < ed_data[ibtile]);
          }
        }
      }
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      ed_data = ed->data;
      loop_ub = ed->size[1] - 1;
      for (i = 0; i <= loop_ub; i++) {
        ed_data[i] *= restr;
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      dgtcm_data = dgtcm->data;
      if ((d->size[0] != 0) && (ed->size[1] != 0)) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dgtcm->size[0] - 1;
          for (loop_ub = 0; loop_ub <= i1; loop_ub++) {
            dgtcm_data[loop_ub + dgtcm->size[0] * k] =
                (d_data[acoef * loop_ub] > ed_data[ibtile]);
          }
        }
      }
      if ((dltm->size[0] == dgtcm->size[0]) &&
          (dltm->size[1] == dgtcm->size[1])) {
        i = b_dltm->size[0] * b_dltm->size[1];
        b_dltm->size[0] = dltm->size[0];
        b_dltm->size[1] = dltm->size[1];
        emxEnsureCapacity_real_T(b_dltm, i);
        b_dltm_data = b_dltm->data;
        loop_ub = dltm->size[0] * dltm->size[1];
        for (i = 0; i < loop_ub; i++) {
          b_dltm_data[i] = (double)dltm_data[i] + (double)dgtcm_data[i];
        }
        nrows = eigenvalues->size[1];
        c_dltm = *b_dltm;
        c_eigenvalues[0] = nrows;
        c_eigenvalues[1] = 1;
        c_eigenvalues[2] = (int)dimsor;
        c_dltm.size = &c_eigenvalues[0];
        c_dltm.numDimensions = 3;
        c_permute(&c_dltm, rr);
        dnis_data = rr->data;
      } else {
        fg_binary_expand_op(rr, dltm, dgtcm, eigenvalues, dimsor);
        dnis_data = rr->data;
      }
      if (rr->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)rr->size[1];
        rr->size[0] = 0;
        rr->size[1] = (int)unnamed_idx_1;
      }
      /*  Matrix version of s(:,mp)=sum(d.*(d<edmp),2) for mp=1, ..., dimsor */
      nrows = eigenvalues->size[1];
      eigenvalues_tmp_tmp = (int)dimsor;
      e_bsxfun(dltm, d, b_dltm);
      c_dltm = *b_dltm;
      b_eigenvalues[0] = nrows;
      b_eigenvalues[1] = 1;
      b_eigenvalues[2] = (int)dimsor;
      c_dltm.size = &b_eigenvalues[0];
      c_dltm.numDimensions = 3;
      c_permute(&c_dltm, ss);
      ss_data = ss->data;
      if (ss->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)ss->size[1];
        ss->size[0] = 0;
        ss->size[1] = (int)unnamed_idx_1;
      }
      /*  Matrix version of t(:,mp)=sum(d.*(d>edmpc),2) for mp=1, ..., dimsor */
      e_bsxfun(dgtcm, d, nininmat);
      nrows = eigenvalues->size[1];
      c_dltm = *nininmat;
      d_eigenvalues[0] = nrows;
      d_eigenvalues[1] = 1;
      d_eigenvalues[2] = (int)dimsor;
      c_dltm.size = &d_eigenvalues[0];
      c_dltm.numDimensions = 3;
      c_permute(&c_dltm, tt);
      tt_data = tt->data;
      if (tt->size[0] == 0) {
        unnamed_idx_1 = (unsigned int)tt->size[1];
        tt->size[0] = 0;
        tt->size[1] = (int)unnamed_idx_1;
      }
      /*  Vector version of */
      /*  solmp=sum(niini/n.*(s(:,mp)+t(:,mp)/c))/(sum(niini/n.*(r(:,mp)))) */
      /*  Note that solmp corresponds to m* of the equation below (5.4) of */
      /*  FGM2012 */
      /*  There are dimsor values of m*. We must choose the one which is */
      /*  associated to the smallest value of the objective function */
      /*  implemented in vector obj */
      if (userepmat == 1.0) {
        i = nininmat->size[0] * nininmat->size[1];
        nininmat->size[0] = ninin->size[0];
        nininmat->size[1] = (int)dimsor;
        emxEnsureCapacity_real_T(nininmat, i);
        nininmat_data = nininmat->data;
        nrows = ninin->size[0];
        for (acoef = 0; acoef < eigenvalues_tmp_tmp; acoef++) {
          ibtile = acoef * nrows;
          for (k = 0; k < nrows; k++) {
            nininmat_data[ibtile + k] = ninin_data[k];
          }
        }
        if (ss->size[0] == 1) {
          loop_ub = tt->size[0];
        } else {
          loop_ub = ss->size[0];
        }
        if (ss->size[1] == 1) {
          nrows = tt->size[1];
        } else {
          nrows = ss->size[1];
        }
        if ((ss->size[0] == tt->size[0]) && (ss->size[1] == tt->size[1]) &&
            (loop_ub == nininmat->size[0]) && (nrows == nininmat->size[1])) {
          i = b_dltm->size[0] * b_dltm->size[1];
          b_dltm->size[0] = ss->size[0];
          b_dltm->size[1] = ss->size[1];
          emxEnsureCapacity_real_T(b_dltm, i);
          b_dltm_data = b_dltm->data;
          loop_ub = ss->size[0] * ss->size[1];
          for (i = 0; i < loop_ub; i++) {
            b_dltm_data[i] =
                (ss_data[i] + tt_data[i] / restr) * nininmat_data[i];
          }
          combineVectorElements(b_dltm, solmp);
        } else {
          lg_binary_expand_op(solmp, ss, tt, restr, nininmat);
        }
        if ((rr->size[0] == nininmat->size[0]) &&
            (rr->size[1] == nininmat->size[1])) {
          i = ss->size[0] * ss->size[1];
          ss->size[0] = rr->size[0];
          ss->size[1] = rr->size[1];
          emxEnsureCapacity_real_T(ss, i);
          ss_data = ss->data;
          loop_ub = rr->size[0] * rr->size[1];
          for (i = 0; i < loop_ub; i++) {
            ss_data[i] = dnis_data[i] * nininmat_data[i];
          }
          combineVectorElements(ss, ed);
          ed_data = ed->data;
        } else {
          kg_binary_expand_op(ed, rr, nininmat);
          ed_data = ed->data;
        }
        if (solmp->size[1] == ed->size[1]) {
          loop_ub = solmp->size[1] - 1;
          i = solmp->size[0] * solmp->size[1];
          solmp->size[0] = 1;
          emxEnsureCapacity_real_T(solmp, i);
          solmp_data = solmp->data;
          for (i = 0; i <= loop_ub; i++) {
            solmp_data[i] /= ed_data[i];
          }
        } else {
          b_rdivide(solmp, ed);
          solmp_data = solmp->data;
        }
      } else {
        if ((ss->size[0] == tt->size[0]) && (ss->size[1] == tt->size[1])) {
          i = b_dltm->size[0] * b_dltm->size[1];
          b_dltm->size[0] = ss->size[0];
          b_dltm->size[1] = ss->size[1];
          emxEnsureCapacity_real_T(b_dltm, i);
          b_dltm_data = b_dltm->data;
          loop_ub = ss->size[0] * ss->size[1];
          for (i = 0; i < loop_ub; i++) {
            b_dltm_data[i] = ss_data[i] + tt_data[i] / restr;
          }
          d_bsxfun(b_dltm, ninin, nininmat);
        } else {
          mg_binary_expand_op(nininmat, ss, tt, restr, ninin);
        }
        combineVectorElements(nininmat, solmp);
        d_bsxfun(rr, ninin, b_dltm);
        combineVectorElements(b_dltm, ed);
        ed_data = ed->data;
        if (solmp->size[1] == ed->size[1]) {
          loop_ub = solmp->size[1] - 1;
          i = solmp->size[0] * solmp->size[1];
          solmp->size[0] = 1;
          emxEnsureCapacity_real_T(solmp, i);
          solmp_data = solmp->data;
          for (i = 0; i <= loop_ub; i++) {
            solmp_data[i] /= ed_data[i];
          }
        } else {
          b_rdivide(solmp, ed);
          solmp_data = solmp->data;
        }
      }
      /*  Now find vector version of */
      /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
       */
      /*  which correponds to equation of FGM2012 which defines the */
      /*  truncated eigenvalues */
      /*  The following gets rid of the repmat, which is slow */
      /*  Find solmp*(d<solmp). This is expression is called sdlts which */
      /*  stands for "sol (d less than sol)" */
      /*  d.*(d>=solmp) */
      /*  cs is c*solmp */
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = solmp->size[1];
      emxEnsureCapacity_real_T(ed, i);
      ed_data = ed->data;
      loop_ub = solmp->size[1];
      for (i = 0; i < loop_ub; i++) {
        ed_data[i] = solmp_data[i] * restr;
      }
      /*  csr is a reshaped version of cs */
      /*  less efficient code to obtain csr */
      /*  csr = reshape(bsxfun(@times,ones(k*v,1),c*soll),k,v,dimsor); */
      /*  (d<=c*solmp) */
      /*  (d>c*solmp) */
      /*  Array e contains the modified eigenvalues given a particular m */
      /*  evaluted in correspondence of the dimsor points */
      /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
       */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = d->size[0];
      dltm->size[1] = solmp->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      dltm_data = dltm->data;
      if ((d->size[0] != 0) && (solmp->size[1] != 0)) {
        nrows = (solmp->size[1] != 1);
        i = solmp->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dltm->size[0] - 1;
          for (loop_ub = 0; loop_ub <= i1; loop_ub++) {
            dltm_data[loop_ub + dltm->size[0] * k] =
                (d_data[acoef * loop_ub] < solmp_data[ibtile]);
          }
        }
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0];
      dgtcm->size[1] = solmp->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      dgtcm_data = dgtcm->data;
      if ((d->size[0] != 0) && (solmp->size[1] != 0)) {
        nrows = (solmp->size[1] != 1);
        i = solmp->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = dgtcm->size[0] - 1;
          for (loop_ub = 0; loop_ub <= i1; loop_ub++) {
            dgtcm_data[loop_ub + dgtcm->size[0] * k] =
                (d_data[acoef * loop_ub] >= solmp_data[ibtile]);
          }
        }
      }
      emxInit_boolean_T(&c, 2);
      i = c->size[0] * c->size[1];
      c->size[0] = d->size[0];
      c->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(c, i);
      dltm_data = c->data;
      if ((d->size[0] != 0) && (ed->size[1] != 0)) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = c->size[0] - 1;
          for (loop_ub = 0; loop_ub <= i1; loop_ub++) {
            dltm_data[loop_ub + c->size[0] * k] =
                (d_data[acoef * loop_ub] <= ed_data[ibtile]);
          }
        }
      }
      emxInit_boolean_T(&b_c, 2);
      i = b_c->size[0] * b_c->size[1];
      b_c->size[0] = d->size[0];
      b_c->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(b_c, i);
      dgtcm_data = b_c->data;
      if ((d->size[0] != 0) && (ed->size[1] != 0)) {
        nrows = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          ibtile = nrows * k;
          acoef = (d->size[0] != 1);
          i1 = b_c->size[0] - 1;
          for (loop_ub = 0; loop_ub <= i1; loop_ub++) {
            dgtcm_data[loop_ub + b_c->size[0] * k] =
                (d_data[acoef * loop_ub] > ed_data[ibtile]);
          }
        }
      }
      nrows = eigenvalues->size[1];
      d_dltm = *dltm;
      g_eigenvalues[0] = nrows;
      g_eigenvalues[1] = (int)dimsor;
      d_dltm.size = &g_eigenvalues[0];
      d_dltm.numDimensions = 2;
      f_bsxfun(&d_dltm, solmp, nininmat);
      nininmat_data = nininmat->data;
      nrows = eigenvalues->size[1];
      d_dltm = *dgtcm;
      h_eigenvalues[0] = nrows;
      h_eigenvalues[1] = 1;
      h_eigenvalues[2] = (int)dimsor;
      d_dltm.size = &h_eigenvalues[0];
      d_dltm.numDimensions = 3;
      j_bsxfun(&d_dltm, d, oo);
      ninin_data = oo->data;
      ibtile = eigenvalues->size[1];
      acoef = eigenvalues->size[1];
      if (oo->size[0] == 1) {
        k = eigenvalues->size[1];
      } else {
        k = oo->size[0];
      }
      if (oo->size[2] == 1) {
        b_oo = (int)dimsor;
      } else {
        b_oo = oo->size[2];
      }
      if (ibtile == 1) {
        if (oo->size[0] == 1) {
          ibtile = eigenvalues->size[1];
        } else {
          ibtile = oo->size[0];
        }
      }
      if (acoef == 1) {
        acoef = eigenvalues->size[1];
      }
      if (oo->size[1] == 1) {
        loop_ub = 1;
      } else {
        loop_ub = oo->size[1];
      }
      if ((int)dimsor == 1) {
        if (oo->size[2] == 1) {
          nrows = (int)dimsor;
        } else {
          nrows = oo->size[2];
        }
      } else {
        nrows = (int)dimsor;
      }
      if ((oo->size[0] == eigenvalues->size[1]) && (oo->size[1] == 1) &&
          (oo->size[2] == (int)dimsor) && (eigenvalues->size[1] == k) &&
          ((int)dimsor == b_oo) && (ibtile == acoef) && (loop_ub == 1) &&
          (nrows == (int)dimsor)) {
        nrows = eigenvalues->size[1];
        k = eigenvalues->size[1];
        ibtile = eigenvalues->size[1];
        i = ss->size[0] * ss->size[1];
        ss->size[0] = ibtile;
        ss->size[1] = ed->size[1];
        emxEnsureCapacity_real_T(ss, i);
        ss_data = ss->data;
        loop_ub = ed->size[1];
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < ibtile; i1++) {
            ss_data[i1 + ss->size[0] * i] = ed_data[i];
          }
        }
        ibtile = eigenvalues->size[1];
        acoef = eigenvalues->size[1];
        i = ee->size[0] * ee->size[1] * ee->size[2];
        ee->size[0] = nrows;
        ee->size[1] = 1;
        ee->size[2] = (int)dimsor;
        emxEnsureCapacity_real_T(ee, i);
        ee_data = ee->data;
        for (i = 0; i < eigenvalues_tmp_tmp; i++) {
          for (i1 = 0; i1 < nrows; i1++) {
            ee_data[i1 + ee->size[0] * ee->size[1] * i] =
                (nininmat_data[i1 + nrows * i] +
                 ninin_data[i1 + oo->size[0] * oo->size[1] * i] *
                     (double)dltm_data[i1 + k * i]) +
                ss_data[i1 + ibtile * i] * (double)dgtcm_data[i1 + acoef * i];
          }
        }
      } else {
        jg_binary_expand_op(ee, nininmat, eigenvalues, dimsor, oo, c, ed, b_c);
        ee_data = ee->data;
      }
      emxFree_boolean_T(&b_c);
      emxFree_boolean_T(&c);
      emxInit_real_T(&r6, 3);
      if (userepmat == 1.0) {
        i = oo->size[0] * oo->size[1] * oo->size[2];
        oo->size[0] = ee->size[0];
        oo->size[1] = ee->size[1];
        oo->size[2] = ee->size[2];
        emxEnsureCapacity_real_T(oo, i);
        ninin_data = oo->data;
        loop_ub = ee->size[0] * ee->size[1] * ee->size[2];
        for (i = 0; i < loop_ub; i++) {
          ninin_data[i] = ee_data[i];
        }
        nrows = ee->size[0] * ee->size[1] * ee->size[2];
        for (k = 0; k < nrows; k++) {
          ninin_data[k] = log(ninin_data[k]);
        }
        loop_ub = nis->size[0];
        for (i = 0; i < loop_ub; i++) {
          nis_data[i] /= n;
        }
        emxInit_real_T(&r7, 3);
        emxInit_real_T(&r8, 3);
        b_dv[0] = 1.0;
        b_dv[1] = 1.0;
        b_dv[2] = dimsor;
        f_repmat(nis, b_dv, r7);
        dnis_data = r7->data;
        b_dv[0] = 1.0;
        b_dv[1] = 1.0;
        b_dv[2] = dimsor;
        f_repmat(d, b_dv, r8);
        b_dltm_data = r8->data;
        if (r8->size[0] == 1) {
          i = ee->size[0];
        } else {
          i = r8->size[0];
        }
        if (r8->size[2] == 1) {
          i1 = ee->size[2];
        } else {
          i1 = r8->size[2];
        }
        if (oo->size[0] == 1) {
          if (r8->size[0] == 1) {
            k = ee->size[0];
          } else {
            k = r8->size[0];
          }
        } else {
          k = oo->size[0];
        }
        if (oo->size[2] == 1) {
          if (r8->size[2] == 1) {
            b_oo = ee->size[2];
          } else {
            b_oo = r8->size[2];
          }
        } else {
          b_oo = oo->size[2];
        }
        if ((r8->size[0] == ee->size[0]) && (r8->size[2] == ee->size[2]) &&
            (oo->size[0] == i) && (oo->size[1] == ee->size[1]) &&
            (oo->size[2] == i1) && (r7->size[0] == k) &&
            (r7->size[2] == b_oo)) {
          i = r6->size[0] * r6->size[1] * r6->size[2];
          r6->size[0] = r7->size[0];
          r6->size[1] = oo->size[1];
          r6->size[2] = r7->size[2];
          emxEnsureCapacity_real_T(r6, i);
          tt_data = r6->data;
          loop_ub = r7->size[2];
          for (i = 0; i < loop_ub; i++) {
            nrows = oo->size[1];
            for (i1 = 0; i1 < nrows; i1++) {
              ibtile = r7->size[0];
              for (acoef = 0; acoef < ibtile; acoef++) {
                tt_data[(acoef + r6->size[0] * i1) +
                        r6->size[0] * r6->size[1] * i] =
                    dnis_data[acoef + r7->size[0] * i] *
                    (ninin_data[(acoef + oo->size[0] * i1) +
                                oo->size[0] * oo->size[1] * i] +
                     b_dltm_data[acoef + r8->size[0] * i] /
                         ee_data[(acoef + ee->size[0] * i1) +
                                 ee->size[0] * ee->size[1] * i]);
              }
            }
          }
          i = ee->size[0] * ee->size[1] * ee->size[2];
          ee->size[0] = r6->size[0];
          ee->size[1] = r6->size[1];
          ee->size[2] = r6->size[2];
          emxEnsureCapacity_real_T(ee, i);
          ee_data = ee->data;
          loop_ub = r6->size[2];
          for (i = 0; i < loop_ub; i++) {
            nrows = r6->size[1];
            for (i1 = 0; i1 < nrows; i1++) {
              ibtile = r6->size[0];
              for (acoef = 0; acoef < ibtile; acoef++) {
                ee_data[(acoef + ee->size[0] * i1) +
                        ee->size[0] * ee->size[1] * i] =
                    tt_data[(acoef + r6->size[0] * i1) +
                            r6->size[0] * r6->size[1] * i];
              }
            }
          }
          i = oo->size[0] * oo->size[1] * oo->size[2];
          oo->size[0] = ee->size[0];
          oo->size[1] = ee->size[1];
          oo->size[2] = ee->size[2];
          emxEnsureCapacity_real_T(oo, i);
          ninin_data = oo->data;
          loop_ub = ee->size[0] * ee->size[1] * ee->size[2];
          for (i = 0; i < loop_ub; i++) {
            ninin_data[i] = ee_data[i];
          }
        } else {
          hg_binary_expand_op(oo, r7, r8, ee);
        }
        emxFree_real_T(&r8);
        emxFree_real_T(&r7);
      } else {
        /*  Now find vector version of o */
        /*  logede=log(ee)+bsxfun(@rdivide,d,ee); */
        /*  oo=nis/n.*(log(e)+d./e); */
        i = x->size[0] * x->size[1] * x->size[2];
        x->size[0] = ee->size[0];
        x->size[1] = ee->size[1];
        x->size[2] = ee->size[2];
        emxEnsureCapacity_real_T(x, i);
        dnis_data = x->data;
        loop_ub = ee->size[0] * ee->size[1] * ee->size[2];
        for (i = 0; i < loop_ub; i++) {
          dnis_data[i] = ee_data[i];
        }
        nrows = ee->size[0] * ee->size[1] * ee->size[2];
        for (k = 0; k < nrows; k++) {
          dnis_data[k] = log(dnis_data[k]);
        }
        i = r6->size[0] * r6->size[1] * r6->size[2];
        r6->size[0] = ee->size[0];
        r6->size[1] = ee->size[1];
        r6->size[2] = ee->size[2];
        emxEnsureCapacity_real_T(r6, i);
        tt_data = r6->data;
        loop_ub = ee->size[0] * ee->size[1] * ee->size[2];
        for (i = 0; i < loop_ub; i++) {
          tt_data[i] = 1.0 / ee_data[i];
        }
        k_bsxfun(d, r6, oo);
        ninin_data = oo->data;
        if ((x->size[0] == oo->size[0]) && (x->size[1] == oo->size[1]) &&
            (x->size[2] == oo->size[2])) {
          loop_ub = nis->size[0];
          for (i = 0; i < loop_ub; i++) {
            nis_data[i] /= n;
          }
          i = ee->size[0] * ee->size[1] * ee->size[2];
          ee->size[0] = x->size[0];
          ee->size[1] = x->size[1];
          ee->size[2] = x->size[2];
          emxEnsureCapacity_real_T(ee, i);
          ee_data = ee->data;
          loop_ub = x->size[0] * x->size[1] * x->size[2];
          for (i = 0; i < loop_ub; i++) {
            ee_data[i] = dnis_data[i] + ninin_data[i];
          }
          k_bsxfun(nis, ee, oo);
        } else {
          ig_binary_expand_op(oo, nis, n, x);
        }
      }
      emxFree_real_T(&r6);
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      c_sum(oo, r3);
      d_sum(r3, r4);
      h_minimum(r4, &n, &acoef);
      /*  m is the optimum value for the eigenvalues procedure */
      n = solmp_data[acoef - 1];
      /*  plot(1:dimsor,obj) */
      /*  Based on the m value we get the restricted eigenvalues */
      /*  The new eigenvalues are equal to */
      /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
      /*  m                   if old eigenvalues < m */
      /*  cm                  if old eigenvalues > c*m */
      /*  Old inefficient code */
      /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
      ibtile = eigenvalues->size[1];
      for (k = 0; k < ibtile; k++) {
        if (eigenvalues_data[k] < n) {
          eigenvalues_data[k] = n;
        }
      }
      ibtile = eigenvalues->size[1] - 1;
      nrows = 0;
      for (k = 0; k <= ibtile; k++) {
        if (eigenvalues_data[k] > restr * n) {
          nrows++;
        }
      }
      i = r2->size[0] * r2->size[1];
      r2->size[0] = 1;
      r2->size[1] = nrows;
      emxEnsureCapacity_int32_T(r2, i);
      r5 = r2->data;
      nrows = 0;
      for (k = 0; k <= ibtile; k++) {
        if (eigenvalues_data[k] > restr * n) {
          r5[nrows] = k + 1;
          nrows++;
        }
      }
      loop_ub = r2->size[1];
      for (i = 0; i < loop_ub; i++) {
        eigenvalues_data[r5[i] - 1] = restr * solmp_data[acoef - 1];
      }
    }
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
  }
  emxFree_real_T(&r4);
  emxFree_real_T(&r3);
  emxFree_real_T(&b_dltm);
  emxFree_real_T(&x);
  emxFree_int32_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_real_T(&nininmat);
  emxFree_real_T(&tt);
  emxFree_real_T(&ss);
  emxFree_real_T(&oo);
  emxFree_real_T(&ee);
  emxFree_real_T(&solmp);
  emxFree_real_T(&rr);
  emxFree_boolean_T(&dgtcm);
  emxFree_boolean_T(&dltm);
  emxFree_real_T(&ninin);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&nis);
  emxFree_real_T(&d);
}

void c_restreigen(emxArray_real_T *eigenvalues, const emxArray_real_T *niini,
                  double restr)
{
  emxArray_boolean_T c_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_int32_T *r10;
  emxArray_int32_T *r2;
  emxArray_int32_T *r4;
  emxArray_real_T b_d;
  emxArray_real_T *b_dltm;
  emxArray_real_T *c;
  emxArray_real_T *c_c;
  emxArray_real_T *d;
  emxArray_real_T *dnis;
  emxArray_real_T *ed;
  emxArray_real_T *ee;
  emxArray_real_T *nininmat;
  emxArray_real_T *nis;
  emxArray_real_T *r;
  emxArray_real_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *r7;
  emxArray_real_T *r8;
  emxArray_real_T *r9;
  emxArray_real_T *solmp;
  emxArray_real_T *x;
  double b_dv[3];
  const double *niini_data;
  double dimsor;
  double kv;
  double maxdnis;
  double n;
  double *b_dltm_data;
  double *c_data;
  double *d_data;
  double *dnis_data;
  double *ed_data;
  double *eigenvalues_data;
  double *nis_data;
  double *r1;
  double *solmp_data;
  int b_eigenvalues[3];
  int c_eigenvalues[3];
  int d_eigenvalues[3];
  int b_kv[2];
  int acoef;
  int b_k;
  int bcoef;
  int c_d;
  int c_k;
  int d_d;
  int eigenvalues_idx_0;
  int eigenvalues_idx_1;
  int i;
  int i1;
  int i2;
  int ibtile;
  int jtilecol;
  int k;
  int nrows;
  int ntilecols;
  int *r3;
  bool exitg1;
  bool y;
  bool *dgtcm_data;
  bool *dltm_data;
  niini_data = niini->data;
  eigenvalues_data = eigenvalues->data;
  emxInit_real_T(&d, 2);
  /* restreigen computes eigenvalues restriction (without Dykstra algorithm) */
  /*  */
  /* <a href="matlab: docsearchFS('restreigen')">Link to the help function</a>
   */
  /*  */
  /*    restreigen restricts the eigenvalues according to the constraint */
  /*    specified in scalar restr. This function is called in every */
  /*    concentration step of function tclust and can also be used inside */
  /*    function MixSim to generate groups with a prespecified level of */
  /*    overlapping. */
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
  /*  userepmat : use repmat, bsxfun or implicit expansion. Scalar. */
  /*              If userepmat is equal to 1, function repmat is used instead */
  /*              of bsxfun inside the procedure. Remark: repmat is built in */
  /*              from MATLAB 2013b so it is faster to use repmat if the */
  /*              current version of MATLAB is >2013a. */
  /*              If userepmat is 2, implicit expansion is used instead of */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues. */
  /*                        The ratio between two possible elements in matrix */
  /*                        out is not greater than restr */
  /*  */
  /*  See also tclust, restrdeter, tclustreg */
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
  /* <a href="matlab: docsearchFS('restreigen')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
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
  /*    out=restreigen(eigenvalues,niini,1.1) */
  /*    disp('Input matrix of unrestricted eigenvalues') */
  /*    disp(eigenvalues) */
  /*    disp('Output matrix of restricted eigenvalues') */
  /*    disp(out) */
  /*    disp('Ratio between largest and smallest unrestricted eigenvalues') */
  /*    disp(max(max(eigenvalues))/min(min(eigenvalues))) */
  /*    disp('Ratio between largest and smallest restricted eigenvalues') */
  /*    disp(max(max(out))/min(min(out))) */
  /* } */
  /*  */
  /* { */
  /*     % Second example of eigenvalue restriction. */
  /*     eigenvalues=abs(randn(3,4)); */
  /*     eigenvalues(:,3)=0; */
  /*     niini=[30;40;20;10]; */
  /*     restreigen(eigenvalues,niini,1.1) */
  /*     eigenvalues(:,3)=1; */
  /*     restreigen(eigenvalues,niini,1.1) */
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
  /*         % if MATLAB version is at least R2013b */
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
  /*         % Uncomment the line below if you want */
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
  /*  userepmat specifies if it is necessary to use function repmat or bsxfun */
  /*  Remark: repmat has become built in from Release 2013b so it is faster to
   */
  /*  use it */
  /*  Initializations */
  i = d->size[0] * d->size[1];
  d->size[0] = eigenvalues->size[1];
  d->size[1] = eigenvalues->size[0];
  emxEnsureCapacity_real_T(d, i);
  d_data = d->data;
  ibtile = eigenvalues->size[0];
  for (i = 0; i < ibtile; i++) {
    ntilecols = eigenvalues->size[1];
    for (i1 = 0; i1 < ntilecols; i1++) {
      d_data[i1 + d->size[0] * i] =
          eigenvalues_data[i + eigenvalues->size[0] * i1];
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
  ibtile = eigenvalues->size[0] * eigenvalues->size[1];
  for (i = 0; i < ibtile; i++) {
    dnis_data[i] = eigenvalues_data[i] / restr;
  }
  ibtile = eigenvalues->size[0] * eigenvalues->size[1];
  for (i = 0; i < ibtile; i++) {
    dnis_data[i + eigenvalues->size[0] * eigenvalues->size[1]] =
        eigenvalues_data[i];
  }
  emxInit_real_T(&solmp, 2);
  c_sort(dnis);
  dnis_data = dnis->data;
  kv = (double)eigenvalues->size[1] * (double)eigenvalues->size[0];
  /*  dimsor=length(dsor); */
  dimsor = kv * 2.0;
  /*  d1 is like dsor but contains an additional element which is larger than
   * the largest element of dsor */
  /* d1=dsor; */
  /* d1(dimsor+1)=d1(dimsor)*2; */
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
  /*  ed is a set with the middle points of these intervals */
  i = solmp->size[0] * solmp->size[1];
  solmp->size[0] = 1;
  solmp->size[1] = dnis->size[0] + 1;
  emxEnsureCapacity_real_T(solmp, i);
  solmp_data = solmp->data;
  ibtile = dnis->size[0];
  for (i = 0; i < ibtile; i++) {
    solmp_data[i] = dnis_data[i];
  }
  emxInit_real_T(&r, 2);
  solmp_data[dnis->size[0]] = dnis_data[(int)dimsor - 1] * 2.0;
  i = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = dnis->size[0] + 1;
  emxEnsureCapacity_real_T(r, i);
  r1 = r->data;
  r1[0] = 0.0;
  ibtile = dnis->size[0];
  for (i = 0; i < ibtile; i++) {
    r1[i + 1] = dnis_data[i];
  }
  emxInit_real_T(&ed, 2);
  i = ed->size[0] * ed->size[1];
  ed->size[0] = 1;
  ed->size[1] = solmp->size[1];
  emxEnsureCapacity_real_T(ed, i);
  ed_data = ed->data;
  ibtile = solmp->size[1];
  for (i = 0; i < ibtile; i++) {
    ed_data[i] = (solmp_data[i] + r1[i]) / 2.0;
  }
  emxFree_real_T(&r);
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  jtilecol = nis->size[0] * nis->size[1] - 1;
  ntilecols = 0;
  for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
    if (nis_data[ibtile] > 0.0) {
      ntilecols++;
    }
  }
  emxInit_int32_T(&r2, 1);
  i = r2->size[0];
  r2->size[0] = ntilecols;
  emxEnsureCapacity_int32_T(r2, i);
  r3 = r2->data;
  ntilecols = 0;
  for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
    if (nis_data[ibtile] > 0.0) {
      r3[ntilecols] = ibtile + 1;
      ntilecols++;
    }
  }
  i = dnis->size[0];
  dnis->size[0] = r2->size[0];
  emxEnsureCapacity_real_T(dnis, i);
  dnis_data = dnis->data;
  ibtile = r2->size[0];
  for (i = 0; i < ibtile; i++) {
    dnis_data[i] = d_data[r3[i] - 1];
  }
  maxdnis = b_maximum(dnis);
  if (!(maxdnis <= 1.0E-8)) {
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    emxInit_int32_T(&r4, 1);
    if (fabs(maxdnis / b_minimum(dnis)) <= restr) {
      emxInit_boolean_T(&dltm, 2);
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
      minimum(nis, ed);
      ed_data = ed->data;
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = 1;
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      dltm_data = dltm->data;
      ibtile = ed->size[1];
      for (i = 0; i < ibtile; i++) {
        dltm_data[i] = (ed_data[i] == 0.0);
      }
      y = (dltm->size[1] != 0);
      if (y) {
        k = 0;
        exitg1 = false;
        while ((!exitg1) && (k <= dltm->size[1] - 1)) {
          if (!dltm_data[k]) {
            y = false;
            exitg1 = true;
          } else {
            k++;
          }
        }
      }
      emxFree_boolean_T(&dltm);
      if (y) {
        jtilecol = nis->size[0] * nis->size[1] - 1;
        ntilecols = 0;
        for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
          if (nis_data[ibtile] == 0.0) {
            ntilecols++;
          }
        }
        i = r4->size[0];
        r4->size[0] = ntilecols;
        emxEnsureCapacity_int32_T(r4, i);
        r3 = r4->data;
        ntilecols = 0;
        for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
          if (nis_data[ibtile] == 0.0) {
            r3[ntilecols] = ibtile + 1;
            ntilecols++;
          }
        }
        n = blockedSummation(dnis, r2->size[0]) / (double)r2->size[0];
        ibtile = r4->size[0] - 1;
        for (i = 0; i <= ibtile; i++) {
          d_data[r3[i] - 1] = n;
        }
      }
      i = eigenvalues->size[0] * eigenvalues->size[1];
      eigenvalues->size[0] = d->size[1];
      eigenvalues->size[1] = d->size[0];
      emxEnsureCapacity_real_T(eigenvalues, i);
      eigenvalues_data = eigenvalues->data;
      ibtile = d->size[0];
      for (i = 0; i < ibtile; i++) {
        ntilecols = d->size[1];
        for (i1 = 0; i1 < ntilecols; i1++) {
          eigenvalues_data[i1 + eigenvalues->size[0] * i] =
              d_data[i + d->size[0] * i1];
        }
      }
    } else {
      emxInit_boolean_T(&dltm, 2);
      /*  REMARK: the following exploits matrix operations for avoiding */
      /*  loops. Given that the code below is difficult to interpret we */
      /*  refer to routine restreigeneasy for a better comprehension */
      /*  of the underlying algorithm */
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = d->size[0] * d->size[1];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      dltm_data = dltm->data;
      if ((d->size[0] * d->size[1] != 0) && (ed->size[1] != 0)) {
        ntilecols = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dltm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm_data[b_k + dltm->size[0] * k] =
                (d_data[ibtile * b_k] < ed_data[nrows]);
          }
        }
      }
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      emxEnsureCapacity_real_T(ed, i);
      ed_data = ed->data;
      ibtile = ed->size[1] - 1;
      for (i = 0; i <= ibtile; i++) {
        ed_data[i] *= restr;
      }
      emxInit_boolean_T(&dgtcm, 2);
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0] * d->size[1];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      dgtcm_data = dgtcm->data;
      if ((d->size[0] * d->size[1] != 0) && (ed->size[1] != 0)) {
        ntilecols = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm_data[b_k + dgtcm->size[0] * k] =
                (d_data[ibtile * b_k] > ed_data[nrows]);
          }
        }
      }
      /*  Matrix version of s(:,mp)=sum(d.*(d<edmp),2) for mp=1, ..., dimsor */
      /*  Matrix version of t(:,mp)=sum(d.*(d>edmpc),2) for mp=1, ..., dimsor */
      /*  Vector version of */
      /*  solmp=sum(niini/n.*(s(:,mp)+t(:,mp)/c))/(sum(niini/n.*(r(:,mp)))) */
      /*  Note that solmp corresponds to m* of the equation below (5.4) of */
      /*  FGM2012 */
      /*  There are dimsor values of m*. We must choose the one which is */
      /*  associated to the smallest value of the objective function */
      /*  implemented in vector obj */
      i = dnis->size[0];
      dnis->size[0] = niini->size[0];
      emxEnsureCapacity_real_T(dnis, i);
      dnis_data = dnis->data;
      ibtile = niini->size[0];
      for (i = 0; i < ibtile; i++) {
        dnis_data[i] = niini_data[i] / n;
      }
      emxInit_real_T(&nininmat, 2);
      i = nininmat->size[0] * nininmat->size[1];
      nininmat->size[0] = dnis->size[0];
      ntilecols = (int)dimsor;
      nininmat->size[1] = (int)dimsor;
      emxEnsureCapacity_real_T(nininmat, i);
      ed_data = nininmat->data;
      nrows = dnis->size[0];
      for (jtilecol = 0; jtilecol < ntilecols; jtilecol++) {
        ibtile = jtilecol * nrows;
        for (k = 0; k < nrows; k++) {
          ed_data[ibtile + k] = dnis_data[k];
        }
      }
      emxInit_real_T(&c, 3);
      emxInit_real_T(&b_dltm, 2);
      emxInit_real_T(&r5, 2);
      emxInit_real_T(&r6, 3);
      ntilecols = d->size[0] * d->size[1];
      eigenvalues_idx_0 = eigenvalues->size[1];
      eigenvalues_idx_1 = eigenvalues->size[0];
      b_d = *d;
      c_d = ntilecols;
      b_d.size = &c_d;
      b_d.numDimensions = 1;
      e_bsxfun(dltm, &b_d, r5);
      b_d = *r5;
      b_eigenvalues[0] = eigenvalues_idx_0;
      b_eigenvalues[1] = eigenvalues_idx_1;
      b_eigenvalues[2] = (int)dimsor;
      b_d.size = &b_eigenvalues[0];
      b_d.numDimensions = 3;
      permute(&b_d, r6);
      b_sum(r6, b_dltm);
      b_dltm_data = b_dltm->data;
      ntilecols = d->size[0] * d->size[1];
      eigenvalues_idx_0 = eigenvalues->size[1];
      eigenvalues_idx_1 = eigenvalues->size[0];
      b_d = *d;
      d_d = ntilecols;
      b_d.size = &d_d;
      b_d.numDimensions = 1;
      e_bsxfun(dgtcm, &b_d, r5);
      b_d = *r5;
      c_eigenvalues[0] = eigenvalues_idx_0;
      c_eigenvalues[1] = eigenvalues_idx_1;
      c_eigenvalues[2] = (int)dimsor;
      b_d.size = &c_eigenvalues[0];
      b_d.numDimensions = 3;
      permute(&b_d, c);
      b_sum(c, r5);
      r1 = r5->data;
      if (b_dltm->size[0] == 1) {
        bcoef = r5->size[0];
      } else {
        bcoef = b_dltm->size[0];
      }
      if (b_dltm->size[1] == 1) {
        k = r5->size[1];
      } else {
        k = b_dltm->size[1];
      }
      if ((b_dltm->size[0] == r5->size[0]) &&
          (b_dltm->size[1] == r5->size[1]) && (bcoef == nininmat->size[0]) &&
          (k == nininmat->size[1])) {
        emxInit_real_T(&r7, 2);
        i = r7->size[0] * r7->size[1];
        r7->size[0] = b_dltm->size[0];
        r7->size[1] = b_dltm->size[1];
        emxEnsureCapacity_real_T(r7, i);
        dnis_data = r7->data;
        ibtile = b_dltm->size[0] * b_dltm->size[1];
        for (i = 0; i < ibtile; i++) {
          dnis_data[i] = (b_dltm_data[i] + r1[i] / restr) * ed_data[i];
        }
        combineVectorElements(r7, solmp);
        emxFree_real_T(&r7);
      } else {
        lg_binary_expand_op(solmp, b_dltm, r5, restr, nininmat);
      }
      if ((dltm->size[0] == dgtcm->size[0]) &&
          (dltm->size[1] == dgtcm->size[1])) {
        i = b_dltm->size[0] * b_dltm->size[1];
        b_dltm->size[0] = dltm->size[0];
        b_dltm->size[1] = dltm->size[1];
        emxEnsureCapacity_real_T(b_dltm, i);
        b_dltm_data = b_dltm->data;
        ibtile = dltm->size[0] * dltm->size[1];
        for (i = 0; i < ibtile; i++) {
          b_dltm_data[i] = (double)dltm_data[i] + (double)dgtcm_data[i];
        }
        eigenvalues_idx_0 = eigenvalues->size[1];
        eigenvalues_idx_1 = eigenvalues->size[0];
        b_d = *b_dltm;
        d_eigenvalues[0] = eigenvalues_idx_0;
        d_eigenvalues[1] = eigenvalues_idx_1;
        d_eigenvalues[2] = (int)dimsor;
        b_d.size = &d_eigenvalues[0];
        b_d.numDimensions = 3;
        permute(&b_d, c);
      } else {
        pg_binary_expand_op(c, dltm, dgtcm, eigenvalues, dimsor);
      }
      b_sum(c, b_dltm);
      b_dltm_data = b_dltm->data;
      if ((b_dltm->size[0] == nininmat->size[0]) &&
          (b_dltm->size[1] == nininmat->size[1])) {
        i = r5->size[0] * r5->size[1];
        r5->size[0] = b_dltm->size[0];
        r5->size[1] = b_dltm->size[1];
        emxEnsureCapacity_real_T(r5, i);
        r1 = r5->data;
        ibtile = b_dltm->size[0] * b_dltm->size[1];
        for (i = 0; i < ibtile; i++) {
          r1[i] = b_dltm_data[i] * ed_data[i];
        }
        combineVectorElements(r5, ed);
        ed_data = ed->data;
      } else {
        kg_binary_expand_op(ed, b_dltm, nininmat);
        ed_data = ed->data;
      }
      emxFree_real_T(&nininmat);
      if (solmp->size[1] == ed->size[1]) {
        ibtile = solmp->size[1] - 1;
        i = solmp->size[0] * solmp->size[1];
        solmp->size[0] = 1;
        emxEnsureCapacity_real_T(solmp, i);
        solmp_data = solmp->data;
        for (i = 0; i <= ibtile; i++) {
          solmp_data[i] /= ed_data[i];
        }
      } else {
        b_rdivide(solmp, ed);
        solmp_data = solmp->data;
      }
      /*  Now find vector version of */
      /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
       */
      /*  which correponds to equation of FGM2012 which defines the */
      /*  truncated eigenvalues */
      /*  The following gets rid of the repmat, which is slow */
      /*  Find solmp*(d<solmp). This is expression is called sdlts which */
      /*  stands for "sol (d less than sol)" */
      /*  d.*(d>=solmp) */
      /*  cs is c*solmp */
      i = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = solmp->size[1];
      emxEnsureCapacity_real_T(ed, i);
      ed_data = ed->data;
      ibtile = solmp->size[1];
      for (i = 0; i < ibtile; i++) {
        ed_data[i] = solmp_data[i] * restr;
      }
      /*  csr is a reshaped version of cs */
      /*  less efficient code to obtain csr */
      /*  csr = reshape(bsxfun(@times,ones(k*v,1),c*soll),k,v,dimsor); */
      /*  (d<=c*solmp) */
      /*  (d>c*solmp) */
      /*  Array e contains the modified eigenvalues given a particular m */
      /*  evaluted in correspondence of the dimsor points */
      /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
       */
      i = dltm->size[0] * dltm->size[1];
      dltm->size[0] = d->size[0] * d->size[1];
      dltm->size[1] = solmp->size[1];
      emxEnsureCapacity_boolean_T(dltm, i);
      dltm_data = dltm->data;
      if ((d->size[0] * d->size[1] != 0) && (solmp->size[1] != 0)) {
        ntilecols = (solmp->size[1] != 1);
        i = solmp->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dltm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm_data[b_k + dltm->size[0] * k] =
                (d_data[ibtile * b_k] < solmp_data[nrows]);
          }
        }
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0] * d->size[1];
      dgtcm->size[1] = solmp->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      dgtcm_data = dgtcm->data;
      if ((d->size[0] * d->size[1] != 0) && (solmp->size[1] != 0)) {
        ntilecols = (solmp->size[1] != 1);
        i = solmp->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm_data[b_k + dgtcm->size[0] * k] =
                (d_data[ibtile * b_k] >= solmp_data[nrows]);
          }
        }
      }
      i = c->size[0] * c->size[1] * c->size[2];
      nrows = d->size[0];
      ibtile = eigenvalues->size[1];
      if (nrows <= ibtile) {
        ibtile = nrows;
      }
      if (d->size[0] == 1) {
        c->size[0] = eigenvalues->size[1];
      } else if (eigenvalues->size[1] == 1) {
        c->size[0] = d->size[0];
      } else if (d->size[0] == eigenvalues->size[1]) {
        c->size[0] = eigenvalues->size[1];
      } else {
        c->size[0] = ibtile;
      }
      nrows = d->size[1];
      ibtile = eigenvalues->size[0];
      if (nrows <= ibtile) {
        ibtile = nrows;
      }
      if (d->size[1] == 1) {
        c->size[1] = eigenvalues->size[0];
      } else if (eigenvalues->size[0] == 1) {
        c->size[1] = d->size[1];
      } else if (eigenvalues->size[0] == d->size[1]) {
        c->size[1] = eigenvalues->size[0];
      } else {
        c->size[1] = ibtile;
      }
      c->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(c, i);
      c_data = c->data;
      nrows = d->size[0];
      ibtile = eigenvalues->size[1];
      if (nrows <= ibtile) {
        ibtile = nrows;
      }
      nrows = d->size[1];
      ntilecols = eigenvalues->size[0];
      if (nrows <= ntilecols) {
        ntilecols = nrows;
      }
      if (d->size[0] == 1) {
        ibtile = eigenvalues->size[1];
      } else if (eigenvalues->size[1] == 1) {
        ibtile = d->size[0];
      } else if (d->size[0] == eigenvalues->size[1]) {
        ibtile = eigenvalues->size[1];
      }
      if (d->size[1] == 1) {
        ntilecols = eigenvalues->size[0];
      } else if (eigenvalues->size[0] == 1) {
        ntilecols = d->size[1];
      } else if (eigenvalues->size[0] == d->size[1]) {
        ntilecols = eigenvalues->size[0];
      }
      if ((ibtile != 0) && (ntilecols != 0)) {
        i = (int)dimsor - 1;
        for (k = 0; k <= i; k++) {
          ibtile = (eigenvalues->size[0] != 1);
          ntilecols = (d->size[1] != 1);
          i1 = c->size[1] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            nrows = ibtile * b_k;
            jtilecol = ntilecols * b_k;
            acoef = (eigenvalues->size[1] != 1);
            bcoef = (d->size[0] != 1);
            i2 = c->size[0] - 1;
            if (0 <= c->size[0] - 1) {
              eigenvalues_idx_0 = eigenvalues->size[1];
              eigenvalues_idx_1 = eigenvalues->size[0];
            }
            for (c_k = 0; c_k <= i2; c_k++) {
              c_data[(c_k + c->size[0] * b_k) + c->size[0] * c->size[1] * k] =
                  (double)
                      dgtcm_data[(acoef * c_k + eigenvalues_idx_0 * nrows) +
                                 eigenvalues_idx_0 * eigenvalues_idx_1 * k] *
                  d_data[bcoef * c_k + d->size[0] * jtilecol];
            }
          }
        }
      }
      i = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = d->size[0] * d->size[1];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, i);
      dgtcm_data = dgtcm->data;
      if ((d->size[0] * d->size[1] != 0) && (ed->size[1] != 0)) {
        ntilecols = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = dgtcm->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dgtcm_data[b_k + dgtcm->size[0] * k] =
                (d_data[ibtile * b_k] <= ed_data[nrows]);
          }
        }
      }
      emxInit_boolean_T(&b_c, 2);
      i = b_c->size[0] * b_c->size[1];
      b_c->size[0] = d->size[0] * d->size[1];
      b_c->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(b_c, i);
      dltm_data = b_c->data;
      if ((d->size[0] * d->size[1] != 0) && (ed->size[1] != 0)) {
        ntilecols = (ed->size[1] != 1);
        i = ed->size[1] - 1;
        for (k = 0; k <= i; k++) {
          nrows = ntilecols * k;
          ibtile = (d->size[0] * d->size[1] != 1);
          i1 = b_c->size[0] - 1;
          for (b_k = 0; b_k <= i1; b_k++) {
            dltm_data[b_k + b_c->size[0] * k] =
                (d_data[ibtile * b_k] > ed_data[nrows]);
          }
        }
      }
      acoef = (int)kv;
      c_dltm = *dltm;
      b_kv[0] = (int)kv;
      b_kv[1] = (int)dimsor;
      c_dltm.size = &b_kv[0];
      c_dltm.numDimensions = 2;
      f_bsxfun(&c_dltm, solmp, b_dltm);
      b_dltm_data = b_dltm->data;
      ntilecols = eigenvalues->size[1];
      nrows = eigenvalues->size[1];
      ibtile = eigenvalues->size[0];
      jtilecol = eigenvalues->size[0];
      emxFree_boolean_T(&dltm);
      emxInit_real_T(&ee, 3);
      if (c->size[0] == 1) {
        bcoef = eigenvalues->size[1];
      } else {
        bcoef = c->size[0];
      }
      if (c->size[1] == 1) {
        k = eigenvalues->size[0];
      } else {
        k = c->size[1];
      }
      if (c->size[2] == 1) {
        eigenvalues_idx_0 = (int)dimsor;
      } else {
        eigenvalues_idx_0 = c->size[2];
      }
      if (ntilecols == 1) {
        if (c->size[0] == 1) {
          ntilecols = eigenvalues->size[1];
        } else {
          ntilecols = c->size[0];
        }
      }
      if (nrows == 1) {
        nrows = eigenvalues->size[1];
      }
      if (ibtile == 1) {
        if (c->size[1] == 1) {
          ibtile = eigenvalues->size[0];
        } else {
          ibtile = c->size[1];
        }
      }
      if (jtilecol == 1) {
        jtilecol = eigenvalues->size[0];
      }
      if ((int)dimsor == 1) {
        if (c->size[2] == 1) {
          eigenvalues_idx_1 = (int)dimsor;
        } else {
          eigenvalues_idx_1 = c->size[2];
        }
      } else {
        eigenvalues_idx_1 = (int)dimsor;
      }
      if ((c->size[0] == eigenvalues->size[1]) &&
          (eigenvalues->size[0] == c->size[1]) && (c->size[2] == (int)dimsor) &&
          (eigenvalues->size[1] == bcoef) && (eigenvalues->size[0] == k) &&
          ((int)dimsor == eigenvalues_idx_0) && (ntilecols == nrows) &&
          (ibtile == jtilecol) && (eigenvalues_idx_1 == (int)dimsor)) {
        eigenvalues_idx_0 = eigenvalues->size[1];
        eigenvalues_idx_1 = eigenvalues->size[0];
        i = r5->size[0] * r5->size[1];
        r5->size[0] = (int)kv;
        r5->size[1] = ed->size[1];
        emxEnsureCapacity_real_T(r5, i);
        r1 = r5->data;
        ibtile = ed->size[1];
        for (i = 0; i < ibtile; i++) {
          for (i1 = 0; i1 < acoef; i1++) {
            r1[i1 + r5->size[0] * i] = ed_data[i];
          }
        }
        i = ee->size[0] * ee->size[1] * ee->size[2];
        ee->size[0] = eigenvalues_idx_0;
        ee->size[1] = eigenvalues_idx_1;
        ee->size[2] = (int)dimsor;
        emxEnsureCapacity_real_T(ee, i);
        ed_data = ee->data;
        ntilecols = eigenvalues_idx_0 * eigenvalues_idx_1 * (int)dimsor;
        for (i = 0; i < ntilecols; i++) {
          ed_data[i] = (b_dltm_data[i] + c_data[i] * (double)dgtcm_data[i]) +
                       r1[i] * (double)dltm_data[i];
        }
      } else {
        og_binary_expand_op(ee, b_dltm, eigenvalues, dimsor, c, dgtcm, kv, ed,
                            b_c);
        ed_data = ee->data;
      }
      emxFree_real_T(&r5);
      emxFree_boolean_T(&b_c);
      emxFree_boolean_T(&dgtcm);
      emxInit_real_T(&x, 3);
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      i = x->size[0] * x->size[1] * x->size[2];
      x->size[0] = ee->size[0];
      x->size[1] = ee->size[1];
      x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(x, i);
      d_data = x->data;
      ibtile = ee->size[0] * ee->size[1] * ee->size[2];
      for (i = 0; i < ibtile; i++) {
        d_data[i] = ed_data[i];
      }
      ntilecols = ee->size[0] * ee->size[1] * ee->size[2];
      for (k = 0; k < ntilecols; k++) {
        d_data[k] = log(d_data[k]);
      }
      i = b_dltm->size[0] * b_dltm->size[1];
      b_dltm->size[0] = nis->size[0];
      b_dltm->size[1] = nis->size[1];
      emxEnsureCapacity_real_T(b_dltm, i);
      b_dltm_data = b_dltm->data;
      ibtile = nis->size[0] * nis->size[1];
      for (i = 0; i < ibtile; i++) {
        b_dltm_data[i] = nis_data[i] / n;
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      c_repmat(b_dltm, b_dv, c);
      c_data = c->data;
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      c_repmat(d, b_dv, r6);
      r1 = r6->data;
      emxFree_real_T(&b_dltm);
      emxInit_real_T(&r8, 3);
      if (r6->size[0] == 1) {
        i = ee->size[0];
      } else {
        i = r6->size[0];
      }
      if (r6->size[1] == 1) {
        i1 = ee->size[1];
      } else {
        i1 = r6->size[1];
      }
      if (r6->size[2] == 1) {
        i2 = ee->size[2];
      } else {
        i2 = r6->size[2];
      }
      if (x->size[0] == 1) {
        if (r6->size[0] == 1) {
          bcoef = ee->size[0];
        } else {
          bcoef = r6->size[0];
        }
      } else {
        bcoef = x->size[0];
      }
      if (x->size[1] == 1) {
        if (r6->size[1] == 1) {
          k = ee->size[1];
        } else {
          k = r6->size[1];
        }
      } else {
        k = x->size[1];
      }
      if (x->size[2] == 1) {
        if (r6->size[2] == 1) {
          eigenvalues_idx_0 = ee->size[2];
        } else {
          eigenvalues_idx_0 = r6->size[2];
        }
      } else {
        eigenvalues_idx_0 = x->size[2];
      }
      if ((r6->size[0] == ee->size[0]) && (r6->size[1] == ee->size[1]) &&
          (r6->size[2] == ee->size[2]) && (x->size[0] == i) &&
          (x->size[1] == i1) && (x->size[2] == i2) && (c->size[0] == bcoef) &&
          (c->size[1] == k) && (c->size[2] == eigenvalues_idx_0)) {
        emxInit_real_T(&c_c, 3);
        i = c_c->size[0] * c_c->size[1] * c_c->size[2];
        c_c->size[0] = c->size[0];
        c_c->size[1] = c->size[1];
        c_c->size[2] = c->size[2];
        emxEnsureCapacity_real_T(c_c, i);
        dnis_data = c_c->data;
        ibtile = c->size[0] * c->size[1] * c->size[2];
        for (i = 0; i < ibtile; i++) {
          dnis_data[i] = c_data[i] * (d_data[i] + r1[i] / ed_data[i]);
        }
        c_sum(c_c, r8);
        emxFree_real_T(&c_c);
      } else {
        ng_binary_expand_op(r8, c, x, r6, ee);
      }
      emxFree_real_T(&r6);
      emxFree_real_T(&x);
      emxFree_real_T(&c);
      emxFree_real_T(&ee);
      emxInit_real_T(&r9, 3);
      d_sum(r8, r9);
      h_minimum(r9, &n, &nrows);
      /*  m is the optimum value for the eigenvalues procedure */
      n = solmp_data[nrows - 1];
      /*  plot(1:dimsor,obj) */
      /*  Based on the m value we get the restricted eigenvalues */
      /*  The new eigenvalues are equal to */
      /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
      /*  m                   if old eigenvalues < m */
      /*  cm                  if old eigenvalues > c*m */
      /*  Old inefficient code */
      /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
      jtilecol = eigenvalues->size[0] * eigenvalues->size[1] - 1;
      ntilecols = 0;
      emxFree_real_T(&r9);
      emxFree_real_T(&r8);
      for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
        if (eigenvalues_data[ibtile] < n) {
          ntilecols++;
        }
      }
      i = r4->size[0];
      r4->size[0] = ntilecols;
      emxEnsureCapacity_int32_T(r4, i);
      r3 = r4->data;
      ntilecols = 0;
      for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
        if (eigenvalues_data[ibtile] < n) {
          r3[ntilecols] = ibtile + 1;
          ntilecols++;
        }
      }
      ibtile = r4->size[0];
      for (i = 0; i < ibtile; i++) {
        eigenvalues_data[r3[i] - 1] = n;
      }
      jtilecol = eigenvalues->size[0] * eigenvalues->size[1] - 1;
      ntilecols = 0;
      for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
        if (eigenvalues_data[ibtile] > restr * n) {
          ntilecols++;
        }
      }
      emxInit_int32_T(&r10, 1);
      i = r10->size[0];
      r10->size[0] = ntilecols;
      emxEnsureCapacity_int32_T(r10, i);
      r3 = r10->data;
      ntilecols = 0;
      for (ibtile = 0; ibtile <= jtilecol; ibtile++) {
        if (eigenvalues_data[ibtile] > restr * n) {
          r3[ntilecols] = ibtile + 1;
          ntilecols++;
        }
      }
      ibtile = r10->size[0];
      for (i = 0; i < ibtile; i++) {
        eigenvalues_data[r3[i] - 1] = restr * solmp_data[nrows - 1];
      }
      emxFree_int32_T(&r10);
    }
    emxFree_int32_T(&r4);
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
  }
  emxFree_int32_T(&r2);
  emxFree_real_T(&solmp);
  emxFree_real_T(&dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&nis);
  emxFree_real_T(&d);
}

void restreigen(emxArray_real_T *eigenvalues, double restr, double tol,
                double userepmat)
{
  emxArray_boolean_T e_dltm;
  emxArray_boolean_T *b_c;
  emxArray_boolean_T *dgtcm;
  emxArray_boolean_T *dltm;
  emxArray_int32_T *r;
  emxArray_real_T d_dltm;
  emxArray_real_T *b_dltm;
  emxArray_real_T *b_dnis;
  emxArray_real_T *b_oo;
  emxArray_real_T *b_x;
  emxArray_real_T *c;
  emxArray_real_T *c_dltm;
  emxArray_real_T *ed;
  emxArray_real_T *ee;
  emxArray_real_T *nis;
  emxArray_real_T *oo;
  emxArray_real_T *r1;
  emxArray_real_T *rr;
  emxArray_real_T *solmp;
  emxArray_real_T *x;
  double b_dv[3];
  double dimsor;
  double maxdnis;
  double *c_data;
  double *ed_data;
  double *ee_data;
  double *eigenvalues_data;
  double *nis_data;
  double *oo_data;
  double *rr_data;
  double *solmp_data;
  int b_iv[3];
  int iv1[3];
  int iv2[3];
  int iv3[3];
  int iv4[3];
  int b_eigenvalues[2];
  int csz[2];
  int outsize[2];
  int acoef;
  int b_acoef;
  int b_bcoef;
  int b_i;
  int b_k;
  int bcoef;
  int dnis;
  int i;
  int k;
  int loop_ub;
  int varargin_3;
  int *r2;
  bool *dgtcm_data;
  bool *dltm_data;
  eigenvalues_data = eigenvalues->data;
  emxInit_real_T(&nis, 2);
  /* restreigen computes eigenvalues restriction (without Dykstra algorithm) */
  /*  */
  /* <a href="matlab: docsearchFS('restreigen')">Link to the help function</a>
   */
  /*  */
  /*    restreigen restricts the eigenvalues according to the constraint */
  /*    specified in scalar restr. This function is called in every */
  /*    concentration step of function tclust and can also be used inside */
  /*    function MixSim to generate groups with a prespecified level of */
  /*    overlapping. */
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
  /*  userepmat : use repmat, bsxfun or implicit expansion. Scalar. */
  /*              If userepmat is equal to 1, function repmat is used instead */
  /*              of bsxfun inside the procedure. Remark: repmat is built in */
  /*              from MATLAB 2013b so it is faster to use repmat if the */
  /*              current version of MATLAB is >2013a. */
  /*              If userepmat is 2, implicit expansion is used instead of */
  /*              bsxfun. Note that implicit expansion has been introduced only
   */
  /*              in 2017a therefore it will not work with previous releases. */
  /*                Example - 'userepmat',1 */
  /*                Data Types - double */
  /*  */
  /*   Output: */
  /*  */
  /*             out      : Restricted eigenvalues. Matrix. v-by-k matrix */
  /*                        containing restricted eigenvalues. */
  /*                        The ratio between two possible elements in matrix */
  /*                        out is not greater than restr */
  /*  */
  /*  See also tclust, restrdeter, tclustreg */
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
  /* <a href="matlab: docsearchFS('restreigen')">Link to the help function</a>
   */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /*  */
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
  /*    out=restreigen(eigenvalues,niini,1.1) */
  /*    disp('Input matrix of unrestricted eigenvalues') */
  /*    disp(eigenvalues) */
  /*    disp('Output matrix of restricted eigenvalues') */
  /*    disp(out) */
  /*    disp('Ratio between largest and smallest unrestricted eigenvalues') */
  /*    disp(max(max(eigenvalues))/min(min(eigenvalues))) */
  /*    disp('Ratio between largest and smallest restricted eigenvalues') */
  /*    disp(max(max(out))/min(min(out))) */
  /* } */
  /*  */
  /* { */
  /*     % Second example of eigenvalue restriction. */
  /*     eigenvalues=abs(randn(3,4)); */
  /*     eigenvalues(:,3)=0; */
  /*     niini=[30;40;20;10]; */
  /*     restreigen(eigenvalues,niini,1.1) */
  /*     eigenvalues(:,3)=1; */
  /*     restreigen(eigenvalues,niini,1.1) */
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
  /*         % if MATLAB version is at least R2013b */
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
  /*         % Uncomment the line below if you want */
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
  /*  userepmat specifies if it is necessary to use function repmat or bsxfun */
  /*  Remark: repmat has become built in from Release 2013b so it is faster to
   */
  /*  use it */
  /*  Initializations */
  /*  Get number of variables (v) and number of clusters (k) */
  /*  Get number of units of the dataset */
  /*  We assume that niini is a column vector */
  /*  nis is a matrix which replicates in the columns the sizes of the goups */
  /*  First row of nis = size of first group repated v times */
  /*  Second row of nis = size of second group repated v times */
  /*  .... */
  /*  kth row of nis = size of kth group repated v times */
  outsize[1] = eigenvalues->size[0];
  dnis = nis->size[0] * nis->size[1];
  nis->size[0] = 1;
  nis->size[1] = outsize[1];
  emxEnsureCapacity_real_T(nis, dnis);
  nis_data = nis->data;
  loop_ub = outsize[1];
  for (dnis = 0; dnis < loop_ub; dnis++) {
    nis_data[dnis] = 1.0;
  }
  emxInit_real_T(&x, 1);
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
  dnis = x->size[0];
  x->size[0] = eigenvalues->size[0] + eigenvalues->size[0];
  emxEnsureCapacity_real_T(x, dnis);
  ed_data = x->data;
  loop_ub = eigenvalues->size[0];
  for (dnis = 0; dnis < loop_ub; dnis++) {
    ed_data[dnis] = eigenvalues_data[dnis] / restr;
  }
  loop_ub = eigenvalues->size[0];
  for (dnis = 0; dnis < loop_ub; dnis++) {
    ed_data[dnis + eigenvalues->size[0]] = eigenvalues_data[dnis];
  }
  emxInit_real_T(&rr, 2);
  c_sort(x);
  ed_data = x->data;
  /*  dimsor=length(dsor); */
  dimsor = (double)eigenvalues->size[0] * 2.0;
  /*  d1 is like dsor but contains an additional element which is larger than
   * the largest element of dsor */
  /* d1=dsor; */
  /* d1(dimsor+1)=d1(dimsor)*2; */
  /*  d2 is like dsor but contains an additional element which smaller than the
   * smallest element of dsor */
  /*  ed is a set with the middle points of these intervals */
  dnis = rr->size[0] * rr->size[1];
  rr->size[0] = 1;
  rr->size[1] = x->size[0] + 1;
  emxEnsureCapacity_real_T(rr, dnis);
  rr_data = rr->data;
  loop_ub = x->size[0];
  for (dnis = 0; dnis < loop_ub; dnis++) {
    rr_data[dnis] = ed_data[dnis];
  }
  emxInit_real_T(&solmp, 2);
  rr_data[x->size[0]] = ed_data[(int)dimsor - 1] * 2.0;
  dnis = solmp->size[0] * solmp->size[1];
  solmp->size[0] = 1;
  solmp->size[1] = x->size[0] + 1;
  emxEnsureCapacity_real_T(solmp, dnis);
  solmp_data = solmp->data;
  solmp_data[0] = 0.0;
  loop_ub = x->size[0];
  for (dnis = 0; dnis < loop_ub; dnis++) {
    solmp_data[dnis + 1] = ed_data[dnis];
  }
  emxInit_real_T(&ed, 2);
  dnis = ed->size[0] * ed->size[1];
  ed->size[0] = 1;
  ed->size[1] = rr->size[1];
  emxEnsureCapacity_real_T(ed, dnis);
  ed_data = ed->data;
  loop_ub = rr->size[1];
  for (dnis = 0; dnis < loop_ub; dnis++) {
    ed_data[dnis] = (rr_data[dnis] + solmp_data[dnis]) / 2.0;
  }
  dimsor++;
  /*  the only relevant eigenvalues are those belong to a clusters with sample
   */
  /*  size greater than 0. eigenvalues corresponding to a cluster with 0 */
  /*  elements has no influence in the objective function */
  acoef = outsize[1] - 1;
  bcoef = 0;
  for (i = 0; i <= acoef; i++) {
    bcoef++;
  }
  emxInit_real_T(&b_dnis, 2);
  dnis = b_dnis->size[0] * b_dnis->size[1];
  b_dnis->size[0] = 1;
  b_dnis->size[1] = bcoef;
  emxEnsureCapacity_real_T(b_dnis, dnis);
  nis_data = b_dnis->data;
  for (i = 0; i <= acoef; i++) {
    nis_data[i] = eigenvalues_data[i];
  }
  maxdnis = d_maximum(b_dnis);
  emxInit_boolean_T(&dltm, 2);
  emxInit_boolean_T(&dgtcm, 2);
  emxInit_real_T(&ee, 3);
  emxInit_int32_T(&r, 1);
  emxInit_real_T(&c, 3);
  emxInit_real_T(&b_x, 3);
  emxInit_real_T(&b_dltm, 2);
  emxInit_real_T(&c_dltm, 2);
  emxInit_real_T(&r1, 3);
  if (userepmat == 2.0) {
    if ((!(maxdnis <= tol)) &&
        (!(fabs(maxdnis / c_minimum(b_dnis)) <= restr))) {
      /*  we check if the  eigenvalues verify the restrictions */
      /*  abs here is just for computational purposes */
      /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
       * dimsor */
      bcoef = eigenvalues->size[0];
      dnis = dltm->size[0] * dltm->size[1];
      dltm->size[0] = eigenvalues->size[0];
      dltm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dltm, dnis);
      dltm_data = dltm->data;
      loop_ub = ed->size[1];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        for (b_i = 0; b_i < bcoef; b_i++) {
          dltm_data[b_i + dltm->size[0] * dnis] =
              (eigenvalues_data[b_i] < ed_data[dnis]);
        }
      }
      bcoef = eigenvalues->size[0];
      dnis = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = eigenvalues->size[0];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, dnis);
      dgtcm_data = dgtcm->data;
      loop_ub = ed->size[1];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        for (b_i = 0; b_i < bcoef; b_i++) {
          dgtcm_data[b_i + dgtcm->size[0] * dnis] =
              (eigenvalues_data[b_i] > ed_data[dnis] * restr);
        }
      }
      /*  Do permute and reshape just once */
      /*          ss=sum(permute(reshape(ddltm,k,v,dimsor),[1 3 2]),3); */
      /*          tt=sum(permute(reshape(ddgtcm,k,v,dimsor),[1 3 2]),3); */
      /*          % sum with a loop (less efficient) */
      /*              rrchk=zeros(v,dimsor); */
      /*              sschk=rrchk; */
      /*              ttchk=sschk; */
      /*              dltmdgtcm=dltm+dgtcm; */
      /*          for jj=1:k */
      /*              seqjj=jj:k:k*(v-1)+jj; */
      /*              rrchk(jj,:)=sum(dltmdgtcm(seqjj,:),1); */
      /*              sschk(jj,:)=sum(ddltm(seqjj,:),1); */
      /*              ttchk(jj,:)=sum(ddgtcm(seqjj,:),1); */
      /*          end */
      /*  Vector version of */
      /*  solmp=sum(niini/n.*(s(:,mp)+t(:,mp)/c))/(sum(niini/n.*(r(:,mp)))) */
      /*  Note that solmp corresponds to m* of the equation below (5.4) of */
      /*  FGM2012 */
      /*  There are dimsor values of m*. We must choose the one which is */
      /*  associated to the smallest value of the objective function */
      /*  implemented in vector obj */
      /*          if userepmat ==1 */
      /*              % nininmat=repmat(ninin,1,dimsor); */
      /*              % solmp=sum((ss+tt/c).*nininmat,1)./sum(rr.*nininmat,1);
       */
      /*              solmp=sum((ss+tt/c).*ninin,1)./sum(rr.*ninin,1); */
      /*          else */
      /*              solmp=sum(bsxfun(@times,ss+tt/c,ninin),1)./sum(bsxfun(@times,rr,ninin),1);
       */
      /*          end */
      /*  nininmat=repmat(ninin,1,dimsor); */
      /*  solmp=sum((ss+tt/c).*nininmat,1)./sum(rr.*nininmat,1); */
      if (dltm->size[0] == 1) {
        dnis = eigenvalues->size[0];
      } else {
        dnis = dltm->size[0];
      }
      if (dgtcm->size[0] == 1) {
        acoef = eigenvalues->size[0];
      } else {
        acoef = dgtcm->size[0];
      }
      if ((dltm->size[0] == eigenvalues->size[0]) &&
          (dgtcm->size[0] == eigenvalues->size[0]) && (dnis == acoef) &&
          (dltm->size[1] == dgtcm->size[1])) {
        dnis = b_dltm->size[0] * b_dltm->size[1];
        b_dltm->size[0] = dltm->size[0];
        b_dltm->size[1] = dltm->size[1];
        emxEnsureCapacity_real_T(b_dltm, dnis);
        oo_data = b_dltm->data;
        loop_ub = dltm->size[1];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          bcoef = dltm->size[0];
          for (b_i = 0; b_i < bcoef; b_i++) {
            oo_data[b_i + b_dltm->size[0] * dnis] =
                (double)dltm_data[b_i + dltm->size[0] * dnis] *
                    eigenvalues_data[b_i] +
                (double)dgtcm_data[b_i + dgtcm->size[0] * dnis] *
                    eigenvalues_data[b_i] / restr;
          }
        }
        i = eigenvalues->size[0];
        d_dltm = *b_dltm;
        iv3[0] = 1;
        iv3[1] = i;
        iv3[2] = (int)dimsor;
        d_dltm.size = &iv3[0];
        d_dltm.numDimensions = 3;
        b_permute(&d_dltm, c);
      } else {
        uf_binary_expand_op(c, dltm, eigenvalues, dgtcm, restr, dimsor);
      }
      f_sum(c, ed);
      ed_data = ed->data;
      if (ed->size[1] == 0) {
        solmp->size[0] = 1;
        solmp->size[1] = 0;
      } else {
        bcoef = ed->size[1];
        dnis = solmp->size[0] * solmp->size[1];
        solmp->size[0] = 1;
        solmp->size[1] = ed->size[1];
        emxEnsureCapacity_real_T(solmp, dnis);
        solmp_data = solmp->data;
        for (varargin_3 = 0; varargin_3 < bcoef; varargin_3++) {
          solmp_data[varargin_3] = ed_data[varargin_3];
        }
      }
      if ((dltm->size[0] == dgtcm->size[0]) &&
          (dltm->size[1] == dgtcm->size[1])) {
        dnis = b_dltm->size[0] * b_dltm->size[1];
        b_dltm->size[0] = dltm->size[0];
        b_dltm->size[1] = dltm->size[1];
        emxEnsureCapacity_real_T(b_dltm, dnis);
        oo_data = b_dltm->data;
        loop_ub = dltm->size[0] * dltm->size[1];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          oo_data[dnis] = (double)dltm_data[dnis] + (double)dgtcm_data[dnis];
        }
        i = eigenvalues->size[0];
        d_dltm = *b_dltm;
        iv4[0] = 1;
        iv4[1] = i;
        iv4[2] = (int)dimsor;
        d_dltm.size = &iv4[0];
        d_dltm.numDimensions = 3;
        b_permute(&d_dltm, c);
      } else {
        tf_binary_expand_op(c, dltm, dgtcm, eigenvalues, dimsor);
      }
      f_sum(c, ed);
      ed_data = ed->data;
      if (ed->size[1] == 0) {
        b_dnis->size[0] = 1;
        b_dnis->size[1] = 0;
      } else {
        bcoef = ed->size[1];
        dnis = b_dnis->size[0] * b_dnis->size[1];
        b_dnis->size[0] = 1;
        b_dnis->size[1] = ed->size[1];
        emxEnsureCapacity_real_T(b_dnis, dnis);
        nis_data = b_dnis->data;
        for (varargin_3 = 0; varargin_3 < bcoef; varargin_3++) {
          nis_data[varargin_3] = ed_data[varargin_3];
        }
      }
      if (solmp->size[1] == b_dnis->size[1]) {
        loop_ub = solmp->size[1] - 1;
        dnis = solmp->size[0] * solmp->size[1];
        solmp->size[0] = 1;
        emxEnsureCapacity_real_T(solmp, dnis);
        solmp_data = solmp->data;
        for (dnis = 0; dnis <= loop_ub; dnis++) {
          solmp_data[dnis] /= nis_data[dnis];
        }
      } else {
        b_rdivide(solmp, b_dnis);
        solmp_data = solmp->data;
      }
      /*  Now find vector version of */
      /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
       */
      /*  which correponds to equation of FGM2012 which defines the */
      /*  truncated eigenvalues */
      /*  The following gets rid of the repmat, which is slow */
      /*  Find solmp*(d<solmp). This is expression is called sdlts which */
      /*  stands for "sol (d less than sol)" */
      bcoef = eigenvalues->size[0];
      dnis = dltm->size[0] * dltm->size[1];
      dltm->size[0] = eigenvalues->size[0];
      dltm->size[1] = solmp->size[1];
      emxEnsureCapacity_boolean_T(dltm, dnis);
      dltm_data = dltm->data;
      loop_ub = solmp->size[1];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        for (b_i = 0; b_i < bcoef; b_i++) {
          dltm_data[b_i + dltm->size[0] * dnis] =
              (eigenvalues_data[b_i] < solmp_data[dnis]);
        }
      }
      /* dges = reshape(dvec>=solmp,k,v,dimsor); */
      /*  cs is c*solmp */
      dnis = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = solmp->size[1];
      emxEnsureCapacity_real_T(ed, dnis);
      ed_data = ed->data;
      loop_ub = solmp->size[1];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        ed_data[dnis] = solmp_data[dnis] * restr;
      }
      /*  less efficient code to obtain csr */
      /*  csr = reshape(bsxfun(@times,ones(k*v,1),c*soll),k,v,dimsor); */
      bcoef = eigenvalues->size[0];
      dnis = dgtcm->size[0] * dgtcm->size[1];
      dgtcm->size[0] = eigenvalues->size[0];
      dgtcm->size[1] = ed->size[1];
      emxEnsureCapacity_boolean_T(dgtcm, dnis);
      dgtcm_data = dgtcm->data;
      loop_ub = ed->size[1];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        for (b_i = 0; b_i < bcoef; b_i++) {
          dgtcm_data[b_i + dgtcm->size[0] * dnis] =
              (eigenvalues_data[b_i] <= ed_data[dnis]);
        }
      }
      /*  More efficient to use not rather than the instruction below */
      /*  dgtcs=reshape(dvec>cs,k,v,dimsor); */
      /*  Array e contains the modified eigenvalues given a particular m */
      /*  evaluted in correspondence of the dimsor points */
      /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
       */
      acoef = eigenvalues->size[0];
      i = eigenvalues->size[0];
      b_bcoef = eigenvalues->size[0];
      b_acoef = eigenvalues->size[0];
      bcoef = eigenvalues->size[0];
      varargin_3 = eigenvalues->size[0];
      if (acoef == 1) {
        acoef = eigenvalues->size[0];
      }
      if (i == 1) {
        dnis = b_bcoef;
      } else {
        dnis = i;
      }
      if (dnis == 1) {
        i = eigenvalues->size[0];
      } else if (i == 1) {
        i = b_bcoef;
      }
      if (bcoef == 1) {
        b_bcoef = varargin_3;
      } else {
        b_bcoef = bcoef;
      }
      if (b_acoef == 1) {
        if (b_bcoef == 1) {
          b_acoef = eigenvalues->size[0];
        } else if (bcoef == 1) {
          b_acoef = varargin_3;
        } else {
          b_acoef = bcoef;
        }
      }
      if (((int)dimsor == solmp->size[1]) && (acoef == eigenvalues->size[0]) &&
          (eigenvalues->size[0] == i) && (b_acoef == eigenvalues->size[0])) {
        varargin_3 = eigenvalues->size[0];
        dnis = b_dltm->size[0] * b_dltm->size[1];
        b_dltm->size[0] = varargin_3;
        b_dltm->size[1] = (int)dimsor;
        emxEnsureCapacity_real_T(b_dltm, dnis);
        oo_data = b_dltm->data;
        loop_ub = (int)dimsor;
        for (dnis = 0; dnis < loop_ub; dnis++) {
          for (b_i = 0; b_i < varargin_3; b_i++) {
            oo_data[b_i + b_dltm->size[0] * dnis] =
                (double)dltm_data[b_i + varargin_3 * dnis] * solmp_data[dnis];
          }
        }
        i = eigenvalues->size[0];
        dnis = c_dltm->size[0] * c_dltm->size[1];
        c_dltm->size[0] = dltm->size[0];
        c_dltm->size[1] = dltm->size[1];
        emxEnsureCapacity_real_T(c_dltm, dnis);
        rr_data = c_dltm->data;
        loop_ub = dltm->size[0] * dltm->size[1];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          rr_data[dnis] = !dltm_data[dnis];
        }
        emxInit_real_T(&oo, 2);
        b_bcoef = eigenvalues->size[0];
        b_acoef = eigenvalues->size[0];
        dnis = oo->size[0] * oo->size[1];
        oo->size[0] = dgtcm->size[0];
        oo->size[1] = dgtcm->size[1];
        emxEnsureCapacity_real_T(oo, dnis);
        nis_data = oo->data;
        loop_ub = dgtcm->size[0] * dgtcm->size[1];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          nis_data[dnis] = !dgtcm_data[dnis];
        }
        acoef = eigenvalues->size[0];
        dnis = ee->size[0] * ee->size[1] * ee->size[2];
        ee->size[0] = 1;
        ee->size[1] = i;
        ee->size[2] = (int)dimsor;
        emxEnsureCapacity_real_T(ee, dnis);
        ee_data = ee->data;
        loop_ub = (int)dimsor;
        for (dnis = 0; dnis < loop_ub; dnis++) {
          for (b_i = 0; b_i < i; b_i++) {
            ee_data[b_i + ee->size[1] * dnis] =
                (oo_data[b_i + i * dnis] +
                 rr_data[b_i + b_bcoef * dnis] * eigenvalues_data[b_i] *
                     (double)dgtcm_data[b_i + b_acoef * dnis]) +
                ed_data[dnis] * nis_data[b_i + acoef * dnis];
          }
        }
        emxFree_real_T(&oo);
      } else {
        sf_binary_expand_op(ee, dltm, eigenvalues, dimsor, solmp, dgtcm, ed);
        ee_data = ee->data;
      }
      /*  Alternative way of computing oo */
      /*  nisn=nis/n; */
      /*  oo=nisn.*log(ee)+(nisn.*d)./ee; */
      /*  dmat=repmat(d,1,1,dimsor); */
      /*  logede=log(ee)+dmat./ee; */
      /*  nismat=repmat(nis/n,1,1,dimsor); */
      /*  oo=nismat.*logede; */
      /*  obj is a vector of size dimsor */
      /*   obj=sum(sum(oo,1)); */
      dnis = b_x->size[0] * b_x->size[1] * b_x->size[2];
      b_x->size[0] = 1;
      b_x->size[1] = ee->size[1];
      b_x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(b_x, dnis);
      ed_data = b_x->data;
      loop_ub = ee->size[1] * ee->size[2];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        ed_data[dnis] = ee_data[dnis];
      }
      bcoef = ee->size[1] * ee->size[2];
      for (k = 0; k < bcoef; k++) {
        ed_data[k] = log(ed_data[k]);
      }
      b_bcoef = eigenvalues->size[0];
      bcoef = eigenvalues->size[0];
      if (b_bcoef == 1) {
        b_bcoef = ee->size[1];
      }
      if (b_x->size[1] == 1) {
        if (bcoef == 1) {
          bcoef = ee->size[1];
        }
      } else {
        bcoef = b_x->size[1];
      }
      if ((eigenvalues->size[0] == ee->size[1]) && (b_x->size[1] == b_bcoef) &&
          (b_x->size[2] == ee->size[2]) && (outsize[1] == bcoef)) {
        emxInit_real_T(&b_oo, 3);
        dnis = b_oo->size[0] * b_oo->size[1] * b_oo->size[2];
        b_oo->size[0] = 1;
        b_oo->size[1] = outsize[1];
        b_oo->size[2] = b_x->size[2];
        emxEnsureCapacity_real_T(b_oo, dnis);
        nis_data = b_oo->data;
        loop_ub = b_x->size[2];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          bcoef = outsize[1];
          for (b_i = 0; b_i < bcoef; b_i++) {
            nis_data[b_oo->size[0] * b_i +
                     b_oo->size[0] * b_oo->size[1] * dnis] =
                ed_data[b_x->size[0] * b_i +
                        b_x->size[0] * b_x->size[1] * dnis] +
                eigenvalues_data[b_i] / ee_data[b_i + ee->size[1] * dnis];
          }
        }
        c_sum(b_oo, c);
        emxFree_real_T(&b_oo);
      } else {
        rf_binary_expand_op(c, outsize, b_x, eigenvalues, ee);
      }
      d_sum(c, r1);
      h_minimum(r1, &dimsor, &varargin_3);
      /*  m is the optimum value for the eigenvalues procedure */
      dimsor = solmp_data[varargin_3 - 1];
      /*  plot(1:dimsor,obj) */
      /*  Based on the m value we get the restricted eigenvalues */
      /*  The new eigenvalues are equal to */
      /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
      /*  m                   if old eigenvalues < m */
      /*  cm                  if old eigenvalues > c*m */
      /*  Old inefficient code */
      /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
      acoef = eigenvalues->size[0];
      for (i = 0; i < acoef; i++) {
        if (eigenvalues_data[i] < dimsor) {
          eigenvalues_data[i] = dimsor;
        }
      }
      acoef = eigenvalues->size[0] - 1;
      bcoef = 0;
      for (i = 0; i <= acoef; i++) {
        if (eigenvalues_data[i] > restr * dimsor) {
          bcoef++;
        }
      }
      dnis = r->size[0];
      r->size[0] = bcoef;
      emxEnsureCapacity_int32_T(r, dnis);
      r2 = r->data;
      bcoef = 0;
      for (i = 0; i <= acoef; i++) {
        if (eigenvalues_data[i] > restr * dimsor) {
          r2[bcoef] = i + 1;
          bcoef++;
        }
      }
      loop_ub = r->size[0];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        eigenvalues_data[r2[dnis] - 1] = restr * solmp_data[varargin_3 - 1];
      }
    } else {
      /*  if all the eigenvalues are 0 this means all points are concentrated */
      /*  in k groups and there is a perfect fit */
      /*  no further changes on the eigenvalues required, so return them */
      /*  immediately and stop the procedure! */
      /*  If all eigenvalues satisy the constraint */
      /*  no further changes on the eigenvalues required, so return them
       * immediately! */
      /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
      /*  which are greater than zero */
    }
  } else if ((!(maxdnis <= tol)) &&
             (!(fabs(maxdnis / c_minimum(b_dnis)) <= restr))) {
    /*  we check if the  eigenvalues verify the restrictions */
    /*  abs here is just for computational purposes */
    /*  REMARK: the following exploits matrix operations for avoiding */
    /*  loops. Given that the code below is difficult to interpret we */
    /*  refer to routine restreigeneasy for a better comprehension */
    /*  of the underlying algorithm */
    /*  Matrix version of r(:,mp)=sum(d<edmp,2)+sum(d>edmpc,2) for mp=1, ...,
     * dimsor */
    dnis = dltm->size[0] * dltm->size[1];
    dltm->size[0] = eigenvalues->size[0];
    dltm->size[1] = ed->size[1];
    emxEnsureCapacity_boolean_T(dltm, dnis);
    dltm_data = dltm->data;
    if ((eigenvalues->size[0] != 0) && (ed->size[1] != 0)) {
      bcoef = (ed->size[1] != 1);
      dnis = ed->size[1] - 1;
      for (k = 0; k <= dnis; k++) {
        varargin_3 = bcoef * k;
        acoef = (eigenvalues->size[0] != 1);
        b_i = dltm->size[0] - 1;
        for (b_k = 0; b_k <= b_i; b_k++) {
          dltm_data[b_k + dltm->size[0] * k] =
              (eigenvalues_data[acoef * b_k] < ed_data[varargin_3]);
        }
      }
    }
    dnis = ed->size[0] * ed->size[1];
    ed->size[0] = 1;
    emxEnsureCapacity_real_T(ed, dnis);
    ed_data = ed->data;
    loop_ub = ed->size[1] - 1;
    for (dnis = 0; dnis <= loop_ub; dnis++) {
      ed_data[dnis] *= restr;
    }
    dnis = dgtcm->size[0] * dgtcm->size[1];
    dgtcm->size[0] = eigenvalues->size[0];
    dgtcm->size[1] = ed->size[1];
    emxEnsureCapacity_boolean_T(dgtcm, dnis);
    dgtcm_data = dgtcm->data;
    if ((eigenvalues->size[0] != 0) && (ed->size[1] != 0)) {
      bcoef = (ed->size[1] != 1);
      dnis = ed->size[1] - 1;
      for (k = 0; k <= dnis; k++) {
        varargin_3 = bcoef * k;
        acoef = (eigenvalues->size[0] != 1);
        b_i = dgtcm->size[0] - 1;
        for (b_k = 0; b_k <= b_i; b_k++) {
          dgtcm_data[b_k + dgtcm->size[0] * k] =
              (eigenvalues_data[acoef * b_k] > ed_data[varargin_3]);
        }
      }
    }
    if ((dltm->size[0] == dgtcm->size[0]) &&
        (dltm->size[1] == dgtcm->size[1])) {
      dnis = b_dltm->size[0] * b_dltm->size[1];
      b_dltm->size[0] = dltm->size[0];
      b_dltm->size[1] = dltm->size[1];
      emxEnsureCapacity_real_T(b_dltm, dnis);
      oo_data = b_dltm->data;
      loop_ub = dltm->size[0] * dltm->size[1];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        oo_data[dnis] = (double)dltm_data[dnis] + (double)dgtcm_data[dnis];
      }
      i = eigenvalues->size[0];
      d_dltm = *b_dltm;
      b_iv[0] = 1;
      b_iv[1] = i;
      b_iv[2] = (int)dimsor;
      d_dltm.size = &b_iv[0];
      d_dltm.numDimensions = 3;
      b_permute(&d_dltm, c);
    } else {
      tf_binary_expand_op(c, dltm, dgtcm, eigenvalues, dimsor);
    }
    f_sum(c, rr);
    rr_data = rr->data;
    /*  Matrix version of s(:,mp)=sum(d.*(d<edmp),2) for mp=1, ..., dimsor */
    bcoef = eigenvalues->size[0];
    dnis = x->size[0];
    x->size[0] = bcoef;
    emxEnsureCapacity_real_T(x, dnis);
    ed_data = x->data;
    for (dnis = 0; dnis < bcoef; dnis++) {
      ed_data[dnis] = eigenvalues_data[dnis];
    }
    emxInit_real_T(&oo, 3);
    i = eigenvalues->size[0];
    loop_ub = (int)dimsor;
    e_bsxfun(dltm, x, b_dltm);
    d_dltm = *b_dltm;
    iv1[0] = 1;
    iv1[1] = i;
    iv1[2] = (int)dimsor;
    d_dltm.size = &iv1[0];
    d_dltm.numDimensions = 3;
    b_permute(&d_dltm, oo);
    f_sum(oo, b_dnis);
    /*  Matrix version of t(:,mp)=sum(d.*(d>edmpc),2) for mp=1, ..., dimsor */
    bcoef = eigenvalues->size[0];
    dnis = x->size[0];
    x->size[0] = bcoef;
    emxEnsureCapacity_real_T(x, dnis);
    ed_data = x->data;
    for (dnis = 0; dnis < bcoef; dnis++) {
      ed_data[dnis] = eigenvalues_data[dnis];
    }
    i = eigenvalues->size[0];
    e_bsxfun(dgtcm, x, b_dltm);
    d_dltm = *b_dltm;
    iv2[0] = 1;
    iv2[1] = i;
    iv2[2] = (int)dimsor;
    d_dltm.size = &iv2[0];
    d_dltm.numDimensions = 3;
    b_permute(&d_dltm, oo);
    f_sum(oo, ed);
    ed_data = ed->data;
    /*  Vector version of */
    /*  solmp=sum(niini/n.*(s(:,mp)+t(:,mp)/c))/(sum(niini/n.*(r(:,mp)))) */
    /*  Note that solmp corresponds to m* of the equation below (5.4) of */
    /*  FGM2012 */
    /*  There are dimsor values of m*. We must choose the one which is */
    /*  associated to the smallest value of the objective function */
    /*  implemented in vector obj */
    if (userepmat == 1.0) {
      csz[1] = (int)dimsor;
      if (b_dnis->size[1] == 1) {
        dnis = ed->size[1];
      } else {
        dnis = b_dnis->size[1];
      }
      if ((b_dnis->size[1] == ed->size[1]) && (dnis == (int)dimsor)) {
        bcoef = b_dnis->size[1] - 1;
        dnis = b_dnis->size[0] * b_dnis->size[1];
        b_dnis->size[0] = 1;
        emxEnsureCapacity_real_T(b_dnis, dnis);
        nis_data = b_dnis->data;
        for (dnis = 0; dnis <= bcoef; dnis++) {
          nis_data[dnis] += ed_data[dnis] / restr;
        }
      } else {
        ag_binary_expand_op(b_dnis, ed, restr, csz);
        nis_data = b_dnis->data;
      }
      if (b_dnis->size[1] == 0) {
        solmp->size[0] = 1;
        solmp->size[1] = 0;
      } else {
        bcoef = b_dnis->size[1];
        dnis = solmp->size[0] * solmp->size[1];
        solmp->size[0] = 1;
        solmp->size[1] = b_dnis->size[1];
        emxEnsureCapacity_real_T(solmp, dnis);
        solmp_data = solmp->data;
        for (varargin_3 = 0; varargin_3 < bcoef; varargin_3++) {
          solmp_data[varargin_3] = nis_data[varargin_3];
        }
      }
      if (rr->size[1] == (int)dimsor) {
        dnis = rr->size[0] * rr->size[1];
        rr->size[0] = 1;
        emxEnsureCapacity_real_T(rr, dnis);
        rr_data = rr->data;
      } else {
        yf_binary_expand_op(rr, csz);
        rr_data = rr->data;
      }
      if (rr->size[1] == 0) {
        b_dnis->size[0] = 1;
        b_dnis->size[1] = 0;
      } else {
        bcoef = rr->size[1];
        dnis = b_dnis->size[0] * b_dnis->size[1];
        b_dnis->size[0] = 1;
        b_dnis->size[1] = rr->size[1];
        emxEnsureCapacity_real_T(b_dnis, dnis);
        nis_data = b_dnis->data;
        for (varargin_3 = 0; varargin_3 < bcoef; varargin_3++) {
          nis_data[varargin_3] = rr_data[varargin_3];
        }
      }
      if (solmp->size[1] == b_dnis->size[1]) {
        bcoef = solmp->size[1] - 1;
        dnis = solmp->size[0] * solmp->size[1];
        solmp->size[0] = 1;
        emxEnsureCapacity_real_T(solmp, dnis);
        solmp_data = solmp->data;
        for (dnis = 0; dnis <= bcoef; dnis++) {
          solmp_data[dnis] /= nis_data[dnis];
        }
      } else {
        b_rdivide(solmp, b_dnis);
        solmp_data = solmp->data;
      }
    } else {
      if (b_dnis->size[1] == ed->size[1]) {
        bcoef = b_dnis->size[1] - 1;
        dnis = b_dnis->size[0] * b_dnis->size[1];
        b_dnis->size[0] = 1;
        emxEnsureCapacity_real_T(b_dnis, dnis);
        nis_data = b_dnis->data;
        for (dnis = 0; dnis <= bcoef; dnis++) {
          nis_data[dnis] += ed_data[dnis] / restr;
        }
      } else {
        bg_binary_expand_op(b_dnis, ed, restr);
        nis_data = b_dnis->data;
      }
      dnis = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = b_dnis->size[1];
      emxEnsureCapacity_real_T(ed, dnis);
      ed_data = ed->data;
      if (b_dnis->size[1] != 0) {
        acoef = (b_dnis->size[1] != 1);
        dnis = b_dnis->size[1] - 1;
        for (k = 0; k <= dnis; k++) {
          ed_data[k] = nis_data[acoef * k];
        }
      }
      if (ed->size[1] == 0) {
        solmp->size[0] = 1;
        solmp->size[1] = 0;
      } else {
        bcoef = ed->size[1];
        dnis = solmp->size[0] * solmp->size[1];
        solmp->size[0] = 1;
        solmp->size[1] = ed->size[1];
        emxEnsureCapacity_real_T(solmp, dnis);
        solmp_data = solmp->data;
        for (varargin_3 = 0; varargin_3 < bcoef; varargin_3++) {
          solmp_data[varargin_3] = ed_data[varargin_3];
        }
      }
      dnis = ed->size[0] * ed->size[1];
      ed->size[0] = 1;
      ed->size[1] = rr->size[1];
      emxEnsureCapacity_real_T(ed, dnis);
      ed_data = ed->data;
      if (rr->size[1] != 0) {
        acoef = (rr->size[1] != 1);
        dnis = rr->size[1] - 1;
        for (k = 0; k <= dnis; k++) {
          ed_data[k] = rr_data[acoef * k];
        }
      }
      if (ed->size[1] == 0) {
        b_dnis->size[0] = 1;
        b_dnis->size[1] = 0;
      } else {
        bcoef = ed->size[1];
        dnis = b_dnis->size[0] * b_dnis->size[1];
        b_dnis->size[0] = 1;
        b_dnis->size[1] = ed->size[1];
        emxEnsureCapacity_real_T(b_dnis, dnis);
        nis_data = b_dnis->data;
        for (varargin_3 = 0; varargin_3 < bcoef; varargin_3++) {
          nis_data[varargin_3] = ed_data[varargin_3];
        }
      }
      if (solmp->size[1] == b_dnis->size[1]) {
        bcoef = solmp->size[1] - 1;
        dnis = solmp->size[0] * solmp->size[1];
        solmp->size[0] = 1;
        emxEnsureCapacity_real_T(solmp, dnis);
        solmp_data = solmp->data;
        for (dnis = 0; dnis <= bcoef; dnis++) {
          solmp_data[dnis] /= nis_data[dnis];
        }
      } else {
        b_rdivide(solmp, b_dnis);
        solmp_data = solmp->data;
      }
    }
    /*  Now find vector version of */
    /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
     */
    /*  which correponds to equation of FGM2012 which defines the */
    /*  truncated eigenvalues */
    /*  The following gets rid of the repmat, which is slow */
    /*  Find solmp*(d<solmp). This is expression is called sdlts which */
    /*  stands for "sol (d less than sol)" */
    /*  d.*(d>=solmp) */
    /*  cs is c*solmp */
    dnis = ed->size[0] * ed->size[1];
    ed->size[0] = 1;
    ed->size[1] = solmp->size[1];
    emxEnsureCapacity_real_T(ed, dnis);
    ed_data = ed->data;
    bcoef = solmp->size[1];
    for (dnis = 0; dnis < bcoef; dnis++) {
      ed_data[dnis] = solmp_data[dnis] * restr;
    }
    /*  csr is a reshaped version of cs */
    /*  less efficient code to obtain csr */
    /*  csr = reshape(bsxfun(@times,ones(k*v,1),c*soll),k,v,dimsor); */
    /*  (d<=c*solmp) */
    /*  (d>c*solmp) */
    /*  Array e contains the modified eigenvalues given a particular m */
    /*  evaluted in correspondence of the dimsor points */
    /*  e = solmp*(d<solmp)+d.*(d>=solmp).*(d<=c*solmp)+(c*solmp)*(d>c*solmp);
     */
    dnis = dltm->size[0] * dltm->size[1];
    dltm->size[0] = eigenvalues->size[0];
    dltm->size[1] = solmp->size[1];
    emxEnsureCapacity_boolean_T(dltm, dnis);
    dltm_data = dltm->data;
    if ((eigenvalues->size[0] != 0) && (solmp->size[1] != 0)) {
      bcoef = (solmp->size[1] != 1);
      dnis = solmp->size[1] - 1;
      for (k = 0; k <= dnis; k++) {
        varargin_3 = bcoef * k;
        acoef = (eigenvalues->size[0] != 1);
        b_i = dltm->size[0] - 1;
        for (b_k = 0; b_k <= b_i; b_k++) {
          dltm_data[b_k + dltm->size[0] * k] =
              (eigenvalues_data[acoef * b_k] < solmp_data[varargin_3]);
        }
      }
    }
    dnis = dgtcm->size[0] * dgtcm->size[1];
    dgtcm->size[0] = eigenvalues->size[0];
    dgtcm->size[1] = solmp->size[1];
    emxEnsureCapacity_boolean_T(dgtcm, dnis);
    dgtcm_data = dgtcm->data;
    if ((eigenvalues->size[0] != 0) && (solmp->size[1] != 0)) {
      bcoef = (solmp->size[1] != 1);
      dnis = solmp->size[1] - 1;
      for (k = 0; k <= dnis; k++) {
        varargin_3 = bcoef * k;
        acoef = (eigenvalues->size[0] != 1);
        b_i = dgtcm->size[0] - 1;
        for (b_k = 0; b_k <= b_i; b_k++) {
          dgtcm_data[b_k + dgtcm->size[0] * k] =
              (eigenvalues_data[acoef * b_k] >= solmp_data[varargin_3]);
        }
      }
    }
    bcoef = eigenvalues->size[0];
    dnis = c->size[0] * c->size[1] * c->size[2];
    c->size[0] = 1;
    c->size[1] = bcoef;
    c->size[2] = (int)dimsor;
    emxEnsureCapacity_real_T(c, dnis);
    c_data = c->data;
    if (bcoef != 0) {
      dnis = (int)dimsor - 1;
      if (0 <= (int)dimsor - 1) {
        b_acoef = (eigenvalues->size[0] != 1);
        b_bcoef = (eigenvalues->size[0] != 1);
      }
      for (k = 0; k <= dnis; k++) {
        b_i = c->size[1] - 1;
        if (0 <= c->size[1] - 1) {
          i = eigenvalues->size[0];
        }
        for (b_k = 0; b_k <= b_i; b_k++) {
          c_data[b_k + c->size[1] * k] =
              (double)dgtcm_data[b_acoef * b_k + i * k] *
              eigenvalues_data[b_bcoef * b_k];
        }
      }
    }
    dnis = dgtcm->size[0] * dgtcm->size[1];
    dgtcm->size[0] = eigenvalues->size[0];
    dgtcm->size[1] = ed->size[1];
    emxEnsureCapacity_boolean_T(dgtcm, dnis);
    dgtcm_data = dgtcm->data;
    if ((eigenvalues->size[0] != 0) && (ed->size[1] != 0)) {
      bcoef = (ed->size[1] != 1);
      dnis = ed->size[1] - 1;
      for (k = 0; k <= dnis; k++) {
        varargin_3 = bcoef * k;
        acoef = (eigenvalues->size[0] != 1);
        b_i = dgtcm->size[0] - 1;
        for (b_k = 0; b_k <= b_i; b_k++) {
          dgtcm_data[b_k + dgtcm->size[0] * k] =
              (eigenvalues_data[acoef * b_k] <= ed_data[varargin_3]);
        }
      }
    }
    emxInit_boolean_T(&b_c, 2);
    dnis = b_c->size[0] * b_c->size[1];
    b_c->size[0] = eigenvalues->size[0];
    b_c->size[1] = ed->size[1];
    emxEnsureCapacity_boolean_T(b_c, dnis);
    dltm_data = b_c->data;
    if ((eigenvalues->size[0] != 0) && (ed->size[1] != 0)) {
      bcoef = (ed->size[1] != 1);
      dnis = ed->size[1] - 1;
      for (k = 0; k <= dnis; k++) {
        varargin_3 = bcoef * k;
        acoef = (eigenvalues->size[0] != 1);
        b_i = b_c->size[0] - 1;
        for (b_k = 0; b_k <= b_i; b_k++) {
          dltm_data[b_k + b_c->size[0] * k] =
              (eigenvalues_data[acoef * b_k] > ed_data[varargin_3]);
        }
      }
    }
    varargin_3 = eigenvalues->size[0];
    e_dltm = *dltm;
    b_eigenvalues[0] = varargin_3;
    b_eigenvalues[1] = (int)dimsor;
    e_dltm.size = &b_eigenvalues[0];
    e_dltm.numDimensions = 2;
    f_bsxfun(&e_dltm, solmp, b_dltm);
    oo_data = b_dltm->data;
    i = eigenvalues->size[0];
    b_bcoef = eigenvalues->size[0];
    if (c->size[1] == 1) {
      bcoef = eigenvalues->size[0];
    } else {
      bcoef = c->size[1];
    }
    if (c->size[2] == 1) {
      b_acoef = (int)dimsor;
    } else {
      b_acoef = c->size[2];
    }
    if (i == 1) {
      if (c->size[1] == 1) {
        i = eigenvalues->size[0];
      } else {
        i = c->size[1];
      }
    }
    if (b_bcoef == 1) {
      b_bcoef = eigenvalues->size[0];
    }
    if ((int)dimsor == 1) {
      if (c->size[2] == 1) {
        acoef = (int)dimsor;
      } else {
        acoef = c->size[2];
      }
    } else {
      acoef = (int)dimsor;
    }
    if ((eigenvalues->size[0] == c->size[1]) && (c->size[2] == (int)dimsor) &&
        (eigenvalues->size[0] == bcoef) && ((int)dimsor == b_acoef) &&
        (i == b_bcoef) && (acoef == (int)dimsor)) {
      i = eigenvalues->size[0];
      b_bcoef = eigenvalues->size[0];
      varargin_3 = eigenvalues->size[0];
      dnis = c_dltm->size[0] * c_dltm->size[1];
      c_dltm->size[0] = varargin_3;
      c_dltm->size[1] = ed->size[1];
      emxEnsureCapacity_real_T(c_dltm, dnis);
      rr_data = c_dltm->data;
      bcoef = ed->size[1];
      for (dnis = 0; dnis < bcoef; dnis++) {
        for (b_i = 0; b_i < varargin_3; b_i++) {
          rr_data[b_i + c_dltm->size[0] * dnis] = ed_data[dnis];
        }
      }
      acoef = eigenvalues->size[0];
      b_acoef = eigenvalues->size[0];
      dnis = ee->size[0] * ee->size[1] * ee->size[2];
      ee->size[0] = 1;
      ee->size[1] = i;
      ee->size[2] = (int)dimsor;
      emxEnsureCapacity_real_T(ee, dnis);
      ee_data = ee->data;
      for (dnis = 0; dnis < loop_ub; dnis++) {
        for (b_i = 0; b_i < i; b_i++) {
          ee_data[b_i + ee->size[1] * dnis] =
              (oo_data[b_i + i * dnis] +
               c_data[b_i + c->size[1] * dnis] *
                   (double)dgtcm_data[b_i + b_bcoef * dnis]) +
              rr_data[b_i + acoef * dnis] *
                  (double)dltm_data[b_i + b_acoef * dnis];
        }
      }
    } else {
      xf_binary_expand_op(ee, b_dltm, eigenvalues, dimsor, c, dgtcm, ed, b_c);
      ee_data = ee->data;
    }
    emxFree_boolean_T(&b_c);
    emxInit_real_T(&b_oo, 3);
    if (userepmat == 1.0) {
      dnis = b_x->size[0] * b_x->size[1] * b_x->size[2];
      b_x->size[0] = 1;
      b_x->size[1] = ee->size[1];
      b_x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(b_x, dnis);
      ed_data = b_x->data;
      loop_ub = ee->size[1] * ee->size[2];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        ed_data[dnis] = ee_data[dnis];
      }
      bcoef = ee->size[1] * ee->size[2];
      for (k = 0; k < bcoef; k++) {
        ed_data[k] = log(ed_data[k]);
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      e_repmat(nis, b_dv, b_oo);
      oo_data = b_oo->data;
      dnis = rr->size[0] * rr->size[1];
      rr->size[0] = 1;
      rr->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(rr, dnis);
      rr_data = rr->data;
      loop_ub = eigenvalues->size[0];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        rr_data[dnis] = eigenvalues_data[dnis];
      }
      b_dv[0] = 1.0;
      b_dv[1] = 1.0;
      b_dv[2] = dimsor;
      e_repmat(rr, b_dv, c);
      c_data = c->data;
      if (c->size[1] == 1) {
        bcoef = ee->size[1];
      } else {
        bcoef = c->size[1];
      }
      if (c->size[2] == 1) {
        b_acoef = ee->size[2];
      } else {
        b_acoef = c->size[2];
      }
      if (b_x->size[1] == 1) {
        if (c->size[1] == 1) {
          dnis = ee->size[1];
        } else {
          dnis = c->size[1];
        }
      } else {
        dnis = b_x->size[1];
      }
      if (b_x->size[2] == 1) {
        if (c->size[2] == 1) {
          acoef = ee->size[2];
        } else {
          acoef = c->size[2];
        }
      } else {
        acoef = b_x->size[2];
      }
      if ((c->size[1] == ee->size[1]) && (c->size[2] == ee->size[2]) &&
          (b_x->size[1] == bcoef) && (b_x->size[2] == b_acoef) &&
          (b_oo->size[1] == dnis) && (b_oo->size[2] == acoef)) {
        dnis = oo->size[0] * oo->size[1] * oo->size[2];
        oo->size[0] = 1;
        oo->size[1] = b_oo->size[1];
        oo->size[2] = b_oo->size[2];
        emxEnsureCapacity_real_T(oo, dnis);
        nis_data = oo->data;
        loop_ub = b_oo->size[2];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          bcoef = b_oo->size[1];
          for (b_i = 0; b_i < bcoef; b_i++) {
            nis_data[b_i + oo->size[1] * dnis] =
                oo_data[b_i + b_oo->size[1] * dnis] *
                (ed_data[b_x->size[0] * b_i +
                         b_x->size[0] * b_x->size[1] * dnis] +
                 c_data[b_i + c->size[1] * dnis] /
                     ee_data[b_i + ee->size[1] * dnis]);
          }
        }
        dnis = c->size[0] * c->size[1] * c->size[2];
        c->size[0] = 1;
        c->size[1] = oo->size[1];
        c->size[2] = oo->size[2];
        emxEnsureCapacity_real_T(c, dnis);
        c_data = c->data;
        loop_ub = oo->size[2];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          bcoef = oo->size[1];
          for (b_i = 0; b_i < bcoef; b_i++) {
            c_data[b_i + c->size[1] * dnis] =
                nis_data[b_i + oo->size[1] * dnis];
          }
        }
        dnis = b_oo->size[0] * b_oo->size[1] * b_oo->size[2];
        b_oo->size[0] = 1;
        b_oo->size[1] = c->size[1];
        b_oo->size[2] = c->size[2];
        emxEnsureCapacity_real_T(b_oo, dnis);
        oo_data = b_oo->data;
        loop_ub = c->size[1] * c->size[2];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          oo_data[dnis] = c_data[dnis];
        }
      } else {
        vf_binary_expand_op(b_oo, b_x, c, ee);
      }
    } else {
      /*  Now find vector version of o */
      /*  logede=log(ee)+bsxfun(@rdivide,d,ee); */
      /*  oo=nis/n.*(log(e)+d./e); */
      dnis = b_x->size[0] * b_x->size[1] * b_x->size[2];
      b_x->size[0] = 1;
      b_x->size[1] = ee->size[1];
      b_x->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(b_x, dnis);
      ed_data = b_x->data;
      loop_ub = ee->size[1] * ee->size[2];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        ed_data[dnis] = ee_data[dnis];
      }
      bcoef = ee->size[1] * ee->size[2];
      for (k = 0; k < bcoef; k++) {
        ed_data[k] = log(ed_data[k]);
      }
      dnis = rr->size[0] * rr->size[1];
      rr->size[0] = 1;
      rr->size[1] = eigenvalues->size[0];
      emxEnsureCapacity_real_T(rr, dnis);
      rr_data = rr->data;
      loop_ub = eigenvalues->size[0];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        rr_data[dnis] = eigenvalues_data[dnis];
      }
      dnis = oo->size[0] * oo->size[1] * oo->size[2];
      oo->size[0] = 1;
      oo->size[1] = ee->size[1];
      oo->size[2] = ee->size[2];
      emxEnsureCapacity_real_T(oo, dnis);
      nis_data = oo->data;
      loop_ub = ee->size[1] * ee->size[2];
      for (dnis = 0; dnis < loop_ub; dnis++) {
        nis_data[dnis] = 1.0 / ee_data[dnis];
      }
      i_bsxfun(rr, oo, c);
      c_data = c->data;
      if ((b_x->size[1] == c->size[1]) && (b_x->size[2] == c->size[2])) {
        dnis = ee->size[0] * ee->size[1] * ee->size[2];
        ee->size[0] = 1;
        ee->size[1] = b_x->size[1];
        ee->size[2] = b_x->size[2];
        emxEnsureCapacity_real_T(ee, dnis);
        ee_data = ee->data;
        loop_ub = b_x->size[1] * b_x->size[2];
        for (dnis = 0; dnis < loop_ub; dnis++) {
          ee_data[dnis] = ed_data[dnis] + c_data[dnis];
        }
        i_bsxfun(nis, ee, b_oo);
      } else {
        wf_binary_expand_op(b_oo, nis, b_x, c);
      }
    }
    /*  obj is a vector of size dimsor */
    /*   obj=sum(sum(oo,1)); */
    c_sum(b_oo, oo);
    d_sum(oo, r1);
    h_minimum(r1, &dimsor, &varargin_3);
    /*  m is the optimum value for the eigenvalues procedure */
    dimsor = solmp_data[varargin_3 - 1];
    /*  plot(1:dimsor,obj) */
    /*  Based on the m value we get the restricted eigenvalues */
    /*  The new eigenvalues are equal to */
    /*  old eigenvalues (d) if old eigenvalues \in [m , c*m] */
    /*  m                   if old eigenvalues < m */
    /*  cm                  if old eigenvalues > c*m */
    /*  Old inefficient code */
    /*  out= ((m*(d<m)+d.*(d>=m).*(d<=c*m)+(c*m)*(d>c*m)))'; */
    acoef = eigenvalues->size[0];
    emxFree_real_T(&oo);
    emxFree_real_T(&b_oo);
    for (i = 0; i < acoef; i++) {
      if (eigenvalues_data[i] < dimsor) {
        eigenvalues_data[i] = dimsor;
      }
    }
    acoef = eigenvalues->size[0] - 1;
    bcoef = 0;
    for (i = 0; i <= acoef; i++) {
      if (eigenvalues_data[i] > restr * dimsor) {
        bcoef++;
      }
    }
    dnis = r->size[0];
    r->size[0] = bcoef;
    emxEnsureCapacity_int32_T(r, dnis);
    r2 = r->data;
    bcoef = 0;
    for (i = 0; i <= acoef; i++) {
      if (eigenvalues_data[i] > restr * dimsor) {
        r2[bcoef] = i + 1;
        bcoef++;
      }
    }
    loop_ub = r->size[0];
    for (dnis = 0; dnis < loop_ub; dnis++) {
      eigenvalues_data[r2[dnis] - 1] = restr * solmp_data[varargin_3 - 1];
    }
  } else {
    /*  if all the eigenvalues are 0 this means all points are concentrated */
    /*  in k groups and there is a perfect fit */
    /*  no further changes on the eigenvalues required, so return them */
    /*  immediately and stop the procedure! */
    /*  If all eigenvalues satisy the constraint */
    /*  no further changes on the eigenvalues required, so return them
     * immediately! */
    /*  Simply replace the 0 eigenvalues with the mean of the eigenvalues */
    /*  which are greater than zero */
  }
  emxFree_real_T(&r1);
  emxFree_real_T(&c_dltm);
  emxFree_real_T(&b_dltm);
  emxFree_real_T(&b_x);
  emxFree_real_T(&c);
  emxFree_real_T(&x);
  emxFree_int32_T(&r);
  emxFree_real_T(&ee);
  emxFree_real_T(&solmp);
  emxFree_real_T(&rr);
  emxFree_boolean_T(&dgtcm);
  emxFree_boolean_T(&dltm);
  emxFree_real_T(&b_dnis);
  emxFree_real_T(&ed);
  emxFree_real_T(&nis);
}

/* End of code generation (restreigen.c) */
