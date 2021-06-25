/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * matrix_to_integer_power.c
 *
 * Code generation for function 'matrix_to_integer_power'
 *
 */

/* Include files */
#include "matrix_to_integer_power.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void matrix_to_small_integer_power(double a_data[], int a_size[2], double b,
                                   double c_data[], int c_size[2])
{
  emxArray_real_T aBuffer_data;
  emxArray_real_T b_a_data;
  emxArray_real_T b_c_data;
  emxArray_real_T cBuffer_data;
  emxArray_real_T c_aBuffer_data;
  emxArray_real_T c_a_data;
  emxArray_real_T c_cBuffer_data;
  emxArray_real_T c_c_data;
  emxArray_real_T d_aBuffer_data;
  emxArray_real_T d_a_data;
  emxArray_real_T d_cBuffer_data;
  emxArray_real_T e_aBuffer_data;
  emxArray_real_T e_a_data;
  emxArray_real_T f_a_data;
  emxArray_real_T *r;
  double b_aBuffer_data[2];
  double b_cBuffer_data[2];
  double y_tmp;
  int aBuffer_size[2];
  int cBuffer_size[2];
  int b_n;
  int k;
  int n;
  int nb;
  int nbitson;
  bool aBufferInUse;
  bool cBufferInUse;
  bool first;
  y_tmp = fabs(b);
  n = (int)y_tmp;
  b_n = (int)y_tmp;
  nbitson = 0;
  nb = -2;
  while (b_n > 0) {
    nb++;
    if ((b_n & 1) != 0) {
      nbitson++;
    }
    b_n >>= 1;
  }
  c_size[0] = (signed char)a_size[0];
  c_size[1] = (signed char)a_size[1];
  emxInit_real_T(&r, 2);
  if ((int)y_tmp <= 2) {
    if (b == 2.0) {
      b_a_data.data = &a_data[0];
      b_a_data.size = &a_size[0];
      b_a_data.allocatedSize = -1;
      b_a_data.numDimensions = 2;
      b_a_data.canFreeData = false;
      c_a_data.data = &a_data[0];
      c_a_data.size = &a_size[0];
      c_a_data.allocatedSize = -1;
      c_a_data.numDimensions = 2;
      c_a_data.canFreeData = false;
      b_mtimes(&b_a_data, &c_a_data, r);
      c_size[0] = r->size[0];
      c_size[1] = r->size[1];
      b_n = r->size[0] * r->size[1];
      for (nbitson = 0; nbitson < b_n; nbitson++) {
        c_data[nbitson] = r->data[nbitson];
      }
    } else if (b == 1.0) {
      c_size[0] = a_size[0];
      c_size[1] = a_size[1];
      b_n = a_size[0] * a_size[1];
      if (0 <= b_n - 1) {
        memcpy(&c_data[0], &a_data[0], b_n * sizeof(double));
      }
    } else {
      c_size[0] = (signed char)a_size[0];
      c_size[1] = (signed char)a_size[1];
      b_n = (signed char)a_size[0] * (signed char)a_size[1];
      if (0 <= b_n - 1) {
        memset(&c_data[0], 0, b_n * sizeof(double));
      }
      nbitson = a_size[0];
      for (b_n = 0; b_n < nbitson; b_n++) {
        c_data[b_n] = 1.0;
      }
    }
  } else {
    cBuffer_size[0] = (signed char)a_size[0];
    cBuffer_size[1] = (signed char)a_size[1];
    aBuffer_size[0] = a_size[0];
    aBuffer_size[1] = a_size[1];
    first = true;
    aBufferInUse = false;
    cBufferInUse = ((nbitson & 1) == 0);
    for (k = 0; k <= nb; k++) {
      if ((n & 1) != 0) {
        if (first) {
          first = false;
          if (cBufferInUse) {
            if (aBufferInUse) {
              b_n = cBuffer_size[0];
              nbitson = cBuffer_size[1];
              cBuffer_size[0] = b_n;
              cBuffer_size[1] = nbitson;
              b_n *= nbitson;
              if (0 <= b_n - 1) {
                memcpy(&b_cBuffer_data[0], &b_aBuffer_data[0],
                       b_n * sizeof(double));
              }
            } else {
              b_n = cBuffer_size[0];
              nbitson = cBuffer_size[1];
              cBuffer_size[0] = b_n;
              cBuffer_size[1] = nbitson;
              b_n *= nbitson;
              if (0 <= b_n - 1) {
                memcpy(&b_cBuffer_data[0], &a_data[0], b_n * sizeof(double));
              }
            }
          } else if (aBufferInUse) {
            b_n = c_size[0];
            nbitson = c_size[1];
            c_size[0] = b_n;
            c_size[1] = nbitson;
            b_n *= nbitson;
            if (0 <= b_n - 1) {
              memcpy(&c_data[0], &b_aBuffer_data[0], b_n * sizeof(double));
            }
          } else {
            b_n = c_size[0];
            nbitson = c_size[1];
            c_size[0] = b_n;
            c_size[1] = nbitson;
            b_n *= nbitson;
            if (0 <= b_n - 1) {
              memcpy(&c_data[0], &a_data[0], b_n * sizeof(double));
            }
          }
        } else {
          if (aBufferInUse) {
            if (cBufferInUse) {
              d_cBuffer_data.data = &b_cBuffer_data[0];
              d_cBuffer_data.size = &cBuffer_size[0];
              d_cBuffer_data.allocatedSize = 2;
              d_cBuffer_data.numDimensions = 2;
              d_cBuffer_data.canFreeData = false;
              e_aBuffer_data.data = &b_aBuffer_data[0];
              e_aBuffer_data.size = &aBuffer_size[0];
              e_aBuffer_data.allocatedSize = 2;
              e_aBuffer_data.numDimensions = 2;
              e_aBuffer_data.canFreeData = false;
              b_mtimes(&d_cBuffer_data, &e_aBuffer_data, r);
              c_size[0] = r->size[0];
              c_size[1] = r->size[1];
              b_n = r->size[0] * r->size[1];
              for (nbitson = 0; nbitson < b_n; nbitson++) {
                c_data[nbitson] = r->data[nbitson];
              }
            } else {
              c_c_data.data = &c_data[0];
              c_c_data.size = &c_size[0];
              c_c_data.allocatedSize = -1;
              c_c_data.numDimensions = 2;
              c_c_data.canFreeData = false;
              d_aBuffer_data.data = &b_aBuffer_data[0];
              d_aBuffer_data.size = &aBuffer_size[0];
              d_aBuffer_data.allocatedSize = 2;
              d_aBuffer_data.numDimensions = 2;
              d_aBuffer_data.canFreeData = false;
              b_mtimes(&c_c_data, &d_aBuffer_data, r);
              cBuffer_size[0] = r->size[0];
              cBuffer_size[1] = r->size[1];
              b_n = r->size[0] * r->size[1];
              for (nbitson = 0; nbitson < b_n; nbitson++) {
                b_cBuffer_data[nbitson] = r->data[nbitson];
              }
            }
          } else if (cBufferInUse) {
            c_cBuffer_data.data = &b_cBuffer_data[0];
            c_cBuffer_data.size = &cBuffer_size[0];
            c_cBuffer_data.allocatedSize = 2;
            c_cBuffer_data.numDimensions = 2;
            c_cBuffer_data.canFreeData = false;
            c_a_data.data = &a_data[0];
            c_a_data.size = &a_size[0];
            c_a_data.allocatedSize = -1;
            c_a_data.numDimensions = 2;
            c_a_data.canFreeData = false;
            b_mtimes(&c_cBuffer_data, &c_a_data, r);
            c_size[0] = r->size[0];
            c_size[1] = r->size[1];
            b_n = r->size[0] * r->size[1];
            for (nbitson = 0; nbitson < b_n; nbitson++) {
              c_data[nbitson] = r->data[nbitson];
            }
          } else {
            b_c_data.data = &c_data[0];
            b_c_data.size = &c_size[0];
            b_c_data.allocatedSize = -1;
            b_c_data.numDimensions = 2;
            b_c_data.canFreeData = false;
            b_a_data.data = &a_data[0];
            b_a_data.size = &a_size[0];
            b_a_data.allocatedSize = -1;
            b_a_data.numDimensions = 2;
            b_a_data.canFreeData = false;
            b_mtimes(&b_c_data, &b_a_data, r);
            cBuffer_size[0] = r->size[0];
            cBuffer_size[1] = r->size[1];
            b_n = r->size[0] * r->size[1];
            for (nbitson = 0; nbitson < b_n; nbitson++) {
              b_cBuffer_data[nbitson] = r->data[nbitson];
            }
          }
          cBufferInUse = !cBufferInUse;
        }
      }
      n >>= 1;
      if (aBufferInUse) {
        aBuffer_data.data = &b_aBuffer_data[0];
        aBuffer_data.size = &aBuffer_size[0];
        aBuffer_data.allocatedSize = 2;
        aBuffer_data.numDimensions = 2;
        aBuffer_data.canFreeData = false;
        c_aBuffer_data.data = &b_aBuffer_data[0];
        c_aBuffer_data.size = &aBuffer_size[0];
        c_aBuffer_data.allocatedSize = 2;
        c_aBuffer_data.numDimensions = 2;
        c_aBuffer_data.canFreeData = false;
        b_mtimes(&aBuffer_data, &c_aBuffer_data, r);
        a_size[0] = r->size[0];
        a_size[1] = r->size[1];
        b_n = r->size[0] * r->size[1];
        for (nbitson = 0; nbitson < b_n; nbitson++) {
          a_data[nbitson] = r->data[nbitson];
        }
      } else {
        d_a_data.data = &a_data[0];
        d_a_data.size = &a_size[0];
        d_a_data.allocatedSize = -1;
        d_a_data.numDimensions = 2;
        d_a_data.canFreeData = false;
        f_a_data.data = &a_data[0];
        f_a_data.size = &a_size[0];
        f_a_data.allocatedSize = -1;
        f_a_data.numDimensions = 2;
        f_a_data.canFreeData = false;
        b_mtimes(&d_a_data, &f_a_data, r);
        aBuffer_size[0] = r->size[0];
        aBuffer_size[1] = r->size[1];
        b_n = r->size[0] * r->size[1];
        for (nbitson = 0; nbitson < b_n; nbitson++) {
          b_aBuffer_data[nbitson] = r->data[nbitson];
        }
      }
      aBufferInUse = !aBufferInUse;
    }
    if (first) {
      if (aBufferInUse) {
        b_n = c_size[0];
        nbitson = c_size[1];
        c_size[0] = b_n;
        c_size[1] = nbitson;
        b_n *= nbitson;
        if (0 <= b_n - 1) {
          memcpy(&c_data[0], &b_aBuffer_data[0], b_n * sizeof(double));
        }
      } else {
        b_n = c_size[0];
        nbitson = c_size[1];
        c_size[0] = b_n;
        c_size[1] = nbitson;
        b_n *= nbitson;
        if (0 <= b_n - 1) {
          memcpy(&c_data[0], &a_data[0], b_n * sizeof(double));
        }
      }
    } else if (aBufferInUse) {
      cBuffer_data.data = &b_cBuffer_data[0];
      cBuffer_data.size = &cBuffer_size[0];
      cBuffer_data.allocatedSize = 2;
      cBuffer_data.numDimensions = 2;
      cBuffer_data.canFreeData = false;
      e_a_data.data = &b_aBuffer_data[0];
      e_a_data.size = &aBuffer_size[0];
      e_a_data.allocatedSize = 2;
      e_a_data.numDimensions = 2;
      e_a_data.canFreeData = false;
      b_mtimes(&cBuffer_data, &e_a_data, r);
      c_size[0] = r->size[0];
      c_size[1] = r->size[1];
      b_n = r->size[0] * r->size[1];
      for (nbitson = 0; nbitson < b_n; nbitson++) {
        c_data[nbitson] = r->data[nbitson];
      }
    } else {
      cBuffer_data.data = &b_cBuffer_data[0];
      cBuffer_data.size = &cBuffer_size[0];
      cBuffer_data.allocatedSize = 2;
      cBuffer_data.numDimensions = 2;
      cBuffer_data.canFreeData = false;
      e_a_data.data = &a_data[0];
      e_a_data.size = &a_size[0];
      e_a_data.allocatedSize = -1;
      e_a_data.numDimensions = 2;
      e_a_data.canFreeData = false;
      b_mtimes(&cBuffer_data, &e_a_data, r);
      c_size[0] = r->size[0];
      c_size[1] = r->size[1];
      b_n = r->size[0] * r->size[1];
      for (nbitson = 0; nbitson < b_n; nbitson++) {
        c_data[nbitson] = r->data[nbitson];
      }
    }
  }
  emxFree_real_T(&r);
}

/* End of code generation (matrix_to_integer_power.c) */
