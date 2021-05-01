/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper_emxutil.c
 *
 * Code generation for function 'LTSts_wrapper_emxutil'
 *
 */

/* Include files */
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "rt_nonfinite.h"
#include <stdlib.h>
#include <string.h>

/* Function Definitions */
void c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_1(&pStruct->labels[0]);
}

void d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_3(pStruct->descrs);
  emxInitMatrix_cell_wrap_3(pStruct->units);
}

void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(bool));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(bool) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (bool *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_char_T(emxArray_char_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(char));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (char *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_int32_T(emxArray_int32_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(int));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (int *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(double));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(double) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (double *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_uint32_T(emxArray_uint32_T *emxArray, int oldNumel)
{
  int i;
  int newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }
  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }
    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i *= 2;
      }
    }
    newData = calloc((unsigned int)i, sizeof(unsigned int));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(unsigned int) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (unsigned int *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFreeMatrix_cell_wrap_4(cell_wrap_4 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_4(&pMatrix[i]);
  }
}

void emxFreeStruct_captured_var(c_captured_var *pStruct)
{
  emxFree_boolean_T(&pStruct->contents);
}

void emxFreeStruct_captured_var1(d_captured_var *pStruct)
{
  emxFree_real_T(&pStruct->contents);
}

void emxFreeStruct_cell_wrap_4(cell_wrap_4 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

void emxFreeStruct_struct2_T(struct2_T *pStruct)
{
  emxFree_real_T(&pStruct->X);
}

void emxFreeStruct_struct3_T(struct3_T *pStruct)
{
  emxFree_real_T(&pStruct->RES);
  emxFree_real_T(&pStruct->Hsubset);
  emxFree_real_T(&pStruct->B);
  emxFree_real_T(&pStruct->yhat);
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->outliersPval);
  emxFree_real_T(&pStruct->numscale2);
  emxFree_real_T(&pStruct->BestIndexes);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->bs);
  emxFree_boolean_T(&pStruct->weights);
  emxFree_real_T(&pStruct->Likloc);
  emxFree_real_T(&pStruct->y);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->invXX);
  emxFreeStruct_table(&pStruct->Btable);
}

void emxFreeStruct_struct_T(struct_T *pStruct)
{
  emxFree_real_T(&pStruct->betarw);
  emxFree_real_T(&pStruct->yhat);
  emxFree_boolean_T(&pStruct->weights);
}

void emxFreeStruct_table(table *pStruct)
{
  emxFreeMatrix_cell_wrap_4(pStruct->data);
}

void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (bool *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

void emxFree_char_T(emxArray_char_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T *)NULL) {
    if (((*pEmxArray)->data != (char *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T *)NULL;
  }
}

void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (double *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxFree_uint32_T(emxArray_uint32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint32_T *)NULL) {
    if (((*pEmxArray)->data != (unsigned int *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_uint32_T *)NULL;
  }
}

void emxInitMatrix_cell_wrap_1(cell_wrap_1 *pMatrix)
{
  int i;
  for (i = 0; i < 1; i++) {
    emxInitStruct_cell_wrap_1(pMatrix);
  }
}

void emxInitMatrix_cell_wrap_3(cell_wrap_3 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_3(&pMatrix[i]);
  }
}

void emxInitMatrix_cell_wrap_4(cell_wrap_4 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_4(&pMatrix[i]);
  }
}

void emxInitStruct_captured_var(c_captured_var *pStruct)
{
  emxInit_boolean_T(&pStruct->contents, 1);
}

void emxInitStruct_captured_var1(d_captured_var *pStruct)
{
  emxInit_real_T(&pStruct->contents, 1);
}

void emxInitStruct_captured_var2(d_captured_var *pStruct)
{
  emxInit_real_T(&pStruct->contents, 2);
}

void emxInitStruct_cell_wrap_1(cell_wrap_1 *pStruct)
{
  pStruct->f1.size[0] = 0;
  pStruct->f1.size[1] = 0;
}

void emxInitStruct_cell_wrap_3(cell_wrap_3 *pStruct)
{
  pStruct->f1.size[0] = 0;
  pStruct->f1.size[1] = 0;
}

void emxInitStruct_cell_wrap_4(cell_wrap_4 *pStruct)
{
  emxInit_real_T(&pStruct->f1, 1);
}

void emxInitStruct_struct2_T(struct2_T *pStruct)
{
  pStruct->ARp.size[0] = 0;
  pStruct->ARp.size[1] = 0;
  emxInit_real_T(&pStruct->X, 2);
}

void emxInitStruct_struct3_T(struct3_T *pStruct)
{
  emxInit_real_T(&pStruct->RES, 1);
  emxInit_real_T(&pStruct->Hsubset, 1);
  emxInit_real_T(&pStruct->B, 2);
  pStruct->posLS.size[0] = 0;
  pStruct->posLS.size[1] = 0;
  emxInit_real_T(&pStruct->yhat, 1);
  emxInit_real_T(&pStruct->outliers, 1);
  emxInit_real_T(&pStruct->outliersPval, 1);
  emxInit_real_T(&pStruct->numscale2, 1);
  emxInit_real_T(&pStruct->BestIndexes, 1);
  emxInit_real_T(&pStruct->residuals, 1);
  emxInit_real_T(&pStruct->bs, 1);
  emxInit_boolean_T(&pStruct->weights, 1);
  emxInit_real_T(&pStruct->Likloc, 2);
  emxInit_real_T(&pStruct->y, 1);
  emxInit_real_T(&pStruct->X, 2);
  emxInit_real_T(&pStruct->invXX, 2);
  emxInitStruct_table(&pStruct->Btable);
  pStruct->LevelShiftPval.size[0] = 0;
  pStruct->LevelShiftPval.size[1] = 0;
}

void emxInitStruct_struct4_T(struct4_T *pStruct)
{
  pStruct->Description.size[0] = 0;
  pStruct->Description.size[1] = 0;
}

void emxInitStruct_struct_T(struct_T *pStruct)
{
  emxInit_real_T(&pStruct->betarw, 1);
  emxInit_real_T(&pStruct->yhat, 1);
  emxInit_boolean_T(&pStruct->weights, 1);
}

void emxInitStruct_table(table *pStruct)
{
  c_emxInitStruct_matlab_internal(&pStruct->rowDim);
  d_emxInitStruct_matlab_internal(&pStruct->varDim);
  emxInitMatrix_cell_wrap_4(pStruct->data);
  emxInitStruct_struct4_T(&pStruct->arrayProps);
}

void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)malloc(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (bool *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_char_T(emxArray_char_T **pEmxArray, int numDimensions)
{
  emxArray_char_T *emxArray;
  int i;
  *pEmxArray = (emxArray_char_T *)malloc(sizeof(emxArray_char_T));
  emxArray = *pEmxArray;
  emxArray->data = (char *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions)
{
  emxArray_int32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int32_T *)malloc(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)malloc(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_uint32_T(emxArray_uint32_T **pEmxArray, int numDimensions)
{
  emxArray_uint32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_uint32_T *)malloc(sizeof(emxArray_uint32_T));
  emxArray = *pEmxArray;
  emxArray->data = (unsigned int *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (LTSts_wrapper_emxutil.c) */
