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

void c_emxFreeStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct)
{
  emxFreeMatrix_cell_wrap_56(pStruct->descrs);
  emxFreeMatrix_cell_wrap_56(pStruct->units);
}

void c_emxFreeStruct_struct_LTStsmod(struct_LTStsmodel_T *pStruct)
{
  emxFree_real_T(&pStruct->lshift);
  emxFree_real_T(&pStruct->ARp);
  emxFree_real_T(&pStruct->X);
}

void c_emxInitStruct_anonymous_funct(b_anonymous_function *pStruct)
{
  emxInitStruct_struct_T4(&pStruct->workspace);
}

void c_emxInitStruct_matlab_internal(f_matlab_internal_coder_tabular *pStruct)
{
  emxInitMatrix_cell_wrap_56(pStruct->descrs);
  emxInitMatrix_cell_wrap_56(pStruct->units);
}

void c_emxInitStruct_struct_LTStsmod(struct_LTStsmodel_T *pStruct)
{
  emxInit_real_T(&pStruct->lshift, 2);
  emxInit_real_T(&pStruct->ARp, 2);
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

void emxCopyStruct_struct_T(i_struct_T *dst, const i_struct_T *src)
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

void emxCopyStruct_struct_T1(h_struct_T *dst, const h_struct_T *src)
{
  d_emxCopyStruct_anonymous_funct(&dst->fun, &src->fun);
}

void emxCopyStruct_struct_T2(g_struct_T *dst, const g_struct_T *src)
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

void emxEnsureCapacity_cell_wrap_43(emxArray_cell_wrap_43 *emxArray,
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
    newData = calloc((unsigned int)i, sizeof(cell_wrap_43));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(cell_wrap_43) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (cell_wrap_43 *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
  if (oldNumel > newNumel) {
    emxTrim_cell_wrap_43(emxArray, newNumel, oldNumel);
  } else if (oldNumel < newNumel) {
    emxExpand_cell_wrap_43(emxArray, oldNumel, newNumel);
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

void emxEnsureCapacity_int8_T(emxArray_int8_T *emxArray, int oldNumel)
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
    newData = calloc((unsigned int)i, sizeof(signed char));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(signed char) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (signed char *)newData;
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

void emxEnsureCapacity_uint8_T(emxArray_uint8_T *emxArray, int oldNumel)
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
    newData = calloc((unsigned int)i, sizeof(unsigned char));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(unsigned char) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }
    emxArray->data = (unsigned char *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxExpand_cell_wrap_43(emxArray_cell_wrap_43 *emxArray, int fromIndex,
                            int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_cell_wrap_43(&emxArray->data[i]);
  }
}

void emxFreeMatrix_cell_wrap_56(cell_wrap_56 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxFreeStruct_cell_wrap_56(&pMatrix[i]);
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

void emxFreeStruct_cell_wrap_43(cell_wrap_43 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

void emxFreeStruct_cell_wrap_56(cell_wrap_56 *pStruct)
{
  emxFree_char_T(&pStruct->f1);
}

void emxFreeStruct_cell_wrap_6(cell_wrap_6 *pStruct)
{
  emxFree_real_T(&pStruct->f1);
}

void emxFreeStruct_struct1_T(struct1_T *pStruct)
{
  emxFree_real_T(&pStruct->beta);
}

void emxFreeStruct_struct_FSM_T(struct_FSM_T *pStruct)
{
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->loc);
  emxFree_real_T(&pStruct->cov);
  emxFree_real_T(&pStruct->md);
  emxFree_real_T(&pStruct->mmd);
  emxFree_real_T(&pStruct->Un);
  emxFree_real_T(&pStruct->nout);
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
  emxFree_cell_wrap_43(&pStruct->Un);
  emxFree_real_T(&pStruct->y);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->Scorep);
  emxFree_real_T(&pStruct->Scoren);
  emxFree_real_T(&pStruct->Scoreb);
}

void emxFreeStruct_struct_FSRlms_T(struct_FSRlms_T *pStruct)
{
  emxFree_real_T(&pStruct->bsb);
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

void emxFreeStruct_struct_MMreg_T(struct_MMreg_T *pStruct)
{
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->fittedvalues);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->Sbeta);
  emxFree_real_T(&pStruct->weights);
  emxFree_real_T(&pStruct->outliers);
  emxFree_char_T(&pStruct->rhofuncS);
  emxFree_real_T(&pStruct->rhofuncparamS);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

void emxFreeStruct_struct_MMregeda_T(struct_MMregeda_T *pStruct)
{
  emxFree_real_T(&pStruct->Beta);
  emxFree_real_T(&pStruct->RES);
  emxFree_real_T(&pStruct->Weights);
  emxFree_boolean_T(&pStruct->Outliers);
  emxFree_real_T(&pStruct->Sbeta);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
  emxFree_real_T(&pStruct->eff);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

void emxFreeStruct_struct_Sreg_T(struct_Sreg_T *pStruct)
{
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->bs);
  emxFree_real_T(&pStruct->weights);
  emxFree_real_T(&pStruct->fittedvalues);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->outliers);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

void emxFreeStruct_struct_Sregeda_T(struct_Sregeda_T *pStruct)
{
  emxFree_real_T(&pStruct->Beta);
  emxFree_real_T(&pStruct->Scale);
  emxFree_real_T(&pStruct->BS);
  emxFree_real_T(&pStruct->Weights);
  emxFree_real_T(&pStruct->RES);
  emxFree_real_T(&pStruct->Singsub);
  emxFree_boolean_T(&pStruct->Outliers);
  emxFree_real_T(&pStruct->bdp);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
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

void emxFreeStruct_struct_T3(g_struct_T *pStruct)
{
  emxFree_real_T(&pStruct->xdata);
  emxFree_real_T(&pStruct->ydata);
}

void emxFreeStruct_struct_T4(h_struct_T *pStruct)
{
  c_emxFreeStruct_anonymous_funct(&pStruct->fun);
}

void emxFreeStruct_struct_T5(i_struct_T *pStruct)
{
  d_emxFreeStruct_anonymous_funct(&pStruct->nonlin);
  emxFree_real_T(&pStruct->cEq_1);
  emxFree_real_T(&pStruct->cEq_2);
  emxFree_boolean_T(&pStruct->hasLB);
  emxFree_boolean_T(&pStruct->hasUB);
}

void emxFreeStruct_struct_T6(j_struct_T *pStruct)
{
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->bs);
  emxFree_real_T(&pStruct->weights);
  emxFree_real_T(&pStruct->fittedvalues);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->outliers);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
}

void emxFreeStruct_struct_T7(e_struct_T *pStruct)
{
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->weights);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->outliers);
  emxFree_char_T(&pStruct->rhofunc);
  emxFree_real_T(&pStruct->rhofuncparam);
}

