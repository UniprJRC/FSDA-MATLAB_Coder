/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sumprod.c
 *
 * Code generation for function 'sumprod'
 *
 */

/* Include files */
#include "sumprod.h"
#include "combineVectorElements.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void eg_binary_expand_op(emxArray_real_T *ed, const emxArray_real_T *rr,
                         const emxArray_real_T *ninin)
{
  emxArray_real_T *b_rr;
  const double *ninin_data;
  const double *rr_data;
  double *b_rr_data;
  int b_loop_ub;
  int i;
  int i1;
  int loop_ub;
  int ninin_idx_0;
  int stride_0_0;
  int stride_1_0;
  ninin_data = ninin->data;
  rr_data = rr->data;
  emxInit_real_T(&b_rr, 2);
  ninin_idx_0 = ninin->size[0];
  i = b_rr->size[0] * b_rr->size[1];
  if (ninin_idx_0 == 1) {
    b_rr->size[0] = rr->size[0];
  } else {
    b_rr->size[0] = ninin_idx_0;
  }
  b_rr->size[1] = rr->size[1];
  emxEnsureCapacity_real_T(b_rr, i);
  b_rr_data = b_rr->data;
  stride_0_0 = (rr->size[0] != 1);
  stride_1_0 = (ninin_idx_0 != 1);
  loop_ub = rr->size[1];
  for (i = 0; i < loop_ub; i++) {
    if (ninin_idx_0 == 1) {
      b_loop_ub = rr->size[0];
    } else {
      b_loop_ub = ninin_idx_0;
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_rr_data[i1 + b_rr->size[0] * i] =
          rr_data[i1 * stride_0_0 + rr->size[0] * i] *
          ninin_data[i1 * stride_1_0];
    }
  }
  combineVectorElements(b_rr, ed);
  emxFree_real_T(&b_rr);
}

