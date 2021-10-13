/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * minOrMax.c
 *
 * Code generation for function 'minOrMax'
 *
 */

/* Include files */
#include "minOrMax.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
double b_maximum(const emxArray_real_T *x)
{
  const double *x_data;
  double d;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  x_data = x->data;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 0) {
      ex = rtNaN;
    } else if (x->size[0] == 1) {
      ex = x_data[0];
    } else if ((x_data[0] < x_data[1]) ||
               (rtIsNaN(x_data[0]) && (!rtIsNaN(x_data[1])))) {
      ex = x_data[1];
    } else {
      ex = x_data[0];
    }
  } else {
    if (!rtIsNaN(x_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x_data[0];
    } else {
      ex = x_data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        d = x_data[k - 1];
        if (ex < d) {
          ex = d;
        }
      }
    }
  }
  return ex;
}

double b_minimum(const emxArray_real_T *x)
{
  const double *x_data;
  double d;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  x_data = x->data;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 0) {
      ex = rtNaN;
    } else if (x->size[0] == 1) {
      ex = x_data[0];
    } else if ((x_data[0] > x_data[1]) ||
               (rtIsNaN(x_data[0]) && (!rtIsNaN(x_data[1])))) {
      ex = x_data[1];
    } else {
      ex = x_data[0];
    }
  } else {
    if (!rtIsNaN(x_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x_data[0];
    } else {
      ex = x_data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        d = x_data[k - 1];
        if (ex > d) {
          ex = d;
        }
      }
    }
  }
  return ex;
}