void emxFreeStruct_struct_tclust_T(struct_tclust_T *pStruct)
{
  emxFree_real_T(&pStruct->muopt);
  emxFree_real_T(&pStruct->sigmaopt);
  emxFree_real_T(&pStruct->idx);
  emxFree_real_T(&pStruct->postprob);
  emxFree_real_T(&pStruct->bs);
  emxFree_real_T(&pStruct->fullsol);
  emxFree_real_T(&pStruct->Y);
}

void emxFreeStruct_table(table *pStruct)
{
  c_emxFreeStruct_matlab_internal(&pStruct->varDim);
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

void emxFree_cell_wrap_43(emxArray_cell_wrap_43 **pEmxArray)
{
  int i;
  int numEl;
  if (*pEmxArray != (emxArray_cell_wrap_43 *)NULL) {
    if ((*pEmxArray)->data != (cell_wrap_43 *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }
      for (i = 0; i < numEl; i++) {
        emxFreeStruct_cell_wrap_43(&(*pEmxArray)->data[i]);
      }
      if ((*pEmxArray)->canFreeData) {
        free((*pEmxArray)->data);
      }
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_cell_wrap_43 *)NULL;
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

void emxFree_int8_T(emxArray_int8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int8_T *)NULL) {
    if (((*pEmxArray)->data != (signed char *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_int8_T *)NULL;
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

void emxFree_uint8_T(emxArray_uint8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint8_T *)NULL) {
    if (((*pEmxArray)->data != (unsigned char *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }
    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_uint8_T *)NULL;
  }
}

void emxInitMatrix_cell_wrap_56(cell_wrap_56 pMatrix[4])
{
  int i;
  for (i = 0; i < 4; i++) {
    emxInitStruct_cell_wrap_56(&pMatrix[i]);
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

void emxInitStruct_cell_wrap_43(cell_wrap_43 *pStruct)
{
  emxInit_real_T(&pStruct->f1, 2);
}

void emxInitStruct_cell_wrap_56(cell_wrap_56 *pStruct)
{
  emxInit_char_T(&pStruct->f1, 2);
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

void emxInitStruct_struct1_T(struct1_T *pStruct)
{
  emxInit_real_T(&pStruct->beta, 1);
}

void emxInitStruct_struct_FSM_T(struct_FSM_T *pStruct)
{
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_real_T(&pStruct->loc, 2);
  emxInit_real_T(&pStruct->cov, 2);
  emxInit_real_T(&pStruct->md, 2);
  emxInit_real_T(&pStruct->mmd, 2);
  emxInit_real_T(&pStruct->Un, 2);
  emxInit_real_T(&pStruct->nout, 2);
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
  emxInit_cell_wrap_43(&pStruct->Un, 1);
  emxInit_real_T(&pStruct->y, 1);
  emxInit_real_T(&pStruct->X, 2);
  emxInit_real_T(&pStruct->Scorep, 2);
  emxInit_real_T(&pStruct->Scoren, 2);
  emxInit_real_T(&pStruct->Scoreb, 2);
}

void emxInitStruct_struct_FSRlms_T(struct_FSRlms_T *pStruct)
{
  emxInit_real_T(&pStruct->bsb, 1);
}

void emxInitStruct_struct_LTSts_T(struct_LTSts_T *pStruct)
{
  emxInit_real_T(&pStruct->RES, 2);
  emxInit_real_T(&pStruct->Hsubset, 2);
  emxInit_real_T(&pStruct->B, 2);
  pStruct->posLS.size[0] = 0;
  pStruct->posLS.size[1] = 0;
  emxInit_real_T(&pStruct->yhat, 1);
  emxInit_real_T(&pStruct->outliers, 1);
  emxInit_real_T(&pStruct->outliersPval, 1);
  emxInit_real_T(&pStruct->numscale2, 2);
  emxInit_real_T(&pStruct->BestIndexes, 2);
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

void emxInitStruct_struct_MMreg_T(struct_MMreg_T *pStruct)
{
  emxInit_real_T(&pStruct->beta, 1);
  emxInit_real_T(&pStruct->fittedvalues, 1);
  emxInit_real_T(&pStruct->residuals, 1);
  emxInit_real_T(&pStruct->Sbeta, 1);
  emxInit_real_T(&pStruct->weights, 1);
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_char_T(&pStruct->rhofuncS, 2);
  emxInit_real_T(&pStruct->rhofuncparamS, 2);
  emxInit_char_T(&pStruct->rhofunc, 2);
  emxInit_real_T(&pStruct->rhofuncparam, 2);
  emxInit_real_T(&pStruct->X, 2);
  emxInit_real_T(&pStruct->y, 2);
}

void emxInitStruct_struct_MMregeda_T(struct_MMregeda_T *pStruct)
{
  emxInit_real_T(&pStruct->Beta, 2);
  emxInit_real_T(&pStruct->RES, 2);
  emxInit_real_T(&pStruct->Weights, 2);
  emxInit_boolean_T(&pStruct->Outliers, 2);
  emxInit_real_T(&pStruct->Sbeta, 1);
  emxInit_char_T(&pStruct->rhofunc, 2);
  emxInit_real_T(&pStruct->rhofuncparam, 2);
  emxInit_real_T(&pStruct->eff, 2);
  emxInit_real_T(&pStruct->X, 2);
  emxInit_real_T(&pStruct->y, 1);
}

void emxInitStruct_struct_Sreg_T(struct_Sreg_T *pStruct)
{
  emxInit_real_T(&pStruct->beta, 1);
  emxInit_real_T(&pStruct->bs, 2);
  emxInit_real_T(&pStruct->weights, 1);
  emxInit_real_T(&pStruct->fittedvalues, 1);
  emxInit_real_T(&pStruct->residuals, 1);
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_char_T(&pStruct->rhofunc, 2);
  emxInit_real_T(&pStruct->rhofuncparam, 2);
  emxInit_real_T(&pStruct->X, 2);
  emxInit_real_T(&pStruct->y, 2);
}

void emxInitStruct_struct_Sregeda_T(struct_Sregeda_T *pStruct)
{
  emxInit_real_T(&pStruct->Beta, 2);
  emxInit_real_T(&pStruct->Scale, 1);
  emxInit_real_T(&pStruct->BS, 2);
  emxInit_real_T(&pStruct->Weights, 2);
  emxInit_real_T(&pStruct->RES, 2);
  emxInit_real_T(&pStruct->Singsub, 1);
  emxInit_boolean_T(&pStruct->Outliers, 2);
  emxInit_real_T(&pStruct->bdp, 1);
  emxInit_char_T(&pStruct->rhofunc, 2);
  emxInit_real_T(&pStruct->rhofuncparam, 2);
  emxInit_real_T(&pStruct->X, 2);
  emxInit_real_T(&pStruct->y, 1);
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

void emxInitStruct_struct_T3(i_struct_T *pStruct)
{
  c_emxInitStruct_anonymous_funct(&pStruct->nonlin);
  emxInit_real_T(&pStruct->cEq_1, 1);
  emxInit_real_T(&pStruct->cEq_2, 1);
  emxInit_boolean_T(&pStruct->hasLB, 1);
  emxInit_boolean_T(&pStruct->hasUB, 1);
}

void emxInitStruct_struct_T4(h_struct_T *pStruct)
{
  d_emxInitStruct_anonymous_funct(&pStruct->fun);
}

void emxInitStruct_struct_T5(g_struct_T *pStruct)
{
  emxInit_real_T(&pStruct->xdata, 2);
  emxInit_real_T(&pStruct->ydata, 1);
}

void emxInitStruct_struct_T6(j_struct_T *pStruct)
{
  emxInit_real_T(&pStruct->beta, 1);
  emxInit_real_T(&pStruct->bs, 2);
  emxInit_real_T(&pStruct->weights, 1);
  emxInit_real_T(&pStruct->fittedvalues, 1);
  emxInit_real_T(&pStruct->residuals, 1);
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_char_T(&pStruct->rhofunc, 2);
  emxInit_real_T(&pStruct->rhofuncparam, 2);
}

void emxInitStruct_struct_T7(e_struct_T *pStruct)
{
  emxInit_real_T(&pStruct->beta, 1);
  emxInit_real_T(&pStruct->weights, 1);
  emxInit_real_T(&pStruct->residuals, 1);
  emxInit_real_T(&pStruct->outliers, 2);
  emxInit_char_T(&pStruct->rhofunc, 2);
  emxInit_real_T(&pStruct->rhofuncparam, 2);
}

void emxInitStruct_struct_tclust_T(struct_tclust_T *pStruct)
{
  emxInit_real_T(&pStruct->muopt, 2);
  emxInit_real_T(&pStruct->sigmaopt, 3);
  emxInit_real_T(&pStruct->idx, 1);
  emxInit_real_T(&pStruct->postprob, 2);
  pStruct->MIXMIX.size[0] = 0;
  pStruct->MIXMIX.size[1] = 0;
  pStruct->MIXCLA.size[0] = 0;
  pStruct->MIXCLA.size[1] = 0;
  pStruct->CLACLA.size[0] = 0;
  pStruct->CLACLA.size[1] = 0;
  emxInit_real_T(&pStruct->bs, 2);
  emxInit_real_T(&pStruct->fullsol, 1);
  emxInit_real_T(&pStruct->Y, 2);
}

void emxInitStruct_table(table *pStruct)
{
  c_emxInitStruct_matlab_internal(&pStruct->varDim);
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

void emxInit_cell_wrap_43(emxArray_cell_wrap_43 **pEmxArray, int numDimensions)
{
  emxArray_cell_wrap_43 *emxArray;
  int i;
  *pEmxArray = (emxArray_cell_wrap_43 *)malloc(sizeof(emxArray_cell_wrap_43));
  emxArray = *pEmxArray;
  emxArray->data = (cell_wrap_43 *)NULL;
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

void emxInit_int8_T(emxArray_int8_T **pEmxArray, int numDimensions)
{
  emxArray_int8_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int8_T *)malloc(sizeof(emxArray_int8_T));
  emxArray = *pEmxArray;
  emxArray->data = (signed char *)NULL;
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

void emxInit_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions)
{
  emxArray_uint8_T *emxArray;
  int i;
  *pEmxArray = (emxArray_uint8_T *)malloc(sizeof(emxArray_uint8_T));
  emxArray = *pEmxArray;
  emxArray->data = (unsigned char *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc(sizeof(int) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxTrim_cell_wrap_43(emxArray_cell_wrap_43 *emxArray, int fromIndex,
                          int toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_cell_wrap_43(&emxArray->data[i]);
  }
}

/* End of code generation (fsdaC_emxutil.c) */
