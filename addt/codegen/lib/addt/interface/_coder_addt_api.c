/*
 * Prerelease License - for engineering feedback and testing purposes
 * only. Not for sale.
 *
 * _coder_addt_api.c
 *
 * Code generation for function 'addt'
 *
 */

/* Include files */
#include "_coder_addt_api.h"
#include "_coder_addt_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131610U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "addt",                                               /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *b_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size);

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static const mxArray *c_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2]);

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *varargin_2,
                                    const char_T *identifier);

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                             const char_T *identifier, emxArray_real_T *b_y);

static const mxArray *emlrt_marshallOut(const struct0_T u);

static void emxEnsureCapacity_real_T(emxArray_real_T *emxArray,
                                     int32_T oldNumel);

static void emxFree_real_T(emxArray_real_T **pEmxArray);

static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
                           int32_T numDimensions, boolean_T doPush);

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_4,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static real_T i_emlrt_marshallIn(const emlrtStack *sp,
                                 const mxArray *varargin_6,
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

static const mxArray *b_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_i;
  int32_T i;
  y = NULL;
  i = u_size;
  m = emlrtCreateNumericArray(1, &i, mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u_size) {
    pData[i] = u_data[0];
    i++;
    b_i = 1;
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

static const mxArray *c_emlrt_marshallOut(const real_T u_data[],
                                          const int32_T u_size[2])
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = u_size[0];
  iv[1] = u_size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  b_i = 0;
  while (b_i < u_size[1]) {
    b_i = 0;
    while (b_i < u_size[0]) {
      pData[i] = u_data[0];
      i++;
      b_i = 1;
    }
    b_i = 1;
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

static boolean_T e_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *varargin_2,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(varargin_2), &thisId);
  emlrtDestroyArray(&varargin_2);
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

static const mxArray *emlrt_marshallOut(const struct0_T u)
{
  static const char_T *sv[4] = {"b", "S2add", "Tadd", "pval"};
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 4, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"b",
                      b_emlrt_marshallOut(u.b.data, u.b.size[0]), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"S2add",
                      b_emlrt_marshallOut(u.S2add.data, u.S2add.size[0]), 1);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"Tadd",
                      c_emlrt_marshallOut(u.Tadd.data, u.Tadd.size), 2);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"pval",
                      c_emlrt_marshallOut(u.pval.data, u.pval.size), 3);
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

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *varargin_4,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(varargin_4), &thisId, &r, y_size);
  *y_data = r;
  emlrtDestroyArray(&varargin_4);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp,
                                 const mxArray *varargin_6,
                                 const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = j_emlrt_marshallIn(sp, emlrtAlias(varargin_6), &thisId);
  emlrtDestroyArray(&varargin_6);
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

void addt_api(const mxArray *const prhs[19], const mxArray **plhs)
{
  static const uint32_T uv[4] = {3357164677U, 2318911913U, 453305457U,
                                 2737014202U};
  static const uint32_T uv1[4] = {4157658673U, 34156516U, 3689254854U,
                                  3620729731U};
  static const uint32_T uv2[4] = {2039974685U, 2575056157U, 2385066813U,
                                  722981978U};
  static const uint32_T uv3[4] = {516736533U, 4076907452U, 290652079U,
                                  456680509U};
  static const uint32_T uv4[4] = {510891540U, 285536829U, 752325925U,
                                  1706817170U};
  static const uint32_T uv5[4] = {3554992099U, 1890951364U, 866573819U,
                                  383743229U};
  static const uint32_T uv6[4] = {3833507555U, 651488446U, 712151308U,
                                  282032450U};
  static const uint32_T uv7[4] = {3285886182U, 3144533299U, 1828114021U,
                                  3058211797U};
  static const char_T *s = "varargin_1";
  static const char_T *s1 = "varargin_3";
  static const char_T *s2 = "varargin_5";
  static const char_T *s3 = "varargin_7";
  static const char_T *s4 = "varargin_9";
  static const char_T *s5 = "varargin_11";
  static const char_T *s6 = "varargin_13";
  static const char_T *s7 = "varargin_15";
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *varargin_16;
  emxArray_real_T *w;
  emxArray_real_T *y;
  struct0_T out;
  real_T varargin_10;
  real_T varargin_12;
  real_T varargin_6;
  real_T varargin_8;
  real_T *varargin_4_data;
  int32_T varargin_4_size[2];
  int32_T i;
  boolean_T varargin_14;
  boolean_T varargin_2;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, true);
  emxInit_real_T(&st, &X, 2, true);
  emxInit_real_T(&st, &w, 1, true);
  emxInit_real_T(&st, &varargin_16, 1, true);
  /* Check constant function inputs */
  i = 4;
  emlrtCheckArrayChecksumR2018b(&st, prhs[3], false, &i, (const char_T **)&s,
                                &uv[0]);
  emlrtCheckArrayChecksumR2018b(&st, prhs[5], false, &i, (const char_T **)&s1,
                                &uv1[0]);
  emlrtCheckArrayChecksumR2018b(&st, prhs[7], false, &i, (const char_T **)&s2,
                                &uv2[0]);
  emlrtCheckArrayChecksumR2018b(&st, prhs[9], false, &i, (const char_T **)&s3,
                                &uv3[0]);
  emlrtCheckArrayChecksumR2018b(&st, prhs[11], false, &i, (const char_T **)&s4,
                                &uv4[0]);
  emlrtCheckArrayChecksumR2018b(&st, prhs[13], false, &i, (const char_T **)&s5,
                                &uv5[0]);
  emlrtCheckArrayChecksumR2018b(&st, prhs[15], false, &i, (const char_T **)&s6,
                                &uv6[0]);
  emlrtCheckArrayChecksumR2018b(&st, prhs[17], false, &i, (const char_T **)&s7,
                                &uv7[0]);
  /* Marshall function inputs */
  y->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  w->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "w", w);
  varargin_2 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "varargin_2");
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "varargin_4",
                     (real_T **)&varargin_4_data, varargin_4_size);
  varargin_6 = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "varargin_6");
  varargin_8 = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "varargin_8");
  varargin_10 = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "varargin_10");
  varargin_12 = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "varargin_12");
  varargin_14 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "varargin_14");
  varargin_16->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[18]), "varargin_16", varargin_16);
  /* Invoke the target function */
  addt(y, X, w, varargin_2, (real_T *)varargin_4_data, varargin_4_size,
       varargin_6, varargin_8, varargin_10, varargin_12, varargin_14,
       varargin_16, &out);
  /* Marshall function outputs */
  *plhs = emlrt_marshallOut(out);
  emxFree_real_T(&varargin_16);
  emxFree_real_T(&w);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void addt_atexit(void)
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
  addt_xil_terminate();
  addt_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void addt_initialize(void)
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

void addt_terminate(void)
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

/* End of code generation (_coder_addt_api.c) */
