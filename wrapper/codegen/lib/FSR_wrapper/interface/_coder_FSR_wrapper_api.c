/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSR_wrapper_api.c
 *
 * Code generation for function 'FSR_wrapper'
 *
 */

/* Include files */
#include "_coder_FSR_wrapper_api.h"
#include "_coder_FSR_wrapper_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131610U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "FSR_wrapper",                                        /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u);

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *bsbmfullrank,
                                    const char_T *identifier);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                             const char_T *identifier, emxArray_real_T *b_y);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct0_T *u);

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray,
                                     int32_T oldNumel);

static void emxFreeStruct_struct0_T(struct0_T *pStruct);

static void emxFree_real_T(emxArray_real_T **pEmxArray);

static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
                                    boolean_T doPush);

static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush);

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h,
                                 const char_T *identifier);

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static boolean_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2]);

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  k_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = 1;
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }
  emlrtAssign(&y, m);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    for (c_i = 0; c_i < u->size[0]; c_i++) {
      pData[i] = u->data[c_i + u->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&y, m);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u->size[1]) {
    for (b_i = 0; b_i < u->size[0]; b_i++) {
      pData[i] = u->data[b_i];
      i++;
    }
    b_i = 1;
  }
  emlrtAssign(&y, m);
  return y;
}

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *bsbmfullrank,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(bsbmfullrank), &thisId);
  emlrtDestroyArray(&bsbmfullrank);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                             const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct0_T *u)
{
  static const int32_T iv1[2] = {1, 3};
  static const char_T *sv[13] = {
      "ListOut",      "outliers",  "mdr",  "Un",     "nout",
      "beta",         "scale",     "mdag", "ListCl", "VIOMout",
      "fittedvalues", "residuals", "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"ListOut",
                      b_emlrt_marshallOut(u->ListOut), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      b_emlrt_marshallOut(u->outliers), 1);
  b_y = NULL;
  iv[0] = u->mdr->size[0];
  iv[1] = u->mdr->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->mdr->size[1]; b_i++) {
    for (c_i = 0; c_i < u->mdr->size[0]; c_i++) {
      pData[i] = u->mdr->data[c_i + u->mdr->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mdr", b_y, 2);
  c_y = NULL;
  iv[0] = u->Un->size[0];
  iv[1] = u->Un->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->Un->size[1]; b_i++) {
    for (c_i = 0; c_i < u->Un->size[0]; c_i++) {
      pData[i] = u->Un->data[c_i + u->Un->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Un", c_y, 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"nout",
                      c_emlrt_marshallOut(u->nout), 4);
  d_y = NULL;
  i = u->beta->size[0];
  m = emlrtCreateNumericArray(1, &i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->beta->size[0]; b_i++) {
    pData[i] = u->beta->data[b_i];
    i++;
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta", d_y, 5);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->scale);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale", e_y, 6);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"mdag",
                      c_emlrt_marshallOut(u->mdag), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"ListCl",
                      b_emlrt_marshallOut(u->ListCl), 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"VIOMout",
                      b_emlrt_marshallOut(u->VIOMout), 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"fittedvalues",
                      d_emlrt_marshallOut(u->fittedvalues), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      d_emlrt_marshallOut(u->residuals), 11);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u->class[0]);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", f_y, 12);
  return y;
}

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray,
                                     int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
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
    newData = emlrtCallocMex((uint32_T)i, sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }
    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void emxFreeStruct_struct0_T(struct0_T *pStruct)
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

static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
                                    boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->ListOut, 2, doPush);
  emxInit_real_T(sp, &pStruct->outliers, 2, doPush);
  emxInit_real_T(sp, &pStruct->mdr, 2, doPush);
  emxInit_real_T(sp, &pStruct->Un, 2, doPush);
  emxInit_real_T(sp, &pStruct->nout, 2, doPush);
  emxInit_real_T(sp, &pStruct->beta, 1, doPush);
  emxInit_real_T(sp, &pStruct->mdag, 2, doPush);
  emxInit_real_T(sp, &pStruct->ListCl, 2, doPush);
  emxInit_real_T(sp, &pStruct->VIOMout, 2, doPush);
  emxInit_real_T(sp, &pStruct->fittedvalues, 2, doPush);
  emxInit_real_T(sp, &pStruct->residuals, 2, doPush);
}

static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, false, (void *)pEmxArray,
                                      (void *)&emxFree_real_T, NULL, NULL,
                                      NULL);
  }
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = m_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(bonflev), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&bonflev);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *h,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(h), &thisId);
  emlrtDestroyArray(&h);
  return y;
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims = -1;
  int32_T i;
  int32_T i1;
  const boolean_T b = true;
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 1U, (void *)&dims, &b, &i);
  ret->allocatedSize = i;
  i1 = ret->size[0];
  ret->size[0] = i;
  emxEnsureCapacity_real_T(ret, i1);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(ret, i);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static boolean_T m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"logical",
                          false, 0U, (void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = {1, 1};
  int32_T iv[2];
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &iv[0]);
  ret_size[0] = iv[0];
  ret_size[1] = iv[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                          false, 0U, (void *)&dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void FSR_wrapper_api(const mxArray *const prhs[13], const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct0_T out;
  real_T h;
  real_T init;
  real_T lms;
  real_T nsamp;
  real_T *bonflev_data;
  real_T *threshoutX_data;
  int32_T bonflev_size[2];
  int32_T threshoutX_size[2];
  boolean_T bsbmfullrank;
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T weak;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInitStruct_struct0_T(&st, &out, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bsbmfullrank = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "bsbmfullrank");
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "bonflev",
                     (real_T **)&bonflev_data, bonflev_size);
  h = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "h");
  init = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "init");
  intercept = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "intercept");
  lms = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "lms");
  msg = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "msg");
  nocheck = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nocheck");
  nsamp = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nsamp");
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "threshoutX",
                     (real_T **)&threshoutX_data, threshoutX_size);
  weak = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "weak");
  /* Invoke the target function */
  FSR_wrapper(y, X, bsbmfullrank, (real_T *)bonflev_data, bonflev_size, h, init,
              intercept, lms, msg, nocheck, nsamp, (real_T *)threshoutX_data,
              threshoutX_size, weak, &out);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct0_T(&out);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void FSR_wrapper_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  FSR_wrapper_xil_terminate();
  FSR_wrapper_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void FSR_wrapper_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void FSR_wrapper_terminate(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (_coder_FSR_wrapper_api.c) */
