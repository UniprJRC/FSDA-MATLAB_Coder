/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * fsdaC_emxutil.c
 *
 * Code generation for function 'fsdaC_emxutil'
 *
 */

/* Include files */
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include <stdlib.h>
#include <string.h>

/* Function Definitions */
void c_emxCopyStruct_anonymous_funct(b_anonymous_function *dst,
                                     const b_anonymous_function *src)
{
  emxCopyStruct_struct_T1(&dst->workspace, &src->workspace);
}

void c_emxFreeStruct_anonymous_funct(anonymous_function *pStruct)
{
  emxFreeStruct_struct_T3(&pStruct->workspace);
}

void c_emxFreeStruct_struct_LTStsmod(struct_LTStsmodel_T *pStruct)
{
  emxFree_real_T(&pStruct->X);
}

void c_emxInitStruct_anonymous_funct(b_anonymous_function *pStruct)
{
  emxInitStruct_struct_T4(&pStruct->workspace);
}

void c_emxInitStruct_matlab_internal(e_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_48(&pStruct->labels[0]);
}

void c_emxInitStruct_struct_LTStsmod(struct_LTStsmodel_T *pStruct)
{
  pStruct->ARp.size[0] = 0;
  pStruct->ARp.size[1] = 0;
  emxInit_real_T(&pStruct->X, 2);
}

void d_emxCopyStruct_anonymous_funct(anonymous_function *dst,
                                     const anonymous_function *src)
{
  emxCopyStruct_struct_T2(&dst->workspace, &src->workspace);
}

void d_emxFreeStruct_anonymous_funct(b_anonymous_function *pStruct)
{
  emxFreeStruct_struct_T4(&pStruct->workspace);
}

void d_emxInitStruct_anonymous_funct(anonymous_function *pStruct)
{
  emxInitStruct_struct_T5(&pStruct->workspace);
}

void d_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_50(pStruct->descrs);
  emxInitMatrix_cell_wrap_50(pStruct->units);
}

void emxCopyStruct_struct_T(h_struct_T *dst, const h_struct_T *src)
{
  c_emxCopyStruct_anonymous_funct(&dst->nonlin, &src->nonlin);
  dst->f_1 = src->f_1;
  emxCopy_real_T(&dst->cEq_1, &src->cEq_1);
  dst->f_2 = src->f_2;
  emxCopy_real_T(&dst->cEq_2, &src->cEq_2);
  dst->nVar = src->nVar;
  dst->mIneq = src->mIneq;
  dst->mEq = src->mEq;
  dst->numEvals = src->numEvals;
  dst->SpecifyObjectiveGradient = src->SpecifyObjectiveGradient;
  dst->SpecifyConstraintGradient = src->SpecifyConstraintGradient;
  dst->isEmptyNonlcon = src->isEmptyNonlcon;
  emxCopy_boolean_T(&dst->hasLB, &src->hasLB);
  emxCopy_boolean_T(&dst->hasUB, &src->hasUB);
  dst->hasBounds = src->hasBounds;
  dst->FiniteDifferenceType = src->FiniteDifferenceType;
}

void emxCopyStruct_struct_T1(g_struct_T *dst, const g_struct_T *src)
{
  d_emxCopyStruct_anonymous_funct(&dst->fun, &src->fun);
}

void emxCopyStruct_struct_T2(f_struct_T *dst, const f_struct_T *src)
{
  dst->fun = src->fun;
  emxCopy_real_T(&dst->xdata, &src->xdata);
  emxCopy_real_T(&dst->ydata, &src->ydata);
}

void emxCopy_boolean_T(emxArray_boolean_T **dst, emxArray_boolean_T *const *src)
{
  int i;
  int numElDst;
  int numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }
  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }
  emxEnsureCapacity_boolean_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T *const *src)
{
  int i;
  int numElDst;
  int numElSrc;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }
  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }
  emxEnsureCapacity_real_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
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

