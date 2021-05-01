/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * quickselect.c
 *
 * Code generation for function 'quickselect'
 *
 */

/* Include files */
#include "quickselect.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static int thirdOfFive(const emxArray_real_T *v, int ia, int ib);

/* Function Definitions */
static int thirdOfFive(const emxArray_real_T *v, int ia, int ib)
{
  double v4;
  double v5;
  int b_j1;
  int im;
  int j2;
  int j4;
  int j5;
  if ((ia == ib) || (ia + 1 == ib)) {
    im = ia;
  } else if ((ia + 2 == ib) || (ia + 3 == ib)) {
    v4 = v->data[ia - 1];
    if (v4 < v->data[ia]) {
      v5 = v->data[ia + 1];
      if (v->data[ia] < v5) {
        im = ia + 1;
      } else if (v4 < v5) {
        im = ia + 2;
      } else {
        im = ia;
      }
    } else {
      v5 = v->data[ia + 1];
      if (v4 < v5) {
        im = ia;
      } else if (v->data[ia] < v5) {
        im = ia + 2;
      } else {
        im = ia + 1;
      }
    }
  } else {
    v4 = v->data[ia - 1];
    if (v4 < v->data[ia]) {
      v5 = v->data[ia + 1];
      if (v->data[ia] < v5) {
        b_j1 = ia;
        j2 = ia;
        im = ia + 2;
      } else if (v4 < v5) {
        b_j1 = ia;
        j2 = ia + 1;
        im = ia + 1;
      } else {
        b_j1 = ia + 2;
        j2 = ia - 1;
        im = ia + 1;
      }
    } else {
      v5 = v->data[ia + 1];
      if (v4 < v5) {
        b_j1 = ia + 1;
        j2 = ia - 1;
        im = ia + 2;
      } else if (v->data[ia] < v5) {
        b_j1 = ia + 1;
        j2 = ia + 1;
        im = ia;
      } else {
        b_j1 = ia + 2;
        j2 = ia;
        im = ia;
      }
    }
    j4 = ia;
    j5 = ia + 1;
    v4 = v->data[ia + 2];
    v5 = v->data[ia + 3];
    if (v5 < v4) {
      j4 = ia + 1;
      j5 = ia;
      v5 = v4;
      v4 = v->data[ia + 3];
    }
    if (v5 < v->data[b_j1 - 1]) {
      im = b_j1;
    } else if (v5 < v->data[j2]) {
      im = j5 + 3;
    } else if (v4 < v->data[j2]) {
      im = j2 + 1;
    } else if (v4 < v->data[im - 1]) {
      im = j4 + 3;
    }
  }
  return im;
}

void quickselect(emxArray_real_T *v, int n, int vlen, double *vn, int *nfirst,
                 int *nlast)
{
  double d;
  double vk;
  double vref;
  int c;
  int ia;
  int ib;
  int ilast;
  int ipiv;
  int k;
  int ngroupsof5;
  int oldnv;
  bool checkspeed;
  bool exitg1;
  bool guard1 = false;
  bool isslow;
  if (n > vlen) {
    *vn = rtNaN;
    *nfirst = 0;
    *nlast = 0;
  } else {
    ipiv = n;
    ia = 0;
    ib = vlen - 1;
    *nfirst = 1;
    ilast = vlen - 1;
    oldnv = vlen;
    checkspeed = false;
    isslow = false;
    exitg1 = false;
    while ((!exitg1) && (ia + 1 < ib + 1)) {
      vref = v->data[ipiv - 1];
      v->data[ipiv - 1] = v->data[ib];
      v->data[ib] = vref;
      ilast = ia;
      ipiv = -1;
      for (k = ia + 1; k <= ib; k++) {
        vk = v->data[k - 1];
        d = v->data[k - 1];
        if (d == vref) {
          v->data[k - 1] = v->data[ilast];
          v->data[ilast] = vk;
          ipiv++;
          ilast++;
        } else if (d < vref) {
          v->data[k - 1] = v->data[ilast];
          v->data[ilast] = vk;
          ilast++;
        }
      }
      v->data[ib] = v->data[ilast];
      v->data[ilast] = vref;
      guard1 = false;
      if (n <= ilast + 1) {
        *nfirst = ilast - ipiv;
        if (n >= *nfirst) {
          exitg1 = true;
        } else {
          ib = ilast - 1;
          guard1 = true;
        }
      } else {
        ia = ilast + 1;
        guard1 = true;
      }
      if (guard1) {
        c = (ib - ia) + 1;
        if (checkspeed) {
          isslow = (c > oldnv / 2);
          oldnv = c;
        }
        checkspeed = !checkspeed;
        if (isslow) {
          while (c > 1) {
            ngroupsof5 = c / 5;
            *nlast = c - ngroupsof5 * 5;
            c = ngroupsof5;
            for (k = 0; k < ngroupsof5; k++) {
              ipiv = (ia + k * 5) + 1;
              ipiv = thirdOfFive(v, ipiv, ipiv + 4) - 1;
              ilast = ia + k;
              vref = v->data[ilast];
              v->data[ilast] = v->data[ipiv];
              v->data[ipiv] = vref;
            }
            if (*nlast > 0) {
              ipiv = (ia + ngroupsof5 * 5) + 1;
              ipiv = thirdOfFive(v, ipiv, (ipiv + *nlast) - 1) - 1;
              ilast = ia + ngroupsof5;
              vref = v->data[ilast];
              v->data[ilast] = v->data[ipiv];
              v->data[ipiv] = vref;
              c = ngroupsof5 + 1;
            }
          }
        } else if (c >= 3) {
          ipiv = ia + (c - 1) / 2;
          if (v->data[ia] < v->data[ipiv]) {
            if (!(v->data[ipiv] < v->data[ib])) {
              if (v->data[ia] < v->data[ib]) {
                ipiv = ib;
              } else {
                ipiv = ia;
              }
            }
          } else if (v->data[ia] < v->data[ib]) {
            ipiv = ia;
          } else if (v->data[ipiv] < v->data[ib]) {
            ipiv = ib;
          }
          if (ipiv + 1 > ia + 1) {
            vref = v->data[ia];
            v->data[ia] = v->data[ipiv];
            v->data[ipiv] = vref;
          }
        }
        ipiv = ia + 1;
        *nfirst = ia + 1;
        ilast = ib;
      }
    }
    *vn = v->data[ilast];
    *nlast = ilast + 1;
  }
}

/* End of code generation (quickselect.c) */
