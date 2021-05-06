/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * LTSts_wrapper.c
 *
 * Code generation for function 'LTSts_wrapper'
 *
 */

/* Include files */
#include "LTSts_wrapper.h"
#include "FSRinvmdr.h"
#include "GYfilt.h"
#include "HUrho.h"
#include "LTSts.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_mexutil.h"
#include "LTSts_wrapper_types.h"
#include "RobRegrSize.h"
#include "abs.h"
#include "any.h"
#include "array2table.h"
#include "bc.h"
#include "chi2inv.h"
#include "colon.h"
#include "combineVectorElements.h"
#include "cos.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "eml_setop.h"
#include "error.h"
#include "fcdf.h"
#include "ifWhileCond.h"
#include "indexShapeCheck.h"
#include "int2str.h"
#include "inv.h"
#include "isequal.h"
#include "lsqcurvefit.h"
#include "mldivide.h"
#include "mtimes.h"
#include "normcdf.h"
#include "norminv.h"
#include "power.h"
#include "prctile.h"
#include "randsample.h"
#include "rank.h"
#include "round.h"
#include "rt_nonfinite.h"
#include "sin.h"
#include "sort.h"
#include "sprintf.h"
#include "sqrt.h"
#include "str2double.h"
#include "string1.h"
#include "subsets.h"
#include "sum.h"
#include "tcdf.h"
#include "zscore.h"
#include "zscoreFS.h"
#include "mwmathutil.h"
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 1844,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 2403,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRSInfo emlrtRSI = { 114,   /* lineNo */
  "LTSts_wrapper",                     /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LTSts_wrapper.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 2381,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 2127,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 2121,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 2691,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 2673,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 2663,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 2657,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 2654,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 2649,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 2647,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 2633,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 2626,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 2602,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 2600,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 2597,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 2596,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 2590,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 2588,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 2586,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 2581,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 2403,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 2370,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 2213,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 2209,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 2185,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 2182,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 2180,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 2172,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 2168,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 2165,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 2148,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 2147,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 2145,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 2144,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 2139,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 2118,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 2081,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 2080,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 2079,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 2076,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 2075,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 2067,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 2066,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 2065,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 2062,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 2060,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 2024,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 2022,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 2020,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 2018,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 2015,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 2014,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 2013,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 1984,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 1982,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 1979,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 1976,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 1974,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 1960,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 1959,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 1955,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 1953,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 1944,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 1932,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 1928,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 1927,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 1924,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 1914,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 1909,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 1904,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 1899,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 1873,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 1867,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 1844,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 1842,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 1840,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 1833,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 1829,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 1819,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 1812,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 1811,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 1810,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 1787,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 1754,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 1748,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 1740,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 1731,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 1724,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 1702,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 1698,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 1679,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 1660,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 1657,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 1653,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 1602,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 1595,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 1594,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 1580,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 1578,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 1521,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 1519,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 1499,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 1497,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 1493,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 1443,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 1359,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 1353,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 1352,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 1347,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 1329,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 1327,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 1319,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 1310,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 1307,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 1305,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 1266,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 1264,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 1236,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 1231,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 1224,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 1223,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 1220,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 1206,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 1201,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 1200,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 1197,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 1061,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 7,  /* lineNo */
  "ref/ref",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\ref.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 22, /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 19, /* lineNo */
  "setdiff",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\setdiff.m"/* pathName */
};

