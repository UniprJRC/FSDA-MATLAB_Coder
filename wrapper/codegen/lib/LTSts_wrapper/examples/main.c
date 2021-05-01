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
#include "LTSts_wrapper.h"
#include "LTSts_wrapper_emxAPI.h"
#include "LTSts_wrapper_terminate.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static emxArray_real_T *argInit_Unboundedx1_real_T(void);

static bool argInit_boolean_T(void);

static void argInit_d1xd1_real_T(double result_data[], int result_size[2]);

static void argInit_d2xd1_real_T(double result_data[], int result_size[2]);

static double argInit_real_T(void);

static struct0_T argInit_struct0_T(void);

static struct1_T argInit_struct1_T(void);

static struct2_T argInit_struct2_T(void);

static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);

static void main_LTSts_wrapper(void);

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

static void argInit_d2xd1_real_T(double result_data[], int result_size[2])
{
  int idx0;
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result_size[0] = 2;
  result_size[1] = 1;
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 2; idx0++) {
    result_data[idx0] = argInit_real_T();
  }
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
  result.typeres = result_tmp;
  result.huberc = result_tmp;
  result.wlength = result_tmp;
  return result;
}

static struct1_T argInit_struct1_T(void)
{
  struct1_T result;
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

static struct2_T argInit_struct2_T(void)
{
  struct2_T result;
  double result_tmp;
  /* Set the value of each structure field.
Change this value to the value that the application requires. */
  result_tmp = argInit_real_T();
  result.s = result_tmp;
  result.trend = result_tmp;
  result.seasonal = result_tmp;
  result.lshift = result_tmp;
  argInit_d1xd1_real_T(result.ARp.data, result.ARp.size);
  result.X = c_argInit_UnboundedxUnbounded_r();
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

static void main_LTSts_wrapper(void)
{
  emxArray_real_T *C;
  emxArray_real_T *y;
  struct0_T r;
  struct1_T r1;
  struct2_T model;
  struct3_T out;
  double nsamp_data[2];
  double conflev_tmp;
  int nsamp_size[2];
  bool dispresults_tmp;
  emxInit_struct3_T(&out);
  emxInitArray_real_T(&C, 2);
  /* Initialize function 'LTSts_wrapper' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  conflev_tmp = argInit_real_T();
  dispresults_tmp = argInit_boolean_T();
  /* Initialize function input argument 'lshiftlocref'. */
  /* Initialize function input argument 'lts'. */
  /* Initialize function input argument 'model'. */
  model = argInit_struct2_T();
  /* Initialize function input argument 'nsamp'. */
  argInit_d2xd1_real_T(nsamp_data, nsamp_size);
  /* Call the entry-point 'LTSts_wrapper'. */
  r = argInit_struct0_T();
  r1 = argInit_struct1_T();
  LTSts_wrapper(y, conflev_tmp, dispresults_tmp, conflev_tmp, dispresults_tmp,
                &r, &r1, &model, dispresults_tmp, conflev_tmp, dispresults_tmp,
                nsamp_data, nsamp_size, conflev_tmp, conflev_tmp, conflev_tmp,
                dispresults_tmp, &out, C);
  emxDestroyArray_real_T(C);
  emxDestroy_struct3_T(out);
  emxDestroy_struct2_T(model);
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
  main_LTSts_wrapper();
  /* Terminate the application.
You do not need to do this more than one time. */
  LTSts_wrapper_terminate();
  return 0;
}

/* End of code generation (main.c) */
