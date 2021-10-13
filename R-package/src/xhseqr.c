/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * xhseqr.c
 *
 * Code generation for function 'xhseqr'
 *
 */

/* Include files */
#include "xhseqr.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "triu.h"
#include "xdlanv2.h"
#include "xzlarfg.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
int b_xhseqr(emxArray_real_T *h)
{
  double v[3];
  double SMLNUM;
  double aa;
  double ab;
  double ba;
  double bb;
  double d;
  double itmax;
  double rt1r;
  double rt2r;
  double s;
  double tst;
  double *h_data;
  int L;
  int b_k;
  int hoffset;
  int i;
  int info;
  int iy;
  int j;
  int k;
  int ldh;
  int m;
  int n;
  int nr;
  bool exitg1;
  bool exitg2;
  bool exitg3;
  bool goto150;
  h_data = h->data;
  n = h->size[0];
  ldh = h->size[0];
  info = 0;
  if ((n != 0) && (1 != n)) {
    v[0] = 0.0;
    v[1] = 0.0;
    v[2] = 0.0;
    for (j = 0; j <= n - 4; j++) {
      h_data[(j + h->size[0] * j) + 2] = 0.0;
      h_data[(j + h->size[0] * j) + 3] = 0.0;
    }
    if (1 <= n - 2) {
      h_data[(n + h->size[0] * (n - 3)) - 1] = 0.0;
    }
    itmax = 30.0 * fmax(10.0, n);
    SMLNUM = 2.2250738585072014E-308 * ((double)n / 2.2204460492503131E-16);
    i = n - 1;
    exitg1 = false;
    while ((!exitg1) && (i + 1 >= 1)) {
      L = 1;
      goto150 = false;
      iy = 0;
      exitg2 = false;
      while ((!exitg2) && (iy <= (int)itmax)) {
        k = i;
        exitg3 = false;
        while ((!exitg3) && (k + 1 > L)) {
          ba = fabs(h_data[k + h->size[0] * (k - 1)]);
          if (ba <= SMLNUM) {
            exitg3 = true;
          } else {
            bb = fabs(h_data[k + h->size[0] * k]);
            tst = fabs(h_data[(k + h->size[0] * (k - 1)) - 1]) + bb;
            if (tst == 0.0) {
              if (k - 1 >= 1) {
                tst = fabs(h_data[(k + h->size[0] * (k - 2)) - 1]);
              }
              if (k + 2 <= n) {
                tst += fabs(h_data[(k + h->size[0] * k) + 1]);
              }
            }
            if (ba <= 2.2204460492503131E-16 * tst) {
              tst = fabs(h_data[(k + h->size[0] * k) - 1]);
              if (ba > tst) {
                ab = ba;
                ba = tst;
              } else {
                ab = tst;
              }
              tst = fabs(h_data[(k + h->size[0] * (k - 1)) - 1] -
                         h_data[k + h->size[0] * k]);
              if (bb > tst) {
                aa = bb;
                bb = tst;
              } else {
                aa = tst;
              }
              s = aa + ab;
              if (ba * (ab / s) <=
                  fmax(SMLNUM, 2.2204460492503131E-16 * (bb * (aa / s)))) {
                exitg3 = true;
              } else {
                k--;
              }
            } else {
              k--;
            }
          }
        }
        L = k + 1;
        if (k + 1 > 1) {
          h_data[k + h->size[0] * (k - 1)] = 0.0;
        }
        if (k + 1 >= i) {
          goto150 = true;
          exitg2 = true;
        } else {
          if (iy == 10) {
            s = fabs(h_data[(k + h->size[0] * k) + 1]) +
                fabs(h_data[(k + h->size[0] * (k + 1)) + 2]);
            tst = 0.75 * s + h_data[k + h->size[0] * k];
            aa = -0.4375 * s;
            ab = s;
            bb = tst;
          } else if (iy == 20) {
            s = fabs(h_data[i + h->size[0] * (i - 1)]) +
                fabs(h_data[(i + h->size[0] * (i - 2)) - 1]);
            tst = 0.75 * s + h_data[i + h->size[0] * i];
            aa = -0.4375 * s;
            ab = s;
            bb = tst;
          } else {
            tst = h_data[(i + h->size[0] * (i - 1)) - 1];
            ab = h_data[i + h->size[0] * (i - 1)];
            aa = h_data[(i + h->size[0] * i) - 1];
            bb = h_data[i + h->size[0] * i];
          }
          s = ((fabs(tst) + fabs(aa)) + fabs(ab)) + fabs(bb);
          if (s == 0.0) {
            rt1r = 0.0;
            ab = 0.0;
            rt2r = 0.0;
            aa = 0.0;
          } else {
            tst /= s;
            ab /= s;
            aa /= s;
            bb /= s;
            ba = (tst + bb) / 2.0;
            tst = (tst - ba) * (bb - ba) - aa * ab;
            ab = sqrt(fabs(tst));
            if (tst >= 0.0) {
              rt1r = ba * s;
              rt2r = rt1r;
              ab *= s;
              aa = -ab;
            } else {
              rt1r = ba + ab;
              rt2r = ba - ab;
              if (fabs(rt1r - bb) <= fabs(rt2r - bb)) {
                rt1r *= s;
                rt2r = rt1r;
              } else {
                rt2r *= s;
                rt1r = rt2r;
              }
              ab = 0.0;
              aa = 0.0;
            }
          }
          m = i - 1;
          exitg3 = false;
          while ((!exitg3) && (m >= k + 1)) {
            tst = h_data[m + h->size[0] * (m - 1)];
            ba = h_data[(m + h->size[0] * (m - 1)) - 1];
            bb = ba - rt2r;
            s = (fabs(bb) + fabs(aa)) + fabs(tst);
            tst /= s;
            v[0] = (tst * h_data[(m + h->size[0] * m) - 1] +
                    (ba - rt1r) * (bb / s)) -
                   ab * (aa / s);
            v[1] = tst * (((ba + h_data[m + h->size[0] * m]) - rt1r) - rt2r);
            v[2] = tst * h_data[(m + h->size[0] * m) + 1];
            s = (fabs(v[0]) + fabs(v[1])) + fabs(v[2]);
            v[0] /= s;
            v[1] /= s;
            v[2] /= s;
            if ((m == k + 1) ||
                (fabs(h_data[(m + h->size[0] * (m - 2)) - 1]) *
                     (fabs(v[1]) + fabs(v[2])) <=
                 2.2204460492503131E-16 * fabs(v[0]) *
                     ((fabs(h_data[(m + h->size[0] * (m - 2)) - 2]) +
                       fabs(ba)) +
                      fabs(h_data[m + h->size[0] * m])))) {
              exitg3 = true;
            } else {
              m--;
            }
          }
          for (b_k = m; b_k <= i; b_k++) {
            nr = (i - b_k) + 2;
            if (3 <= nr) {
              nr = 3;
            }
            if (b_k > m) {
              hoffset = (b_k + ldh * (b_k - 2)) - 1;
              for (j = 0; j < nr; j++) {
                v[j] = h_data[j + hoffset];
              }
            }
            tst = v[0];
            ba = xzlarfg(nr, &tst, v);
            v[0] = tst;
            if (b_k > m) {
              h_data[(b_k + h->size[0] * (b_k - 2)) - 1] = tst;
              h_data[b_k + h->size[0] * (b_k - 2)] = 0.0;
              if (b_k < i) {
                h_data[(b_k + h->size[0] * (b_k - 2)) + 1] = 0.0;
              }
            } else if (m > k + 1) {
              h_data[(b_k + h->size[0] * (b_k - 2)) - 1] *= 1.0 - ba;
            }
            d = v[1];
            ab = ba * v[1];
            if (nr == 3) {
              s = v[2];
              tst = ba * v[2];
              for (j = b_k; j <= n; j++) {
                aa = (h_data[(b_k + h->size[0] * (j - 1)) - 1] +
                      d * h_data[b_k + h->size[0] * (j - 1)]) +
                     s * h_data[(b_k + h->size[0] * (j - 1)) + 1];
                h_data[(b_k + h->size[0] * (j - 1)) - 1] -= aa * ba;
                h_data[b_k + h->size[0] * (j - 1)] -= aa * ab;
                h_data[(b_k + h->size[0] * (j - 1)) + 1] -= aa * tst;
              }
              if (b_k + 3 <= i + 1) {
                nr = b_k + 2;
              } else {
                nr = i;
              }
              for (j = 0; j <= nr; j++) {
                aa = (h_data[j + h->size[0] * (b_k - 1)] +
                      d * h_data[j + h->size[0] * b_k]) +
                     s * h_data[j + h->size[0] * (b_k + 1)];
                h_data[j + h->size[0] * (b_k - 1)] -= aa * ba;
                h_data[j + h->size[0] * b_k] -= aa * ab;
                h_data[j + h->size[0] * (b_k + 1)] -= aa * tst;
              }
            } else if (nr == 2) {
              for (j = b_k; j <= n; j++) {
                tst = h_data[(b_k + h->size[0] * (j - 1)) - 1];
                aa = tst + d * h_data[b_k + h->size[0] * (j - 1)];
                h_data[(b_k + h->size[0] * (j - 1)) - 1] = tst - aa * ba;
                h_data[b_k + h->size[0] * (j - 1)] -= aa * ab;
              }
              for (j = 0; j <= i; j++) {
                aa = h_data[j + h->size[0] * (b_k - 1)] +
                     d * h_data[j + h->size[0] * b_k];
                h_data[j + h->size[0] * (b_k - 1)] -= aa * ba;
                h_data[j + h->size[0] * b_k] -= aa * ab;
              }
            }
          }
          iy++;
        }
      }
      if (!goto150) {
        info = i + 1;
        exitg1 = true;
      } else {
        if ((L != i + 1) && (L == i)) {
          d = h_data[(i + h->size[0] * i) - 1];
          s = h_data[i + h->size[0] * (i - 1)];
          tst = h_data[i + h->size[0] * i];
          xdlanv2(&h_data[(i + h->size[0] * (i - 1)) - 1], &d, &s, &tst, &ab,
                  &aa, &ba, &bb, &rt2r, &rt1r);
          h_data[(i + h->size[0] * i) - 1] = d;
          h_data[i + h->size[0] * (i - 1)] = s;
          h_data[i + h->size[0] * i] = tst;
          if (n > i + 1) {
            hoffset = (n - i) - 2;
            if (hoffset + 1 >= 1) {
              iy = i + (i + 1) * ldh;
              for (k = 0; k <= hoffset; k++) {
                nr = iy + k * ldh;
                tst = rt2r * h_data[nr - 1] + rt1r * h_data[nr];
                h_data[nr] = rt2r * h_data[nr] - rt1r * h_data[nr - 1];
                h_data[nr - 1] = tst;
              }
            }
          }
          if (i - 1 >= 1) {
            hoffset = (i - 1) * ldh;
            iy = i * ldh;
            for (k = 0; k <= i - 2; k++) {
              nr = iy + k;
              m = hoffset + k;
              tst = rt2r * h_data[m] + rt1r * h_data[nr];
              h_data[nr] = rt2r * h_data[nr] - rt1r * h_data[m];
              h_data[m] = tst;
            }
          }
        }
        i = L - 2;
      }
    }
  }
  m = h->size[0];
  if ((h->size[0] != 0) && (h->size[1] != 0) && (3 < h->size[0])) {
    hoffset = 4;
    if (h->size[0] - 4 < h->size[1] - 1) {
      iy = h->size[0] - 3;
    } else {
      iy = h->size[1];
    }
    for (j = 0; j < iy; j++) {
      for (i = hoffset; i <= m; i++) {
        h_data[(i + h->size[0] * j) - 1] = 0.0;
      }
      hoffset++;
    }
  }
  return info;
}