static emlrtRSInfo dr_emlrtRSI = { 17, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo er_emlrtRSI = { 38, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo fr_emlrtRSI = { 77, /* lineNo */
  "maximum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo gr_emlrtRSI = { 161,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ns_emlrtRSI = { 17, /* lineNo */
  "min",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"/* pathName */
};

static emlrtRSInfo os_emlrtRSI = { 40, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo ps_emlrtRSI = { 90, /* lineNo */
  "minimum",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo lt_emlrtRSI = { 11, /* lineNo */
  "rank",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\rank.m"/* pathName */
};

static emlrtRSInfo aab_emlrtRSI = { 16,/* lineNo */
  "nested_function/nested_function",   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\nested_function.m"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1257,  /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo b_emlrtMCI = { 1349,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 1972,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  2602,                                /* lineNo */
  38,                                  /* colNo */
  "yhat",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2602,                                /* lineNo */
  28,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 2647,  /* lineNo */
  36,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2647,                                /* lineNo */
  36,                                  /* colNo */
  "brobfinal",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2656,                                /* lineNo */
  23,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 2656,/* lineNo */
  23,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 2649,/* lineNo */
  35,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2649,                                /* lineNo */
  35,                                  /* colNo */
  "brobfinal",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2597,                                /* lineNo */
  40,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2597,                                /* lineNo */
  27,                                  /* colNo */
  "Xseldum",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2622,                                /* lineNo */
  16,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2621,                                /* lineNo */
  18,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2619,                                /* lineNo */
  18,                                  /* colNo */
  "X",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2590,                                /* lineNo */
  38,                                  /* colNo */
  "yhat",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2590,                                /* lineNo */
  28,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2615,                                /* lineNo */
  28,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2588,                                /* lineNo */
  23,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2586,                                /* lineNo */
  58,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 2586,/* lineNo */
  28,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2586,                                /* lineNo */
  28,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2586,                                /* lineNo */
  24,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 2595,/* lineNo */
  29,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2595,                                /* lineNo */
  29,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2605,                                /* lineNo */
  24,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2668,                                /* lineNo */
  5,                                   /* colNo */
  "B",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2214,                                /* lineNo */
  26,                                  /* colNo */
  "p_all",                             /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2210,                                /* lineNo */
  20,                                  /* colNo */
  "seq",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2165,                                /* lineNo */
  40,                                  /* colNo */
  "residuals",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 2165,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2165,                                /* lineNo */
  18,                                  /* colNo */
  "residuals",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 2081,/* lineNo */
  39,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  2081,                                /* lineNo */
  39,                                  /* colNo */
  "Xseldum",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 2081,/* lineNo */
  23,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2081,                                /* lineNo */
  23,                                  /* colNo */
  "Xseldum",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2080,                                /* lineNo */
  27,                                  /* colNo */
  "yhat",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 2080,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2080,                                /* lineNo */
  17,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 2080,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1936,                                /* lineNo */
  5,                                   /* colNo */
  "brobfinal",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 2076,/* lineNo */
  36,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2076,                                /* lineNo */
  36,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 1934,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 1934,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 2076,/* lineNo */
  23,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2076,                                /* lineNo */
  23,                                  /* colNo */
  "Xseldum",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1933,                                /* lineNo */
  11,                                  /* colNo */
  "Likloc",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1928,                                /* lineNo */
  9,                                   /* colNo */
  "Likloc",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1928,                                /* lineNo */
  31,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 1928,/* lineNo */
  31,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1927,                                /* lineNo */
  9,                                   /* colNo */
  "Likloc",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2118,                                /* lineNo */
  30,                                  /* colNo */
  "Xlshift",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 2118,/* lineNo */
  30,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1926,                                /* lineNo */
  21,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 1926,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2066,                                /* lineNo */
  27,                                  /* colNo */
  "yhat",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 2066,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2066,                                /* lineNo */
  17,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 2066,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2096,                                /* lineNo */
  13,                                  /* colNo */
  "weights",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 2096,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 1922,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 1922,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1920,                                /* lineNo */
  9,                                   /* colNo */
  "btmp",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 2091,/* lineNo */
  12,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2091,                                /* lineNo */
  12,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2090,                                /* lineNo */
  14,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 2090,/* lineNo */
  14,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2088,                                /* lineNo */
  14,                                  /* colNo */
  "X",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 2088,/* lineNo */
  14,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 2060,/* lineNo */
  33,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2060,                                /* lineNo */
  33,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2086,                                /* lineNo */
  20,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 2086,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 2060,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2060,                                /* lineNo */
  20,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 2085,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2085,                                /* lineNo */
  20,                                  /* colNo */
  "Xtrend",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2046,                                /* lineNo */
  9,                                   /* colNo */
  "seq",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  1,                                   /* colNo */
  "bstar",                             /* aName */
  "LTSts_wrapper",                     /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LTSts_wrapper.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1960,                                /* lineNo */
  25,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1856,                                /* lineNo */
  5,                                   /* colNo */
  "Weimod",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1726,                                /* lineNo */
  21,                                  /* colNo */
  "bestnumscale2",                     /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1855,                                /* lineNo */
  23,                                  /* colNo */
  "seq",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1735,                                /* lineNo */
  17,                                  /* colNo */
  "bestnumscale2",                     /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1672,                                /* lineNo */
  17,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1672,                                /* lineNo */
  35,                                  /* colNo */
  "betaini",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 1657,/* lineNo */
  35,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1657,                                /* lineNo */
  35,                                  /* colNo */
  "yin",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 1657,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1657,                                /* lineNo */
  24,                                  /* colNo */
  "Xfinal",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1819,                                /* lineNo */
  35,                                  /* colNo */
  "bestsubsetall",                     /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1812,                                /* lineNo */
  33,                                  /* colNo */
  "bestbetasall",                      /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1589,                                /* lineNo */
  13,                                  /* colNo */
  "Cr",                                /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1793,                                /* lineNo */
  9,                                   /* colNo */
  "allnumscale2",                      /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1811,                                /* lineNo */
  33,                                  /* colNo */
  "bestyhatall",                       /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 1644,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 1617,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 1571,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 1571,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 1570,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 1569,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 1557,/* lineNo */
  14,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 1557,/* lineNo */
  14,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 1512,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 1486,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 1486,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 2224,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 2224,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 2221,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 1468,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 1468,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 1262,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 1234,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 1234,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 1617,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 1617,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 1571,/* lineNo */
  34,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 1571,/* lineNo */
  34,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 1571,/* lineNo */
  28,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = { 1570,/* lineNo */
  26,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = { 1569,/* lineNo */
  33,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = { 1569,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = { 1512,/* lineNo */
  23,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = { 1512,/* lineNo */
  23,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = { 1234,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo lc_emlrtDCI = { 1234,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1855,                                /* lineNo */
  12,                                  /* colNo */
  "Weimod",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1589,                                /* lineNo */
  24,                                  /* colNo */
  "Cr",                                /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = { 1211,/* lineNo */
  22,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  1211,                                /* lineNo */
  22,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nc_emlrtDCI = { 1213,/* lineNo */
  22,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  1213,                                /* lineNo */
  22,                                  /* colNo */
  "Seq",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1223,                                /* lineNo */
  41,                                  /* colNo */
  "sstring",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 1235,/* lineNo */
  11,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  1236,                                /* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1241,                                /* lineNo */
  25,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1241,                                /* lineNo */
  27,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1255,                                /* lineNo */
  9,                                   /* colNo */
  "ARp",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1264,                                /* lineNo */
  25,                                  /* colNo */
  "y",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1264,                                /* lineNo */
  27,                                  /* colNo */
  "y",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1264,                                /* lineNo */
  33,                                  /* colNo */
  "y",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1264,                                /* lineNo */
  35,                                  /* colNo */
  "y",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1264,                                /* lineNo */
  19,                                  /* colNo */
  "Ylagged",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  1264,                                /* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1312,                                /* lineNo */
  23,                                  /* colNo */
  "otherind",                          /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1312,                                /* lineNo */
  25,                                  /* colNo */
  "otherind",                          /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = { 1528,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo pc_emlrtDCI = { 1528,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo qc_emlrtDCI = { 1572,/* lineNo */
  36,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo rc_emlrtDCI = { 1580,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo sc_emlrtDCI = { 1580,/* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo tc_emlrtDCI = { 1580,/* lineNo */
  40,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo uc_emlrtDCI = { 1580,/* lineNo */
  50,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo j_emlrtRTEI = { 1585,/* lineNo */
  15,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1586,                                /* lineNo */
  21,                                  /* colNo */
  "Cini",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1595,                                /* lineNo */
  20,                                  /* colNo */
  "Cr",                                /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo k_emlrtRTEI = { 1625,/* lineNo */
  11,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1597,                                /* lineNo */
  15,                                  /* colNo */
  "C",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  1597,                                /* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1647,                                /* lineNo */
  19,                                  /* colNo */
  "C",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1665,                                /* lineNo */
  35,                                  /* colNo */
  "betaini",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1665,                                /* lineNo */
  37,                                  /* colNo */
  "betaini",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1665,                                /* lineNo */
  19,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1665,                                /* lineNo */
  21,                                  /* colNo */
  "beta0",                             /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  1665,                                /* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1747,                                /* lineNo */
  13,                                  /* colNo */
  "brob",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1705,                                /* lineNo */
  20,                                  /* colNo */
  "WEIi",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  1705,                                /* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1729,                                /* lineNo */
  32,                                  /* colNo */
  "bestyhat",                          /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  1729,                                /* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1738,                                /* lineNo */
  28,                                  /* colNo */
  "bestyhat",                          /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  1738,                                /* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1727,                                /* lineNo */
  31,                                  /* colNo */
  "bestbetas",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  1727,                                /* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1736,                                /* lineNo */
  27,                                  /* colNo */
  "bestbetas",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { -1,  /* nDims */
  1736,                                /* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1728,                                /* lineNo */
  32,                                  /* colNo */
  "bestsubset",                        /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo j_emlrtECI = { -1,  /* nDims */
  1728,                                /* lineNo */
  21,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1737,                                /* lineNo */
  28,                                  /* colNo */
  "bestsubset",                        /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo k_emlrtECI = { -1,  /* nDims */
  1737,                                /* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 1785,/* lineNo */
  11,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1786,                                /* lineNo */
  28,                                  /* colNo */
  "bestyhatall",                       /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1787,                                /* lineNo */
  41,                                  /* colNo */
  "bestbetasall",                      /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1811,                                /* lineNo */
  50,                                  /* colNo */
  "numscale2ssorind",                  /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1811,                                /* lineNo */
  52,                                  /* colNo */
  "numscale2ssorind",                  /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1812,                                /* lineNo */
  50,                                  /* colNo */
  "numscale2ssorind",                  /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1812,                                /* lineNo */
  52,                                  /* colNo */
  "numscale2ssorind",                  /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1817,                                /* lineNo */
  44,                                  /* colNo */
  "bestbetastoadd",                    /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1817,                                /* lineNo */
  22,                                  /* colNo */
  "bestbetastoadd",                    /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo l_emlrtECI = { -1,  /* nDims */
  1817,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo de_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1819,                                /* lineNo */
  52,                                  /* colNo */
  "numscale2ssorind",                  /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1819,                                /* lineNo */
  54,                                  /* colNo */
  "numscale2ssorind",                  /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo m_emlrtECI = { -1,  /* nDims */
  1829,                                /* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo n_emlrtECI = { -1,  /* nDims */
  1833,                                /* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo fe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1840,                                /* lineNo */
  43,                                  /* colNo */
  "numscale2ssorind",                  /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1840,                                /* lineNo */
  45,                                  /* colNo */
  "numscale2ssorind",                  /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1791,                                /* lineNo */
  25,                                  /* colNo */
  "WEIibestrdiv2",                     /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo o_emlrtECI = { -1,  /* nDims */
  1791,                                /* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo p_emlrtECI = { -1,  /* nDims */
  1830,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo q_emlrtECI = { -1,  /* nDims */
  1835,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo r_emlrtECI = { -1,  /* nDims */
  1855,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo s_emlrtECI = { -1,  /* nDims */
  1823,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 1917,/* lineNo */
  11,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo t_emlrtECI = { -1,  /* nDims */
  1926,                                /* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo u_emlrtECI = { -1,  /* nDims */
  1928,                                /* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtDCInfo vc_emlrtDCI = { 1932,/* lineNo */
  29,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1932,                                /* lineNo */
  29,                                  /* colNo */
  "Likloc",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo v_emlrtECI = { -1,  /* nDims */
  1949,                                /* lineNo */
  11,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo je_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1955,                                /* lineNo */
  15,                                  /* colNo */
  "IndBestRes",                        /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1955,                                /* lineNo */
  17,                                  /* colNo */
  "IndBestRes",                        /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1959,                                /* lineNo */
  19,                                  /* colNo */
  "IndBestRes",                        /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1959,                                /* lineNo */
  21,                                  /* colNo */
  "IndBestRes",                        /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1960,                                /* lineNo */
  28,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1960,                                /* lineNo */
  30,                                  /* colNo */
  "Xsel",                              /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wc_emlrtDCI = { 2119,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2121,                                /* lineNo */
  71,                                  /* colNo */
  "brobfinal",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2121,                                /* lineNo */
  73,                                  /* colNo */
  "brobfinal",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo w_emlrtECI = { -1,  /* nDims */
  2162,                                /* lineNo */
  11,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo x_emlrtECI = { -1,  /* nDims */
  2168,                                /* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo y_emlrtECI = { -1,  /* nDims */
  1827,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo ab_emlrtECI = { -1, /* nDims */
  1840,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtDCInfo xc_emlrtDCI = { 2350,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo yc_emlrtDCI = { 2350,/* lineNo */
  34,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = { 1,  /* iFirst */
  6,                                   /* iLast */
  2350,                                /* lineNo */
  34,                                  /* colNo */
  "b_X",                               /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ad_emlrtDCI = { 2357,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2357,                                /* lineNo */
  24,                                  /* colNo */
  "b_trend",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bd_emlrtDCI = { 2359,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2359,                                /* lineNo */
  24,                                  /* colNo */
  "b_trend",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cd_emlrtDCI = { 2359,/* lineNo */
  46,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = { 1,  /* iFirst */
  11,                                  /* iLast */
  2359,                                /* lineNo */
  46,                                  /* colNo */
  "b_seaso",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo dd_emlrtDCI = { 2362,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = { 1,  /* iFirst */
  4,                                   /* iLast */
  2362,                                /* lineNo */
  19,                                  /* colNo */
  "b_trend",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2366,                                /* lineNo */
  21,                                  /* colNo */
  "b_expl",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ed_emlrtDCI = { 2366,/* lineNo */
  23,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2366,                                /* lineNo */
  23,                                  /* colNo */
  "b_expl",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fd_emlrtDCI = { 2369,/* lineNo */
  26,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = { 1,  /* iFirst */
  3,                                   /* iLast */
  2369,                                /* lineNo */
  26,                                  /* colNo */
  "b_varampl",                         /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2614,                                /* lineNo */
  29,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2614,                                /* lineNo */
  31,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2647,                                /* lineNo */
  59,                                  /* colNo */
  "selWithoutLastHarmonic",            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo df_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2647,                                /* lineNo */
  61,                                  /* colNo */
  "selWithoutLastHarmonic",            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo bb_emlrtECI = { -1, /* nDims */
  2656,                                /* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo ef_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  2673,                                /* lineNo */
  40,                                  /* colNo */
  "B",                                 /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo cb_emlrtECI = { -1, /* nDims */
  1822,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo db_emlrtECI = { -1, /* nDims */
  1754,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtECInfo eb_emlrtECI = { -1, /* nDims */
  1842,                                /* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtBCInfo ff_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1236,                                /* lineNo */
  18,                                  /* colNo */
  "Xseaso",                            /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gf_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  1224,                                /* lineNo */
  42,                                  /* colNo */
  "sstring",                           /* aName */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo vc_emlrtRTEI = { 1061,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 1067,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 1069,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 1120,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 1206,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 1211,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 1213,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 1218,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 1250,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 1234,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 114,/* lineNo */
  1,                                   /* colNo */
  "LTSts_wrapper",                     /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LTSts_wrapper.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 1241,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 1236,/* lineNo */
  30,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 1264,/* lineNo */
  22,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 1236,/* lineNo */
  48,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 1307,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 1305,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 1266,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 1236,/* lineNo */
  29,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 1468,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 2221,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 2224,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 1484,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 1486,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 1491,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 1512,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 1850,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 1497,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 1493,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 1539,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 1499,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo de_emlrtRTEI = { 1541,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 1542,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fe_emlrtRTEI = { 1544,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 1557,/* lineNo */
  14,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 1557,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 1569,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 1570,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 1571,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 1572,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 1603,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 1617,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 1580,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = { 1644,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = { 1586,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo re_emlrtRTEI = { 1786,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo te_emlrtRTEI = { 1787,/* lineNo */
  28,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = { 1653,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo we_emlrtRTEI = { 1591,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = { 1656,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 1798,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo af_emlrtRTEI = { 1657,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = { 1802,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = { 1657,/* lineNo */
  31,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo df_emlrtRTEI = { 1805,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = { 1684,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = { 1829,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = { 1693,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo if_emlrtRTEI = { 1699,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = { 1833,/* lineNo */
  30,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = { 1702,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lf_emlrtRTEI = { 1852,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = { 1647,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = { 1854,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo of_emlrtRTEI = { 1742,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = { 1860,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = { 1863,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = { 1940,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = { 1949,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = { 1899,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = { 2230,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = { 1913,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = { 1914,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = { 1960,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = { 1909,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = { 2022,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = { 2015,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = { 1914,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = { 2046,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo eg_emlrtRTEI = { 1919,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = { 2050,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = { 1922,/* lineNo */
  18,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = { 2085,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = { 2060,/* lineNo */
  15,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = { 2060,/* lineNo */
  29,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = { 2086,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = { 1922,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = { 1934,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = { 2090,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo og_emlrtRTEI = { 2088,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = { 2091,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = { 1926,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rg_emlrtRTEI = { 2066,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sg_emlrtRTEI = { 2095,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tg_emlrtRTEI = { 2075,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ug_emlrtRTEI = { 1934,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vg_emlrtRTEI = { 2096,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wg_emlrtRTEI = { 1928,/* lineNo */
  27,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = { 2068,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = { 2076,/* lineNo */
  15,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = { 2123,/* lineNo */
  14,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = { 2076,/* lineNo */
  32,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = { 2069,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = { 2118,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = { 2126,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = { 2125,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = { 2080,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = { 2129,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 2121,/* lineNo */
  61,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 2081,/* lineNo */
  15,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 2135,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 2120,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 2138,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = { 2081,/* lineNo */
  31,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo oh_emlrtRTEI = { 2119,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ph_emlrtRTEI = { 2082,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = { 2145,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = { 2148,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 2162,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo th_emlrtRTEI = { 2165,/* lineNo */
  8,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = { 2165,/* lineNo */
  30,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = { 2168,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = { 2204,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = { 2209,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = { 2210,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = { 2214,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = { 2245,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = { 2267,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo di_emlrtRTEI = { 2272,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = { 2279,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fi_emlrtRTEI = { 2277,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gi_emlrtRTEI = { 2381,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hi_emlrtRTEI = { 2370,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = { 2576,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = { 2581,/* lineNo */
  29,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = { 2581,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo li_emlrtRTEI = { 2586,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = { 2595,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = { 2586,/* lineNo */
  54,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = { 2612,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = { 2614,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo qi_emlrtRTEI = { 2588,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ri_emlrtRTEI = { 2621,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo si_emlrtRTEI = { 2619,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = { 2615,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = { 2590,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = { 2626,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = { 2596,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = { 2597,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = { 2597,/* lineNo */
  36,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = { 2649,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = { 70,/* lineNo */
  35,                                  /* colNo */
  "eml_setop",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = { 2647,/* lineNo */
  17,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = { 2656,/* lineNo */
  19,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = { 2602,/* lineNo */
  24,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = { 2101,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = { 1729,/* lineNo */
  42,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = { 1699,/* lineNo */
  13,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo ij_emlrtRTEI = { 1310,/* lineNo */
  1,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo jj_emlrtRTEI = { 1220,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo kj_emlrtRTEI = { 1262,/* lineNo */
  5,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = { 1563,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = { 1565,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = { 1566,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo oj_emlrtRTEI = { 1657,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo pj_emlrtRTEI = { 1,/* lineNo */
  18,                                  /* colNo */
  "LTSts_wrapper",                     /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA-MATLAB_Coder\\wrapper\\LTSts_wrapper.m"/* pName */
};

static emlrtRTEInfo qj_emlrtRTEI = { 1855,/* lineNo */
  23,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo rj_emlrtRTEI = { 1855,/* lineNo */
  12,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo sj_emlrtRTEI = { 1856,/* lineNo */
  12,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo tj_emlrtRTEI = { 2046,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo uj_emlrtRTEI = { 2210,/* lineNo */
  20,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo vj_emlrtRTEI = { 2214,/* lineNo */
  26,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo wj_emlrtRTEI = { 1589,/* lineNo */
  16,                                  /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRTEInfo xj_emlrtRTEI = { 1787,/* lineNo */
  9,                                   /* colNo */
  "LTSts",                             /* fName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pName */
};

static emlrtRSInfo eeb_emlrtRSI = { 68,/* lineNo */
  "fprintf",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m"/* pathName */
};

static emlrtRSInfo feb_emlrtRSI = { 1972,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo geb_emlrtRSI = { 1257,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

static emlrtRSInfo heb_emlrtRSI = { 1349,/* lineNo */
  "LTSts",                             /* fcnName */
  "D:\\MATLAB\\FSDAgit\\FSDA\\regression\\LTSts.m"/* pathName */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7]);
static const mxArray *emlrt_marshallOut(const real_T u);
static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [24]);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [66]);
static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [29]);
static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [94]);
static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [67]);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const char_T u[7])
{
  static const int32_T iv[2] = { 1, 7 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *g_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [24])
{
  static const int32_T iv[2] = { 1, 24 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 24, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [66])
{
  static const int32_T iv[2] = { 1, 66 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 66, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *i_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [29])
{
  static const int32_T iv[2] = { 1, 29 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 29, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *j_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [94])
{
  static const int32_T iv[2] = { 1, 94 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 94, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *k_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [67])
{
  static const int32_T iv[2] = { 1, 67 };

  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtCTX)sp, 67, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void LTSts_wrapper(const emlrtStack *sp, const emxArray_real_T *y, real_T
                   conflev, boolean_T dispresults, real_T h, boolean_T intercept,
                   const struct0_T *lshiftlocref, const struct1_T *lts, const
                   struct2_T *model, boolean_T msg, real_T nbestindexes,
                   boolean_T nocheck, const real_T nsamp_data[], const int32_T
                   nsamp_size[2], real_T refstepsALS, real_T reftolALS, real_T
                   SmallSampleCor, boolean_T yxsave, struct_LTSts_T *out,
                   emxArray_real_T *C)
{
  static const char_T b_cv[94] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f',
    ' ', 'a', 'u', 't', 'o', 'r', 'e', 'g', 'r', 'e', 's', 's', 'i', 'v', 'e',
    ' ', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', ' ', 'i', 's', ' ', 't',
    'o', 'o', ' ', 'b', 'i', 'g', ' ', 'a', 'n', 'd', ' ', 'c', 'a', 'n', ' ',
    'c', 'r', 'e', 'a', 't', 'e', ' ', 'm', 'o', 'd', 'e', 'l', ' ', 'i', 'n',
    's', 't', 'a', 'b', 'i', 'l', 'i', 't', 'y', ':', ' ', 'i', 't', ' ', 'i',
    's', ' ', 's', 'e', 't', ' ', 't', 'o', ' ', '6' };

  static const char_T b_seaso[88] = { 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b',
    'b', 'b', 'b', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', 'c',
    's', 'c', 's', 'c', 's', 'c', 's', 'c', 's', 'c', 'o', 'i', 'o', 'i', 'o',
    'i', 'o', 'i', 'o', 'i', 'o', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 's',
    'n', 's', '1', '1', '2', '2', '3', '3', '4', '4', '5', '5', '6', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
    ' ', ' ', ' ', ' ', ' ' };

  static const char_T b_cv3[67] = { 'N', 'u', 'm', 'b', 'e', 'r', ' ', 'o', 'f',
    ' ', 's', 'u', 'b', 's', 'e', 't', 's', ' ', 't', 'o', ' ', 'e', 'x', 't',
    'r', 'a', 'c', 't', ' ', 'g', 'r', 'e', 'a', 't', 'e', 'r', ' ', 't', 'h',
    'a', 'n', ' ', '(', 'n', ' ', 'p', ')', '.', ' ', 'I', 't', ' ', 'i', 's',
    ' ', 's', 'e', 't', ' ', 't', 'o', ' ', '(', 'n', ' ', 'p', ')' };

  static const char_T b_cv6[66] = { 'A', 't', 't', 'e', 'n', 't', 'i', 'o', 'n',
    ':', ' ', 't', 'h', 'e', 'r', 'e', ' ', 'w', 'a', 's', ' ', 'a', 'n', ' ',
    'e', 'x', 'a', 'c', 't', ' ', 'f', 'i', 't', '.', ' ', 'R', 'o', 'b', 'u',
    's', 't', ' ', 'e', 's', 't', 'i', 'm', 'a', 't', 'e', ' ', 'o', 'f', ' ',
    's', '^', '2', ' ', 'i', 's', ' ', '<', '1', 'e', '-', '7' };

  static const char_T b_AR[48] = { 'b', 'b', 'b', 'b', 'b', 'b', '_', '_', '_',
    '_', '_', '_', 'A', 'A', 'A', 'A', 'A', 'A', 'u', 'u', 'u', 'u', 'u', 'u',
    't', 't', 't', 't', 't', 't', 'o', 'o', 'o', 'o', 'o', 'o', 'R', 'R', 'R',
    'R', 'R', 'R', '1', '2', '3', '4', '5', '6' };

  static const char_T b_X[48] = { 'b', 'b', 'b', 'b', 'b', 'b', '_', '_', '_',
    '_', '_', '_', 'e', 'e', 'e', 'e', 'e', 'e', 'x', 'x', 'x', 'x', 'x', 'x',
    'p', 'p', 'p', 'p', 'p', 'p', 'l', 'l', 'l', 'l', 'l', 'l', 'X', 'X', 'X',
    'X', 'X', 'X', '1', '2', '3', '4', '5', '6' };

  static const char_T b_trend[32] = { 'b', 'b', 'b', 'b', '_', '_', '_', '_',
    't', 't', 't', 't', 'r', 'r', 'r', 'r', 'e', 'e', 'e', 'e', 'n', 'n', 'n',
    'n', 'd', 'd', 'd', 'd', '1', '2', '3', '4' };

  static const char_T cv9[29] = { 'L', 'e', 'v', 'e', 'l', ' ', 's', 'h', 'i',
    'f', 't', ' ', 'p', 'o', 's', 'i', 't', 'i', 'o', 'n', ' ', 't', '=', '%',
    '.', '0', 'f', '\\', 'n' };

  static const char_T b_cv1[28] = { 'T', 'h', 'e', ' ', 'L', 'T', 'S', ' ', 'm',
    'u', 's', 't', ' ', 'c', 'o', 'v', 'e', 'r', ' ', 'a', 't', ' ', 'l', 'e',
    'a', 's', 't', ' ' };

  static const char_T b_cv5[24] = { 'L', 'e', 'v', 'e', 'l', ' ', 's', 'h', 'i',
    'f', 't', ' ', 'f', 'o', 'r', ' ', 't', '=', '%', '.', '0', 'f', '\\', 'n' };

  static const char_T b_varampl[24] = { 'b', 'b', 'b', '_', '_', '_', 'v', 'v',
    'v', 'a', 'a', 'a', 'r', 'r', 'r', 'a', 'a', 'a', 'm', 'm', 'm', 'l', '2',
    '3' };

  static const char_T b_cv2[14] = { ' ', 'o', 'b', 's', 'e', 'r', 'v', 'a', 't',
    'i', 'o', 'n', 's', '.' };

  static const char_T cv8[8] = { 'b', '_', 'l', 's', 'h', 'i', 'f', 't' };

  static const char_T b_cv4[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  static const char_T cv7[5] = { 'L', 'T', 'S', 't', 's' };

  b_captured_var isemptyX;
  b_captured_var verLess2016b;
  c_captured_var Seq;
  c_captured_var Seqf;
  c_captured_var X;
  c_captured_var Xf;
  c_captured_var Xlshift;
  c_captured_var Xlshiftf;
  c_captured_var Xseaso;
  c_captured_var Xseasof;
  c_captured_var Xsel;
  c_captured_var Xtrend;
  c_captured_var beta;
  c_captured_var bsb;
  c_captured_var indlinsc;
  c_captured_var otherind;
  c_captured_var seq;
  c_captured_var yhat;
  c_captured_var yhatseaso;
  c_captured_var yin;
  captured_var b_refstepsALS;
  captured_var b_reftolALS;
  captured_var constr;
  captured_var lshiftYN;
  captured_var nexpl;
  captured_var s;
  captured_var seasonal;
  captured_var trend;
  captured_var varampl;
  d_captured_var b_weights;
  d_captured_var zerT1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack k_st;
  emlrtStack st;
  emlrtStack *r9;
  emxArray_boolean_T *Weights;
  emxArray_boolean_T *r2;
  emxArray_boolean_T *weightsst;
  emxArray_boolean_T *x;
  emxArray_char_T *sstring;
  emxArray_int32_T *ia;
  emxArray_int32_T *r1;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_int32_T *r8;
  emxArray_real_T *Cr;
  emxArray_real_T *WEIi;
  emxArray_real_T *WEIibestrdiv2;
  emxArray_real_T *Xfinal;
  emxArray_real_T *Ylagged;
  emxArray_real_T *allnumscale2;
  emxArray_real_T *b_C;
  emxArray_real_T *b_Xfinal;
  emxArray_real_T *b_out;
  emxArray_real_T *b_yin;
  emxArray_real_T *bestnumscale2;
  emxArray_real_T *bestsubset;
  emxArray_real_T *bestyhat;
  emxArray_real_T *betaini;
  emxArray_real_T *bfb_emlrtRSI;
  emxArray_real_T *brob;
  emxArray_real_T *brobLSH;
  emxArray_real_T *posvarampl;
  emxArray_real_T *r;
  emxArray_real_T *selWithoutLastHarmonic;
  emxArray_real_T *selWithoutLastHarmonic_tmp;
  emxArray_real_T *weights;
  emxArray_real_T *yhatrob;
  struct_T b_expl_temp;
  struct_T expl_temp;
  creal_T dc;
  real_T numscale2LSH[3];
  real_T options_nsamp_data[2];
  real_T varargin_22_data[2];
  real_T ARp;
  real_T a;
  real_T b_h;
  real_T bdp;
  real_T bestrdiv2;
  real_T d;
  real_T d1;
  real_T factor;
  real_T lshift;
  real_T ncomb;
  real_T p;
  real_T pini;
  real_T posLS;
  real_T stoprint;
  real_T sworst;
  int32_T b_Xseaso[2];
  int32_T b_varargin_22_size[2];
  int32_T c_size[2];
  int32_T lab_size[2];
  int32_T options_nsamp_size[2];
  int32_T sizes[2];
  int32_T tmp_size[2];
  int32_T varargin_22_size[2];
  int32_T b_end;
  int32_T b_i;
  int32_T b_input_sizes_idx_1;
  int32_T b_loop_ub;
  int32_T b_result;
  int32_T c_input_sizes_idx_1;
  int32_T c_loop_ub;
  int32_T c_yin;
  int32_T d_loop_ub;
  int32_T e_loop_ub;
  int32_T end;
  int32_T exitg2;
  int32_T f_loop_ub;
  int32_T g_loop_ub;
  int32_T h_loop_ub;
  int32_T hmin;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i_loop_ub;
  int32_T ia_data;
  int32_T ib_size;
  int32_T idx;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T nseaso;
  int32_T nz;
  int32_T result;
  char_T b_lab_data[248];
  char_T lab_data[248];
  char_T b_expl_data[96];
  char_T b_tmp_data[52];
  char_T tmp_data[10];
  char_T t8_Value_data[8];
  char_T b_sstring[2];
  int8_T input_sizes_idx_1;
  boolean_T b_varargin_22_data[2];
  boolean_T b_guard1 = false;
  boolean_T b_p;
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
  boolean_T guard1 = false;
  (void)nocheck;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  k_st.prev = &c_st;
  k_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtCTX)sp);
  emxInitStruct_captured_var(sp, &Xlshiftf, &fj_emlrtRTEI, true);
  emxInitStruct_captured_var1(sp, &Seqf, &ng_emlrtRTEI, true);
  emxInitStruct_captured_var1(sp, &Xf, &og_emlrtRTEI, true);
  emxInitStruct_captured_var1(sp, &Xseasof, &kg_emlrtRTEI, true);
  emxInitStruct_captured_var(sp, &yhatseaso, &ed_emlrtRTEI, true);

  /*  Wrapper function for LTSts. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Required input arguments */
  /*  y: a column vector of doubles of any length */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  conflev a scalar double */
  /*  dispresults a boolean */
  /*  h a scalar double */
  /*  intercept */
  /*  lshiftlocref: a struct (with 3 fields of type scalar double) */
  /*  field wlength a scalar of type double */
  /*  field lshiftlocref a scalar of type double */
  /*  field huberc a scalar of type double */
  /*  lts: a struct (with 5 fields of type scalar double) */
  /*  field bestr a scalar of type double */
  /*  field refsteps a scalar of type double */
  /*  field refstepsbestr a scalar of type double */
  /*  field reftol a scalar of type double */
  /*  field reftolbestr a scalar of type double */
  /*  model: a struct (with 6 fields of type scalar double) */
  /*  field lshift  a row vector of type double */
  /*  field s a scalar of type double */
  /*  field trend a scalar of type double */
  /*  field seasonal a scalar of type double */
  /*  field ARp a scalar of type double */
  /*  field X a missing value or a matrix of any dimension */
  /*  msg a boolean */
  /*  nbestindexes a scalar double */
  /*  nocheck is a boolean */
  /*  nsamp: a column vector of maximum length equal to 2 */
  /*  refstepsALS a scalar double */
  /*  refstepsALS a scalar double */
  /*  SmallSampleCor a scalar double */
  /*  yxsave is a boolean */
  st.site = &emlrtRSI;
  varargin_22_size[0] = nsamp_size[1];
  loop_ub = nsamp_size[0];
  for (i = 0; i < loop_ub; i++) {
    idx = nsamp_size[1];
    if (0 <= idx - 1) {
      varargin_22_data[varargin_22_size[0] * i] = nsamp_data[i];
    }
  }

  emxInitStruct_captured_var(&st, &yin, &vc_emlrtRTEI, true);
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  Xseasof.contents->size[0] = 0;
  Xseasof.contents->size[1] = 0;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  Xf.contents->size[0] = 0;
  Xf.contents->size[1] = 0;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;
  b_st.site = &cf_emlrtRSI;
  c_st.site = &df_emlrtRSI;

  /* LTSts extends LTS estimator to time series */
  /*  */
  /* <a href="matlab: docsearchFS('LTSts')">Link to the help function</a> */
  /*  */
  /*  It is possible to set a model with a trend (up to third order), a */
  /*  seasonality (constant or of varying amplitude and with a different number */
  /*  of harmonics) and a level shift (in this last case it is possible to */
  /*  specify the window in which level shift has to be searched for). */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*     y:         Time series to analyze. Vector. A row or a column vector */
  /*                with T elements, which contains the time series. */
  /*  */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*  */
  /*          bdp : breakdown point. Scalar. It measures the fraction of outliers */
  /*                the algorithm should resist. In this case any value greater */
  /*                than 0 but smaller or equal than 0.5 will do fine. Please */
  /*                specify h or bdp, but not both. */
  /*                  Example - 'bdp',0.4 */
  /*                  Data Types - double */
  /*  */
  /*      conflev : Confidence level. Scalar. Scalar between 0 and 1 containing */
  /*                Confidence level which is used to declare units as */
  /*                outliers. Usually conflev=0.95, 0.975 0.99 (individual */
  /*                alpha) or 1-0.05/n, 1-0.025/n, 1-0.01/n (simultaneous */
  /*                alpha). Default value is 0.975. */
  /*                  Example - 'conflev',0.99 */
  /*                  Data Types - double */
  /*  */
  /*   dispresults : Display results of final fit. Boolean. If dispresults is */
  /*                true,  labels of coefficients, estimated coefficients, */
  /*                standard errors, tstat and p-values are shown on the */
  /*                screen in a fully formatted way. The default value of */
  /*                dispresults is false. */
  /*                Example - 'dispresults',true */
  /*                Data Types - logical */
  /*  */
  /*  */
  /*            h : The number of observations that determined the least */
  /*                trimmed squares estimator. Scalar. h is an integer greater */
  /*                than p (number of columns of matrix X including the */
  /*                intercept but smaller then n. If the purpose is outlier */
  /*                detection than h does not have to be smaller than */
  /*                [0.5*(T+p+1)]. The default value of h is [0.75*T]. Note */
  /*                that if h is supplied input argument bdp is ignored. */
  /*                  Example - 'h',round(n*0.75) */
  /*                  Data Types - double */
  /*  */
  /*     intercept :  Indicator for constant term. true (default) | false. */
  /*                  Indicator for the constant term (intercept) in the fit, */
  /*                  specified as the comma-separated pair consisting of */
  /*                  'Intercept' and either true to include or false to remove */
  /*                  the constant term from the model. */
  /*                  Example - 'intercept',false */
  /*                  Data Types - boolean */
  /*  */
  /*  lshiftlocref: Parameters for local shift refinement. Structure. */
  /*                This option is used just if model.lshift is greater then 0. */
  /*                In order to precisely identify level shift position it is */
  /*                necessary to consider a local sum of squares varying the */
  /*                position of the level shift around the first tentative */
  /*                position keeping all the other parameters fixed. This */
  /*                structure contains the following fields: */
  /*                lshiftlocref.wlength = scalar greater than 0 which */
  /*                    identifies the length of the window. The default value */
  /*                    is 15, that is the tentative level shift position */
  /*                    varies from tl-15, tl-15, ..., tl+14, tl+15, where tl is */
  /*                    the best preliminary tentative level shift position. */
  /*               lshiftlocref.typeres = scalar which identifies the type of */
  /*                    residuals to consider. If typerres =1, the local */
  /*                    residuals sum of squares is based on huberized (scaled) */
  /*                    residuals (this is the default */
  /*                    choice) else raw residuals are used. */
  /*               lshiftlocref.huberc= tuning constant for Huber estimator just */
  /*                    in case lshiftlocref.typeres=1. The default value is 2. */
  /*                Example - 'lshiftlocref',lshiftlocref.typeres=2 */
  /*                Data Types - struct */
  /*  */
  /*        lts   : structure which controls a set of options of the */
  /*                maximization procedure. Structure. Structure with the */
  /*                following fields: */
  /*                    lts.bestr   = scalar defining number of "best betas" to */
  /*                                remember from the subsamples. These will be */
  /*                                later iterated until convergence. */
  /*                                The default is 20 (10 of them are the best */
  /*                                from previous iteration in case a level */
  /*                                shift is present). */
  /*                   lts.refsteps = scalar defining number of concentration */
  /*                                steps (default = 2). refsteps = 0 means */
  /*                                "raw-subsampling" without iterations. */
  /*              lts.refstepsbestr = scalar defining maximum number of refining */
  /*                                steps for each best subset (default=50). */
  /*                    lts.reftol  = scalar. Default value of tolerance for */
  /*                                the refining steps */
  /*                                The default value is 1e-6; */
  /*               lts.reftolbestr  = scalar. Default value of tolerance for */
  /*                                the refining steps for each of the best */
  /*                                subsets The default value is 1e-8. */
  /*                 Example - 'lts',lts */
  /*                 Data Types - struct */
  /*               Remark: if lts is an empty value all default values of */
  /*               structure lts will be used. */
  /*  */
  /*       model :  model type. Structure. A structure which specifies the model */
  /*                which will be used. The model structure contains the following */
  /*                fields: */
  /*                model.s = scalar (length of seasonal period). For monthly */
  /*                          data s=12 (default), for quartely data s=4, ... */
  /*                model.trend = scalar (order of the trend component). */
  /*                        trend = 0 implies no trend; */
  /*                        trend = 1 implies linear trend with intercept (default); */
  /*                        trend = 2 implies quadratic trend; */
  /*                        trend = 3 implies cubic trend. */
  /*                        Admissible values for trend are, 0, 1, 2 and 3. */
  /*                        In the paper RPRH to denote the order of the trend */
  /*                        symbol A is used. */
  /*                model.seasonal = scalar (integer specifying number of */
  /*                         frequencies, i.e. harmonics, in the seasonal */
  /*                         component. Possible values for seasonal are */
  /*                         $1, 2, ..., [s/2]$, where $[s/2]=floor(s/2)$. */
  /*                         For example: */
  /*                         if seasonal =1 (default) we have: */
  /*                         $\beta_1 \cos( 2 \pi t/s) + \beta_2 sin ( 2 \pi t/s)$; */
  /*                         if seasonal =2 we have: */
  /*                         $\beta_1 \cos( 2 \pi t/s) + \beta_2 \sin ( 2 \pi t/s) */
  /*                         + \beta_3 \cos(4 \pi t/s) + \beta_4 \sin (4 \pi t/s)$. */
  /*                         Note that when $s$ is even the sine term disappears */
  /*                         for $j=s/2$ and so the maximum number of */
  /*                         trigonometric parameters is $s-1$. */
  /*                         If seasonal is a number greater than 100 then it */
  /*                         is possible to specify how the seasonal component */
  /*                         grows over time. */
  /*                         For example, seasonal = 101 implies a seasonal */
  /*                         component which just uses one frequency */
  /*                         which grows linearly over time as follows: */
  /*                         $(1+\beta_3 t)\times ( \beta_1 cos( 2 \pi t/s) + */
  /*                         \beta_2 \sin ( 2 \pi t/s))$. */
  /*                         For example, seasonal =201 implies a seasonal */
  /*                         component which just uses one frequency */
  /*                         which grows in a quadratic way over time as */
  /*                         follows: */
  /*                         $(1+\beta_3 t + \beta_4  t^2)\times( \beta_1 \cos( */
  /*                         2 \pi t/s) + \beta_2 \sin ( 2 \pi t/s))$. */
  /*                         seasonal =0 implies a non seasonal model. */
  /*                        In the paper RPRH to denote the number of */
  /*                        frequencies of the seasonal component */
  /*                        symbol B is used, while symbol G is used to denote */
  /*                        the order of the trend of the seasonal component. */
  /*                        Therefore, for example, model.seasonal=201 */
  /*                        corresponds to B=1 and G=2, while model.seasonal=3 */
  /*                        corresponds to B=3 and G=0; */
  /*                model.X  =  matrix of size T-by-nexpl containing the */
  /*                          values of nexpl extra covariates which are likely */
  /*                          to affect y. */
  /*                model.lshift = scalar greater or equal than 0 or equal to -1, */
  /*                          or vector of positive integer values which */
  /*                          specifies whether it is necessary to include a */
  /*                          level shift component. lshift = 0 (default) */
  /*                          implies no level shift component. lshift = -1 */
  /*                          specifies the moment to start considering level */
  /*                          shifts automatically from specification of */
  /*                          lshift in position floor((T-1-p)/2). If lshift is */
  /*                          an interger greater then 0 or a vector of positive */
  /*                          integer values then it specifies the */
  /*                          moments where the level shift can be located. For */
  /*                          example if lshift =13 then the following */
  /*                          additional parameters are estimated */
  /*                           $\beta_{LS1}* I(t \geq beta_{LS2})$ where */
  /*                           $\beta_{LS1}$ is a real number and $\beta_{LS2}$ */
  /*                           is an integer which assumes values 13. */
  /*                           T-13. If lshift =[13 20] then the following */
  /*                          additional parameters are estimated */
  /*                           $\beta_{LS1}* I(t \geq beta_{LS2})$ where */
  /*                           $\beta_{LS1}$ is a real number and $\beta_{LS2}$ */
  /*                           is an integer which assumes values 13 or 20. */
  /*                        In the paper RPRH $\beta_{LS1}$ is denoted with */
  /*                        symbol $\delta_1$, while, $\beta_{LS2}$ is denoted */
  /*                        with symbol $\delta_2$. */
  /*                model.ARp = scalar greater or equal than 0 which */
  /*                          specifies the length of the autoregressive */
  /*                          component. The default value of model.ARp is 0, */
  /*                          that is there is no autoregressive component. */
  /*                  Example - 'model', model */
  /*                  Data Types - struct */
  /*                Remark: the default model is for monthly data with a linear */
  /*                trend (2 parameters) + seasonal component with just one */
  /*                harmonic (2 parameters), no additional explanatory */
  /*                variables and no level shift that is */
  /*                                model=struct; */
  /*                                model.s=12; */
  /*                                model.trend=1; */
  /*                                model.seasonal=1; */
  /*                                model.X=''; */
  /*                                model.lshift=0; */
  /*                Using the notation of the paper RPRH we have A=1, B=1; and */
  /*                $\delta_1=0$. */
  /*  */
  /*         msg  : Messages on the screen. Boolean. */
  /*                Scalar which controls whether to display or not messages */
  /*                on the screen. If msg==true (default) messages are displayed on */
  /*                the screen about estimated time to compute the estimator */
  /*                and the warnings about 'MATLAB:rankDeficientMatrix', */
  /*                'MATLAB:singularMatrix' and 'MATLAB:nearlySingularMatrix' */
  /*                are set to off else no message is displayed on the screen */
  /*                Example - 'msg',true */
  /*                Data Types - logical */
  /*  */
  /* nbestindexes : position of the best solutions. Positive integer. For each */
  /*                tentative level shift solution, it is interesenting to */
  /*                understand whether best solutions of target function come */
  /*                from subsets associated with current level shift solution */
  /*                or from best solutions from previous tentative level shift */
  /*                position.  The indexes from 1 to lts.bestr/2 are associated */
  /*                with subsets just extracted. The indexes from lts.bestr/2+1 */
  /*                to lts.bestr are associated with best solutions from */
  /*                previous tentative level shift. More precisely: */
  /*                index lts.bestr/2+1 is associated with best solution from */
  /*                previous tentative level shift; */
  /*                index lts.bestr/2+2 is associated with second best solution */
  /*                from previous tentative level shift; */
  /*                ... */
  /*                nbestindexes is an integer which specifies how many indexes */
  /*                we want to store. The default value of nbestindexes  is 3. */
  /*                Example - 'nbestindexes',5 */
  /*                Data Types - double */
  /*  */
  /*       nocheck: Check input arguments. Boolean. If nocheck is equal to true no */
  /*                check is performed on matrix y and matrix X. Notice that y */
  /*                and X are left unchanged. In other words the additioanl */
  /*                column of ones for the intercept is not added. As default */
  /*                nocheck=false. The controls on h, bdp and nsamp still remain. */
  /*                Example - 'nocheck',true */
  /*                Data Types - boolean */
  /*  */
  /*        nsamp : number of subsamples to extract. Scalar or vector of length 2. */
  /*                Vector of length 1 or 2 which controls the number of */
  /*                subsamples which will be extracted to find the robust */
  /*                estimator. If lshift>0 then nsamp(1) controls the number of */
  /*                subsets which have to be extracted to find the solution for */
  /*                t=lshift. nsamp(2) controls the number of subsets which */
  /*                have to be extracted to find the solution for t=lshift+1, */
  /*                lshift+2, ..., T-lshift. */
  /*                Note that nsamp(2) is generally smaller than nsamp(1) */
  /*                because in order to compute the best solution for */
  /*                t=lshift+1, lshift+2, ..., T-lshift, we use the lts.bestr/2 */
  /*                best solutions from previous t (after shifting by one the */
  /*                position of the level shift in the estimator of beta). If */
  /*                lshift is >0 the default value of nsamp is (500 250). If */
  /*                lshift is >0 and nsamp is supplied as a scalar the default */
  /*                is to extract [nsamp/2] subsamples for t=lshift+1, */
  /*                lshift+2, ... Therefore, for example, in order to extract */
  /*                600 subsamples for t=lshift and 300 subsamples for t= */
  /*                lshift+1 ... you can use nsamp =600 or nsamp=[600 300]. */
  /*                The default value of nsamp is 1000; */
  /*                  Example - 'nsamp',500 */
  /*                  Data Types - double */
  /*                Remark: if nsamp=0 all subsets will be extracted. */
  /*                They will be (n choose p). */
  /*  */
  /*  refstepsALS :   Maximum iterations inside ALS. Scalar. Maximum number */
  /*                  of iterations inside ALS routine. Default value of */
  /*                  tolerance for the refining steps inside ALS routine. The */
  /*                  default value is 50. */
  /*                  Example - 'refstepsALS',20 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*   reftolALS  :   Tolerance inside ALS. Scalar. Tolerance value of tolerance */
  /*                  for the refining steps inside ALS routine. The default */
  /*                  value is 1e-03. */
  /*                  Example - 'reftolALS',1e-05 */
  /*                  Data Types - double */
  /*  */
  /* SmallSampleCor:Small sample correction factor to control empirical size of */
  /*                the test.  Scalar equal to 1 or 2 (default) or 3 or 4. */
  /*                - If SmallSampleCor=1 in the reweighting step the nominal */
  /*                  threshold based on $\chi^2_{0.99}$ is multiplied by the */
  /*                  small sample correction factor which guarrantees that the */
  /*                  empirical size of the test is equal to the nominal size. */
  /*                  Given that the correction factors were obtained through */
  /*                  simulation for a linear model, the number of explanatory */
  /*                  which is used to compute the correction factor refers to */
  /*                  all explanatory variables except the non linear components */
  /*                  in the seasonal part of the model. For example, in a model */
  /*                  with linear trend 4 seasonal harmonics + level shift and */
  /*                  second order trend in the seasonal component the number of */
  /*                  explanatory variables used is 11 = total number of */
  /*                  variables -2 = 2 (linear trend) + 8 (4 seasonal harmonics) */
  /*                  +1 (level shift). */
  /*                - If SmallSampleCor =2 Gervini and Yohai procedure is called */
  /*                  with 'iterating' false and 'alpha' 0.99 is invoked, that is: */
  /*                  weights=GYfilt(stdres,'iterating',false,'alpha',0.99); */
  /*                - If SmallSampleCor =3 Gervini and Yohai procedure  called */
  /*                  with 'iterating' true and 'alpha' 0.99 is invoked, that is: */
  /*                  weights=GYfilt(stdres,'iterating',true,'alpha',0.99); */
  /*                - If SmallSampleCor =4  $\chi^2_{0.99}$ threshold is used that is: */
  /*                  weights = abs(stdres)<=sqrt(chi2inv(0.99,1)); */
  /*                  Example - 'SmallSampleCor',3 */
  /*                  Data Types - double */
  /*  */
  /*  */
  /*        yxsave : store X and y. Boolean. Scalar that is set to 1 to request */
  /*                 that the response vector y and data matrix X are saved */
  /*                 into the output structure out. */
  /*                 Default is 0, i.e. no saving is done. */
  /*                Example - 'yxsave',1 */
  /*                Data Types - logical */
  /*  */
  /*        plots : Plots on the screen. Scalar. */
  /*                If plots = 1, a two panel plot will be shown on the screen. */
  /*                The upper panel contains the orginal time series with */
  /*                fitted values. The bottom panel will contain the plot */
  /*                of robust residuals against index number. The confidence */
  /*                level which is used to draw the horizontal lines associated */
  /*                with the bands for the residuals is specified in input */
  /*                option conflev. If conflev is missing a nominal 0.975 */
  /*                confidence interval will be used. If plots =2 the following */
  /*                additional plots will be shown on the screen. */
  /*                1) Boxplot of the distribution of the lts.bestr values of */
  /*                the target function for each tentative level shift position; */
  /*                2) A two panel plot which shows the values of the local sum */
  /*                of squares varying the position of the level shift around */
  /*                the first tentative position keeping all the other */
  /*                parameters fixed. Top panel refers to Huberized residuals */
  /*                sum of squares and bottom panel refers to residual sum of */
  /*                squares. */
  /*                3) A plot which shows the indexes of the best nbestindexes */
  /*                solutions for each tentative level shift position. */
  /*                4) A plot which shows the relative frequency of inclusion */
  /*                of each unit in the best h-subset after lts.refsteps */
  /*                refining steps. */
  /*                5) A plot which shows the relative frequency of inclusion */
  /*                of each unit inside the best nbestindexes subsets which are */
  /*                brought to full convergence. */
  /*                The default value of plot is 0 i.e. no plot is shown on the */
  /*                screen. */
  /*                  Example - 'plots',1 */
  /*                  Data Types - double */
  /*  */
  /*        Remark: The user should only give the input arguments that have to */
  /*                change their default value. The name of the input arguments */
  /*                needs to be followed by their value. The order of the input */
  /*                arguments is of no importance. */
  /*  */
  /*   Output: */
  /*  */
  /*   out :     A structure containing the following fields */
  /*  */
  /*              out.B =   Matrix containing estimated beta coefficients, */
  /*                        (including the intercept when options.intercept=true) */
  /*                        standard errors, t-stat and p-values */
  /*                        The content of matrix B is as follows: */
  /*                        1st col = beta coefficients */
  /*                         The order of the beta coefficients is as follows: */
  /*                         1) trend elements (if present). If the trend is */
  /*                         of order two there are r+1 coefficients if the */
  /*                         intercept is present otherwise there are just r */
  /*                         components; */
  /*                         2) linear part of seasonal component 2, 4, 6, ..., */
  /*                         s-2, s-1 coefficients (if present); */
  /*                         3) coefficients associated with the matrix of */
  /*                         explanatory variables which have a potential effect */
  /*                         on the time series under study (X or */
  /*                         autoregressive part); If model.ARp>0 the first */
  /*                         model.ARp elements refer to the autoregressive */
  /*                         component. */
  /*                         4) non linear part of seasonal component, that is */
  /*                         varying amplitude. If varying amplitude is of order */
  /*                         k there are k coefficients (if present); */
  /*                         5) level shift component (if present). In out.B it */
  /*                         is shown just the real number which identifies the */
  /*                         magnitude of the upward (downward) level shift. */
  /*                         The integer which specifies the time in which */
  /*                         level shift takes place is given in output */
  /*                         out.posLS. */
  /*                        2nd col = standard errors; */
  /*                        3rd col = t-statistics; */
  /*                        4th col = p values. */
  /*           out.Btable = same thing out.B but n table format. */
  /*                out.h = The number of observations that have determined the */
  /*                        initial LTS estimator, i.e. the value of h. */
  /*               out.bs = Vector containing the units with the smallest p+k */
  /*                        squared residuals before the reweighting step, */
  /*                        where p is the total number of the parameters in */
  /*                        the model and p+k is smallest number of units such */
  /*                        that the design matrix is full rank. */
  /*                        out.bs can be used to initialize the forward */
  /*                        search. */
  /*          out.Hsubset = matrix of size T-by-(T-2*lshift) */
  /*                        containing units forming best H subset for each */
  /*                        tentative level shift which is considered. */
  /*                        Units belonging to */
  /*                        subset are given with their row number, units not */
  /*                        belonging to subset have missing values */
  /*                        ( Remark: T-2*lshift = length((lshift+1):(T-lshift)) ) */
  /*                        This output is present just if input option */
  /*                        model.lshift>0. */
  /*            out.posLS = scalar associated with best tentative level shift */
  /*                        position. */
  /*                        This output is present just if input option */
  /*                        model.lshift>0. */
  /*      out.numscale2 = matrix of size lts.bestr-by-(T-2*lshift) containing */
  /*                        (in the columns) the values of the lts.bestr smallest */
  /*                        values of the target function. Target function = truncated */
  /*                        residuals sum of squares. */
  /*      out.BestIndexes = matrix of size nbestindexes-by-(T-2*lshift) */
  /*                        containing in each column the indexes */
  /*                        associated with the best nbestindexes solutions. */
  /*                        The indexes from lts.bestr/2+1 to lts.bestr are */
  /*                        associated with best solutions from previous */
  /*                        tentative level shift. */
  /*                        More precisely: */
  /*                        index lts.bestr/2+1 is associated with best solution */
  /*                        from previous tentative level shift; */
  /*                        index lts.bestr/2+2 is associated with best solution */
  /*                        from previous tentative level shift. */
  /*                        This output is present just if input option */
  /*                        model.lshift>0. */
  /*          out.Likloc  = matrix of size (2*lshiftlocref.wlength+1)-by-3 */
  /*                        containing local sum of squares of residuals in */
  /*                        order to decide best position of level shift: */
  /*                        1st col = position of level shift; */
  /*                        2nd col = local sum of squares of huberized residuals; */
  /*                        3rd col = local sum of squares of raw residuals. */
  /*                        This output is present just if input option */
  /*                        model.lshift>0. */
  /*              out.RES = Matrix of size T-by-(T-lshift) containing scaled */
  /*                        residuals for all the T units of the original time */
  /*                        series monitored in steps lshift+1, lshift+2, ..., */
  /*                        T-lshift, where lshift+1 is the first tentative */
  /*                        level shift position, lshift +2 is the second level */
  /*                        shift position, and so on. This output is present */
  /*                        just if input option model.lshift>0. */
  /*             out.yhat = vector of fitted values after final (NLS=non linear */
  /*                        least squares) step. */
  /*                        $ (\hat \eta_1, \hat \eta_2, \ldots, \hat \eta_T)'$ */
  /*        out.residuals = Vector T-by-1 containing the scaled residuals from */
  /*                        after final NLS step. */
  /*          out.weights = Vector containing weights after adaptive */
  /*                        reweighting. The elements of */
  /*                        this vector are 0 or 1. These weights identify the */
  /*                        observations which are used to compute the final */
  /*                        NLS estimate. */
  /*            out.scale = Final scale estimate of the residuals using final weights. */
  /*                      \[ */
  /*                      \hat \sigma = cor \times \sum_{i \in S_m} [y_i- \eta(x_i,\hat \beta)]^2/(m-p) */
  /*                      \] */
  /*                      where $S_m$ is a set of cardinality $m$ which */
  /*                      contains the units not declared as outliers, $p$ */
  /*                      is the total number of estimated parameters and $cor$ */
  /*                      is a correction factor to make the estimator */
  /*                      consistent. */
  /*          out.conflev = confidence level which is used to declare outliers. */
  /*                        Remark: scalar out.conflev will be used to draw the */
  /*                        horizontal lines (confidence bands) in the plots */
  /*         out.outliers = vector containing the list of the units declared */
  /*                        as outliers using confidence level specified in */
  /*                        input scalar conflev. */
  /*    out.outliersPval  =  p-value of the units declared as outliers. */
  /*          out.singsub = Number of subsets wihtout full rank. Notice that if */
  /*                        this number is greater than 0.1*(number of */
  /*                        subsamples) a warning is produced on the screen */
  /*             out.invXX = $cov(\beta)/\hat \sigma^2$. p-by-p, square matrix. */
  /*                        If the model is linear out.invXX  is equal to */
  /*                        $(X'X)^{-1}$, else out.invXX is equal to $(A'A)^{-1}$ */
  /*                        where $A$ is the matrix of partial derivatives. More */
  /*                        precisely: */
  /*                        \[ */
  /*                        a_{i,j}=\frac{\partial \eta_i(x_i, \hat \beta)}{\partial \hat \beta_j} */
  /*                        \] */
  /*                        where */
  /*                        \begin{eqnarray} */
  /*                        y_i & = & \eta(x_i,\beta)+ \epsilon_i  \\ */
  /*                            & = & \eta_i +\epsilon_i \\ */
  /*                            & = & \eta(x_i,\hat \beta)+ e_i  \\ */
  /*                            & = & \hat \eta_i + e_i */
  /*                        \end{eqnarray} */
  /*  out.LastHarmonicPval = combined p value for the two coefficients of the */
  /*                         last harmonic (this p value comes from an F test). */
  /*  out.LevelShiftPval  =  p value of the level shift which takes into */
  /*                        account (this pvalue comes from Bonferronization to */
  /*                        take it account that if you impose a level shift, */
  /*                        this component is always found). */
  /*             out.y    = response vector y. */
  /*             out.X    = data matrix X containing trend, seasonal, expl */
  /*                        (with autoregressive component) and */
  /*                        lshift, if the model is linear or linearized */
  /*                        version of $\eta(x_i, \beta)$ if the model is non */
  /*                        linear containing in the columns partial */
  /*                        derivatives evaluated in correspondence of */
  /*                        out.B(:,1) with respect to each parameter. In other */
  /*                        words, the $i,j$-th element of out.X is */
  /*                        \[ */
  /*                        \frac{\partial \eta_i(x_i, \hat \beta)}{\partial \hat \beta_j} */
  /*                        \] */
  /*                        $j=1, 2, \ldots, p$, $i \in S_m$. */
  /*                        The size of this matrix is: */
  /*                        n-length(out.outliers)-by-p */
  /*                        The field is present only if option */
  /*                        yxsave is set to 1. */
  /*            out.class = 'LTSts'. */
  /*  */
  /*   Optional Output: */
  /*  */
  /*             C        : cell  containing the indices of the subsamples */
  /*                        extracted for computing the estimate (the so called */
  /*                        elemental sets) for each tentative level shift */
  /*                        position. */
  /*                        C{1} is associated with the subsamples for */
  /*                        first tentative level shift position; */
  /*                        C{2} is associated with the subsamples for */
  /*                        second tentative level shift position; */
  /*                        ... */
  /*                        C{end} is associated with the subsamples for */
  /*                        last tentative level shift position; */
  /*  */
  /*  See also LXS, wedgeplot */
  /*  */
  /*  References: */
  /*  */
  /*  Rousseeuw, P.J., Perrotta D., Riani M. and Hubert, M. (2018), Robust */
  /*  Monitoring of Many Time Series with Application to Fraud Detection, */
  /*  "Econometrics and Statistics". [RPRH] */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by Marco Riani, Domenico Perrotta, Peter */
  /*  Rousseeuw and Mia Hubert */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('LTSts')">Link to the help function</a> */
  /*  */
  /* $LastChangedDate:: 2019-12-15 21:09:21 #$: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % Simulated data with linear trend and level shift. */
  /*     % No seasonal component. */
  /*     rng('default') */
  /*     n=45; */
  /*     a=1; */
  /*     b=0.8; */
  /*     sig=1; */
  /*     seq=(1:n)'; */
  /*     y=a+b*seq+sig*randn(n,1); */
  /*     % Add a level shift in the simulated series */
  /*     y(round(n/2):end)=y(round(n/2):end)+10; */
  /*     % model with a linear trend, non seasonal and level shift */
  /*     model=struct; */
  /*     model.trend=1; */
  /*     model.seasonal=0; */
  /*     % Potential level shift position is investigated in positions: */
  /*     % t=10, t=11, ..., t=T-10. */
  /*     model.lshift=11:n-10; */
  /*     out=LTSts(y,'model',model,'plots',1); */
  /*     % Using the notation of the paper RPRH: A=1, B=1, G=0 and $\delta_1>0$. */
  /*     str=strcat('A=1, B=0, G=0, $\delta_2=',num2str(out.posLS),'$'); */
  /*     title(findobj(gcf,'-regexp','Tag','LTSts:ts'),str,'interpreter','latex'); */
  /* } */
  /* { */
  /*     % Airline data: linear trend + just one harmonic for seasonal component. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yr = repmat((1949:1960),12,1); */
  /*     mo = repmat((1:12)',1,12); */
  /*     time = datestr(datenum(yr(:),mo(:),1)); */
  /*     ts = timeseries(y(:),time,'name','AirlinePassengers'); */
  /*     ts.TimeInfo.Format = 'dd-mmm-yyyy'; */
  /*     tscol = tscollection(ts); */
  /*     % plot airline data */
  /*     plot(ts) */
  /*     % linear trend + just one harmonic for seasonal component */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=1;           % just one harmonic */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model,'dispresults',true); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=1, G=0, $\delta_1=0$'}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with linear trend and six harmonics for seasonal component. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=6;           % six harmonics */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=6, G=0, $\delta_1=0$'}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Model with linear trend, two harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend (1). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=102;         % two harmonics with time varying seasonality */
  /*     model.lshift=0;             % no level shift */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=2, G=1, $\delta_1=0$'}; */
  /*    title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with linear trend, six harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend (2). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=106;         % six harmonics with linear time varying seasonality */
  /*     model.lshift=0;             % no level shift */
  /*     % out=fitTSLS(y,'model',model); */
  /*     out=LTSts(y,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     numpar = {'model parameters:' , 'A=1, B=6, G=1, $\delta_1=0$'}; */
  /*    title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Contaminated time series with upward level shift. */
  /*     % Model with linear trend, six harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yLS=y; */
  /*     yLS(55:end)=yLS(55:end)+130; */
  /*     model=struct; */
  /*     model.trend=1;                          % linear trend */
  /*     model.s=12;                             % monthly time series */
  /*     model.seasonal=1; */
  /*     model.lshift=14:length(yLS)-13;         % impose level shift */
  /*     out=LTSts(yLS,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(yLS,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=1, G=0 and $\delta_1>0$. */
  /*     str=strcat('A=1, B=1, G=0, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /* } */
  /* { */
  /*     % Contaminated time series with downward level shift. */
  /*     % Model with linear trend, three harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend). */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     yLS=y; */
  /*     yLS(35:end)=yLS(35:end)-300; */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=103; */
  /*     model.lshift=26:length(yLS)-25; */
  /*     out=LTSts(yLS,'model',model,'msg',0); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(yLS,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=3, G=1 and $\delta_1>0$. */
  /*     str=strcat('A=1, B=3, G=1, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     % Model with an explanatory variable using log-transformed series. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Source: */
  /*     % http://datamarket.com/data/list/?q=provider:tsdl */
  /*  */
  /*     y=(y(:)); */
  /*     y1=log(y); */
  /*     % Model with linear trend, two harmonics for seasonal component and */
  /*     % varying amplitude using a linear trend). */
  /*     model=struct; */
  /*     model.trend=1;              % linear trend */
  /*     model.s=12;                 % monthly time series */
  /*     model.seasonal=106; */
  /*     model.lshift=0; */
  /*     model.X=randn(length(y),1); */
  /*     out=LTSts(y1,'model',model); */
  /*  */
  /*     close all */
  /*     % Plot real and fitted values */
  /*     plot(y1,'Linewidth',1.5); */
  /*     hold('on') */
  /*     plot(out.yhat,'r--','Linewidth',1.5) */
  /*     legend({'Real values','Fitted values'},'Location','SouthEast','interpreter','LaTeX','FontSize',14) */
  /*     % Using the notation of the paper RPRH: A=1, B=6, G=1 and $\delta_1>0$. */
  /*     str=strcat('A=1, B=6, G=1, $\delta_1=0$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(gca,numpar,'interpreter','LaTeX','FontSize',16); */
  /* } */
  /* { */
  /*     %% Example 1 used in the paper RPRH. */
  /*     % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     % Two short level shifts in opposite directions and an isolated outlier. */
  /*     % Add a level shift contamination plus some outliers. */
  /*     y1=y(:); */
  /*     y1(50:55)=y1(50:55)-300; */
  /*     y1(70:75)=y1(70:75)+300; */
  /*     y1(90:90)=y1(90:90)+300; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     % Estimate the parameters */
  /*     [out]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',1,'lshiftlocref',lshiftlocref,'msg',0); */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$. */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     axeslast=findobj('-regexp','Tag','LTSts:ts'); */
  /*     title(axeslast(end),numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /* } */
  /* { */
  /*     %% Example 2 used in the paper RPRH. */
  /*     % A persisting level shift and three isolated outliers, two of which in */
  /*     % proximity of the level shift. */
  /*         % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     close all */
  /*     y1=y(:); */
  /*     y1(68:end)=y1(68:end)+1300; */
  /*     y1(67)=y1(67)-600; */
  /*     y1(45)=y1(45)-800; */
  /*     y1(68:69)=y1(68:69)+800; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     % Estimate the parameters */
  /*     [out, varargout]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',1,'lshiftlocref',lshiftlocref,'msg',0); */
  /*  */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$. */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(findobj('-regexp','Tag','LTSts:ts'),numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /*  */
  /* } */
  /* { */
  /*     %% Example 3 used in the paper RPRH. */
  /*     % A persisting level shift preceded and followed in the proximity by */
  /*     % other two short level shifts, and an isolated outlier. */
  /*         % Load airline data. */
  /*     %   1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 */
  /*     y = [112  115  145  171  196  204  242  284  315  340  360  417    % Jan */
  /*          118  126  150  180  196  188  233  277  301  318  342  391    % Feb */
  /*          132  141  178  193  236  235  267  317  356  362  406  419    % Mar */
  /*          129  135  163  181  235  227  269  313  348  348  396  461    % Apr */
  /*          121  125  172  183  229  234  270  318  355  363  420  472    % May */
  /*          135  149  178  218  243  264  315  374  422  435  472  535    % Jun */
  /*          148  170  199  230  264  302  364  413  465  491  548  622    % Jul */
  /*          148  170  199  242  272  293  347  405  467  505  559  606    % Aug */
  /*          136  158  184  209  237  259  312  355  404  404  463  508    % Sep */
  /*          119  133  162  191  211  229  274  306  347  359  407  461    % Oct */
  /*          104  114  146  172  180  203  237  271  305  310  362  390    % Nov */
  /*          118  140  166  194  201  229  278  306  336  337  405  432 ]; % Dec */
  /*     y1=y(:); */
  /*     y1(50:55)=y1(50:55)-300; */
  /*     y1(68:end)=y1(68:end)-700; */
  /*     y1(70:75)=y1(70:75)+300; */
  /*     y1(90:90)=y1(90:90)+300; */
  /*     % Create structure specifying model */
  /*     model=struct; */
  /*     model.trend=2;                  % quadratic trend */
  /*     model.s=12;                     % monthly time series */
  /*     model.seasonal=204;             % number of harmonics */
  /*     model.lshift=41:length(y1)-40;  % position where monitoring level shift */
  /*     model.X=''; */
  /*     % Create structure lts specifying lts options */
  /*     lshiftlocref=struct; */
  /*     % Set window length for local refinement. */
  /*     lshiftlocref.wlength=10; */
  /*     % Set tuning constant to use insde Huber rho function */
  /*     lshiftlocref.huberc=1.5; */
  /*     close all */
  /*     % Estimate the parameters */
  /*     [out, varargout]=LTSts(y1,'model',model,'nsamp',500,... */
  /*        'plots',2,'lshiftlocref',lshiftlocref,'msg',0); */
  /*     % Using the notation of the paper RPRH: A=2, B=4, G=2 and $\delta_1>0$. */
  /*     str=strcat('A=2, B=4, G=2, $\delta_2=',num2str(out.posLS),'$'); */
  /*     numpar = {'model parameters:' , str}; */
  /*     title(findobj('-regexp','Tag','LTSts:ts'),numpar,'interpreter','LaTeX','FontSize',16); */
  /*  */
  /*     % generate the wedgeplot */
  /*     % wedgeplot(out,'transpose',true,'extradata',[y1 out.yhat]); */
  /*  */
  /* } */
  /* { */
  /*  */
  /*     %% Examples 4 and 5 used in the paper RPRH: trade data. */
  /*     close all; clear all; */
  /*     % the datasets */
  /*     load('P12119085'); */
  /*     load('P17049075'); */
  /*     Y4 = P12119085{:,1}; */
  /*     Y5 = P17049075{:,1}; */
  /*  */
  /*     % the model */
  /*     model           = struct; */
  /*     model.trend     = 1; */
  /*     model.seasonal  = 102; */
  /*     model.s         = 12; */
  /*     model.lshift    = 14:length(Y4)-13; */
  /*  */
  /*     % LTSts */
  /*     out4 = LTSts(Y4,'model',model,'plots',0,'dispresults',true,'msg',0); */
  /*     out5 = LTSts(Y5,'model',model,'plots',0,'dispresults',true,'msg',0); */
  /*  */
  /*     % the wedgeplot with the time series and the detected outliers and */
  /*     % level shift */
  /*     wedgeplot(out4,'extradata',Y4,'titl','P12119085, imports of plants from KN to UK'); */
  /*     wedgeplot(out5,'extradata',Y5,'titl','P17049075, imports of sugars from UA to LT'); */
  /*  */
  /*     % Forecasts with a 99.9 per cent confidence level */
  /*     nfore=10; */
  /*     outfore4 = forecastTS(out4,'model',model,'nfore',nfore,'conflev',0.999,'titl','LTSts forecast for P12119085, imports of plants from KN to UK'); */
  /*     outfore5 = forecastTS(out5,'model',model,'nfore',nfore,'conflev',0.999,'titl','LTSts forecast for P17049075, imports of sugars from UA to LT'); */
  /*  */
  /*     % Comparing with FS (needs conflev option) */
  /*  */
  /*     outLTS4 = LTSts(Y4,'model',model,'plots',1,'conflev',0.99,'msg',0); */
  /*     title(findobj(gcf,'Tag','LTSts:ts'),'P12119085, LTS with conflev=0.99'); */
  /*      */
  /*     outFRS4 = FSRts(Y4,'model',model,'plots',1); */
  /*     title(findobj(gcf,'Tag','FSRts:ts'),'P12119085, FS with default conflev'); */
  /*  */
  /*     outLTS5 = LTSts(Y5,'model',model,'plots',1,'conflev',0.99,'msg',0); */
  /*     title(findobj(gcf,'Tag','LTSts:ts'),'P17049075, LTS with conflev=0.99'); */
  /*  */
  /*     outFRS5 = FSRts(Y5,'model',model,'plots',1); */
  /*     title(findobj(gcf,'Tag','FSRts:ts'),'P17049075, FS with default conflev'); */
  /*  */
  /* } */
  /*  Beginning of code */
  /*  Input parameters checking */
  /*  setting global variable yin */
  i = yin.contents->size[0];
  yin.contents->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, yin.contents, i, &vc_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    yin.contents->data[i] = y->data[i];
  }

  /*  Extract size of the data */
  /*  seq is the vector which will contain linear time trend */
  emxInit_real_T(&st, &Cr, 2, &qe_emlrtRTEI, true);
  if (y->size[0] < 1) {
    Cr->size[0] = 1;
    Cr->size[1] = 0;
  } else {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = y->size[0];
    emxEnsureCapacity_real_T(&st, Cr, i, &wc_emlrtRTEI);
    loop_ub = y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      Cr->data[i] = (real_T)i + 1.0;
    }
  }

  emxInitStruct_captured_var(&st, &seq, &xc_emlrtRTEI, true);
  i = seq.contents->size[0];
  seq.contents->size[0] = Cr->size[1];
  emxEnsureCapacity_real_T(&st, seq.contents, i, &xc_emlrtRTEI);
  loop_ub = Cr->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq.contents->data[i] = Cr->data[i];
  }

  emxInitStruct_captured_var2(&st, &zerT1, &yc_emlrtRTEI, true);
  i = zerT1.contents->size[0];
  zerT1.contents->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(&st, zerT1.contents, i, &yc_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    zerT1.contents->data[i] = false;
  }

  emxInit_real_T(&st, &brob, 1, &ad_emlrtRTEI, true);

  /*  Set up values for default model */
  /*  linear trend */
  /*  monthly time series */
  /*  just one harmonic */
  /*  no extra explanatory variable */
  /*  no level shift */
  /*  no autoregressive component */
  /*  h to be implemented for LTS */
  /*  Set the default value for h (the default is 75 per cent of the data) */
  hmin = (int32_T)muDoubleScalarFloor(0.5 * (real_T)y->size[0]);

  /*  default value for ALS iterations */
  /*  default values for structure which contains the parameters associated */
  /*  with local level shift refinement */
  /*  nbestindexesdef is a positive integer which specifies how many indices of */
  /*  the smallest values of the target functions we want to retain. */
  /*  dispresultsdef Boolean about display results. */
  /*  User options */
  /*  singsub= scalar which will contain the number of singular subsets which */
  /*  are extracted (that is the subsets of size p which are not full rank) */
  /*  initialize brob which will be the vector of estimated robust regression */
  /*  coefficients */
  i = brob->size[0];
  brob->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, brob, i, &ad_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    brob->data[i] = -99.0;
  }

  /*  Write in structure 'options' the options chosen by the user */
  options_nsamp_size[0] = nsamp_size[1];
  options_nsamp_size[1] = nsamp_size[0];
  loop_ub_tmp = nsamp_size[0] * nsamp_size[1];
  if (0 <= loop_ub_tmp - 1) {
    memcpy(&options_nsamp_data[0], &varargin_22_data[0], loop_ub_tmp * sizeof
           (real_T));
  }

  /*  Default values for the optional parameters are set inside structure */
  /*  'options' */
  /*  Get model parameters */
  s.contents = model->s;

  /*  get periodicity of time series */
  trend.contents = model->trend;

  /*  get kind of  trend */
  seasonal.contents = model->seasonal;

  /*  get number of harmonics */
  lshift = model->lshift;

  /*  get level shift */
  /*  nbestindexes = indexes of the best  nbestindexes solutions for each */
  /*  tentative position of level shift */
  /*  Check if the optional user parameters are valid. */
  if (s.contents <= 0.0) {
    b_st.site = &bf_emlrtRSI;
    error(&b_st, s.contents);
  }

  b_st.site = &af_emlrtRSI;
  a = trend.contents;
  c_st.site = &hf_emlrtRSI;
  d_st.site = &if_emlrtRSI;
  do_vectors(a, (real_T *)&stoprint, c_size, (int32_T *)&ia_data, &nz, (int32_T *)
             &idx, &ib_size);
  if (c_size[1] == 0) {
    b_st.site = &ye_emlrtRSI;
    b_error(&b_st);
  }

  emxInit_real_T(&st, &bestnumscale2, 1, &lj_emlrtRTEI, true);
  emxInit_real_T(&st, &betaini, 1, &oj_emlrtRTEI, true);

  /*  Construct the matrices which are fixed in each step of the minimization */
  /*  procedure */
  b_st.site = &xe_emlrtRSI;
  c_st.site = &xe_emlrtRSI;
  power(&c_st, seq.contents, betaini);
  c_st.site = &xe_emlrtRSI;
  b_power(&c_st, seq.contents, bestnumscale2);
  c_st.site = &rf_emlrtRSI;
  d_st.site = &sf_emlrtRSI;
  empty_non_axis_sizes = (seq.contents->size[0] == y->size[0]);
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (betaini->size[0] != y->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (bestnumscale2->size[0] != y->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  emxInitStruct_captured_var1(&d_st, &Seq, &bd_emlrtRTEI, true);
  i = Seq.contents->size[0] * Seq.contents->size[1];
  Seq.contents->size[0] = y->size[0];
  Seq.contents->size[1] = 4;
  emxEnsureCapacity_real_T(&c_st, Seq.contents, i, &bd_emlrtRTEI);
  loop_ub = y->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i] = 1.0;
  }

  loop_ub = seq.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0]] = seq.contents->data[i];
  }

  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0] * 2] = betaini->data[i];
  }

  loop_ub = bestnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    Seq.contents->data[i + Seq.contents->size[0] * 3] = bestnumscale2->data[i];
  }

  /*  Define matrix which contains linear quadratic of cubic trend */
  emxInitStruct_captured_var1(&st, &Xtrend, &cd_emlrtRTEI, true);
  if (intercept) {
    d = trend.contents + 1.0;
    if (1.0 > d) {
      loop_ub = 0;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &mc_emlrtDCI, &st);
      }

      if (((int32_T)d < 1) || ((int32_T)d > 4)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 4, &qc_emlrtBCI, &st);
      }

      loop_ub = (int32_T)d;
    }

    idx = Seq.contents->size[0];
    i = Xtrend.contents->size[0] * Xtrend.contents->size[1];
    Xtrend.contents->size[0] = Seq.contents->size[0];
    Xtrend.contents->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, Xtrend.contents, i, &cd_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < idx; i1++) {
        Xtrend.contents->data[i1 + Xtrend.contents->size[0] * i] =
          Seq.contents->data[i1 + Seq.contents->size[0] * i];
      }
    }
  } else {
    d = trend.contents + 1.0;
    if (2.0 > d) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &nc_emlrtDCI, &st);
      }

      if (((int32_T)d < 1) || ((int32_T)d > 4)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 4, &rc_emlrtBCI, &st);
      }

      i1 = (int32_T)d;
    }

    loop_ub = Seq.contents->size[0];
    i2 = Xtrend.contents->size[0] * Xtrend.contents->size[1];
    Xtrend.contents->size[0] = Seq.contents->size[0];
    idx = i1 - i;
    Xtrend.contents->size[1] = idx;
    emxEnsureCapacity_real_T(&st, Xtrend.contents, i2, &dd_emlrtRTEI);
    for (i1 = 0; i1 < idx; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        Xtrend.contents->data[i2 + Xtrend.contents->size[0] * i1] =
          Seq.contents->data[i2 + Seq.contents->size[0] * (i + i1)];
      }
    }
  }

  /*  seasonal component */
  i = yhatseaso.contents->size[0];
  yhatseaso.contents->size[0] = 1;
  emxEnsureCapacity_real_T(&st, yhatseaso.contents, i, &ed_emlrtRTEI);
  yhatseaso.contents->data[0] = 0.0;
  emxInitStruct_captured_var1(&st, &Xseaso, &gd_emlrtRTEI, true);
  if (seasonal.contents > 0.0) {
    emxInit_char_T(&st, &sstring, 2, &jj_emlrtRTEI, true);
    b_st.site = &we_emlrtRSI;
    b_sprintf(&b_st, seasonal.contents, sstring);

    /*  sstring=num2str(seasonal); TODO */
    if (seasonal.contents > 100.0) {
      if (1 > sstring->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, sstring->size[1], &sc_emlrtBCI, &st);
      }

      b_st.site = &ve_emlrtRSI;
      dc = str2double(&b_st, sstring->data[0]);
      varampl.contents = dc.re;
      if (2 > sstring->size[1]) {
        emlrtDynamicBoundsCheckR2012b(2, 1, sstring->size[1], &gf_emlrtBCI, &st);
      }

      b_sstring[0] = sstring->data[1];
      if (3 > sstring->size[1]) {
        emlrtDynamicBoundsCheckR2012b(3, 1, sstring->size[1], &gf_emlrtBCI, &st);
      }

      b_sstring[1] = sstring->data[2];
      b_st.site = &ue_emlrtRSI;
      dc = b_str2double(&b_st, b_sstring);
      seasonal.contents = dc.re;
    } else {
      varampl.contents = 0.0;
    }

    emxFree_char_T(&sstring);
    guard1 = false;
    if (seasonal.contents < 1.0) {
      guard1 = true;
    } else {
      stoprint = s.contents / 2.0;
      stoprint = muDoubleScalarFloor(stoprint);
      if (seasonal.contents > stoprint) {
        guard1 = true;
      }
    }

    if (guard1) {
      stoprint = s.contents / 2.0;
      stoprint = muDoubleScalarFloor(stoprint);
      b_st.site = &te_emlrtRSI;
      c_error(&b_st, stoprint);
    }

    i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
    Xseaso.contents->size[0] = y->size[0];
    emxEnsureCapacity_real_T(&st, Xseaso.contents, i, &gd_emlrtRTEI);
    d = seasonal.contents * 2.0;
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &kc_emlrtDCI, &st);
    }

    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &lc_emlrtDCI, &st);
    }

    i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
    Xseaso.contents->size[1] = (int32_T)d;
    emxEnsureCapacity_real_T(&st, Xseaso.contents, i, &gd_emlrtRTEI);
    d = seasonal.contents * 2.0;
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &xb_emlrtDCI, &st);
    }

    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &yb_emlrtDCI, &st);
    }

    loop_ub = y->size[0] * (int32_T)d;
    for (i = 0; i < loop_ub; i++) {
      Xseaso.contents->data[i] = 0.0;
    }

    d = seasonal.contents;
    i = (int32_T)d;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, d, mxDOUBLE_CLASS, (int32_T)d,
      &i_emlrtRTEI, &st);
    if (0 <= (int32_T)d - 1) {
      b_loop_ub = seq.contents->size[0];
      nseaso = seq.contents->size[0];
      b_Xseaso[1] = 2;
    }

    emxInit_real_T(&st, &r, 2, &pj_emlrtRTEI, true);
    for (ia_data = 0; ia_data < i; ia_data++) {
      d = 2.0 * ((real_T)ia_data + 1.0);
      if (((int32_T)(d + -1.0) < 1) || ((int32_T)(d + -1.0) >
           Xseaso.contents->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(d + -1.0), 1,
          Xseaso.contents->size[1], &ff_emlrtBCI, &st);
      }

      sizes[0] = (int32_T)(d + -1.0) - 1;
      if (((int32_T)d < 1) || ((int32_T)d > Xseaso.contents->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, Xseaso.contents->size[1],
          &ff_emlrtBCI, &st);
      }

      sizes[1] = (int32_T)d - 1;
      stoprint = d * 3.1415926535897931;
      b_st.site = &se_emlrtRSI;
      i1 = bestnumscale2->size[0];
      bestnumscale2->size[0] = seq.contents->size[0];
      emxEnsureCapacity_real_T(&b_st, bestnumscale2, i1, &jd_emlrtRTEI);
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        bestnumscale2->data[i1] = stoprint * seq.contents->data[i1] / s.contents;
      }

      c_st.site = &se_emlrtRSI;
      b_cos(&c_st, bestnumscale2);
      i1 = betaini->size[0];
      betaini->size[0] = seq.contents->size[0];
      emxEnsureCapacity_real_T(&b_st, betaini, i1, &ld_emlrtRTEI);
      for (i1 = 0; i1 < nseaso; i1++) {
        betaini->data[i1] = stoprint * seq.contents->data[i1] / s.contents;
      }

      c_st.site = &se_emlrtRSI;
      b_sin(&c_st, betaini);
      c_st.site = &rf_emlrtRSI;
      d_st.site = &sf_emlrtRSI;
      if (betaini->size[0] != bestnumscale2->size[0]) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      i1 = r->size[0] * r->size[1];
      r->size[0] = bestnumscale2->size[0];
      r->size[1] = 2;
      emxEnsureCapacity_real_T(&c_st, r, i1, &pd_emlrtRTEI);
      loop_ub = bestnumscale2->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        r->data[i1] = bestnumscale2->data[i1];
      }

      loop_ub = betaini->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        r->data[i1 + r->size[0]] = betaini->data[i1];
      }

      b_Xseaso[0] = Xseaso.contents->size[0];
      emlrtSubAssignSizeCheckR2012b(&b_Xseaso[0], 2, &r->size[0], 2, &emlrtECI,
        &st);
      loop_ub = r->size[0];
      for (i1 = 0; i1 < 2; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          Xseaso.contents->data[i2 + Xseaso.contents->size[0] * sizes[i1]] =
            r->data[i2 + r->size[0] * i1];
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    emxFree_real_T(&r);

    /*  Remark: when s is even the sine term disapperas for j=s/2 and so the */
    /*  maximum number of trigonometric terms is s-1 */
    if (seasonal.contents == s.contents / 2.0) {
      if (1 > Xseaso.contents->size[1] - 1) {
        loop_ub = 0;
      } else {
        if (1 > Xseaso.contents->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Xseaso.contents->size[1],
            &tc_emlrtBCI, &st);
        }

        if ((Xseaso.contents->size[1] - 1 < 1) || (Xseaso.contents->size[1] - 1 >
             Xseaso.contents->size[1])) {
          emlrtDynamicBoundsCheckR2012b(Xseaso.contents->size[1] - 1, 1,
            Xseaso.contents->size[1], &uc_emlrtBCI, &st);
        }

        loop_ub = Xseaso.contents->size[1] - 1;
      }

      nz = Xseaso.contents->size[0] - 1;
      idx = Xseaso.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < idx; i1++) {
          Xseaso.contents->data[i1 + (nz + 1) * i] = Xseaso.contents->data[i1 +
            Xseaso.contents->size[0] * i];
        }
      }

      i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
      Xseaso.contents->size[0] = nz + 1;
      Xseaso.contents->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, Xseaso.contents, i, &id_emlrtRTEI);
    }

    nseaso = Xseaso.contents->size[1];
  } else {
    nseaso = 0;
    varampl.contents = 0.0;
    Xseaso.contents->size[0] = 0;
    Xseaso.contents->size[1] = 0;
  }

  emxInitStruct_captured_var1(&st, &X, &fd_emlrtRTEI, true);
  i = X.contents->size[0] * X.contents->size[1];
  X.contents->size[0] = model->X->size[0];
  X.contents->size[1] = model->X->size[1];
  emxEnsureCapacity_real_T(&st, X.contents, i, &fd_emlrtRTEI);
  loop_ub = model->X->size[0] * model->X->size[1];
  for (i = 0; i < loop_ub; i++) {
    X.contents->data[i] = model->X->data[i];
  }

  /*  Order of the autoregressive component */
  i = model->ARp.size[0] * model->ARp.size[1];
  if (1 > i) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i, &vc_emlrtBCI, &st);
  }

  ARp = model->ARp.data[0];
  if (model->ARp.data[0] > 6.0) {
    b_st.site = &geb_emlrtRSI;
    disp(&b_st, j_emlrt_marshallOut(&b_st, b_cv), &emlrtMCI);
    ARp = 6.0;
  }

  emxInit_real_T(&st, &weights, 1, &vh_emlrtRTEI, true);
  if (ARp > 0.0) {
    emxInit_real_T(&st, &Ylagged, 2, &kj_emlrtRTEI, true);

    /*  Ylagged = matrix which contains lagged values of Y */
    i = Ylagged->size[0] * Ylagged->size[1];
    Ylagged->size[0] = y->size[0];
    emxEnsureCapacity_real_T(&st, Ylagged, i, &hd_emlrtRTEI);
    if (ARp != (int32_T)muDoubleScalarFloor(ARp)) {
      emlrtIntegerCheckR2012b(ARp, &wb_emlrtDCI, &st);
    }

    i = (int32_T)ARp;
    i1 = Ylagged->size[0] * Ylagged->size[1];
    Ylagged->size[1] = (int32_T)ARp;
    emxEnsureCapacity_real_T(&st, Ylagged, i1, &hd_emlrtRTEI);
    for (ia_data = 0; ia_data < i; ia_data++) {
      if (1 > y->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, y->size[0], &wc_emlrtBCI, &st);
      }

      if ((ia_data + 1 < 1) || (ia_data + 1 > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(ia_data + 1, 1, y->size[0], &xc_emlrtBCI,
          &st);
      }

      c_size[0] = 1;
      c_size[1] = ia_data + 1;
      b_st.site = &re_emlrtRSI;
      indexShapeCheck(&b_st, y->size[0], c_size);
      loop_ub = (int32_T)((real_T)y->size[0] - ((real_T)ia_data + 1.0));
      if (1 > loop_ub) {
        loop_ub = 0;
      } else {
        if (1 > y->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, y->size[0], &yc_emlrtBCI, &st);
        }

        if (loop_ub > y->size[0]) {
          emlrtDynamicBoundsCheckR2012b(loop_ub, 1, y->size[0], &ad_emlrtBCI,
            &st);
        }
      }

      c_size[0] = 1;
      c_size[1] = loop_ub;
      b_st.site = &re_emlrtRSI;
      indexShapeCheck(&b_st, y->size[0], c_size);
      if ((ia_data + 1 < 1) || (ia_data + 1 > Ylagged->size[1])) {
        emlrtDynamicBoundsCheckR2012b(ia_data + 1, 1, Ylagged->size[1],
          &bd_emlrtBCI, &st);
      }

      i1 = weights->size[0];
      weights->size[0] = (ia_data + loop_ub) + 1;
      emxEnsureCapacity_real_T(&st, weights, i1, &kd_emlrtRTEI);
      for (i1 = 0; i1 <= ia_data; i1++) {
        weights->data[i1] = y->data[i1];
      }

      for (i1 = 0; i1 < loop_ub; i1++) {
        weights->data[(i1 + ia_data) + 1] = y->data[i1];
      }

      emlrtSubAssignSizeCheckR2012b(&Ylagged->size[0], 1, &weights->size[0], 1,
        &b_emlrtECI, &st);
      loop_ub = weights->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Ylagged->data[i1 + Ylagged->size[0] * ia_data] = weights->data[i1];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    b_st.site = &qe_emlrtRSI;
    c_st.site = &qg_emlrtRSI;
    if ((Ylagged->size[0] != 0) && (Ylagged->size[1] != 0)) {
      result = Ylagged->size[0];
    } else if ((model->X->size[0] != 0) && (model->X->size[1] != 0)) {
      result = model->X->size[0];
    } else {
      result = Ylagged->size[0];
      if (model->X->size[0] > Ylagged->size[0]) {
        result = model->X->size[0];
      }
    }

    d_st.site = &sf_emlrtRSI;
    if ((Ylagged->size[0] != result) && ((Ylagged->size[0] != 0) &&
         (Ylagged->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((model->X->size[0] != result) && ((model->X->size[0] != 0) && (model->
          X->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((Ylagged->size[0] != 0) && (Ylagged->size[1] !=
          0))) {
      input_sizes_idx_1 = (int8_T)Ylagged->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((model->X->size[0] != 0) && (model->X->size[1]
          != 0))) {
      sizes[1] = model->X->size[1];
    } else {
      sizes[1] = 0;
    }

    b_input_sizes_idx_1 = sizes[1];
    i = X.contents->size[0] * X.contents->size[1];
    X.contents->size[0] = result;
    X.contents->size[1] = input_sizes_idx_1 + sizes[1];
    emxEnsureCapacity_real_T(&st, X.contents, i, &od_emlrtRTEI);
    loop_ub = input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < result; i1++) {
        X.contents->data[i1 + X.contents->size[0] * i] = Ylagged->data[i1 +
          result * i];
      }
    }

    emxFree_real_T(&Ylagged);
    loop_ub = sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < result; i1++) {
        X.contents->data[i1 + X.contents->size[0] * (i + input_sizes_idx_1)] =
          model->X->data[i1 + result * i];
      }
    }
  }

  /*  nexpl = number of potential explanatory variables */
  isemptyX.contents = ((X.contents->size[0] == 0) || (X.contents->size[1] == 0));
  if (isemptyX.contents) {
    nexpl.contents = 0.0;
  } else {
    nexpl.contents = X.contents->size[1];
  }

  /*  pini = number of parameters in the linear model without level shifts nor */
  /*  varying amplitude */
  /*  ntrend = number of trend parameters, */
  /*  nseaso = number of parameters associated with the harmonics, */
  /*  nexpl = number of explanatory variables, */
  pini = (real_T)((uint32_T)Xtrend.contents->size[1] + nseaso) + nexpl.contents;

  /*  p = total number of parameters in the model */
  /*  nini + */
  /*  varampl = number of parameters involving time varying trend, */
  /*  + 2 additional parameters if there is a level shift component */
  lshiftYN.contents = 0.0;
  if ((model->lshift == -1.0) || (model->lshift > 0.0)) {
    lshiftYN.contents = 1.0;
  }

  p = (pini + varampl.contents) + lshiftYN.contents * 2.0;

  /* automatic specification of lshift which takes into account the fact that */
  /* at line 217 of FSRinvmdr the degrees of freedom mm-p must be positive. */
  /* Being mm the length of LSH = (lshift+1):(T-lshift), mm-p>0 can be written as: */
  /* (T-lshift)-(lshift+1) > p -->  2*lshift < T-1-p  --> lshift < (T-1-p)/2 */
  if (model->lshift == -1.0) {
    lshift = muDoubleScalarFloor((((real_T)y->size[0] - 1.0) - p) / 2.0);
  }

  /*  indexes of linear part of seasonal component */
  emxInitStruct_captured_var1(&st, &indlinsc, &nd_emlrtRTEI, true);
  if (seasonal.contents < 6.0) {
    b_st.site = &pe_emlrtRSI;
    a = trend.contents + 2.0;
    stoprint = (trend.contents + 1.0) + seasonal.contents * 2.0;
    c_st.site = &rg_emlrtRSI;
    if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(stoprint)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, indlinsc.contents, i, &nd_emlrtRTEI);
      indlinsc.contents->data[0] = rtNaN;
    } else if (stoprint < a) {
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 0;
    } else if ((muDoubleScalarIsInf(a) || muDoubleScalarIsInf(stoprint)) && (a ==
                stoprint)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, indlinsc.contents, i, &nd_emlrtRTEI);
      indlinsc.contents->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(a) == a) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor(stoprint - a);
      indlinsc.contents->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&c_st, indlinsc.contents, i, &nd_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        indlinsc.contents->data[i] = a + (real_T)i;
      }
    } else {
      d_st.site = &sg_emlrtRSI;
      eml_float_colon(&d_st, a, stoprint, indlinsc.contents);
    }
  } else {
    b_st.site = &oe_emlrtRSI;
    a = trend.contents + 2.0;
    stoprint = ((trend.contents + 1.0) + seasonal.contents * 2.0) - 1.0;
    c_st.site = &rg_emlrtRSI;
    if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(stoprint)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, indlinsc.contents, i, &md_emlrtRTEI);
      indlinsc.contents->data[0] = rtNaN;
    } else if (stoprint < a) {
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 0;
    } else if ((muDoubleScalarIsInf(a) || muDoubleScalarIsInf(stoprint)) && (a ==
                stoprint)) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      indlinsc.contents->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, indlinsc.contents, i, &md_emlrtRTEI);
      indlinsc.contents->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(a) == a) {
      i = indlinsc.contents->size[0] * indlinsc.contents->size[1];
      indlinsc.contents->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor(stoprint - a);
      indlinsc.contents->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&c_st, indlinsc.contents, i, &md_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        indlinsc.contents->data[i] = a + (real_T)i;
      }
    } else {
      d_st.site = &sg_emlrtRSI;
      eml_float_colon(&d_st, a, stoprint, indlinsc.contents);
    }
  }

  if (muDoubleScalarIsNaN(p)) {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = 1;
    emxEnsureCapacity_real_T(&st, Cr, i, &wc_emlrtRTEI);
    Cr->data[0] = rtNaN;
  } else if (p < 1.0) {
    Cr->size[0] = 1;
    Cr->size[1] = 0;
  } else if (muDoubleScalarIsInf(p) && (1.0 == p)) {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    Cr->size[1] = 1;
    emxEnsureCapacity_real_T(&st, Cr, i, &wc_emlrtRTEI);
    Cr->data[0] = rtNaN;
  } else {
    i = Cr->size[0] * Cr->size[1];
    Cr->size[0] = 1;
    loop_ub = (int32_T)muDoubleScalarFloor(p - 1.0);
    Cr->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(&st, Cr, i, &wc_emlrtRTEI);
    for (i = 0; i <= loop_ub; i++) {
      Cr->data[i] = (real_T)i + 1.0;
    }
  }

  emxInitStruct_captured_var1(&st, &otherind, &ij_emlrtRTEI, true);
  emxInit_int32_T(&st, &ia, 1, &pj_emlrtRTEI, true);
  b_st.site = &ne_emlrtRSI;
  c_st.site = &vg_emlrtRSI;
  d_st.site = &if_emlrtRSI;
  b_do_vectors(&d_st, Cr, indlinsc.contents, otherind.contents, ia, &ib_size);
  if (lshiftYN.contents == 1.0) {
    if (1 > otherind.contents->size[1] - 1) {
      i = 0;
    } else {
      if (1 > otherind.contents->size[1]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, otherind.contents->size[1],
          &cd_emlrtBCI, &st);
      }

      if ((otherind.contents->size[1] - 1 < 1) || (otherind.contents->size[1] -
           1 > otherind.contents->size[1])) {
        emlrtDynamicBoundsCheckR2012b(otherind.contents->size[1] - 1, 1,
          otherind.contents->size[1], &dd_emlrtBCI, &st);
      }

      i = otherind.contents->size[1] - 1;
    }

    i1 = otherind.contents->size[0] * otherind.contents->size[1];
    otherind.contents->size[1] = i;
    emxEnsureCapacity_real_T(&st, otherind.contents, i1, &hd_emlrtRTEI);
  }

  /*  If the number of all possible subsets is <10000 the default is to extract */
  /*  all subsets otherwise just 10000. Notice that we use bc, a fast version */
  /*  of nchoosek. One may also use the approximation */
  /*  floor(exp(gammaln(n+1)-gammaln(n-p+1)-gammaln(pini+1))+0.5) */
  b_st.site = &me_emlrtRSI;
  ncomb = bc(&b_st, y->size[0], pini);

  /*  And check if the optional user parameters are reasonable. */
  /*  Check h and bdp The user has only specified h: no need to specify bdp. */
  if (h < hmin) {
    b_st.site = &le_emlrtRSI;
    int2str(&b_st, hmin, tmp_data, c_size);
    tmp_size[0] = 1;
    tmp_size[1] = c_size[1] + 42;
    for (i = 0; i < 28; i++) {
      b_tmp_data[i] = b_cv1[i];
    }

    loop_ub = c_size[1];
    if (0 <= loop_ub - 1) {
      memcpy(&b_tmp_data[28], &tmp_data[0], loop_ub * sizeof(char_T));
    }

    for (i = 0; i < 14; i++) {
      b_tmp_data[(i + c_size[1]) + 28] = b_cv2[i];
    }

    b_st.site = &le_emlrtRSI;
    d_error(&b_st, b_tmp_data, tmp_size);
  } else if (h >= y->size[0]) {
    b_st.site = &ke_emlrtRSI;
    e_error(&b_st);
  }

  bdp = 1.0 - h / (real_T)y->size[0];

  /*  the user has only specified bdp: h is defined accordingly */
  /*  Check number of subsamples to extract */
  b_varargin_22_size[0] = nsamp_size[1];
  b_varargin_22_size[1] = nsamp_size[0];
  for (i = 0; i < loop_ub_tmp; i++) {
    b_varargin_22_data[i] = (varargin_22_data[i] > ncomb);
  }

  b_st.site = &je_emlrtRSI;
  if (ifWhileCond(b_varargin_22_data, b_varargin_22_size)) {
    if (msg) {
      b_st.site = &heb_emlrtRSI;
      disp(&b_st, k_emlrt_marshallOut(&b_st, b_cv3), &b_emlrtMCI);
    }

    options_nsamp_size[0] = 1;
    options_nsamp_size[1] = 1;
    options_nsamp_data[0] = 0.0;
  } else {
    b_varargin_22_size[0] = nsamp_size[1];
    b_varargin_22_size[1] = nsamp_size[0];
    for (i = 0; i < loop_ub_tmp; i++) {
      b_varargin_22_data[i] = (varargin_22_data[i] < 0.0);
    }

    b_st.site = &ie_emlrtRSI;
    if (ifWhileCond(b_varargin_22_data, b_varargin_22_size)) {
      b_st.site = &he_emlrtRSI;
      f_error(&b_st);
    }
  }

  b_h = muDoubleScalarFloor(h);

  /*  Number of data points on which estimates are based */
  /*  Number of subsets to extract */
  varargin_22_size[0] = options_nsamp_size[0];
  varargin_22_size[1] = options_nsamp_size[1];
  loop_ub = options_nsamp_size[0] * options_nsamp_size[1];
  for (i = 0; i < loop_ub; i++) {
    varargin_22_data[i] = options_nsamp_data[i] / 2.0;
  }

  b_st.site = &ge_emlrtRSI;
  b_round(varargin_22_data, varargin_22_size);

  /*  small sample correction factor */
  if (varampl.contents > 0.0) {
    /*  Convergence criteria inside ALS loop */
    b_reftolALS.contents = reftolALS;
    b_refstepsALS.contents = refstepsALS;
    verLess2016b.contents = false;
  } else {
    verLess2016b.contents = false;
    b_reftolALS.contents = 0.0;
    b_refstepsALS.contents = 0.0;
  }

  constr.contents = 0.0;

  /*  Confidence level which is used for outlier detection */
  /*  Scalar which controls the messages displayed on the screen */
  if (lshiftYN.contents == 1.0) {
    /*  If a level shift is present, it is necessary to */
    /*  reestimate a linear model each time with a different */
    /*  level shift and, if  take the one which minimizes the target */
    /*  function (residual sum of squares/2 = negative log */
    /*  likelihood) */
    /*  total number of subsets to pass to procedure subsets */
    b_st.site = &fe_emlrtRSI;
    bc(&b_st, (real_T)y->size[0] - 1.0, pini + 1.0);
  } else {
    lshift = 0.0;
  }

  emxInit_real_T(&st, &allnumscale2, 1, &qd_emlrtRTEI, true);

  /*  ScaleLSH= estimate of the squared scale for each value of LSH which has been */
  /*  considered */
  /*  yhatrobLSH = vector of fitted values for each value of LSH */
  /*  ilsh is a counter which is linked to the rows of LSH */
  /*  lLSH = length of tentative level shift positions */
  bestrdiv2 = muDoubleScalarRound(lts->bestr / 2.0);

  /*  allnumscale2 will contain the best best estimates of the target function */
  /*  for a tentative value of level shift position */
  if (!(lts->bestr >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lts->bestr, &ub_emlrtDCI, &st);
  }

  i = (int32_T)muDoubleScalarFloor(lts->bestr);
  if (lts->bestr != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &vb_emlrtDCI, &st);
  }

  loop_ub_tmp = (int32_T)lts->bestr;
  i1 = allnumscale2->size[0];
  allnumscale2->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(&st, allnumscale2, i1, &qd_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &vb_emlrtDCI, &st);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    allnumscale2->data[i1] = 0.0;
  }

  /*  Store all bestr target functions for each tentative level shift */
  /*  position (target function = truncated residual sum of squares) */
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &tb_emlrtDCI, &st);
  }

  i1 = out->numscale2->size[0];
  out->numscale2->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(&st, out->numscale2, i1, &rd_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &tb_emlrtDCI, &st);
  }

  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    out->numscale2->data[i1] = 0.0;
  }

  /*  Store the position of the indexes occupying nbestindexes best solutions of target */
  /*  function for each tentative level shift position */
  /*  1-bestrdiv2       = solutions from fresh subsets. */
  /*  bestrdiv2+1-bestr = best solutions coming from previous tentative level */
  /*  shift position */
  if (!(nbestindexes >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nbestindexes, &rb_emlrtDCI, &st);
  }

  i1 = (int32_T)muDoubleScalarFloor(nbestindexes);
  if (nbestindexes != i1) {
    emlrtIntegerCheckR2012b(nbestindexes, &sb_emlrtDCI, &st);
  }

  ib_size = (int32_T)nbestindexes;
  i2 = out->BestIndexes->size[0];
  out->BestIndexes->size[0] = ib_size;
  emxEnsureCapacity_real_T(&st, out->BestIndexes, i2, &sd_emlrtRTEI);
  if (ib_size != i1) {
    emlrtIntegerCheckR2012b(nbestindexes, &sb_emlrtDCI, &st);
  }

  for (i1 = 0; i1 < ib_size; i1++) {
    out->BestIndexes->data[i1] = 0.0;
  }

  emxInit_boolean_T(&st, &Weights, 1, &td_emlrtRTEI, true);

  /*  Weights = units forming subset for the solution associated to the minimum */
  /*  scale for each value of LSH */
  i1 = Weights->size[0];
  Weights->size[0] = y->size[0];
  emxEnsureCapacity_boolean_T(&st, Weights, i1, &td_emlrtRTEI);
  loop_ub = y->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    Weights->data[i1] = false;
  }

  emxInit_real_T(&st, &brobLSH, 1, &ud_emlrtRTEI, true);
  if (!(p >= 0.0)) {
    emlrtNonNegativeCheckR2012b(p, &pb_emlrtDCI, &st);
  }

  i1 = (int32_T)muDoubleScalarFloor(p);
  if (p != i1) {
    emlrtIntegerCheckR2012b(p, &qb_emlrtDCI, &st);
  }

  b_loop_ub = (int32_T)p;
  i2 = brobLSH->size[0];
  brobLSH->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, brobLSH, i2, &ud_emlrtRTEI);
  if (b_loop_ub != i1) {
    emlrtIntegerCheckR2012b(p, &qb_emlrtDCI, &st);
  }

  for (i2 = 0; i2 < b_loop_ub; i2++) {
    brobLSH->data[i2] = 0.0;
  }

  /*  Construct matrix X (called Xsel) which contains the linear part of the model */
  emxInitStruct_captured_var1(&st, &Xsel, &vd_emlrtRTEI, true);
  if (seasonal.contents == 0.0) {
    if (isemptyX.contents) {
      i2 = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = Xtrend.contents->size[0];
      Xsel.contents->size[1] = Xtrend.contents->size[1];
      emxEnsureCapacity_real_T(&st, Xsel.contents, i2, &vd_emlrtRTEI);
      loop_ub = Xtrend.contents->size[0] * Xtrend.contents->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        Xsel.contents->data[i2] = Xtrend.contents->data[i2];
      }
    } else {
      b_st.site = &ee_emlrtRSI;
      c_st.site = &qg_emlrtRSI;
      if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
        result = Xtrend.contents->size[0];
      } else if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
        result = X.contents->size[0];
      } else {
        result = Xtrend.contents->size[0];
        if (X.contents->size[0] > Xtrend.contents->size[0]) {
          result = X.contents->size[0];
        }
      }

      d_st.site = &sf_emlrtRSI;
      if ((Xtrend.contents->size[0] != result) && ((Xtrend.contents->size[0] !=
            0) && (Xtrend.contents->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((X.contents->size[0] != result) && ((X.contents->size[0] != 0) &&
           (X.contents->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrend.contents->size[0] != 0) &&
           (Xtrend.contents->size[1] != 0))) {
        input_sizes_idx_1 = (int8_T)Xtrend.contents->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((X.contents->size[0] != 0) &&
           (X.contents->size[1] != 0))) {
        sizes[1] = X.contents->size[1];
      } else {
        sizes[1] = 0;
      }

      b_input_sizes_idx_1 = sizes[1];
      i2 = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = result;
      Xsel.contents->size[1] = input_sizes_idx_1 + sizes[1];
      emxEnsureCapacity_real_T(&st, Xsel.contents, i2, &ae_emlrtRTEI);
      loop_ub = input_sizes_idx_1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (ia_data = 0; ia_data < result; ia_data++) {
          Xsel.contents->data[ia_data + Xsel.contents->size[0] * i2] =
            Xtrend.contents->data[ia_data + result * i2];
        }
      }

      loop_ub = sizes[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (ia_data = 0; ia_data < result; ia_data++) {
          Xsel.contents->data[ia_data + Xsel.contents->size[0] * (i2 +
            input_sizes_idx_1)] = X.contents->data[ia_data + result * i2];
        }
      }
    }
  } else {
    if (isemptyX.contents) {
      b_st.site = &de_emlrtRSI;
      c_st.site = &qg_emlrtRSI;
      if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
        result = Xtrend.contents->size[0];
      } else if ((Xseaso.contents->size[0] != 0) && (Xseaso.contents->size[1] !=
                  0)) {
        result = Xseaso.contents->size[0];
      } else {
        result = Xtrend.contents->size[0];
        if (Xseaso.contents->size[0] > Xtrend.contents->size[0]) {
          result = Xseaso.contents->size[0];
        }
      }

      d_st.site = &sf_emlrtRSI;
      if ((Xtrend.contents->size[0] != result) && ((Xtrend.contents->size[0] !=
            0) && (Xtrend.contents->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xseaso.contents->size[0] != result) && ((Xseaso.contents->size[0] !=
            0) && (Xseaso.contents->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrend.contents->size[0] != 0) &&
           (Xtrend.contents->size[1] != 0))) {
        input_sizes_idx_1 = (int8_T)Xtrend.contents->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xseaso.contents->size[0] != 0) &&
           (Xseaso.contents->size[1] != 0))) {
        sizes[1] = Xseaso.contents->size[1];
      } else {
        sizes[1] = 0;
      }

      b_input_sizes_idx_1 = sizes[1];
      i2 = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = result;
      Xsel.contents->size[1] = input_sizes_idx_1 + sizes[1];
      emxEnsureCapacity_real_T(&st, Xsel.contents, i2, &yd_emlrtRTEI);
      loop_ub = input_sizes_idx_1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (ia_data = 0; ia_data < result; ia_data++) {
          Xsel.contents->data[ia_data + Xsel.contents->size[0] * i2] =
            Xtrend.contents->data[ia_data + result * i2];
        }
      }

      loop_ub = sizes[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (ia_data = 0; ia_data < result; ia_data++) {
          Xsel.contents->data[ia_data + Xsel.contents->size[0] * (i2 +
            input_sizes_idx_1)] = Xseaso.contents->data[ia_data + result * i2];
        }
      }
    } else {
      b_st.site = &ce_emlrtRSI;
      c_st.site = &qg_emlrtRSI;
      if ((Xtrend.contents->size[0] != 0) && (Xtrend.contents->size[1] != 0)) {
        result = Xtrend.contents->size[0];
      } else if ((Xseaso.contents->size[0] != 0) && (Xseaso.contents->size[1] !=
                  0)) {
        result = Xseaso.contents->size[0];
      } else if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
        result = X.contents->size[0];
      } else {
        result = Xtrend.contents->size[0];
        if (Xseaso.contents->size[0] > Xtrend.contents->size[0]) {
          result = Xseaso.contents->size[0];
        }

        if (X.contents->size[0] > result) {
          result = X.contents->size[0];
        }
      }

      d_st.site = &sf_emlrtRSI;
      if ((Xtrend.contents->size[0] != result) && ((Xtrend.contents->size[0] !=
            0) && (Xtrend.contents->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xseaso.contents->size[0] != result) && ((Xseaso.contents->size[0] !=
            0) && (Xseaso.contents->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((X.contents->size[0] != result) && ((X.contents->size[0] != 0) &&
           (X.contents->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xtrend.contents->size[0] != 0) &&
           (Xtrend.contents->size[1] != 0))) {
        input_sizes_idx_1 = (int8_T)Xtrend.contents->size[1];
      } else {
        input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xseaso.contents->size[0] != 0) &&
           (Xseaso.contents->size[1] != 0))) {
        b_input_sizes_idx_1 = Xseaso.contents->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((X.contents->size[0] != 0) &&
           (X.contents->size[1] != 0))) {
        sizes[1] = X.contents->size[1];
      } else {
        sizes[1] = 0;
      }

      i2 = Xsel.contents->size[0] * Xsel.contents->size[1];
      Xsel.contents->size[0] = result;
      Xsel.contents->size[1] = (input_sizes_idx_1 + b_input_sizes_idx_1) +
        sizes[1];
      emxEnsureCapacity_real_T(&st, Xsel.contents, i2, &ce_emlrtRTEI);
      loop_ub = input_sizes_idx_1;
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (ia_data = 0; ia_data < result; ia_data++) {
          Xsel.contents->data[ia_data + Xsel.contents->size[0] * i2] =
            Xtrend.contents->data[ia_data + result * i2];
        }
      }

      for (i2 = 0; i2 < b_input_sizes_idx_1; i2++) {
        for (ia_data = 0; ia_data < result; ia_data++) {
          Xsel.contents->data[ia_data + Xsel.contents->size[0] * (i2 +
            input_sizes_idx_1)] = Xseaso.contents->data[ia_data + result * i2];
        }
      }

      loop_ub = sizes[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (ia_data = 0; ia_data < result; ia_data++) {
          Xsel.contents->data[ia_data + Xsel.contents->size[0] * ((i2 +
            input_sizes_idx_1) + b_input_sizes_idx_1)] = X.contents->
            data[ia_data + result * i2];
        }
      }
    }

    /*  zero for varampl is automatically included because b0 is */
    /*  initialized as a vector of zeroes b0=[b0;zeros(varampl,1)]; */
  }

  emxInit_real_T(&st, &WEIibestrdiv2, 2, &wd_emlrtRTEI, true);

  /*  WEIisum = matrix which will contain the number of times each units has */
  /*  been included into the best h-subset after two iterations */
  /*  WEIisumbest10 = matrix which will contain the number of times each units has */
  /*  been included into the best h-subsets among the bestr/2 best */
  i2 = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
  WEIibestrdiv2->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, WEIibestrdiv2, i2, &wd_emlrtRTEI);
  if (!(bestrdiv2 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(bestrdiv2, &ic_emlrtDCI, &st);
  }

  if (bestrdiv2 != (int32_T)bestrdiv2) {
    emlrtIntegerCheckR2012b(bestrdiv2, &jc_emlrtDCI, &st);
  }

  i2 = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
  WEIibestrdiv2->size[1] = (int32_T)bestrdiv2;
  emxEnsureCapacity_real_T(&st, WEIibestrdiv2, i2, &wd_emlrtRTEI);
  if (bestrdiv2 != (int32_T)bestrdiv2) {
    emlrtIntegerCheckR2012b(bestrdiv2, &ob_emlrtDCI, &st);
  }

  loop_ub = y->size[0] * (int32_T)bestrdiv2;
  for (i2 = 0; i2 < loop_ub; i2++) {
    WEIibestrdiv2->data[i2] = 0.0;
  }

  i2 = out->RES->size[0];
  out->RES->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, out->RES, i2, &xd_emlrtRTEI);
  loop_ub = y->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    out->RES->data[i2] = rtNaN;
  }

  /*  Consistency factor based on the variance of the truncated normal */
  /*  distribution. 1-h/n=trimming percentage Compute variance of the truncated */
  /*  normal distribution. */
  b_st.site = &be_emlrtRSI;
  a = norminv(0.5 * (b_h / (real_T)y->size[0] + 1.0));

  /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
  d = 1.0 - 2.0 * ((real_T)y->size[0] / b_h) * a * (muDoubleScalarExp(-0.5 * a *
    a) / 2.5066282746310002);
  b_st.site = &ae_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  d = muDoubleScalarSqrt(d);
  factor = 1.0 / d;

  /*  Initialize 2D or 3D array which stores indexes of extracted */
  /*  subsets for each tentative level shift position */
  /*  Initialization of Ccell is necessary for MATLAB C coder */
  if (!(pini >= 0.0)) {
    emlrtNonNegativeCheckR2012b(pini, &oc_emlrtDCI, &st);
  }

  if (pini != (int32_T)muDoubleScalarFloor(pini)) {
    emlrtIntegerCheckR2012b(pini, &pc_emlrtDCI, &st);
  }

  emxInitStruct_captured_var(&st, &bsb, &be_emlrtRTEI, true);
  emxInit_real_T(&st, &yhatrob, 1, &de_emlrtRTEI, true);
  emxInit_boolean_T(&st, &weightsst, 1, &ee_emlrtRTEI, true);
  i2 = bsb.contents->size[0];
  bsb.contents->size[0] = 1;
  emxEnsureCapacity_real_T(&st, bsb.contents, i2, &be_emlrtRTEI);
  bsb.contents->data[0] = 0.0;
  i2 = yhatrob->size[0];
  yhatrob->size[0] = 1;
  emxEnsureCapacity_real_T(&st, yhatrob, i2, &de_emlrtRTEI);
  yhatrob->data[0] = 0.0;
  i2 = weightsst->size[0];
  weightsst->size[0] = 1;
  emxEnsureCapacity_boolean_T(&st, weightsst, i2, &ee_emlrtRTEI);
  weightsst->data[0] = false;
  posLS = 0.0;
  i2 = out->Likloc->size[0] * out->Likloc->size[1];
  out->Likloc->size[0] = 1;
  out->Likloc->size[1] = 1;
  emxEnsureCapacity_real_T(&st, out->Likloc, i2, &fe_emlrtRTEI);
  out->Likloc->data[0] = 0.0;
  sworst = rtInf;

  /*  Xlshift = explanatory variable associated with */
  /*  level shift Xlshift is 0 up to lsh-1 and 1 from */
  /*  lsh to T */
  d = ((real_T)y->size[0] - lshift) + 1.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &mb_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &nb_emlrtDCI, &st);
  }

  if (!(lshift - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lshift - 1.0, &mb_emlrtDCI, &st);
  }

  a = (int32_T)muDoubleScalarFloor(lshift - 1.0);
  if (lshift - 1.0 != a) {
    emlrtIntegerCheckR2012b(lshift - 1.0, &nb_emlrtDCI, &st);
  }

  i2 = weights->size[0];
  weights->size[0] = (int32_T)(lshift - 1.0) + (int32_T)d;
  emxEnsureCapacity_real_T(&st, weights, i2, &ge_emlrtRTEI);
  if (!(lshift - 1.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(lshift - 1.0, &mb_emlrtDCI, &st);
  }

  if (lshift - 1.0 != a) {
    emlrtIntegerCheckR2012b(lshift - 1.0, &nb_emlrtDCI, &st);
  }

  loop_ub = (int32_T)(lshift - 1.0);
  for (i2 = 0; i2 < loop_ub; i2++) {
    weights->data[i2] = 0.0;
  }

  d = ((real_T)y->size[0] - lshift) + 1.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &mb_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &nb_emlrtDCI, &st);
  }

  loop_ub = (int32_T)d;
  for (i2 = 0; i2 < loop_ub; i2++) {
    if (!(lshift - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(lshift - 1.0, &mb_emlrtDCI, &st);
    }

    if (lshift - 1.0 != a) {
      emlrtIntegerCheckR2012b(lshift - 1.0, &nb_emlrtDCI, &st);
    }

    weights->data[i2 + (int32_T)(lshift - 1.0)] = 1.0;
  }

  emxInitStruct_captured_var1(&st, &Xlshift, &he_emlrtRTEI, true);
  i2 = Xlshift.contents->size[0] * Xlshift.contents->size[1];
  Xlshift.contents->size[0] = weights->size[0];
  Xlshift.contents->size[1] = 1;
  emxEnsureCapacity_real_T(&st, Xlshift.contents, i2, &he_emlrtRTEI);
  loop_ub = weights->size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    Xlshift.contents->data[i2] = weights->data[i2];
  }

  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &hc_emlrtDCI, &st);
  }

  i2 = out->invXX->size[0] * out->invXX->size[1];
  out->invXX->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(&st, out->invXX, i2, &ie_emlrtRTEI);
  if (b_loop_ub != i1) {
    emlrtIntegerCheckR2012b(p, &gc_emlrtDCI, &st);
  }

  i2 = out->invXX->size[0] * out->invXX->size[1];
  out->invXX->size[1] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, out->invXX, i2, &ie_emlrtRTEI);
  if (b_loop_ub != i1) {
    emlrtIntegerCheckR2012b(p, &lb_emlrtDCI, &st);
  }

  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &lb_emlrtDCI, &st);
  }

  loop_ub = loop_ub_tmp * b_loop_ub;
  for (i2 = 0; i2 < loop_ub; i2++) {
    out->invXX->data[i2] = 0.0;
  }

  emxInit_real_T(&st, &bestyhat, 2, &mj_emlrtRTEI, true);
  i2 = bestyhat->size[0] * bestyhat->size[1];
  bestyhat->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, bestyhat, i2, &je_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &fc_emlrtDCI, &st);
  }

  i2 = bestyhat->size[0] * bestyhat->size[1];
  bestyhat->size[1] = loop_ub_tmp;
  emxEnsureCapacity_real_T(&st, bestyhat, i2, &je_emlrtRTEI);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &kb_emlrtDCI, &st);
  }

  loop_ub = y->size[0] * loop_ub_tmp;
  for (i2 = 0; i2 < loop_ub; i2++) {
    bestyhat->data[i2] = 0.0;
  }

  emxInit_real_T(&st, &bestsubset, 2, &nj_emlrtRTEI, true);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &ec_emlrtDCI, &st);
  }

  i2 = bestsubset->size[0] * bestsubset->size[1];
  bestsubset->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(&st, bestsubset, i2, &ke_emlrtRTEI);
  d = pini + lshiftYN.contents * 2.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &cc_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &dc_emlrtDCI, &st);
  }

  i2 = bestsubset->size[0] * bestsubset->size[1];
  bestsubset->size[1] = (int32_T)d;
  emxEnsureCapacity_real_T(&st, bestsubset, i2, &ke_emlrtRTEI);
  d = pini + lshiftYN.contents * 2.0;
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &ib_emlrtDCI, &st);
  }

  if (d != (int32_T)muDoubleScalarFloor(d)) {
    emlrtIntegerCheckR2012b(d, &jb_emlrtDCI, &st);
  }

  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &jb_emlrtDCI, &st);
  }

  loop_ub = loop_ub_tmp * (int32_T)d;
  for (i2 = 0; i2 < loop_ub; i2++) {
    bestsubset->data[i2] = 0.0;
  }

  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(lts->bestr, &qc_emlrtDCI, &st);
  }

  i = bestnumscale2->size[0];
  bestnumscale2->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(&st, bestnumscale2, i, &le_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    bestnumscale2->data[i] = rtInf;
  }

  emxInit_real_T(&st, &b_C, 2, &oe_emlrtRTEI, true);
  if (lshift > 0.0) {
    b_st.site = &yd_emlrtRSI;
    subsets(&b_st, options_nsamp_data, options_nsamp_size, (real_T)y->size[0] -
            1.0, pini + 1.0, 0.0, msg, C, &stoprint);
    if (!(stoprint >= 0.0)) {
      emlrtNonNegativeCheckR2012b(stoprint, &rc_emlrtDCI, &st);
    }

    i = (int32_T)muDoubleScalarFloor(stoprint);
    if (stoprint != i) {
      emlrtIntegerCheckR2012b(stoprint, &sc_emlrtDCI, &st);
    }

    b_st.site = &xd_emlrtRSI;
    result = (int32_T)stoprint;
    if (result != i) {
      emlrtIntegerCheckR2012b(stoprint, &tc_emlrtDCI, &b_st);
    }

    if (pini + 1.0 != (int32_T)(pini + 1.0)) {
      emlrtIntegerCheckR2012b(pini + 1.0, &uc_emlrtDCI, &b_st);
    }

    c_st.site = &qg_emlrtRSI;
    d_st.site = &sf_emlrtRSI;
    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || (stoprint != 0.0)) {
      input_sizes_idx_1 = 1;
    } else {
      input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((stoprint != 0.0) && ((int32_T)pini + 1 != 0.0)))
    {
      sizes[1] = (int32_T)pini + 1;
    } else {
      sizes[1] = 0;
    }

    c_size[0] = result;
    b_input_sizes_idx_1 = sizes[1];
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = result;
    b_C->size[1] = input_sizes_idx_1 + sizes[1];
    emxEnsureCapacity_real_T(&c_st, b_C, i, &oe_emlrtRTEI);
    loop_ub = input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      for (i2 = 0; i2 < result; i2++) {
        b_C->data[i2] = lshift;
      }
    }

    loop_ub = sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i2 = 0; i2 < result; i2++) {
        b_C->data[i2 + b_C->size[0] * (i + input_sizes_idx_1)] = 0.0;
      }
    }

    /*  Make sure that observation lsh is always included in the subset */
    /*  and that the subset contains at least one unit smaller than lsh */
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, stoprint, mxDOUBLE_CLASS, (int32_T)
      stoprint, &j_emlrtRTEI, &st);
    if (0.0 <= stoprint - 1.0) {
      i3 = C->size[1];
      c_loop_ub = C->size[1];
      end = C->size[1] - 1;
      b_end = C->size[1] - 1;
      i4 = C->size[1];
      c_size[0] = 1;
    }

    emxInit_int32_T(&st, &r1, 2, &wj_emlrtRTEI, true);
    emxInit_boolean_T(&st, &x, 2, &we_emlrtRTEI, true);
    for (ia_data = 0; ia_data < result; ia_data++) {
      if ((int32_T)(ia_data + 1U) > C->size[0]) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(ia_data + 1U), 1, C->size[0],
          &ed_emlrtBCI, &st);
      }

      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = i3;
      emxEnsureCapacity_real_T(&st, Cr, i, &qe_emlrtRTEI);
      for (i = 0; i < c_loop_ub; i++) {
        Cr->data[i] = C->data[ia_data + C->size[0] * i];
      }

      /*  Observations greater or equal than lsh will be increased by one */
      for (b_i = 0; b_i <= end; b_i++) {
        if ((Cr->data[b_i] >= lshift) && (b_i + 1 > C->size[1])) {
          emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, C->size[1], &pc_emlrtBCI,
            &st);
        }
      }

      nz = 0;
      for (b_i = 0; b_i <= b_end; b_i++) {
        if (Cr->data[b_i] >= lshift) {
          nz++;
        }
      }

      i = r1->size[0] * r1->size[1];
      r1->size[0] = 1;
      r1->size[1] = nz;
      emxEnsureCapacity_int32_T(&st, r1, i, &hd_emlrtRTEI);
      nz = 0;
      for (b_i = 0; b_i <= b_end; b_i++) {
        if (Cr->data[b_i] >= lshift) {
          r1->data[nz] = b_i + 1;
          nz++;
        }
      }

      loop_ub = r1->size[1];
      for (i = 0; i < loop_ub; i++) {
        if ((r1->data[i] < 1) || (r1->data[i] > i4)) {
          emlrtDynamicBoundsCheckR2012b(r1->data[i], 1, i4, &lc_emlrtBCI, &st);
        }

        Cr->data[r1->data[i] - 1] = C->data[ia_data + C->size[0] * (r1->data[i]
          - 1)] + 1.0;
      }

      /*  Make sure there is at least one observation smaller than lsh */
      /*  if sum(boo)==0 then in the subset there is no observation */
      /*  which is smaller than lsh */
      b_st.site = &wd_emlrtRSI;
      i = x->size[0] * x->size[1];
      x->size[0] = 1;
      x->size[1] = Cr->size[1];
      emxEnsureCapacity_boolean_T(&b_st, x, i, &we_emlrtRTEI);
      loop_ub = Cr->size[1];
      for (i = 0; i < loop_ub; i++) {
        x->data[i] = (Cr->data[i] < lshift);
      }

      c_st.site = &dk_emlrtRSI;
      d_st.site = &nh_emlrtRSI;
      nz = combineVectorElements(&d_st, x);
      if (nz < 1) {
        if (1 > Cr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Cr->size[1], &fd_emlrtBCI, &st);
        }

        b_st.site = &vd_emlrtRSI;
        Cr->data[0] = randsample(&b_st, lshift - 1.0);
      }

      if (2 > b_C->size[1]) {
        i = 0;
        i2 = 0;
      } else {
        i = 1;
        i2 = b_C->size[1];
      }

      if (ia_data + 1 > b_C->size[0]) {
        emlrtDynamicBoundsCheckR2012b(ia_data + 1, 1, b_C->size[0], &gd_emlrtBCI,
          &st);
      }

      c_size[1] = i2 - i;
      emlrtSubAssignSizeCheckR2012b(&c_size[0], 2, &Cr->size[0], 2, &c_emlrtECI,
        &st);
      loop_ub = Cr->size[1];
      for (i2 = 0; i2 < loop_ub; i2++) {
        b_C->data[ia_data + b_C->size[0] * (i + i2)] = Cr->data[i2];
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    emxFree_boolean_T(&x);
    emxFree_int32_T(&r1);
  } else {
    /*  If there is no level shift component */
    b_st.site = &ud_emlrtRSI;
    subsets(&b_st, options_nsamp_data, options_nsamp_size, y->size[0], pini,
            ncomb, msg, C, &stoprint);
    i = b_C->size[0] * b_C->size[1];
    b_C->size[0] = C->size[0];
    b_C->size[1] = C->size[1];
    emxEnsureCapacity_real_T(&st, b_C, i, &me_emlrtRTEI);
    loop_ub = C->size[0] * C->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_C->data[i] = C->data[i];
    }
  }

  emxInit_real_T(&st, &WEIi, 2, &ne_emlrtRTEI, true);

  /*  Store indexes of extracted subsets if nargout is greater than 1 */
  /*  yhatall= matrix which will contain fitted values for each extracted */
  /*  subset */
  /*  yhatall=zeros(T,nselected); */
  /*  WEIi = matrix which will contain indication of the units forming best */
  /*  h subset. Each column refers to a subset */
  i = WEIi->size[0] * WEIi->size[1];
  WEIi->size[0] = y->size[0];
  emxEnsureCapacity_real_T(&st, WEIi, i, &ne_emlrtRTEI);
  if (!(stoprint >= 0.0)) {
    emlrtNonNegativeCheckR2012b(stoprint, &ac_emlrtDCI, &st);
  }

  i = (int32_T)muDoubleScalarFloor(stoprint);
  if (stoprint != i) {
    emlrtIntegerCheckR2012b(stoprint, &bc_emlrtDCI, &st);
  }

  i2 = (int32_T)stoprint;
  ia_data = WEIi->size[0] * WEIi->size[1];
  WEIi->size[1] = i2;
  emxEnsureCapacity_real_T(&st, WEIi, ia_data, &ne_emlrtRTEI);
  if (i2 != i) {
    emlrtIntegerCheckR2012b(stoprint, &hb_emlrtDCI, &st);
  }

  loop_ub = y->size[0] * i2;
  for (i = 0; i < loop_ub; i++) {
    WEIi->data[i] = 0.0;
  }

  /*  ij is a scalar used to ensure that the best first bestr solutions are */
  /*  stored in order to be brought to full convergence */
  /*  subsets are stored */
  ncomb = 1.0;

  /*  Loop through all nselected subsamples */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, stoprint, mxDOUBLE_CLASS, (int32_T)
    stoprint, &k_emlrtRTEI, &st);
  if (0.0 <= stoprint - 1.0) {
    if (lshift == 0.0) {
      Xlshift.contents->size[0] = 0;
      Xlshift.contents->size[1] = 0;
    }

    if ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0)) {
      b_result = Xsel.contents->size[0];
    } else if ((Xlshift.contents->size[0] != 0) && (Xlshift.contents->size[1] !=
                0)) {
      b_result = Xlshift.contents->size[0];
    } else {
      b_result = Xsel.contents->size[0];
      if (Xlshift.contents->size[0] > Xsel.contents->size[0]) {
        b_result = Xlshift.contents->size[0];
      }
    }

    empty_non_axis_sizes = (b_result == 0);
    if (empty_non_axis_sizes || ((Xsel.contents->size[0] != 0) &&
         (Xsel.contents->size[1] != 0))) {
      c_input_sizes_idx_1 = Xsel.contents->size[1];
    } else {
      c_input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
         (Xlshift.contents->size[1] != 0))) {
      sizes[1] = Xlshift.contents->size[1];
    } else {
      sizes[1] = 0;
    }

    result = b_result;
    b_input_sizes_idx_1 = sizes[1];
    d_loop_ub = sizes[1];
    e_loop_ub = b_C->size[1];
    f_loop_ub = b_C->size[1];
    g_loop_ub = b_C->size[1];
    c_yin = yin.contents->size[0];
  }

  emxInitStruct_captured_var2(&st, &b_weights, &bg_emlrtRTEI, true);
  emxInitStruct_captured_var(&st, &yhat, &gj_emlrtRTEI, true);
  emxInitStruct_captured_var(&st, &beta, &hj_emlrtRTEI, true);
  emxInit_real_T(&st, &Xfinal, 2, &ve_emlrtRTEI, true);
  emxInit_boolean_T(&st, &r2, 1, &ef_emlrtRTEI, true);
  emxInitStruct_struct_T(&st, &expl_temp, &xj_emlrtRTEI, true);
  emxInitStruct_struct_T(&st, &b_expl_temp, &kf_emlrtRTEI, true);
  emxInit_real_T(&st, &b_Xfinal, 2, &af_emlrtRTEI, true);
  emxInit_real_T(&st, &b_yin, 1, &cf_emlrtRTEI, true);
  for (b_i = 0; b_i < i2; b_i++) {
    /*  Initialize b0 as vector of zeroes for each subset */
    /*  The order of the elements of b0 is as follows */
    /*  1) trend elements (if present). If the trend is order two r are */
    /*  r+1 coefficients if the intercept is present otherwise there are */
    /*  just r components (Xtrend) */
    /*  2) linear part of seasonal component 2, 4, 6, ..., s-2, s-1 coefficients */
    /*  (if present)   (Xseaso) */
    /*  3) coefficients associated with the matrix of explanatory variables */
    /*  which have a potential effect on the time series under study (X) */
    /*  4) non linear part of seasonal component, that is varying amplitude. */
    /*  If varying amplitude is of order k there are k coefficients (if */
    /*  present) (Seq) */
    /*  5) level shift component (if present). In this case there are two */
    /*  coefficients, the second (which is also the last element of */
    /*  vector b0) is an integer which specifies the time in which level */
    /*  shift takes place and the first (which is also the penultime */
    /*  element of vector b0) is a real number which identifies the */
    /*  magnitude of the upward (downward) level shift (Xlshift) */
    if (b_loop_ub != i1) {
      emlrtIntegerCheckR2012b(p, &gb_emlrtDCI, &st);
    }

    i = out->residuals->size[0];
    out->residuals->size[0] = b_loop_ub;
    emxEnsureCapacity_real_T(&st, out->residuals, i, &pe_emlrtRTEI);
    if (b_loop_ub != i1) {
      emlrtIntegerCheckR2012b(p, &gb_emlrtDCI, &st);
    }

    for (i = 0; i < b_loop_ub; i++) {
      out->residuals->data[i] = 0.0;
    }

    /*  extract a subset of size p */
    if (b_i + 1 > b_C->size[0]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, b_C->size[0], &hd_emlrtBCI, &st);
    }

    b_st.site = &td_emlrtRSI;
    c_st.site = &qg_emlrtRSI;
    d_st.site = &sf_emlrtRSI;
    if ((Xsel.contents->size[0] != b_result) && ((Xsel.contents->size[0] != 0) &&
         (Xsel.contents->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Xlshift.contents->size[0] != b_result) && ((Xlshift.contents->size[0]
          != 0) && (Xlshift.contents->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    i = Xfinal->size[0] * Xfinal->size[1];
    Xfinal->size[0] = b_result;
    Xfinal->size[1] = c_input_sizes_idx_1 + b_input_sizes_idx_1;
    emxEnsureCapacity_real_T(&c_st, Xfinal, i, &ve_emlrtRTEI);
    for (i = 0; i < c_input_sizes_idx_1; i++) {
      for (ia_data = 0; ia_data < b_result; ia_data++) {
        Xfinal->data[ia_data + Xfinal->size[0] * i] = Xsel.contents->
          data[ia_data + b_result * i];
      }
    }

    for (i = 0; i < d_loop_ub; i++) {
      for (ia_data = 0; ia_data < result; ia_data++) {
        Xfinal->data[ia_data + Xfinal->size[0] * c_input_sizes_idx_1] =
          Xlshift.contents->data[ia_data];
      }
    }

    /*  Preliminary OLS estimates (including tentative level shift) based */
    /*  just on the units forming subset */
    i = bsb.contents->size[0];
    bsb.contents->size[0] = e_loop_ub;
    emxEnsureCapacity_real_T(&st, bsb.contents, i, &xe_emlrtRTEI);
    for (i = 0; i < e_loop_ub; i++) {
      bsb.contents->data[i] = b_C->data[b_i + b_C->size[0] * i];
    }

    loop_ub = Xfinal->size[1];
    i = b_Xfinal->size[0] * b_Xfinal->size[1];
    b_Xfinal->size[0] = f_loop_ub;
    b_Xfinal->size[1] = Xfinal->size[1];
    emxEnsureCapacity_real_T(&st, b_Xfinal, i, &af_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      for (ia_data = 0; ia_data < f_loop_ub; ia_data++) {
        if (b_C->data[b_i + b_C->size[0] * ia_data] != (int32_T)
            muDoubleScalarFloor(b_C->data[b_i + b_C->size[0] * ia_data])) {
          emlrtIntegerCheckR2012b(b_C->data[b_i + b_C->size[0] * ia_data],
            &fb_emlrtDCI, &st);
        }

        i3 = (int32_T)b_C->data[b_i + b_C->size[0] * ia_data];
        if ((i3 < 1) || (i3 > Xfinal->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_C->data[b_i + b_C->size[0] *
            ia_data], 1, Xfinal->size[0], &ic_emlrtBCI, &st);
        }

        b_Xfinal->data[ia_data + b_Xfinal->size[0] * i] = Xfinal->data[(i3 +
          Xfinal->size[0] * i) - 1];
      }
    }

    i = b_yin->size[0];
    b_yin->size[0] = g_loop_ub;
    emxEnsureCapacity_real_T(&st, b_yin, i, &cf_emlrtRTEI);
    for (i = 0; i < g_loop_ub; i++) {
      if (b_C->data[b_i + b_C->size[0] * i] != (int32_T)muDoubleScalarFloor
          (b_C->data[b_i + b_C->size[0] * i])) {
        emlrtIntegerCheckR2012b(b_C->data[b_i + b_C->size[0] * i], &eb_emlrtDCI,
          &st);
      }

      ia_data = (int32_T)b_C->data[b_i + b_C->size[0] * i];
      if ((ia_data < 1) || (ia_data > c_yin)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_C->data[b_i + b_C->size[0] * i],
          1, c_yin, &hc_emlrtBCI, &st);
      }

      b_yin->data[i] = yin.contents->data[ia_data - 1];
    }

    b_st.site = &sd_emlrtRSI;
    mldivide(&b_st, b_Xfinal, b_yin, betaini);

    /*  Check if betaini contains NaN */
    i = r2->size[0];
    r2->size[0] = betaini->size[0];
    emxEnsureCapacity_boolean_T(&st, r2, i, &ef_emlrtRTEI);
    loop_ub = betaini->size[0];
    for (i = 0; i < loop_ub; i++) {
      r2->data[i] = muDoubleScalarIsNaN(betaini->data[i]);
    }

    b_st.site = &rd_emlrtRSI;
    if (!any(&b_st, r2)) {
      /*  The first pini components are associated with */
      /*  trend and seasonal (without varying */
      /*  amplitude) and explanatory variables */
      if (1.0 > pini) {
        loop_ub = 0;
        i = 0;
      } else {
        if (1 > betaini->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, betaini->size[0], &id_emlrtBCI,
            &st);
        }

        loop_ub = (int32_T)pini;
        if (loop_ub > betaini->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pini, 1, betaini->size[0],
            &jd_emlrtBCI, &st);
        }

        if (1.0 > p) {
          emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)p, &kd_emlrtBCI, &st);
        }

        if (pini > p) {
          emlrtDynamicBoundsCheckR2012b((int32_T)pini, 1, (int32_T)p,
            &ld_emlrtBCI, &st);
        }

        i = (int32_T)pini;
      }

      if (i != loop_ub) {
        emlrtSubAssignSizeCheck1dR2017a(i, loop_ub, &d_emlrtECI, &st);
      }

      for (i = 0; i < loop_ub; i++) {
        out->residuals->data[i] = betaini->data[i];
      }

      if (lshift > 0.0) {
        /*  The last two components of beta0 are the associated with */
        /*  level shift. More precisely penultimate position is for the */
        /*  coefficient of level shift and, final position is the integer */
        /*  which specifies the starting point of level shift */
        nz = out->residuals->size[0];
        ia_data = out->residuals->size[0];
        if ((out->residuals->size[0] + -1 < 1) || (out->residuals->size[0] + -1 >
             out->residuals->size[0])) {
          emlrtDynamicBoundsCheckR2012b(out->residuals->size[0] + -1, 1,
            out->residuals->size[0], &fc_emlrtBCI, &st);
        }

        if (betaini->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(betaini->size[0], 1, betaini->size[0],
            &gc_emlrtBCI, &st);
        }

        out->residuals->data[out->residuals->size[0] - 2] = betaini->
          data[betaini->size[0] - 1];
        if ((nz < 1) || (nz > ia_data)) {
          emlrtDynamicBoundsCheckR2012b(nz, 1, ia_data, &fc_emlrtBCI, &st);
        }

        out->residuals->data[nz - 1] = lshift;
      }

      if (varampl.contents > 0.0) {
        b_st.site = &qd_emlrtRSI;
        ALS(&b_st, &Seq, &bsb, &Xseaso, &Xtrend, &yin, &trend, &nexpl, &varampl,
            &isemptyX, &lshiftYN, &Xlshift, &X, &b_reftolALS, &b_refstepsALS,
            &indlinsc, &otherind, out->residuals, beta.contents);

        /*   betaoutCHK=ALSbsxfun(beta0); */
        /*  dd=1; */
      } else {
        i = beta.contents->size[0];
        beta.contents->size[0] = out->residuals->size[0];
        emxEnsureCapacity_real_T(&st, beta.contents, i, &ff_emlrtRTEI);
        loop_ub = out->residuals->size[0];
        for (i = 0; i < loop_ub; i++) {
          beta.contents->data[i] = out->residuals->data[i];
        }

        /* disp(['lsh' num2str(lsh)]) */
        /* disp(beta0) */
        /* disp('------') */
      }

      /*  Compute  fitted values (for all units). Therefore recall function */
      /*  lik but this time computed using all observations */
      loop_ub = seq.contents->size[0];
      i = bsb.contents->size[0];
      bsb.contents->size[0] = seq.contents->size[0];
      emxEnsureCapacity_real_T(&st, bsb.contents, i, &hf_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        bsb.contents->data[i] = seq.contents->data[i];
      }

      /*  Procedure lik computes yhat (fitted values for all the */
      /*  observations using parameter estimates based on bsb). vector yhat */
      /*  will be used inside procedure IRWLSreg as starting value of the */
      /*  iterations (concentration steps) */
      b_st.site = &pd_emlrtRSI;
      lik(&b_st, &Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso,
          &varampl, &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat,
          &yin, beta.contents);

      /*  1(a) ii. -  Now apply concentration steps */
      i = betaini->size[0];
      betaini->size[0] = beta.contents->size[0];
      emxEnsureCapacity_real_T(&st, betaini, i, &if_emlrtRTEI);
      loop_ub = beta.contents->size[0] - 1;
      for (i = 0; i <= loop_ub; i++) {
        betaini->data[i] = beta.contents->data[i];
      }

      b_st.site = &od_emlrtRSI;
      IRWLSreg(&b_st, &b_reftolALS, &b_refstepsALS, &indlinsc, &Xseaso, &bsb,
               &isemptyX, &lshiftYN, &Xtrend, &Seq, &varampl, &Xlshift, &X, &yin,
               &trend, &nexpl, &otherind, &seasonal, &s, &yhatseaso, &yhat,
               &beta, &constr, &Xsel, &verLess2016b, &seq, &b_weights, &zerT1,
               yin.contents, betaini, lts->refsteps, lts->reftol, b_h,
               &b_expl_temp);
      i = expl_temp.betarw->size[0];
      expl_temp.betarw->size[0] = b_expl_temp.betarw->size[0];
      emxEnsureCapacity_real_T(&st, expl_temp.betarw, i, &kf_emlrtRTEI);
      loop_ub = b_expl_temp.betarw->size[0];
      for (i = 0; i < loop_ub; i++) {
        expl_temp.betarw->data[i] = b_expl_temp.betarw->data[i];
      }

      i = expl_temp.weights->size[0];
      expl_temp.weights->size[0] = b_expl_temp.weights->size[0];
      emxEnsureCapacity_boolean_T(&st, expl_temp.weights, i, &kf_emlrtRTEI);
      loop_ub = b_expl_temp.weights->size[0];
      for (i = 0; i < loop_ub; i++) {
        expl_temp.weights->data[i] = b_expl_temp.weights->data[i];
      }

      /*  Store weights */
      if (b_i + 1 > WEIi->size[1]) {
        emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, WEIi->size[1], &nd_emlrtBCI,
          &st);
      }

      emlrtSubAssignSizeCheckR2012b(&WEIi->size[0], 1, &expl_temp.weights->size
        [0], 1, &e_emlrtECI, &st);
      loop_ub = expl_temp.weights->size[0];
      for (i = 0; i < loop_ub; i++) {
        WEIi->data[i + WEIi->size[0] * b_i] = expl_temp.weights->data[i];
      }

      /*  Store fitted values for each subset */
      /*  yhatall(:,i)=tmp.yhat; */
      /*  1(c) Consider only the 10 subsets that yield the lowest objective */
      /*  function so far. */
      if (ncomb > lts->bestr) {
        if (b_expl_temp.numscale2rw < sworst) {
          /*  Store numscale2rw, betarw and indexes of the units */
          /*  forming the best subset for the current iteration */
          /*  Find position of the maximum value of previously */
          /*  stored best numerator of squared scaled */
          b_st.site = &nd_emlrtRSI;
          c_st.site = &dr_emlrtRSI;
          d_st.site = &er_emlrtRSI;
          e_st.site = &fr_emlrtRSI;
          if (bestnumscale2->size[0] < 1) {
            emlrtErrorWithMessageIdR2018a(&e_st, &f_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          f_st.site = &gr_emlrtRSI;
          nz = bestnumscale2->size[0];
          if (bestnumscale2->size[0] <= 2) {
            if (bestnumscale2->size[0] == 1) {
              idx = 1;
            } else if ((bestnumscale2->data[0] < bestnumscale2->data[1]) ||
                       (muDoubleScalarIsNaN(bestnumscale2->data[0]) &&
                        (!muDoubleScalarIsNaN(bestnumscale2->data[1])))) {
              idx = 2;
            } else {
              idx = 1;
            }
          } else {
            g_st.site = &ir_emlrtRSI;
            if (!muDoubleScalarIsNaN(bestnumscale2->data[0])) {
              idx = 1;
            } else {
              idx = 0;
              h_st.site = &jr_emlrtRSI;
              if (bestnumscale2->size[0] > 2147483646) {
                i_st.site = &qf_emlrtRSI;
                check_forloop_overflow_error(&i_st);
              }

              hmin = 2;
              exitg1 = false;
              while ((!exitg1) && (hmin <= nz)) {
                if (!muDoubleScalarIsNaN(bestnumscale2->data[hmin - 1])) {
                  idx = hmin;
                  exitg1 = true;
                } else {
                  hmin++;
                }
              }
            }

            if (idx == 0) {
              idx = 1;
            } else {
              g_st.site = &hr_emlrtRSI;
              stoprint = bestnumscale2->data[idx - 1];
              ia_data = idx + 1;
              h_st.site = &kr_emlrtRSI;
              if ((idx + 1 <= bestnumscale2->size[0]) && (bestnumscale2->size[0]
                   > 2147483646)) {
                i_st.site = &qf_emlrtRSI;
                check_forloop_overflow_error(&i_st);
              }

              for (hmin = ia_data; hmin <= nz; hmin++) {
                d = bestnumscale2->data[hmin - 1];
                if (stoprint < d) {
                  stoprint = d;
                  idx = hmin;
                }
              }
            }
          }

          if ((idx < 1) || (idx > bestnumscale2->size[0])) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, bestnumscale2->size[0],
              &cc_emlrtBCI, &st);
          }

          bestnumscale2->data[idx - 1] = b_expl_temp.numscale2rw;
          if (idx > out->invXX->size[0]) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, out->invXX->size[0],
              &qd_emlrtBCI, &st);
          }

          c_size[0] = 1;
          c_size[1] = out->invXX->size[1];
          b_Xseaso[0] = 1;
          loop_ub = expl_temp.betarw->size[0];
          b_Xseaso[1] = expl_temp.betarw->size[0];
          emlrtSubAssignSizeCheckR2012b(&c_size[0], 2, &b_Xseaso[0], 2,
            &h_emlrtECI, &st);
          for (i = 0; i < loop_ub; i++) {
            out->invXX->data[(idx + out->invXX->size[0] * i) - 1] =
              expl_temp.betarw->data[i];
          }

          if (idx > bestsubset->size[0]) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, bestsubset->size[0],
              &sd_emlrtBCI, &st);
          }

          loop_ub = b_C->size[1];
          i = Cr->size[0] * Cr->size[1];
          Cr->size[0] = 1;
          Cr->size[1] = b_C->size[1];
          emxEnsureCapacity_real_T(&st, Cr, i, &mf_emlrtRTEI);
          for (i = 0; i < loop_ub; i++) {
            Cr->data[i] = b_C->data[b_i + b_C->size[0] * i];
          }

          c_size[0] = 1;
          c_size[1] = bestsubset->size[1];
          emlrtSubAssignSizeCheckR2012b(&c_size[0], 2, &Cr->size[0], 2,
            &j_emlrtECI, &st);
          loop_ub = b_C->size[1];
          for (i = 0; i < loop_ub; i++) {
            bestsubset->data[(idx + bestsubset->size[0] * i) - 1] = b_C->
              data[b_i + b_C->size[0] * i];
          }

          if (idx > bestyhat->size[1]) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, bestyhat->size[1],
              &od_emlrtBCI, &st);
          }

          emlrtSubAssignSizeCheckR2012b(&bestyhat->size[0], 1,
            &yhat.contents->size[0], 1, &f_emlrtECI, &st);
          loop_ub = yhat.contents->size[0];
          for (i = 0; i < loop_ub; i++) {
            bestyhat->data[i + bestyhat->size[0] * (idx - 1)] =
              yhat.contents->data[i];
          }

          /*  sworst = best scale among the bestr found up to now */
          b_st.site = &md_emlrtRSI;
          c_st.site = &lr_emlrtRSI;
          d_st.site = &mr_emlrtRSI;
          e_st.site = &nr_emlrtRSI;
          f_st.site = &or_emlrtRSI;
          g_st.site = &pr_emlrtRSI;
          nz = bestnumscale2->size[0];
          if (bestnumscale2->size[0] <= 2) {
            if (bestnumscale2->size[0] == 1) {
              sworst = bestnumscale2->data[0];
            } else if ((bestnumscale2->data[0] < bestnumscale2->data[1]) ||
                       (muDoubleScalarIsNaN(bestnumscale2->data[0]) &&
                        (!muDoubleScalarIsNaN(bestnumscale2->data[1])))) {
              sworst = bestnumscale2->data[1];
            } else {
              sworst = bestnumscale2->data[0];
            }
          } else {
            h_st.site = &ir_emlrtRSI;
            if (!muDoubleScalarIsNaN(bestnumscale2->data[0])) {
              idx = 1;
            } else {
              idx = 0;
              i_st.site = &jr_emlrtRSI;
              if (bestnumscale2->size[0] > 2147483646) {
                j_st.site = &qf_emlrtRSI;
                check_forloop_overflow_error(&j_st);
              }

              hmin = 2;
              exitg1 = false;
              while ((!exitg1) && (hmin <= nz)) {
                if (!muDoubleScalarIsNaN(bestnumscale2->data[hmin - 1])) {
                  idx = hmin;
                  exitg1 = true;
                } else {
                  hmin++;
                }
              }
            }

            if (idx == 0) {
              sworst = bestnumscale2->data[0];
            } else {
              h_st.site = &hr_emlrtRSI;
              sworst = bestnumscale2->data[idx - 1];
              ia_data = idx + 1;
              i_st.site = &kr_emlrtRSI;
              if ((idx + 1 <= bestnumscale2->size[0]) && (bestnumscale2->size[0]
                   > 2147483646)) {
                j_st.site = &qf_emlrtRSI;
                check_forloop_overflow_error(&j_st);
              }

              for (hmin = ia_data; hmin <= nz; hmin++) {
                d = bestnumscale2->data[hmin - 1];
                if (sworst < d) {
                  sworst = d;
                }
              }
            }
          }
        }
      } else {
        i = (int32_T)ncomb;
        if (i > bestnumscale2->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ncomb, 1, bestnumscale2->size[0],
            &ec_emlrtBCI, &st);
        }

        bestnumscale2->data[i - 1] = b_expl_temp.numscale2rw;
        if (i > out->invXX->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ncomb, 1, out->invXX->size[0],
            &rd_emlrtBCI, &st);
        }

        c_size[0] = 1;
        c_size[1] = out->invXX->size[1];
        b_Xseaso[0] = 1;
        loop_ub = expl_temp.betarw->size[0];
        b_Xseaso[1] = expl_temp.betarw->size[0];
        emlrtSubAssignSizeCheckR2012b(&c_size[0], 2, &b_Xseaso[0], 2,
          &i_emlrtECI, &st);
        for (ia_data = 0; ia_data < loop_ub; ia_data++) {
          out->invXX->data[(i + out->invXX->size[0] * ia_data) - 1] =
            expl_temp.betarw->data[ia_data];
        }

        if (i > bestsubset->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ncomb, 1, bestsubset->size[0],
            &td_emlrtBCI, &st);
        }

        loop_ub = b_C->size[1];
        ia_data = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = b_C->size[1];
        emxEnsureCapacity_real_T(&st, Cr, ia_data, &mf_emlrtRTEI);
        for (ia_data = 0; ia_data < loop_ub; ia_data++) {
          Cr->data[ia_data] = b_C->data[b_i + b_C->size[0] * ia_data];
        }

        c_size[0] = 1;
        c_size[1] = bestsubset->size[1];
        emlrtSubAssignSizeCheckR2012b(&c_size[0], 2, &Cr->size[0], 2,
          &k_emlrtECI, &st);
        loop_ub = b_C->size[1];
        for (ia_data = 0; ia_data < loop_ub; ia_data++) {
          bestsubset->data[(i + bestsubset->size[0] * ia_data) - 1] = b_C->
            data[b_i + b_C->size[0] * ia_data];
        }

        if (i > bestyhat->size[1]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)ncomb, 1, bestyhat->size[1],
            &pd_emlrtBCI, &st);
        }

        emlrtSubAssignSizeCheckR2012b(&bestyhat->size[0], 1,
          &yhat.contents->size[0], 1, &g_emlrtECI, &st);
        loop_ub = yhat.contents->size[0];
        for (ia_data = 0; ia_data < loop_ub; ia_data++) {
          bestyhat->data[ia_data + bestyhat->size[0] * (i - 1)] =
            yhat.contents->data[ia_data];
        }

        /*  sworst = best scale among the bestr found up to now */
        b_st.site = &ld_emlrtRSI;
        c_st.site = &lr_emlrtRSI;
        d_st.site = &mr_emlrtRSI;
        e_st.site = &nr_emlrtRSI;
        if (bestnumscale2->size[0] < 1) {
          emlrtErrorWithMessageIdR2018a(&e_st, &f_emlrtRTEI,
            "Coder:toolbox:eml_min_or_max_varDimZero",
            "Coder:toolbox:eml_min_or_max_varDimZero", 0);
        }

        f_st.site = &or_emlrtRSI;
        g_st.site = &pr_emlrtRSI;
        nz = bestnumscale2->size[0];
        if (bestnumscale2->size[0] <= 2) {
          if (bestnumscale2->size[0] == 1) {
            sworst = bestnumscale2->data[0];
          } else if ((bestnumscale2->data[0] < bestnumscale2->data[1]) ||
                     (muDoubleScalarIsNaN(bestnumscale2->data[0]) &&
                      (!muDoubleScalarIsNaN(bestnumscale2->data[1])))) {
            sworst = bestnumscale2->data[1];
          } else {
            sworst = bestnumscale2->data[0];
          }
        } else {
          h_st.site = &ir_emlrtRSI;
          if (!muDoubleScalarIsNaN(bestnumscale2->data[0])) {
            idx = 1;
          } else {
            idx = 0;
            i_st.site = &jr_emlrtRSI;
            if (bestnumscale2->size[0] > 2147483646) {
              j_st.site = &qf_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }

            hmin = 2;
            exitg1 = false;
            while ((!exitg1) && (hmin <= nz)) {
              if (!muDoubleScalarIsNaN(bestnumscale2->data[hmin - 1])) {
                idx = hmin;
                exitg1 = true;
              } else {
                hmin++;
              }
            }
          }

          if (idx == 0) {
            sworst = bestnumscale2->data[0];
          } else {
            h_st.site = &hr_emlrtRSI;
            sworst = bestnumscale2->data[idx - 1];
            ia_data = idx + 1;
            i_st.site = &kr_emlrtRSI;
            if ((idx + 1 <= bestnumscale2->size[0]) && (bestnumscale2->size[0] >
                 2147483646)) {
              j_st.site = &qf_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }

            for (hmin = ia_data; hmin <= nz; hmin++) {
              d = bestnumscale2->data[hmin - 1];
              if (sworst < d) {
                sworst = d;
              }
            }
          }
        }

        ncomb++;
        i = brob->size[0];
        brob->size[0] = 1;
        emxEnsureCapacity_real_T(&st, brob, i, &of_emlrtRTEI);
        brob->data[0] = 1.0;
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxFree_real_T(&b_Xfinal);
  emxFreeStruct_struct_T(&b_expl_temp);
  emxFree_real_T(&Xfinal);
  emxFree_real_T(&b_C);
  if (1 > brob->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, brob->size[0], &md_emlrtBCI, &st);
  }

  if (brob->data[0] == -99.0) {
    b_st.site = &kd_emlrtRSI;
    h_error(&b_st);
  }

  /*  Store for each tentative level shift the number of times each unit */
  /*  belonged to the best subset */
  b_st.site = &jd_emlrtRSI;
  b_sum(&b_st, WEIi, weights);
  emlrtSubAssignSizeCheckR2012b(&y->size[0], 1, &weights->size[0], 1,
    &db_emlrtECI, &st);

  /*  1 (b) */
  /*  With the 0 subsets that yield the lowest objective function so far. */
  /*  Apply C-steps to these until full convergence. */
  /*  perform C-steps on best 'bestr' solutions, till convergence or for a */
  /*  maximum of refstepsbestr steps using a convergence tolerance as */
  /*  specified by scalar reftolbestr */
  /*  If ilsh >1 it is necessary also to consider the 10 best solutions from */
  /*  step j-1 */
  /*  numsuperbestscale2 = numerator of estimate of super best squared */
  /*  scale */
  stoprint = rtInf;

  /*  Just to have an idea about y and yhat for a particular lsh value */
  /*  plot([y bestyhat(:,1)]) */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, lts->bestr, mxDOUBLE_CLASS, (int32_T)
    lts->bestr, &l_emlrtRTEI, &st);
  emxFree_real_T(&WEIi);
  if (0.0 <= lts->bestr - 1.0) {
    i5 = bestyhat->size[0];
    h_loop_ub = bestyhat->size[0];
    i6 = out->invXX->size[1];
    i_loop_ub = out->invXX->size[1];
  }

  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    if ((int32_T)(b_i + 1U) > bestyhat->size[1]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, bestyhat->size[1],
        &ud_emlrtBCI, &st);
    }

    i = yhat.contents->size[0];
    yhat.contents->size[0] = i5;
    emxEnsureCapacity_real_T(&st, yhat.contents, i, &re_emlrtRTEI);
    for (i = 0; i < h_loop_ub; i++) {
      yhat.contents->data[i] = bestyhat->data[i + bestyhat->size[0] * b_i];
    }

    if ((int32_T)(b_i + 1U) > out->invXX->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, out->invXX->size[0],
        &vd_emlrtBCI, &st);
    }

    i = b_yin->size[0];
    b_yin->size[0] = i6;
    emxEnsureCapacity_real_T(&st, b_yin, i, &te_emlrtRTEI);
    for (i = 0; i < i_loop_ub; i++) {
      b_yin->data[i] = out->invXX->data[b_i + out->invXX->size[0] * i];
    }

    b_st.site = &id_emlrtRSI;
    IRWLSreg(&b_st, &b_reftolALS, &b_refstepsALS, &indlinsc, &Xseaso, &bsb,
             &isemptyX, &lshiftYN, &Xtrend, &Seq, &varampl, &Xlshift, &X, &yin,
             &trend, &nexpl, &otherind, &seasonal, &s, &yhatseaso, &yhat, &beta,
             &constr, &Xsel, &verLess2016b, &seq, &b_weights, &zerT1,
             yin.contents, b_yin, lts->refstepsbestr, lts->reftolbestr, b_h,
             &expl_temp);

    /*  Store information about the units forming best h subset among the */
    /*  10 best */
    if (b_i + 1 > WEIibestrdiv2->size[1]) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, WEIibestrdiv2->size[1],
        &he_emlrtBCI, &st);
    }

    emlrtSubAssignSizeCheckR2012b(&WEIibestrdiv2->size[0], 1,
      &expl_temp.weights->size[0], 1, &o_emlrtECI, &st);
    loop_ub = expl_temp.weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      WEIibestrdiv2->data[i + WEIibestrdiv2->size[0] * b_i] =
        expl_temp.weights->data[i];
    }

    if ((int32_T)(b_i + 1U) > allnumscale2->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(b_i + 1U), 1, allnumscale2->size[0],
        &mc_emlrtBCI, &st);
    }

    allnumscale2->data[b_i] = expl_temp.numscale2rw;

    /*  allscales(i,2)=tmp.betarw(end); */
    if (expl_temp.numscale2rw < stoprint) {
      /*  brob = superbestbeta */
      i = brob->size[0];
      brob->size[0] = expl_temp.betarw->size[0];
      emxEnsureCapacity_real_T(&st, brob, i, &ye_emlrtRTEI);
      loop_ub = expl_temp.betarw->size[0];
      for (i = 0; i < loop_ub; i++) {
        brob->data[i] = expl_temp.betarw->data[i];
      }

      /*  bs = superbestsubset, units forming best subset according to */
      /*  fastlts */
      /*  bs = bestsubsetall(i,:); */
      i = yhatrob->size[0];
      yhatrob->size[0] = expl_temp.yhat->size[0];
      emxEnsureCapacity_real_T(&st, yhatrob, i, &bf_emlrtRTEI);
      loop_ub = expl_temp.yhat->size[0];
      for (i = 0; i < loop_ub; i++) {
        yhatrob->data[i] = expl_temp.yhat->data[i];
      }

      stoprint = expl_temp.numscale2rw;
      i = weightsst->size[0];
      weightsst->size[0] = expl_temp.weights->size[0];
      emxEnsureCapacity_boolean_T(&st, weightsst, i, &df_emlrtRTEI);
      loop_ub = expl_temp.weights->size[0];
      for (i = 0; i < loop_ub; i++) {
        weightsst->data[i] = expl_temp.weights->data[i];
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  emxFreeStruct_struct_T(&expl_temp);
  emxFreeStruct_captured_var1(&zerT1);
  emxFreeStruct_captured_var(&indlinsc);
  emxFreeStruct_captured_var(&otherind);

  /*  Store the bestrdiv2 best values of target function */
  b_st.site = &hd_emlrtRSI;
  i = betaini->size[0];
  betaini->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(&b_st, betaini, i, &se_emlrtRTEI);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] = allnumscale2->data[i];
  }

  c_st.site = &cq_emlrtRSI;
  sort(&c_st, betaini, ia);
  i = betaini->size[0];
  betaini->size[0] = ia->size[0];
  emxEnsureCapacity_real_T(&b_st, betaini, i, &ue_emlrtRTEI);
  loop_ub = ia->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] = ia->data[i];
  }

  if (1.0 > bestrdiv2) {
    loop_ub = 0;
  } else {
    if (1 > betaini->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, betaini->size[0], &wd_emlrtBCI, &st);
    }

    if (((int32_T)bestrdiv2 < 1) || ((int32_T)bestrdiv2 > betaini->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bestrdiv2, 1, betaini->size[0],
        &xd_emlrtBCI, &st);
    }

    loop_ub = (int32_T)bestrdiv2;
  }

  c_size[0] = 1;
  c_size[1] = loop_ub;
  b_st.site = &gd_emlrtRSI;
  indexShapeCheck(&b_st, betaini->size[0], c_size);
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)betaini->data[i];
    if ((i1 < 1) || (i1 > bestyhat->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, bestyhat->size[1], &nc_emlrtBCI, &st);
    }
  }

  if (1.0 > bestrdiv2) {
    loop_ub = 0;
  } else {
    if (1 > betaini->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, betaini->size[0], &yd_emlrtBCI, &st);
    }

    if (((int32_T)bestrdiv2 < 1) || ((int32_T)bestrdiv2 > betaini->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bestrdiv2, 1, betaini->size[0],
        &ae_emlrtBCI, &st);
    }

    loop_ub = (int32_T)bestrdiv2;
  }

  c_size[0] = 1;
  c_size[1] = loop_ub;
  b_st.site = &fd_emlrtRSI;
  indexShapeCheck(&b_st, betaini->size[0], c_size);
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)betaini->data[i];
    if ((i1 < 1) || (i1 > out->invXX->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, out->invXX->size[0], &kc_emlrtBCI,
        &st);
    }
  }

  /*  The last element of estimated beta coefficients is the point in */
  /*  which level shift takes place. This has to be increased by one */
  /*  unit. Please note that betas are stored in rows therefore we have */
  /*  to change the last column */
  if (out->invXX->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(out->invXX->size[1], 1, out->invXX->size[1],
      &ce_emlrtBCI, &st);
  }

  if (out->invXX->size[1] < 1) {
    emlrtDynamicBoundsCheckR2012b(out->invXX->size[1], 1, out->invXX->size[1],
      &be_emlrtBCI, &st);
  }

  emlrtSubAssignSizeCheckR2012b(&loop_ub, 1, &loop_ub, 1, &l_emlrtECI, &st);
  if (1.0 > bestrdiv2) {
    loop_ub = 0;
  } else {
    if (1 > betaini->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, betaini->size[0], &de_emlrtBCI, &st);
    }

    if (((int32_T)bestrdiv2 < 1) || ((int32_T)bestrdiv2 > betaini->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)bestrdiv2, 1, betaini->size[0],
        &ee_emlrtBCI, &st);
    }

    loop_ub = (int32_T)bestrdiv2;
  }

  c_size[0] = 1;
  c_size[1] = loop_ub;
  b_st.site = &ed_emlrtRSI;
  indexShapeCheck(&b_st, betaini->size[0], c_size);
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)betaini->data[i];
    if ((i1 < 1) || (i1 > bestsubset->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, bestsubset->size[0], &jc_emlrtBCI,
        &st);
    }
  }

  emlrtSubAssignSizeCheckR2012b(&y->size[0], 1, &yhatrob->size[0], 1,
    &cb_emlrtECI, &st);
  emlrtSubAssignSizeCheckR2012b(&b_loop_ub, 1, &brob->size[0], 1, &s_emlrtECI,
    &st);
  loop_ub = brob->size[0];
  for (i = 0; i < loop_ub; i++) {
    brobLSH->data[i] = brob->data[i];
  }

  /*  plot(seq,[y yhatrob]) */
  /*  title(['Level shift in step t=' num2str(LSH(ilsh))]) */
  emlrtSubAssignSizeCheckR2012b(&loop_ub_tmp, 1, &allnumscale2->size[0], 1,
    &y_emlrtECI, &st);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->numscale2->data[i] = allnumscale2->data[i];
  }

  if (yin.contents->size[0] != yhatrob->size[0]) {
    emlrtSizeEqCheck1DR2012b(yin.contents->size[0], yhatrob->size[0],
      &m_emlrtECI, &st);
  }

  d = stoprint / b_h;
  b_st.site = &dd_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  a = muDoubleScalarSqrt(d);
  i = yhatrob->size[0];
  yhatrob->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(&st, yhatrob, i, &gf_emlrtRTEI);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    yhatrob->data[i] = (yin.contents->data[i] - yhatrob->data[i]) / a;
  }

  emlrtSubAssignSizeCheckR2012b(&yin.contents->size[0], 1, &yhatrob->size[0], 1,
    &p_emlrtECI, &st);
  loop_ub = yhatrob->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->RES->data[i] = yhatrob->data[i];
  }

  b_st.site = &cd_emlrtRSI;
  b_abs(&b_st, yhatrob, weights);
  a = 2.58 * factor;
  i = r2->size[0];
  r2->size[0] = weights->size[0];
  emxEnsureCapacity_boolean_T(&st, r2, i, &jf_emlrtRTEI);
  loop_ub = weights->size[0];
  for (i = 0; i < loop_ub; i++) {
    r2->data[i] = (weights->data[i] < a);
  }

  if (weightsst->size[0] != r2->size[0]) {
    emlrtSizeEqCheck1DR2012b(weightsst->size[0], r2->size[0], &n_emlrtECI, &st);
  }

  loop_ub = weightsst->size[0];
  for (i = 0; i < loop_ub; i++) {
    weightsst->data[i] = (weightsst->data[i] || r2->data[i]);
  }

  emxFree_boolean_T(&r2);

  /*  disp(sum(weightsst)) */
  emlrtSubAssignSizeCheckR2012b(&yin.contents->size[0], 1, &weightsst->size[0],
    1, &q_emlrtECI, &st);
  loop_ub = weightsst->size[0];
  for (i = 0; i < loop_ub; i++) {
    Weights->data[i] = weightsst->data[i];
  }

  emxFree_boolean_T(&weightsst);

  /*  Store the indexes among the bestr best, forming the bestrdiv2 best */
  /*  estimates of the target function (target function = numerator of */
  /*  squared scale) */
  if (1.0 > nbestindexes) {
    loop_ub = 0;
  } else {
    if (1 > betaini->size[0]) {
      emlrtDynamicBoundsCheckR2012b(1, 1, betaini->size[0], &fe_emlrtBCI, &st);
    }

    if (ib_size > betaini->size[0]) {
      emlrtDynamicBoundsCheckR2012b((int32_T)nbestindexes, 1, betaini->size[0],
        &ge_emlrtBCI, &st);
    }

    loop_ub = ib_size;
  }

  c_size[0] = 1;
  c_size[1] = loop_ub;
  b_st.site = &bd_emlrtRSI;
  indexShapeCheck(&b_st, betaini->size[0], c_size);
  emlrtSubAssignSizeCheckR2012b(&ib_size, 1, &loop_ub, 1, &ab_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    out->BestIndexes->data[i] = betaini->data[i];
  }

  b_st.site = &ad_emlrtRSI;
  b_sum(&b_st, WEIibestrdiv2, weights);
  emlrtSubAssignSizeCheckR2012b(&y->size[0], 1, &weights->size[0], 1,
    &eb_emlrtECI, &st);
  if ((lshift > 0.0) && msg) {
    emlrtAssertMATLABThread(&st, &emlrtRTEI);
    b_st.site = &yc_emlrtRSI;
    c_st.site = &cs_emlrtRSI;
    d_st.site = &ydb_emlrtRSI;
    k_st.site = &eeb_emlrtRSI;
    stoprint = emlrt_marshallIn(&d_st, d_feval(&d_st, b_emlrt_marshallOut(&d_st,
      b_cv4), emlrt_marshallOut(1.0), g_emlrt_marshallOut(&k_st, b_cv5),
      emlrt_marshallOut(lshift), &q_emlrtMCI), "<output of feval>");
    emlrtDisplayR2012b(emlrt_marshallOut(stoprint), (char_T *)"ans", &emlrtRTEI,
                       &st);
  }

  /*  save RES to output structure (these residuals can be used for example to */
  /*  prouduce the double wedge plot, see function wedgeplot for more details) */
  i = betaini->size[0];
  betaini->size[0] = Weights->size[0];
  emxEnsureCapacity_real_T(&st, betaini, i, &lf_emlrtRTEI);
  loop_ub = Weights->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] = Weights->data[i];
  }

  loop_ub = betaini->size[0];
  i = Weights->size[0];
  Weights->size[0] = betaini->size[0];
  emxEnsureCapacity_boolean_T(&st, Weights, i, &nf_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    Weights->data[i] = (betaini->data[i] == 1.0);
  }

  end = Weights->size[0];
  for (b_i = 0; b_i < end; b_i++) {
    if (Weights->data[b_i] && (b_i + 1 > betaini->size[0])) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, betaini->size[0], &oc_emlrtBCI,
        &st);
    }
  }

  end = Weights->size[0] - 1;
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (Weights->data[b_i]) {
      nz++;
    }
  }

  emxInit_int32_T(&st, &r3, 1, &qj_emlrtRTEI, true);
  i = r3->size[0];
  r3->size[0] = nz;
  emxEnsureCapacity_int32_T(&st, r3, i, &hd_emlrtRTEI);
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (Weights->data[b_i]) {
      r3->data[nz] = b_i + 1;
      nz++;
    }
  }

  loop_ub = r3->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r3->data[i] > seq.contents->size[0]) {
      emlrtDynamicBoundsCheckR2012b(r3->data[i], 1, seq.contents->size[0],
        &dc_emlrtBCI, &st);
    }
  }

  end = Weights->size[0];
  nz = 0;
  for (b_i = 0; b_i < end; b_i++) {
    if (Weights->data[b_i]) {
      nz++;
    }
  }

  emlrtSubAssignSizeCheckR2012b(&nz, 1, &r3->size[0], 1, &r_emlrtECI, &st);
  end = Weights->size[0] - 1;
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (Weights->data[b_i]) {
      nz++;
    }
  }

  emxInit_int32_T(&st, &r4, 1, &rj_emlrtRTEI, true);
  i = r4->size[0];
  r4->size[0] = nz;
  emxEnsureCapacity_int32_T(&st, r4, i, &hd_emlrtRTEI);
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (Weights->data[b_i]) {
      r4->data[nz] = b_i + 1;
      nz++;
    }
  }

  loop_ub = r3->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[r4->data[i] - 1] = seq.contents->data[r3->data[i] - 1];
  }

  emxFree_int32_T(&r4);
  end = Weights->size[0] - 1;
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (!Weights->data[b_i]) {
      nz++;
    }
  }

  emxInit_int32_T(&st, &r5, 1, &sj_emlrtRTEI, true);
  i = r5->size[0];
  r5->size[0] = nz;
  emxEnsureCapacity_int32_T(&st, r5, i, &hd_emlrtRTEI);
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (!Weights->data[b_i]) {
      r5->data[nz] = b_i + 1;
      nz++;
    }
  }

  nz = betaini->size[0];
  loop_ub = r5->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r5->data[i] > nz) {
      emlrtDynamicBoundsCheckR2012b(r5->data[i], 1, nz, &bc_emlrtBCI, &st);
    }

    betaini->data[r5->data[i] - 1] = rtNaN;
  }

  emxFree_int32_T(&r5);

  /*  Store units forming best h subset */
  i = out->Hsubset->size[0];
  out->Hsubset->size[0] = betaini->size[0];
  emxEnsureCapacity_real_T(&st, out->Hsubset, i, &pf_emlrtRTEI);
  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->Hsubset->data[i] = betaini->data[i];
  }

  loop_ub = brobLSH->size[0];
  i = yhatrob->size[0];
  yhatrob->size[0] = brobLSH->size[0];
  emxEnsureCapacity_real_T(&st, yhatrob, i, &qf_emlrtRTEI);
  for (i = 0; i < loop_ub; i++) {
    yhatrob->data[i] = brobLSH->data[i];
  }

  /*  Pass from numerator of squared estimate of the scale to proper scale */
  /*  estimate */
  b_st.site = &xc_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  sworst = muDoubleScalarSqrt(d);

  /*  Consistency factor */
  /*  Apply small sample correction factor of Pison et al. */
  b_st.site = &wc_emlrtRSI;
  d = corfactorRAW(&b_st, yin.contents->size[0], b_h / (real_T)
                   yin.contents->size[0]);
  b_st.site = &wc_emlrtRSI;
  if (d < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  d = muDoubleScalarSqrt(d);
  bestrdiv2 = sworst * factor * d;
  if (lshift > 0.0) {
    /*  Compute the residuals locally just changing the position of the level */
    /*  shift */
    ncomb = lshiftlocref->wlength;
    b_st.site = &vc_emlrtRSI;
    if (brobLSH->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(brobLSH->size[0], 1, brobLSH->size[0],
        &yb_emlrtBCI, &b_st);
    }

    a = brobLSH->data[brobLSH->size[0] - 1] - lshiftlocref->wlength;
    if (brobLSH->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(brobLSH->size[0], 1, brobLSH->size[0],
        &yb_emlrtBCI, &b_st);
    }

    stoprint = brobLSH->data[brobLSH->size[0] - 1] + lshiftlocref->wlength;
    c_st.site = &rg_emlrtRSI;
    if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(stoprint)) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, Cr, i, &tf_emlrtRTEI);
      Cr->data[0] = rtNaN;
    } else if (stoprint < a) {
      Cr->size[0] = 1;
      Cr->size[1] = 0;
    } else if ((muDoubleScalarIsInf(a) || muDoubleScalarIsInf(stoprint)) && (a ==
                stoprint)) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, Cr, i, &tf_emlrtRTEI);
      Cr->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(a) == a) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      loop_ub = (int32_T)muDoubleScalarFloor(stoprint - a);
      Cr->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&c_st, Cr, i, &tf_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        Cr->data[i] = a + (real_T)i;
      }
    } else {
      d_st.site = &sg_emlrtRSI;
      eml_float_colon(&d_st, a, stoprint, Cr);
    }

    /*  Reduce width of tloc dinamically */
    /*  make sure that tloc is in the range LSHmin and LSHmax */
    do {
      exitg2 = 0;
      b_st.site = &uc_emlrtRSI;
      c_st.site = &lr_emlrtRSI;
      d_st.site = &mr_emlrtRSI;
      e_st.site = &nr_emlrtRSI;
      if (Cr->size[1] < 1) {
        emlrtErrorWithMessageIdR2018a(&e_st, &f_emlrtRTEI,
          "Coder:toolbox:eml_min_or_max_varDimZero",
          "Coder:toolbox:eml_min_or_max_varDimZero", 0);
      }

      f_st.site = &or_emlrtRSI;
      g_st.site = &pr_emlrtRSI;
      nz = Cr->size[1];
      if (Cr->size[1] <= 2) {
        if (Cr->size[1] == 1) {
          stoprint = Cr->data[0];
        } else if ((Cr->data[0] < Cr->data[1]) || (muDoubleScalarIsNaN(Cr->data
                     [0]) && (!muDoubleScalarIsNaN(Cr->data[1])))) {
          stoprint = Cr->data[1];
        } else {
          stoprint = Cr->data[0];
        }
      } else {
        h_st.site = &ir_emlrtRSI;
        if (!muDoubleScalarIsNaN(Cr->data[0])) {
          idx = 1;
        } else {
          idx = 0;
          i_st.site = &jr_emlrtRSI;
          if (Cr->size[1] > 2147483646) {
            j_st.site = &qf_emlrtRSI;
            check_forloop_overflow_error(&j_st);
          }

          hmin = 2;
          exitg1 = false;
          while ((!exitg1) && (hmin <= nz)) {
            if (!muDoubleScalarIsNaN(Cr->data[hmin - 1])) {
              idx = hmin;
              exitg1 = true;
            } else {
              hmin++;
            }
          }
        }

        if (idx == 0) {
          stoprint = Cr->data[0];
        } else {
          h_st.site = &hr_emlrtRSI;
          stoprint = Cr->data[idx - 1];
          ia_data = idx + 1;
          i_st.site = &kr_emlrtRSI;
          if ((idx + 1 <= Cr->size[1]) && (Cr->size[1] > 2147483646)) {
            j_st.site = &qf_emlrtRSI;
            check_forloop_overflow_error(&j_st);
          }

          for (hmin = ia_data; hmin <= nz; hmin++) {
            d = Cr->data[hmin - 1];
            if (stoprint < d) {
              stoprint = d;
            }
          }
        }
      }

      b_guard1 = false;
      if (stoprint > lshift) {
        b_guard1 = true;
      } else {
        b_st.site = &uc_emlrtRSI;
        c_st.site = &gs_emlrtRSI;
        d_st.site = &hs_emlrtRSI;
        e_st.site = &is_emlrtRSI;
        f_st.site = &js_emlrtRSI;
        g_st.site = &ks_emlrtRSI;
        nz = Cr->size[1];
        if (Cr->size[1] <= 2) {
          if (Cr->size[1] == 1) {
            stoprint = Cr->data[0];
          } else if ((Cr->data[0] > Cr->data[1]) || (muDoubleScalarIsNaN
                      (Cr->data[0]) && (!muDoubleScalarIsNaN(Cr->data[1])))) {
            stoprint = Cr->data[1];
          } else {
            stoprint = Cr->data[0];
          }
        } else {
          h_st.site = &ir_emlrtRSI;
          if (!muDoubleScalarIsNaN(Cr->data[0])) {
            idx = 1;
          } else {
            idx = 0;
            i_st.site = &jr_emlrtRSI;
            if (Cr->size[1] > 2147483646) {
              j_st.site = &qf_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }

            hmin = 2;
            exitg1 = false;
            while ((!exitg1) && (hmin <= nz)) {
              if (!muDoubleScalarIsNaN(Cr->data[hmin - 1])) {
                idx = hmin;
                exitg1 = true;
              } else {
                hmin++;
              }
            }
          }

          if (idx == 0) {
            stoprint = Cr->data[0];
          } else {
            h_st.site = &hr_emlrtRSI;
            stoprint = Cr->data[idx - 1];
            ia_data = idx + 1;
            i_st.site = &kr_emlrtRSI;
            if ((idx + 1 <= Cr->size[1]) && (Cr->size[1] > 2147483646)) {
              j_st.site = &qf_emlrtRSI;
              check_forloop_overflow_error(&j_st);
            }

            for (hmin = ia_data; hmin <= nz; hmin++) {
              d = Cr->data[hmin - 1];
              if (stoprint > d) {
                stoprint = d;
              }
            }
          }
        }

        if (stoprint < lshift) {
          b_guard1 = true;
        } else {
          exitg2 = 1;
        }
      }

      if (b_guard1) {
        if (ncomb == 0.0) {
          exitg2 = 1;
        } else {
          ncomb--;
          b_st.site = &tc_emlrtRSI;
          if (brobLSH->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(brobLSH->size[0], 1, brobLSH->size[0],
              &yb_emlrtBCI, &b_st);
          }

          a = brobLSH->data[brobLSH->size[0] - 1] - ncomb;
          if (brobLSH->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(brobLSH->size[0], 1, brobLSH->size[0],
              &yb_emlrtBCI, &b_st);
          }

          stoprint = brobLSH->data[brobLSH->size[0] - 1] + ncomb;
          c_st.site = &rg_emlrtRSI;
          if (muDoubleScalarIsNaN(a) || muDoubleScalarIsNaN(stoprint)) {
            i = Cr->size[0] * Cr->size[1];
            Cr->size[0] = 1;
            Cr->size[1] = 1;
            emxEnsureCapacity_real_T(&c_st, Cr, i, &yf_emlrtRTEI);
            Cr->data[0] = rtNaN;
          } else if (stoprint < a) {
            Cr->size[0] = 1;
            Cr->size[1] = 0;
          } else if ((muDoubleScalarIsInf(a) || muDoubleScalarIsInf(stoprint)) &&
                     (a == stoprint)) {
            i = Cr->size[0] * Cr->size[1];
            Cr->size[0] = 1;
            Cr->size[1] = 1;
            emxEnsureCapacity_real_T(&c_st, Cr, i, &yf_emlrtRTEI);
            Cr->data[0] = rtNaN;
          } else if (muDoubleScalarFloor(a) == a) {
            i = Cr->size[0] * Cr->size[1];
            Cr->size[0] = 1;
            loop_ub = (int32_T)muDoubleScalarFloor(stoprint - a);
            Cr->size[1] = loop_ub + 1;
            emxEnsureCapacity_real_T(&c_st, Cr, i, &yf_emlrtRTEI);
            for (i = 0; i <= loop_ub; i++) {
              Cr->data[i] = a + (real_T)i;
            }
          } else {
            d_st.site = &sg_emlrtRSI;
            eml_float_colon(&d_st, a, stoprint, Cr);
          }

          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }
    } while (exitg2 == 0);

    i = bsb.contents->size[0];
    bsb.contents->size[0] = Cr->size[1];
    emxEnsureCapacity_real_T(&st, bsb.contents, i, &vf_emlrtRTEI);
    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      bsb.contents->data[i] = Cr->data[i];
    }

    b_st.site = &sc_emlrtRSI;
    i = bestnumscale2->size[0];
    bestnumscale2->size[0] = Cr->size[1];
    emxEnsureCapacity_real_T(&b_st, bestnumscale2, i, &wf_emlrtRTEI);
    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      bestnumscale2->data[i] = Cr->data[i];
    }

    c_st.site = &qg_emlrtRSI;
    result = bestnumscale2->size[0];
    d_st.site = &sf_emlrtRSI;
    empty_non_axis_sizes = true;
    if (bestnumscale2->size[0] != Cr->size[1]) {
      empty_non_axis_sizes = false;
    }

    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    i = out->Likloc->size[0] * out->Likloc->size[1];
    out->Likloc->size[0] = bestnumscale2->size[0];
    out->Likloc->size[1] = 4;
    emxEnsureCapacity_real_T(&c_st, out->Likloc, i, &cg_emlrtRTEI);
    for (i = 0; i < 1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        out->Likloc->data[i1] = bestnumscale2->data[i1];
      }
    }

    for (i = 0; i < 3; i++) {
      for (i1 = 0; i1 < result; i1++) {
        out->Likloc->data[i1 + out->Likloc->size[0] * (i + 1)] = 0.0;
      }
    }

    i = (int32_T)(Cr->data[Cr->size[1] - 1] + (1.0 - Cr->data[0]));
    emlrtForLoopVectorCheckR2021a(Cr->data[0], 1.0, Cr->data[Cr->size[1] - 1],
      mxDOUBLE_CLASS, i, &m_emlrtRTEI, &st);
    for (ia_data = 0; ia_data < i; ia_data++) {
      stoprint = Cr->data[0] + (real_T)ia_data;
      loop_ub = yhatrob->size[0];
      i1 = bestnumscale2->size[0];
      bestnumscale2->size[0] = yhatrob->size[0];
      emxEnsureCapacity_real_T(&st, bestnumscale2, i1, &eg_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        bestnumscale2->data[i1] = yhatrob->data[i1];
      }

      if (brobLSH->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(brobLSH->size[0], 1, brobLSH->size[0],
          &pb_emlrtBCI, &st);
      }

      bestnumscale2->data[brobLSH->size[0] - 1] = stoprint;
      d = ((real_T)y->size[0] - stoprint) + 1.0;
      if (!(d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d, &u_emlrtDCI, &st);
      }

      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &v_emlrtDCI, &st);
      }

      if (!(stoprint - 1.0 >= 0.0)) {
        emlrtNonNegativeCheckR2012b(stoprint - 1.0, &u_emlrtDCI, &st);
      }

      a = (int32_T)muDoubleScalarFloor(stoprint - 1.0);
      if (stoprint - 1.0 != a) {
        emlrtIntegerCheckR2012b(stoprint - 1.0, &v_emlrtDCI, &st);
      }

      i1 = weights->size[0];
      weights->size[0] = (int32_T)(stoprint - 1.0) + (int32_T)d;
      emxEnsureCapacity_real_T(&st, weights, i1, &gg_emlrtRTEI);
      if (!(stoprint - 1.0 >= 0.0)) {
        emlrtNonNegativeCheckR2012b(stoprint - 1.0, &u_emlrtDCI, &st);
      }

      if (stoprint - 1.0 != a) {
        emlrtIntegerCheckR2012b(stoprint - 1.0, &v_emlrtDCI, &st);
      }

      loop_ub = (int32_T)(stoprint - 1.0);
      for (i1 = 0; i1 < loop_ub; i1++) {
        weights->data[i1] = 0.0;
      }

      d = ((real_T)y->size[0] - stoprint) + 1.0;
      if (!(d >= 0.0)) {
        emlrtNonNegativeCheckR2012b(d, &u_emlrtDCI, &st);
      }

      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &v_emlrtDCI, &st);
      }

      loop_ub = (int32_T)d;
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (!(stoprint - 1.0 >= 0.0)) {
          emlrtNonNegativeCheckR2012b(stoprint - 1.0, &u_emlrtDCI, &st);
        }

        if (stoprint - 1.0 != a) {
          emlrtIntegerCheckR2012b(stoprint - 1.0, &v_emlrtDCI, &st);
        }

        weights->data[i1 + (int32_T)(stoprint - 1.0)] = 1.0;
      }

      i1 = Xlshift.contents->size[0] * Xlshift.contents->size[1];
      Xlshift.contents->size[0] = weights->size[0];
      Xlshift.contents->size[1] = 1;
      emxEnsureCapacity_real_T(&st, Xlshift.contents, i1, &lg_emlrtRTEI);
      loop_ub = weights->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        Xlshift.contents->data[i1] = weights->data[i1];
      }

      b_st.site = &rc_emlrtRSI;
      lik(&b_st, &Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso,
          &varampl, &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat,
          &yin, bestnumscale2);
      loop_ub = bsb.contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (bsb.contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i1], &q_emlrtDCI, &st);
        }

        i2 = (int32_T)bsb.contents->data[i1];
        if ((i2 < 1) || (i2 > yin.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, yin.contents->size[0],
            &lb_emlrtBCI, &st);
        }
      }

      if (bsb.contents->size[0] != yhat.contents->size[0]) {
        emlrtSizeEqCheck1DR2012b(bsb.contents->size[0], yhat.contents->size[0],
          &t_emlrtECI, &st);
      }

      i1 = b_yin->size[0];
      b_yin->size[0] = bsb.contents->size[0];
      emxEnsureCapacity_real_T(&st, b_yin, i1, &qg_emlrtRTEI);
      loop_ub = bsb.contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_yin->data[i1] = (yin.contents->data[(int32_T)bsb.contents->data[i1] -
                           1] - yhat.contents->data[i1]) / sworst;
      }

      b_st.site = &qc_emlrtRSI;
      HUrho(&b_st, b_yin, lshiftlocref->huberc, weights);
      b_st.site = &qc_emlrtRSI;
      power(&b_st, weights, betaini);
      if ((ia_data + 1 < 1) || (ia_data + 1 > out->Likloc->size[0])) {
        emlrtDynamicBoundsCheckR2012b(ia_data + 1, 1, out->Likloc->size[0],
          &jb_emlrtBCI, &st);
      }

      b_st.site = &qc_emlrtRSI;
      out->Likloc->data[ia_data + out->Likloc->size[0]] = sum(&b_st, betaini);
      loop_ub = bsb.contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        if (bsb.contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i1], &o_emlrtDCI, &st);
        }

        i2 = (int32_T)bsb.contents->data[i1];
        if ((i2 < 1) || (i2 > yin.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, yin.contents->size[0],
            &ib_emlrtBCI, &st);
        }
      }

      if (bsb.contents->size[0] != yhat.contents->size[0]) {
        emlrtSizeEqCheck1DR2012b(bsb.contents->size[0], yhat.contents->size[0],
          &u_emlrtECI, &st);
      }

      i1 = b_yin->size[0];
      b_yin->size[0] = bsb.contents->size[0];
      emxEnsureCapacity_real_T(&st, b_yin, i1, &wg_emlrtRTEI);
      loop_ub = bsb.contents->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_yin->data[i1] = yin.contents->data[(int32_T)bsb.contents->data[i1] - 1]
          - yhat.contents->data[i1];
      }

      b_st.site = &pc_emlrtRSI;
      power(&b_st, b_yin, weights);
      if ((ia_data + 1 < 1) || (ia_data + 1 > out->Likloc->size[0])) {
        emlrtDynamicBoundsCheckR2012b(ia_data + 1, 1, out->Likloc->size[0],
          &hb_emlrtBCI, &st);
      }

      b_st.site = &pc_emlrtRSI;
      out->Likloc->data[ia_data + out->Likloc->size[0] * 2] = sum(&b_st, weights);
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    /*  Use Huberized residual sum of squares to find minimum */
    b_st.site = &oc_emlrtRSI;
    if (lshiftlocref->typeres + 1.0 != (int32_T)muDoubleScalarFloor
        (lshiftlocref->typeres + 1.0)) {
      emlrtIntegerCheckR2012b(lshiftlocref->typeres + 1.0, &vc_emlrtDCI, &b_st);
    }

    if (((int32_T)(lshiftlocref->typeres + 1.0) < 1) || ((int32_T)
         (lshiftlocref->typeres + 1.0) > 4)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lshiftlocref->typeres + 1.0), 1, 4,
        &ie_emlrtBCI, &b_st);
    }

    c_st.site = &ns_emlrtRSI;
    d_st.site = &os_emlrtRSI;
    e_st.site = &ps_emlrtRSI;
    f_st.site = &gr_emlrtRSI;
    nz = out->Likloc->size[0];
    if (out->Likloc->size[0] <= 2) {
      if (out->Likloc->size[0] == 1) {
        idx = 1;
      } else if ((out->Likloc->data[out->Likloc->size[0] * ((int32_T)
                   (lshiftlocref->typeres + 1.0) - 1)] > out->Likloc->data
                  [(out->Likloc->size[0] + out->Likloc->size[0] * ((int32_T)
                    (lshiftlocref->typeres + 1.0) - 1)) - 1]) ||
                 (muDoubleScalarIsNaN(out->Likloc->data[out->Likloc->size[0] *
                   ((int32_T)(lshiftlocref->typeres + 1.0) - 1)]) &&
                  (!muDoubleScalarIsNaN(out->Likloc->data[(out->Likloc->size[0]
          + out->Likloc->size[0] * ((int32_T)(lshiftlocref->typeres + 1.0) - 1))
        - 1])))) {
        idx = out->Likloc->size[0];
      } else {
        idx = 1;
      }
    } else {
      g_st.site = &ir_emlrtRSI;
      i = (int32_T)(lshiftlocref->typeres + 1.0) - 1;
      if (!muDoubleScalarIsNaN(out->Likloc->data[out->Likloc->size[0] *
           ((int32_T)(lshiftlocref->typeres + 1.0) - 1)])) {
        idx = 1;
      } else {
        idx = 0;
        h_st.site = &jr_emlrtRSI;
        if (2 > out->Likloc->size[0]) {
          empty_non_axis_sizes = false;
        } else {
          empty_non_axis_sizes = (out->Likloc->size[0] > 2147483646);
        }

        if (empty_non_axis_sizes) {
          i_st.site = &qf_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        hmin = 2;
        exitg1 = false;
        while ((!exitg1) && (hmin <= nz)) {
          if (!muDoubleScalarIsNaN(out->Likloc->data[(hmin + out->Likloc->size[0]
                * i) - 1])) {
            idx = hmin;
            exitg1 = true;
          } else {
            hmin++;
          }
        }
      }

      if (idx == 0) {
        idx = 1;
      } else {
        g_st.site = &hr_emlrtRSI;
        stoprint = out->Likloc->data[(idx + out->Likloc->size[0] * ((int32_T)
          (lshiftlocref->typeres + 1.0) - 1)) - 1];
        ia_data = idx + 1;
        h_st.site = &kr_emlrtRSI;
        if (idx + 1 > out->Likloc->size[0]) {
          empty_non_axis_sizes = false;
        } else {
          empty_non_axis_sizes = (out->Likloc->size[0] > 2147483646);
        }

        if (empty_non_axis_sizes) {
          i_st.site = &qf_emlrtRSI;
          check_forloop_overflow_error(&i_st);
        }

        for (hmin = ia_data; hmin <= nz; hmin++) {
          d = out->Likloc->data[(hmin + out->Likloc->size[0] * i) - 1];
          if (stoprint > d) {
            stoprint = d;
            idx = hmin;
          }
        }
      }
    }

    if ((idx < 1) || (idx > out->Likloc->size[0])) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, out->Likloc->size[0], &gb_emlrtBCI,
        &st);
    }

    posLS = out->Likloc->data[idx - 1];
    d = ((real_T)yin.contents->size[0] - posLS) + 1.0;
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &l_emlrtDCI, &st);
    }

    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &m_emlrtDCI, &st);
    }

    if (!(posLS - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(posLS - 1.0, &l_emlrtDCI, &st);
    }

    a = (int32_T)muDoubleScalarFloor(posLS - 1.0);
    if (posLS - 1.0 != a) {
      emlrtIntegerCheckR2012b(posLS - 1.0, &m_emlrtDCI, &st);
    }

    i = weights->size[0];
    weights->size[0] = (int32_T)(posLS - 1.0) + (int32_T)d;
    emxEnsureCapacity_real_T(&st, weights, i, &mg_emlrtRTEI);
    if (!(posLS - 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(posLS - 1.0, &l_emlrtDCI, &st);
    }

    if (posLS - 1.0 != a) {
      emlrtIntegerCheckR2012b(posLS - 1.0, &m_emlrtDCI, &st);
    }

    loop_ub = (int32_T)(posLS - 1.0);
    for (i = 0; i < loop_ub; i++) {
      weights->data[i] = 0.0;
    }

    d = ((real_T)yin.contents->size[0] - posLS) + 1.0;
    if (!(d >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d, &l_emlrtDCI, &st);
    }

    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &m_emlrtDCI, &st);
    }

    loop_ub = (int32_T)d;
    for (i = 0; i < loop_ub; i++) {
      if (!(posLS - 1.0 >= 0.0)) {
        emlrtNonNegativeCheckR2012b(posLS - 1.0, &l_emlrtDCI, &st);
      }

      if (posLS - 1.0 != a) {
        emlrtIntegerCheckR2012b(posLS - 1.0, &m_emlrtDCI, &st);
      }

      weights->data[i + (int32_T)(posLS - 1.0)] = 1.0;
    }

    i = Xlshift.contents->size[0] * Xlshift.contents->size[1];
    Xlshift.contents->size[0] = weights->size[0];
    Xlshift.contents->size[1] = 1;
    emxEnsureCapacity_real_T(&st, Xlshift.contents, i, &ug_emlrtRTEI);
    loop_ub = weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      Xlshift.contents->data[i] = weights->data[i];
    }

    if (brobLSH->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(brobLSH->size[0], 1, brobLSH->size[0],
        &db_emlrtBCI, &st);
    }

    yhatrob->data[brobLSH->size[0] - 1] = posLS;
  }

  emxFree_real_T(&brobLSH);
  i = bsb.contents->size[0];
  bsb.contents->size[0] = seq.contents->size[0];
  emxEnsureCapacity_real_T(&st, bsb.contents, i, &rf_emlrtRTEI);
  loop_ub = seq.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsb.contents->data[i] = seq.contents->data[i];
  }

  /*  Compute fitted values using final estimate of beta for all the */
  /*  observations */
  b_st.site = &nc_emlrtRSI;
  lik(&b_st, &Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso, &varampl,
      &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, &yin, yhatrob);

  /*  REWEIGHTING STEP */
  /*  residuals = Raw residuals using final estimate of beta */
  if (yin.contents->size[0] != yhat.contents->size[0]) {
    emlrtSizeEqCheck1DR2012b(yin.contents->size[0], yhat.contents->size[0],
      &v_emlrtECI, &st);
  }

  i = out->residuals->size[0];
  out->residuals->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(&st, out->residuals, i, &sf_emlrtRTEI);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = yin.contents->data[i] - yhat.contents->data[i];
  }

  /*  Find the units with the smallest absolute p+1 residuals (before */
  /*  reweighting step) */
  b_st.site = &mc_emlrtRSI;
  c_st.site = &mc_emlrtRSI;
  b_abs(&c_st, out->residuals, bestnumscale2);
  c_st.site = &cq_emlrtRSI;
  sort(&c_st, bestnumscale2, ia);
  i = betaini->size[0];
  betaini->size[0] = ia->size[0];
  emxEnsureCapacity_real_T(&b_st, betaini, i, &ue_emlrtRTEI);
  loop_ub = ia->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] = ia->data[i];
  }

  empty_non_axis_sizes = true;
  if (1 > betaini->size[0]) {
    emlrtDynamicBoundsCheckR2012b(1, 1, betaini->size[0], &je_emlrtBCI, &st);
  }

  loop_ub_tmp = b_loop_ub + 1;
  if ((b_loop_ub + 1 < 1.0) || (b_loop_ub + 1 > betaini->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)p + 1, 1, betaini->size[0],
      &ke_emlrtBCI, &st);
  }

  c_size[0] = 1;
  c_size[1] = b_loop_ub + 1;
  b_st.site = &lc_emlrtRSI;
  indexShapeCheck(&b_st, betaini->size[0], c_size);
  i = out->bs->size[0];
  out->bs->size[0] = b_loop_ub + 1;
  emxEnsureCapacity_real_T(&st, out->bs, i, &uf_emlrtRTEI);
  for (i = 0; i < loop_ub_tmp; i++) {
    out->bs->data[i] = betaini->data[i];
  }

  ncomb = 0.0;
  c_size[0] = 1;
  if (2 > Xsel.contents->size[1]) {
    i = 0;
    i1 = 0;
  } else {
    if (2 > Xsel.contents->size[1]) {
      emlrtDynamicBoundsCheckR2012b(2, 1, Xsel.contents->size[1], &ne_emlrtBCI,
        &st);
    }

    i = 1;
    if (Xsel.contents->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(Xsel.contents->size[1], 1,
        Xsel.contents->size[1], &oe_emlrtBCI, &st);
    }

    i1 = Xsel.contents->size[1];
  }

  loop_ub = i1 - i;
  while (empty_non_axis_sizes) {
    d = p + ncomb;
    if (1.0 > d) {
      idx = 0;
    } else {
      if (1 > betaini->size[0]) {
        emlrtDynamicBoundsCheckR2012b(1, 1, betaini->size[0], &le_emlrtBCI, &st);
      }

      if (((int32_T)d < 1) || ((int32_T)d > betaini->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, betaini->size[0],
          &me_emlrtBCI, &st);
      }

      idx = (int32_T)d;
    }

    c_size[1] = idx;
    b_st.site = &kc_emlrtRSI;
    indexShapeCheck(&b_st, betaini->size[0], c_size);
    i2 = out->bs->size[0];
    out->bs->size[0] = idx;
    emxEnsureCapacity_real_T(&st, out->bs, i2, &uf_emlrtRTEI);
    for (i2 = 0; i2 < idx; i2++) {
      out->bs->data[i2] = betaini->data[i2];
    }

    b_st.site = &jc_emlrtRSI;
    i2 = bestyhat->size[0] * bestyhat->size[1];
    bestyhat->size[0] = idx;
    bestyhat->size[1] = i1 - i;
    emxEnsureCapacity_real_T(&b_st, bestyhat, i2, &xf_emlrtRTEI);
    for (i2 = 0; i2 < loop_ub; i2++) {
      for (ia_data = 0; ia_data < idx; ia_data++) {
        i3 = (int32_T)betaini->data[ia_data];
        if ((i3 < 1) || (i3 > Xsel.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)betaini->data[ia_data], 1,
            Xsel.contents->size[0], &ac_emlrtBCI, &b_st);
        }

        bestyhat->data[ia_data + bestyhat->size[0] * i2] = Xsel.contents->data
          [(i3 + Xsel.contents->size[0] * (i + i2)) - 1];
      }
    }

    c_st.site = &jc_emlrtRSI;
    zscore(&c_st, bestyhat, WEIibestrdiv2);
    c_st.site = &lt_emlrtRSI;
    nz = local_rank(&c_st, WEIibestrdiv2);
    if (nz < (int32_T)pini - 1) {
      ncomb++;
    } else {
      empty_non_axis_sizes = false;
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* if the robust s0 is too small, compute it with a set of different methods: */
  /* Qn, Sn, std and the interquantile difference for increasing percentages */
  /* ([0.25-0.75], [0.26-0.76], ...) */
  if (muDoubleScalarAbs(bestrdiv2) < 1.0E-7) {
    if (msg) {
      b_st.site = &feb_emlrtRSI;
      disp(&b_st, h_emlrt_marshallOut(&b_st, b_cv6), &c_emlrtMCI);
    }

    b_st.site = &ic_emlrtRSI;
    zscoreFS(&b_st, out->residuals, betaini, &stoprint, &bestrdiv2);
    if (bestrdiv2 == 0.0) {
      b_st.site = &hc_emlrtRSI;
      b_zscoreFS(&b_st, out->residuals, betaini, &stoprint, &bestrdiv2);
    }

    if (bestrdiv2 == 0.0) {
      b_st.site = &gc_emlrtRSI;
      c_zscoreFS(&b_st, out->residuals, betaini, &stoprint, &bestrdiv2);
    }

    if (bestrdiv2 == 0.0) {
      b_st.site = &fc_emlrtRSI;
      b_abs(&b_st, out->residuals, betaini);
      ia_data = 0;
      exitg1 = false;
      while ((!exitg1) && (ia_data < 25)) {
        b_st.site = &ec_emlrtRSI;
        bestrdiv2 = prctile(&b_st, betaini, (real_T)ia_data + 75.0) - prctile
          (&b_st, betaini, 100.0 - ((real_T)ia_data + 75.0));
        if (bestrdiv2 > 0.0) {
          exitg1 = true;
        } else {
          ia_data++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }
    }

    /* weights = abs(residuals)<=1e-7; */
    /*  stdres = residuals/s0; */
  }

  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] /= bestrdiv2;
  }

  if (SmallSampleCor == 1.0) {
    stoprint = pini + lshiftYN.contents;
    if (bdp == -99.0) {
      bdp = 1.0 - h / (real_T)yin.contents->size[0];
    }

    if (yin.contents->size[0] < 50) {
      c_yin = 50;
    } else {
      c_yin = yin.contents->size[0];
    }

    b_st.site = &dc_emlrtRSI;
    RobRegrSize(&b_st, c_yin, stoprint, bdp);
    b_st.site = &cc_emlrtRSI;
    stoprint = d1 / chi2inv(&b_st);
    b_st.site = &cc_emlrtRSI;
    if (stoprint < 0.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    stoprint = muDoubleScalarSqrt(stoprint);
    b_st.site = &bc_emlrtRSI;
    b_abs(&b_st, out->residuals, weights);
    b_st.site = &bc_emlrtRSI;
    d = chi2inv(&b_st);
    b_st.site = &bc_emlrtRSI;
    if (d < 0.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    d = muDoubleScalarSqrt(d);
    d *= stoprint;
    i = b_weights.contents->size[0];
    b_weights.contents->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(&st, b_weights.contents, i, &bg_emlrtRTEI);
    loop_ub = weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_weights.contents->data[i] = (weights->data[i] <= d);
    }
  } else if (SmallSampleCor == 2.0) {
    b_st.site = &ac_emlrtRSI;
    GYfilt(&b_st, out->residuals, b_weights.contents);
  } else if (SmallSampleCor == 3.0) {
    b_st.site = &yb_emlrtRSI;
    b_GYfilt(&b_st, out->residuals, b_weights.contents);
  } else if (SmallSampleCor == 4.0) {
    b_st.site = &xb_emlrtRSI;
    b_abs(&b_st, out->residuals, weights);
    b_st.site = &xb_emlrtRSI;
    d = chi2inv(&b_st);
    b_st.site = &xb_emlrtRSI;
    if (d < 0.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    d = muDoubleScalarSqrt(d);
    i = b_weights.contents->size[0];
    b_weights.contents->size[0] = weights->size[0];
    emxEnsureCapacity_boolean_T(&st, b_weights.contents, i, &ag_emlrtRTEI);
    loop_ub = weights->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_weights.contents->data[i] = (weights->data[i] <= d);
    }
  } else {
    b_st.site = &wb_emlrtRSI;
    i_error(&b_st);
  }

  /*  else */
  /*      % There is an approximate perfect fit for the first h observations. */
  /*      % We consider as outliers all units with residual greater than 1e-7. */
  /*      weights = abs(residuals)<=1e-7; */
  /*  */
  /*      %     % Store the weights */
  /*      %     out.weights=weights; */
  /*  */
  /*  */
  /*      % s is set to 0 */
  /*  %     s0=0; */
  /*  % */
  /*  %     % Standardized residuals are artificially set equal to raw residuals. */
  /*  %     stdres=residuals; */
  /*  end */
  /*  weights is a boolean vector. */
  end = b_weights.contents->size[0] - 1;
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (b_weights.contents->data[b_i]) {
      nz++;
    }
  }

  emxInit_int32_T(&st, &r6, 1, &tj_emlrtRTEI, true);
  i = r6->size[0];
  r6->size[0] = nz;
  emxEnsureCapacity_int32_T(&st, r6, i, &hd_emlrtRTEI);
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (b_weights.contents->data[b_i]) {
      r6->data[nz] = b_i + 1;
      nz++;
    }
  }

  i = bsb.contents->size[0];
  bsb.contents->size[0] = r6->size[0];
  emxEnsureCapacity_real_T(&st, bsb.contents, i, &dg_emlrtRTEI);
  loop_ub = r6->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r6->data[i] > seq.contents->size[0]) {
      emlrtDynamicBoundsCheckR2012b(r6->data[i], 1, seq.contents->size[0],
        &xb_emlrtBCI, &st);
    }

    bsb.contents->data[i] = seq.contents->data[r6->data[i] - 1];
  }

  /*  Store bsb to use in order to find sum of squares of residuals for */
  /*  reduced model. */
  i = allnumscale2->size[0];
  allnumscale2->size[0] = bsb.contents->size[0];
  emxEnsureCapacity_real_T(&st, allnumscale2, i, &fg_emlrtRTEI);
  loop_ub = bsb.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    allnumscale2->data[i] = bsb.contents->data[i];
  }

  /*  Find new estimate of beta using only observations which have */
  /*  weight equal to 1. Notice that new brob overwrites old brob */
  /*  computed previously. */
  emxInit_real_T(&st, &bfb_emlrtRSI, 1, &pj_emlrtRTEI, true);
  if ((varampl.contents == 0.0) && (lshiftYN.contents == 0.0)) {
    /*  In this case the model is linear */
    /*  Function lik constructs fitted values and residual sum of */
    /*  squares */
    loop_ub = Xsel.contents->size[1];
    i = bestyhat->size[0] * bestyhat->size[1];
    bestyhat->size[0] = bsb.contents->size[0];
    bestyhat->size[1] = Xsel.contents->size[1];
    emxEnsureCapacity_real_T(&st, bestyhat, i, &ig_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      idx = bsb.contents->size[0];
      for (i1 = 0; i1 < idx; i1++) {
        if (bsb.contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i1], &cb_emlrtDCI, &st);
        }

        i2 = (int32_T)bsb.contents->data[i1];
        if ((i2 < 1) || (i2 > Xsel.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)bsb.contents->data[i1], 1,
            Xsel.contents->size[0], &vb_emlrtBCI, &st);
        }

        bestyhat->data[i1 + bestyhat->size[0] * i] = Xsel.contents->data[(i2 +
          Xsel.contents->size[0] * i) - 1];
      }
    }

    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(&st, b_yin, i, &jg_emlrtRTEI);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &ab_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > yin.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb.contents->data[i], 1,
          yin.contents->size[0], &tb_emlrtBCI, &st);
      }

      b_yin->data[i] = yin.contents->data[i1 - 1];
    }

    b_st.site = &vb_emlrtRSI;
    mldivide(&b_st, bestyhat, b_yin, beta.contents);

    /*  update fitted values */
    b_st.site = &ub_emlrtRSI;
    c_st.site = &rj_emlrtRSI;
    c_dynamic_size_checks(&c_st, Xsel.contents, beta.contents,
                          Xsel.contents->size[1], beta.contents->size[0]);
    c_st.site = &qj_emlrtRSI;
    b_mtimes(&c_st, Xsel.contents, beta.contents, bfb_emlrtRSI);

    /*  find fitted values using all observations */
    b_st.site = &tb_emlrtRSI;
    c_st.site = &rj_emlrtRSI;
    c_dynamic_size_checks(&c_st, Xsel.contents, beta.contents,
                          Xsel.contents->size[1], beta.contents->size[0]);
    c_st.site = &qj_emlrtRSI;
    b_mtimes(&c_st, Xsel.contents, beta.contents, yhat.contents);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &s_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > yin.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, yin.contents->size[0], &nb_emlrtBCI,
          &st);
      }
    }

    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &r_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > yhat.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, yhat.contents->size[0],
          &mb_emlrtBCI, &st);
      }
    }

    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(&st, b_yin, i, &rg_emlrtRTEI);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      nz = (int32_T)bsb.contents->data[i] - 1;
      b_yin->data[i] = yin.contents->data[nz] - yhat.contents->data[nz];
    }

    b_st.site = &sb_emlrtRSI;
    power(&b_st, b_yin, weights);
    b_st.site = &sb_emlrtRSI;
    a = sum(&b_st, weights) / (b_h - (real_T)Xsel.contents->size[1]);
    b_st.site = &rb_emlrtRSI;
    c_st.site = &rj_emlrtRSI;
    dynamic_size_checks(&c_st, Xsel.contents, Xsel.contents, Xsel.contents->
                        size[0], Xsel.contents->size[0]);
    c_st.site = &qj_emlrtRSI;
    c_mtimes(&c_st, Xsel.contents, Xsel.contents, bestyhat);
    b_st.site = &rb_emlrtRSI;
    inv(&b_st, bestyhat, out->invXX);
    i = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
    WEIibestrdiv2->size[0] = out->invXX->size[0];
    WEIibestrdiv2->size[1] = out->invXX->size[1];
    emxEnsureCapacity_real_T(&st, WEIibestrdiv2, i, &xg_emlrtRTEI);
    loop_ub = out->invXX->size[0] * out->invXX->size[1];
    for (i = 0; i < loop_ub; i++) {
      WEIibestrdiv2->data[i] = a * out->invXX->data[i];
    }

    i = bestsubset->size[0] * bestsubset->size[1];
    bestsubset->size[0] = Xsel.contents->size[0];
    bestsubset->size[1] = Xsel.contents->size[1];
    emxEnsureCapacity_real_T(&st, bestsubset, i, &ch_emlrtRTEI);
    loop_ub = Xsel.contents->size[0] * Xsel.contents->size[1];
    for (i = 0; i < loop_ub; i++) {
      bestsubset->data[i] = Xsel.contents->data[i];
    }
  } else if ((varampl.contents == 0.0) && (lshiftYN.contents == 1.0)) {
    /*  In this case there is just level shift however we do not redo */
    /*  the non linear estimation but a simple LS */
    b_st.site = &qb_emlrtRSI;
    c_st.site = &qg_emlrtRSI;
    if ((Xsel.contents->size[0] != 0) && (Xsel.contents->size[1] != 0)) {
      result = Xsel.contents->size[0];
    } else if ((Xlshift.contents->size[0] != 0) && (Xlshift.contents->size[1] !=
                0)) {
      result = Xlshift.contents->size[0];
    } else {
      result = Xsel.contents->size[0];
      if (Xlshift.contents->size[0] > Xsel.contents->size[0]) {
        result = Xlshift.contents->size[0];
      }
    }

    d_st.site = &sf_emlrtRSI;
    if ((Xsel.contents->size[0] != result) && ((Xsel.contents->size[0] != 0) &&
         (Xsel.contents->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    if ((Xlshift.contents->size[0] != result) && ((Xlshift.contents->size[0] !=
          0) && (Xlshift.contents->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
        "MATLAB:catenate:matrixDimensionMismatch",
        "MATLAB:catenate:matrixDimensionMismatch", 0);
    }

    empty_non_axis_sizes = (result == 0);
    if (empty_non_axis_sizes || ((Xsel.contents->size[0] != 0) &&
         (Xsel.contents->size[1] != 0))) {
      b_input_sizes_idx_1 = Xsel.contents->size[1];
    } else {
      b_input_sizes_idx_1 = 0;
    }

    if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
         (Xlshift.contents->size[1] != 0))) {
      sizes[1] = Xlshift.contents->size[1];
    } else {
      sizes[1] = 0;
    }

    i = bestsubset->size[0] * bestsubset->size[1];
    bestsubset->size[0] = result;
    bestsubset->size[1] = b_input_sizes_idx_1 + sizes[1];
    emxEnsureCapacity_real_T(&c_st, bestsubset, i, &tg_emlrtRTEI);
    for (i = 0; i < b_input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < result; i1++) {
        bestsubset->data[i1 + bestsubset->size[0] * i] = Xsel.contents->data[i1
          + result * i];
      }
    }

    loop_ub = sizes[1];
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 < result; i1++) {
        bestsubset->data[i1 + bestsubset->size[0] * b_input_sizes_idx_1] =
          Xlshift.contents->data[i1];
      }
    }

    loop_ub = bestsubset->size[1];
    i = bestyhat->size[0] * bestyhat->size[1];
    bestyhat->size[0] = bsb.contents->size[0];
    bestyhat->size[1] = bestsubset->size[1];
    emxEnsureCapacity_real_T(&st, bestyhat, i, &yg_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      idx = bsb.contents->size[0];
      for (i1 = 0; i1 < idx; i1++) {
        if (bsb.contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i1], &n_emlrtDCI, &st);
        }

        i2 = (int32_T)bsb.contents->data[i1];
        if ((i2 < 1) || (i2 > bestsubset->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)bsb.contents->data[i1], 1,
            bestsubset->size[0], &fb_emlrtBCI, &st);
        }

        bestyhat->data[i1 + bestyhat->size[0] * i] = bestsubset->data[(i2 +
          bestsubset->size[0] * i) - 1];
      }
    }

    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(&st, b_yin, i, &bh_emlrtRTEI);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &k_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > yin.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb.contents->data[i], 1,
          yin.contents->size[0], &eb_emlrtBCI, &st);
      }

      b_yin->data[i] = yin.contents->data[i1 - 1];
    }

    b_st.site = &pb_emlrtRSI;
    mldivide(&b_st, bestyhat, b_yin, beta.contents);

    /*  find fitted values using all observations */
    b_st.site = &ob_emlrtRSI;
    c_st.site = &rj_emlrtRSI;
    c_dynamic_size_checks(&c_st, bestsubset, beta.contents, bestsubset->size[1],
                          beta.contents->size[0]);
    c_st.site = &qj_emlrtRSI;
    b_mtimes(&c_st, bestsubset, beta.contents, yhat.contents);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &j_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > yin.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, yin.contents->size[0], &cb_emlrtBCI,
          &st);
      }
    }

    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &i_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > yhat.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, yhat.contents->size[0],
          &bb_emlrtBCI, &st);
      }
    }

    i = b_yin->size[0];
    b_yin->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(&st, b_yin, i, &gh_emlrtRTEI);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      nz = (int32_T)bsb.contents->data[i] - 1;
      b_yin->data[i] = yin.contents->data[nz] - yhat.contents->data[nz];
    }

    b_st.site = &nb_emlrtRSI;
    power(&b_st, b_yin, weights);
    b_st.site = &nb_emlrtRSI;
    a = sum(&b_st, weights) / (b_h - (real_T)bestsubset->size[1]);
    loop_ub = bestsubset->size[1];
    i = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
    WEIibestrdiv2->size[0] = bsb.contents->size[0];
    WEIibestrdiv2->size[1] = bestsubset->size[1];
    emxEnsureCapacity_real_T(&st, WEIibestrdiv2, i, &jh_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      idx = bsb.contents->size[0];
      for (i1 = 0; i1 < idx; i1++) {
        if (bsb.contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i1], &h_emlrtDCI, &st);
        }

        i2 = (int32_T)bsb.contents->data[i1];
        if ((i2 < 1) || (i2 > bestsubset->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)bsb.contents->data[i1], 1,
            bestsubset->size[0], &ab_emlrtBCI, &st);
        }

        WEIibestrdiv2->data[i1 + WEIibestrdiv2->size[0] * i] = bestsubset->data
          [(i2 + bestsubset->size[0] * i) - 1];
      }
    }

    b_st.site = &mb_emlrtRSI;
    loop_ub = bestsubset->size[1];
    i = out->invXX->size[0] * out->invXX->size[1];
    out->invXX->size[0] = bsb.contents->size[0];
    out->invXX->size[1] = bestsubset->size[1];
    emxEnsureCapacity_real_T(&b_st, out->invXX, i, &nh_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      idx = bsb.contents->size[0];
      for (i1 = 0; i1 < idx; i1++) {
        if (bsb.contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i1], &g_emlrtDCI, &b_st);
        }

        i2 = (int32_T)bsb.contents->data[i1];
        if ((i2 < 1) || (i2 > bestsubset->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)bsb.contents->data[i1], 1,
            bestsubset->size[0], &y_emlrtBCI, &b_st);
        }

        out->invXX->data[i1 + out->invXX->size[0] * i] = bestsubset->data[(i2 +
          bestsubset->size[0] * i) - 1];
      }
    }

    c_st.site = &rj_emlrtRSI;
    dynamic_size_checks(&c_st, WEIibestrdiv2, out->invXX, r6->size[0], r6->size
                        [0]);
    c_st.site = &qj_emlrtRSI;
    c_mtimes(&c_st, WEIibestrdiv2, out->invXX, bestyhat);
    b_st.site = &mb_emlrtRSI;
    inv(&b_st, bestyhat, out->invXX);
    i = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
    WEIibestrdiv2->size[0] = out->invXX->size[0];
    WEIibestrdiv2->size[1] = out->invXX->size[1];
    emxEnsureCapacity_real_T(&st, WEIibestrdiv2, i, &ph_emlrtRTEI);
    loop_ub = out->invXX->size[0] * out->invXX->size[1];
    for (i = 0; i < loop_ub; i++) {
      WEIibestrdiv2->data[i] = a * out->invXX->data[i];
    }
  } else {
    /*  model is non linear because there is time varying amplitude in seasonal component */
    loop_ub = Xtrend.contents->size[1];
    i = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
    WEIibestrdiv2->size[0] = bsb.contents->size[0];
    WEIibestrdiv2->size[1] = Xtrend.contents->size[1];
    emxEnsureCapacity_real_T(&st, WEIibestrdiv2, i, &hg_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      idx = bsb.contents->size[0];
      for (i1 = 0; i1 < idx; i1++) {
        if (bsb.contents->data[i1] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i1])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i1], &db_emlrtDCI, &st);
        }

        i2 = (int32_T)bsb.contents->data[i1];
        if ((i2 < 1) || (i2 > Xtrend.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)bsb.contents->data[i1], 1,
            Xtrend.contents->size[0], &wb_emlrtBCI, &st);
        }

        WEIibestrdiv2->data[i1 + WEIibestrdiv2->size[0] * i] =
          Xtrend.contents->data[(i2 + Xtrend.contents->size[0] * i) - 1];
      }
    }

    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &bb_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > Xseaso.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Xseaso.contents->size[0],
          &ub_emlrtBCI, &st);
      }
    }

    loop_ub = Xseaso.contents->size[1];
    i = Xseasof.contents->size[0] * Xseasof.contents->size[1];
    Xseasof.contents->size[0] = bsb.contents->size[0];
    Xseasof.contents->size[1] = Xseaso.contents->size[1];
    emxEnsureCapacity_real_T(&st, Xseasof.contents, i, &kg_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      idx = bsb.contents->size[0];
      for (i1 = 0; i1 < idx; i1++) {
        Xseasof.contents->data[i1 + Xseasof.contents->size[0] * i] =
          Xseaso.contents->data[((int32_T)bsb.contents->data[i1] +
          Xseaso.contents->size[0] * i) - 1];
      }
    }

    if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
      loop_ub = bsb.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i], &y_emlrtDCI, &st);
        }

        i1 = (int32_T)bsb.contents->data[i];
        if ((i1 < 1) || (i1 > X.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, X.contents->size[0], &sb_emlrtBCI,
            &st);
        }
      }

      loop_ub = X.contents->size[1];
      i = Xf.contents->size[0] * Xf.contents->size[1];
      Xf.contents->size[0] = bsb.contents->size[0];
      Xf.contents->size[1] = X.contents->size[1];
      emxEnsureCapacity_real_T(&st, Xf.contents, i, &og_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        idx = bsb.contents->size[0];
        for (i1 = 0; i1 < idx; i1++) {
          Xf.contents->data[i1 + Xf.contents->size[0] * i] = X.contents->data
            [((int32_T)bsb.contents->data[i1] + X.contents->size[0] * i) - 1];
        }
      }
    }

    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &x_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > Seq.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, Seq.contents->size[0], &rb_emlrtBCI,
          &st);
      }
    }

    i = Seqf.contents->size[0] * Seqf.contents->size[1];
    Seqf.contents->size[0] = bsb.contents->size[0];
    Seqf.contents->size[1] = 4;
    emxEnsureCapacity_real_T(&st, Seqf.contents, i, &ng_emlrtRTEI);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < 4; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        Seqf.contents->data[i1 + Seqf.contents->size[0] * i] =
          Seq.contents->data[((int32_T)bsb.contents->data[i1] +
                              Seq.contents->size[0] * i) - 1];
      }
    }

    i = bestnumscale2->size[0];
    bestnumscale2->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_real_T(&st, bestnumscale2, i, &pg_emlrtRTEI);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &w_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > yin.contents->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)bsb.contents->data[i], 1,
          yin.contents->size[0], &qb_emlrtBCI, &st);
      }

      bestnumscale2->data[i] = yin.contents->data[i1 - 1];
    }

    /*  Find new estimate of scale using only observations which have */
    /*  weight equal to 1. */
    i = b_weights.contents->size[0];
    b_weights.contents->size[0] = yin.contents->size[0];
    emxEnsureCapacity_boolean_T(&st, b_weights.contents, i, &sg_emlrtRTEI);
    loop_ub = yin.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_weights.contents->data[i] = false;
    }

    i = r3->size[0];
    r3->size[0] = bsb.contents->size[0];
    emxEnsureCapacity_int32_T(&st, r3, i, &vg_emlrtRTEI);
    loop_ub = bsb.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
          (bsb.contents->data[i])) {
        emlrtIntegerCheckR2012b(bsb.contents->data[i], &t_emlrtDCI, &st);
      }

      i1 = (int32_T)bsb.contents->data[i];
      if ((i1 < 1) || (i1 > y->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, y->size[0], &ob_emlrtBCI, &st);
      }

      r3->data[i] = i1;
    }

    loop_ub = r3->size[0];
    for (i = 0; i < loop_ub; i++) {
      b_weights.contents->data[r3->data[i] - 1] = true;
    }

    /*  MATLAB CCODER PART nlinfit replaced by lsqcurvefit */
    if (lshiftYN.contents == 1.0) {
      b_st.site = &lb_emlrtRSI;
      c_indexShapeCheck(&b_st, *(int32_T (*)[2])Xlshift.contents->size, r6->
                        size[0]);
      nz = Xlshift.contents->size[0] * Xlshift.contents->size[1];
      loop_ub = bsb.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i], &p_emlrtDCI, &st);
        }

        i1 = (int32_T)bsb.contents->data[i];
        if ((i1 < 1) || (i1 > nz)) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, nz, &kb_emlrtBCI, &st);
        }
      }

      i = Xlshiftf.contents->size[0];
      Xlshiftf.contents->size[0] = bsb.contents->size[0];
      emxEnsureCapacity_real_T(&st, Xlshiftf.contents, i, &dh_emlrtRTEI);
      loop_ub = bsb.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        Xlshiftf.contents->data[i] = Xlshift.contents->data[(int32_T)
          bsb.contents->data[i] - 1];
      }

      if (!((real_T)yhatrob->size[0] - 1.0 >= 0.0)) {
        emlrtNonNegativeCheckR2012b(-1.0, &wc_emlrtDCI, &st);
      }

      if (1 > yhatrob->size[0] - 1) {
        loop_ub = 0;
      } else {
        if (1 > yhatrob->size[0]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, yhatrob->size[0], &pe_emlrtBCI,
            &st);
        }

        if ((yhatrob->size[0] - 1 < 1) || (yhatrob->size[0] - 1 > yhatrob->size
             [0])) {
          emlrtDynamicBoundsCheckR2012b(yhatrob->size[0] - 1, 1, yhatrob->size[0],
            &qe_emlrtBCI, &st);
        }

        loop_ub = yhatrob->size[0] - 1;
      }

      c_size[0] = 1;
      c_size[1] = loop_ub;
      b_st.site = &d_emlrtRSI;
      indexShapeCheck(&b_st, yhatrob->size[0], c_size);
      b_st.site = &d_emlrtRSI;
      c_st.site = &aab_emlrtRSI;
      d_st.site = &bab_emlrtRSI;
      d_st.site = &bab_emlrtRSI;
      i = brob->size[0];
      brob->size[0] = loop_ub;
      emxEnsureCapacity_real_T(&st, brob, i, &ih_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        brob->data[i] = yhatrob->data[i];
      }

      i = b_yin->size[0];
      b_yin->size[0] = yhatrob->size[0] - 1;
      emxEnsureCapacity_real_T(&st, b_yin, i, &lh_emlrtRTEI);
      loop_ub = yhatrob->size[0] - 1;
      for (i = 0; i < loop_ub; i++) {
        b_yin->data[i] = rtMinusInf;
      }

      i = weights->size[0];
      weights->size[0] = yhatrob->size[0] - 1;
      emxEnsureCapacity_real_T(&st, weights, i, &oh_emlrtRTEI);
      loop_ub = yhatrob->size[0] - 1;
      for (i = 0; i < loop_ub; i++) {
        weights->data[i] = rtInf;
      }

      b_st.site = &d_emlrtRSI;
      lsqcurvefit(&b_st, &trend, &seasonal, &s, &yhatseaso, &Xseasof, &varampl,
                  &Seqf, &nexpl, &isemptyX, &Xf, &lshiftYN, &Xlshiftf, brob,
                  WEIibestrdiv2, bestnumscale2, b_yin, weights, beta.contents,
                  &stoprint, betaini, &ncomb, bestsubset);
    } else {
      i = Xlshiftf.contents->size[0];
      Xlshiftf.contents->size[0] = 1;
      emxEnsureCapacity_real_T(&st, Xlshiftf.contents, i, &ah_emlrtRTEI);
      Xlshiftf.contents->data[0] = 0.0;

      /*  [betaoutCHK,resnorm,residual,exitflag,output,lambda,XlinCHK]= lsqcurvefit(@likyhat,brobfinal,Xtrendf,yf); */
      b_st.site = &c_emlrtRSI;
      c_st.site = &aab_emlrtRSI;
      d_st.site = &bab_emlrtRSI;
      d_st.site = &bab_emlrtRSI;
      i = b_yin->size[0];
      b_yin->size[0] = yhatrob->size[0];
      emxEnsureCapacity_real_T(&st, b_yin, i, &eh_emlrtRTEI);
      loop_ub = yhatrob->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_yin->data[i] = rtMinusInf;
      }

      i = weights->size[0];
      weights->size[0] = yhatrob->size[0];
      emxEnsureCapacity_real_T(&st, weights, i, &fh_emlrtRTEI);
      loop_ub = yhatrob->size[0];
      for (i = 0; i < loop_ub; i++) {
        weights->data[i] = rtInf;
      }

      b_st.site = &c_emlrtRSI;
      lsqcurvefit(&b_st, &trend, &seasonal, &s, &yhatseaso, &Xseasof, &varampl,
                  &Seqf, &nexpl, &isemptyX, &Xf, &lshiftYN, &Xlshiftf, yhatrob,
                  WEIibestrdiv2, bestnumscale2, b_yin, weights, beta.contents,
                  &stoprint, betaini, &ncomb, bestsubset);
    }

    i = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
    WEIibestrdiv2->size[0] = 1;
    WEIibestrdiv2->size[1] = 1;
    emxEnsureCapacity_real_T(&st, WEIibestrdiv2, i, &hh_emlrtRTEI);
    WEIibestrdiv2->data[0] = 1.0 / (real_T)beta.contents->size[0];

    /*          MSE=(residuals'*residuals)/length(betaout); */
    /*          covB=MSE*inv(XlinCHK'*XlinCHK)*MSE; */
    i = out->invXX->size[0] * out->invXX->size[1];
    out->invXX->size[0] = 1;
    out->invXX->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->invXX, i, &kh_emlrtRTEI);
    out->invXX->data[0] = 1.0 / (real_T)beta.contents->size[0];

    /*  Now compute again vector yhat using final vector betaout */
    i = bsb.contents->size[0];
    bsb.contents->size[0] = seq.contents->size[0];
    emxEnsureCapacity_real_T(&st, bsb.contents, i, &mh_emlrtRTEI);
    loop_ub = seq.contents->size[0];
    for (i = 0; i < loop_ub; i++) {
      bsb.contents->data[i] = seq.contents->data[i];
    }

    b_st.site = &kb_emlrtRSI;
    lik(&b_st, &Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso,
        &varampl, &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat, &yin,
        beta.contents);
  }

  emxFree_real_T(&bfb_emlrtRSI);
  emxFree_int32_T(&r6);
  emxFree_int32_T(&r3);
  emxFree_real_T(&brob);

  /*  Store beta standard error, t stat and p values */
  b_st.site = &jb_emlrtRSI;
  diag(&b_st, WEIibestrdiv2, bestnumscale2);
  b_st.site = &jb_emlrtRSI;
  b_sqrt(&b_st, bestnumscale2);
  b_st.site = &ib_emlrtRSI;
  c_st.site = &gh_emlrtRSI;
  d_st.site = &hh_emlrtRSI;
  e_st.site = &ih_emlrtRSI;
  f_st.site = &nf_emlrtRSI;
  g_st.site = &jh_emlrtRSI;
  if (beta.contents->size[0] <= bestnumscale2->size[0]) {
    nz = beta.contents->size[0];
  } else {
    nz = bestnumscale2->size[0];
  }

  empty_non_axis_sizes = true;
  b_p = true;
  hmin = 0;
  exitg1 = false;
  while ((!exitg1) && (hmin < 2)) {
    if (hmin + 1 <= 1) {
      i = nz;
      i1 = beta.contents->size[0];
    } else {
      i = 1;
      i1 = 1;
    }

    if (i != i1) {
      b_p = false;
      exitg1 = true;
    } else {
      hmin++;
    }
  }

  if (b_p) {
    b_p = true;
    hmin = 0;
    exitg1 = false;
    while ((!exitg1) && (hmin < 2)) {
      if (hmin + 1 <= 1) {
        i = nz;
        i1 = bestnumscale2->size[0];
      } else {
        i = 1;
        i1 = 1;
      }

      if (i != i1) {
        b_p = false;
        exitg1 = true;
      } else {
        hmin++;
      }
    }

    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&g_st, &d_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  g_st.site = &of_emlrtRSI;
  h_st.site = &kh_emlrtRSI;
  if (beta.contents->size[0] <= bestnumscale2->size[0]) {
    nz = beta.contents->size[0];
  } else {
    nz = bestnumscale2->size[0];
  }

  empty_non_axis_sizes = true;
  b_p = true;
  hmin = 0;
  exitg1 = false;
  while ((!exitg1) && (hmin < 2)) {
    if (hmin + 1 <= 1) {
      i = nz;
      i1 = beta.contents->size[0];
    } else {
      i = 1;
      i1 = 1;
    }

    if (i != i1) {
      b_p = false;
      exitg1 = true;
    } else {
      hmin++;
    }
  }

  if (b_p) {
    b_p = true;
    hmin = 0;
    exitg1 = false;
    while ((!exitg1) && (hmin < 2)) {
      if (hmin + 1 <= 1) {
        i = nz;
        i1 = bestnumscale2->size[0];
      } else {
        i = 1;
        i1 = 1;
      }

      if (i != i1) {
        b_p = false;
        exitg1 = true;
      } else {
        hmin++;
      }
    }

    if (!b_p) {
      empty_non_axis_sizes = false;
    }
  } else {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&h_st, &d_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  h_st.site = &lh_emlrtRSI;
  if ((1 <= nz) && (nz > 2147483646)) {
    i_st.site = &qf_emlrtRSI;
    check_forloop_overflow_error(&i_st);
  }

  i = out->residuals->size[0];
  out->residuals->size[0] = beta.contents->size[0];
  emxEnsureCapacity_real_T(&c_st, out->residuals, i, &qh_emlrtRTEI);
  loop_ub = beta.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = beta.contents->data[i] / bestnumscale2->data[i];
  }

  b_st.site = &hb_emlrtRSI;
  b_abs(&b_st, out->residuals, weights);
  loop_ub = weights->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights->data[i] = -weights->data[i];
  }

  b_st.site = &hb_emlrtRSI;
  tcdf(&b_st, weights, y->size[0] - beta.contents->size[0], betaini);
  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    betaini->data[i] *= 2.0;
  }

  b_st.site = &gb_emlrtRSI;
  c_st.site = &rf_emlrtRSI;
  d_st.site = &sf_emlrtRSI;
  empty_non_axis_sizes = (bestnumscale2->size[0] == beta.contents->size[0]);
  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (out->residuals->size[0] != beta.contents->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  if (betaini->size[0] != beta.contents->size[0]) {
    empty_non_axis_sizes = false;
  }

  if (!empty_non_axis_sizes) {
    emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch",
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i = out->B->size[0] * out->B->size[1];
  out->B->size[0] = beta.contents->size[0];
  out->B->size[1] = 4;
  emxEnsureCapacity_real_T(&c_st, out->B, i, &rh_emlrtRTEI);
  loop_ub = beta.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i] = beta.contents->data[i];
  }

  loop_ub = bestnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0]] = bestnumscale2->data[i];
  }

  emxFree_real_T(&bestnumscale2);
  loop_ub = out->residuals->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0] * 2] = out->residuals->data[i];
  }

  loop_ub = betaini->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->B->data[i + out->B->size[0] * 3] = betaini->data[i];
  }

  if (lshift > 0.0) {
    /*  Store position of level shift */
    out->posLS.size[0] = 1;
    out->posLS.size[1] = 1;
    out->posLS.data[0] = posLS;
  } else {
    out->posLS.size[0] = 0;
    out->posLS.size[1] = 0;
  }

  /*  Computation of reweighted residuals. */
  if (yin.contents->size[0] != yhat.contents->size[0]) {
    emlrtSizeEqCheck1DR2012b(yin.contents->size[0], yhat.contents->size[0],
      &w_emlrtECI, &st);
  }

  i = out->residuals->size[0];
  out->residuals->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(&st, out->residuals, i, &sh_emlrtRTEI);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->residuals->data[i] = yin.contents->data[i] - yhat.contents->data[i];
  }

  /*  s2full */
  i = weights->size[0];
  weights->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(&st, weights, i, &th_emlrtRTEI);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (allnumscale2->data[i] != (int32_T)muDoubleScalarFloor(allnumscale2->
         data[i])) {
      emlrtIntegerCheckR2012b(allnumscale2->data[i], &f_emlrtDCI, &st);
    }

    i1 = (int32_T)allnumscale2->data[i];
    if ((i1 < 1) || (i1 > out->residuals->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)allnumscale2->data[i], 1,
        out->residuals->size[0], &x_emlrtBCI, &st);
    }

    weights->data[i] = out->residuals->data[i1 - 1];
  }

  b_st.site = &fb_emlrtRSI;
  i = betaini->size[0];
  betaini->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(&b_st, betaini, i, &uh_emlrtRTEI);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    i1 = (int32_T)allnumscale2->data[i];
    if ((i1 < 1) || (i1 > out->residuals->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)allnumscale2->data[i], 1,
        out->residuals->size[0], &w_emlrtBCI, &b_st);
    }

    betaini->data[i] = out->residuals->data[i1 - 1];
  }

  c_st.site = &rj_emlrtRSI;
  d_dynamic_size_checks(&c_st, weights, betaini, allnumscale2->size[0],
                        allnumscale2->size[0]);
  sworst = d_mtimes(weights, betaini);

  /*  s0 =sqrt(MSE) */
  b_st.site = &eb_emlrtRSI;
  power(&b_st, out->residuals, weights);
  if (b_weights.contents->size[0] != weights->size[0]) {
    emlrtSizeEqCheck1DR2012b(b_weights.contents->size[0], weights->size[0],
      &x_emlrtECI, &st);
  }

  b_st.site = &eb_emlrtRSI;
  c_st.site = &dk_emlrtRSI;
  d_st.site = &nh_emlrtRSI;
  nz = b_combineVectorElements(&d_st, b_weights.contents);
  i = weights->size[0];
  weights->size[0] = b_weights.contents->size[0];
  emxEnsureCapacity_real_T(&st, weights, i, &vh_emlrtRTEI);
  loop_ub = b_weights.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights->data[i] *= (real_T)b_weights.contents->data[i];
  }

  b_st.site = &eb_emlrtRSI;
  bestrdiv2 = sum(&b_st, weights) / ((real_T)nz - 1.0);
  b_st.site = &eb_emlrtRSI;
  if (bestrdiv2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  bestrdiv2 = muDoubleScalarSqrt(bestrdiv2);

  /*  Compute new standardized residuals. */
  /*  Apply consistency factor to reweighted estimate of sigma */
  b_st.site = &db_emlrtRSI;
  c_st.site = &dk_emlrtRSI;
  d_st.site = &nh_emlrtRSI;
  nz = b_combineVectorElements(&d_st, b_weights.contents);
  stoprint = nz;
  if (nz < yin.contents->size[0]) {
    /*  Make sure that hrew has at least T/2 observations */
    if (nz < (real_T)yin.contents->size[0] / 2.0) {
      stoprint = (real_T)yin.contents->size[0] / 2.0;
    }

    /*  factor=consistencyfactor(hrew,n,1); */
    b_st.site = &cb_emlrtRSI;
    a = norminv(0.5 * (stoprint / (real_T)yin.contents->size[0] + 1.0));

    /* factor=1/sqrt(1-(2*a.*normpdf(a))./(2*normcdf(a)-1)); */
    d = 1.0 - 2.0 * ((real_T)yin.contents->size[0] / stoprint) * a *
      (muDoubleScalarExp(-0.5 * a * a) / 2.5066282746310002);
    b_st.site = &bb_emlrtRSI;
    if (d < 0.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    d = muDoubleScalarSqrt(d);

    /*  Apply small sample correction factor to reweighted estimate */
    /*  of sigma */
    b_st.site = &ab_emlrtRSI;
    a = corfactorREW(&b_st, yin.contents->size[0], stoprint / (real_T)
                     yin.contents->size[0]);
    b_st.site = &ab_emlrtRSI;
    if (a < 0.0) {
      emlrtErrorWithMessageIdR2018a(&b_st, &xb_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    a = muDoubleScalarSqrt(a);
    factor = 1.0 / d * a;
  } else {
    factor = 1.0;
  }

  bestrdiv2 *= factor;
  if (!(bestrdiv2 == 0.0)) {
    loop_ub = out->residuals->size[0];
    for (i = 0; i < loop_ub; i++) {
      out->residuals->data[i] /= bestrdiv2;
    }
  }

  /*  Declare as outliers the observations which have a standardized */
  /*  residual greater than cutoff. REMARK: while the first threshold */
  /*  was based on the Student T (with modified degrees of freedom), in */
  /*  this second round the threshold is based on the Normal. Notice */
  /*  that: sqrt(chi2inv(0.975,1)) = tinv(0.9875,\infinity) = */
  /*  norminv(0.9875) */
  i = out->yhat->size[0];
  out->yhat->size[0] = yhat.contents->size[0];
  emxEnsureCapacity_real_T(&st, out->yhat, i, &wh_emlrtRTEI);
  loop_ub = yhat.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->yhat->data[i] = yhat.contents->data[i];
  }

  /*  Store quantities in the out structure */
  b_st.site = &y_emlrtRSI;
  b_abs(&b_st, out->residuals, weights);
  b_st.site = &y_emlrtRSI;
  d = norminv((conflev + 1.0) / 2.0);
  i = Weights->size[0];
  Weights->size[0] = weights->size[0];
  emxEnsureCapacity_boolean_T(&st, Weights, i, &xh_emlrtRTEI);
  loop_ub = weights->size[0];
  for (i = 0; i < loop_ub; i++) {
    Weights->data[i] = (weights->data[i] > d);
  }

  end = Weights->size[0] - 1;
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (Weights->data[b_i]) {
      nz++;
    }
  }

  emxInit_int32_T(&st, &r7, 1, &uj_emlrtRTEI, true);
  i = r7->size[0];
  r7->size[0] = nz;
  emxEnsureCapacity_int32_T(&st, r7, i, &hd_emlrtRTEI);
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (Weights->data[b_i]) {
      r7->data[nz] = b_i + 1;
      nz++;
    }
  }

  i = out->outliers->size[0];
  out->outliers->size[0] = r7->size[0];
  emxEnsureCapacity_real_T(&st, out->outliers, i, &yh_emlrtRTEI);
  loop_ub = r7->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r7->data[i] > seq.contents->size[0]) {
      emlrtDynamicBoundsCheckR2012b(r7->data[i], 1, seq.contents->size[0],
        &v_emlrtBCI, &st);
    }

    out->outliers->data[i] = seq.contents->data[r7->data[i] - 1];
  }

  emxFree_int32_T(&r7);
  emxFreeStruct_captured_var(&seq);

  /* decomment the following two lines to get outlier pvalues */
  b_st.site = &x_emlrtRSI;
  b_abs(&b_st, out->residuals, weights);
  loop_ub = weights->size[0];
  for (i = 0; i < loop_ub; i++) {
    weights->data[i] = -weights->data[i];
  }

  b_st.site = &x_emlrtRSI;
  normcdf(&b_st, weights, betaini);
  end = Weights->size[0] - 1;
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (Weights->data[b_i]) {
      nz++;
    }
  }

  emxInit_int32_T(&st, &r8, 1, &vj_emlrtRTEI, true);
  i = r8->size[0];
  r8->size[0] = nz;
  emxEnsureCapacity_int32_T(&st, r8, i, &hd_emlrtRTEI);
  nz = 0;
  for (b_i = 0; b_i <= end; b_i++) {
    if (Weights->data[b_i]) {
      r8->data[nz] = b_i + 1;
      nz++;
    }
  }

  emxFree_boolean_T(&Weights);
  i = out->outliersPval->size[0];
  out->outliersPval->size[0] = r8->size[0];
  emxEnsureCapacity_real_T(&st, out->outliersPval, i, &ai_emlrtRTEI);
  loop_ub = r8->size[0];
  for (i = 0; i < loop_ub; i++) {
    if (r8->data[i] > betaini->size[0]) {
      emlrtDynamicBoundsCheckR2012b(r8->data[i], 1, betaini->size[0],
        &u_emlrtBCI, &st);
    }

    out->outliersPval->data[i] = betaini->data[r8->data[i] - 1];
  }

  emxFree_int32_T(&r8);
  emxFree_real_T(&betaini);

  /*  Store robust estimate of s */
  out->scale = bestrdiv2;

  /*  Store the 20 best estimates of the scale for each tentative level shift */
  /*  which is considered */
  /*  Store indices forming the bestrdiv2 best estimates of the target function */
  /*  Store scaled residuals */
  /*  Store units forming best initial subset of p-1 observations */
  /*  Store list of units declared as outliers */
  /*  out.outliers=seq(weights==0); */
  /*  Store confidence level which is used to draw the horizontal lines in the */
  /*  plot */
  out->conflev = conflev;

  /*  Store the number of observations that have determined the LTS (LMS) */
  /*  estimator, i.e. the value of h. */
  out->h = b_h;

  /*  Store vector of weights (values equal to 1 are associated with units */
  /*  parteciapting to the fit) */
  i = out->weights->size[0];
  out->weights->size[0] = b_weights.contents->size[0];
  emxEnsureCapacity_boolean_T(&st, out->weights, i, &bi_emlrtRTEI);
  loop_ub = b_weights.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->weights->data[i] = b_weights.contents->data[i];
  }

  emxFreeStruct_captured_var1(&b_weights);

  /*  Store number of singular subsets */
  out->singsub = 0.0;

  /*  Store information about the class of the object */
  for (i = 0; i < 5; i++) {
    out->class [i] = cv7[i];
  }

  if (!(lshift > 0.0)) {
    i = out->Likloc->size[0] * out->Likloc->size[1];
    out->Likloc->size[0] = 1;
    out->Likloc->size[1] = 1;
    emxEnsureCapacity_real_T(&st, out->Likloc, i, &ci_emlrtRTEI);
    out->Likloc->data[0] = 0.0;
  } else {
    /*  Store local improvement of the likelihood */
  }

  /*  Store response */
  i = out->y->size[0];
  out->y->size[0] = yin.contents->size[0];
  emxEnsureCapacity_real_T(&st, out->y, i, &di_emlrtRTEI);
  loop_ub = yin.contents->size[0];
  for (i = 0; i < loop_ub; i++) {
    out->y->data[i] = yin.contents->data[i];
  }

  if (yxsave) {
    if (intercept) {
      /*  Store X (without the column of ones if there is an intercept) */
      if (2 > bestsubset->size[1]) {
        i = 0;
        i1 = 0;
      } else {
        i = 1;
        i1 = bestsubset->size[1];
      }

      loop_ub = bestsubset->size[0];
      i2 = out->X->size[0] * out->X->size[1];
      out->X->size[0] = bestsubset->size[0];
      idx = i1 - i;
      out->X->size[1] = idx;
      emxEnsureCapacity_real_T(&st, out->X, i2, &fi_emlrtRTEI);
      for (i1 = 0; i1 < idx; i1++) {
        for (i2 = 0; i2 < loop_ub; i2++) {
          out->X->data[i2 + out->X->size[0] * i1] = bestsubset->data[i2 +
            bestsubset->size[0] * (i + i1)];
        }
      }
    } else {
      i = out->X->size[0] * out->X->size[1];
      out->X->size[0] = bestsubset->size[0];
      out->X->size[1] = bestsubset->size[1];
      emxEnsureCapacity_real_T(&st, out->X, i, &ei_emlrtRTEI);
      loop_ub = bestsubset->size[0] * bestsubset->size[1];
      for (i = 0; i < loop_ub; i++) {
        out->X->data[i] = bestsubset->data[i];
      }
    }
  } else {
    out->X->size[0] = 0;
    out->X->size[1] = 0;
  }

  /*  b_trend = {'b_trend1'; 'b_trend2'; 'b_trend3'; 'b_trend4'}; */
  /*  b_seaso = {'b_cos1'; 'b_sin1'; 'b_cos2'; 'b_sin2'; ... */
  /*      'b_cos3'; 'b_sin3'; 'b_cos4'; 'b_sin4'; ... */
  /*      'b_cos5'; 'b_sin5'; 'b_cos6'}; */
  /*  b_AR =    {'b_AR1'; 'b_AR2'; 'b_AR3'; 'b_AR4'; 'b_AR5'; 'b_AR6'}; */
  /*  b_X  =    {'b_X1'; 'b_X2'; 'b_X3'; 'b_X4'; 'b_X5'; 'b_X6'}; */
  /*  b_varampl = {'b_varampl'; 'b_varamp2'; 'b_varamp3'}; */
  /*  b_lshift  = {'b_lshift' ; 't_lshift'}; */
  /*  */
  /*  if ARp>0 */
  /*       b_expl=[b_AR(1:ARp); b_X(1:nexpl-ARp)]; */
  /*  else */
  /*      b_expl=b_X; */
  /*  end */
  /*  */
  /*  if seasonal>0 */
  /*      if 2*seasonal==s */
  /*          lab=[b_trend(1:trend+1); b_seaso]; */
  /*      else */
  /*          lab=[b_trend(1:trend+1); b_seaso(1:2*seasonal)]; */
  /*      end */
  /*  else */
  /*      lab=b_trend(1:trend+1); */
  /*  end */
  /*  */
  /*  if nexpl>0 */
  /*      lab=[lab;b_expl(1:nexpl)]; */
  /*  end */
  /*  if varampl>0 */
  /*      lab=[lab;b_varampl(1:varampl)]; */
  /*      posvarampl=length(lab)-varampl+1:length(lab); */
  /*  else */
  /*      posvarampl=[]; */
  /*  end */
  /*  if lshiftYN==1 */
  /*      lab=[lab; b_lshift(1)]; */
  /*  end */
  /*  Code generation does not support string arrays */
  /*  b_trend = ["b_trend1"; "b_trend2"; "b_trend3"; "b_trend4"]; */
  /*  b_seaso = ["b_cos1"; "b_sin1"; "b_cos2"; "b_sin2"; ... */
  /*      "b_cos3"; "b_sin3"; "b_cos4"; "b_sin4"; ... */
  /*      "b_cos5"; "b_sin5"; "b_cos6"]; */
  /*  b_AR =    ["b_AR1"; "b_AR2"; "b_AR3"; "b_AR4"; "b_AR5"; "b_AR6"]; */
  /*  b_X  =    ["b_X1"; "b_X2"; "b_X3"; "b_X4"; "b_X5"; "b_X6"]; */
  /*  b_varampl = ["b_varampl"; "b_varamp2"; "b_varamp3"]; */
  /*  b_lshift  = ["b_lshift" ; "t_lshift"]; */
  if (ARp > 0.0) {
    if (1.0 > ARp) {
      loop_ub = 0;
    } else {
      if (ARp != (int32_T)muDoubleScalarFloor(ARp)) {
        emlrtIntegerCheckR2012b(ARp, &xc_emlrtDCI, &st);
      }

      loop_ub = (int32_T)ARp;
    }

    d = nexpl.contents - ARp;
    if (1.0 > d) {
      idx = 0;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &yc_emlrtDCI, &st);
      }

      if (((int32_T)d < 1) || ((int32_T)d > 6)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 6, &re_emlrtBCI, &st);
      }

      idx = (int32_T)d;
    }

    nz = loop_ub + idx;
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_expl_data[i1 + nz * i] = b_AR[i1 + 6 * i];
      }

      for (i1 = 0; i1 < idx; i1++) {
        b_expl_data[(i1 + loop_ub) + nz * i] = b_X[i1 + 6 * i];
      }
    }
  } else {
    nz = 6;
    for (i = 0; i < 48; i++) {
      b_expl_data[i] = b_X[i];
    }
  }

  if (seasonal.contents > 0.0) {
    if (2.0 * seasonal.contents == s.contents) {
      d = trend.contents + 1.0;
      if (1.0 > d) {
        loop_ub = 0;
      } else {
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &ad_emlrtDCI, &st);
        }

        if (((int32_T)d < 1) || ((int32_T)d > 4)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 4, &se_emlrtBCI, &st);
        }

        loop_ub = (int32_T)d;
      }

      lab_size[0] = loop_ub + 11;
      lab_size[1] = 8;
      for (i = 0; i < 8; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          lab_data[i1 + (loop_ub + 11) * i] = b_trend[i1 + (i << 2)];
        }

        for (i1 = 0; i1 < 11; i1++) {
          lab_data[(i1 + loop_ub) + (loop_ub + 11) * i] = b_seaso[i1 + 11 * i];
        }
      }
    } else {
      d = trend.contents + 1.0;
      if (1.0 > d) {
        loop_ub = 0;
      } else {
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &bd_emlrtDCI, &st);
        }

        if (((int32_T)d < 1) || ((int32_T)d > 4)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 4, &te_emlrtBCI, &st);
        }

        loop_ub = (int32_T)d;
      }

      d = 2.0 * seasonal.contents;
      if (1.0 > d) {
        idx = 0;
      } else {
        if (d != (int32_T)muDoubleScalarFloor(d)) {
          emlrtIntegerCheckR2012b(d, &cd_emlrtDCI, &st);
        }

        if (((int32_T)d < 1) || ((int32_T)d > 11)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 11, &ue_emlrtBCI, &st);
        }

        idx = (int32_T)d;
      }

      lab_size[0] = loop_ub + idx;
      lab_size[1] = 8;
      for (i = 0; i < 8; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          lab_data[i1 + lab_size[0] * i] = b_trend[i1 + (i << 2)];
        }

        for (i1 = 0; i1 < idx; i1++) {
          lab_data[(i1 + loop_ub) + lab_size[0] * i] = b_seaso[i1 + 11 * i];
        }
      }
    }
  } else {
    d = trend.contents + 1.0;
    if (1.0 > d) {
      loop_ub = 0;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &dd_emlrtDCI, &st);
      }

      if (((int32_T)d < 1) || ((int32_T)d > 4)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 4, &ve_emlrtBCI, &st);
      }

      loop_ub = (int32_T)d;
    }

    lab_size[0] = loop_ub;
    lab_size[1] = 8;
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        lab_data[i1 + loop_ub * i] = b_trend[i1 + (i << 2)];
      }
    }
  }

  if (nexpl.contents > 0.0) {
    d = nexpl.contents;
    if (1.0 > d) {
      loop_ub = 0;
    } else {
      if (1 > nz) {
        emlrtDynamicBoundsCheckR2012b(1, 1, nz, &we_emlrtBCI, &st);
      }

      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &ed_emlrtDCI, &st);
      }

      if (((int32_T)d < 1) || ((int32_T)d > nz)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, nz, &xe_emlrtBCI, &st);
      }

      loop_ub = (int32_T)d;
    }

    ia_data = lab_size[0] + loop_ub;
    idx = lab_size[0];
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < idx; i1++) {
        b_lab_data[i1 + ia_data * i] = lab_data[i1 + lab_size[0] * i];
      }

      for (i1 = 0; i1 < loop_ub; i1++) {
        b_lab_data[(i1 + lab_size[0]) + ia_data * i] = b_expl_data[i1 + nz * i];
      }
    }

    lab_size[0] = ia_data;
    lab_size[1] = 8;
    loop_ub = ia_data * 8;
    if (0 <= loop_ub - 1) {
      memcpy(&lab_data[0], &b_lab_data[0], loop_ub * sizeof(char_T));
    }
  }

  emxInit_real_T(&st, &posvarampl, 2, &hi_emlrtRTEI, true);
  if (varampl.contents > 0.0) {
    d = varampl.contents;
    if (1.0 > d) {
      loop_ub = 0;
    } else {
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &fd_emlrtDCI, &st);
      }

      if (((int32_T)d < 1) || ((int32_T)d > 3)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 3, &ye_emlrtBCI, &st);
      }

      loop_ub = (int32_T)d;
    }

    ia_data = lab_size[0] + loop_ub;
    idx = lab_size[0];
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < idx; i1++) {
        b_lab_data[i1 + ia_data * i] = lab_data[i1 + lab_size[0] * i];
      }

      for (i1 = 0; i1 < loop_ub; i1++) {
        b_lab_data[(i1 + lab_size[0]) + ia_data * i] = b_varampl[i1 + 3 * i];
      }
    }

    lab_size[0] = ia_data;
    lab_size[1] = 8;
    loop_ub = ia_data * 8;
    if (0 <= loop_ub - 1) {
      memcpy(&lab_data[0], &b_lab_data[0], loop_ub * sizeof(char_T));
    }

    if (ia_data == 0) {
      nz = 0;
    } else {
      nz = muIntScalarMax_sint32(ia_data, 8);
    }

    b_st.site = &w_emlrtRSI;
    if (ia_data == 0) {
      ia_data = 0;
    } else {
      ia_data = muIntScalarMax_sint32(ia_data, 8);
    }

    a = ((real_T)ia_data - varampl.contents) + 1.0;
    c_st.site = &rg_emlrtRSI;
    if (muDoubleScalarIsNaN(a)) {
      i = posvarampl->size[0] * posvarampl->size[1];
      posvarampl->size[0] = 1;
      posvarampl->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, posvarampl, i, &hi_emlrtRTEI);
      posvarampl->data[0] = rtNaN;
    } else if (nz < a) {
      posvarampl->size[0] = 1;
      posvarampl->size[1] = 0;
    } else if (muDoubleScalarIsInf(a) && (a == nz)) {
      i = posvarampl->size[0] * posvarampl->size[1];
      posvarampl->size[0] = 1;
      posvarampl->size[1] = 1;
      emxEnsureCapacity_real_T(&c_st, posvarampl, i, &hi_emlrtRTEI);
      posvarampl->data[0] = rtNaN;
    } else if (muDoubleScalarFloor(a) == a) {
      i = posvarampl->size[0] * posvarampl->size[1];
      posvarampl->size[0] = 1;
      loop_ub = (int32_T)((real_T)nz - a);
      posvarampl->size[1] = loop_ub + 1;
      emxEnsureCapacity_real_T(&c_st, posvarampl, i, &hi_emlrtRTEI);
      for (i = 0; i <= loop_ub; i++) {
        posvarampl->data[i] = a + (real_T)i;
      }
    } else {
      d_st.site = &sg_emlrtRSI;
      eml_float_colon(&d_st, a, nz, posvarampl);
    }
  } else {
    posvarampl->size[0] = 1;
    posvarampl->size[1] = 0;
  }

  if (lshiftYN.contents == 1.0) {
    ia_data = lab_size[0] + 1;
    loop_ub = lab_size[0];
    for (i = 0; i < 8; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_lab_data[i1 + ia_data * i] = lab_data[i1 + lab_size[0] * i];
      }

      b_lab_data[lab_size[0] + ia_data * i] = cv8[i];
    }

    lab_size[0]++;
    lab_size[1] = 8;
    loop_ub = ia_data * 8;
    if (0 <= loop_ub - 1) {
      memcpy(&lab_data[0], &b_lab_data[0], loop_ub * sizeof(char_T));
    }
  }

  emxInit_real_T(&st, &b_out, 2, &gi_emlrtRTEI, true);

  /*  if verLessThan ('matlab','8.2.0') */
  /*  else */
  /*  Store matrix B in table format (with labels for rows and columns) */
  b_st.site = &b_emlrtRSI;
  string_string(&b_st, lab_data, lab_size, t8_Value_data, c_size);
  i = b_out->size[0] * b_out->size[1];
  b_out->size[0] = out->B->size[0];
  b_out->size[1] = 4;
  emxEnsureCapacity_real_T(&st, b_out, i, &gi_emlrtRTEI);
  loop_ub = out->B->size[0] * out->B->size[1] - 1;
  for (i = 0; i <= loop_ub; i++) {
    b_out->data[i] = out->B->data[i];
  }

  b_st.site = &b_emlrtRSI;
  array2table(&b_st, b_out, t8_Value_data, c_size, &out->Btable.metaDim.length,
              &out->Btable.rowDim.labels[0], &out->Btable.rowDim.length,
              &out->Btable.varDim, out->Btable.data,
              out->Btable.arrayProps.Description.size);

  /*  end */
  emxFree_real_T(&b_out);
  if (dispresults && (lshiftYN.contents == 1.0)) {
    /*          bhat=out.B(:,1); */
    /*          se=out.B(:,2); */
    /*          tstat=out.B(:,3); */
    /*          pval=out.B(:,4); */
    /*          %         disp('           Coeff.     SE         t-stat       p-values'); */
    /*          fprintf('%s%.3f',lab,bhat) */
    /*      if verLessThan ('matlab','8.2.0') */
    /*          disp('           Coeff.     SE         t-stat       p-values'); */
    /*          disp( [char(lab) num2str([bhat se tstat pval])]); */
    /*      else */
    /*  disp([table(lab) table(bhat) table(se) table(tstat) table(pval)]); */
    /*      end */
    emlrtAssertMATLABThread(&st, &b_emlrtRTEI);
    b_st.site = &v_emlrtRSI;
    c_st.site = &cs_emlrtRSI;
    d_st.site = &ydb_emlrtRSI;
    k_st.site = &eeb_emlrtRSI;
    stoprint = emlrt_marshallIn(&d_st, d_feval(&d_st, b_emlrt_marshallOut(&d_st,
      b_cv4), emlrt_marshallOut(1.0), i_emlrt_marshallOut(&k_st, cv9),
      emlrt_marshallOut(posLS), &q_emlrtMCI), "<output of feval>");
    emlrtDisplayR2012b(emlrt_marshallOut(stoprint), (char_T *)"ans",
                       &b_emlrtRTEI, &st);
  }

  /*  Create plots */
  /*  Part of the code to find the F test for the final harmonic of the seasonal */
  /*  component part */
  i = bsb.contents->size[0];
  bsb.contents->size[0] = allnumscale2->size[0];
  emxEnsureCapacity_real_T(&st, bsb.contents, i, &ii_emlrtRTEI);
  loop_ub = allnumscale2->size[0];
  for (i = 0; i < loop_ub; i++) {
    bsb.contents->data[i] = allnumscale2->data[i];
  }

  out->LastHarmonicPval.size[0] = 0;
  out->LastHarmonicPval.size[1] = 0;
  emxInit_real_T(&st, &selWithoutLastHarmonic, 2, &ki_emlrtRTEI, true);
  emxInit_real_T(&st, &selWithoutLastHarmonic_tmp, 2, &ji_emlrtRTEI, true);
  if ((seasonal.contents > 0.0) && (seasonal.contents < 6.0)) {
    /*  selWithoutLastHarmonic = indexes of the linear part of the model after excluding the last harmonic */
    stoprint = ((real_T)Xtrend.contents->size[1] + (real_T)nseaso) - 2.0;
    if (stoprint < 1.0) {
      selWithoutLastHarmonic_tmp->size[0] = 1;
      selWithoutLastHarmonic_tmp->size[1] = 0;
    } else {
      i = selWithoutLastHarmonic_tmp->size[0] * selWithoutLastHarmonic_tmp->
        size[1];
      selWithoutLastHarmonic_tmp->size[0] = 1;
      selWithoutLastHarmonic_tmp->size[1] = (int32_T)(stoprint - 1.0) + 1;
      emxEnsureCapacity_real_T(&st, selWithoutLastHarmonic_tmp, i, &ji_emlrtRTEI);
      loop_ub = (int32_T)(stoprint - 1.0);
      for (i = 0; i <= loop_ub; i++) {
        selWithoutLastHarmonic_tmp->data[i] = (real_T)i + 1.0;
      }
    }

    b_st.site = &u_emlrtRSI;
    a = ((real_T)Xtrend.contents->size[1] + (real_T)nseaso) + 1.0;
    c_st.site = &rg_emlrtRSI;
    if (Xsel.contents->size[1] < a) {
      Cr->size[0] = 1;
      Cr->size[1] = 0;
    } else if (a == a) {
      i = Cr->size[0] * Cr->size[1];
      Cr->size[0] = 1;
      Cr->size[1] = (int32_T)((real_T)Xsel.contents->size[1] - a) + 1;
      emxEnsureCapacity_real_T(&c_st, Cr, i, &wc_emlrtRTEI);
      loop_ub = (int32_T)((real_T)Xsel.contents->size[1] - a);
      for (i = 0; i <= loop_ub; i++) {
        Cr->data[i] = a + (real_T)i;
      }
    } else {
      d_st.site = &sg_emlrtRSI;
      eml_float_colon(&d_st, a, Xsel.contents->size[1], Cr);
    }

    i = selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->size[1];
    selWithoutLastHarmonic->size[0] = 1;
    selWithoutLastHarmonic->size[1] = selWithoutLastHarmonic_tmp->size[1] +
      Cr->size[1];
    emxEnsureCapacity_real_T(&st, selWithoutLastHarmonic, i, &ki_emlrtRTEI);
    loop_ub = selWithoutLastHarmonic_tmp->size[1];
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic->data[i] = selWithoutLastHarmonic_tmp->data[i];
    }

    loop_ub = Cr->size[1];
    for (i = 0; i < loop_ub; i++) {
      selWithoutLastHarmonic->data[i + selWithoutLastHarmonic_tmp->size[1]] =
        Cr->data[i];
    }

    if ((varampl.contents == 0.0) && (lshiftYN.contents == 0.0)) {
      /*  In this case the model is linear */
      /*  Function lik constructs fitted values and residual sum of */
      /*  squares */
      i = bestyhat->size[0] * bestyhat->size[1];
      bestyhat->size[0] = allnumscale2->size[0];
      bestyhat->size[1] = selWithoutLastHarmonic->size[1];
      emxEnsureCapacity_real_T(&st, bestyhat, i, &li_emlrtRTEI);
      loop_ub = selWithoutLastHarmonic->size[1];
      for (i = 0; i < loop_ub; i++) {
        idx = allnumscale2->size[0];
        for (i1 = 0; i1 < idx; i1++) {
          if (selWithoutLastHarmonic->data[i] != (int32_T)muDoubleScalarFloor
              (selWithoutLastHarmonic->data[i])) {
            emlrtIntegerCheckR2012b(selWithoutLastHarmonic->data[i], &d_emlrtDCI,
              &st);
          }

          i2 = (int32_T)selWithoutLastHarmonic->data[i];
          if ((i2 < 1) || (i2 > Xsel.contents->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)selWithoutLastHarmonic->
              data[i], 1, Xsel.contents->size[1], &p_emlrtBCI, &st);
          }

          ia_data = (int32_T)allnumscale2->data[i1];
          if ((ia_data < 1) || (ia_data > Xsel.contents->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)allnumscale2->data[i1], 1,
              Xsel.contents->size[0], &q_emlrtBCI, &st);
          }

          bestyhat->data[i1 + bestyhat->size[0] * i] = Xsel.contents->data
            [(ia_data + Xsel.contents->size[0] * (i2 - 1)) - 1];
        }
      }

      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(&st, b_yin, i, &ni_emlrtRTEI);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > yin.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)allnumscale2->data[i], 1,
            yin.contents->size[0], &o_emlrtBCI, &st);
        }

        b_yin->data[i] = yin.contents->data[i1 - 1];
      }

      b_st.site = &t_emlrtRSI;
      mldivide(&b_st, bestyhat, b_yin, beta.contents);

      /*  update fitted values */
      b_st.site = &s_emlrtRSI;
      loop_ub = Xsel.contents->size[0];
      i = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
      WEIibestrdiv2->size[0] = Xsel.contents->size[0];
      WEIibestrdiv2->size[1] = selWithoutLastHarmonic->size[1];
      emxEnsureCapacity_real_T(&b_st, WEIibestrdiv2, i, &qi_emlrtRTEI);
      idx = selWithoutLastHarmonic->size[1];
      for (i = 0; i < idx; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)selWithoutLastHarmonic->data[i];
          if ((i2 < 1) || (i2 > Xsel.contents->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, Xsel.contents->size[1],
              &n_emlrtBCI, &b_st);
          }

          WEIibestrdiv2->data[i1 + WEIibestrdiv2->size[0] * i] =
            Xsel.contents->data[i1 + Xsel.contents->size[0] * (i2 - 1)];
        }
      }

      c_st.site = &rj_emlrtRSI;
      c_dynamic_size_checks(&c_st, WEIibestrdiv2, beta.contents,
                            selWithoutLastHarmonic->size[1], beta.contents->
                            size[0]);
      c_st.site = &qj_emlrtRSI;
      b_mtimes(&c_st, WEIibestrdiv2, beta.contents, yhat.contents);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > yin.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, yin.contents->size[0],
            &l_emlrtBCI, &st);
        }
      }

      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > yhat.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, yhat.contents->size[0],
            &k_emlrtBCI, &st);
        }
      }

      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(&st, b_yin, i, &ui_emlrtRTEI);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        nz = (int32_T)allnumscale2->data[i] - 1;
        b_yin->data[i] = yin.contents->data[nz] - yhat.contents->data[nz];
      }

      b_st.site = &r_emlrtRSI;
      power(&b_st, b_yin, weights);
      b_st.site = &r_emlrtRSI;
      stoprint = sum(&b_st, weights);
    } else if ((varampl.contents == 0.0) && (lshiftYN.contents == 1.0)) {
      /*  In this case there is just level shift however we do not redo */
      /*  the non linear estimation but a simple LS */
      loop_ub = Xsel.contents->size[0];
      i = WEIibestrdiv2->size[0] * WEIibestrdiv2->size[1];
      WEIibestrdiv2->size[0] = Xsel.contents->size[0];
      WEIibestrdiv2->size[1] = selWithoutLastHarmonic->size[1];
      emxEnsureCapacity_real_T(&st, WEIibestrdiv2, i, &mi_emlrtRTEI);
      idx = selWithoutLastHarmonic->size[1];
      for (i = 0; i < idx; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          if (selWithoutLastHarmonic->data[i] != (int32_T)muDoubleScalarFloor
              (selWithoutLastHarmonic->data[i])) {
            emlrtIntegerCheckR2012b(selWithoutLastHarmonic->data[i], &e_emlrtDCI,
              &st);
          }

          i2 = (int32_T)selWithoutLastHarmonic->data[i];
          if ((i2 < 1) || (i2 > Xsel.contents->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)selWithoutLastHarmonic->
              data[i], 1, Xsel.contents->size[1], &r_emlrtBCI, &st);
          }

          WEIibestrdiv2->data[i1 + WEIibestrdiv2->size[0] * i] =
            Xsel.contents->data[i1 + Xsel.contents->size[0] * (i2 - 1)];
        }
      }

      b_st.site = &q_emlrtRSI;
      c_st.site = &qg_emlrtRSI;
      if ((Xsel.contents->size[0] != 0) && (selWithoutLastHarmonic->size[1] != 0))
      {
        result = Xsel.contents->size[0];
      } else if ((Xlshift.contents->size[0] != 0) && (Xlshift.contents->size[1]
                  != 0)) {
        result = Xlshift.contents->size[0];
      } else {
        if (Xsel.contents->size[0] > 0) {
          result = Xsel.contents->size[0];
        } else {
          result = 0;
        }

        if (Xlshift.contents->size[0] > result) {
          result = Xlshift.contents->size[0];
        }
      }

      d_st.site = &sf_emlrtRSI;
      if ((Xsel.contents->size[0] != result) && ((Xsel.contents->size[0] != 0) &&
           (selWithoutLastHarmonic->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      if ((Xlshift.contents->size[0] != result) && ((Xlshift.contents->size[0]
            != 0) && (Xlshift.contents->size[1] != 0))) {
        emlrtErrorWithMessageIdR2018a(&d_st, &g_emlrtRTEI,
          "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
      }

      empty_non_axis_sizes = (result == 0);
      if (empty_non_axis_sizes || ((Xsel.contents->size[0] != 0) &&
           (selWithoutLastHarmonic->size[1] != 0))) {
        b_input_sizes_idx_1 = selWithoutLastHarmonic->size[1];
      } else {
        b_input_sizes_idx_1 = 0;
      }

      if (empty_non_axis_sizes || ((Xlshift.contents->size[0] != 0) &&
           (Xlshift.contents->size[1] != 0))) {
        sizes[1] = Xlshift.contents->size[1];
      } else {
        sizes[1] = 0;
      }

      i = bestsubset->size[0] * bestsubset->size[1];
      bestsubset->size[0] = result;
      bestsubset->size[1] = b_input_sizes_idx_1 + sizes[1];
      emxEnsureCapacity_real_T(&c_st, bestsubset, i, &wi_emlrtRTEI);
      for (i = 0; i < b_input_sizes_idx_1; i++) {
        for (i1 = 0; i1 < result; i1++) {
          bestsubset->data[i1 + bestsubset->size[0] * i] = WEIibestrdiv2->
            data[i1 + result * i];
        }
      }

      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < result; i1++) {
          bestsubset->data[i1 + bestsubset->size[0] * b_input_sizes_idx_1] =
            Xlshift.contents->data[i1];
        }
      }

      loop_ub = bestsubset->size[1];
      i = bestyhat->size[0] * bestyhat->size[1];
      bestyhat->size[0] = allnumscale2->size[0];
      bestyhat->size[1] = bestsubset->size[1];
      emxEnsureCapacity_real_T(&st, bestyhat, i, &xi_emlrtRTEI);
      for (i = 0; i < loop_ub; i++) {
        idx = allnumscale2->size[0];
        for (i1 = 0; i1 < idx; i1++) {
          i2 = (int32_T)allnumscale2->data[i1];
          if ((i2 < 1) || (i2 > bestsubset->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)allnumscale2->data[i1], 1,
              bestsubset->size[0], &g_emlrtBCI, &st);
          }

          bestyhat->data[i1 + bestyhat->size[0] * i] = bestsubset->data[(i2 +
            bestsubset->size[0] * i) - 1];
        }
      }

      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(&st, b_yin, i, &yi_emlrtRTEI);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > yin.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)allnumscale2->data[i], 1,
            yin.contents->size[0], &f_emlrtBCI, &st);
        }

        b_yin->data[i] = yin.contents->data[i1 - 1];
      }

      b_st.site = &p_emlrtRSI;
      mldivide(&b_st, bestyhat, b_yin, beta.contents);

      /*  find fitted values using all observations */
      b_st.site = &o_emlrtRSI;
      c_st.site = &rj_emlrtRSI;
      c_dynamic_size_checks(&c_st, bestsubset, beta.contents, bestsubset->size[1],
                            beta.contents->size[0]);
      c_st.site = &qj_emlrtRSI;
      b_mtimes(&c_st, bestsubset, beta.contents, yhat.contents);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > yin.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, yin.contents->size[0],
            &b_emlrtBCI, &st);
        }
      }

      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > yhat.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, yhat.contents->size[0], &emlrtBCI,
            &st);
        }
      }

      i = b_yin->size[0];
      b_yin->size[0] = allnumscale2->size[0];
      emxEnsureCapacity_real_T(&st, b_yin, i, &ej_emlrtRTEI);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        nz = (int32_T)allnumscale2->data[i] - 1;
        b_yin->data[i] = yin.contents->data[nz] - yhat.contents->data[nz];
      }

      b_st.site = &n_emlrtRSI;
      power(&b_st, b_yin, weights);
      b_st.site = &n_emlrtRSI;
      stoprint = sum(&b_st, weights);
    } else {
      /*  model is non linear because there is time varying amplitude in seasonal component */
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > Xtrend.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, Xtrend.contents->size[0],
            &s_emlrtBCI, &st);
        }
      }

      /*  Remove the last harmonic from Xseaso */
      d = seasonal.contents - 1.0;
      seasonal.contents = d;
      if (seasonal.contents == 0.0) {
        Xseaso.contents->size[0] = 0;
        Xseaso.contents->size[1] = 0;
        Xseasof.contents->size[0] = 0;
        Xseasof.contents->size[1] = 0;
        i = yhatseaso.contents->size[0];
        yhatseaso.contents->size[0] = 1;
        emxEnsureCapacity_real_T(&st, yhatseaso.contents, i, &oi_emlrtRTEI);
        yhatseaso.contents->data[0] = 0.0;
      } else {
        if (1.0 > (real_T)Xseaso.contents->size[1] - 2.0) {
          loop_ub = 0;
        } else {
          if (1 > Xseaso.contents->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, Xseaso.contents->size[1],
              &af_emlrtBCI, &st);
          }

          if ((Xseaso.contents->size[1] - 2 < 1) || (Xseaso.contents->size[1] -
               2 > Xseaso.contents->size[1])) {
            emlrtDynamicBoundsCheckR2012b(Xseaso.contents->size[1] - 2, 1,
              Xseaso.contents->size[1], &bf_emlrtBCI, &st);
          }

          loop_ub = Xseaso.contents->size[1] - 2;
        }

        sizes[0] = Xseaso.contents->size[0];
        nz = Xseaso.contents->size[0] - 1;
        idx = Xseaso.contents->size[0];
        for (i = 0; i < loop_ub; i++) {
          for (i1 = 0; i1 < idx; i1++) {
            Xseaso.contents->data[i1 + (nz + 1) * i] = Xseaso.contents->data[i1
              + Xseaso.contents->size[0] * i];
          }
        }

        i = Xseaso.contents->size[0] * Xseaso.contents->size[1];
        Xseaso.contents->size[0] = nz + 1;
        Xseaso.contents->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, Xseaso.contents, i, &pi_emlrtRTEI);
        idx = allnumscale2->size[0];
        for (i = 0; i < idx; i++) {
          i1 = (int32_T)allnumscale2->data[i];
          if ((i1 < 1) || (i1 > sizes[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, sizes[0], &m_emlrtBCI, &st);
          }
        }

        i = Xseasof.contents->size[0] * Xseasof.contents->size[1];
        Xseasof.contents->size[0] = allnumscale2->size[0];
        Xseasof.contents->size[1] = loop_ub;
        emxEnsureCapacity_real_T(&st, Xseasof.contents, i, &ti_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          idx = allnumscale2->size[0];
          for (i1 = 0; i1 < idx; i1++) {
            Xseasof.contents->data[i1 + Xseasof.contents->size[0] * i] =
              Xseaso.contents->data[((int32_T)allnumscale2->data[i1] +
              Xseaso.contents->size[0] * i) - 1];
          }
        }
      }

      if ((X.contents->size[0] != 0) && (X.contents->size[1] != 0)) {
        loop_ub = allnumscale2->size[0];
        for (i = 0; i < loop_ub; i++) {
          i1 = (int32_T)allnumscale2->data[i];
          if ((i1 < 1) || (i1 > X.contents->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, X.contents->size[0],
              &j_emlrtBCI, &st);
          }
        }

        loop_ub = X.contents->size[1];
        i = Xf.contents->size[0] * Xf.contents->size[1];
        Xf.contents->size[0] = allnumscale2->size[0];
        Xf.contents->size[1] = X.contents->size[1];
        emxEnsureCapacity_real_T(&st, Xf.contents, i, &si_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          idx = allnumscale2->size[0];
          for (i1 = 0; i1 < idx; i1++) {
            Xf.contents->data[i1 + Xf.contents->size[0] * i] = X.contents->data
              [((int32_T)allnumscale2->data[i1] + X.contents->size[0] * i) - 1];
          }
        }
      }

      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > Seq.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, Seq.contents->size[0],
            &i_emlrtBCI, &st);
        }
      }

      i = Seqf.contents->size[0] * Seqf.contents->size[1];
      Seqf.contents->size[0] = allnumscale2->size[0];
      Seqf.contents->size[1] = 4;
      emxEnsureCapacity_real_T(&st, Seqf.contents, i, &ri_emlrtRTEI);
      loop_ub = allnumscale2->size[0];
      for (i = 0; i < 4; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Seqf.contents->data[i1 + Seqf.contents->size[0] * i] =
            Seq.contents->data[((int32_T)allnumscale2->data[i1] +
                                Seq.contents->size[0] * i) - 1];
        }
      }

      loop_ub = allnumscale2->size[0];
      for (i = 0; i < loop_ub; i++) {
        i1 = (int32_T)allnumscale2->data[i];
        if ((i1 < 1) || (i1 > yin.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, yin.contents->size[0],
            &h_emlrtBCI, &st);
        }
      }

      b_st.site = &m_emlrtRSI;
      a = ((real_T)Xtrend.contents->size[1] + (real_T)nseaso) + 1.0;
      c_st.site = &rg_emlrtRSI;
      if (yhatrob->size[0] < a) {
        Cr->size[0] = 1;
        Cr->size[1] = 0;
      } else if (a == a) {
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = (int32_T)((real_T)yhatrob->size[0] - a) + 1;
        emxEnsureCapacity_real_T(&c_st, Cr, i, &wc_emlrtRTEI);
        loop_ub = (int32_T)((real_T)yhatrob->size[0] - a);
        for (i = 0; i <= loop_ub; i++) {
          Cr->data[i] = a + (real_T)i;
        }
      } else {
        d_st.site = &sg_emlrtRSI;
        eml_float_colon(&d_st, a, yhatrob->size[0], Cr);
      }

      i = selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->size[1];
      selWithoutLastHarmonic->size[0] = 1;
      selWithoutLastHarmonic->size[1] = selWithoutLastHarmonic_tmp->size[1] +
        Cr->size[1];
      emxEnsureCapacity_real_T(&st, selWithoutLastHarmonic, i, &vi_emlrtRTEI);
      loop_ub = selWithoutLastHarmonic_tmp->size[1];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic->data[i] = selWithoutLastHarmonic_tmp->data[i];
      }

      loop_ub = Cr->size[1];
      for (i = 0; i < loop_ub; i++) {
        selWithoutLastHarmonic->data[i + selWithoutLastHarmonic_tmp->size[1]] =
          Cr->data[i];
      }

      /*  If there is no seasonality it is also necessary to */
      /*  remove the non linear part of the seasonal component */
      /*  that is, it is necessary to select the elements of vector selWithoutLastHarmonic */
      /*  apart from those which are in posvarampl */
      if (seasonal.contents == 0.0) {
        b_st.site = &l_emlrtRSI;
        c_st.site = &vg_emlrtRSI;
        i = Cr->size[0] * Cr->size[1];
        Cr->size[0] = 1;
        Cr->size[1] = selWithoutLastHarmonic->size[1];
        emxEnsureCapacity_real_T(&c_st, Cr, i, &bj_emlrtRTEI);
        loop_ub = selWithoutLastHarmonic->size[0] * selWithoutLastHarmonic->
          size[1] - 1;
        for (i = 0; i <= loop_ub; i++) {
          Cr->data[i] = selWithoutLastHarmonic->data[i];
        }

        d_st.site = &if_emlrtRSI;
        b_do_vectors(&d_st, Cr, posvarampl, selWithoutLastHarmonic, ia, &ib_size);
        varampl.contents = 0.0;
      }

      /*  TODO nlinfit not supported by MATLAB C Coder */
      if (lshiftYN.contents == 1.0) {
        if (1 > selWithoutLastHarmonic->size[1] - 1) {
          loop_ub = 0;
        } else {
          if (1 > selWithoutLastHarmonic->size[1]) {
            emlrtDynamicBoundsCheckR2012b(1, 1, selWithoutLastHarmonic->size[1],
              &cf_emlrtBCI, &st);
          }

          if ((selWithoutLastHarmonic->size[1] - 1 < 1) ||
              (selWithoutLastHarmonic->size[1] - 1 >
               selWithoutLastHarmonic->size[1])) {
            emlrtDynamicBoundsCheckR2012b(selWithoutLastHarmonic->size[1] - 1, 1,
              selWithoutLastHarmonic->size[1], &df_emlrtBCI, &st);
          }

          loop_ub = selWithoutLastHarmonic->size[1] - 1;
        }

        c_size[0] = 1;
        c_size[1] = loop_ub;
        b_st.site = &k_emlrtRSI;
        indexShapeCheck(&b_st, yhatrob->size[0], c_size);
        i = beta.contents->size[0];
        beta.contents->size[0] = loop_ub;
        emxEnsureCapacity_real_T(&st, beta.contents, i, &cj_emlrtRTEI);
        for (i = 0; i < loop_ub; i++) {
          if (selWithoutLastHarmonic->data[i] != (int32_T)muDoubleScalarFloor
              (selWithoutLastHarmonic->data[i])) {
            emlrtIntegerCheckR2012b(selWithoutLastHarmonic->data[i], &emlrtDCI,
              &st);
          }

          i1 = (int32_T)selWithoutLastHarmonic->data[i];
          if ((i1 < 1) || (i1 > yhatrob->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)selWithoutLastHarmonic->
              data[i], 1, yhatrob->size[0], &c_emlrtBCI, &st);
          }

          beta.contents->data[i] = yhatrob->data[i1 - 1];
        }
      } else {
        b_st.site = &j_emlrtRSI;
        indexShapeCheck(&b_st, yhatrob->size[0], *(int32_T (*)[2])
                        selWithoutLastHarmonic->size);
        i = beta.contents->size[0];
        beta.contents->size[0] = selWithoutLastHarmonic->size[1];
        emxEnsureCapacity_real_T(&st, beta.contents, i, &aj_emlrtRTEI);
        loop_ub = selWithoutLastHarmonic->size[1];
        for (i = 0; i < loop_ub; i++) {
          if (selWithoutLastHarmonic->data[i] != (int32_T)muDoubleScalarFloor
              (selWithoutLastHarmonic->data[i])) {
            emlrtIntegerCheckR2012b(selWithoutLastHarmonic->data[i], &c_emlrtDCI,
              &st);
          }

          i1 = (int32_T)selWithoutLastHarmonic->data[i];
          if ((i1 < 1) || (i1 > yhatrob->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)selWithoutLastHarmonic->
              data[i], 1, yhatrob->size[0], &e_emlrtBCI, &st);
          }

          beta.contents->data[i] = yhatrob->data[i1 - 1];
        }
      }

      b_st.site = &i_emlrtRSI;
      lik(&b_st, &Xtrend, &bsb, &trend, &seasonal, &s, &yhatseaso, &Xseaso,
          &varampl, &Seq, &nexpl, &isemptyX, &X, &lshiftYN, &Xlshift, &yhat,
          &yin, beta.contents);

      /*  Computation of residuals. */
      loop_ub = bsb.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        if (bsb.contents->data[i] != (int32_T)muDoubleScalarFloor
            (bsb.contents->data[i])) {
          emlrtIntegerCheckR2012b(bsb.contents->data[i], &b_emlrtDCI, &st);
        }

        i1 = (int32_T)bsb.contents->data[i];
        if ((i1 < 1) || (i1 > yin.contents->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, yin.contents->size[0],
            &d_emlrtBCI, &st);
        }
      }

      if (bsb.contents->size[0] != yhat.contents->size[0]) {
        emlrtSizeEqCheck1DR2012b(bsb.contents->size[0], yhat.contents->size[0],
          &bb_emlrtECI, &st);
      }

      i = b_yin->size[0];
      b_yin->size[0] = bsb.contents->size[0];
      emxEnsureCapacity_real_T(&st, b_yin, i, &dj_emlrtRTEI);
      loop_ub = bsb.contents->size[0];
      for (i = 0; i < loop_ub; i++) {
        b_yin->data[i] = yin.contents->data[(int32_T)bsb.contents->data[i] - 1]
          - yhat.contents->data[i];
      }

      b_st.site = &h_emlrtRSI;
      power(&b_st, b_yin, weights);
      b_st.site = &h_emlrtRSI;
      stoprint = sum(&b_st, weights);
    }

    ncomb = (real_T)bsb.contents->size[0] - p;
    out->LastHarmonicPval.size[0] = 1;
    out->LastHarmonicPval.size[1] = 1;
    b_st.site = &g_emlrtRSI;
    r9 = &b_st;
    d = fcdf(r9, (stoprint - sworst) / 2.0 / (sworst / ncomb), ncomb);
    out->LastHarmonicPval.data[0] = 1.0 - d;
  } else if (seasonal.contents > 0.0) {
    /*  In presence of 6 harmonics, the last one is just made up of a single */
    /*  variable, therefore the p value is just the p value of the assocaited */
    /*  t-stat */
    out->LastHarmonicPval.size[0] = 1;
    out->LastHarmonicPval.size[1] = 1;
    i = Xtrend.contents->size[1] + nseaso;
    if ((i < 1) || (i > out->B->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, out->B->size[0], &t_emlrtBCI, &st);
    }

    out->LastHarmonicPval.data[0] = out->B->data[(i + out->B->size[0] * 3) - 1];
  }

  emxFree_real_T(&weights);
  emxFree_real_T(&b_yin);
  emxFree_int32_T(&ia);
  emxFree_real_T(&selWithoutLastHarmonic_tmp);
  emxFree_real_T(&selWithoutLastHarmonic);
  emxFree_real_T(&posvarampl);
  emxFree_real_T(&Cr);
  emxFree_real_T(&bestsubset);
  emxFree_real_T(&bestyhat);
  emxFree_real_T(&yhatrob);
  emxFree_real_T(&WEIibestrdiv2);
  emxFree_real_T(&allnumscale2);
  emxFreeStruct_captured_var(&Seq);
  emxFreeStruct_captured_var(&Xtrend);
  emxFreeStruct_captured_var(&Xseaso);
  emxFreeStruct_captured_var(&X);
  emxFreeStruct_captured_var(&Xsel);
  emxFreeStruct_captured_var(&bsb);
  emxFreeStruct_captured_var(&Xlshift);
  emxFreeStruct_captured_var(&beta);
  emxFreeStruct_captured_var(&yhat);
  if (lshiftYN.contents == 1.0) {
    if (out->B->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(out->B->size[0], 1, out->B->size[0],
        &ef_emlrtBCI, &st);
    }

    varargin_22_data[0] = 1.0;
    varargin_22_data[1] = muDoubleScalarAbs(out->B->data[(out->B->size[0] +
      out->B->size[0] * 2) - 1]);
    b_st.site = &f_emlrtRSI;
    FSRinvmdr(&b_st, varargin_22_data, p - 1.0, numscale2LSH);
    out->LevelShiftPval.size[0] = 1;
    out->LevelShiftPval.size[1] = 1;
    out->LevelShiftPval.data[0] = 1.0 - numscale2LSH[1];
  } else {
    out->LevelShiftPval.size[0] = 0;
    out->LevelShiftPval.size[1] = 0;
  }

  /*  check about the y global variable */
  if (!b_isequal(yin.contents, yin.contents)) {
    b_st.site = &e_emlrtRSI;
    j_error(&b_st);
  }

  emxFreeStruct_captured_var(&yin);
  emxFreeStruct_captured_var(&yhatseaso);
  emxFreeStruct_captured_var(&Xseasof);
  emxFreeStruct_captured_var(&Xf);
  emxFreeStruct_captured_var(&Seqf);
  emxFreeStruct_captured_var(&Xlshiftf);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtConstCTX aTLS, void
  *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

/* End of code generation (LTSts_wrapper.c) */