void emxEnsureCapacity_cell_wrap_36(emxArray_cell_wrap_36 *emxArray,
                                    int oldNumel)
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
    newData = calloc((unsigned int)i, sizeof(cell_wrap_36));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(cell_wrap_36) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (cell_wrap_36 *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
  if (oldNumel > newNumel) {
    emxTrim_cell_wrap_36(emxArray, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    emxExpand_cell_wrap_36(emxArray, oldNumel, newNumel);
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

void emxEnsureCapacity_creal_T(emxArray_creal_T *emxArray, int oldNumel)
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
    newData = calloc((unsigned int)i, sizeof(creal_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(creal_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (creal_T *)newData;
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

void emxEnsureCapacity_real32_T(emxArray_real32_T *emxArray, int oldNumel)
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
    newData = calloc((unsigned int)i, sizeof(float));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(float) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (float *)newData;
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

void emxExpand_cell_wrap_36(emxArray_cell_wrap_36 *emxArray, int fromIndex,
                            int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_cell_wrap_36(&emxArray->data[i]);
  }
}

void emxFreeMatrix_cell_wrap_6(cell_wrap_6 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_6(&pMatrix[i]);
  }
}

void emxFreeStruct_captured_var(c_captured_var *pStruct)
{
  emxFree_real_T(&pStruct->contents);
}

void emxFreeStruct_captured_var1(d_captured_var *pStruct)
{
  emxFree_boolean_T(&pStruct->contents);
}

void emxFreeStruct_cell_wrap_36(cell_wrap_36 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

void emxFreeStruct_cell_wrap_6(cell_wrap_6 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

void emxFreeStruct_struct_FSM_T(struct_FSM_T *pStruct)
{
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->loc);
  emxFree_real_T(&pStruct->cov);
  emxFree_real_T(&pStruct->md);
  emxFree_real_T(&pStruct->mmd);
  emxFree_real_T(&pStruct->Un);
}

void emxFreeStruct_struct_FSR_T(struct_FSR_T *pStruct)
{
  emxFree_real_T(&pStruct->ListOut);
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->mdr);
  emxFree_real_T(&pStruct->Un);
  emxFree_real_T(&pStruct->nout);
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->mdag);
  emxFree_real_T(&pStruct->ListCl);
  emxFree_real_T(&pStruct->VIOMout);
  emxFree_real_T(&pStruct->fittedvalues);
  emxFree_real_T(&pStruct->residuals);
}

void emxFreeStruct_struct_FSRfan_T(struct_FSRfan_T *pStruct)
{
  emxFree_real_T(&pStruct->Score);
  emxFree_real_T(&pStruct->la);
  emxFree_real_T(&pStruct->bs);
  emxFree_cell_wrap_36(&pStruct->Un);
  emxFree_real_T(&pStruct->y);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->Scorep);
  emxFree_real_T(&pStruct->Scoren);
  emxFree_real_T(&pStruct->Scoreb);
}

void emxFreeStruct_struct_LTSts_T(struct_LTSts_T *pStruct)
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

void emxFreeStruct_struct_LXS_T(struct_LXS_T *pStruct)
{
  emxFree_boolean_T(&pStruct->weights);
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->bs);
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

void emxFreeStruct_struct_T(struct_T *pStruct)
{
  emxFree_real_T(&pStruct->ListOut);
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->mdr);
  emxFree_real_T(&pStruct->Un);
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->ListCl);
  emxFree_real_T(&pStruct->VIOMout);
}

void emxFreeStruct_struct_T1(b_struct_T *pStruct)
{
  emxFree_real_T(&pStruct->lower);
  emxFree_real_T(&pStruct->upper);
}

void emxFreeStruct_struct_T2(c_struct_T *pStruct)
{
  emxFree_real_T(&pStruct->betarw);
  emxFree_real_T(&pStruct->yhat);
  emxFree_boolean_T(&pStruct->weights);
}

void emxFreeStruct_struct_T3(f_struct_T *pStruct)
{
  emxFree_real_T(&pStruct->xdata);
  emxFree_real_T(&pStruct->ydata);
}

void emxFreeStruct_struct_T4(g_struct_T *pStruct)
{
  c_emxFreeStruct_anonymous_funct(&pStruct->fun);
}

void emxFreeStruct_struct_T5(h_struct_T *pStruct)
{
  d_emxFreeStruct_anonymous_funct(&pStruct->nonlin);
  emxFree_real_T(&pStruct->cEq_1);
  emxFree_real_T(&pStruct->cEq_2);
  emxFree_boolean_T(&pStruct->hasLB);
  emxFree_boolean_T(&pStruct->hasUB);
}

