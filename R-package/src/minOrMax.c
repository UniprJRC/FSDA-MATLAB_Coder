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
void b_maximum(const emxArray_real_T *x, double *ex, int *idx)
{
  double d;
  int i;
  int k;
  int last;
  bool exitg1;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else if ((x->data[0] < x->data[x->size[0] - 1]) ||
               (rtIsNaN(x->data[0]) && (!rtIsNaN(x->data[x->size[0] - 1])))) {
      *ex = x->data[x->size[0] - 1];
      *idx = x->size[0];
    } else {
      *ex = x->data[0];
      *idx = 1;
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x->data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (*idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[*idx - 1];
      i = *idx + 1;
      for (k = i; k <= last; k++) {
        d = x->data[k - 1];
        if (*ex < d) {
          *ex = d;
          *idx = k;
        }
      }
    }
  }
}

double b_minimum(const emxArray_real_T *x)
{
  double d;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  last = x->size[1];
  if (x->size[1] <= 2) {
    if (x->size[1] == 1) {
      ex = x->data[0];
    } else if ((x->data[0] > x->data[x->size[1] - 1]) ||
               (rtIsNaN(x->data[0]) && (!rtIsNaN(x->data[x->size[1] - 1])))) {
      ex = x->data[x->size[1] - 1];
    } else {
      ex = x->data[0];
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x->data[0];
    } else {
      ex = x->data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        d = x->data[k - 1];
        if (ex > d) {
          ex = d;
        }
      }
    }
  }
  return ex;
}

double c_maximum(const emxArray_real_T *x)
{
  double d;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      ex = x->data[0];
    } else if ((x->data[0] < x->data[x->size[0] - 1]) ||
               (rtIsNaN(x->data[0]) && (!rtIsNaN(x->data[x->size[0] - 1])))) {
      ex = x->data[x->size[0] - 1];
    } else {
      ex = x->data[0];
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x->data[0];
    } else {
      ex = x->data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        d = x->data[k - 1];
        if (ex < d) {
          ex = d;
        }
      }
    }
  }
  return ex;
}

