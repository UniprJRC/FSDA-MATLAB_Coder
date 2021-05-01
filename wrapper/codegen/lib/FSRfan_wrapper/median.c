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
#include "quickselect.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
double median(const double x_data[], int x_size)
{
  double a__4_data[1000];
  double b;
  double y;
  int a__6;
  int exitg1;
  int ilast;
  int k;
  int midm1;
  if (x_size == 0) {
    y = rtNaN;
  } else {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= x_size - 1) {
        if (rtIsNaN(x_data[k])) {
          y = rtNaN;
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        if (x_size <= 4) {
          if (x_size == 0) {
            y = rtNaN;
          } else if (x_size == 1) {
            y = x_data[0];
          } else if (x_size == 2) {
            if (((x_data[0] < 0.0) != (x_data[1] < 0.0)) ||
                rtIsInf(x_data[0])) {
              y = (x_data[0] + x_data[1]) / 2.0;
            } else {
              y = x_data[0] + (x_data[1] - x_data[0]) / 2.0;
            }
          } else if (x_size == 3) {
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
                ilast = 2;
              } else if (x_data[0] < x_data[2]) {
                k = 0;
                a__6 = 2;
                ilast = 1;
              } else {
                k = 2;
                a__6 = 0;
                ilast = 1;
              }
            } else if (x_data[0] < x_data[2]) {
              k = 1;
              a__6 = 0;
              ilast = 2;
            } else if (x_data[1] < x_data[2]) {
              k = 1;
              a__6 = 2;
              ilast = 0;
            } else {
              k = 2;
              a__6 = 1;
              ilast = 0;
            }
            if (x_data[k] < x_data[3]) {
              if (x_data[3] < x_data[ilast]) {
                if (((x_data[a__6] < 0.0) != (x_data[3] < 0.0)) ||
                    rtIsInf(x_data[a__6])) {
                  y = (x_data[a__6] + x_data[3]) / 2.0;
                } else {
                  y = x_data[a__6] + (x_data[3] - x_data[a__6]) / 2.0;
                }
              } else if (((x_data[a__6] < 0.0) != (x_data[ilast] < 0.0)) ||
                         rtIsInf(x_data[a__6])) {
                y = (x_data[a__6] + x_data[ilast]) / 2.0;
              } else {
                y = x_data[a__6] + (x_data[ilast] - x_data[a__6]) / 2.0;
              }
            } else if (((x_data[k] < 0.0) != (x_data[a__6] < 0.0)) ||
                       rtIsInf(x_data[k])) {
              y = (x_data[k] + x_data[a__6]) / 2.0;
            } else {
              y = x_data[k] + (x_data[a__6] - x_data[k]) / 2.0;
            }
          }
        } else {
          midm1 = x_size >> 1;
          if ((x_size & 1) == 0) {
            if (0 <= x_size - 1) {
              memcpy(&a__4_data[0], &x_data[0], x_size * sizeof(double));
            }
            quickselect(a__4_data, midm1 + 1, x_size, &y, &k, &ilast);
            if (midm1 < k) {
              quickselect(a__4_data, midm1, ilast - 1, &b, &k, &a__6);
              if (((y < 0.0) != (b < 0.0)) || rtIsInf(y)) {
                y = (y + b) / 2.0;
              } else {
                y += (b - y) / 2.0;
              }
            }
          } else {
            if (0 <= x_size - 1) {
              memcpy(&a__4_data[0], &x_data[0], x_size * sizeof(double));
            }
            quickselect(a__4_data, midm1 + 1, x_size, &y, &k, &a__6);
          }
        }
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }
  return y;
}

/* End of code generation (median.c) */
