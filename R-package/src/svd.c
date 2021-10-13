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
  const double *A_data;
  double b;
  double nrm;
  double r;
  double scale;
  double sm;
  double snorm;
  double temp;
  double *U_data;
  double *Vf_data;
  double *b_A_data;
  double *e_data;
  double *s_data;
  double *work_data;
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
  A_data = A->data;
  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  b_A_data = b_A->data;
  ns = A->size[0] * A->size[1];
  for (i = 0; i < ns; i++) {
    b_A_data[i] = A_data[i];
  }
  emxInit_real_T(&b_s, 1);
  n = A->size[0];
  p = A->size[1];
  qjj = A->size[0] + 1;
  ns = A->size[1];
  if (qjj <= ns) {
    ns = qjj;
  }
  qjj = A->size[0];
  minnp = A->size[1];
  if (qjj <= minnp) {
    minnp = qjj;
  }
  i = b_s->size[0];
  b_s->size[0] = ns;
  emxEnsureCapacity_real_T(b_s, i);
  s_data = b_s->data;
  for (i = 0; i < ns; i++) {
    s_data[i] = 0.0;
  }
  emxInit_real_T(&e, 1);
  i = e->size[0];
  e->size[0] = A->size[1];
  emxEnsureCapacity_real_T(e, i);
  e_data = e->data;
  ns = A->size[1];
  for (i = 0; i < ns; i++) {
    e_data[i] = 0.0;
  }
  emxInit_real_T(&work, 1);
  i = work->size[0];
  work->size[0] = A->size[0];
  emxEnsureCapacity_real_T(work, i);
  work_data = work->data;
  ns = A->size[0];
  for (i = 0; i < ns; i++) {
    work_data[i] = 0.0;
  }
  i = U->size[0] * U->size[1];
  U->size[0] = A->size[0];
  U->size[1] = minnp;
  emxEnsureCapacity_real_T(U, i);
  U_data = U->data;
  ns = A->size[0] * minnp;
  for (i = 0; i < ns; i++) {
    U_data[i] = 0.0;
  }
  emxInit_real_T(&Vf, 2);
  i = Vf->size[0] * Vf->size[1];
  Vf->size[0] = A->size[1];
  Vf->size[1] = A->size[1];
  emxEnsureCapacity_real_T(Vf, i);
  Vf_data = Vf->data;
  ns = A->size[1] * A->size[1];
  for (i = 0; i < ns; i++) {
    Vf_data[i] = 0.0;
  }
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    qjj = A->size[0];
    if (qjj > minnp) {
      qjj = minnp;
    }
    for (ii = 0; ii < qjj; ii++) {
      U_data[ii + U->size[0] * ii] = 1.0;
    }
    i = A->size[1];
    for (ii = 0; ii < i; ii++) {
      Vf_data[ii + Vf->size[0] * ii] = 1.0;
    }
  } else {
    if (A->size[1] >= 2) {
      qjj = A->size[1] - 2;
    } else {
      qjj = 0;
    }
    nrt = A->size[0];
    if (qjj <= nrt) {
      nrt = qjj;
    }
    qjj = A->size[0] - 1;
    nct = A->size[1];
    if (qjj <= nct) {
      nct = qjj;
    }
    nctp1 = nct + 1;
    if (nct >= nrt) {
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
          if (b_A_data[qq - 1] < 0.0) {
            nrm = -nrm;
          }
          s_data[q] = nrm;
          if (fabs(nrm) >= 1.0020841800044864E-292) {
            nrm = 1.0 / nrm;
            ns = qq + nmq;
            for (k = qq; k <= ns; k++) {
              b_A_data[k - 1] *= nrm;
            }
          } else {
            ns = qq + nmq;
            for (k = qq; k <= ns; k++) {
              b_A_data[k - 1] /= s_data[q];
            }
          }
          b_A_data[qq - 1]++;
          s_data[q] = -s_data[q];
        } else {
          s_data[q] = 0.0;
        }
      }
      for (jj = qp1; jj <= p; jj++) {
        qjj = q + n * (jj - 1);
        if (apply_transform) {
          nrm = 0.0;
          if (nmq + 1 >= 1) {
            for (k = 0; k <= nmq; k++) {
              nrm += b_A_data[(qq + k) - 1] * b_A_data[qjj + k];
            }
          }
          nrm = -(nrm / b_A_data[q + b_A->size[0] * q]);
          xaxpy(nmq + 1, nrm, qq, b_A, qjj + 1);
          b_A_data = b_A->data;
        }
        e_data[jj - 1] = b_A_data[qjj];
      }
      if (q + 1 <= nct) {
        for (ii = q + 1; ii <= n; ii++) {
          U_data[(ii + U->size[0] * q) - 1] =
              b_A_data[(ii + b_A->size[0] * q) - 1];
        }
      }
      if (q + 1 <= nrt) {
        qq = p - q;
        nrm = xnrm2(qq - 1, e, q + 2);
        if (nrm == 0.0) {
          e_data[q] = 0.0;
        } else {
          if (e_data[q + 1] < 0.0) {
            e_data[q] = -nrm;
          } else {
            e_data[q] = nrm;
          }
          nrm = e_data[q];
          if (fabs(e_data[q]) >= 1.0020841800044864E-292) {
            nrm = 1.0 / e_data[q];
            ns = q + qq;
            for (k = qp1; k <= ns; k++) {
              e_data[k - 1] *= nrm;
            }
          } else {
            ns = q + qq;
            for (k = qp1; k <= ns; k++) {
              e_data[k - 1] /= nrm;
            }
          }
          e_data[q + 1]++;
          e_data[q] = -e_data[q];
          if (q + 2 <= n) {
            for (ii = qp1; ii <= n; ii++) {
              work_data[ii - 1] = 0.0;
            }
            for (jj = qp1; jj <= p; jj++) {
              b_xaxpy(nmq, e_data[jj - 1], b_A, (q + n * (jj - 1)) + 2, work,
                      q + 2);
              work_data = work->data;
            }
            for (jj = qp1; jj <= p; jj++) {
              b_xaxpy(nmq, -e_data[jj - 1] / e_data[q + 1], work, q + 2, b_A,
                      (q + n * (jj - 1)) + 2);
              b_A_data = b_A->data;
            }
          }
        }
        for (ii = qp1; ii <= p; ii++) {
          Vf_data[(ii + Vf->size[0] * q) - 1] = e_data[ii - 1];
        }
      }
    }
    if (A->size[1] <= A->size[0] + 1) {
      m = A->size[1] - 1;
    } else {
      m = A->size[0];
    }
    if (nct < A->size[1]) {
      s_data[nct] = b_A_data[nct + b_A->size[0] * nct];
    }
    if (A->size[0] < m + 1) {
      s_data[m] = 0.0;
    }
    if (nrt + 1 < m + 1) {
      e_data[nrt] = b_A_data[nrt + b_A->size[0] * m];
    }
    e_data[m] = 0.0;
    if (nct + 1 <= minnp) {
      for (jj = nctp1; jj <= minnp; jj++) {
        for (ii = 0; ii < n; ii++) {
          U_data[ii + U->size[0] * (jj - 1)] = 0.0;
        }
        U_data[(jj + U->size[0] * (jj - 1)) - 1] = 1.0;
      }
    }
    for (q = nct; q >= 1; q--) {
      qp1 = q + 1;
      ns = n - q;
      qq = (q + n * (q - 1)) - 1;
      if (s_data[q - 1] != 0.0) {
        for (jj = qp1; jj <= minnp; jj++) {
          qjj = q + n * (jj - 1);
          nrm = 0.0;
          if (ns + 1 >= 1) {
            for (k = 0; k <= ns; k++) {
              nrm += U_data[qq + k] * U_data[(qjj + k) - 1];
            }
          }
          nrm = -(nrm / U_data[qq]);
          xaxpy(ns + 1, nrm, qq + 1, U, qjj);
          U_data = U->data;
        }
        for (ii = q; ii <= n; ii++) {
          U_data[(ii + U->size[0] * (q - 1)) - 1] =
              -U_data[(ii + U->size[0] * (q - 1)) - 1];
        }
        U_data[qq]++;
        for (ii = 0; ii <= q - 2; ii++) {
          U_data[ii + U->size[0] * (q - 1)] = 0.0;
        }
      } else {
        for (ii = 0; ii < n; ii++) {
          U_data[ii + U->size[0] * (q - 1)] = 0.0;
        }
        U_data[qq] = 1.0;
      }
    }
    for (q = p; q >= 1; q--) {
      if ((q <= nrt) && (e_data[q - 1] != 0.0)) {
        qp1 = q + 1;
        qq = p - q;
        ns = q + p * (q - 1);
        for (jj = qp1; jj <= p; jj++) {
          qjj = q + p * (jj - 1);
          nrm = 0.0;
          if (qq >= 1) {
            for (k = 0; k < qq; k++) {
              nrm += Vf_data[ns + k] * Vf_data[qjj + k];
            }
          }
          nrm = -(nrm / Vf_data[ns]);
          xaxpy(qq, nrm, ns + 1, Vf, qjj + 1);
          Vf_data = Vf->data;
        }
      }
      for (ii = 0; ii < p; ii++) {
        Vf_data[ii + Vf->size[0] * (q - 1)] = 0.0;
      }
      Vf_data[(q + Vf->size[0] * (q - 1)) - 1] = 1.0;
    }
    nct = m;
    nctp1 = 0;
    snorm = 0.0;
    for (q = 0; q <= m; q++) {
      if (s_data[q] != 0.0) {
        nrm = fabs(s_data[q]);
        r = s_data[q] / nrm;
        s_data[q] = nrm;
        if (q + 1 < m + 1) {
          e_data[q] /= r;
        }
        if (q + 1 <= n) {
          ns = n * q;
          i = ns + n;
          for (k = ns + 1; k <= i; k++) {
            U_data[k - 1] *= r;
          }
        }
      }
      if ((q + 1 < m + 1) && (e_data[q] != 0.0)) {
        nrm = fabs(e_data[q]);
        r = nrm / e_data[q];
        e_data[q] = nrm;
        s_data[q + 1] *= r;
        ns = p * (q + 1);
        i = ns + p;
        for (k = ns + 1; k <= i; k++) {
          Vf_data[k - 1] *= r;
        }
      }
      snorm = fmax(snorm, fmax(fabs(s_data[q]), fabs(e_data[q])));
    }
    while ((m + 1 > 0) && (nctp1 < 75)) {
      ii = m;
      exitg1 = false;
      while (!(exitg1 || (ii == 0))) {
        nrm = fabs(e_data[ii - 1]);
        if ((nrm <= 2.2204460492503131E-16 *
                        (fabs(s_data[ii - 1]) + fabs(s_data[ii]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((nctp1 > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e_data[ii - 1] = 0.0;
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
              nrm = fabs(e_data[ns - 1]);
            }
            if (ns > ii + 1) {
              nrm += fabs(e_data[ns - 2]);
            }
            r = fabs(s_data[ns - 1]);
            if ((r <= 2.2204460492503131E-16 * nrm) ||
                (r <= 1.0020841800044864E-292)) {
              s_data[ns - 1] = 0.0;
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
        r = e_data[m - 1];
        e_data[m - 1] = 0.0;
        for (k = m; k >= ii + 1; k--) {
          xrotg(&s_data[k - 1], &r, &sm, &scale);
          if (k > ii + 1) {
            b = e_data[k - 2];
            r = -scale * b;
            e_data[k - 2] = b * sm;
          }
          if (p >= 1) {
            qjj = p * (k - 1);
            qq = p * m;
            for (nrt = 0; nrt < p; nrt++) {
              nmq = qq + nrt;
              ns = qjj + nrt;
              temp = sm * Vf_data[ns] + scale * Vf_data[nmq];
              Vf_data[nmq] = sm * Vf_data[nmq] - scale * Vf_data[ns];
              Vf_data[ns] = temp;
            }
          }
        }
        break;
      case 2:
        r = e_data[ii - 1];
        e_data[ii - 1] = 0.0;
        for (k = ii + 1; k <= m + 1; k++) {
          xrotg(&s_data[k - 1], &r, &sm, &scale);
          b = e_data[k - 1];
          r = -scale * b;
          e_data[k - 1] = b * sm;
          if (n >= 1) {
            qjj = n * (k - 1);
            qq = n * (ii - 1);
            for (nrt = 0; nrt < n; nrt++) {
              nmq = qq + nrt;
              ns = qjj + nrt;
              temp = sm * U_data[ns] + scale * U_data[nmq];
              U_data[nmq] = sm * U_data[nmq] - scale * U_data[ns];
              U_data[ns] = temp;
            }
          }
        }
        break;
      case 3:
        nrm = s_data[m - 1];
        r = e_data[m - 1];
        scale = fmax(fmax(fmax(fmax(fabs(s_data[m]), fabs(nrm)), fabs(r)),
                          fabs(s_data[ii])),
                     fabs(e_data[ii]));
        sm = s_data[m] / scale;
        nrm /= scale;
        r /= scale;
        temp = s_data[ii] / scale;
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
        nrm = temp * (e_data[ii] / scale);
        for (k = ii + 1; k <= m; k++) {
          xrotg(&r, &nrm, &sm, &scale);
          if (k > ii + 1) {
            e_data[k - 2] = r;
          }
          b = e_data[k - 1];
          nrm = s_data[k - 1];
          e_data[k - 1] = sm * b - scale * nrm;
          r = scale * s_data[k];
          s_data[k] *= sm;
          if (p >= 1) {
            qjj = p * (k - 1);
            qq = p * k;
            for (nrt = 0; nrt < p; nrt++) {
              nmq = qq + nrt;
              ns = qjj + nrt;
              temp = sm * Vf_data[ns] + scale * Vf_data[nmq];
              Vf_data[nmq] = sm * Vf_data[nmq] - scale * Vf_data[ns];
              Vf_data[ns] = temp;
            }
          }
          s_data[k - 1] = sm * nrm + scale * b;
          xrotg(&s_data[k - 1], &r, &sm, &scale);
          r = sm * e_data[k - 1] + scale * s_data[k];
          s_data[k] = -scale * e_data[k - 1] + sm * s_data[k];
          nrm = scale * e_data[k];
          e_data[k] *= sm;
          if ((k < n) && (n >= 1)) {
            qjj = n * (k - 1);
            qq = n * k;
            for (nrt = 0; nrt < n; nrt++) {
              nmq = qq + nrt;
              ns = qjj + nrt;
              temp = sm * U_data[ns] + scale * U_data[nmq];
              U_data[nmq] = sm * U_data[nmq] - scale * U_data[ns];
              U_data[ns] = temp;
            }
          }
        }
        e_data[m - 1] = r;
        nctp1++;
        break;
      default:
        if (s_data[ii] < 0.0) {
          s_data[ii] = -s_data[ii];
          ns = p * ii;
          i = ns + p;
          for (k = ns + 1; k <= i; k++) {
            Vf_data[k - 1] = -Vf_data[k - 1];
          }
        }
        qp1 = ii + 1;
        while ((ii + 1 < nct + 1) && (s_data[ii] < s_data[qp1])) {
          nrm = s_data[ii];
          s_data[ii] = s_data[qp1];
          s_data[qp1] = nrm;
          if (ii + 1 < p) {
            qjj = p * ii;
            qq = p * (ii + 1);
            for (k = 0; k < p; k++) {
              nmq = qjj + k;
              temp = Vf_data[nmq];
              i = qq + k;
              Vf_data[nmq] = Vf_data[i];
              Vf_data[i] = temp;
            }
          }
          if (ii + 1 < n) {
            qjj = n * ii;
            qq = n * (ii + 1);
            for (k = 0; k < n; k++) {
              nmq = qjj + k;
              temp = U_data[nmq];
              i = qq + k;
              U_data[nmq] = U_data[i];
              U_data[i] = temp;
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
  e_data = s->data;
  i = V->size[0] * V->size[1];
  V->size[0] = A->size[1];
  V->size[1] = minnp;
  emxEnsureCapacity_real_T(V, i);
  work_data = V->data;
  for (k = 0; k < minnp; k++) {
    e_data[k] = s_data[k];
    for (ns = 0; ns < p; ns++) {
      work_data[ns + V->size[0] * k] = Vf_data[ns + Vf->size[0] * k];
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
  const double *A_data;
  double nrm;
  double r;
  double rt;
  double scale;
  double sm;
  double snorm;
  double sqds;
  double *b_A_data;
  double *e_data;
  double *s_data;
  double *work_data;
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
  A_data = A->data;
  emxInit_real_T(&b_A, 2);
  i = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity_real_T(b_A, i);
  b_A_data = b_A->data;
  ns = A->size[0] * A->size[1];
  for (i = 0; i < ns; i++) {
    b_A_data[i] = A_data[i];
  }
  emxInit_real_T(&s, 1);
  n = A->size[0];
  p = A->size[1];
  qq = A->size[0] + 1;
  ns = A->size[1];
  if (qq <= ns) {
    ns = qq;
  }
  qq = A->size[0];
  minnp = A->size[1];
  if (qq <= minnp) {
    minnp = qq;
  }
  i = s->size[0];
  s->size[0] = ns;
  emxEnsureCapacity_real_T(s, i);
  s_data = s->data;
  for (i = 0; i < ns; i++) {
    s_data[i] = 0.0;
  }
  emxInit_real_T(&e, 1);
  i = e->size[0];
  e->size[0] = A->size[1];
  emxEnsureCapacity_real_T(e, i);
  e_data = e->data;
  ns = A->size[1];
  for (i = 0; i < ns; i++) {
    e_data[i] = 0.0;
  }
  emxInit_real_T(&work, 1);
  i = work->size[0];
  work->size[0] = A->size[0];
  emxEnsureCapacity_real_T(work, i);
  work_data = work->data;
  ns = A->size[0];
  for (i = 0; i < ns; i++) {
    work_data[i] = 0.0;
  }
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    if (A->size[1] >= 2) {
      qq = A->size[1] - 2;
    } else {
      qq = 0;
    }
    nrt = A->size[0];
    if (qq <= nrt) {
      nrt = qq;
    }
    qq = A->size[0] - 1;
    nct = A->size[1];
    if (qq <= nct) {
      nct = qq;
    }
    if (nct >= nrt) {
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
          if (b_A_data[qq - 1] < 0.0) {
            nrm = -nrm;
          }
          s_data[q] = nrm;
          if (fabs(nrm) >= 1.0020841800044864E-292) {
            nrm = 1.0 / nrm;
            ns = qq + nmq;
            for (k = qq; k <= ns; k++) {
              b_A_data[k - 1] *= nrm;
            }
          } else {
            ns = qq + nmq;
            for (k = qq; k <= ns; k++) {
              b_A_data[k - 1] /= s_data[q];
            }
          }
          b_A_data[qq - 1]++;
          s_data[q] = -s_data[q];
        } else {
          s_data[q] = 0.0;
        }
      }
      for (jj = qp1; jj <= p; jj++) {
        ns = q + n * (jj - 1);
        if (apply_transform) {
          nrm = 0.0;
          if (nmq + 1 >= 1) {
            for (k = 0; k <= nmq; k++) {
              nrm += b_A_data[(qq + k) - 1] * b_A_data[ns + k];
            }
          }
          nrm = -(nrm / b_A_data[q + b_A->size[0] * q]);
          xaxpy(nmq + 1, nrm, qq, b_A, ns + 1);
          b_A_data = b_A->data;
        }
        e_data[jj - 1] = b_A_data[ns];
      }
      if (q + 1 <= nrt) {
        ns = p - q;
        nrm = xnrm2(ns - 1, e, q + 2);
        if (nrm == 0.0) {
          e_data[q] = 0.0;
        } else {
          if (e_data[q + 1] < 0.0) {
            e_data[q] = -nrm;
          } else {
            e_data[q] = nrm;
          }
          nrm = e_data[q];
          if (fabs(e_data[q]) >= 1.0020841800044864E-292) {
            nrm = 1.0 / e_data[q];
            ns += q;
            for (k = qp1; k <= ns; k++) {
              e_data[k - 1] *= nrm;
            }
          } else {
            ns += q;
            for (k = qp1; k <= ns; k++) {
              e_data[k - 1] /= nrm;
            }
          }
          e_data[q + 1]++;
          e_data[q] = -e_data[q];
          if (q + 2 <= n) {
            for (jj = qp1; jj <= n; jj++) {
              work_data[jj - 1] = 0.0;
            }
            for (jj = qp1; jj <= p; jj++) {
              b_xaxpy(nmq, e_data[jj - 1], b_A, (q + n * (jj - 1)) + 2, work,
                      q + 2);
              work_data = work->data;
            }
            for (jj = qp1; jj <= p; jj++) {
              b_xaxpy(nmq, -e_data[jj - 1] / e_data[q + 1], work, q + 2, b_A,
                      (q + n * (jj - 1)) + 2);
              b_A_data = b_A->data;
            }
          }
        }
      }
    }
    qq = A->size[1];
    n = A->size[0] + 1;
    if (qq <= n) {
      n = qq;
    }
    if (nct < A->size[1]) {
      s_data[nct] = b_A_data[nct + b_A->size[0] * nct];
    }
    if (A->size[0] < n) {
      s_data[n - 1] = 0.0;
    }
    if (nrt + 1 < n) {
      e_data[nrt] = b_A_data[nrt + b_A->size[0] * (n - 1)];
    }
    e_data[n - 1] = 0.0;
    nct = n;
    nrt = 0;
    snorm = 0.0;
    for (q = 0; q < n; q++) {
      nrm = s_data[q];
      if (s_data[q] != 0.0) {
        rt = fabs(s_data[q]);
        r = s_data[q] / rt;
        nrm = rt;
        s_data[q] = rt;
        if (q + 1 < n) {
          e_data[q] /= r;
        }
      }
      if ((q + 1 < n) && (e_data[q] != 0.0)) {
        rt = fabs(e_data[q]);
        r = rt / e_data[q];
        e_data[q] = rt;
        s_data[q + 1] *= r;
      }
      snorm = fmax(snorm, fmax(fabs(nrm), fabs(e_data[q])));
    }
    while ((n > 0) && (nrt < 75)) {
      nmq = n - 1;
      jj = n - 1;
      exitg1 = false;
      while (!(exitg1 || (jj == 0))) {
        nrm = fabs(e_data[jj - 1]);
        if ((nrm <= 2.2204460492503131E-16 *
                        (fabs(s_data[jj - 1]) + fabs(s_data[jj]))) ||
            (nrm <= 1.0020841800044864E-292) ||
            ((nrt > 20) && (nrm <= 2.2204460492503131E-16 * snorm))) {
          e_data[jj - 1] = 0.0;
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
              nrm = fabs(e_data[ns - 1]);
            }
            if (ns > jj + 1) {
              nrm += fabs(e_data[ns - 2]);
            }
            rt = fabs(s_data[ns - 1]);
            if ((rt <= 2.2204460492503131E-16 * nrm) ||
                (rt <= 1.0020841800044864E-292)) {
              s_data[ns - 1] = 0.0;
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
        rt = e_data[n - 2];
        e_data[n - 2] = 0.0;
        for (k = nmq; k >= jj + 1; k--) {
          xrotg(&s_data[k - 1], &rt, &sqds, &sm);
          if (k > jj + 1) {
            r = e_data[k - 2];
            rt = -sm * r;
            e_data[k - 2] = r * sqds;
          }
        }
        break;
      case 2:
        rt = e_data[jj - 1];
        e_data[jj - 1] = 0.0;
        for (k = jj + 1; k <= n; k++) {
          xrotg(&s_data[k - 1], &rt, &sqds, &sm);
          r = e_data[k - 1];
          rt = -sm * r;
          e_data[k - 1] = r * sqds;
        }
        break;
      case 3:
        nrm = s_data[n - 1];
        rt = s_data[n - 2];
        r = e_data[n - 2];
        scale = fmax(
            fmax(fmax(fmax(fabs(nrm), fabs(rt)), fabs(r)), fabs(s_data[jj])),
            fabs(e_data[jj]));
        sm = nrm / scale;
        nrm = rt / scale;
        rt = r / scale;
        sqds = s_data[jj] / scale;
        r = ((nrm + sm) * (nrm - sm) + rt * rt) / 2.0;
        nrm = sm * rt;
        nrm *= nrm;
        if ((r != 0.0) || (nrm != 0.0)) {
          rt = sqrt(r * r + nrm);
          if (r < 0.0) {
            rt = -rt;
          }
          rt = nrm / (r + rt);
        } else {
          rt = 0.0;
        }
        rt += (sqds + sm) * (sqds - sm);
        nrm = sqds * (e_data[jj] / scale);
        for (k = jj + 1; k <= nmq; k++) {
          xrotg(&rt, &nrm, &sqds, &sm);
          if (k > jj + 1) {
            e_data[k - 2] = rt;
          }
          r = e_data[k - 1];
          nrm = s_data[k - 1];
          e_data[k - 1] = sqds * r - sm * nrm;
          rt = sm * s_data[k];
          s_data[k] *= sqds;
          s_data[k - 1] = sqds * nrm + sm * r;
          xrotg(&s_data[k - 1], &rt, &sqds, &sm);
          rt = sqds * e_data[k - 1] + sm * s_data[k];
          s_data[k] = -sm * e_data[k - 1] + sqds * s_data[k];
          nrm = sm * e_data[k];
          e_data[k] *= sqds;
        }
        e_data[n - 2] = rt;
        nrt++;
        break;
      default:
        if (s_data[jj] < 0.0) {
          s_data[jj] = -s_data[jj];
        }
        qp1 = jj + 1;
        while ((jj + 1 < nct) && (s_data[jj] < s_data[qp1])) {
          rt = s_data[jj];
          s_data[jj] = s_data[qp1];
          s_data[qp1] = rt;
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
  e_data = U->data;
  for (k = 0; k < minnp; k++) {
    e_data[k] = s_data[k];
  }
  emxFree_real_T(&s);
}

/* End of code generation (svd.c) */
