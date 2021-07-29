/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_emxAPI.c
 *
 * Code generation for function 'fsdaC_emxAPI'
 *
 */

/* Include files */
#include "fsdaC_emxAPI.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <stdlib.h>
#include <string.h>

/* Function Definitions */
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

emxArray_cell_wrap_39 *emxCreateND_cell_wrap_39(int numDimensions,
                                                const int *size)
{
  emxArray_cell_wrap_39 *emx;
  int i;
  int numEl;
  emxInit_cell_wrap_39(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = (cell_wrap_39 *)calloc((unsigned int)numEl, sizeof(cell_wrap_39));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

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

emxArray_cell_wrap_39 *emxCreateWrapperND_cell_wrap_39(cell_wrap_39 *data,
                                                       int numDimensions,
                                                       const int *size)
{
  emxArray_cell_wrap_39 *emx;
  int i;
  int numEl;
  emxInit_cell_wrap_39(&emx, numDimensions);
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

emxArray_cell_wrap_39 *emxCreateWrapper_cell_wrap_39(cell_wrap_39 *data,
                                                     int rows, int cols)
{
  emxArray_cell_wrap_39 *emx;
  emxInit_cell_wrap_39(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

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

emxArray_cell_wrap_39 *emxCreate_cell_wrap_39(int rows, int cols)
{
  emxArray_cell_wrap_39 *emx;
  int numEl;
  emxInit_cell_wrap_39(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (cell_wrap_39 *)calloc((unsigned int)numEl, sizeof(cell_wrap_39));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

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

void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray)
{
  emxFree_boolean_T(&emxArray);
}

void emxDestroyArray_cell_wrap_39(emxArray_cell_wrap_39 *emxArray)
{
  emxFree_cell_wrap_39(&emxArray);
}

void emxDestroyArray_char_T(emxArray_char_T *emxArray)
{
  emxFree_char_T(&emxArray);
}

void emxDestroyArray_real_T(emxArray_real_T *emxArray)
{
  emxFree_real_T(&emxArray);
}

void emxDestroy_struct1_T(struct1_T emxArray)
{
  emxFreeStruct_struct1_T(&emxArray);
}

void emxDestroy_struct_FSM_T(struct_FSM_T emxArray)
{
  emxFreeStruct_struct_FSM_T(&emxArray);
}

void emxDestroy_struct_FSR_T(struct_FSR_T emxArray)
{
  emxFreeStruct_struct_FSR_T(&emxArray);
}

void emxDestroy_struct_FSRfan_T(struct_FSRfan_T emxArray)
{
  emxFreeStruct_struct_FSRfan_T(&emxArray);
}

void emxDestroy_struct_FSRlms_T(struct_FSRlms_T emxArray)
{
  emxFreeStruct_struct_FSRlms_T(&emxArray);
}

void emxDestroy_struct_LTSts_T(struct_LTSts_T emxArray)
{
  emxFreeStruct_struct_LTSts_T(&emxArray);
}

void emxDestroy_struct_LTStsmodel_T(struct_LTStsmodel_T emxArray)
{
  c_emxFreeStruct_struct_LTStsmod(&emxArray);
}

void emxDestroy_struct_LXS_T(struct_LXS_T emxArray)
{
  emxFreeStruct_struct_LXS_T(&emxArray);
}

void emxDestroy_struct_MMreg_T(struct_MMreg_T emxArray)
{
  emxFreeStruct_struct_MMreg_T(&emxArray);
}

void emxDestroy_struct_MMregeda_T(struct_MMregeda_T emxArray)
{
  emxFreeStruct_struct_MMregeda_T(&emxArray);
}

void emxDestroy_struct_Sreg_T(struct_Sreg_T emxArray)
{
  emxFreeStruct_struct_Sreg_T(&emxArray);
}

void emxDestroy_struct_Sregeda_T(struct_Sregeda_T emxArray)
{
  emxFreeStruct_struct_Sregeda_T(&emxArray);
}

void emxDestroy_struct_tclust_T(struct_tclust_T emxArray)
{
  emxFreeStruct_struct_tclust_T(&emxArray);
}

void emxInitArray_char_T(emxArray_char_T **pEmxArray, int numDimensions)
{
  emxInit_char_T(pEmxArray, numDimensions);
}

void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxInit_real_T(pEmxArray, numDimensions);
}

void emxInit_struct1_T(struct1_T *pStruct)
{
  emxInitStruct_struct1_T(pStruct);
}

void emxInit_struct_FSM_T(struct_FSM_T *pStruct)
{
  emxInitStruct_struct_FSM_T(pStruct);
}

void emxInit_struct_FSR_T(struct_FSR_T *pStruct)
{
  emxInitStruct_struct_FSR_T(pStruct);
}

void emxInit_struct_FSRfan_T(struct_FSRfan_T *pStruct)
{
  emxInitStruct_struct_FSRfan_T(pStruct);
}

void emxInit_struct_FSRlms_T(struct_FSRlms_T *pStruct)
{
  emxInitStruct_struct_FSRlms_T(pStruct);
}

void emxInit_struct_LTSts_T(struct_LTSts_T *pStruct)
{
  emxInitStruct_struct_LTSts_T(pStruct);
}

void emxInit_struct_LTStsmodel_T(struct_LTStsmodel_T *pStruct)
{
  c_emxInitStruct_struct_LTStsmod(pStruct);
}

void emxInit_struct_LXS_T(struct_LXS_T *pStruct)
{
  emxInitStruct_struct_LXS_T(pStruct);
}

void emxInit_struct_MMreg_T(struct_MMreg_T *pStruct)
{
  emxInitStruct_struct_MMreg_T(pStruct);
}

void emxInit_struct_MMregeda_T(struct_MMregeda_T *pStruct)
{
  emxInitStruct_struct_MMregeda_T(pStruct);
}

void emxInit_struct_Sreg_T(struct_Sreg_T *pStruct)
{
  emxInitStruct_struct_Sreg_T(pStruct);
}

void emxInit_struct_Sregeda_T(struct_Sregeda_T *pStruct)
{
  emxInitStruct_struct_Sregeda_T(pStruct);
}

void emxInit_struct_tclust_T(struct_tclust_T *pStruct)
{
  emxInitStruct_struct_tclust_T(pStruct);
}

/* End of code generation (fsdaC_emxAPI.c) */
