/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSR_wrapper_api.c
 *
 * Code generation for function '_coder_FSR_wrapper_api'
 *
 */

/* Include files */
#include "_coder_FSR_wrapper_api.h"
#include "FSR_wrapper.h"
#include "FSR_wrapper_data.h"
#include "FSR_wrapper_emxutil.h"
#include "FSR_wrapper_mexutil.h"
#include "FSR_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo jib_emlrtRTEI = {
    1,                        /* lineNo */
    1,                        /* colNo */
    "_coder_FSR_wrapper_api", /* fName */
    ""                        /* pName */
};

/* Function Declarations */
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static boolean_T db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                     const emlrtMsgIdentifier *msgId);

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y);

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static boolean_T q_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *bsbmfullrank,
                                    const char_T *identifier);

static boolean_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static const mxArray *rb_emlrt_marshallOut(const emlrtStack *sp,
                                           const struct_FSR_T *u);

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static const mxArray *sb_emlrt_marshallOut(const emxArray_real_T *u);

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static const mxArray *tb_emlrt_marshallOut(const emxArray_real_T *u);

/* Function Definitions */
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, -1};
  int32_T b_iv[2];
  int32_T i;
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &b_iv[0]);
  ret->allocatedSize = b_iv[0] * b_iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = b_iv[0];
  ret->size[1] = b_iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static boolean_T db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = {1, 1};
  int32_T b_iv[2];
  const boolean_T bv[2] = {true, true};
  emlrtCheckVsBuiltInR2012b((emlrtCTX)sp, msgId, src, (const char_T *)"double",
                            false, 2U, (void *)&dims[0], &bv[0], &b_iv[0]);
  ret_size[0] = b_iv[0];
  ret_size[1] = b_iv[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T q_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *bsbmfullrank,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = r_emlrt_marshallIn(sp, emlrtAlias(bsbmfullrank), &thisId);
  emlrtDestroyArray(&bsbmfullrank);
  return y;
}

static boolean_T r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = db_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *rb_emlrt_marshallOut(const emlrtStack *sp,
                                           const struct_FSR_T *u)
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
  int32_T b_iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 13, (const char_T **)&sv[0]));
  emlrtSetFieldR2017b(y, 0, (const char_T *)"ListOut",
                      gb_emlrt_marshallOut(u->ListOut), 0);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"outliers",
                      gb_emlrt_marshallOut(u->outliers), 1);
  b_y = NULL;
  b_iv[0] = u->mdr->size[0];
  b_iv[1] = u->mdr->size[1];
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
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
  b_iv[0] = u->Un->size[0];
  b_iv[1] = u->Un->size[1];
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
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
                      sb_emlrt_marshallOut(u->nout), 4);
  d_y = NULL;
  m = emlrtCreateNumericArray(1, &u->beta->size[0], mxDOUBLE_CLASS, mxREAL);
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
                      sb_emlrt_marshallOut(u->mdag), 7);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"ListCl",
                      gb_emlrt_marshallOut(u->ListCl), 8);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"VIOMout",
                      gb_emlrt_marshallOut(u->VIOMout), 9);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"fittedvalues",
                      tb_emlrt_marshallOut(u->fittedvalues), 10);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"residuals",
                      tb_emlrt_marshallOut(u->residuals), 11);
  f_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 3, m, &u->class[0]);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, (const char_T *)"class", f_y, 12);
  return y;
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bonflev,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  t_emlrt_marshallIn(sp, emlrtAlias(bonflev), &thisId, y_data, y_size);
  emlrtDestroyArray(&bonflev);
}

static const mxArray *sb_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  y = NULL;
  b_iv[0] = u->size[0];
  b_iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
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

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static const mxArray *tb_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T b_iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  b_iv[0] = u->size[0];
  b_iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &b_iv[0], mxDOUBLE_CLASS, mxREAL);
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

void FSR_wrapper_api(FSR_wrapperStackData *SD, const mxArray *const prhs[13],
                     const mxArray **plhs)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *X;
  emxArray_real_T *y;
  struct_FSR_T out;
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
  emxInit_real_T(&st, &y, 1, &jib_emlrtRTEI, true);
  emxInit_real_T(&st, &X, 2, &jib_emlrtRTEI, true);
  emxInitStruct_struct_FSR_T(&st, &out, &jib_emlrtRTEI, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  m_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bsbmfullrank = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "bsbmfullrank");
  s_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "bonflev",
                     (real_T **)&bonflev_data, bonflev_size);
  h = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "h");
  init = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "init");
  intercept = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "intercept");
  lms = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "lms");
  msg = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "msg");
  nocheck = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "nocheck");
  nsamp = g_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nsamp");
  s_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "threshoutX",
                     (real_T **)&threshoutX_data, threshoutX_size);
  weak = q_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "weak");
  /* Invoke the target function */
  FSR_wrapper(SD, &st, y, X, bsbmfullrank, (real_T *)bonflev_data, bonflev_size,
              h, init, intercept, lms, msg, nocheck, nsamp,
              (real_T *)threshoutX_data, threshoutX_size, weak, &out);
  /* Marshall function outputs */
  *plhs = rb_emlrt_marshallOut(&st, &out);
  emxFreeStruct_struct_FSR_T(&out);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_FSR_wrapper_api.c) */
