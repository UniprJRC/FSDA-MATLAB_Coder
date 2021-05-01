/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * median.c
 *
 * Code generation for function 'median'
 *
 */

/* Include files */
#include "median.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_types.h"
#include "quickselect.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"

/* Function Definitions */
double median(const emxArray_real_T *x)
{
  emxArray_real_T *a__4;
  double b;
  double y;
  int a__6;
  int exitg1;
  int k;
  int midm1;
  int vlen;
  vlen = x->size[0];
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    k = 0;
    emxInit_real_T(&a__4, 1);
    do {
      exitg1 = 0;
      if (k <= vlen - 1) {
        if (rtIsNaN(x->data[k])) {
          y = rtNaN;
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        if (vlen <= 4) {
          if (vlen == 0) {
            y = rtNaN;
          } else if (vlen == 1) {
            y = x->data[0];
          } else if (vlen == 2) {
            if (((x->data[0] < 0.0) != (x->data[1] < 0.0)) ||
                rtIsInf(x->data[0])) {
              y = (x->data[0] + x->data[1]) / 2.0;
            } else {
              y = x->data[0] + (x->data[1] - x->data[0]) / 2.0;
            }
          } else if (vlen == 3) {
            if (x->data[0] < x->data[1]) {
              if (x->data[1] < x->data[2]) {
                a__6 = 1;
              } else if (x->data[0] < x->data[2]) {
                a__6 = 2;
              } else {
                a__6 = 0;
              }
            } else if (x->data[0] < x->data[2]) {
              a__6 = 0;
            } else if (x->data[1] < x->data[2]) {
              a__6 = 2;
            } else {
              a__6 = 1;
            }
            y = x->data[a__6];
          } else {
            if (x->data[0] < x->data[1]) {
              if (x->data[1] < x->data[2]) {
                k = 0;
                a__6 = 1;
                vlen = 2;
              } else if (x->data[0] < x->data[2]) {
                k = 0;
                a__6 = 2;
                vlen = 1;
              } else {
                k = 2;
                a__6 = 0;
                vlen = 1;
              }
            } else if (x->data[0] < x->data[2]) {
              k = 1;
              a__6 = 0;
              vlen = 2;
            } else if (x->data[1] < x->data[2]) {
              k = 1;
              a__6 = 2;
              vlen = 0;
            } else {
              k = 2;
              a__6 = 1;
              vlen = 0;
            }
            if (x->data[k] < x->data[3]) {
              if (x->data[3] < x->data[vlen]) {
                if (((x->data[a__6] < 0.0) != (x->data[3] < 0.0)) ||
                    rtIsInf(x->data[a__6])) {
                  y = (x->data[a__6] + x->data[3]) / 2.0;
                } else {
                  y = x->data[a__6] + (x->data[3] - x->data[a__6]) / 2.0;
                }
              } else if (((x->data[a__6] < 0.0) != (x->data[vlen] < 0.0)) ||
                         rtIsInf(x->data[a__6])) {
                y = (x->data[a__6] + x->data[vlen]) / 2.0;
              } else {
                y = x->data[a__6] + (x->data[vlen] - x->data[a__6]) / 2.0;
              }
            } else if (((x->data[k] < 0.0) != (x->data[a__6] < 0.0)) ||
                       rtIsInf(x->data[k])) {
              y = (x->data[k] + x->data[a__6]) / 2.0;
            } else {
              y = x->data[k] + (x->data[a__6] - x->data[k]) / 2.0;
            }
          }
        } else {
          midm1 = vlen >> 1;
          if ((vlen & 1) == 0) {
            a__6 = a__4->size[0];
            a__4->size[0] = x->size[0];
            emxEnsureCapacity_real_T(a__4, a__6);
            k = x->size[0];
            for (a__6 = 0; a__6 < k; a__6++) {
              a__4->data[a__6] = x->data[a__6];
            }
            quickselect(a__4, midm1 + 1, vlen, &y, &k, &a__6);
            if (midm1 < k) {
              quickselect(a__4, midm1, a__6 - 1, &b, &k, &vlen);
              if (((y < 0.0) != (b < 0.0)) || rtIsInf(y)) {
                y = (y + b) / 2.0;
              } else {
                y += (b - y) / 2.0;
              }
            }
          } else {
            a__6 = a__4->size[0];
            a__4->size[0] = x->size[0];
            emxEnsureCapacity_real_T(a__4, a__6);
            k = x->size[0];
            for (a__6 = 0; a__6 < k; a__6++) {
              a__4->data[a__6] = x->data[a__6];
            }
            quickselect(a__4, midm1 + 1, vlen, &y, &k, &a__6);
          }
        }
        exitg1 = 1;
      }
    } while (exitg1 == 0);
    emxFree_real_T(&a__4);
  }
  return y;
}

/* End of code generation (median.c) */
