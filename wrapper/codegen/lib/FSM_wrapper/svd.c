/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * svd.c
 *
 * Code generation for function 'svd'
 *
 */

/* Include files */
#include "svd.h"
#include "FSM_wrapper_emxutil.h"
#include "FSM_wrapper_types.h"
#include "rt_nonfinite.h"
#include "mkl_cblas.h"
#include <math.h>

/* Function Definitions */
void svd(const emxArray_real_T *A, emxArray_real_T *U)
{
  emxArray_real_T *b_A;
  emxArray_real_T *e;
  emxArray_real_T *s;
  emxArray_real_T *work;
  double b;
  double nrm;
  double r;
  double scale;
  double sm;
  double sn;
  double snorm;
  double sqds;
  int i;
  int ii;
  int k;
  int m;
  int minnp;
  int n;
  int nct;
  int nmq;
  int nrt;
  int ns;
  int p;
  int q;
  int qp1;
  int qq;
  bool apply_transform;
  bool exitg1;
  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  ns = A->size[0] * A->size[1];
  for (i = 0; i < ns; i++) {
    b_A->data[i] = A->data[i];
  }
  emxInit_real_T(&s, 1);
  n = A->size[0];
  p = A->size[1];
  qq = A->size[0] + 1;
  ns = A->size[1];
  if (qq < ns) {
    ns = qq;
  }
  qq = A->size[0];
  minnp = A->size[1];
  if (qq < minnp) {
    minnp = qq;
  }
  i = s->size[0];
  s->size[0] = ns;
  emxEnsureCapacity_real_T(s, i);
  for (i = 0; i < ns; i++) {
    s->data[i] = 0.0;
  }
  emxInit_real_T(&e, 1);
  i = e->size[0];
  e->size[0] = A->size[1];
  emxEnsureCapacity_real_T(e, i);
  ns = A->size[1];
  for (i = 0; i < ns; i++) {
    e->data[i] = 0.0;
  }
  emxInit_real_T(&work, 1);
  i = work->size[0];
  work->size[0] = A->size[0];
  emxEnsureCapacity_real_T(work, i);
  ns = A->size[0];
  for (i = 0; i < ns; i++) {
    work->data[i] = 0.0;
  }
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    if (A->size[1] > 2) {
      qq = A->size[1] - 2;
    } else {
      qq = 0;
    }
    nrt = A->size[0];
    if (qq < nrt) {
      nrt = qq;
    }
    if (A->size[0] > 1) {
      qq = A->size[0] - 1;
    } else {
      qq = 0;
    }
    nct = A->size[1];
    if (qq < nct) {
      nct = qq;
    }
    if (nct > nrt) {
      i = nct;
    } else {
      i = nrt;
    }
    for (q = 0; q < i; q++) {
      qp1 = q + 2;
      qq = q + n * q;
      nmq = n - q;
      apply_transform = false;
      if (q + 1 <= nct) {
        if (nmq < 1) {
          nrm = 0.0;
        } else {
          nrm = cblas_dnrm2((MKL_INT)nmq, &b_A->data[qq], (MKL_INT)1);
        }
        if (nrm > 0.0) {
          apply_transform = true;
          if (b_A->data[qq] < 0.0) {
            sm = -nrm;
            s->data[q] = -nrm;
          } else {
            sm = nrm;
            s->data[q] = nrm;
          }
          if (fabs(sm) >= 1.0020841800044864E-292) {
            if (nmq >= 1) {
              cblas_dscal((MKL_INT)nmq, 1.0 / sm, &b_A->data[qq], (MKL_INT)1);
            }
          } else {
            ns = qq + nmq;
            for (k = qq + 1; k <= ns; k++) {
              b_A->data[k - 1] /= s->data[q];
            }
          }
          b_A->data[qq]++;
          s->data[q] = -s->data[q];
        } else {
          s->data[q] = 0.0;
        }
      }
      for (m = qp1; m <= p; m++) {
        ns = q + n * (m - 1);
        if (apply_transform && (nmq >= 1)) {
          nrm = cblas_ddot((MKL_INT)nmq, &b_A->data[qq], (MKL_INT)1,
                           &b_A->data[ns], (MKL_INT)1);
          cblas_daxpy((MKL_INT)nmq, -(nrm / b_A->data[q + b_A->size[0] * q]),
                      &b_A->data[qq], (MKL_INT)1, &b_A->data[ns], (MKL_INT)1);
        }
        e->data[m - 1] = b_A->data[ns];
      }
      if (q + 1 <= nrt) {
        ns = (p - q) - 1;
        if (ns < 1) {
          nrm = 0.0;
        } else {
          nrm = cblas_dnrm2((MKL_INT)ns, &e->data[q + 1], (MKL_INT)1);
        }
        if (nrm == 0.0) {
          e->data[q] = 0.0;
        } else {
          if (e->data[q + 1] < 0.0) {
            e->data[q] = -nrm;
          } else {
            e->data[q] = nrm;
          }
          sqds = e->data[q];
          if (fabs(e->data[q]) >= 1.0020841800044864E-292) {
            if (ns >= 1) {
              cblas_dscal((MKL_INT)ns, 1.0 / e->data[q], &e->data[q + 1],
                          (MKL_INT)1);
            }
          } else {
            ns += q;
            for (k = qp1; k <= ns + 1; k++) {
              e->data[k - 1] /= sqds;
            }
          }
          e->data[q + 1]++;
          e->data[q] = -e->data[q];
          if (q + 2 <= n) {
            for (ii = qp1; ii <= n; ii++) {
              work->data[ii - 1] = 0.0;
            }
            for (m = qp1; m <= p; m++) {
              if (nmq - 1 >= 1) {
                cblas_daxpy((MKL_INT)(nmq - 1), e->data[m - 1],
                            &b_A->data[(q + n * (m - 1)) + 1], (MKL_INT)1,
                            &work->data[q + 1], (MKL_INT)1);
              }
            }
            for (m = qp1; m <= p; m++) {
              if (nmq - 1 >= 1) {
                cblas_daxpy((MKL_INT)(nmq - 1),
                            -e->data[m - 1] / e->data[q + 1],
                            &work->data[q + 1], (MKL_INT)1,
                            &b_A->data[(q + n * (m - 1)) + 1], (MKL_INT)1);
              }
            }
          }
        }
      }
    }
    qq = A->size[1];
    m = A->size[0] + 1;
    if (qq < m) {
      m = qq;
    }
    if (nct < A->size[1]) {
      s->data[nct] = b_A->data[nct + b_A->size[0] * nct];
    }
    if (A->size[0] < m) {
      s->data[m - 1] = 0.0;
    }
    if (nrt + 1 < m) {
      e->data[nrt] = b_A->data[nrt + b_A->size[0] * (m - 1)];
    }
    e->data[m - 1] = 0.0;
    nct = m;
    nrt = 0;
    snorm = 0.0;
    for (q = 0; q < m; q++) {
      sm = s->data[q];
      if (s->data[q] != 0.0) {
        nrm = fabs(s->data[q]);
        r = s->data[q] / nrm;
        sm = nrm;
        s->data[q] = nrm;
        if (q + 1 < m) {
          e->data[q] /= r;
        }
      }
      if ((q + 1 < m) && (e->data[q] != 0.0)) {
        nrm = fabs(e->data[q]);
        r = nrm / e->data[q];
        e->data[q] = nrm;
        s->data[q + 1] *= r;
      }
      snorm = fmax(snorm, fmax(fabs(sm), fabs(e->data[q])));
    }
    while ((m > 0) && (nrt < 75)) {
      nmq = m - 1;
      ii = m - 1;
      exitg1 = false;
      while (!(exitg1 || (ii == 0))) {
        nrm = fabs(e->data[ii - 1]);
        if ((nrm <= 2.2204460492503131E-16 *
                        (fabs(s->data[ii - 1]) + fabs(s->data[ii]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((nrt > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e->data[ii - 1] = 0.0;
          exitg1 = true;
        } else {
          ii--;
        }
      }
      if (ii == m - 1) {
        ns = 4;
      } else {
        qq = m;
        ns = m;
        exitg1 = false;
        while ((!exitg1) && (ns >= ii)) {
          qq = ns;
          if (ns == ii) {
            exitg1 = true;
          } else {
            nrm = 0.0;
            if (ns < m) {
              nrm = fabs(e->data[ns - 1]);
            }
            if (ns > ii + 1) {
              nrm += fabs(e->data[ns - 2]);
            }
            r = fabs(s->data[ns - 1]);
            if ((r <= 2.2204460492503131E-16 * nrm) ||
                (r <= 1.0020841800044864E-292)) {
              s->data[ns - 1] = 0.0;
              exitg1 = true;
            } else {
              ns--;
            }
          }
        }
        if (qq == ii) {
          ns = 3;
        } else if (qq == m) {
          ns = 1;
        } else {
          ns = 2;
          ii = qq;
        }
      }
      switch (ns) {
      case 1:
        r = e->data[m - 2];
        e->data[m - 2] = 0.0;
        for (k = nmq; k >= ii + 1; k--) {
          scale = 0.0;
          sn = 0.0;
          cblas_drotg(&s->data[k - 1], &r, &scale, &sn);
          if (k > ii + 1) {
            nrm = e->data[k - 2];
            r = -sn * nrm;
            e->data[k - 2] = nrm * scale;
          }
        }
        break;
      case 2:
        r = e->data[ii - 1];
        e->data[ii - 1] = 0.0;
        for (k = ii + 1; k <= m; k++) {
          scale = 0.0;
          sn = 0.0;
          cblas_drotg(&s->data[k - 1], &r, &scale, &sn);
          nrm = e->data[k - 1];
          r = -sn * nrm;
          e->data[k - 1] = nrm * scale;
        }
        break;
      case 3:
        nrm = s->data[m - 1];
        r = s->data[m - 2];
        sqds = e->data[m - 2];
        scale = fmax(
            fmax(fmax(fmax(fabs(nrm), fabs(r)), fabs(sqds)), fabs(s->data[ii])),
            fabs(e->data[ii]));
        sm = nrm / scale;
        nrm = r / scale;
        r = sqds / scale;
        sqds = s->data[ii] / scale;
        b = ((nrm + sm) * (nrm - sm) + r * r) / 2.0;
        nrm = sm * r;
        nrm *= nrm;
        if ((b != 0.0) || (nrm != 0.0)) {
          r = sqrt(b * b + nrm);
          if (b < 0.0) {
            r = -r;
          }
          r = nrm / (b + r);
        } else {
          r = 0.0;
        }
        r += (sqds + sm) * (sqds - sm);
        nrm = sqds * (e->data[ii] / scale);
        for (k = ii + 1; k <= nmq; k++) {
          scale = 0.0;
          sn = 0.0;
          cblas_drotg(&r, &nrm, &scale, &sn);
          if (k > ii + 1) {
            e->data[k - 2] = r;
          }
          nrm = e->data[k - 1];
          r = s->data[k - 1];
          sqds = scale * r + sn * nrm;
          e->data[k - 1] = scale * nrm - sn * r;
          b = sn * s->data[k];
          sm = s->data[k] * scale;
          scale = 0.0;
          sn = 0.0;
          cblas_drotg(&sqds, &b, &scale, &sn);
          s->data[k - 1] = sqds;
          r = scale * e->data[k - 1] + sn * sm;
          sm = -sn * e->data[k - 1] + scale * sm;
          s->data[k] = sm;
          nrm = sn * e->data[k];
          e->data[k] *= scale;
        }
        e->data[m - 2] = r;
        nrt++;
        break;
      default:
        if (s->data[ii] < 0.0) {
          s->data[ii] = -s->data[ii];
        }
        qp1 = ii + 1;
        while ((ii + 1 < nct) && (s->data[ii] < s->data[qp1])) {
          nrm = s->data[ii];
          s->data[ii] = s->data[qp1];
          s->data[qp1] = nrm;
          ii = qp1;
          qp1++;
        }
        nrt = 0;
        m--;
        break;
      }
    }
  }
  emxFree_real_T(&work);
  emxFree_real_T(&e);
  emxFree_real_T(&b_A);
  i = U->size[0];
  U->size[0] = minnp;
  emxEnsureCapacity_real_T(U, i);
  for (k = 0; k < minnp; k++) {
    U->data[k] = s->data[k];
  }
  emxFree_real_T(&s);
}

/* End of code generation (svd.c) */