void kg_binary_expand_op(emxArray_real_T *ed, const emxArray_real_T *rr,
                         const emxArray_real_T *nininmat)
{
  emxArray_real_T *b_rr;
  const double *nininmat_data;
  const double *rr_data;
  double *b_rr_data;
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
  nininmat_data = nininmat->data;
  rr_data = rr->data;
  emxInit_real_T(&b_rr, 2);
  i = b_rr->size[0] * b_rr->size[1];
  if (nininmat->size[0] == 1) {
    b_rr->size[0] = rr->size[0];
  } else {
    b_rr->size[0] = nininmat->size[0];
  }
  if (nininmat->size[1] == 1) {
    b_rr->size[1] = rr->size[1];
  } else {
    b_rr->size[1] = nininmat->size[1];
  }
  emxEnsureCapacity_real_T(b_rr, i);
  b_rr_data = b_rr->data;
  stride_0_0 = (rr->size[0] != 1);
  stride_0_1 = (rr->size[1] != 1);
  stride_1_0 = (nininmat->size[0] != 1);
  stride_1_1 = (nininmat->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (nininmat->size[1] == 1) {
    loop_ub = rr->size[1];
  } else {
    loop_ub = nininmat->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (nininmat->size[0] == 1) {
      b_loop_ub = rr->size[0];
    } else {
      b_loop_ub = nininmat->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_rr_data[i1 + b_rr->size[0] * i] =
          rr_data[i1 * stride_0_0 + rr->size[0] * aux_0_1] *
          nininmat_data[i1 * stride_1_0 + nininmat->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  combineVectorElements(b_rr, ed);
  emxFree_real_T(&b_rr);
}

void lg_binary_expand_op(emxArray_real_T *solmp, const emxArray_real_T *ss,
                         const emxArray_real_T *tt, double restr,
                         const emxArray_real_T *nininmat)
{
  emxArray_real_T *b_ss;
  const double *nininmat_data;
  const double *ss_data;
  const double *tt_data;
  double *b_ss_data;
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
  nininmat_data = nininmat->data;
  tt_data = tt->data;
  ss_data = ss->data;
  emxInit_real_T(&b_ss, 2);
  i = b_ss->size[0] * b_ss->size[1];
  if (nininmat->size[0] == 1) {
    if (tt->size[0] == 1) {
      b_ss->size[0] = ss->size[0];
    } else {
      b_ss->size[0] = tt->size[0];
    }
  } else {
    b_ss->size[0] = nininmat->size[0];
  }
  if (nininmat->size[1] == 1) {
    if (tt->size[1] == 1) {
      b_ss->size[1] = ss->size[1];
    } else {
      b_ss->size[1] = tt->size[1];
    }
  } else {
    b_ss->size[1] = nininmat->size[1];
  }
  emxEnsureCapacity_real_T(b_ss, i);
  b_ss_data = b_ss->data;
  stride_0_0 = (ss->size[0] != 1);
  stride_0_1 = (ss->size[1] != 1);
  stride_1_0 = (tt->size[0] != 1);
  stride_1_1 = (tt->size[1] != 1);
  stride_2_0 = (nininmat->size[0] != 1);
  stride_2_1 = (nininmat->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  if (nininmat->size[1] == 1) {
    if (tt->size[1] == 1) {
      loop_ub = ss->size[1];
    } else {
      loop_ub = tt->size[1];
    }
  } else {
    loop_ub = nininmat->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    if (nininmat->size[0] == 1) {
      if (tt->size[0] == 1) {
        b_loop_ub = ss->size[0];
      } else {
        b_loop_ub = tt->size[0];
      }
    } else {
      b_loop_ub = nininmat->size[0];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_ss_data[i1 + b_ss->size[0] * i] =
          (ss_data[i1 * stride_0_0 + ss->size[0] * aux_0_1] +
           tt_data[i1 * stride_1_0 + tt->size[0] * aux_1_1] / restr) *
          nininmat_data[i1 * stride_2_0 + nininmat->size[0] * aux_2_1];
    }
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  combineVectorElements(b_ss, solmp);
  emxFree_real_T(&b_ss);
}

void qg_binary_expand_op(emxArray_real_T *r1, const emxArray_real_T *nis,
                         double n, const emxArray_real_T *r2,
                         const emxArray_real_T *d, const emxArray_real_T *e)
{
  emxArray_real_T *b_nis;
  const double *d_data;
  const double *e_data;
  const double *nis_data;
  const double *r;
  double *b_nis_data;
  int aux_0_1;
  int aux_1_1;
  int aux_2_1;
  int aux_3_1;
  int b_e;
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
  e_data = e->data;
  d_data = d->data;
  r = r2->data;
  nis_data = nis->data;
  emxInit_real_T(&b_nis, 2);
  i = b_nis->size[0] * b_nis->size[1];
  if (e->size[0] == 1) {
    b_e = d->size[0];
  } else {
    b_e = e->size[0];
  }
  if (b_e == 1) {
    b_e = r2->size[0];
  } else if (e->size[0] == 1) {
    b_e = d->size[0];
  } else {
    b_e = e->size[0];
  }
  if (b_e == 1) {
    b_nis->size[0] = nis->size[0];
  } else {
    if (e->size[0] == 1) {
      b_e = d->size[0];
    } else {
      b_e = e->size[0];
    }
    if (b_e == 1) {
      b_nis->size[0] = r2->size[0];
    } else if (e->size[0] == 1) {
      b_nis->size[0] = d->size[0];
    } else {
      b_nis->size[0] = e->size[0];
    }
  }
  if (e->size[1] == 1) {
    b_e = d->size[1];
  } else {
    b_e = e->size[1];
  }
  if (b_e == 1) {
    b_e = r2->size[1];
  } else if (e->size[1] == 1) {
    b_e = d->size[1];
  } else {
    b_e = e->size[1];
  }
  if (b_e == 1) {
    b_nis->size[1] = nis->size[1];
  } else {
    if (e->size[1] == 1) {
      b_e = d->size[1];
    } else {
      b_e = e->size[1];
    }
    if (b_e == 1) {
      b_nis->size[1] = r2->size[1];
    } else if (e->size[1] == 1) {
      b_nis->size[1] = d->size[1];
    } else {
      b_nis->size[1] = e->size[1];
    }
  }
  emxEnsureCapacity_real_T(b_nis, i);
  b_nis_data = b_nis->data;
  stride_0_0 = (nis->size[0] != 1);
  stride_0_1 = (nis->size[1] != 1);
  stride_1_0 = (r2->size[0] != 1);
  stride_1_1 = (r2->size[1] != 1);
  stride_2_0 = (d->size[0] != 1);
  stride_2_1 = (d->size[1] != 1);
  stride_3_0 = (e->size[0] != 1);
  stride_3_1 = (e->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  aux_2_1 = 0;
  aux_3_1 = 0;
  if (e->size[1] == 1) {
    b_e = d->size[1];
  } else {
    b_e = e->size[1];
  }
  if (b_e == 1) {
    b_e = r2->size[1];
  } else if (e->size[1] == 1) {
    b_e = d->size[1];
  } else {
    b_e = e->size[1];
  }
  if (b_e == 1) {
    loop_ub = nis->size[1];
  } else {
    if (e->size[1] == 1) {
      b_e = d->size[1];
    } else {
      b_e = e->size[1];
    }
    if (b_e == 1) {
      loop_ub = r2->size[1];
    } else if (e->size[1] == 1) {
      loop_ub = d->size[1];
    } else {
      loop_ub = e->size[1];
    }
  }
  for (i = 0; i < loop_ub; i++) {
    if (e->size[0] == 1) {
      b_e = d->size[0];
    } else {
      b_e = e->size[0];
    }
    if (b_e == 1) {
      b_e = r2->size[0];
    } else if (e->size[0] == 1) {
      b_e = d->size[0];
    } else {
      b_e = e->size[0];
    }
    if (b_e == 1) {
      b_e = nis->size[0];
    } else {
      if (e->size[0] == 1) {
        b_e = d->size[0];
      } else {
        b_e = e->size[0];
      }
      if (b_e == 1) {
        b_e = r2->size[0];
      } else if (e->size[0] == 1) {
        b_e = d->size[0];
      } else {
        b_e = e->size[0];
      }
    }
    for (i1 = 0; i1 < b_e; i1++) {
      b_nis_data[i1 + b_nis->size[0] * i] =
          nis_data[i1 * stride_0_0 + nis->size[0] * aux_0_1] / n *
          (r[i1 * stride_1_0 + r2->size[0] * aux_1_1] +
           d_data[i1 * stride_2_0 + d->size[0] * aux_2_1] /
               e_data[i1 * stride_3_0 + e->size[0] * aux_3_1]);
    }
    aux_3_1 += stride_3_1;
    aux_2_1 += stride_2_1;
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  combineVectorElements(b_nis, r1);
  emxFree_real_T(&b_nis);
}

/* End of code generation (sumprod.c) */