double c_minimum(const emxArray_real_T *x)
{
  double d;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      ex = x->data[0];
    } else if ((x->data[0] > x->data[x->size[0] - 1]) ||
               (rtIsNaN(x->data[0]) && (!rtIsNaN(x->data[x->size[0] - 1])))) {
      ex = x->data[x->size[0] - 1];
    } else {
      ex = x->data[0];
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x->data[0];
    } else {
      ex = x->data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        d = x->data[k - 1];
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
  double d;
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  last = x->size[1];
  if (x->size[1] <= 2) {
    if (x->size[1] == 1) {
      ex = x->data[0];
    } else if ((x->data[0] < x->data[x->size[1] - 1]) ||
               (rtIsNaN(x->data[0]) && (!rtIsNaN(x->data[x->size[1] - 1])))) {
      ex = x->data[x->size[1] - 1];
    } else {
      ex = x->data[0];
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x->data[0];
    } else {
      ex = x->data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        d = x->data[k - 1];
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
  double d;
  int i;
  int k;
  int last;
  bool exitg1;
  last = x->size[0];
  if (x->size[0] <= 2) {
    if (x->size[0] == 1) {
      *ex = x->data[0];
      *idx = 1;
    } else if ((x->data[0] > x->data[x->size[0] - 1]) ||
               (rtIsNaN(x->data[0]) && (!rtIsNaN(x->data[x->size[0] - 1])))) {
      *ex = x->data[x->size[0] - 1];
      *idx = x->size[0];
    } else {
      *ex = x->data[0];
      *idx = 1;
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      *idx = 1;
    } else {
      *idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x->data[k - 1])) {
          *idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (*idx == 0) {
      *ex = x->data[0];
      *idx = 1;
    } else {
      *ex = x->data[*idx - 1];
      i = *idx + 1;
      for (k = i; k <= last; k++) {
        d = x->data[k - 1];
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
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  last = x->size[0] * x->size[1];
  if (x->size[0] * x->size[1] <= 2) {
    if (x->size[0] * x->size[1] == 1) {
      ex = x->data[0];
    } else if ((x->data[0] < x->data[x->size[0] * x->size[1] - 1]) ||
               (rtIsNaN(x->data[0]) &&
                (!rtIsNaN(x->data[x->size[0] * x->size[1] - 1])))) {
      ex = x->data[x->size[0] * x->size[1] - 1];
    } else {
      ex = x->data[0];
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x->data[0];
    } else {
      ex = x->data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        if (ex < x->data[k - 1]) {
          ex = x->data[k - 1];
        }
      }
    }
  }
  return ex;
}

double e_minimum(const emxArray_real_T *x)
{
  double ex;
  int idx;
  int k;
  int last;
  bool exitg1;
  last = x->size[0] * x->size[1];
  if (x->size[0] * x->size[1] <= 2) {
    if (x->size[0] * x->size[1] == 1) {
      ex = x->data[0];
    } else if ((x->data[0] > x->data[x->size[0] * x->size[1] - 1]) ||
               (rtIsNaN(x->data[0]) &&
                (!rtIsNaN(x->data[x->size[0] * x->size[1] - 1])))) {
      ex = x->data[x->size[0] * x->size[1] - 1];
    } else {
      ex = x->data[0];
    }
  } else {
    if (!rtIsNaN(x->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= last)) {
        if (!rtIsNaN(x->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }
    if (idx == 0) {
      ex = x->data[0];
    } else {
      ex = x->data[idx - 1];
      idx++;
      for (k = idx; k <= last; k++) {
        if (ex > x->data[k - 1]) {
          ex = x->data[k - 1];
        }
      }
    }
  }
  return ex;
}

void f_maximum(const emxArray_real_T *x, emxArray_real_T *ex)
{
  double b;
  int i;
  int j;
  int m;
  int n;
  bool p;
  m = x->size[0] - 1;
  n = x->size[1];
  i = ex->size[0];
  ex->size[0] = x->size[0];
  emxEnsureCapacity_real_T(ex, i);
  if (x->size[0] >= 1) {
    for (i = 0; i <= m; i++) {
      ex->data[i] = x->data[i];
    }
    for (j = 2; j <= n; j++) {
      for (i = 0; i <= m; i++) {
        b = x->data[i + x->size[0] * (j - 1)];
        if (rtIsNaN(b)) {
          p = false;
        } else if (rtIsNaN(ex->data[i])) {
          p = true;
        } else {
          p = (ex->data[i] < b);
        }
        if (p) {
          ex->data[i] = b;
        }
      }
    }
  }
}

void f_minimum(const emxArray_real_T *x, double *ex, int *idx)
{
  double b_tmp;
  int i;
  int vlen;
  bool p;
  *idx = 1;
  vlen = x->size[2];
  *ex = x->data[0];
  for (i = 2; i <= vlen; i++) {
    b_tmp = x->data[i - 1];
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

void g_maximum(const emxArray_real_T *x, emxArray_real_T *ex,
               emxArray_int32_T *idx)
{
  double b;
  int j;
  int loop_ub;
  int m;
  int n;
  bool p;
  m = x->size[0] - 1;
  n = x->size[1];
  j = ex->size[0];
  ex->size[0] = x->size[0];
  emxEnsureCapacity_real_T(ex, j);
  j = idx->size[0];
  idx->size[0] = x->size[0];
  emxEnsureCapacity_int32_T(idx, j);
  loop_ub = x->size[0];
  for (j = 0; j < loop_ub; j++) {
    idx->data[j] = 1;
  }
  if (x->size[0] >= 1) {
    for (loop_ub = 0; loop_ub <= m; loop_ub++) {
      ex->data[loop_ub] = x->data[loop_ub];
    }
    for (j = 2; j <= n; j++) {
      for (loop_ub = 0; loop_ub <= m; loop_ub++) {
        b = x->data[loop_ub + x->size[0] * (j - 1)];
        if (rtIsNaN(b)) {
          p = false;
        } else if (rtIsNaN(ex->data[loop_ub])) {
          p = true;
        } else {
          p = (ex->data[loop_ub] < b);
        }
        if (p) {
          ex->data[loop_ub] = b;
          idx->data[loop_ub] = j;
        }
      }
    }
  }
}

bool h_maximum(const bool x[6])
{
  int k;
  bool ex;
  ex = x[0];
  for (k = 0; k < 5; k++) {
    if ((int)ex < (int)x[k + 1]) {
      ex = true;
    }
  }
  return ex;
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
  double a;
  double b;
  int i;
  int j;
  int m;
  int n;
  bool p;
  m = x->size[0];
  n = x->size[1];
  j = ex->size[0] * ex->size[1];
  ex->size[0] = 1;
  ex->size[1] = x->size[1];
  emxEnsureCapacity_real_T(ex, j);
  if (x->size[1] >= 1) {
    for (j = 0; j < n; j++) {
      ex->data[j] = x->data[x->size[0] * j];
      for (i = 2; i <= m; i++) {
        a = ex->data[j];
        b = x->data[(i + x->size[0] * j) - 1];
        if (rtIsNaN(b)) {
          p = false;
        } else if (rtIsNaN(a)) {
          p = true;
        } else {
          p = (a < b);
        }
        if (p) {
          ex->data[j] = b;
        }
      }
    }
  }
}

void minimum(const emxArray_real_T *x, emxArray_real_T *ex)
{
  double a;
  double b;
  int i;
  int j;
  int m;
  int n;
  bool p;
  m = x->size[0];
  n = x->size[1];
  j = ex->size[0] * ex->size[1];
  ex->size[0] = 1;
  ex->size[1] = x->size[1];
  emxEnsureCapacity_real_T(ex, j);
  if (x->size[1] >= 1) {
    for (j = 0; j < n; j++) {
      ex->data[j] = x->data[x->size[0] * j];
      for (i = 2; i <= m; i++) {
        a = ex->data[j];
        b = x->data[(i + x->size[0] * j) - 1];
        if (rtIsNaN(b)) {
          p = false;
        } else if (rtIsNaN(a)) {
          p = true;
        } else {
          p = (a > b);
        }
        if (p) {
          ex->data[j] = b;
        }
      }
    }
  }
}

/* End of code generation (minOrMax.c) */
