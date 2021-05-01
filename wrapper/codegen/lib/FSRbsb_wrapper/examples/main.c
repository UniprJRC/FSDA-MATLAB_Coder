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
#include "FSRbsb_wrapper.h"
#include "FSRbsb_wrapper_emxAPI.h"
#include "FSRbsb_wrapper_terminate.h"
#include "FSRbsb_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static emxArray_real_T *argInit_Unboundedx1_real_T(void);

static emxArray_real_T *argInit_Unboundedxd1_real_T(void);

static bool argInit_boolean_T(void);

static double argInit_real_T(void);

static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);

static void main_FSRbsb_wrapper(void);

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

static emxArray_real_T *argInit_Unboundedxd1_real_T(void)
{
  emxArray_real_T *result;
  int idx0;
  int idx1;
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result = emxCreate_real_T(2, 1);
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      /* Set the value of the array element.
Change this value to the value that the application requires. */
      result->data[idx0] = argInit_real_T();
    }
  }
  return result;
}

static bool argInit_boolean_T(void)
{
  return false;
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

static void main_FSRbsb_wrapper(void)
{
  emxArray_real32_T *BB;
  emxArray_real_T *Un;
  emxArray_real_T *X;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *y;
  bool intercept_tmp;
  emxInitArray_real_T(&Un, 2);
  emxInitArray_real32_T(&BB, 2);
  /* Initialize function 'FSRbsb_wrapper' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'X'. */
  X = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'bsb'. */
  bsb = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'bsbsteps'. */
  bsbsteps = argInit_Unboundedxd1_real_T();
  intercept_tmp = argInit_boolean_T();
  /* Call the entry-point 'FSRbsb_wrapper'. */
  FSRbsb_wrapper(y, X, bsb, bsbsteps, argInit_real_T(), intercept_tmp,
                 intercept_tmp, intercept_tmp, Un, BB);
  emxDestroyArray_real32_T(BB);
  emxDestroyArray_real_T(Un);
  emxDestroyArray_real_T(bsbsteps);
  emxDestroyArray_real_T(bsb);
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
  main_FSRbsb_wrapper();
  /* Terminate the application.
You do not need to do this more than one time. */
  FSRbsb_wrapper_terminate();
  return 0;
}

/* End of code generation (main.c) */
