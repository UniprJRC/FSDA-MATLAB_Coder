/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inv.c
 *
 * Code generation for function 'inv'
 *
 */

/* Include files */
#include "inv.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "norm.h"
#include "repmat.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "blas.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo xk_emlrtRSI = {
    27,       /* lineNo */
    "xgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pathName */
};

static emlrtRSInfo yk_emlrtRSI = {
    91,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pathName */
};

static emlrtRSInfo al_emlrtRSI = {
    58,             /* lineNo */
    "ceval_xgetrf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pathName */
};

static emlrtRSInfo dl_emlrtRSI =
    {
        82,      /* lineNo */
        "colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo el_emlrtRSI =
    {
        140,                            /* lineNo */
        "eml_integer_colon_dispatcher", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo fl_emlrtRSI =
    {
        163,                        /* lineNo */
        "eml_signed_integer_colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo gl_emlrtRSI =
    {
        168,                        /* lineNo */
        "eml_signed_integer_colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

static emlrtRSInfo hl_emlrtRSI = {
    67,      /* lineNo */
    "xtrsm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm."
    "m" /* pathName */
};

static emlrtRSInfo il_emlrtRSI = {
    81,           /* lineNo */
    "xtrsm_blas", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xtrsm."
    "m" /* pathName */
};

static emlrtRSInfo ny_emlrtRSI = {
    21,    /* lineNo */
    "inv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo oy_emlrtRSI = {
    22,    /* lineNo */
    "inv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo py_emlrtRSI = {
    173,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo qy_emlrtRSI = {
    174,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo ry_emlrtRSI = {
    177,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo sy_emlrtRSI = {
    180,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo ty_emlrtRSI = {
    183,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo uy_emlrtRSI = {
    190,      /* lineNo */
    "invNxN", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo vy_emlrtRSI = {
    14,              /* lineNo */
    "eml_ipiv2perm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eml_"
    "ipiv2perm.m" /* pathName */
};

static emlrtRSInfo wy_emlrtRSI = {
    42,          /* lineNo */
    "checkcond", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRSInfo xy_emlrtRSI = {
    46,          /* lineNo */
    "checkcond", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pathName
                                                                       */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    14,    /* lineNo */
    15,    /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo ov_emlrtRTEI = {
    19,    /* lineNo */
    5,     /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo pv_emlrtRTEI = {
    21,    /* lineNo */
    5,     /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo qv_emlrtRTEI = {
    1,        /* lineNo */
    37,       /* colNo */
    "xgetrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pName */
};

static emlrtRTEInfo rv_emlrtRTEI = {
    58,       /* lineNo */
    29,       /* colNo */
    "xgetrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pName */
};

static emlrtRTEInfo sv_emlrtRTEI = {
    89,       /* lineNo */
    27,       /* colNo */
    "xgetrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pName */
};

static emlrtRTEInfo tv_emlrtRTEI =
    {
        164,     /* lineNo */
        20,      /* colNo */
        "colon", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                          */
};

static emlrtRTEInfo uv_emlrtRTEI = {
    174,   /* lineNo */
    1,     /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo vv_emlrtRTEI = {
    1,     /* lineNo */
    14,    /* colNo */
    "inv", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\inv.m" /* pName
                                                                       */
};

static emlrtRTEInfo wv_emlrtRTEI = {
    58,       /* lineNo */
    5,        /* colNo */
    "xgetrf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgetrf.m" /* pName */
};

/* Function Definitions */
void inv(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  static const int32_T iv[2] = {1, 6};
  static const char_T rfmt[6] = {'%', '1', '4', '.', '6', 'e'};
  ptrdiff_t info_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_int32_T *ipiv;
  emxArray_int32_T *p;
  emxArray_ptrdiff_t *ipiv_t;
  emxArray_ptrdiff_t *r;
  emxArray_real_T *b_x;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  real_T n1x;
  real_T n1xinv;
  real_T rc;
  int32_T b_i;
  int32_T b_n;
  int32_T i;
  int32_T k;
  int32_T n;
  int32_T yk;
  char_T str[14];
  char_T DIAGA1;
  char_T SIDE1;
  char_T TRANSA1;
  char_T UPLO1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  if (x->size[0] != x->size[1]) {
    emlrtErrorWithMessageIdR2018a(sp, &gc_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(sp, y, i, &ov_emlrtRTEI);
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y->data[i] = x->data[i];
    }
  } else {
    st.site = &ny_emlrtRSI;
    n = x->size[0];
    i = y->size[0] * y->size[1];
    y->size[0] = x->size[0];
    y->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&st, y, i, &pv_emlrtRTEI);
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      y->data[i] = 0.0;
    }
    emxInit_real_T(&st, &b_x, 2, &vv_emlrtRTEI, true);
    b_st.site = &py_emlrtRSI;
    i = b_x->size[0] * b_x->size[1];
    b_x->size[0] = x->size[0];
    b_x->size[1] = x->size[1];
    emxEnsureCapacity_real_T(&b_st, b_x, i, &qv_emlrtRTEI);
    yk = x->size[0] * x->size[1];
    for (i = 0; i < yk; i++) {
      b_x->data[i] = x->data[i];
    }
    emxInit_int32_T(&b_st, &ipiv, 2, &vv_emlrtRTEI, true);
    emxInit_ptrdiff_t(&b_st, &ipiv_t, 1, &wv_emlrtRTEI, true);
    emxInit_ptrdiff_t(&b_st, &r, 1, &rv_emlrtRTEI, true);
    c_st.site = &xk_emlrtRSI;
    d_st.site = &al_emlrtRSI;
    repmat(&d_st, (ptrdiff_t)0.0, muIntScalarMin_sint32(n, n), r);
    i = ipiv_t->size[0];
    ipiv_t->size[0] = r->size[0];
    emxEnsureCapacity_ptrdiff_t(&c_st, ipiv_t, i, &rv_emlrtRTEI);
    info_t = LAPACKE_dgetrf_work(102, (ptrdiff_t)x->size[0],
                                 (ptrdiff_t)x->size[0], &b_x->data[0],
                                 (ptrdiff_t)x->size[0], &ipiv_t->data[0]);
    yk = (int32_T)info_t;
    i = ipiv->size[0] * ipiv->size[1];
    ipiv->size[0] = 1;
    ipiv->size[1] = ipiv_t->size[0];
    emxEnsureCapacity_int32_T(&c_st, ipiv, i, &sv_emlrtRTEI);
    d_st.site = &yk_emlrtRSI;
    emxFree_ptrdiff_t(&r);
    if (yk < 0) {
      if (yk == -1010) {
        emlrtErrorWithMessageIdR2018a(&d_st, &qb_emlrtRTEI, "MATLAB:nomem",
                                      "MATLAB:nomem", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &pb_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
            "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 19, &cv1[0], 12, yk);
      }
    }
    i = ipiv_t->size[0] - 1;
    for (k = 0; k <= i; k++) {
      ipiv->data[k] = (int32_T)ipiv_t->data[k];
    }
    emxFree_ptrdiff_t(&ipiv_t);
    emxInit_int32_T(&c_st, &p, 2, &uv_emlrtRTEI, true);
    b_st.site = &qy_emlrtRSI;
    c_st.site = &vy_emlrtRSI;
    d_st.site = &rg_emlrtRSI;
    e_st.site = &dl_emlrtRSI;
    f_st.site = &el_emlrtRSI;
    g_st.site = &fl_emlrtRSI;
    b_n = x->size[0];
    i = p->size[0] * p->size[1];
    p->size[0] = 1;
    p->size[1] = x->size[0];
    emxEnsureCapacity_int32_T(&f_st, p, i, &tv_emlrtRTEI);
    p->data[0] = 1;
    yk = 1;
    g_st.site = &gl_emlrtRSI;
    if ((2 <= x->size[0]) && (x->size[0] > 2147483646)) {
      h_st.site = &qf_emlrtRSI;
      check_forloop_overflow_error(&h_st);
    }
    for (k = 2; k <= b_n; k++) {
      yk++;
      p->data[k - 1] = yk;
    }
    i = ipiv->size[1];
    for (k = 0; k < i; k++) {
      yk = ipiv->data[k];
      if (yk > k + 1) {
        b_n = p->data[yk - 1];
        p->data[yk - 1] = p->data[k];
        p->data[k] = b_n;
      }
    }
    emxFree_int32_T(&ipiv);
    b_st.site = &ry_emlrtRSI;
    for (k = 0; k < n; k++) {
      i = p->data[k];
      y->data[k + y->size[0] * (i - 1)] = 1.0;
      b_st.site = &sy_emlrtRSI;
      if ((k + 1 <= n) && (n > 2147483646)) {
        c_st.site = &qf_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }
      for (b_n = k + 1; b_n <= n; b_n++) {
        if (y->data[(b_n + y->size[0] * (i - 1)) - 1] != 0.0) {
          yk = b_n + 1;
          b_st.site = &ty_emlrtRSI;
          for (b_i = yk; b_i <= n; b_i++) {
            y->data[(b_i + y->size[0] * (i - 1)) - 1] -=
                y->data[(b_n + y->size[0] * (i - 1)) - 1] *
                b_x->data[(b_i + b_x->size[0] * (b_n - 1)) - 1];
          }
        }
      }
    }
    emxFree_int32_T(&p);
    b_st.site = &uy_emlrtRSI;
    c_st.site = &hl_emlrtRSI;
    d_st.site = &il_emlrtRSI;
    n1x = 1.0;
    DIAGA1 = 'N';
    TRANSA1 = 'N';
    UPLO1 = 'U';
    SIDE1 = 'L';
    info_t = (ptrdiff_t)x->size[0];
    n_t = (ptrdiff_t)x->size[0];
    lda_t = (ptrdiff_t)x->size[0];
    ldb_t = (ptrdiff_t)x->size[0];
    dtrsm(&SIDE1, &UPLO1, &TRANSA1, &DIAGA1, &info_t, &n_t, &n1x, &b_x->data[0],
          &lda_t, &y->data[0], &ldb_t);
    st.site = &oy_emlrtRSI;
    n1x = b_norm(x);
    n1xinv = b_norm(y);
    rc = 1.0 / (n1x * n1xinv);
    emxFree_real_T(&b_x);
    if ((n1x == 0.0) || (n1xinv == 0.0) || (rc == 0.0)) {
      if (!emlrtSetWarningFlag(&st)) {
        b_st.site = &wy_emlrtRSI;
        warning(&b_st);
      }
    } else if ((muDoubleScalarIsNaN(rc) || (rc < 2.2204460492503131E-16)) &&
               (!emlrtSetWarningFlag(&st))) {
      b_st.site = &xy_emlrtRSI;
      b_y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 6, m, &rfmt[0]);
      emlrtAssign(&b_y, m);
      c_y = NULL;
      m = emlrtCreateDoubleScalar(rc);
      emlrtAssign(&c_y, m);
      c_st.site = &xeb_emlrtRSI;
      g_emlrt_marshallIn(&c_st, c_sprintf(&c_st, b_y, c_y, &p_emlrtMCI),
                         "<output of sprintf>", str);
      b_st.site = &xy_emlrtRSI;
      e_warning(&b_st, str);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (inv.c) */
