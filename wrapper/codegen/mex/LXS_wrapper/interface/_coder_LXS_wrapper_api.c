/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_LXS_wrapper_api.c
 *
 * Code generation for function '_coder_LXS_wrapper_api'
 *
 */

/* Include files */
#include "_coder_LXS_wrapper_api.h"
#include "LXS_wrapper.h"
#include "LXS_wrapper_data.h"
#include "LXS_wrapper_emxutil.h"
#include "LXS_wrapper_mexutil.h"
#include "LXS_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo xw_emlrtRTEI = {
    1,                        /* lineNo */
    1,                        /* colNo */
    "_coder_LXS_wrapper_api", /* fName */
    ""                        /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static const mxArray *ab_emlrt_marshallOut(const emlrtStack *sp,
                                           const struct_LXS_T *u);

static boolean_T bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static const mxArray *bb_emlrt_marshallOut(const emxArray_real_T *u);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflevoutX,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static boolean_T q_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *intercept,
                                    const char_T *identifier);

static boolean_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static const mxArray *ab_emlrt_marshallOut(const emlrtStack *sp,
                                           const struct_LXS_T *u)
{
  static const int32_T iv1[2] = {1, 3};
  static const char_T *sv[13] = {
      "weights", "rew", "beta",    "scale", "residuals", "bs",   "outliers",
      "conflev", "h",   "singsub", "X",     "y",         "class"};
  const emxArray_real_T *b_u;
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
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, (const char_T **)&sv[0]));
  b_y = NULL;
  m = emlrtCreateLogicalArray(1, &u->weights->size[0]);
  emlrtInitLogicalArray(u->weights->size[0], m, &u->weights->data[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"weights", b_y, 0);
  c_y = NULL;
  m = emlrtCreateLogicalScalar(u->rew);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"rew", c_y, 1);
  b_u = u->beta;
  d_y = NULL;
  m = emlrtCreateNumericArray(1, &u->beta->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"beta", d_y, 2);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->scale);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"scale", e_y, 3);
  b_u = u->residuals;
  f_y = NULL;
  m = emlrtCreateNumericArray(1, &u->residuals->size[0], mxDOUBLE_CLASS,
                              mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals", f_y, 4);
  g_y = NULL;
  iv[0] = 1;
  iv[1] = u->bs->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->bs->size[1]; b_i++) {
    pData[i] = u->bs->data[b_i];
    i++;
  }
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"bs", g_y, 5);
  b_u = u->outliers;
  h_y = NULL;
  m = emlrtCreateNumericArray(1, &u->outliers->size[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < b_u->size[0]; b_i++) {
    pData[i] = b_u->data[b_i];
    i++;
  }
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers", h_y, 6);
  i_y = NULL;
  m = emlrtCreateDoubleScalar(u->conflev);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"conflev", i_y, 7);
  j_y = NULL;
  m = emlrtCreateDoubleScalar(u->h);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"h", j_y, 8);
  k_y = NULL;
  m = emlrtCreateDoubleScalar(u->singsub);
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"singsub", k_y, 9);
  l_y = NULL;
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
  emlrtAssign(&l_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"X", l_y, 10);
  m_y = NULL;
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
  emlrtAssign(&m_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"y", m_y, 11);
  n_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u->class[0]);
  emlrtAssign(&n_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", n_y, 12);
  return y;
}

static boolean_T bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static const mxArray *bb_emlrt_marshallOut(const emxArray_real_T *u)
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

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflevoutX,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(bonflevoutX), &thisId, y_data, y_size);
  emlrtDestroyArray(&bonflevoutX);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static boolean_T q_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *intercept,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = r_emlrt_marshallIn(sp, emlrtAlias(intercept), &thisId);
  emlrtDestroyArray(&intercept);
  return y;
}

static boolean_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  emxEnsureCapacity_real_T(sp, ret, i1, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void LXS_wrapper_api(LXS_wrapperStackData *SD, const mxArray *const prhs[13],
                     int32_T nlhs, const mxArray *plhs[2])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *C;
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct_LXS_T out;
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
  emxInit_real_T(&st, &y, 1, &xw_emlrtRTEI, true);
  emxInit_real_T(&st, &X, 2, &xw_emlrtRTEI, true);
  emxInitStruct_struct_LXS_T(&st, &out, &xw_emlrtRTEI, true);
  emxInit_real_T(&st, &C, 2, &xw_emlrtRTEI, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bonflevoutX",
                     (real_T **)&bonflevoutX_data, bonflevoutX_size);
  conflev = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "conflev");
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "h");
  intercept = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "intercept");
  lms = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "lms");
  msg = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "msg");
  nocheck = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "nocheck");
  nomes = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nomes");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nsamp");
  rew = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "rew");
  yxsave = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "yxsave");
  /* Invoke the target function */
  LXS_wrapper(SD, &st, y, X, (real_T *)bonflevoutX_data, bonflevoutX_size,
              conflev, h, intercept, lms, msg, nocheck, nomes, nsamp, rew,
              yxsave, &out, C);
  /* Marshall function outputs */
  plhs[0] = ab_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_LXS_T(&out);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    C->canFreeData = false;
    plhs[1] = bb_emlrt_marshallOut(C);
  }
  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_LXS_wrapper_api.c) */
