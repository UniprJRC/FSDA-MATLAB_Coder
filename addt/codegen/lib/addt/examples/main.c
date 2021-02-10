/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
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
#include "addt.h"
#include "addt_emxAPI.h"
#include "addt_terminate.h"
#include "addt_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static emxArray_real_T *argInit_Unboundedx1_real_T(void);

static bool argInit_boolean_T(void);

static void argInit_d1xd1_real_T(double result_data[], int result_size[2]);

static double argInit_real_T(void);

static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);

static void main_addt(void);

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

static void main_addt(void)
{
  emxArray_real_T *X;
  emxArray_real_T *varargin_16;
  emxArray_real_T *w;
  emxArray_real_T *y;
  struct0_T out;
  double varargin_4_data;
  double varargin_6_tmp;
  int varargin_4_size[2];
  bool varargin_2_tmp;
  /* Initialize function 'addt' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'X'. */
  X = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'w'. */
  w = argInit_Unboundedx1_real_T();
  varargin_2_tmp = argInit_boolean_T();
  /* Initialize function input argument 'varargin_4'. */
  argInit_d1xd1_real_T((double *)&varargin_4_data, varargin_4_size);
  varargin_6_tmp = argInit_real_T();
  /* Initialize function input argument 'varargin_16'. */
  varargin_16 = argInit_Unboundedx1_real_T();
  /* Call the entry-point 'addt'. */
  addt(y, X, w, varargin_2_tmp, (double *)&varargin_4_data, varargin_4_size,
       varargin_6_tmp, varargin_6_tmp, varargin_6_tmp, varargin_6_tmp,
       varargin_2_tmp, varargin_16, &out);
  emxDestroyArray_real_T(varargin_16);
  emxDestroyArray_real_T(w);
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
  main_addt();
  /* Terminate the application.
You do not need to do this more than one time. */
  addt_terminate();
  return 0;
}

/* End of code generation (main.c) */
