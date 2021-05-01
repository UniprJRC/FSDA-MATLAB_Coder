/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LXS_wrapper_api.c
 *
 * Code generation for function 'LXS_wrapper'
 *
 */

/* Include files */
#include "_coder_LXS_wrapper_api.h"
#include "_coder_LXS_wrapper_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131610U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "LXS_wrapper",                                        /* fFunctionName */
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

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflevoutX,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                             const char_T *identifier, emxArray_real_T *b_y);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const struct0_T *u);

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray,
                                     int32_T oldNumel);

static void emxFreeStruct_struct0_T(struct0_T *pStruct);

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);

static void emxFree_real_T(emxArray_real_T **pEmxArray);

static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
                                    boolean_T doPush);

static void emxInit_boolean_T(const emlrtStack *sp,
                              emxArray_boolean_T **pEmxArray,
                              int32_T numDimensions, boolean_T doPush);

static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush);

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *conflev,
                                 const char_T *identifier);

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId);

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *intercept,
                                    const char_T *identifier);

static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               real_T **ret_data, int32_T ret_size[2]);

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                 const emlrtMsgIdentifier *msgId);

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  int32_T b_i;
  int32_T i;
  y = NULL;
  i = u->size[0];
  m = emlrtCreateNumericArray(1, &i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[0]; b_i++) {
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
  static const int32_T iv[2] = {0, 0};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &u->data[0]);
  emlrtSetDimensions((mxArray *)m, &u->size[0], 2);
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

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflevoutX,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(bonflevoutX), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&bonflevoutX);
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
      "weights", "rew", "beta",    "scale", "residuals", "bs",   "outliers",
      "conflev", "h",   "singsub", "X",     "y",         "class"};
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, (const char_T **)&sv[0]));
  b_y = NULL;
  i = u->weights->size[0];
  m = emlrtCreateLogicalArray(1, &i);
  emlrtInitLogicalArray(u->weights->size[0], m, &u->weights->data[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"weights", b_y, 0);
  c_y = NULL;
  m = emlrtCreateLogicalScalar(u->rew);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rew", c_y, 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta",
                      b_emlrt_marshallOut(u->beta), 2);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u->scale);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale", d_y, 3);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      b_emlrt_marshallOut(u->residuals), 4);
  e_y = NULL;
  iv[0] = 1;
  iv[1] = u->bs->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->bs->size[1]; b_i++) {
    pData[i] = u->bs->data[b_i];
    i++;
  }
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", e_y, 5);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      b_emlrt_marshallOut(u->outliers), 6);
  f_y = NULL;
  m = emlrtCreateDoubleScalar(u->conflev);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev", f_y, 7);
  g_y = NULL;
  m = emlrtCreateDoubleScalar(u->h);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", g_y, 8);
  h_y = NULL;
  m = emlrtCreateDoubleScalar(u->singsub);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"singsub", h_y, 9);
  i_y = NULL;
  iv[0] = u->X->size[0];
  iv[1] = u->X->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->X->size[1]; b_i++) {
    for (c_i = 0; c_i < u->X->size[0]; c_i++) {
      pData[i] = u->X->data[c_i + u->X->size[0] * b_i];
      i++;
    }
  }
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", i_y, 10);
  j_y = NULL;
  iv[0] = u->y->size[0];
  iv[1] = u->y->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u->y->size[1]) {
    for (b_i = 0; b_i < u->y->size[0]; b_i++) {
      pData[i] = u->y->data[b_i];
      i++;
    }
    b_i = 1;
  }
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", j_y, 11);
  k_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u->class[0]);
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", k_y, 12);
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
  emxFree_boolean_T(&pStruct->weights);
  emxFree_real_T(&pStruct->beta);
  emxFree_real_T(&pStruct->residuals);
  emxFree_real_T(&pStruct->bs);
  emxFree_real_T(&pStruct->outliers);
  emxFree_real_T(&pStruct->X);
  emxFree_real_T(&pStruct->y);
}

static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }
    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
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
  emxInit_boolean_T(sp, &pStruct->weights, 1, doPush);
  emxInit_real_T(sp, &pStruct->beta, 1, doPush);
  emxInit_real_T(sp, &pStruct->residuals, 1, doPush);
  emxInit_real_T(sp, &pStruct->bs, 2, doPush);
  emxInit_real_T(sp, &pStruct->outliers, 1, doPush);
  emxInit_real_T(sp, &pStruct->X, 2, doPush);
  emxInit_real_T(sp, &pStruct->y, 2, doPush);
}

static void emxInit_boolean_T(const emlrtStack *sp,
                              emxArray_boolean_T **pEmxArray,
                              int32_T numDimensions, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2021a((emlrtCTX)sp, false, (void *)pEmxArray,
                                      (void *)&emxFree_boolean_T, NULL, NULL,
                                      NULL);
  }
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
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

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *conflev,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = h_emlrt_marshallIn(sp, emlrtAlias(conflev), &thisId);
  emlrtDestroyArray(&conflev);
  return y;
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                 const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T i_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *intercept,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(intercept), &thisId);
  emlrtDestroyArray(&intercept);
  return y;
}

static boolean_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
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

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static real_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static boolean_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void LXS_wrapper_api(const mxArray *const prhs[13], int32_T nlhs,
                     const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct0_T out;
  real_T conflev;
  real_T h;
  real_T lms;
  real_T nsamp;
  real_T *bonflevoutX_data;
  int32_T bonflevoutX_size[2];
  boolean_T intercept;
  boolean_T msg;
  boolean_T nocheck;
  boolean_T nomes;
  boolean_T rew;
  boolean_T yxsave;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInitStruct_struct0_T(&st, &out, true);
  emxInit_real_T(&st, &C, 2, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bonflevoutX",
                     (real_T **)&bonflevoutX_data, bonflevoutX_size);
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "conflev");
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "h");
  intercept = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  lms = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lms");
  msg = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "msg");
  nocheck = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "nocheck");
  nomes = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nomes");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nsamp");
  rew = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "rew");
  yxsave = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "yxsave");
  /* Invoke the target function */
  LXS_wrapper(y, X, (real_T *)bonflevoutX_data, bonflevoutX_size, conflev, h,
              intercept, lms, msg, nocheck, nomes, nsamp, rew, yxsave, &out, C);
  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct0_T(&out);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = c_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void LXS_wrapper_atexit(void)
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
  LXS_wrapper_xil_terminate();
  LXS_wrapper_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void LXS_wrapper_initialize(void)
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

void LXS_wrapper_terminate(void)
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

/* End of code generation (_coder_LXS_wrapper_api.c) */
