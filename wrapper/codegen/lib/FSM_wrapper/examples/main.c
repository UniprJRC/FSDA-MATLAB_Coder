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
#include "FSM_wrapper.h"
#include "FSM_wrapper_emxAPI.h"
#include "FSM_wrapper_terminate.h"
#include "FSM_wrapper_types.h"
#include "FSMbsb_wrapper.h"
#include "FSMmmd_wrapper.h"
#include "FSR_wrapper.h"
#include "FSRbsb_wrapper.h"
#include "FSRfan_wrapper.h"
#include "FSRmdr_wrapper.h"
#include "LTSts_wrapper.h"
#include "LXS_wrapper.h"
#include "LXS_wrapper1.h"
#include "addt_wrapper.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static emxArray_real_T *argInit_Unboundedx1_real_T(void);

static emxArray_real_T *argInit_Unboundedxd1_real_T(void);

static bool argInit_boolean_T(void);

static char argInit_char_T(void);

static emxArray_char_T *argInit_d1xUnbounded_char_T(void);

static void argInit_d1xd1_real_T(double result_data[], int result_size[2]);

static void argInit_d1xd3_char_T(char result_data[], int result_size[2]);

static void argInit_d2xd1_real_T(double result_data[], int result_size[2]);

static double argInit_real_T(void);

static struct3_T argInit_struct3_T(void);

static struct4_T argInit_struct4_T(void);

static struct5_T argInit_struct5_T(void);

static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);

static void main_FSM_wrapper(void);

static void main_FSMbsb_wrapper(void);

static void main_FSMmmd_wrapper(void);

static void main_FSR_wrapper(void);

static void main_FSRbsb_wrapper(void);

static void main_FSRfan_wrapper(void);

static void main_FSRmdr_wrapper(void);

static void main_LTSts_wrapper(void);

static void main_LXS_wrapper(void);

static void main_LXS_wrapper1(void);

static void main_addt_wrapper(void);

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

static void argInit_d1xd1_real_T(double result_data[], int result_size[2])
{
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result_size[0] = 1;
  result_size[1] = 1;
  /* Loop over the array to initialize each element. */
  result_data[0] = argInit_real_T();
}

static void argInit_d1xd3_char_T(char result_data[], int result_size[2])
{
  int idx1;
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result_size[0] = 1;
  result_size[1] = 2;
  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < 2; idx1++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result_data[idx1] = argInit_char_T();
  }
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

static struct3_T argInit_struct3_T(void)
{
  struct3_T result;
  double result_tmp;
  /* Set the value of each structure field.
Change this value to the value that the application requires. */
  result_tmp = argInit_real_T();
  result.typeres = result_tmp;
  result.huberc = result_tmp;
  result.wlength = result_tmp;
  return result;
}