void c_maximum(const emxArray_real_T *x, double *ex, int *idx)
{
  const double *x_data;
  double d;
  int i;
  int k;
  int last;
  bool exitg1;
  x_data = x->data;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 0) {
      *ex = rtNaN;
      *idx = 1;
    } else if (x->size[0] == 1) {
      *ex = x_data[0];
      *idx = 1;
    } else if ((x_data[0] < x_data[1]) ||
               (rtIsNaN(x_data[0]) && (!rtIsNaN(x_data[1])))) {
      *ex = x_data[1];
      *idx = 2;
    } else {
      *ex = x_data[0];
      *idx = 1;
    }
  } else {
    if (!rtIsNaN(x_data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (*idx == 0) {
      *ex = x_data[0];
      *idx = 1;
    } else {
      *ex = x_data[*idx - 1];
      i = *idx + 1;
      for (k = i; k <= last; k++) {
        d = x_data[k - 1];
        if (*ex < d) {
          *ex = d;
          *idx = k;
        }
      }
    }
  }
}

double c_minimum(const emxArray_real_T *x)
{
  const double *x_data;
  double d;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  x_data = x->data;
  last = x->size[1];
  if (x->size[1] <= 2) {
    if (x->size[1] == 0) {
      ex = rtNaN;
    } else if (x->size[1] == 1) {
      ex = x_data[0];
    } else if ((x_data[0] > x_data[1]) ||
               (rtIsNaN(x_data[0]) && (!rtIsNaN(x_data[1])))) {
      ex = x_data[1];
    } else {
      ex = x_data[0];
    }
  } else {
    if (!rtIsNaN(x_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x_data[0];
    } else {
      ex = x_data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        d = x_data[k - 1];
        if (ex > d) {
          ex = d;
        }
      }
    }
  }
  return ex;
}

double d_maximum(const emxArray_real_T *x)
{
  const double *x_data;
  double d;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  x_data = x->data;
  last = x->size[1];
  if (x->size[1] <= 2) {
    if (x->size[1] == 0) {
      ex = rtNaN;
    } else if (x->size[1] == 1) {
      ex = x_data[0];
    } else if ((x_data[0] < x_data[1]) ||
               (rtIsNaN(x_data[0]) && (!rtIsNaN(x_data[1])))) {
      ex = x_data[1];
    } else {
      ex = x_data[0];
    }
  } else {
    if (!rtIsNaN(x_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x_data[0];
    } else {
      ex = x_data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        d = x_data[k - 1];
        if (ex < d) {
          ex = d;
        }
      }
    }
  }
  return ex;
}

void d_minimum(const emxArray_real_T *x, double *ex, int *idx)
{
  const double *x_data;
  double d;
  int i;
  int k;
  int last;
  bool exitg1;
  x_data = x->data;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 0) {
      *ex = rtNaN;
      *idx = 1;
    } else if (x->size[0] == 1) {
      *ex = x_data[0];
      *idx = 1;
    } else if ((x_data[0] > x_data[1]) ||
               (rtIsNaN(x_data[0]) && (!rtIsNaN(x_data[1])))) {
      *ex = x_data[1];
      *idx = 2;
    } else {
      *ex = x_data[0];
      *idx = 1;
    }
  } else {
    if (!rtIsNaN(x_data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (*idx == 0) {
      *ex = x_data[0];
      *idx = 1;
    } else {
      *ex = x_data[*idx - 1];
      i = *idx + 1;
      for (k = i; k <= last; k++) {
        d = x_data[k - 1];
        if (*ex > d) {
          *ex = d;
          *idx = k;
        }
      }
    }
  }
}

double e_maximum(const emxArray_real_T *x)
{
  const double *x_data;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  x_data = x->data;
  last = x->size[0] * x->size[1];
  if (x->size[0] * x->size[1] <= 2) {
    if (x->size[0] * x->size[1] == 0) {
      ex = rtNaN;
    } else if (x->size[0] * x->size[1] == 1) {
      ex = x_data[0];
    } else if ((x_data[0] < x_data[x->size[0] * x->size[1] - 1]) ||
               (rtIsNaN(x_data[0]) &&
                (!rtIsNaN(x_data[x->size[0] * x->size[1] - 1])))) {
      ex = x_data[x->size[0] * x->size[1] - 1];
    } else {
      ex = x_data[0];
    }
  } else {
    if (!rtIsNaN(x_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x_data[0];
    } else {
      ex = x_data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        if (ex < x_data[k - 1]) {
          ex = x_data[k - 1];
        }
      }
    }
  }
  return ex;
}

void e_minimum(const double x[50], double *ex, int *idx)
{
  double d;
  int i;
  int k;
  bool exitg1;
  if (!rtIsNaN(x[0])) {
    *idx = 1;
  } else {
    *idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 51)) {
      if (!rtIsNaN(x[k - 1])) {
        *idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (*idx == 0) {
    *ex = x[0];
    *idx = 1;
  } else {
    *ex = x[*idx - 1];
    i = *idx + 1;
    for (k = i; k < 51; k++) {
      d = x[k - 1];
      if (*ex > d) {
        *ex = d;
        *idx = k;
      }
    }
  }
}

void f_maximum(const emxArray_real_T *x, emxArray_real_T *ex)
{
  const double *x_data;
  double b;
  double *ex_data;
  int i;
  int j;
  int m;
  int n;
  bool p;
  x_data = x->data;
  m = x->size[0] - 1;
  n = x->size[1];
  i = ex->size[0];
  ex->size[0] = x->size[0];
  emxEnsureCapacity_real_T(ex, i);
  ex_data = ex->data;
  if (x->size[0] >= 1) {
    for (i = 0; i <= m; i++) {
      ex_data[i] = x_data[i];
    }
    for (j = 2; j <= n; j++) {
      for (i = 0; i <= m; i++) {
        b = x_data[i + x->size[0] * (j - 1)];
        if (rtIsNaN(b)) {
          p = false;
        } else if (rtIsNaN(ex_data[i])) {
          p = true;
        } else {
          p = (ex_data[i] < b);
        }
        if (p) {
          ex_data[i] = b;
        }
      }
    }
  }
}

void f_minimum(const double x[3], double *ex, int *idx)
{
  double d;
  int i;
  int k;
  bool exitg1;
  if (!rtIsNaN(x[0])) {
    *idx = 1;
  } else {
    *idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!rtIsNaN(x[k - 1])) {
        *idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (*idx == 0) {
    *ex = x[0];
    *idx = 1;
  } else {
    *ex = x[*idx - 1];
    i = *idx + 1;
    for (k = i; k < 4; k++) {
      d = x[k - 1];
      if (*ex > d) {
        *ex = d;
        *idx = k;
      }
    }
  }
}

void g_maximum(const emxArray_real_T *x, emxArray_real_T *ex,
               emxArray_int32_T *idx)
{
  const double *x_data;
  double b;
  double *ex_data;
  int j;
  int loop_ub;
  int m;
  int n;
  int *idx_data;
  bool p;
  x_data = x->data;
  m = x->size[0] - 1;
  n = x->size[1];
  j = ex->size[0];
  ex->size[0] = x->size[0];
  emxEnsureCapacity_real_T(ex, j);
  ex_data = ex->data;
  j = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(idx, j);
  idx_data = idx->data;
  loop_ub = x->size[0];
  for (j = 0; j < loop_ub; j++) {
    idx_data[j] = 1;
  }
  if (x->size[0] >= 1) {
    for (loop_ub = 0; loop_ub <= m; loop_ub++) {
      ex_data[loop_ub] = x_data[loop_ub];
    }
    for (j = 2; j <= n; j++) {
      for (loop_ub = 0; loop_ub <= m; loop_ub++) {
        b = x_data[loop_ub + x->size[0] * (j - 1)];
        if (rtIsNaN(b)) {
          p = false;
        } else if (rtIsNaN(ex_data[loop_ub])) {
          p = true;
        } else {
          p = (ex_data[loop_ub] < b);
        }
        if (p) {
          ex_data[loop_ub] = b;
          idx_data[loop_ub] = j;
        }
      }
    }
  }
}

double g_minimum(const emxArray_real_T *x)
{
  const double *x_data;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  x_data = x->data;
  last = x->size[0] * x->size[1];
  if (x->size[0] * x->size[1] <= 2) {
    if (x->size[0] * x->size[1] == 0) {
      ex = rtNaN;
    } else if (x->size[0] * x->size[1] == 1) {
      ex = x_data[0];
    } else if ((x_data[0] > x_data[x->size[0] * x->size[1] - 1]) ||
               (rtIsNaN(x_data[0]) &&
                (!rtIsNaN(x_data[x->size[0] * x->size[1] - 1])))) {
      ex = x_data[x->size[0] * x->size[1] - 1];
    } else {
      ex = x_data[0];
    }
  } else {
    if (!rtIsNaN(x_data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x_data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x_data[0];
    } else {
      ex = x_data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        if (ex > x_data[k - 1]) {
          ex = x_data[k - 1];
        }
      }
    }
  }
  return ex;
}

bool h_maximum(const bool x[6])
{
  int k;
  bool ex;
  ex = x[0];
  for (k = 0; k < 5; k++) {
    ex = (((int)ex < (int)x[k + 1]) || ex);
  }
  return ex;
}

void h_minimum(const emxArray_real_T *x, double *ex, int *idx)
{
  const double *x_data;
  double b_tmp;
  int i;
  int j;
  int k;
  int vlen;
  int xOffset;
  bool p;
  x_data = x->data;
  *idx = 1;
  vlen = x->size[2];
  k = 3;
  if (x->size[2] == 1) {
    k = 2;
  }
  if (3 > k) {
    k = x->size[2];
  } else {
    k = 1;
  }
  for (j = 0; j < k; j++) {
    *ex = x_data[j];
  }
  for (i = 2; i <= vlen; i++) {
    xOffset = (i - 1) * k - 1;
    for (j = 0; j < k; j++) {
      b_tmp = x_data[(xOffset + j) + 1];
      if (rtIsNaN(b_tmp)) {
        p = false;
      } else if (rtIsNaN(*ex)) {
        p = true;
      } else {
        p = (*ex > b_tmp);
      }
      if (p) {
        *ex = b_tmp;
        *idx = i;
      }
    }
  }
}

bool i_maximum(const bool x[2])
{
  bool ex;
  ex = x[0];
  return ((int)x[0] < (int)x[1]) || ex;
}

double j_maximum(const double x[3])
{
  double d;
  double ex;
  int idx;
  int k;
  bool exitg1;
  if (!rtIsNaN(x[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k <= 3)) {
      if (!rtIsNaN(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    idx++;
    for (k = idx; k < 4; k++) {
      d = x[k - 1];
      if (ex < d) {
        ex = d;
      }
    }
  }
  return ex;
}

void maximum(const emxArray_real_T *x, emxArray_real_T *ex)
{
  const double *x_data;
  double a;
  double b;
  double *ex_data;
  int i;
  int j;
  int m;
  int n;
  bool p;
  x_data = x->data;
  m = x->size[0];
  n = x->size[1];
  j = ex->size[0] * ex->size[1];
  ex->size[0] = 1;
  ex->size[1] = x->size[1];
  emxEnsureCapacity_real_T(ex, j);
  ex_data = ex->data;
  if (x->size[1] >= 1) {
    for (j = 0; j < n; j++) {
      ex_data[j] = x_data[x->size[0] * j];
      for (i = 2; i <= m; i++) {
        a = ex_data[j];
        b = x_data[(i + x->size[0] * j) - 1];
        if (rtIsNaN(b)) {
          p = false;
        } else if (rtIsNaN(a)) {
          p = true;
        } else {
          p = (a < b);
        }
        if (p) {
          ex_data[j] = b;
        }
      }
    }
  }
}

void minimum(const emxArray_real_T *x, emxArray_real_T *ex)
{
  const double *x_data;
  double a;
  double b;
  double *ex_data;
  int i;
  int j;
  int m;
  int n;
  bool p;
  x_data = x->data;
  m = x->size[0];
  n = x->size[1];
  j = ex->size[0] * ex->size[1];
  ex->size[0] = 1;
  ex->size[1] = x->size[1];
  emxEnsureCapacity_real_T(ex, j);
  ex_data = ex->data;
  if (x->size[1] >= 1) {
    for (j = 0; j < n; j++) {
      ex_data[j] = x_data[x->size[0] * j];
      for (i = 2; i <= m; i++) {
        a = ex_data[j];
        b = x_data[(i + x->size[0] * j) - 1];
        if (rtIsNaN(b)) {
          p = false;
        } else if (rtIsNaN(a)) {
          p = true;
        } else {
          p = (a > b);
        }
        if (p) {
          ex_data[j] = b;
        }
      }
    }
  }
}

/* End of code generation (minOrMax.c) */
