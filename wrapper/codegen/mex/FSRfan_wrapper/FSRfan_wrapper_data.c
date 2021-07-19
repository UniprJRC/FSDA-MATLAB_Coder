/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * FSRfan_wrapper_data.c
 *
 * Code generation for function 'FSRfan_wrapper_data'
 *
 */

/* Include files */
#include "FSRfan_wrapper_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                               /* bFirstTime */
    false,                                              /* bInitialized */
    131610U,                                            /* fVersionInfo */
    NULL,                                               /* fErrorFunction */
    "FSRfan_wrapper",                                   /* fFunctionName */
    NULL,                                               /* fRTCallStack */
    false,                                              /* bDebugMode */
    {1764267121U, 892124745U, 566995601U, 1444085946U}, /* fSigWrd */
    NULL                                                /* fSigMem */
};

emlrtRSInfo lb_emlrtRSI =
    {
        91,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

emlrtRSInfo mb_emlrtRSI =
    {
        60,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

emlrtRSInfo nb_emlrtRSI = {
    142,      /* lineNo */
    "mtimes", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pathName */
};

emlrtRSInfo ob_emlrtRSI = {
    21,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" /* pathName */
};

emlrtRSInfo pb_emlrtRSI = {
    178,           /* lineNo */
    "mtimes_blas", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pathName */
};

emlrtRSInfo ac_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                        */
};

emlrtRSInfo bc_emlrtRSI =
    {
        46,         /* lineNo */
        "minOrMax", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

emlrtRSInfo cc_emlrtRSI =
    {
        92,        /* lineNo */
        "minimum", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

emlrtRSInfo dc_emlrtRSI = {
    39,     /* lineNo */
    "find", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m" /* pathName
                                                                       */
};

emlrtRSInfo sc_emlrtRSI = {
    11,     /* lineNo */
    "rank", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m" /* pathName
                                                                        */
};

emlrtRSInfo bd_emlrtRSI =
    {
        44,          /* lineNo */
        "vAllOrAny", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" /* pathName */
};

emlrtRSInfo cd_emlrtRSI =
    {
        103,                  /* lineNo */
        "flatVectorAllOrAny", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" /* pathName */
};

emlrtRSInfo ld_emlrtRSI =
    {
        28,      /* lineNo */
        "colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

emlrtRSInfo md_emlrtRSI =
    {
        117,     /* lineNo */
        "colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

emlrtRSInfo pd_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" /* pathName */
};

emlrtRSInfo qd_emlrtRSI = {
    51,    /* lineNo */
    "div", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                          */
};

emlrtRSInfo rd_emlrtRSI = {
    259,                    /* lineNo */
    "assertCompatibleSize", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                          */
};

emlrtRSInfo sd_emlrtRSI = {
    52,      /* lineNo */
    "ixfun", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pathName
                                                                            */
};

emlrtRSInfo td_emlrtRSI = {
    45,                          /* lineNo */
    "applyBinaryScalarFunction", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

emlrtRSInfo ud_emlrtRSI = {
    66,                          /* lineNo */
    "applyBinaryScalarFunction", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

emlrtRSInfo vd_emlrtRSI = {
    127,        /* lineNo */
    "flatIter", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

emlrtRSInfo wd_emlrtRSI = {
    214,        /* lineNo */
    "flatIter", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyBinaryScalarFunction.m" /* pathName */
};

emlrtRSInfo yd_emlrtRSI = {
    99,        /* lineNo */
    "sumprod", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumpro"
    "d.m" /* pathName */
};

emlrtRSInfo de_emlrtRSI = {
    24,    /* lineNo */
    "cat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

emlrtRSInfo ee_emlrtRSI = {
    96,         /* lineNo */
    "cat_impl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

emlrtRSInfo pf_emlrtRSI = {
    33,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunctionInPlace.m" /* pathName */
};

emlrtRSInfo qf_emlrtRSI =
    {
        71,      /* lineNo */
        "power", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName
                                                                          */
};

emlrtRSInfo ph_emlrtRSI = {
    7,         /* lineNo */
    "getTime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\getTime.m" /* pathName */
};

emlrtRSInfo qh_emlrtRSI = {
    21,                     /* lineNo */
    "CoderTimeAPI/getTime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo rh_emlrtRSI = {
    148,                                  /* lineNo */
    "CoderTimeAPI/callEMLRTClockGettime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo
    fi_emlrtRSI =
        {
            61,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

emlrtRSInfo
    hi_emlrtRSI =
        {
            85,        /* lineNo */
            "qrsolve", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

emlrtRSInfo
    ti_emlrtRSI =
        {
            119,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

emlrtRSInfo
    ui_emlrtRSI =
        {
            128,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

emlrtRSInfo
    vi_emlrtRSI =
        {
            138,         /* lineNo */
            "LSQFromQR", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pathName */
};

emlrtRSInfo wi_emlrtRSI = {
    31,         /* lineNo */
    "xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

emlrtRSInfo xi_emlrtRSI = {
    102,              /* lineNo */
    "ceval_xunormqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xunormqr.m" /* pathName */
};

emlrtRSInfo il_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m" /* pathName
                                                                       */
};

emlrtRSInfo wl_emlrtRSI = {
    27,     /* lineNo */
    "sort", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pathName
                                                                         */
};

emlrtRSInfo ln_emlrtRSI = {
    374,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

emlrtRSInfo on_emlrtRSI = {
    294,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

emlrtRSInfo rn_emlrtRSI = {
    198,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

emlrtRSInfo un_emlrtRSI = {
    128,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

emlrtRSInfo vn_emlrtRSI = {
    126,            /* lineNo */
    "eml_gammainc", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pathName */
};

emlrtMCInfo e_emlrtMCI = {
    27,      /* lineNo */
    5,       /* colNo */
    "error", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\lang\\error.m" /* pName
                                                                       */
};

emlrtMCInfo g_emlrtMCI = {
    66,        /* lineNo */
    18,        /* colNo */
    "fprintf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pName
                                                                          */
};

emlrtMCInfo
    s_emlrtMCI =
        {
            53,        /* lineNo */
            19,        /* colNo */
            "flt2str", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\flt2str.m" /* pName */
};

emlrtRTEInfo b_emlrtRTEI = {
    271,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

emlrtRTEInfo j_emlrtRTEI = {
    44,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" /* pName */
};

emlrtRTEInfo k_emlrtRTEI = {
    47,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" /* pName */
};

emlrtRTEInfo m_emlrtRTEI = {
    19,             /* lineNo */
    23,             /* colNo */
    "scalexpAlloc", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc."
    "m" /* pName */
};

emlrtRTEInfo eb_emlrtRTEI =
    {
        83,         /* lineNo */
        5,          /* colNo */
        "fltpower", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pName
                                                                          */
};

emlrtRTEInfo gb_emlrtRTEI = {
    159,                    /* lineNo */
    13,                     /* colNo */
    "coderTimeCheckStatus", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pName */
};

emlrtRTEInfo jb_emlrtRTEI =
    {
        14,    /* lineNo */
        9,     /* colNo */
        "log", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m" /* pName
                                                                          */
};

emlrtRTEInfo kb_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

emlrtRTEInfo lb_emlrtRTEI = {
    276,            /* lineNo */
    13,             /* colNo */
    "eml_gammainc", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pName */
};

emlrtRTEInfo mb_emlrtRTEI = {
    356,            /* lineNo */
    13,             /* colNo */
    "eml_gammainc", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\specfun\\private\\eml_"
    "gammainc.m" /* pName */
};

emlrtRTEInfo ob_emlrtRTEI = {
    124,             /* lineNo */
    27,              /* colNo */
    "unaryMinOrMax", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\unaryMinOrMax.m" /* pName */
};

emlrtRTEInfo ac_emlrtRTEI =
    {
        28,      /* lineNo */
        9,       /* colNo */
        "colon", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                          */
};

emlrtRTEInfo nd_emlrtRTEI = {
    28,     /* lineNo */
    5,      /* colNo */
    "sort", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m" /* pName
                                                                         */
};

emlrtRTEInfo ce_emlrtRTEI = {
    218,      /* lineNo */
    20,       /* colNo */
    "mtimes", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pName */
};

emlrtRTEInfo
    vh_emlrtRTEI =
        {
            61,        /* lineNo */
            2,         /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

emlrtRTEInfo
    ei_emlrtRTEI =
        {
            119,       /* lineNo */
            5,         /* colNo */
            "qrsolve", /* fName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\qrsolve.m" /* pName */
};

const char_T cv8[26] = {'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                        'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                        'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

emlrtRSInfo pt_emlrtRSI = {
    66,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

emlrtRSInfo qt_emlrtRSI = {
    68,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

emlrtRSInfo ju_emlrtRSI = {
    27,      /* lineNo */
    "error", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\lang\\error.m" /* pathName
                                                                       */
};

emlrtRSInfo
    mu_emlrtRSI =
        {
            53,        /* lineNo */
            "flt2str", /* fcnName */
            "C:\\Program "
            "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+"
            "internal\\flt2str.m" /* pathName */
};

/* End of code generation (FSRfan_wrapper_data.c) */