int xhseqr(emxArray_real_T *h, emxArray_real_T *z)
{
  double v[3];
  double SMLNUM;
  double aa;
  double ab;
  double ba;
  double bb;
  double d;
  double itmax;
  double rt1r;
  double rt2r;
  double s;
  double tst;
  double *h_data;
  double *z_data;
  int L;
  int b_k;
  int hoffset;
  int i;
  int info;
  int iy;
  int j;
  int k;
  int ldh;
  int ldz;
  int m;
  int n;
  int nr;
  bool exitg1;
  bool exitg2;
  bool exitg3;
  bool goto150;
  z_data = z->data;
  h_data = h->data;
  n = h->size[0];
  ldh = h->size[0];
  ldz = z->size[0];
  info = 0;
  if ((n != 0) && (1 != n)) {
    v[0] = 0.0;
    v[1] = 0.0;
    v[2] = 0.0;
    for (j = 0; j <= n - 4; j++) {
      h_data[(j + h->size[0] * j) + 2] = 0.0;
      h_data[(j + h->size[0] * j) + 3] = 0.0;
    }
    if (1 <= n - 2) {
      h_data[(n + h->size[0] * (n - 3)) - 1] = 0.0;
    }
    itmax = 30.0 * fmax(10.0, n);
    SMLNUM = 2.2250738585072014E-308 * ((double)n / 2.2204460492503131E-16);
    i = n - 1;
    exitg1 = false;
    while ((!exitg1) && (i + 1 >= 1)) {
      L = 1;
      goto150 = false;
      iy = 0;
      exitg2 = false;
      while ((!exitg2) && (iy <= (int)itmax)) {
        k = i;
        exitg3 = false;
        while ((!exitg3) && (k + 1 > L)) {
          ba = fabs(h_data[k + h->size[0] * (k - 1)]);
          if (ba <= SMLNUM) {
            exitg3 = true;
          } else {
            bb = fabs(h_data[k + h->size[0] * k]);
            tst = fabs(h_data[(k + h->size[0] * (k - 1)) - 1]) + bb;
            if (tst == 0.0) {
              if (k - 1 >= 1) {
                tst = fabs(h_data[(k + h->size[0] * (k - 2)) - 1]);
              }
              if (k + 2 <= n) {
                tst += fabs(h_data[(k + h->size[0] * k) + 1]);
              }
            }
            if (ba <= 2.2204460492503131E-16 * tst) {
              tst = fabs(h_data[(k + h->size[0] * k) - 1]);
              if (ba > tst) {
                ab = ba;
                ba = tst;
              } else {
                ab = tst;
              }
              tst = fabs(h_data[(k + h->size[0] * (k - 1)) - 1] -
                         h_data[k + h->size[0] * k]);
              if (bb > tst) {
                aa = bb;
                bb = tst;
              } else {
                aa = tst;
              }
              s = aa + ab;
              if (ba * (ab / s) <=
                  fmax(SMLNUM, 2.2204460492503131E-16 * (bb * (aa / s)))) {
                exitg3 = true;
              } else {
                k--;
              }
            } else {
              k--;
            }
          }
        }
        L = k + 1;
        if (k + 1 > 1) {
          h_data[k + h->size[0] * (k - 1)] = 0.0;
        }
        if (k + 1 >= i) {
          goto150 = true;
          exitg2 = true;
        } else {
          if (iy == 10) {
            s = fabs(h_data[(k + h->size[0] * k) + 1]) +
                fabs(h_data[(k + h->size[0] * (k + 1)) + 2]);
            tst = 0.75 * s + h_data[k + h->size[0] * k];
            aa = -0.4375 * s;
            ab = s;
            bb = tst;
          } else if (iy == 20) {
            s = fabs(h_data[i + h->size[0] * (i - 1)]) +
                fabs(h_data[(i + h->size[0] * (i - 2)) - 1]);
            tst = 0.75 * s + h_data[i + h->size[0] * i];
            aa = -0.4375 * s;
            ab = s;
            bb = tst;
          } else {
            tst = h_data[(i + h->size[0] * (i - 1)) - 1];
            ab = h_data[i + h->size[0] * (i - 1)];
            aa = h_data[(i + h->size[0] * i) - 1];
            bb = h_data[i + h->size[0] * i];
          }
          s = ((fabs(tst) + fabs(aa)) + fabs(ab)) + fabs(bb);
          if (s == 0.0) {
            rt1r = 0.0;
            ab = 0.0;
            rt2r = 0.0;
            aa = 0.0;
          } else {
            tst /= s;
            ab /= s;
            aa /= s;
            bb /= s;
            ba = (tst + bb) / 2.0;
            tst = (tst - ba) * (bb - ba) - aa * ab;
            ab = sqrt(fabs(tst));
            if (tst >= 0.0) {
              rt1r = ba * s;
              rt2r = rt1r;
              ab *= s;
              aa = -ab;
            } else {
              rt1r = ba + ab;
              rt2r = ba - ab;
              if (fabs(rt1r - bb) <= fabs(rt2r - bb)) {
                rt1r *= s;
                rt2r = rt1r;
              } else {
                rt2r *= s;
                rt1r = rt2r;
              }
              ab = 0.0;
              aa = 0.0;
            }
          }
          m = i - 1;
          exitg3 = false;
          while ((!exitg3) && (m >= k + 1)) {
            tst = h_data[m + h->size[0] * (m - 1)];
            ba = h_data[(m + h->size[0] * (m - 1)) - 1];
            bb = ba - rt2r;
            s = (fabs(bb) + fabs(aa)) + fabs(tst);
            tst /= s;
            v[0] = (tst * h_data[(m + h->size[0] * m) - 1] +
                    (ba - rt1r) * (bb / s)) -
                   ab * (aa / s);
            v[1] = tst * (((ba + h_data[m + h->size[0] * m]) - rt1r) - rt2r);
            v[2] = tst * h_data[(m + h->size[0] * m) + 1];
            s = (fabs(v[0]) + fabs(v[1])) + fabs(v[2]);
            v[0] /= s;
            v[1] /= s;
            v[2] /= s;
            if ((m == k + 1) ||
                (fabs(h_data[(m + h->size[0] * (m - 2)) - 1]) *
                     (fabs(v[1]) + fabs(v[2])) <=
                 2.2204460492503131E-16 * fabs(v[0]) *
                     ((fabs(h_data[(m + h->size[0] * (m - 2)) - 2]) +
                       fabs(ba)) +
                      fabs(h_data[m + h->size[0] * m])))) {
              exitg3 = true;
            } else {
              m--;
            }
          }
          for (b_k = m; b_k <= i; b_k++) {
            nr = (i - b_k) + 2;
            if (3 <= nr) {
              nr = 3;
            }
            if (b_k > m) {
              hoffset = (b_k + ldh * (b_k - 2)) - 1;
              for (j = 0; j < nr; j++) {
                v[j] = h_data[j + hoffset];
              }
            }
            tst = v[0];
            bb = xzlarfg(nr, &tst, v);
            v[0] = tst;
            if (b_k > m) {
              h_data[(b_k + h->size[0] * (b_k - 2)) - 1] = tst;
              h_data[b_k + h->size[0] * (b_k - 2)] = 0.0;
              if (b_k < i) {
                h_data[(b_k + h->size[0] * (b_k - 2)) + 1] = 0.0;
              }
            } else if (m > k + 1) {
              h_data[(b_k + h->size[0] * (b_k - 2)) - 1] *= 1.0 - bb;
            }
            s = v[1];
            tst = bb * v[1];
            if (nr == 3) {
              d = v[2];
              ba = bb * v[2];
              for (j = b_k; j <= n; j++) {
                aa = (h_data[(b_k + h->size[0] * (j - 1)) - 1] +
                      s * h_data[b_k + h->size[0] * (j - 1)]) +
                     d * h_data[(b_k + h->size[0] * (j - 1)) + 1];
                h_data[(b_k + h->size[0] * (j - 1)) - 1] -= aa * bb;
                h_data[b_k + h->size[0] * (j - 1)] -= aa * tst;
                h_data[(b_k + h->size[0] * (j - 1)) + 1] -= aa * ba;
              }
              if (b_k + 3 <= i + 1) {
                nr = b_k + 2;
              } else {
                nr = i;
              }
              for (j = 0; j <= nr; j++) {
                aa = (h_data[j + h->size[0] * (b_k - 1)] +
                      s * h_data[j + h->size[0] * b_k]) +
                     d * h_data[j + h->size[0] * (b_k + 1)];
                h_data[j + h->size[0] * (b_k - 1)] -= aa * bb;
                h_data[j + h->size[0] * b_k] -= aa * tst;
                h_data[j + h->size[0] * (b_k + 1)] -= aa * ba;
              }
              for (j = 0; j < n; j++) {
                ab = z_data[j + z->size[0] * (b_k - 1)];
                aa = (ab + s * z_data[j + z->size[0] * b_k]) +
                     d * z_data[j + z->size[0] * (b_k + 1)];
                z_data[j + z->size[0] * (b_k - 1)] = ab - aa * bb;
                z_data[j + z->size[0] * b_k] -= aa * tst;
                z_data[j + z->size[0] * (b_k + 1)] -= aa * ba;
              }
            } else if (nr == 2) {
              for (j = b_k; j <= n; j++) {
                ab = h_data[(b_k + h->size[0] * (j - 1)) - 1];
                aa = ab + s * h_data[b_k + h->size[0] * (j - 1)];
                h_data[(b_k + h->size[0] * (j - 1)) - 1] = ab - aa * bb;
                h_data[b_k + h->size[0] * (j - 1)] -= aa * tst;
              }
              for (j = 0; j <= i; j++) {
                aa = h_data[j + h->size[0] * (b_k - 1)] +
                     s * h_data[j + h->size[0] * b_k];
                h_data[j + h->size[0] * (b_k - 1)] -= aa * bb;
                h_data[j + h->size[0] * b_k] -= aa * tst;
              }
              for (j = 0; j < n; j++) {
                ab = z_data[j + z->size[0] * (b_k - 1)];
                aa = ab + s * z_data[j + z->size[0] * b_k];
                z_data[j + z->size[0] * (b_k - 1)] = ab - aa * bb;
                z_data[j + z->size[0] * b_k] -= aa * tst;
              }
            }
          }
          iy++;
        }
      }
      if (!goto150) {
        info = i + 1;
        exitg1 = true;
      } else {
        if ((L != i + 1) && (L == i)) {
          s = h_data[(i + h->size[0] * i) - 1];
          d = h_data[i + h->size[0] * (i - 1)];
          tst = h_data[i + h->size[0] * i];
          xdlanv2(&h_data[(i + h->size[0] * (i - 1)) - 1], &s, &d, &tst, &ab,
                  &aa, &ba, &bb, &rt2r, &rt1r);
          h_data[(i + h->size[0] * i) - 1] = s;
          h_data[i + h->size[0] * (i - 1)] = d;
          h_data[i + h->size[0] * i] = tst;
          if (n > i + 1) {
            hoffset = (n - i) - 2;
            if (hoffset + 1 >= 1) {
              iy = i + (i + 1) * ldh;
              for (k = 0; k <= hoffset; k++) {
                nr = iy + k * ldh;
                tst = rt2r * h_data[nr - 1] + rt1r * h_data[nr];
                h_data[nr] = rt2r * h_data[nr] - rt1r * h_data[nr - 1];
                h_data[nr - 1] = tst;
              }
            }
          }
          if (i - 1 >= 1) {
            hoffset = (i - 1) * ldh;
            iy = i * ldh;
            for (k = 0; k <= i - 2; k++) {
              nr = iy + k;
              m = hoffset + k;
              tst = rt2r * h_data[m] + rt1r * h_data[nr];
              h_data[nr] = rt2r * h_data[nr] - rt1r * h_data[m];
              h_data[m] = tst;
            }
          }
          if (n >= 1) {
            hoffset = (i - 1) * ldz;
            iy = i * ldz;
            for (k = 0; k < n; k++) {
              nr = iy + k;
              m = hoffset + k;
              tst = rt2r * z_data[m] + rt1r * z_data[nr];
              z_data[nr] = rt2r * z_data[nr] - rt1r * z_data[m];
              z_data[m] = tst;
            }
          }
        }
        i = L - 2;
      }
    }
  }
  triu(h);
  return info;
}

/* End of code generation (xhseqr.c) */