static struct4_T argInit_struct4_T(void)
{
  struct4_T result;
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

static struct5_T argInit_struct5_T(void)
{
  struct5_T result;
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

static void main_FSM_wrapper(void)
{
  emxArray_real_T *Y;
  emxArray_real_T *m0;
  struct0_T out;
  double bonflev_data;
  double init_tmp;
  int bonflev_size[2];
  int crit_size[2];
  char crit_data[3];
  bool msg_tmp;
  emxInit_struct0_T(&out);
  /* Initialize function 'FSM_wrapper' input arguments. */
  /* Initialize function input argument 'Y'. */
  Y = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'bonflev'. */
  argInit_d1xd1_real_T((double *)&bonflev_data, bonflev_size);
  /* Initialize function input argument 'crit'. */
  argInit_d1xd3_char_T(crit_data, crit_size);
  init_tmp = argInit_real_T();
  /* Initialize function input argument 'm0'. */
  m0 = argInit_Unboundedx1_real_T();
  msg_tmp = argInit_boolean_T();
  /* Call the entry-point 'FSM_wrapper'. */
  FSM_wrapper(Y, (double *)&bonflev_data, bonflev_size, crit_data, crit_size,
              init_tmp, m0, msg_tmp, msg_tmp, init_tmp, &out);
  emxDestroy_struct0_T(out);
  emxDestroyArray_real_T(m0);
  emxDestroyArray_real_T(Y);
}

static void main_FSMbsb_wrapper(void)
{
  emxArray_real_T *BB;
  emxArray_real_T *Un;
  emxArray_real_T *Y;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  bool msg_tmp;
  emxInitArray_real_T(&Un, 2);
  emxInitArray_real_T(&BB, 2);
  /* Initialize function 'FSMbsb_wrapper' input arguments. */
  /* Initialize function input argument 'Y'. */
  Y = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'bsb'. */
  bsb = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'bsbsteps'. */
  bsbsteps = argInit_Unboundedxd1_real_T();
  msg_tmp = argInit_boolean_T();
  /* Call the entry-point 'FSMbsb_wrapper'. */
  FSMbsb_wrapper(Y, bsb, bsbsteps, argInit_real_T(), msg_tmp, msg_tmp, Un, BB);
  emxDestroyArray_real_T(BB);
  emxDestroyArray_real_T(Un);
  emxDestroyArray_real_T(bsbsteps);
  emxDestroyArray_real_T(bsb);
  emxDestroyArray_real_T(Y);
}

static void main_FSMmmd_wrapper(void)
{
  emxArray_real_T *BB;
  emxArray_real_T *Un;
  emxArray_real_T *Y;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *mmd;
  bool msg_tmp;
  emxInitArray_real_T(&mmd, 2);
  emxInitArray_real_T(&Un, 2);
  emxInitArray_real_T(&BB, 2);
  /* Initialize function 'FSMmmd_wrapper' input arguments. */
  /* Initialize function input argument 'Y'. */
  Y = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'bsb'. */
  bsb = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'bsbsteps'. */
  bsbsteps = argInit_Unboundedxd1_real_T();
  msg_tmp = argInit_boolean_T();
  /* Call the entry-point 'FSMmmd_wrapper'. */
  FSMmmd_wrapper(Y, bsb, bsbsteps, argInit_real_T(), msg_tmp, msg_tmp, mmd, Un,
                 BB);
  emxDestroyArray_real_T(BB);
  emxDestroyArray_real_T(Un);
  emxDestroyArray_real_T(mmd);
  emxDestroyArray_real_T(bsbsteps);
  emxDestroyArray_real_T(bsb);
  emxDestroyArray_real_T(Y);
}

static void main_FSR_wrapper(void)
{
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct1_T out;
  double bonflev_data;
  double h_tmp;
  double threshoutX_data;
  int bonflev_size[2];
  int threshoutX_size[2];
  bool bsbmfullrank_tmp;
  emxInit_struct1_T(&out);
  /* Initialize function 'FSR_wrapper' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'X'. */
  X = c_argInit_UnboundedxUnbounded_r();
  bsbmfullrank_tmp = argInit_boolean_T();
  /* Initialize function input argument 'bonflev'. */
  argInit_d1xd1_real_T((double *)&bonflev_data, bonflev_size);
  h_tmp = argInit_real_T();
  /* Initialize function input argument 'threshoutX'. */
  argInit_d1xd1_real_T((double *)&threshoutX_data, threshoutX_size);
  /* Call the entry-point 'FSR_wrapper'. */
  FSR_wrapper(y, X, bsbmfullrank_tmp, (double *)&bonflev_data, bonflev_size,
              h_tmp, h_tmp, bsbmfullrank_tmp, h_tmp, bsbmfullrank_tmp,
              bsbmfullrank_tmp, h_tmp, (double *)&threshoutX_data,
              threshoutX_size, bsbmfullrank_tmp, &out);
  emxDestroy_struct1_T(out);
  emxDestroyArray_real_T(X);
  emxDestroyArray_real_T(y);
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

static void main_FSRfan_wrapper(void)
{
  emxArray_char_T *family;
  emxArray_real_T *X;
  emxArray_real_T *la;
  emxArray_real_T *lms;
  emxArray_real_T *y;
  struct2_T out;
  double h_tmp;
  bool intercept_tmp;
  emxInit_struct2_T(&out);
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
  emxDestroy_struct2_T(out);
  emxDestroyArray_char_T(family);
  emxDestroyArray_real_T(lms);
  emxDestroyArray_real_T(la);
  emxDestroyArray_real_T(X);
  emxDestroyArray_real_T(y);
}

static void main_FSRmdr_wrapper(void)
{
  emxArray_real_T *BB;
  emxArray_real_T *Bols;
  emxArray_real_T *S2;
  emxArray_real_T *Un;
  emxArray_real_T *X;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *constr;
  emxArray_real_T *mdr;
  emxArray_real_T *y;
  double threshlevoutX_data;
  int threshlevoutX_size[2];
  bool bsbmfullrank_tmp;
  emxInitArray_real_T(&mdr, 2);
  emxInitArray_real_T(&Un, 2);
  emxInitArray_real_T(&BB, 2);
  emxInitArray_real_T(&Bols, 2);
  emxInitArray_real_T(&S2, 2);
  /* Initialize function 'FSRmdr_wrapper' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'X'. */
  X = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'bsb'. */
  bsb = argInit_Unboundedx1_real_T();
  bsbmfullrank_tmp = argInit_boolean_T();
  /* Initialize function input argument 'bsbsteps'. */
  bsbsteps = argInit_Unboundedxd1_real_T();
  /* Initialize function input argument 'constr'. */
  constr = argInit_Unboundedxd1_real_T();
  /* Initialize function input argument 'threshlevoutX'. */
  argInit_d1xd1_real_T((double *)&threshlevoutX_data, threshlevoutX_size);
  /* Call the entry-point 'FSRmdr_wrapper'. */
  FSRmdr_wrapper(
      y, X, bsb, bsbmfullrank_tmp, bsbsteps, constr, argInit_real_T(),
      bsbmfullrank_tmp, bsbmfullrank_tmp, bsbmfullrank_tmp, bsbmfullrank_tmp,
      (double *)&threshlevoutX_data, threshlevoutX_size, mdr, Un, BB, Bols, S2);
  emxDestroyArray_real_T(S2);
  emxDestroyArray_real_T(Bols);
  emxDestroyArray_real_T(BB);
  emxDestroyArray_real_T(Un);
  emxDestroyArray_real_T(mdr);
  emxDestroyArray_real_T(constr);
  emxDestroyArray_real_T(bsbsteps);
  emxDestroyArray_real_T(bsb);
  emxDestroyArray_real_T(X);
  emxDestroyArray_real_T(y);
}

static void main_LTSts_wrapper(void)
{
  emxArray_real_T *C;
  emxArray_real_T *y;
  struct3_T r;
  struct4_T r1;
  struct5_T model;
  struct6_T out;
  double nsamp_data[2];
  double conflev_tmp;
  int nsamp_size[2];
  bool dispresults_tmp;
  emxInit_struct6_T(&out);
  emxInitArray_real_T(&C, 2);
  /* Initialize function 'LTSts_wrapper' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  conflev_tmp = argInit_real_T();
  dispresults_tmp = argInit_boolean_T();
  /* Initialize function input argument 'lshiftlocref'. */
  /* Initialize function input argument 'lts'. */
  /* Initialize function input argument 'model'. */
  model = argInit_struct5_T();
  /* Initialize function input argument 'nsamp'. */
  argInit_d2xd1_real_T(nsamp_data, nsamp_size);
  /* Call the entry-point 'LTSts_wrapper'. */
  r = argInit_struct3_T();
  r1 = argInit_struct4_T();
  LTSts_wrapper(y, conflev_tmp, dispresults_tmp, conflev_tmp, dispresults_tmp,
                &r, &r1, &model, dispresults_tmp, conflev_tmp, dispresults_tmp,
                nsamp_data, nsamp_size, conflev_tmp, conflev_tmp, conflev_tmp,
                dispresults_tmp, &out, C);
  emxDestroyArray_real_T(C);
  emxDestroy_struct6_T(out);
  emxDestroy_struct5_T(model);
  emxDestroyArray_real_T(y);
}

static void main_LXS_wrapper(void)
{
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct8_T out;
  double bonflevoutX_data;
  double conflev_tmp;
  int bonflevoutX_size[2];
  bool intercept_tmp;
  emxInit_struct8_T(&out);
  emxInitArray_real_T(&C, 2);
  /* Initialize function 'LXS_wrapper' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'X'. */
  X = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'bonflevoutX'. */
  argInit_d1xd1_real_T((double *)&bonflevoutX_data, bonflevoutX_size);
  conflev_tmp = argInit_real_T();
  intercept_tmp = argInit_boolean_T();
  /* Call the entry-point 'LXS_wrapper'. */
  LXS_wrapper(y, X, (double *)&bonflevoutX_data, bonflevoutX_size, conflev_tmp,
              conflev_tmp, intercept_tmp, conflev_tmp, intercept_tmp,
              intercept_tmp, intercept_tmp, conflev_tmp, intercept_tmp,
              intercept_tmp, &out, C);
  emxDestroyArray_real_T(C);
  emxDestroy_struct8_T(out);
  emxDestroyArray_real_T(X);
  emxDestroyArray_real_T(y);
}

static void main_LXS_wrapper1(void)
{
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct4_T r;
  struct8_T out;
  double bonflevoutX_data;
  double conflev_tmp;
  int bonflevoutX_size[2];
  bool intercept_tmp;
  emxInit_struct8_T(&out);
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
  r = argInit_struct4_T();
  LXS_wrapper1(y, X, (double *)&bonflevoutX_data, bonflevoutX_size, conflev_tmp,
               conflev_tmp, intercept_tmp, &r, intercept_tmp, intercept_tmp,
               intercept_tmp, conflev_tmp, intercept_tmp, intercept_tmp, &out,
               C);
  emxDestroyArray_real_T(C);
  emxDestroy_struct8_T(out);
  emxDestroyArray_real_T(X);
  emxDestroyArray_real_T(y);
}

static void main_addt_wrapper(void)
{
  emxArray_real_T *X;
  emxArray_real_T *w;
  emxArray_real_T *y;
  struct9_T out;
  double la_data;
  int la_size[2];
  bool intercept_tmp;
  /* Initialize function 'addt_wrapper' input arguments. */
  /* Initialize function input argument 'y'. */
  y = argInit_Unboundedx1_real_T();
  /* Initialize function input argument 'X'. */
  X = c_argInit_UnboundedxUnbounded_r();
  /* Initialize function input argument 'w'. */
  w = argInit_Unboundedx1_real_T();
  intercept_tmp = argInit_boolean_T();
  /* Initialize function input argument 'la'. */
  argInit_d1xd1_real_T((double *)&la_data, la_size);
  /* Call the entry-point 'addt_wrapper'. */
  addt_wrapper(y, X, w, intercept_tmp, (double *)&la_data, la_size,
               intercept_tmp, &out);
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
  main_FSM_wrapper();
  main_FSMbsb_wrapper();
  main_FSMmmd_wrapper();
  main_FSR_wrapper();
  main_FSRbsb_wrapper();
  main_FSRfan_wrapper();
  main_FSRmdr_wrapper();
  main_LTSts_wrapper();
  main_LXS_wrapper();
  main_LXS_wrapper1();
  main_addt_wrapper();
  /* Terminate the application.
You do not need to do this more than one time. */
  FSM_wrapper_terminate();
  return 0;
}

/* End of code generation (main.c) */