void emxFreeStruct_table(table *pStruct)
{
  emxFreeMatrix_cell_wrap_6(pStruct->data);
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

void emxFree_cell_wrap_36(emxArray_cell_wrap_36 **pEmxArray)
{
  int i;
  int numEl;
  if (*pEmxArray != (emxArray_cell_wrap_36 *)NULL) {
    if ((*pEmxArray)->data != (cell_wrap_36 *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }
      for (i = 0; i < numEl; i++) {
        emxFreeStruct_cell_wrap_36(&(*pEmxArray)->data[i]);
      }
      if ((*pEmxArray)->canFreeData) {
        free((*pEmxArray)->data);
      }
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_36 *)NULL;
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

void emxFree_creal_T(emxArray_creal_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_creal_T *)NULL) {
    if (((*pEmxArray)->data != (creal_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_creal_T *)NULL;
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

void emxFree_real32_T(emxArray_real32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real32_T *)NULL) {
    if (((*pEmxArray)->data != (float *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real32_T *)NULL;
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

void emxInitMatrix_cell_wrap_48(cell_wrap_48 *pMatrix)
{
  int i;
  for (i = 0; i < 1; i++) {
    emxInitStruct_cell_wrap_48(pMatrix);
  }
}

void emxInitMatrix_cell_wrap_50(cell_wrap_50 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_50(&pMatrix[i]);
  }
}

void emxInitMatrix_cell_wrap_6(cell_wrap_6 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_6(&pMatrix[i]);
  }
}

void emxInitStruct_captured_var(c_captured_var *pStruct)
{
  emxInit_real_T(&pStruct->contents, 1);
}

void emxInitStruct_captured_var1(c_captured_var *pStruct)
{
  emxInit_real_T(&pStruct->contents, 2);
}

void emxInitStruct_captured_var2(d_captured_var *pStruct)
{
  emxInit_boolean_T(&pStruct->contents, 1);
}

void emxInitStruct_cell_wrap_36(cell_wrap_36 *pStruct)
{
  emxInit_real_T(&pStruct->f1, 2);
}

void emxInitStruct_cell_wrap_48(cell_wrap_48 *pStruct)
{
  pStruct->f1.size[0] = 0;
  pStruct->f1.size[1] = 0;
}

void emxInitStruct_cell_wrap_50(cell_wrap_50 *pStruct)
{
  pStruct->f1.size[0] = 0;
  pStruct->f1.size[1] = 0;
}

void emxInitStruct_cell_wrap_6(cell_wrap_6 *pStruct)
{
  emxInit_real_T(&pStruct->f1, 1);
}

void emxInitStruct_struct0_T(struct0_T *pStruct)
{
  pStruct->Description.size[0] = 0;
  pStruct->Description.size[1] = 0;
}

void emxInitStruct_struct_FSM_T(struct_FSM_T *pStruct)
{
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_real_T(&pStruct->loc, 2);
  emxInit_real_T(&pStruct->cov, 2);
  emxInit_real_T(&pStruct->md, 2);
  emxInit_real_T(&pStruct->mmd, 2);
  emxInit_real_T(&pStruct->Un, 2);
  pStruct->nout.size[0] = 0;
  pStruct->nout.size[1] = 0;
  pStruct->class.size[0] = 0;
  pStruct->class.size[1] = 0;
}

void emxInitStruct_struct_FSR_T(struct_FSR_T *pStruct)
{
  emxInit_real_T(&pStruct->ListOut, 2);
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_real_T(&pStruct->mdr, 2);
  emxInit_real_T(&pStruct->Un, 2);
  emxInit_real_T(&pStruct->nout, 2);
  emxInit_real_T(&pStruct->beta, 1);
  emxInit_real_T(&pStruct->mdag, 2);
  emxInit_real_T(&pStruct->ListCl, 2);
  emxInit_real_T(&pStruct->VIOMout, 2);
  emxInit_real_T(&pStruct->fittedvalues, 2);
  emxInit_real_T(&pStruct->residuals, 2);
}

void emxInitStruct_struct_FSRfan_T(struct_FSRfan_T *pStruct)
{
  emxInit_real_T(&pStruct->Score, 2);
  emxInit_real_T(&pStruct->la, 2);
  emxInit_real_T(&pStruct->bs, 2);
  emxInit_cell_wrap_36(&pStruct->Un, 1);
  emxInit_real_T(&pStruct->y, 1);
  emxInit_real_T(&pStruct->X, 2);
  emxInit_real_T(&pStruct->Scorep, 2);
  emxInit_real_T(&pStruct->Scoren, 2);
  emxInit_real_T(&pStruct->Scoreb, 2);
}

void emxInitStruct_struct_LTSts_T(struct_LTSts_T *pStruct)
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
  pStruct->LastHarmonicPval.size[0] = 0;
  pStruct->LastHarmonicPval.size[1] = 0;
  pStruct->LevelShiftPval.size[0] = 0;
  pStruct->LevelShiftPval.size[1] = 0;
}

void emxInitStruct_struct_LXS_T(struct_LXS_T *pStruct)
{
  emxInit_boolean_T(&pStruct->weights, 1);
  emxInit_real_T(&pStruct->beta, 1);
  emxInit_real_T(&pStruct->residuals, 1);
  emxInit_real_T(&pStruct->bs, 2);
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_real_T(&pStruct->X, 2);
  emxInit_real_T(&pStruct->y, 2);
}

void emxInitStruct_struct_T(struct_T *pStruct)
{
  emxInit_real_T(&pStruct->ListOut, 2);
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_real_T(&pStruct->mdr, 2);
  emxInit_real_T(&pStruct->Un, 2);
  pStruct->nout.size[0] = 0;
  pStruct->nout.size[1] = 0;
  emxInit_real_T(&pStruct->beta, 1);
  pStruct->mdag.size[0] = 0;
  pStruct->mdag.size[1] = 0;
  emxInit_real_T(&pStruct->ListCl, 2);
  emxInit_real_T(&pStruct->VIOMout, 2);
}

void emxInitStruct_struct_T1(b_struct_T *pStruct)
{
  emxInit_real_T(&pStruct->lower, 1);
  emxInit_real_T(&pStruct->upper, 1);
}

void emxInitStruct_struct_T2(c_struct_T *pStruct)
{
  emxInit_real_T(&pStruct->betarw, 1);
  emxInit_real_T(&pStruct->yhat, 1);
  emxInit_boolean_T(&pStruct->weights, 1);
}

void emxInitStruct_struct_T3(h_struct_T *pStruct)
{
  c_emxInitStruct_anonymous_funct(&pStruct->nonlin);
  emxInit_real_T(&pStruct->cEq_1, 1);
  emxInit_real_T(&pStruct->cEq_2, 1);
  emxInit_boolean_T(&pStruct->hasLB, 1);
  emxInit_boolean_T(&pStruct->hasUB, 1);
}

void emxInitStruct_struct_T4(g_struct_T *pStruct)
{
  d_emxInitStruct_anonymous_funct(&pStruct->fun);
}

void emxInitStruct_struct_T5(f_struct_T *pStruct)
{
  emxInit_real_T(&pStruct->xdata, 2);
  emxInit_real_T(&pStruct->ydata, 1);
}

void emxInitStruct_table(table *pStruct)
{
  c_emxInitStruct_matlab_internal(&pStruct->rowDim);
  d_emxInitStruct_matlab_internal(&pStruct->varDim);
  emxInitMatrix_cell_wrap_6(pStruct->data);
  emxInitStruct_struct0_T(&pStruct->arrayProps);
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

void emxInit_cell_wrap_36(emxArray_cell_wrap_36 **pEmxArray, int numDimensions)
{
  emxArray_cell_wrap_36 *emxArray;
  int i;
  *pEmxArray = (emxArray_cell_wrap_36 *)malloc(sizeof(emxArray_cell_wrap_36));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_36 *)NULL;
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

void emxInit_creal_T(emxArray_creal_T **pEmxArray, int numDimensions)
{
  emxArray_creal_T *emxArray;
  int i;
  *pEmxArray = (emxArray_creal_T *)malloc(sizeof(emxArray_creal_T));
  emxArray = *pEmxArray;
  emxArray->data = (creal_T *)NULL;
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

void emxInit_real32_T(emxArray_real32_T **pEmxArray, int numDimensions)
{
  emxArray_real32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real32_T *)malloc(sizeof(emxArray_real32_T));
  emxArray = *pEmxArray;
  emxArray->data = (float *)NULL;
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

void emxTrim_cell_wrap_36(emxArray_cell_wrap_36 *emxArray, int fromIndex,
                          int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_cell_wrap_36(&emxArray->data[i]);
  }
}

/* End of code generation (fsdaC_emxutil.c) */
