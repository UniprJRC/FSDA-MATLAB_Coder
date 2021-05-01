/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprintf.c
 *
 * Code generation for function 'sprintf'
 *
 */

/* Include files */
#include "sprintf.h"
#include "FSRmdr_wrapper_emxutil.h"
#include "FSRmdr_wrapper_types.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include <stdio.h>

/* Function Definitions */
void b_sprintf(double varargin_1)
{
  emxArray_char_T *charStr;
  int i;
  int nbytes;
  emxInit_char_T(&charStr, 2);
  nbytes = (int)snprintf(NULL, 0,
                         "Attention : init1 should be >= length of supplied "
                         "subset. It is set equal to %.0f",
                         varargin_1) +
           1;
  i = charStr->size[0] * charStr->size[1];
  charStr->size[0] = 1;
  charStr->size[1] = nbytes;
  emxEnsureCapacity_char_T(charStr, i);
  snprintf(&charStr->data[0], (size_t)nbytes,
           "Attention : init1 should be >= length of supplied subset. It is "
           "set equal to %.0f",
           varargin_1);
  emxFree_char_T(&charStr);
}

void c_sprintf(double varargin_1)
{
  emxArray_char_T *charStr;
  int i;
  int nbytes;
  emxInit_char_T(&charStr, 2);
  nbytes =
      (int)snprintf(NULL, 0, "Value of S2 at step %.0f is zero, mdr is NaN",
                    varargin_1) +
      1;
  i = charStr->size[0] * charStr->size[1];
  charStr->size[0] = 1;
  charStr->size[1] = nbytes;
  emxEnsureCapacity_char_T(charStr, i);
  snprintf(&charStr->data[0], (size_t)nbytes,
           "Value of S2 at step %.0f is zero, mdr is NaN", varargin_1);
  emxFree_char_T(&charStr);
}

/* End of code generation (sprintf.c) */
