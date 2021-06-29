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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "xaxpy.h"
#include "xnrm2.h"
#include "xrotg.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_svd(const emxArray_real_T *A, emxArray_real_T *U, emxArray_real_T *s,
           emxArray_real_T *V)
{
  emxArray_real_T *Vf;
  emxArray_real_T *b_A;
  emxArray_real_T *b_s;
  emxArray_real_T *e;
  emxArray_real_T *work;
  double b;
  double nrm;
  double r;
  double scale;
  double sm;
  double snorm;
  double temp;
  int i;
  int ii;
  int jj;
  int k;
  int m;
  int minnp;
  int n;
  int nct;
  int nctp1;
  int nmq;
  int nrt;
  int ns;
  int p;
  int q;
  int qjj;
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
  emxInit_real_T(&b_s, 1);
  n = A->size[0];
  p = A->size[1];
  qjj = A->size[0] + 1;
  ns = A->size[1];
  if (qjj < ns) {
    ns = qjj;
  }
  qjj = A->size[0];
  minnp = A->size[1];
  if (qjj < minnp) {
    minnp = qjj;
  }
  i = b_s->size[0];
  b_s->size[0] = ns;
  emxEnsureCapacity_real_T(b_s, i);
  for (i = 0; i < ns; i++) {
    b_s->data[i] = 0.0;
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
  i = U->size[0] * U->size[1];
  U->size[0] = A->size[0];
  U->size[1] = minnp;
  emxEnsureCapacity_real_T(U, i);
  ns = A->size[0] * minnp;
  for (i = 0; i < ns; i++) {
    U->data[i] = 0.0;
  }
  emxInit_real_T(&Vf, 2);
  i = Vf->size[0] * Vf->size[1];
  Vf->size[0] = A->size[1];
  Vf->size[1] = A->size[1];
  emxEnsureCapacity_real_T(Vf, i);
  ns = A->size[1] * A->size[1];
  for (i = 0; i < ns; i++) {
    Vf->data[i] = 0.0;
  }
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    qjj = A->size[0];
    if (qjj >= minnp) {
      qjj = minnp;
    }
    for (ii = 0; ii < qjj; ii++) {
      U->data[ii + U->size[0] * ii] = 1.0;
    }
    i = A->size[1];
    for (ii = 0; ii < i; ii++) {
      Vf->data[ii + Vf->size[0] * ii] = 1.0;
    }
  } else {
    if (A->size[1] > 2) {
      qjj = A->size[1] - 2;
    } else {
      qjj = 0;
    }
    nrt = A->size[0];
    if (qjj < nrt) {
      nrt = qjj;
    }
    if (A->size[0] > 1) {
      qjj = A->size[0] - 1;
    } else {
      qjj = 0;
    }
    nct = A->size[1];
    if (qjj < nct) {
      nct = qjj;
    }
    nctp1 = nct + 1;
    if (nct > nrt) {
      i = nct;
    } else {
      i = nrt;
    }
    for (q = 0; q < i; q++) {
      qp1 = q + 2;
      qq = (q + n * q) + 1;
      nmq = (n - q) - 1;
      apply_transform = false;
      if (q + 1 <= nct) {
        nrm = xnrm2(nmq + 1, b_A, qq);
        if (nrm > 0.0) {
          apply_transform = true;
          if (b_A->data[qq - 1] < 0.0) {
            r = -nrm;
            b_s->data[q] = -nrm;
          } else {
            r = nrm;
            b_s->data[q] = nrm;
          }
          if (fabs(r) >= 1.0020841800044864E-292) {
            nrm = 1.0 / r;
            ns = qq + nmq;
            for (k = qq; k <= ns; k++) {
              b_A->data[k - 1] *= nrm;
            }
          } else {
            ns = qq + nmq;
            for (k = qq; k <= ns; k++) {
              b_A->data[k - 1] /= b_s->data[q];
            }
          }
          b_A->data[qq - 1]++;
          b_s->data[q] = -b_s->data[q];
        } else {
          b_s->data[q] = 0.0;
        }
      }
      for (jj = qp1; jj <= p; jj++) {
        qjj = q + n * (jj - 1);
        if (apply_transform) {
          nrm = 0.0;
          if (nmq + 1 >= 1) {
            for (k = 0; k <= nmq; k++) {
              nrm += b_A->data[(qq + k) - 1] * b_A->data[qjj + k];
            }
          }
          nrm = -(nrm / b_A->data[q + b_A->size[0] * q]);
          xaxpy(nmq + 1, nrm, qq, b_A, qjj + 1);
        }
        e->data[jj - 1] = b_A->data[qjj];
      }
      if (q + 1 <= nct) {
        for (ii = q + 1; ii <= n; ii++) {
          U->data[(ii + U->size[0] * q) - 1] =
              b_A->data[(ii + b_A->size[0] * q) - 1];
        }
      }
      if (q + 1 <= nrt) {
        qq = p - q;
        nrm = xnrm2(qq - 1, e, q + 2);
        if (nrm == 0.0) {
          e->data[q] = 0.0;
        } else {
          if (e->data[q + 1] < 0.0) {
            e->data[q] = -nrm;
          } else {
            e->data[q] = nrm;
          }
          nrm = e->data[q];
          if (fabs(e->data[q]) >= 1.0020841800044864E-292) {
            nrm = 1.0 / e->data[q];
            ns = q + qq;
            for (k = qp1; k <= ns; k++) {
              e->data[k - 1] *= nrm;
            }
          } else {
            ns = q + qq;
            for (k = qp1; k <= ns; k++) {
              e->data[k - 1] /= nrm;
            }
          }
          e->data[q + 1]++;
          e->data[q] = -e->data[q];
          if (q + 2 <= n) {
            for (ii = qp1; ii <= n; ii++) {
              work->data[ii - 1] = 0.0;
            }
            for (jj = qp1; jj <= p; jj++) {
              b_xaxpy(nmq, e->data[jj - 1], b_A, (q + n * (jj - 1)) + 2, work,
                      q + 2);
            }
            for (jj = qp1; jj <= p; jj++) {
              b_xaxpy(nmq, -e->data[jj - 1] / e->data[q + 1], work, q + 2, b_A,
                      (q + n * (jj - 1)) + 2);
            }
          }
        }
        for (ii = qp1; ii <= p; ii++) {
          Vf->data[(ii + Vf->size[0] * q) - 1] = e->data[ii - 1];
        }
      }
    }
    if (A->size[1] < A->size[0] + 1) {
      m = A->size[1] - 1;
    } else {
      m = A->size[0];
    }
    if (nct < A->size[1]) {
      b_s->data[nct] = b_A->data[nct + b_A->size[0] * nct];
    }
    if (A->size[0] < m + 1) {
      b_s->data[m] = 0.0;
    }
    if (nrt + 1 < m + 1) {
      e->data[nrt] = b_A->data[nrt + b_A->size[0] * m];
    }
    e->data[m] = 0.0;
    if (nct + 1 <= minnp) {
      for (jj = nctp1; jj <= minnp; jj++) {
        for (ii = 0; ii < n; ii++) {
          U->data[ii + U->size[0] * (jj - 1)] = 0.0;
        }
        U->data[(jj + U->size[0] * (jj - 1)) - 1] = 1.0;
      }
    }
    for (q = nct; q >= 1; q--) {
      qp1 = q + 1;
      ns = n - q;
      qq = (q + n * (q - 1)) - 1;
      if (b_s->data[q - 1] != 0.0) {
        for (jj = qp1; jj <= minnp; jj++) {
          qjj = q + n * (jj - 1);
          nrm = 0.0;
          if (ns + 1 >= 1) {
            for (k = 0; k <= ns; k++) {
              nrm += U->data[qq + k] * U->data[(qjj + k) - 1];
            }
          }
          nrm = -(nrm / U->data[qq]);
          xaxpy(ns + 1, nrm, qq + 1, U, qjj);
        }
        for (ii = q; ii <= n; ii++) {
          U->data[(ii + U->size[0] * (q - 1)) - 1] =
              -U->data[(ii + U->size[0] * (q - 1)) - 1];
        }
        U->data[qq]++;
        for (ii = 0; ii <= q - 2; ii++) {
          U->data[ii + U->size[0] * (q - 1)] = 0.0;
        }
      } else {
        for (ii = 0; ii < n; ii++) {
          U->data[ii + U->size[0] * (q - 1)] = 0.0;
        }
        U->data[qq] = 1.0;
      }
    }
    for (q = p; q >= 1; q--) {
      if ((q <= nrt) && (e->data[q - 1] != 0.0)) {
        qp1 = q + 1;
        qq = p - q;
        ns = q + p * (q - 1);
        for (jj = qp1; jj <= p; jj++) {
          qjj = q + p * (jj - 1);
          nrm = 0.0;
          if (qq >= 1) {
            for (k = 0; k < qq; k++) {
              nrm += Vf->data[ns + k] * Vf->data[qjj + k];
            }
          }
          nrm = -(nrm / Vf->data[ns]);
          xaxpy(qq, nrm, ns + 1, Vf, qjj + 1);
        }
      }
      for (ii = 0; ii < p; ii++) {
        Vf->data[ii + Vf->size[0] * (q - 1)] = 0.0;
      }
      Vf->data[(q + Vf->size[0] * (q - 1)) - 1] = 1.0;
    }
    nct = m;
    nctp1 = 0;
    snorm = 0.0;
    for (q = 0; q <= m; q++) {
      if (b_s->data[q] != 0.0) {
        nrm = fabs(b_s->data[q]);
        r = b_s->data[q] / nrm;
        b_s->data[q] = nrm;
        if (q + 1 < m + 1) {
          e->data[q] /= r;
        }
        if (q + 1 <= n) {
          ns = n * q;
          i = ns + n;
          for (k = ns + 1; k <= i; k++) {
            U->data[k - 1] *= r;
          }
        }
      }
      if ((q + 1 < m + 1) && (e->data[q] != 0.0)) {
        nrm = fabs(e->data[q]);
        r = nrm / e->data[q];
        e->data[q] = nrm;
        b_s->data[q + 1] *= r;
        ns = p * (q + 1);
        i = ns + p;
        for (k = ns + 1; k <= i; k++) {
          Vf->data[k - 1] *= r;
        }
      }
      snorm = fmax(snorm, fmax(fabs(b_s->data[q]), fabs(e->data[q])));
    }
    while ((m + 1 > 0) && (nctp1 < 75)) {
      ii = m;
      exitg1 = false;
      while (!(exitg1 || (ii == 0))) {
        nrm = fabs(e->data[ii - 1]);
        if ((nrm <= 2.2204460492503131E-16 *
                        (fabs(b_s->data[ii - 1]) + fabs(b_s->data[ii]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((nctp1 > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e->data[ii - 1] = 0.0;
          exitg1 = true;
        } else {
          ii--;
        }
      }
      if (ii == m) {
        ns = 4;
      } else {
        qjj = m + 1;
        ns = m + 1;
        exitg1 = false;
        while ((!exitg1) && (ns >= ii)) {
          qjj = ns;
          if (ns == ii) {
            exitg1 = true;
          } else {
            nrm = 0.0;
            if (ns < m + 1) {
              nrm = fabs(e->data[ns - 1]);
            }
            if (ns > ii + 1) {
              nrm += fabs(e->data[ns - 2]);
            }
            r = fabs(b_s->data[ns - 1]);
            if ((r <= 2.2204460492503131E-16 * nrm) ||
                (r <= 1.0020841800044864E-292)) {
              b_s->data[ns - 1] = 0.0;
              exitg1 = true;
            } else {
              ns--;
            }
          }
        }
        if (qjj == ii) {
          ns = 3;
        } else if (qjj == m + 1) {
          ns = 1;
        } else {
          ns = 2;
          ii = qjj;
        }
      }
      switch (ns) {
      case 1:
        r = e->data[m - 1];
        e->data[m - 1] = 0.0;
        for (k = m; k >= ii + 1; k--) {
          xrotg(&b_s->data[k - 1], &r, &sm, &scale);
          if (k > ii + 1) {
            b = e->data[k - 2];
            r = -scale * b;
            e->data[k - 2] = b * sm;
          }
          if (p >= 1) {
            qjj = p * (k - 1);
            qq = p * m;
            for (nrt = 0; nrt < p; nrt++) {
              nmq = qq + nrt;
              ns = qjj + nrt;
              temp = sm * Vf->data[ns] + scale * Vf->data[nmq];
              Vf->data[nmq] = sm * Vf->data[nmq] - scale * Vf->data[ns];
              Vf->data[ns] = temp;
            }
          }
        }
        break;
      case 2:
        r = e->data[ii - 1];
        e->data[ii - 1] = 0.0;
        for (k = ii + 1; k <= m + 1; k++) {
          xrotg(&b_s->data[k - 1], &r, &sm, &scale);
          b = e->data[k - 1];
          r = -scale * b;
          e->data[k - 1] = b * sm;
          if (n >= 1) {
            qjj = n * (k - 1);
            qq = n * (ii - 1);
            for (nrt = 0; nrt < n; nrt++) {
              nmq = qq + nrt;
              ns = qjj + nrt;
              temp = sm * U->data[ns] + scale * U->data[nmq];
              U->data[nmq] = sm * U->data[nmq] - scale * U->data[ns];
              U->data[ns] = temp;
            }
          }
        }
        break;
      case 3:
        nrm = b_s->data[m - 1];
        r = e->data[m - 1];
        scale = fmax(fmax(fmax(fmax(fabs(b_s->data[m]), fabs(nrm)), fabs(r)),
                          fabs(b_s->data[ii])),
                     fabs(e->data[ii]));
        sm = b_s->data[m] / scale;
        nrm /= scale;
        r /= scale;
        temp = b_s->data[ii] / scale;
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
        r += (temp + sm) * (temp - sm);
        nrm = temp * (e->data[ii] / scale);
        for (k = ii + 1; k <= m; k++) {
          xrotg(&r, &nrm, &sm, &scale);
          if (k > ii + 1) {
            e->data[k - 2] = r;
          }
          b = e->data[k - 1];
          nrm = b_s->data[k - 1];
          e->data[k - 1] = sm * b - scale * nrm;
          r = scale * b_s->data[k];
          b_s->data[k] *= sm;
          if (p >= 1) {
            qjj = p * (k - 1);
            qq = p * k;
            for (nrt = 0; nrt < p; nrt++) {
              nmq = qq + nrt;
              ns = qjj + nrt;
              temp = sm * Vf->data[ns] + scale * Vf->data[nmq];
              Vf->data[nmq] = sm * Vf->data[nmq] - scale * Vf->data[ns];
              Vf->data[ns] = temp;
            }
          }
          b_s->data[k - 1] = sm * nrm + scale * b;
          xrotg(&b_s->data[k - 1], &r, &sm, &scale);
          r = sm * e->data[k - 1] + scale * b_s->data[k];
          b_s->data[k] = -scale * e->data[k - 1] + sm * b_s->data[k];
          nrm = scale * e->data[k];
          e->data[k] *= sm;
          if ((k < n) && (n >= 1)) {
            qjj = n * (k - 1);
            qq = n * k;
            for (nrt = 0; nrt < n; nrt++) {
              nmq = qq + nrt;
              ns = qjj + nrt;
              temp = sm * U->data[ns] + scale * U->data[nmq];
              U->data[nmq] = sm * U->data[nmq] - scale * U->data[ns];
              U->data[ns] = temp;
            }
          }
        }
        e->data[m - 1] = r;
        nctp1++;
        break;
      default:
        if (b_s->data[ii] < 0.0) {
          b_s->data[ii] = -b_s->data[ii];
          ns = p * ii;
          i = ns + p;
          for (k = ns + 1; k <= i; k++) {
            Vf->data[k - 1] = -Vf->data[k - 1];
          }
        }
        qp1 = ii + 1;
        while ((ii + 1 < nct + 1) && (b_s->data[ii] < b_s->data[qp1])) {
          nrm = b_s->data[ii];
          b_s->data[ii] = b_s->data[qp1];
          b_s->data[qp1] = nrm;
          if (ii + 1 < p) {
            qjj = p * ii;
            qq = p * (ii + 1);
            for (k = 0; k < p; k++) {
              nmq = qjj + k;
              temp = Vf->data[nmq];
              i = qq + k;
              Vf->data[nmq] = Vf->data[i];
              Vf->data[i] = temp;
            }
          }
          if (ii + 1 < n) {
            qjj = n * ii;
            qq = n * (ii + 1);
            for (k = 0; k < n; k++) {
              nmq = qjj + k;
              temp = U->data[nmq];
              i = qq + k;
              U->data[nmq] = U->data[i];
              U->data[i] = temp;
            }
          }
          ii = qp1;
          qp1++;
        }
        nctp1 = 0;
        m--;
        break;
      }
    }
  }
  emxFree_real_T(&work);
  emxFree_real_T(&e);
  emxFree_real_T(&b_A);
  i = s->size[0];
  s->size[0] = minnp;
  emxEnsureCapacity_real_T(s, i);
  i = V->size[0] * V->size[1];
  V->size[0] = A->size[1];
  V->size[1] = minnp;
  emxEnsureCapacity_real_T(V, i);
  for (k = 0; k < minnp; k++) {
    s->data[k] = b_s->data[k];
    for (ns = 0; ns < p; ns++) {
      V->data[ns + V->size[0] * k] = Vf->data[ns + Vf->size[0] * k];
    }
  }
  emxFree_real_T(&Vf);
  emxFree_real_T(&b_s);
}

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
  double snorm;
  double sqds;
  int i;
  int jj;
  int k;
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
      qq = (q + n * q) + 1;
      nmq = (n - q) - 1;
      apply_transform = false;
      if (q + 1 <= nct) {
        nrm = xnrm2(nmq + 1, b_A, qq);
        if (nrm > 0.0) {
          apply_transform = true;
          if (b_A->data[qq - 1] < 0.0) {
            b = -nrm;
            s->data[q] = -nrm;
          } else {
            b = nrm;
            s->data[q] = nrm;
          }
          if (fabs(b) >= 1.0020841800044864E-292) {
            nrm = 1.0 / b;
            ns = qq + nmq;
            for (k = qq; k <= ns; k++) {
              b_A->data[k - 1] *= nrm;
            }
          } else {
            ns = qq + nmq;
            for (k = qq; k <= ns; k++) {
              b_A->data[k - 1] /= s->data[q];
            }
          }
          b_A->data[qq - 1]++;
          s->data[q] = -s->data[q];
        } else {
          s->data[q] = 0.0;
        }
      }
      for (jj = qp1; jj <= p; jj++) {
        ns = q + n * (jj - 1);
        if (apply_transform) {
          nrm = 0.0;
          if (nmq + 1 >= 1) {
            for (k = 0; k <= nmq; k++) {
              nrm += b_A->data[(qq + k) - 1] * b_A->data[ns + k];
            }
          }
          nrm = -(nrm / b_A->data[q + b_A->size[0] * q]);
          xaxpy(nmq + 1, nrm, qq, b_A, ns + 1);
        }
        e->data[jj - 1] = b_A->data[ns];
      }
      if (q + 1 <= nrt) {
        ns = p - q;
        nrm = xnrm2(ns - 1, e, q + 2);
        if (nrm == 0.0) {
          e->data[q] = 0.0;
        } else {
          if (e->data[q + 1] < 0.0) {
            e->data[q] = -nrm;
          } else {
            e->data[q] = nrm;
          }
          nrm = e->data[q];
          if (fabs(e->data[q]) >= 1.0020841800044864E-292) {
            nrm = 1.0 / e->data[q];
            ns += q;
            for (k = qp1; k <= ns; k++) {
              e->data[k - 1] *= nrm;
            }
          } else {
            ns += q;
            for (k = qp1; k <= ns; k++) {
              e->data[k - 1] /= nrm;
            }
          }
          e->data[q + 1]++;
          e->data[q] = -e->data[q];
          if (q + 2 <= n) {
            for (jj = qp1; jj <= n; jj++) {
              work->data[jj - 1] = 0.0;
            }
            for (jj = qp1; jj <= p; jj++) {
              b_xaxpy(nmq, e->data[jj - 1], b_A, (q + n * (jj - 1)) + 2, work,
                      q + 2);
            }
            for (jj = qp1; jj <= p; jj++) {
              b_xaxpy(nmq, -e->data[jj - 1] / e->data[q + 1], work, q + 2, b_A,
                      (q + n * (jj - 1)) + 2);
            }
          }
        }
      }
    }
    qq = A->size[1];
    n = A->size[0] + 1;
    if (qq < n) {
      n = qq;
    }
    if (nct < A->size[1]) {
      s->data[nct] = b_A->data[nct + b_A->size[0] * nct];
    }
    if (A->size[0] < n) {
      s->data[n - 1] = 0.0;
    }
    if (nrt + 1 < n) {
      e->data[nrt] = b_A->data[nrt + b_A->size[0] * (n - 1)];
    }
    e->data[n - 1] = 0.0;
    nct = n;
    nrt = 0;
    snorm = 0.0;
    for (q = 0; q < n; q++) {
      b = s->data[q];
      if (s->data[q] != 0.0) {
        nrm = fabs(s->data[q]);
        r = s->data[q] / nrm;
        b = nrm;
        s->data[q] = nrm;
        if (q + 1 < n) {
          e->data[q] /= r;
        }
      }
      if ((q + 1 < n) && (e->data[q] != 0.0)) {
        nrm = fabs(e->data[q]);
        r = nrm / e->data[q];
        e->data[q] = nrm;
        s->data[q + 1] *= r;
      }
      snorm = fmax(snorm, fmax(fabs(b), fabs(e->data[q])));
    }
    while ((n > 0) && (nrt < 75)) {
      nmq = n - 1;
      jj = n - 1;
      exitg1 = false;
      while (!(exitg1 || (jj == 0))) {
        nrm = fabs(e->data[jj - 1]);
        if ((nrm <= 2.2204460492503131E-16 *
                        (fabs(s->data[jj - 1]) + fabs(s->data[jj]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((nrt > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e->data[jj - 1] = 0.0;
          exitg1 = true;
        } else {
          jj--;
        }
      }
      if (jj == n - 1) {
        ns = 4;
      } else {
        qq = n;
        ns = n;
        exitg1 = false;
        while ((!exitg1) && (ns >= jj)) {
          qq = ns;
          if (ns == jj) {
            exitg1 = true;
          } else {
            nrm = 0.0;
            if (ns < n) {
              nrm = fabs(e->data[ns - 1]);
            }
            if (ns > jj + 1) {
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
        if (qq == jj) {
          ns = 3;
        } else if (qq == n) {
          ns = 1;
        } else {
          ns = 2;
          jj = qq;
        }
      }
      switch (ns) {
      case 1:
        r = e->data[n - 2];
        e->data[n - 2] = 0.0;
        for (k = nmq; k >= jj + 1; k--) {
          xrotg(&s->data[k - 1], &r, &sqds, &sm);
          if (k > jj + 1) {
            b = e->data[k - 2];
            r = -sm * b;
            e->data[k - 2] = b * sqds;
          }
        }
        break;
      case 2:
        r = e->data[jj - 1];
        e->data[jj - 1] = 0.0;
        for (k = jj + 1; k <= n; k++) {
          xrotg(&s->data[k - 1], &r, &sqds, &sm);
          b = e->data[k - 1];
          r = -sm * b;
          e->data[k - 1] = b * sqds;
        }
        break;
      case 3:
        nrm = s->data[n - 1];
        r = s->data[n - 2];
        b = e->data[n - 2];
        scale = fmax(
            fmax(fmax(fmax(fabs(nrm), fabs(r)), fabs(b)), fabs(s->data[jj])),
            fabs(e->data[jj]));
        sm = nrm / scale;
        nrm = r / scale;
        r = b / scale;
        sqds = s->data[jj] / scale;
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
        nrm = sqds * (e->data[jj] / scale);
        for (k = jj + 1; k <= nmq; k++) {
          xrotg(&r, &nrm, &sqds, &sm);
          if (k > jj + 1) {
            e->data[k - 2] = r;
          }
          b = e->data[k - 1];
          nrm = s->data[k - 1];
          e->data[k - 1] = sqds * b - sm * nrm;
          r = sm * s->data[k];
          s->data[k] *= sqds;
          s->data[k - 1] = sqds * nrm + sm * b;
          xrotg(&s->data[k - 1], &r, &sqds, &sm);
          r = sqds * e->data[k - 1] + sm * s->data[k];
          s->data[k] = -sm * e->data[k - 1] + sqds * s->data[k];
          nrm = sm * e->data[k];
          e->data[k] *= sqds;
        }
        e->data[n - 2] = r;
        nrt++;
        break;
      default:
        if (s->data[jj] < 0.0) {
          s->data[jj] = -s->data[jj];
        }
        qp1 = jj + 1;
        while ((jj + 1 < nct) && (s->data[jj] < s->data[qp1])) {
          nrm = s->data[jj];
          s->data[jj] = s->data[qp1];
          s->data[qp1] = nrm;
          jj = qp1;
          qp1++;
        }
        nrt = 0;
        n--;
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
