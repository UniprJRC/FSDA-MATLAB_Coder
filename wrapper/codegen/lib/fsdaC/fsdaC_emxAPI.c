/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: fsdaC_emxAPI.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-Jun-2021 16:19:58
 */

/* Include Files */
#include "fsdaC_emxAPI.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <stdlib.h>
#include <string.h>

/* Function Definitions */
/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateND_boolean_T(int numDimensions, const int *size)
{
  emxArray_boolean_T *emx;
  int i;
  int numEl;
  emxInit_boolean_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = (bool *)calloc((unsigned int)numEl, sizeof(bool));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_cell_wrap_36 *
 */
emxArray_cell_wrap_36 *emxCreateND_cell_wrap_36(int numDimensions,
                                                const int *size)
{
  emxArray_cell_wrap_36 *emx;
  int i;
  int numEl;
  emxInit_cell_wrap_36(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = (cell_wrap_36 *)calloc((unsigned int)numEl, sizeof(cell_wrap_36));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_char_T *
 */
emxArray_char_T *emxCreateND_char_T(int numDimensions, const int *size)
{
  emxArray_char_T *emx;
  int i;
  int numEl;
  emxInit_char_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = (char *)calloc((unsigned int)numEl, sizeof(char));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_real32_T *
 */
emxArray_real32_T *emxCreateND_real32_T(int numDimensions, const int *size)
{
  emxArray_real32_T *emx;
  int i;
  int numEl;
  emxInit_real32_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = (float *)calloc((unsigned int)numEl, sizeof(float));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateND_real_T(int numDimensions, const int *size)
{
  emxArray_real_T *emx;
  int i;
  int numEl;
  emxInit_real_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = (double *)calloc((unsigned int)numEl, sizeof(double));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : bool *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateWrapperND_boolean_T(bool *data, int numDimensions,
                                                 const int *size)
{
  emxArray_boolean_T *emx;
  int i;
  int numEl;
  emxInit_boolean_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : cell_wrap_36 *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_cell_wrap_36 *
 */
emxArray_cell_wrap_36 *emxCreateWrapperND_cell_wrap_36(cell_wrap_36 *data,
                                                       int numDimensions,
                                                       const int *size)
{
  emxArray_cell_wrap_36 *emx;
  int i;
  int numEl;
  emxInit_cell_wrap_36(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : char *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_char_T *
 */
emxArray_char_T *emxCreateWrapperND_char_T(char *data, int numDimensions,
                                           const int *size)
{
  emxArray_char_T *emx;
  int i;
  int numEl;
  emxInit_char_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : float *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_real32_T *
 */
emxArray_real32_T *emxCreateWrapperND_real32_T(float *data, int numDimensions,
                                               const int *size)
{
  emxArray_real32_T *emx;
  int i;
  int numEl;
  emxInit_real32_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : double *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateWrapperND_real_T(double *data, int numDimensions,
                                           const int *size)
{
  emxArray_real_T *emx;
  int i;
  int numEl;
  emxInit_real_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : bool *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateWrapper_boolean_T(bool *data, int rows, int cols)
{
  emxArray_boolean_T *emx;
  emxInit_boolean_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : cell_wrap_36 *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_cell_wrap_36 *
 */
emxArray_cell_wrap_36 *emxCreateWrapper_cell_wrap_36(cell_wrap_36 *data,
                                                     int rows, int cols)
{
  emxArray_cell_wrap_36 *emx;
  emxInit_cell_wrap_36(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : char *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_char_T *
 */
emxArray_char_T *emxCreateWrapper_char_T(char *data, int rows, int cols)
{
  emxArray_char_T *emx;
  emxInit_char_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : float *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_real32_T *
 */
emxArray_real32_T *emxCreateWrapper_real32_T(float *data, int rows, int cols)
{
  emxArray_real32_T *emx;
  emxInit_real32_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : double *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols)
{
  emxArray_real_T *emx;
  emxInit_real_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreate_boolean_T(int rows, int cols)
{
  emxArray_boolean_T *emx;
  int numEl;
  emxInit_boolean_T(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (bool *)calloc((unsigned int)numEl, sizeof(bool));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_cell_wrap_36 *
 */
emxArray_cell_wrap_36 *emxCreate_cell_wrap_36(int rows, int cols)
{
  emxArray_cell_wrap_36 *emx;
  int numEl;
  emxInit_cell_wrap_36(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (cell_wrap_36 *)calloc((unsigned int)numEl, sizeof(cell_wrap_36));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_char_T *
 */
emxArray_char_T *emxCreate_char_T(int rows, int cols)
{
  emxArray_char_T *emx;
  int numEl;
  emxInit_char_T(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (char *)calloc((unsigned int)numEl, sizeof(char));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_real32_T *
 */
emxArray_real32_T *emxCreate_real32_T(int rows, int cols)
{
  emxArray_real32_T *emx;
  int numEl;
  emxInit_real32_T(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (float *)calloc((unsigned int)numEl, sizeof(float));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreate_real_T(int rows, int cols)
{
  emxArray_real_T *emx;
  int numEl;
  emxInit_real_T(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (double *)calloc((unsigned int)numEl, sizeof(double));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : emxArray_boolean_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray)
{
  emxFree_boolean_T(&emxArray);
}

/*
 * Arguments    : emxArray_cell_wrap_36 *emxArray
 * Return Type  : void
 */
void emxDestroyArray_cell_wrap_36(emxArray_cell_wrap_36 *emxArray)
{
  emxFree_cell_wrap_36(&emxArray);
}

/*
 * Arguments    : emxArray_char_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_char_T(emxArray_char_T *emxArray)
{
  emxFree_char_T(&emxArray);
}

/*
 * Arguments    : emxArray_real32_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_real32_T(emxArray_real32_T *emxArray)
{
  emxFree_real32_T(&emxArray);
}

/*
 * Arguments    : emxArray_real_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_real_T(emxArray_real_T *emxArray)
{
  emxFree_real_T(&emxArray);
}

/*
 * Arguments    : struct_FSM_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct_FSM_T(struct_FSM_T emxArray)
{
  emxFreeStruct_struct_FSM_T(&emxArray);
}

/*
 * Arguments    : struct_FSR_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct_FSR_T(struct_FSR_T emxArray)
{
  emxFreeStruct_struct_FSR_T(&emxArray);
}

/*
 * Arguments    : struct_FSRfan_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct_FSRfan_T(struct_FSRfan_T emxArray)
{
  emxFreeStruct_struct_FSRfan_T(&emxArray);
}

/*
 * Arguments    : struct_LTSts_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct_LTSts_T(struct_LTSts_T emxArray)
{
  emxFreeStruct_struct_LTSts_T(&emxArray);
}

/*
 * Arguments    : struct_LTStsmodel_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct_LTStsmodel_T(struct_LTStsmodel_T emxArray)
{
  c_emxFreeStruct_struct_LTStsmod(&emxArray);
}

/*
 * Arguments    : struct_LXS_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct_LXS_T(struct_LXS_T emxArray)
{
  emxFreeStruct_struct_LXS_T(&emxArray);
}

/*
 * Arguments    : struct_tclust_T emxArray
 * Return Type  : void
 */
void emxDestroy_struct_tclust_T(struct_tclust_T emxArray)
{
  emxFreeStruct_struct_tclust_T(&emxArray);
}

/*
 * Arguments    : emxArray_char_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInitArray_char_T(emxArray_char_T **pEmxArray, int numDimensions)
{
  emxInit_char_T(pEmxArray, numDimensions);
}

/*
 * Arguments    : emxArray_real32_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInitArray_real32_T(emxArray_real32_T **pEmxArray, int numDimensions)
{
  emxInit_real32_T(pEmxArray, numDimensions);
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxInit_real_T(pEmxArray, numDimensions);
}

/*
 * Arguments    : struct_FSM_T *pStruct
 * Return Type  : void
 */
void emxInit_struct_FSM_T(struct_FSM_T *pStruct)
{
  emxInitStruct_struct_FSM_T(pStruct);
}

/*
 * Arguments    : struct_FSR_T *pStruct
 * Return Type  : void
 */
void emxInit_struct_FSR_T(struct_FSR_T *pStruct)
{
  emxInitStruct_struct_FSR_T(pStruct);
}

/*
 * Arguments    : struct_FSRfan_T *pStruct
 * Return Type  : void
 */
void emxInit_struct_FSRfan_T(struct_FSRfan_T *pStruct)
{
  emxInitStruct_struct_FSRfan_T(pStruct);
}

/*
 * Arguments    : struct_LTSts_T *pStruct
 * Return Type  : void
 */
void emxInit_struct_LTSts_T(struct_LTSts_T *pStruct)
{
  emxInitStruct_struct_LTSts_T(pStruct);
}

/*
 * Arguments    : struct_LTStsmodel_T *pStruct
 * Return Type  : void
 */
void emxInit_struct_LTStsmodel_T(struct_LTStsmodel_T *pStruct)
{
  c_emxInitStruct_struct_LTStsmod(pStruct);
}

/*
 * Arguments    : struct_LXS_T *pStruct
 * Return Type  : void
 */
void emxInit_struct_LXS_T(struct_LXS_T *pStruct)
{
  emxInitStruct_struct_LXS_T(pStruct);
}

/*
 * Arguments    : struct_tclust_T *pStruct
 * Return Type  : void
 */
void emxInit_struct_tclust_T(struct_tclust_T *pStruct)
{
  emxInitStruct_struct_tclust_T(pStruct);
}

/*
 * File trailer for fsdaC_emxAPI.c
 *
 * [EOF]
 */
