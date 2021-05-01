/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_FSRmdr_wrapper_api.c
 *
 * Code generation for function '_coder_FSRmdr_wrapper_api'
 *
 */

/* Include files */
#include "_coder_FSRmdr_wrapper_api.h"
#include "FSRmdr_wrapper.h"
#include "FSRmdr_wrapper_data.h"
#include "FSRmdr_wrapper_emxutil.h"
#include "FSRmdr_wrapper_mexutil.h"
#include "FSRmdr_wrapper_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo gg_emlrtRTEI = {
    1,                           /* lineNo */
    1,                           /* colNo */
    "_coder_FSRmdr_wrapper_api", /* fName */
    ""                           /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret);

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                real_T **ret_data, int32_T ret_size[2]);

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y);

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y);

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static boolean_T m_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *bsbmfullrank,
                                    const char_T *identifier);

static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId);

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bsbsteps,
                               const char_T *identifier, emxArray_real_T *y);

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y);

static const mxArray *p_emlrt_marshallOut(const emxArray_real_T *u);

static void q_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *threshlevoutX,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2]);

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2]);

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                               const emlrtMsgIdentifier *msgId,
                               emxArray_real_T *ret);

static boolean_T y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                const emlrtMsgIdentifier *msgId,
                                emxArray_real_T *ret)
{
  static const int32_T dims[2] = {-1, 1};
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

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y,
                               const char_T *identifier, emxArray_real_T *b_y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T m_emlrt_marshallIn(const emlrtStack *sp,
                                    const mxArray *bsbmfullrank,
                                    const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = n_emlrt_marshallIn(sp, emlrtAlias(bsbmfullrank), &thisId);
  emlrtDestroyArray(&bsbmfullrank);
  return y;
}

static boolean_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                    const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = y_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *bsbsteps,
                               const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  p_emlrt_marshallIn(sp, emlrtAlias(bsbsteps), &thisId, y);
  emlrtDestroyArray(&bsbsteps);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               emxArray_real_T *y)
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *p_emlrt_marshallOut(const emxArray_real_T *u)
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

static void q_emlrt_marshallIn(const emlrtStack *sp,
                               const mxArray *threshlevoutX,
                               const char_T *identifier, real_T **y_data,
                               int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(threshlevoutX), &thisId, y_data, y_size);
  emlrtDestroyArray(&threshlevoutX);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                               const emlrtMsgIdentifier *parentId,
                               real_T **y_data, int32_T y_size[2])
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

static boolean_T y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
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

void FSRmdr_wrapper_api(const mxArray *const prhs[12], int32_T nlhs,
                        const mxArray *plhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  emxArray_real_T *BB;
  emxArray_real_T *Bols;
  emxArray_real_T *S2;
  emxArray_real_T *Un;
  emxArray_real_T *X;
  emxArray_real_T *bsb;
  emxArray_real_T *bsbsteps;
  emxArray_real_T *constr;
  emxArray_real_T *mdr;
  emxArray_real_T *y;
  real_T init;
  real_T *threshlevoutX_data;
  int32_T threshlevoutX_size[2];
  boolean_T bsbmfullrank;
  boolean_T intercept;
  boolean_T internationaltrade;
  boolean_T msg;
  boolean_T nocheck;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &y, 1, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &X, 2, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &bsb, 1, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &bsbsteps, 2, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &constr, 2, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &mdr, 2, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &Un, 2, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &BB, 2, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &Bols, 2, &gg_emlrtRTEI, true);
  emxInit_real_T(&st, &S2, 2, &gg_emlrtRTEI, true);
  /* Marshall function inputs */
  y->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "y", y);
  X->canFreeData = false;
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "X", X);
  bsb->canFreeData = false;
  i_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "bsb", bsb);
  bsbmfullrank = m_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "bsbmfullrank");
  bsbsteps->canFreeData = false;
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "bsbsteps", bsbsteps);
  constr->canFreeData = false;
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "constr", constr);
  init = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "init");
  intercept = m_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "intercept");
  internationaltrade =
      m_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "internationaltrade");
  msg = m_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "msg");
  nocheck = m_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "nocheck");
  q_emlrt_marshallIn(&st, emlrtAlias(prhs[11]), "threshlevoutX",
                     (real_T **)&threshlevoutX_data, threshlevoutX_size);
  /* Invoke the target function */
  FSRmdr_wrapper(&st, y, X, bsb, bsbmfullrank, bsbsteps, constr, init,
                 intercept, internationaltrade, msg, nocheck,
                 (real_T *)threshlevoutX_data, threshlevoutX_size, mdr, Un, BB,
                 Bols, S2);
  /* Marshall function outputs */
  mdr->canFreeData = false;
  plhs[0] = p_emlrt_marshallOut(mdr);
  emxFree_real_T(&mdr);
  emxFree_real_T(&constr);
  emxFree_real_T(&bsbsteps);
  emxFree_real_T(&bsb);
  emxFree_real_T(&X);
  emxFree_real_T(&y);
  if (nlhs > 1) {
    Un->canFreeData = false;
    plhs[1] = p_emlrt_marshallOut(Un);
  }
  emxFree_real_T(&Un);
  if (nlhs > 2) {
    BB->canFreeData = false;
    plhs[2] = p_emlrt_marshallOut(BB);
  }
  emxFree_real_T(&BB);
  if (nlhs > 3) {
    Bols->canFreeData = false;
    plhs[3] = p_emlrt_marshallOut(Bols);
  }
  emxFree_real_T(&Bols);
  if (nlhs > 4) {
    S2->canFreeData = false;
    plhs[4] = p_emlrt_marshallOut(S2);
  }
  emxFree_real_T(&S2);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_FSRmdr_wrapper_api.c) */
