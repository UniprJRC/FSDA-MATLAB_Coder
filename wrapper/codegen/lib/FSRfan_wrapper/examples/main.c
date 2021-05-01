/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include files */
#include "main.h"
#include "FSRfan_wrapper.h"
#include "FSRfan_wrapper_emxAPI.h"
#include "FSRfan_wrapper_terminate.h"
#include "FSRfan_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static emxArray_real_T *argInit_Unboundedx1_real_T(void);

static bool argInit_boolean_T(void);

static char argInit_char_T(void);

static emxArray_char_T *argInit_d1xUnbounded_char_T(void);

static double argInit_real_T(void);

static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);

static void main_FSRfan_wrapper(void);

/* Function Definitions */
static emxArray_real_T *argInit_Unboundedx1_real_T(void)
{
  emxArray_real_T *result;
  const int i = 2;
  int idx0;
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result = emxCreateND_real_T(1, &i);
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result->data[idx0] = argInit_real_T();
  }
  return result;
}

static bool argInit_boolean_T(void)
{
  return false;
}

static char argInit_char_T(void)
{
  return '?';
}

static emxArray_char_T *argInit_d1xUnbounded_char_T(void)
{
  emxArray_char_T *result;
  int idx0;
  int idx1;
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result = emxCreate_char_T(1, 2);
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      /* Set the value of the array element.
Change this value to the value that the application requires. */
      result->data[result->size[0] * idx1] = argInit_char_T();
    }
  }
  return result;
}

static double argInit_real_T(void)
{
  return 0.0;
}

static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void)
{
  emxArray_real_T *result;
  int idx0;
  int idx1;
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result = emxCreate_real_T(2, 2);
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      /* Set the value of the array element.
Change this value to the value that the application requires. */
      result->data[idx0 + result->size[0] * idx1] = argInit_real_T();
    }
  }
  return result;
}

static void main_FSRfan_wrapper(void)
{
  emxArray_char_T *family;
  emxArray_real_T *X;
  emxArray_real_T *la;
  emxArray_real_T *lms;
  emxArray_real_T *y;
  struct0_T out;
  double h_tmp;
  bool intercept_tmp;
  emxInit_struct0_T(&out);
  /* Initialize function 'FSRfan_wrapper' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'X'. */
  X = c_argInit_UnboundedxUnbounded_r();
  intercept_tmp = argInit_boolean_T();
  /* Initialize function input argument 'la'. */
  la = argInit_Unboundedx1_real_T();
  h_tmp = argInit_real_T();
  /* Initialize function input argument 'lms'. */
  lms = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'family'. */
  family = argInit_d1xUnbounded_char_T();
  /* Call the entry-point 'FSRfan_wrapper'. */
  FSRfan_wrapper(y, X, intercept_tmp, intercept_tmp, la, h_tmp, h_tmp, lms,
                 h_tmp, family, intercept_tmp, &out);
  emxDestroy_struct0_T(out);
  emxDestroyArray_char_T(family);
  emxDestroyArray_real_T(lms);
  emxDestroyArray_real_T(la);
  emxDestroyArray_real_T(X);
  emxDestroyArray_real_T(y);
}

int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_FSRfan_wrapper();
  /* Terminate the application.
You do not need to do this more than one time. */
  FSRfan_wrapper_terminate();
  return 0;
}

/* End of code generation (main.c) */
