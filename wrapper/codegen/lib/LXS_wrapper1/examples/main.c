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
#include "LXS_wrapper1.h"
#include "LXS_wrapper1_emxAPI.h"
#include "LXS_wrapper1_terminate.h"
#include "LXS_wrapper1_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static emxArray_real_T *argInit_Unboundedx1_real_T(void);

static bool argInit_boolean_T(void);

static void argInit_d1xd1_real_T(double result_data[], int result_size[2]);

static double argInit_real_T(void);

static struct0_T argInit_struct0_T(void);

static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);

static void main_LXS_wrapper1(void);

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

static void argInit_d1xd1_real_T(double result_data[], int result_size[2])
{
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result_size[0] = 1;
  result_size[1] = 1;
  /* Loop over the array to initialize each element. */
  result_data[0] = argInit_real_T();
}

static double argInit_real_T(void)
{
  return 0.0;
}

static struct0_T argInit_struct0_T(void)
{
  struct0_T result;
  double result_tmp;
  /* Set the value of each structure field.
Change this value to the value that the application requires. */
  result_tmp = argInit_real_T();
  result.refsteps = result_tmp;
  result.refstepsbestr = result_tmp;
  result.reftol = result_tmp;
  result.reftolbestr = result_tmp;
  result.bestr = result_tmp;
  return result;
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

static void main_LXS_wrapper1(void)
{
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct0_T r;
  struct1_T out;
  double bonflevoutX_data;
  double conflev_tmp;
  int bonflevoutX_size[2];
  bool intercept_tmp;
  emxInit_struct1_T(&out);
  emxInitArray_real_T(&C, 2);
  /* Initialize function 'LXS_wrapper1' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'X'. */
  X = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'bonflevoutX'. */
  argInit_d1xd1_real_T((double *)&bonflevoutX_data, bonflevoutX_size);
  conflev_tmp = argInit_real_T();
  intercept_tmp = argInit_boolean_T();
  /* Initialize function input argument 'lms'. */
  /* Call the entry-point 'LXS_wrapper1'. */
  r = argInit_struct0_T();
  LXS_wrapper1(y, X, (double *)&bonflevoutX_data, bonflevoutX_size, conflev_tmp,
               conflev_tmp, intercept_tmp, &r, intercept_tmp, intercept_tmp,
               intercept_tmp, conflev_tmp, intercept_tmp, intercept_tmp, &out,
               C);
  emxDestroyArray_real_T(C);
  emxDestroy_struct1_T(out);
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
  main_LXS_wrapper1();
  /* Terminate the application.
You do not need to do this more than one time. */
  LXS_wrapper1_terminate();
  return 0;
}

/* End of code generation (main.c) */
