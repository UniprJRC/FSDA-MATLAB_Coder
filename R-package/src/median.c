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
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "quickselect.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
double median(const emxArray_real_T *x)
{
  emxArray_real_T *a__4;
  const double *x_data;
  double b;
  double y;
  double *a__4_data;
  int a__6;
  int exitg1;
  int k;
  int midm1;
  int vlen;
  x_data = x->data;
  vlen = x->size[0];
  if (x->size[0] == 0) {
    y = rtNaN;
  } else {
    k = 0;
    emxInit_real_T(&a__4, 1);
    do {
      exitg1 = 0;
      if (k <= vlen - 1) {
        if (rtIsNaN(x_data[k])) {
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
            y = x_data[0];
          } else if (vlen == 2) {
            if (((x_data[0] < 0.0) != (x_data[1] < 0.0)) ||
                rtIsInf(x_data[0])) {
              y = (x_data[0] + x_data[1]) / 2.0;
            } else {
              y = x_data[0] + (x_data[1] - x_data[0]) / 2.0;
            }
          } else if (vlen == 3) {
            if (x_data[0] < x_data[1]) {
              if (x_data[1] < x_data[2]) {
                a__6 = 1;
              } else if (x_data[0] < x_data[2]) {
                a__6 = 2;
              } else {
                a__6 = 0;
              }
            } else if (x_data[0] < x_data[2]) {
              a__6 = 0;
            } else if (x_data[1] < x_data[2]) {
              a__6 = 2;
            } else {
              a__6 = 1;
            }
            y = x_data[a__6];
          } else {
            if (x_data[0] < x_data[1]) {
              if (x_data[1] < x_data[2]) {
                k = 0;
                a__6 = 1;
                vlen = 2;
              } else if (x_data[0] < x_data[2]) {
                k = 0;
                a__6 = 2;
                vlen = 1;
              } else {
                k = 2;
                a__6 = 0;
                vlen = 1;
              }
            } else if (x_data[0] < x_data[2]) {
              k = 1;
              a__6 = 0;
              vlen = 2;
            } else if (x_data[1] < x_data[2]) {
              k = 1;
              a__6 = 2;
              vlen = 0;
            } else {
              k = 2;
              a__6 = 1;
              vlen = 0;
            }
            if (x_data[k] < x_data[3]) {
              if (x_data[3] < x_data[vlen]) {
                if (((x_data[a__6] < 0.0) != (x_data[3] < 0.0)) ||
                    rtIsInf(x_data[a__6])) {
                  y = (x_data[a__6] + x_data[3]) / 2.0;
                } else {
                  y = x_data[a__6] + (x_data[3] - x_data[a__6]) / 2.0;
                }
              } else if (((x_data[a__6] < 0.0) != (x_data[vlen] < 0.0)) ||
                         rtIsInf(x_data[a__6])) {
                y = (x_data[a__6] + x_data[vlen]) / 2.0;
              } else {
                y = x_data[a__6] + (x_data[vlen] - x_data[a__6]) / 2.0;
              }
            } else if (((x_data[k] < 0.0) != (x_data[a__6] < 0.0)) ||
                       rtIsInf(x_data[k])) {
              y = (x_data[k] + x_data[a__6]) / 2.0;
            } else {
              y = x_data[k] + (x_data[a__6] - x_data[k]) / 2.0;
            }
          }
        } else {
          midm1 = vlen >> 1;
          if ((vlen & 1) == 0) {
            a__6 = a__4->size[0];
            a__4->size[0] = x->size[0];
            emxEnsureCapacity_real_T(a__4, a__6);
            a__4_data = a__4->data;
            k = x->size[0];
            for (a__6 = 0; a__6 < k; a__6++) {
              a__4_data[a__6] = x_data[a__6];
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
            a__4_data = a__4->data;
            k = x->size[0];
            for (a__6 = 0; a__6 < k; a__6++) {
              a__4_data[a__6] = x_data[a__6];
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
