/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unibiv.c
 *
 * Code generation for function 'unibiv'
 *
 */

/* Include files */
#include "unibiv.h"
#include "betainc.h"
#include "betaincinv.h"
#include "blockedSummation.h"
#include "eig.h"
#include "find.h"
#include "finv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "iqr.h"
#include "mad.h"
#include "median.h"
#include "quantile.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sqrt.h"
#include "vvarstd.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_plus(emxArray_real_T *yrank, const emxArray_real_T *Xs,
            const emxArray_real_T *Ys)
{
  const double *Xs_data;
  const double *Ys_data;
  double *yrank_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  Ys_data = Ys->data;
  Xs_data = Xs->data;
  i = yrank->size[0];
  if (Ys->size[0] == 1) {
    yrank->size[0] = Xs->size[0];
  } else {
    yrank->size[0] = Ys->size[0];
  }
  emxEnsureCapacity_real_T(yrank, i);
  yrank_data = yrank->data;
  stride_0_0 = (Xs->size[0] != 1);
  stride_1_0 = (Ys->size[0] != 1);
  if (Ys->size[0] == 1) {
    loop_ub = Xs->size[0];
  } else {
    loop_ub = Ys->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    yrank_data[i] = Xs_data[i * stride_0_0] + Ys_data[i * stride_1_0];
  }
}

void b_unibiv(const emxArray_real_T *Y, emxArray_real_T *fre)
{
  static creal_T b_The1max[7202];
  static creal_T new1[7202];
  emxArray_boolean_T *r;
  emxArray_creal_T *b_Xs;
  emxArray_creal_T *new2;
  emxArray_int32_T *r1;
  emxArray_real_T *MDbiv;
  emxArray_real_T *Xs;
  emxArray_real_T *Ys;
  emxArray_real_T *b_Y;
  emxArray_real_T *biv;
  emxArray_real_T *bivT;
  emxArray_real_T *datax;
  emxArray_real_T *outy;
  emxArray_real_T *seq;
  emxArray_real_T *univT;
  emxArray_real_T *xrank;
  emxArray_real_T *y;
  emxArray_real_T *yrank;
  creal_T xnew[3601];
  creal_T ynew[3601];
  creal_T M[4];
  creal_T aut[2];
  creal_T a;
  creal_T sinth;
  creal_T *b_Xs_data;
  creal_T *new2_data;
  double The1max[3601];
  double The2max[3601];
  double b_a[4];
  double quan[3];
  const double *Y_data;
  double Ty;
  double a_tmp;
  double b_r;
  double b_xrank;
  double brm;
  double ch_re;
  double costh_re;
  double fuo;
  double mady;
  double sgnbi;
  double sgnbr;
  double *MDbiv_data;
  double *Xs_data;
  double *Ys_data;
  double *b_Y_data;
  double *bivT_data;
  double *biv_data;
  double *seq_data;
  double *univT_data;
  double *xrank_data;
  int b_i;
  unsigned int b_jl;
  int i;
  int i1;
  int i2;
  int il;
  int jl;
  int loop_ub;
  int n;
  int nx;
  int robscale;
  int *r3;
  bool *r2;
  Y_data = Y->data;
  emxInit_real_T(&bivT, 1);
  /* unibiv has the purpose of detecting univariate and bivariate outliers */
  /*  */
  /* <a href="matlab: docsearchFS('unibiv')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                Y represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*        madcoef :  scaled MAD. Scalar. Coefficient which is used to scale
   * MAD */
  /*                    coefficient to have a robust estimate of dispersion.
   * The */
  /*                    default is 1.4815 so that 1.4815*MAD(N(0,1))=1. */
  /*                  Example - 'madcoef',2 */
  /*                  Data Types - double */
  /*                    Remark: if mad =median(y-median(y))=0 then the
   * interquartile */
  /*                    range is used. If also the interquartile range is 0 */
  /*                    than the MD (mean absolute deviation) is used.  In */
  /*                    other words MD=mean(abs(y-mean(Y)) */
  /*  */
  /*            rf  :  It specifies the confidence */
  /*                   level of the robust bivariate ellipses. Scalar. 0<rf<1.
   */
  /*                   The default value is 0.95 that is the outer contour in */
  /*                   presence of normality for each ellipse should leave */
  /*                   outside 5% of the values. */
  /*                  Example - 'rf',0.99 */
  /*                  Data Types - double */
  /*  */
  /*       robscale :   how to compute dispersion. Scalar. It specifies the */
  /*                    statistical indexes to use to compute the dispersion of
   */
  /*                    each variable and the correlation among each pair of */
  /*                    variables. */
  /*                    robscale=1 (default): the program uses the median
   * correlation */
  /*                    and the MAD as estimate of the dispersion of each
   * variable; */
  /*                    robscale=2: the correlation coefficient among ranks is
   * used */
  /*                    (Spearman's rho) and the MAD as estimate of the
   * dispersion */
  /*                    of each variable; */
  /*                    robscale=3: the correlation coefficient is based on
   * Kendall's tau b */
  /*                    and the MAD as estimate of the dispersion of each */
  /*                    variable; */
  /*                    robscale=4: tetracoric correlation coefficient is used
   * and the MAD */
  /*                    as estimate of the dispersion of each variable; */
  /*                    otherwise the correlation and the dispersion of the
   * variables are */
  /*                    computed using the traditional (non robust) formulae */
  /*                    around the univariate medians. */
  /*                  Example - 'robscale',2 */
  /*                  Data Types - double */
  /*  */
  /*          plots :   Plot on the screen. Scalar. It specifies whether it is
   */
  /*                    necessary to produce a plot */
  /*                    with univariate standardized boxplots on the */
  /*                    main diagonal and bivariate confidence ellipses out of
   */
  /*                    the main diagonal. If plots is equal to 1 a plot */
  /*                    which contains univariate standardized boxplots on the
   */
  /*                    main diagonal and bivariate confidence ellipses out of
   */
  /*                    the main diagonal is produced on the screen. If plots is
   */
  /*                    <> 1 no plot is produced. As default no plot is */
  /*                    produced. */
  /*                  Example - 'plots',2 */
  /*                  Data Types - double */
  /*  */
  /*        tag     :   plot tag.  Character. It identifies the handle of the
   * plot which */
  /*                    is about to be created. The default is to use tag */
  /*                    'pl_unibiv'. Notice that if the program finds a plot
   * which */
  /*                    has a tag equal to the one specified by the user, then
   */
  /*                    the output of the new plot overwrites the existing one
   */
  /*                    in the same window else a new window is created. */
  /*                  Example - 'tag','new_tag' */
  /*                  Data Types - char */
  /*  */
  /*        textlab : plot labels. Scalar.  Scalar which controls the labels in
   */
  /*                    the plots. If textlab=1 and */
  /*                    plots=1 the labels associated */
  /*                    to the units which are univariate outliers or which are
   */
  /*                    outside the confidence levels of the contours are */
  /*                    displayed on the screen. */
  /*                  Example - 'textlab',0 */
  /*                  Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*    fre  :  n x 4 matrix which contains details about the univariate and */
  /*            bivariate outliers. */
  /*            1st col = index of the units; */
  /*            2nd col = number of times unit has been declared */
  /*            univariate outliers; */
  /*            3rd col = number of times unit has been declared */
  /*            bivariate outlier; */
  /*            4th col = pseudo MD as sum of bivariate MD. */
  /*  */
  /*  See also: FSMmmd */
  /*  */
  /*  References: */
  /*  */
  /*        Riani, M., Zani S. (1997). An iterative method for the detection of
   */
  /*        multivariate outliers, "Metron", Vol. LV, pp. 101-117. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('unibiv')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % unibiv with all default options. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=500; */
  /*     p=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,p); */
  /*     [out]=unibiv(Y); */
  /* } */
  /* { */
  /*     %% unibiv with optional arguments. */
  /*     % Stack loss data. */
  /*     Y=load('stack_loss.txt'); */
  /*     % Show robust confidence ellipses */
  /*     out=unibiv(Y,'plots',1,'textlab',1); */
  /* } */
  /*  Beginning of code */
  n = Y->size[0];
  /*  Default confidence level for bivariate ellipses */
  /*  Input parameters checking */
  /*  Write in structure 'options' the options chosen by the user */
  robscale = 1;
  /*  bivT contains the frequency distribution of biv. outliers */
  i = bivT->size[0];
  bivT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(bivT, i);
  bivT_data = bivT->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bivT_data[i] = 0.0;
  }
  emxInit_real_T(&univT, 1);
  /*  univT contains the frequency distribution of univ. outliers */
  i = univT->size[0];
  univT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(univT, i);
  univT_data = univT->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    univT_data[i] = 0.0;
  }
  emxInit_real_T(&MDbiv, 1);
  /*  MDbiv= vector which contains the sum of the bivaraite Mahalanobis
   * distances for each unit */
  i = MDbiv->size[0];
  MDbiv->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(MDbiv, i);
  MDbiv_data = MDbiv->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    MDbiv_data[i] = 0.0;
  }
  /*  madcoef=1; */
  emxInit_real_T(&biv, 2);
  biv_data = biv->data;
  if (Y->size[0] < 1) {
    biv->size[0] = 1;
    biv->size[1] = 0;
  } else {
    i = biv->size[0] * biv->size[1];
    biv->size[0] = 1;
    biv->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(biv, i);
    biv_data = biv->data;
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      biv_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = biv->size[1];
  emxEnsureCapacity_real_T(seq, i);
  seq_data = seq->data;
  loop_ub = biv->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq_data[i] = biv_data[i];
  }
  i = Y->size[1];
  emxInit_real_T(&y, 1);
  emxInit_real_T(&Ys, 1);
  emxInit_real_T(&datax, 2);
  emxInit_real_T(&outy, 2);
  emxInit_real_T(&Xs, 1);
  emxInit_real_T(&xrank, 1);
  emxInit_real_T(&yrank, 1);
  emxInit_creal_T(&new2, 2);
  emxInit_boolean_T(&r, 1);
  emxInit_int32_T(&r1, 1);
  emxInit_real_T(&b_Y, 1);
  emxInit_creal_T(&b_Xs, 2);
  for (il = 0; il < i; il++) {
    /*  il is linked to the rows */
    /*  Ys = vector which contains standardized data */
    loop_ub = Y->size[0];
    i1 = y->size[0];
    y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(y, i1);
    biv_data = y->data;
    i1 = b_Y->size[0];
    b_Y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(b_Y, i1);
    b_Y_data = b_Y->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_xrank = Y_data[i1 + Y->size[0] * il];
      biv_data[i1] = b_xrank;
      b_Y_data[i1] = b_xrank;
    }
    Ty = median(b_Y);
    loop_ub = Y->size[0];
    i1 = b_Y->size[0];
    b_Y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(b_Y, i1);
    b_Y_data = b_Y->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y_data[i1] = Y_data[i1 + Y->size[0] * il];
    }
    mady = mad(b_Y);
    if (mady > 0.0) {
      b_xrank = 1.4815 * mady;
      loop_ub = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(Ys, i1);
      Ys_data = Ys->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / b_xrank;
      }
    } else {
      loop_ub = Y->size[0];
      i1 = b_Y->size[0];
      b_Y->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(b_Y, i1);
      b_Y_data = b_Y->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Y_data[i1] = Y_data[i1 + Y->size[0] * il];
      }
      if (iqr(b_Y) > 0.0) {
        loop_ub = Y->size[0];
        i1 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i1);
        b_Y_data = b_Y->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_Y_data[i1] = Y_data[i1 + Y->size[0] * il];
        }
        b_xrank = 1.4815 * (1.349 * iqr(b_Y) / 0.6745);
        loop_ub = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        Ys_data = Ys->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / b_xrank;
        }
      } else {
        loop_ub = Y->size[0];
        i1 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i1);
        b_Y_data = b_Y->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_Y_data[i1] = Y_data[i1 + Y->size[0] * il];
        }
        b_xrank = 1.4815 * (1.2533 * b_mad(b_Y) / 0.6745);
        loop_ub = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        Ys_data = Ys->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / b_xrank;
        }
      }
    }
    /*  datax x add a sequence to standardized data */
    loop_ub = seq->size[0];
    i1 = datax->size[0] * datax->size[1];
    datax->size[0] = seq->size[0];
    datax->size[1] = 2;
    emxEnsureCapacity_real_T(datax, i1);
    biv_data = datax->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      biv_data[i1] = seq_data[i1];
    }
    loop_ub = Ys->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      biv_data[i1 + datax->size[0]] = Ys_data[i1];
    }
    /*  quan = 1 x 3 vector which contins 1% quartile median and 3rd */
    /*  quartile */
    quantile(Ys, quan);
    /*  di= interquartile difference */
    mady = quan[2] - quan[0];
    /*  uq=upper truncation point */
    Ty = quan[2] + 1.5 * mady;
    /*  lq=lower truncation point */
    mady = quan[0] - 1.5 * mady;
    /*  outy is a (l+1) x 2 matrix. the first column contains */
    /*  the indexes of the units declared univariate */
    /*  outliers, the second columns gives the standardized */
    /*  values of the outliers */
    nx = datax->size[0] - 1;
    i1 = xrank->size[0];
    xrank->size[0] = datax->size[0];
    emxEnsureCapacity_real_T(xrank, i1);
    xrank_data = xrank->data;
    for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
      xrank_data[loop_ub] = fabs(biv_data[loop_ub + datax->size[0]]);
    }
    if (datax->size[0] == xrank->size[0]) {
      loop_ub = datax->size[0];
      i1 = r->size[0];
      r->size[0] = datax->size[0];
      emxEnsureCapacity_boolean_T(r, i1);
      r2 = r->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_xrank = biv_data[i1 + datax->size[0]];
        r2[i1] = ((b_xrank > Ty) || (b_xrank < mady) || (xrank_data[i1] > 3.0));
      }
    } else {
      l_binary_expand_op(r, datax, Ty, mady, xrank);
      r2 = r->data;
    }
    loop_ub = r->size[0] - 1;
    nx = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (r2[b_i]) {
        nx++;
      }
    }
    i1 = r1->size[0];
    r1->size[0] = nx;
    emxEnsureCapacity_int32_T(r1, i1);
    r3 = r1->data;
    nx = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (r2[b_i]) {
        r3[nx] = b_i + 1;
        nx++;
      }
    }
    loop_ub = r1->size[0];
    i1 = outy->size[0] * outy->size[1];
    outy->size[0] = r1->size[0];
    outy->size[1] = 2;
    emxEnsureCapacity_real_T(outy, i1);
    xrank_data = outy->data;
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        xrank_data[i2 + outy->size[0] * i1] =
            biv_data[(r3[i2] + datax->size[0] * i1) - 1];
      }
    }
    loop_ub = r1->size[0];
    if (r1->size[0] != 0) {
      /*  Increase by 1 the frequencey distribution of */
      /*  univariate outliers in vector univT */
      i1 = b_Y->size[0];
      b_Y->size[0] = r1->size[0];
      emxEnsureCapacity_real_T(b_Y, i1);
      b_Y_data = b_Y->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Y_data[i1] = univT_data[(int)xrank_data[i1] - 1] + 1.0;
      }
      loop_ub = b_Y->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        univT_data[(int)xrank_data[i1] - 1] = b_Y_data[i1];
      }
    }
    i1 = Y->size[1] - il;
    for (jl = 0; jl < i1; jl++) {
      b_jl = ((unsigned int)il + jl) + 1U;
      /*  jl is linked to columns */
      if ((unsigned int)(il + 1) != b_jl) {
        /*  beginning of bivariate part */
        /*  Tx is the coordinate of the  Median */
        loop_ub = Y->size[0];
        i2 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i2);
        b_Y_data = b_Y->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
        }
        Ty = median(b_Y);
        loop_ub = Y->size[0];
        i2 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i2);
        b_Y_data = b_Y->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
        }
        mady = mad(b_Y);
        if (mady > 0.0) {
          b_xrank = 1.4815 * mady;
          loop_ub = Y->size[0];
          i2 = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(Xs, i2);
          Xs_data = Xs->data;
          for (i2 = 0; i2 < loop_ub; i2++) {
            Xs_data[i2] =
                (Y_data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / b_xrank;
          }
        } else {
          if (robscale == 1) {
            robscale = 2;
          }
          loop_ub = Y->size[0];
          i2 = b_Y->size[0];
          b_Y->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(b_Y, i2);
          b_Y_data = b_Y->data;
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
          }
          mady = iqr(b_Y);
          if (mady > 0.0) {
            b_xrank = 1.4815 * (1.349 * mady / 0.6745);
            loop_ub = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, i2);
            Xs_data = Xs->data;
            for (i2 = 0; i2 < loop_ub; i2++) {
              Xs_data[i2] =
                  (Y_data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / b_xrank;
            }
          } else {
            loop_ub = Y->size[0];
            i2 = b_Y->size[0];
            b_Y->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(b_Y, i2);
            b_Y_data = b_Y->data;
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
            }
            b_xrank = 1.4815 * (1.2533 * b_mad(b_Y) / 0.6745);
            loop_ub = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, i2);
            Xs_data = Xs->data;
            for (i2 = 0; i2 < loop_ub; i2++) {
              Xs_data[i2] =
                  (Y_data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / b_xrank;
            }
          }
        }
        if (robscale == 1) {
          if (Xs->size[0] == Ys->size[0]) {
            i2 = yrank->size[0];
            yrank->size[0] = Xs->size[0];
            emxEnsureCapacity_real_T(yrank, i2);
            biv_data = yrank->data;
            loop_ub = Xs->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              biv_data[i2] = Xs_data[i2] + Ys_data[i2];
            }
          } else {
            b_plus(yrank, Xs, Ys);
            biv_data = yrank->data;
          }
          nx = yrank->size[0];
          i2 = xrank->size[0];
          xrank->size[0] = yrank->size[0];
          emxEnsureCapacity_real_T(xrank, i2);
          xrank_data = xrank->data;
          for (loop_ub = 0; loop_ub < nx; loop_ub++) {
            xrank_data[loop_ub] = fabs(biv_data[loop_ub]);
          }
          fuo = median(xrank);
          Ty = fuo * fuo;
          if (Xs->size[0] == Ys->size[0]) {
            i2 = yrank->size[0];
            yrank->size[0] = Xs->size[0];
            emxEnsureCapacity_real_T(yrank, i2);
            biv_data = yrank->data;
            loop_ub = Xs->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              biv_data[i2] = Xs_data[i2] - Ys_data[i2];
            }
          } else {
            minus(yrank, Xs, Ys);
            biv_data = yrank->data;
          }
          nx = yrank->size[0];
          i2 = xrank->size[0];
          xrank->size[0] = yrank->size[0];
          emxEnsureCapacity_real_T(xrank, i2);
          xrank_data = xrank->data;
          for (loop_ub = 0; loop_ub < nx; loop_ub++) {
            xrank_data[loop_ub] = fabs(biv_data[loop_ub]);
          }
          fuo = median(xrank);
          mady = fuo * fuo;
          b_r = (Ty - mady) / (Ty + mady);
          if (rtIsNaN(b_r)) {
            b_r = 0.0;
          }
        } else {
          /*  r is computed using ranks */
          loop_ub = Y->size[0];
          i2 = b_Y->size[0];
          b_Y->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(b_Y, i2);
          b_Y_data = b_Y->data;
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
          }
          tiedrankFS(b_Y, xrank);
          xrank_data = xrank->data;
          tiedrankFS(y, yrank);
          biv_data = yrank->data;
          mady =
              blockedSummation(xrank, xrank->size[0]) / (double)xrank->size[0];
          Ty = blockedSummation(yrank, yrank->size[0]) / (double)yrank->size[0];
          b_xrank = 0.0;
          loop_ub = xrank->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_xrank += (xrank_data[i2] - mady) * (biv_data[i2] - Ty);
          }
          b_r = b_xrank / (((double)n - 1.0) * vvarstd(xrank, xrank->size[0]) *
                           vvarstd(yrank, yrank->size[0]));
        }
        /*  Spearman's rho and Kendall's tau and tetracoric correlation */
        /*  are discrete-valued statistics, and */
        /*  their distributions have positive probability at 1 and -1. */
        /*  If their value is equal to 1 or -1 then artificially put the value
         * equal */
        /*  to 0.999 or -0.999 */
        if (b_r == 1.0) {
          b_r = 0.999;
        } else if (b_r == -1.0) {
          b_r = -0.999;
        }
        /*  Now we calculate Mahalanobis distances with centroid defined */
        /*  by medians */
        fuo = 2.0 * b_r;
        mady = b_r * b_r;
        /*  Create the vector of pseudoMahalanobis distances (based on the sum
         */
        /*  of each bivariate projection) */
        i2 = yrank->size[0];
        yrank->size[0] = Xs->size[0];
        emxEnsureCapacity_real_T(yrank, i2);
        biv_data = yrank->data;
        loop_ub = Xs->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          Ty = Xs_data[i2];
          biv_data[i2] = Ty * Ty;
        }
        loop_ub = Ys->size[0];
        i2 = xrank->size[0];
        xrank->size[0] = Ys->size[0];
        emxEnsureCapacity_real_T(xrank, i2);
        xrank_data = xrank->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          Ty = Ys_data[i2];
          xrank_data[i2] = Ty * Ty;
        }
        if (yrank->size[0] == 1) {
          nx = xrank->size[0];
        } else {
          nx = yrank->size[0];
        }
        if (Xs->size[0] == 1) {
          loop_ub = Ys->size[0];
        } else {
          loop_ub = Xs->size[0];
        }
        if ((yrank->size[0] == xrank->size[0]) &&
            (Xs->size[0] == Ys->size[0]) && (nx == loop_ub)) {
          loop_ub = yrank->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            biv_data[i2] = ((biv_data[i2] + xrank_data[i2]) -
                            fuo * Xs_data[i2] * Ys_data[i2]) /
                           (1.0 - mady);
          }
        } else {
          k_binary_expand_op(yrank, xrank, fuo, Xs, Ys, mady);
          biv_data = yrank->data;
        }
        nx = yrank->size[0];
        for (loop_ub = 0; loop_ub < nx; loop_ub++) {
          biv_data[loop_ub] = sqrt(biv_data[loop_ub]);
        }
        loop_ub = MDbiv->size[0];
        if (MDbiv->size[0] == yrank->size[0]) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            MDbiv_data[i2] += biv_data[i2];
          }
        } else {
          plus(MDbiv, yrank);
          MDbiv_data = MDbiv->data;
        }
        /*   Em  is the median  of vector E */
        if (n - 2 > 0) {
          b_xrank = ((double)n - 2.0) / 2.0;
          if (0.95 > (betainc(0.5, 1.0, b_xrank)).re) {
            a = betaincinv(0.95, b_xrank, 1.0);
            mady = (1.0 - a.re) / a.re;
          } else {
            a = b_betaincinv(0.95, 1.0, b_xrank);
            mady = a.re / (1.0 - a.re);
          }
          mady = mady * ((double)n - 2.0) / 2.0;
        } else {
          mady = rtNaN;
        }
        mady = sqrt(2.0 * ((double)n - 1.0) / ((double)n - 2.0) * mady);
        /*  hinge=ellipse containing 50% of the values */
        /*  fence=ellipe containing (1-\alpha)% of the values */
        fuo = mady * sqrt((b_r + 1.0) / 2.0);
        Ty = mady * sqrt((1.0 - b_r) / 2.0);
        for (i2 = 0; i2 < 3601; i2++) {
          The1max[i2] = fuo * dv[i2];
          The2max[i2] = Ty * dv1[i2];
        }
        /*  rotation of the coordinates */
        fuo = 1.0 / (mady * mady * (1.0 - b_r * b_r));
        mady = -b_r * fuo;
        b_a[0] = fuo;
        b_a[2] = mady;
        b_a[1] = mady;
        b_a[3] = fuo;
        eig(b_a, aut);
        b_sort(aut);
        a_tmp = fuo - aut[1].re;
        b_xrank = a_tmp * (0.0 - aut[1].im);
        a_tmp = (a_tmp * a_tmp - (0.0 - aut[1].im) * (0.0 - aut[1].im)) +
                mady * mady;
        a.re = a_tmp;
        a.im = b_xrank + b_xrank;
        b_sqrt(&a);
        if (a.im == 0.0) {
          costh_re = mady / a.re;
          b_r = 0.0;
        } else if (a.re == 0.0) {
          if (mady == 0.0) {
            costh_re = 0.0 / a.im;
            b_r = 0.0;
          } else {
            costh_re = 0.0;
            b_r = -(mady / a.im);
          }
        } else {
          brm = fabs(a.re);
          Ty = fabs(a.im);
          if (brm > Ty) {
            brm = a.im / a.re;
            ch_re = a.re + brm * a.im;
            costh_re = (mady + brm * 0.0) / ch_re;
            b_r = (0.0 - brm * mady) / ch_re;
          } else if (Ty == brm) {
            if (a.re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (a.im > 0.0) {
              sgnbi = 0.5;
            } else {
              sgnbi = -0.5;
            }
            costh_re = (mady * sgnbr + 0.0 * sgnbi) / brm;
            b_r = (0.0 * sgnbr - mady * sgnbi) / brm;
          } else {
            brm = a.re / a.im;
            ch_re = a.im + brm * a.re;
            costh_re = brm * mady / ch_re;
            b_r = (brm * 0.0 - mady) / ch_re;
          }
        }
        a.re = a_tmp;
        a.im = b_xrank + b_xrank;
        b_sqrt(&a);
        mady = aut[1].re - fuo;
        if (a.im == 0.0) {
          if (aut[1].im == 0.0) {
            sinth.re = mady / a.re;
            sinth.im = 0.0;
          } else if (mady == 0.0) {
            sinth.re = 0.0;
            sinth.im = aut[1].im / a.re;
          } else {
            sinth.re = mady / a.re;
            sinth.im = aut[1].im / a.re;
          }
        } else if (a.re == 0.0) {
          if (mady == 0.0) {
            sinth.re = aut[1].im / a.im;
            sinth.im = 0.0;
          } else if (aut[1].im == 0.0) {
            sinth.re = 0.0;
            sinth.im = -(mady / a.im);
          } else {
            sinth.re = aut[1].im / a.im;
            sinth.im = -(mady / a.im);
          }
        } else {
          brm = fabs(a.re);
          Ty = fabs(a.im);
          if (brm > Ty) {
            brm = a.im / a.re;
            ch_re = a.re + brm * a.im;
            sinth.re = (mady + brm * aut[1].im) / ch_re;
            sinth.im = (aut[1].im - brm * mady) / ch_re;
          } else if (Ty == brm) {
            if (a.re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (a.im > 0.0) {
              sgnbi = 0.5;
            } else {
              sgnbi = -0.5;
            }
            sinth.re = (mady * sgnbr + aut[1].im * sgnbi) / brm;
            sinth.im = (aut[1].im * sgnbr - mady * sgnbi) / brm;
          } else {
            brm = a.re / a.im;
            ch_re = a.im + brm * a.re;
            sinth.re = (brm * mady + aut[1].im) / ch_re;
            sinth.im = (brm * aut[1].im - mady) / ch_re;
          }
        }
        /*  M is the orthogonal matrix which enables the rotation of the axes */
        M[0].re = costh_re;
        M[0].im = b_r;
        M[2] = sinth;
        M[1].re = -sinth.re;
        M[1].im = -sinth.im;
        M[3].re = costh_re;
        M[3].im = b_r;
        /*  fou = fires of the ellipse */
        if (aut[0].im == 0.0) {
          b_xrank = 1.0 / aut[0].re;
          b_r = 0.0;
        } else if (aut[0].re == 0.0) {
          b_xrank = 0.0;
          b_r = -(1.0 / aut[0].im);
        } else {
          brm = fabs(aut[0].re);
          Ty = fabs(aut[0].im);
          if (brm > Ty) {
            brm = aut[0].im / aut[0].re;
            ch_re = aut[0].re + brm * aut[0].im;
            b_xrank = (brm * 0.0 + 1.0) / ch_re;
            b_r = (0.0 - brm) / ch_re;
          } else if (Ty == brm) {
            if (aut[0].re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (aut[0].im > 0.0) {
              sgnbi = 0.5;
            } else {
              sgnbi = -0.5;
            }
            b_xrank = (sgnbr + 0.0 * sgnbi) / brm;
            b_r = (0.0 * sgnbr - sgnbi) / brm;
          } else {
            brm = aut[0].re / aut[0].im;
            ch_re = aut[0].im + brm * aut[0].re;
            b_xrank = brm / ch_re;
            b_r = (brm * 0.0 - 1.0) / ch_re;
          }
        }
        if (aut[1].im == 0.0) {
          Ty = 1.0 / aut[1].re;
          mady = 0.0;
        } else if (aut[1].re == 0.0) {
          Ty = 0.0;
          mady = -(1.0 / aut[1].im);
        } else {
          brm = fabs(aut[1].re);
          Ty = fabs(aut[1].im);
          if (brm > Ty) {
            brm = aut[1].im / aut[1].re;
            ch_re = aut[1].re + brm * aut[1].im;
            Ty = (brm * 0.0 + 1.0) / ch_re;
            mady = (0.0 - brm) / ch_re;
          } else if (Ty == brm) {
            if (aut[1].re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (aut[1].im > 0.0) {
              sgnbi = 0.5;
            } else {
              sgnbi = -0.5;
            }
            Ty = (sgnbr + 0.0 * sgnbi) / brm;
            mady = (0.0 * sgnbr - sgnbi) / brm;
          } else {
            brm = aut[1].re / aut[1].im;
            ch_re = aut[1].im + brm * aut[1].re;
            Ty = brm / ch_re;
            mady = (brm * 0.0 - 1.0) / ch_re;
          }
        }
        fuo = sqrt(rt_hypotd_snf(b_xrank - Ty, b_r - mady));
        /*  new1 = 2 x n matrix which contains the coordinates of the rotated
         * ellipse */
        for (i2 = 0; i2 < 3601; i2++) {
          b_i = i2 << 1;
          b_xrank = The1max[i2];
          mady = The2max[i2];
          b_The1max[b_i].re = b_xrank + mady;
          b_The1max[b_i].im = 0.0;
          b_The1max[b_i + 1].re = b_xrank - mady;
          b_The1max[b_i + 1].im = 0.0;
        }
        for (i2 = 0; i2 < 2; i2++) {
          mady = M[i2].re;
          Ty = M[i2].im;
          b_xrank = M[i2 + 2].re;
          b_r = M[i2 + 2].im;
          for (b_i = 0; b_i < 3601; b_i++) {
            nx = b_i << 1;
            brm = b_The1max[nx].im;
            ch_re = b_The1max[nx].re;
            sgnbr = b_The1max[nx + 1].im;
            sgnbi = b_The1max[nx + 1].re;
            nx += i2;
            new1[nx].re =
                (mady * ch_re - Ty * brm) + (b_xrank * sgnbi - b_r * sgnbr);
            new1[nx].im =
                (mady * brm + Ty * ch_re) + (b_xrank * sgnbr + b_r * sgnbi);
          }
        }
        /*  xnew = n x 1 vector which contains x coord. of rotated points */
        /*  ynew = n x 1 vector which contains y coord. of rotated points */
        for (i2 = 0; i2 < 3601; i2++) {
          b_i = i2 << 1;
          xnew[i2].re = new1[b_i].re;
          xnew[i2].im = -new1[b_i].im;
          ynew[i2].re = new1[b_i + 1].re;
          ynew[i2].im = -new1[b_i + 1].im;
        }
        /*  new2 = 2 x n matrix which contains the coordinates of the rotated
         * points */
        i2 = b_Xs->size[0] * b_Xs->size[1];
        b_Xs->size[0] = 2;
        b_Xs->size[1] = Xs->size[0];
        emxEnsureCapacity_creal_T(b_Xs, i2);
        b_Xs_data = b_Xs->data;
        loop_ub = Xs->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Xs_data[2 * i2].re = Xs_data[i2];
          b_Xs_data[2 * i2].im = 0.0;
        }
        loop_ub = Ys->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_i = 2 * i2 + 1;
          b_Xs_data[b_i].re = Ys_data[i2];
          b_Xs_data[b_i].im = 0.0;
        }
        i2 = new2->size[0] * new2->size[1];
        new2->size[0] = 2;
        new2->size[1] = b_Xs->size[1];
        emxEnsureCapacity_creal_T(new2, i2);
        new2_data = new2->data;
        loop_ub = b_Xs->size[1];
        for (i2 = 0; i2 < 2; i2++) {
          for (b_i = 0; b_i < loop_ub; b_i++) {
            mady = M[i2].re;
            Ty = b_Xs_data[2 * b_i].im;
            b_xrank = M[i2].im;
            b_r = b_Xs_data[2 * b_i].re;
            brm = M[i2 + 2].re;
            nx = 2 * b_i + 1;
            ch_re = b_Xs_data[nx].im;
            sgnbr = M[i2 + 2].im;
            sgnbi = b_Xs_data[nx].re;
            nx = i2 + 2 * b_i;
            new2_data[nx].re =
                (mady * b_r - b_xrank * Ty) + (brm * sgnbi - sgnbr * ch_re);
            new2_data[nx].im =
                (mady * Ty + b_xrank * b_r) + (brm * ch_re + sgnbr * sgnbi);
          }
        }
        /*  ch is the fixed distance of each point lying on the ellipse */
        sinth.re = ynew[9].re * ynew[9].re - ynew[9].im * ynew[9].im;
        mady = ynew[9].re * ynew[9].im;
        sinth.im = mady + mady;
        a.re = xnew[9].re + fuo;
        costh_re = xnew[9].re - fuo;
        sgnbr = xnew[9].im * xnew[9].im;
        b_xrank = a.re * a.re - sgnbr;
        b_r = a.re * xnew[9].im;
        a.re = b_xrank + sinth.re;
        a.im = (b_r + b_r) + sinth.im;
        b_sqrt(&a);
        mady = costh_re * xnew[9].im;
        sinth.re += costh_re * costh_re - sgnbr;
        sinth.im += mady + mady;
        b_sqrt(&sinth);
        ch_re = a.re + sinth.re;
        /*  biv is the 1 x n vector which contains potential bivariate outliers
         */
        i2 = biv->size[0] * biv->size[1];
        biv->size[0] = 1;
        biv->size[1] = n;
        emxEnsureCapacity_real_T(biv, i2);
        biv_data = biv->data;
        for (i2 = 0; i2 < n; i2++) {
          biv_data[i2] = 0.0;
        }
        for (loop_ub = 0; loop_ub < n; loop_ub++) {
          a_tmp = new2_data[2 * loop_ub].re;
          a.re = a_tmp + fuo;
          sgnbi = new2_data[2 * loop_ub].im;
          costh_re = a_tmp - fuo;
          sgnbr = sgnbi * sgnbi;
          b_xrank = a.re * a.re - sgnbr;
          b_r = a.re * sgnbi;
          nx = 2 * loop_ub + 1;
          mady = new2_data[nx].re;
          Ty = new2_data[nx].im;
          brm = mady * mady - Ty * Ty;
          Ty *= mady;
          Ty += Ty;
          a.re = b_xrank + brm;
          a.im = (b_r + b_r) + Ty;
          b_sqrt(&a);
          mady = costh_re * sgnbi;
          sinth.re = (costh_re * costh_re - sgnbr) + brm;
          sinth.im = (mady + mady) + Ty;
          b_sqrt(&sinth);
          if (a.re + sinth.re > ch_re) {
            biv_data[loop_ub]++;
          }
        }
        /*  bivT contains cumulative distribution of bivariate outliers */
        loop_ub = bivT->size[0];
        if (bivT->size[0] == biv->size[1]) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            bivT_data[i2] += biv_data[i2];
          }
        } else {
          j_binary_expand_op(bivT, biv);
          bivT_data = bivT->data;
        }
        /*  the following lines plot the hinge together with the fence */
      } else {
        /*  plotting part */
        /*  produce a vertical boxplot @ */
        /*  end of univariate part */
      }
      /*  endif of il=jl */
    }
    /*  endif of jl=1:v */
  }
  emxFree_creal_T(&b_Xs);
  emxFree_real_T(&b_Y);
  emxFree_int32_T(&r1);
  emxFree_boolean_T(&r);
  emxFree_real_T(&biv);
  emxFree_creal_T(&new2);
  emxFree_real_T(&yrank);
  emxFree_real_T(&xrank);
  emxFree_real_T(&Xs);
  emxFree_real_T(&outy);
  emxFree_real_T(&datax);
  emxFree_real_T(&Ys);
  emxFree_real_T(&y);
  /*  endif of il=1:v */
  i = fre->size[0] * fre->size[1];
  fre->size[0] = seq->size[0];
  fre->size[1] = 4;
  emxEnsureCapacity_real_T(fre, i);
  biv_data = fre->data;
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    biv_data[i] = seq_data[i];
  }
  emxFree_real_T(&seq);
  loop_ub = univT->size[0];
  for (i = 0; i < loop_ub; i++) {
    biv_data[i + fre->size[0]] = univT_data[i];
  }
  emxFree_real_T(&univT);
  loop_ub = bivT->size[0];
  for (i = 0; i < loop_ub; i++) {
    biv_data[i + fre->size[0] * 2] = bivT_data[i];
  }
  emxFree_real_T(&bivT);
  loop_ub = MDbiv->size[0];
  for (i = 0; i < loop_ub; i++) {
    biv_data[i + fre->size[0] * 3] = MDbiv_data[i];
  }
  emxFree_real_T(&MDbiv);
}

void j_binary_expand_op(emxArray_real_T *bivT, const emxArray_real_T *biv)
{
  emxArray_real_T *b_bivT;
  const double *biv_data;
  double *b_bivT_data;
  double *bivT_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  biv_data = biv->data;
  bivT_data = bivT->data;
  emxInit_real_T(&b_bivT, 1);
  i = b_bivT->size[0];
  if (biv->size[1] == 1) {
    b_bivT->size[0] = bivT->size[0];
  } else {
    b_bivT->size[0] = biv->size[1];
  }
  emxEnsureCapacity_real_T(b_bivT, i);
  b_bivT_data = b_bivT->data;
  stride_0_0 = (bivT->size[0] != 1);
  stride_1_0 = (biv->size[1] != 1);
  if (biv->size[1] == 1) {
    loop_ub = bivT->size[0];
  } else {
    loop_ub = biv->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_bivT_data[i] = bivT_data[i * stride_0_0] + biv_data[i * stride_1_0];
  }
  i = bivT->size[0];
  bivT->size[0] = b_bivT->size[0];
  emxEnsureCapacity_real_T(bivT, i);
  bivT_data = bivT->data;
  loop_ub = b_bivT->size[0];
  for (i = 0; i < loop_ub; i++) {
    bivT_data[i] = b_bivT_data[i];
  }
  emxFree_real_T(&b_bivT);
}

void k_binary_expand_op(emxArray_real_T *yrank, const emxArray_real_T *xrank,
                        double a, const emxArray_real_T *Xs,
                        const emxArray_real_T *Ys, double c)
{
  emxArray_real_T *b_yrank;
  const double *Xs_data;
  const double *Ys_data;
  const double *xrank_data;
  double *b_yrank_data;
  double *yrank_data;
  int b_Ys;
  int i;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  Ys_data = Ys->data;
  Xs_data = Xs->data;
  xrank_data = xrank->data;
  yrank_data = yrank->data;
  emxInit_real_T(&b_yrank, 1);
  i = b_yrank->size[0];
  if (Ys->size[0] == 1) {
    b_Ys = Xs->size[0];
  } else {
    b_Ys = Ys->size[0];
  }
  if (b_Ys == 1) {
    if (xrank->size[0] == 1) {
      b_yrank->size[0] = yrank->size[0];
    } else {
      b_yrank->size[0] = xrank->size[0];
    }
  } else if (Ys->size[0] == 1) {
    b_yrank->size[0] = Xs->size[0];
  } else {
    b_yrank->size[0] = Ys->size[0];
  }
  emxEnsureCapacity_real_T(b_yrank, i);
  b_yrank_data = b_yrank->data;
  stride_0_0 = (yrank->size[0] != 1);
  stride_1_0 = (xrank->size[0] != 1);
  stride_2_0 = (Xs->size[0] != 1);
  stride_3_0 = (Ys->size[0] != 1);
  if (Ys->size[0] == 1) {
    b_Ys = Xs->size[0];
  } else {
    b_Ys = Ys->size[0];
  }
  if (b_Ys == 1) {
    if (xrank->size[0] == 1) {
      b_Ys = yrank->size[0];
    } else {
      b_Ys = xrank->size[0];
    }
  } else if (Ys->size[0] == 1) {
    b_Ys = Xs->size[0];
  } else {
    b_Ys = Ys->size[0];
  }
  for (i = 0; i < b_Ys; i++) {
    b_yrank_data[i] =
        ((yrank_data[i * stride_0_0] + xrank_data[i * stride_1_0]) -
         a * Xs_data[i * stride_2_0] * Ys_data[i * stride_3_0]) /
        (1.0 - c);
  }
  i = yrank->size[0];
  yrank->size[0] = b_yrank->size[0];
  emxEnsureCapacity_real_T(yrank, i);
  yrank_data = yrank->data;
  b_Ys = b_yrank->size[0];
  for (i = 0; i < b_Ys; i++) {
    yrank_data[i] = b_yrank_data[i];
  }
  emxFree_real_T(&b_yrank);
}

void l_binary_expand_op(emxArray_boolean_T *r1, const emxArray_real_T *datax,
                        double uq, double lq, const emxArray_real_T *xrank)
{
  const double *datax_data;
  const double *xrank_data;
  double d;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  bool *r;
  xrank_data = xrank->data;
  datax_data = datax->data;
  i = datax->size[0];
  stride_0_0 = r1->size[0];
  if (xrank->size[0] == 1) {
    r1->size[0] = i;
  } else {
    r1->size[0] = xrank->size[0];
  }
  emxEnsureCapacity_boolean_T(r1, stride_0_0);
  r = r1->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (xrank->size[0] != 1);
  if (xrank->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = xrank->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    d = datax_data[i * stride_0_0 + datax->size[0]];
    r[i] = ((d > uq) || (d < lq) || (xrank_data[i * stride_1_0] > 3.0));
  }
}

void mf_binary_expand_op(emxArray_real_T *outy, const emxArray_real_T *datax,
                         const emxArray_int32_T *jj, const emxArray_int32_T *ii)
{
  const double *datax_data;
  double *outy_data;
  const int *ii_data;
  const int *jj_data;
  int i;
  int i1;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  ii_data = ii->data;
  jj_data = jj->data;
  datax_data = datax->data;
  i = outy->size[0] * outy->size[1];
  if (ii->size[0] == 1) {
    outy->size[0] = jj->size[0];
  } else {
    outy->size[0] = ii->size[0];
  }
  outy->size[1] = 2;
  emxEnsureCapacity_real_T(outy, i);
  outy_data = outy->data;
  stride_0_0 = (jj->size[0] != 1);
  stride_1_0 = (ii->size[0] != 1);
  if (ii->size[0] == 1) {
    loop_ub = jj->size[0];
  } else {
    loop_ub = ii->size[0];
  }
  for (i = 0; i < 2; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      outy_data[i1 + outy->size[0] * i] =
          datax_data[(jj_data[i1 * stride_0_0] + datax->size[0] * i) - 1] -
          datax_data[(ii_data[i1 * stride_1_0] + datax->size[0] * i) - 1];
    }
  }
}

void minus(emxArray_real_T *yrank, const emxArray_real_T *Xs,
           const emxArray_real_T *Ys)
{
  const double *Xs_data;
  const double *Ys_data;
  double *yrank_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  Ys_data = Ys->data;
  Xs_data = Xs->data;
  i = yrank->size[0];
  if (Ys->size[0] == 1) {
    yrank->size[0] = Xs->size[0];
  } else {
    yrank->size[0] = Ys->size[0];
  }
  emxEnsureCapacity_real_T(yrank, i);
  yrank_data = yrank->data;
  stride_0_0 = (Xs->size[0] != 1);
  stride_1_0 = (Ys->size[0] != 1);
  if (Ys->size[0] == 1) {
    loop_ub = Xs->size[0];
  } else {
    loop_ub = Ys->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    yrank_data[i] = Xs_data[i * stride_0_0] - Ys_data[i * stride_1_0];
  }
}

void nf_binary_expand_op(emxArray_real_T *yrank, const emxArray_real_T *Y,
                         unsigned int jl, double Tx, const emxArray_real_T *y,
                         double Ty)
{
  const double *Y_data;
  const double *y_data;
  double *yrank_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  y_data = y->data;
  Y_data = Y->data;
  i = Y->size[0];
  stride_0_0 = yrank->size[0];
  if (y->size[0] == 1) {
    yrank->size[0] = i;
  } else {
    yrank->size[0] = y->size[0];
  }
  emxEnsureCapacity_real_T(yrank, stride_0_0);
  yrank_data = yrank->data;
  stride_0_0 = (i != 1);
  stride_1_0 = (y->size[0] != 1);
  if (y->size[0] == 1) {
    loop_ub = i;
  } else {
    loop_ub = y->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    yrank_data[i] = (Y_data[i * stride_0_0 + Y->size[0] * ((int)jl - 1)] - Tx) *
                    (y_data[i * stride_1_0] - Ty);
  }
}

void plus(emxArray_real_T *MDbiv, const emxArray_real_T *yrank)
{
  emxArray_real_T *b_MDbiv;
  const double *yrank_data;
  double *MDbiv_data;
  double *b_MDbiv_data;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  yrank_data = yrank->data;
  MDbiv_data = MDbiv->data;
  emxInit_real_T(&b_MDbiv, 1);
  i = b_MDbiv->size[0];
  if (yrank->size[0] == 1) {
    b_MDbiv->size[0] = MDbiv->size[0];
  } else {
    b_MDbiv->size[0] = yrank->size[0];
  }
  emxEnsureCapacity_real_T(b_MDbiv, i);
  b_MDbiv_data = b_MDbiv->data;
  stride_0_0 = (MDbiv->size[0] != 1);
  stride_1_0 = (yrank->size[0] != 1);
  if (yrank->size[0] == 1) {
    loop_ub = MDbiv->size[0];
  } else {
    loop_ub = yrank->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_MDbiv_data[i] = MDbiv_data[i * stride_0_0] + yrank_data[i * stride_1_0];
  }
  i = MDbiv->size[0];
  MDbiv->size[0] = b_MDbiv->size[0];
  emxEnsureCapacity_real_T(MDbiv, i);
  MDbiv_data = MDbiv->data;
  loop_ub = b_MDbiv->size[0];
  for (i = 0; i < loop_ub; i++) {
    MDbiv_data[i] = b_MDbiv_data[i];
  }
  emxFree_real_T(&b_MDbiv);
}

void tiedrankFS(const emxArray_real_T *x, emxArray_real_T *r)
{
  emxArray_boolean_T *b_x;
  emxArray_int32_T *iidx;
  emxArray_int32_T *rowidx;
  emxArray_int8_T *epsx;
  emxArray_real_T *b_ranks;
  emxArray_real_T *ranks;
  emxArray_real_T *tieloc;
  emxArray_real_T *y;
  const double *x_data;
  double d;
  double ntied;
  double xLen;
  double *b_ranks_data;
  double *r_data;
  double *ranks_data;
  double *tieloc_data;
  int b_loop_ub;
  int b_vlen;
  int i;
  int i1;
  int k;
  int loop_ub;
  int nz;
  unsigned int tiecount;
  int vlen;
  int *iidx_data;
  int *rowidx_data;
  signed char *epsx_data;
  bool *b_x_data;
  x_data = x->data;
  emxInit_real_T(&tieloc, 1);
  /*  This function is called just in case of C coder translation */
  /*  tiedrankFS is a simplified version of tiedrank */
  /*  to use with the C coder because tiedrank is not supported */
  /*    tiedrankFS computes the ranks of a sample, adjusting for ties. */
  /*    [R,] = tiedrankFS(x) computes the ranks of the values in the */
  /*    vector x.  If any x values are tied, TIEDRANK computes their average */
  /*    rank. */
  /*  Sort, then leave the NaNs (which are sorted to the end) alone */
  i = tieloc->size[0];
  tieloc->size[0] = x->size[0];
  emxEnsureCapacity_real_T(tieloc, i);
  tieloc_data = tieloc->data;
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    tieloc_data[i] = x_data[i];
  }
  emxInit_int32_T(&rowidx, 1);
  emxInit_int32_T(&iidx, 1);
  sort(tieloc, iidx);
  iidx_data = iidx->data;
  tieloc_data = tieloc->data;
  i = rowidx->size[0];
  rowidx->size[0] = iidx->size[0];
  emxEnsureCapacity_int32_T(rowidx, i);
  rowidx_data = rowidx->data;
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    rowidx_data[i] = iidx_data[i];
  }
  emxInit_int8_T(&epsx);
  i = epsx->size[0];
  epsx->size[0] = rowidx->size[0];
  emxEnsureCapacity_int8_T(epsx, i);
  epsx_data = epsx->data;
  loop_ub = rowidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    epsx_data[i] = 0;
  }
  emxInit_boolean_T(&b_x, 1);
  i = b_x->size[0];
  b_x->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(b_x, i);
  b_x_data = b_x->data;
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_x_data[i] = rtIsNaN(x_data[i]);
  }
  vlen = b_x->size[0];
  if (b_x->size[0] == 0) {
    nz = 0;
  } else {
    nz = b_x_data[0];
    for (k = 2; k <= vlen; k++) {
      nz += b_x_data[k - 1];
    }
  }
  emxInit_real_T(&y, 2);
  r_data = y->data;
  xLen = (double)x->size[0] - (double)nz;
  /*  Use ranks counting from low end */
  if (xLen < 1.0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = (int)(xLen - 1.0) + 1;
    emxEnsureCapacity_real_T(y, i);
    r_data = y->data;
    loop_ub = (int)(xLen - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      r_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&ranks, 1);
  i = ranks->size[0];
  ranks->size[0] = y->size[1] + nz;
  emxEnsureCapacity_real_T(ranks, i);
  ranks_data = ranks->data;
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    ranks_data[i] = r_data[i];
  }
  for (i = 0; i < nz; i++) {
    ranks_data[i + y->size[1]] = rtNaN;
  }
  emxFree_real_T(&y);
  /*  Adjust for ties.  Avoid using diff(sx) here in case there are infs. */
  if (1.0 > xLen - 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    loop_ub = (int)(xLen - 1.0);
    i = (int)(xLen - 1.0);
  }
  if (2.0 > xLen) {
    i1 = -1;
    vlen = -1;
    nz = -1;
    k = -1;
  } else {
    i1 = 0;
    vlen = (int)xLen - 1;
    nz = 0;
    k = (int)xLen - 1;
  }
  if (loop_ub == 1) {
    b_loop_ub = i;
  } else {
    b_loop_ub = loop_ub;
  }
  if (vlen - i1 == 1) {
    b_vlen = k - nz;
  } else {
    b_vlen = vlen - i1;
  }
  if ((loop_ub == i) && (vlen - i1 == k - nz) && (b_loop_ub == b_vlen)) {
    i = b_x->size[0];
    b_x->size[0] = loop_ub;
    emxEnsureCapacity_boolean_T(b_x, i);
    b_x_data = b_x->data;
    for (i = 0; i < loop_ub; i++) {
      b_x_data[i] = (tieloc_data[i] >= tieloc_data[(i1 + i) + 1]);
    }
    b_eml_find(b_x, iidx);
    iidx_data = iidx->data;
  } else {
    m_binary_expand_op(iidx, tieloc, loop_ub - 1, epsx, i - 1, i1 + 1, vlen,
                       nz + 1, k);
    iidx_data = iidx->data;
  }
  emxFree_boolean_T(&b_x);
  emxFree_int8_T(&epsx);
  i = tieloc->size[0];
  tieloc->size[0] = iidx->size[0] + 1;
  emxEnsureCapacity_real_T(tieloc, i);
  tieloc_data = tieloc->data;
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    tieloc_data[i] = iidx_data[i];
  }
  tieloc_data[iidx->size[0]] = xLen + 2.0;
  i = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(r, i);
  r_data = r->data;
  loop_ub = x->size[0];
  emxFree_int32_T(&iidx);
  for (i = 0; i < loop_ub; i++) {
    r_data[i] = 0.0;
  }
  tiecount = 1U;
  emxInit_real_T(&b_ranks, 1);
  while (tiecount < (unsigned int)tieloc->size[0]) {
    xLen = tieloc_data[(int)tiecount - 1];
    ntied = 2.0;
    while (tieloc_data[(int)tiecount] == tieloc_data[(int)tiecount - 1] + 1.0) {
      tiecount++;
      ntied++;
    }
    /*  Compute mean of tied ranks */
    d = (xLen + ntied) - 1.0;
    if (xLen > d) {
      i = 0;
      i1 = 0;
      vlen = -1;
      nz = 0;
    } else {
      i = (int)xLen - 1;
      i1 = (int)d;
      vlen = (int)xLen - 2;
      nz = (int)d;
    }
    loop_ub = i1 - i;
    i1 = b_ranks->size[0];
    b_ranks->size[0] = loop_ub;
    emxEnsureCapacity_real_T(b_ranks, i1);
    b_ranks_data = b_ranks->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_ranks_data[i1] = ranks_data[i + i1];
    }
    xLen = blockedSummation(b_ranks, loop_ub);
    loop_ub = (nz - vlen) - 1;
    for (i = 0; i < loop_ub; i++) {
      ranks_data[(vlen + i) + 1] = xLen / ntied;
    }
    tiecount++;
  }
  emxFree_real_T(&b_ranks);
  emxFree_real_T(&tieloc);
  /*  Broadcast the ranks back out, including NaN where required. */
  loop_ub = ranks->size[0];
  for (i = 0; i < loop_ub; i++) {
    r_data[rowidx_data[i] - 1] = ranks_data[i];
  }
  emxFree_int32_T(&rowidx);
  emxFree_real_T(&ranks);
  i = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(r, i);
}

void unibiv(const emxArray_real_T *Y, double varargin_2, emxArray_real_T *fre)
{
  static creal_T b_The1max[7202];
  static creal_T new1[7202];
  emxArray_boolean_T *r;
  emxArray_creal_T *b_Xs;
  emxArray_creal_T *new2;
  emxArray_int32_T *r1;
  emxArray_real_T *MDbiv;
  emxArray_real_T *Xs;
  emxArray_real_T *Ys;
  emxArray_real_T *b_Y;
  emxArray_real_T *biv;
  emxArray_real_T *bivT;
  emxArray_real_T *datax;
  emxArray_real_T *outy;
  emxArray_real_T *seq;
  emxArray_real_T *univT;
  emxArray_real_T *xrank;
  emxArray_real_T *y;
  emxArray_real_T *yrank;
  creal_T xnew[3601];
  creal_T ynew[3601];
  creal_T M[4];
  creal_T aut[2];
  creal_T c_a;
  creal_T sinth;
  creal_T *b_Xs_data;
  creal_T *new2_data;
  double The1max[3601];
  double The2max[3601];
  double b_a[4];
  double quan[3];
  const double *Y_data;
  double Ty;
  double a;
  double a_tmp;
  double b_r;
  double ch_re;
  double costh_im;
  double costh_re;
  double fuo;
  double mady;
  double s;
  double sgnbr;
  double *MDbiv_data;
  double *Xs_data;
  double *Ys_data;
  double *b_Y_data;
  double *bivT_data;
  double *biv_data;
  double *seq_data;
  double *univT_data;
  double *xrank_data;
  int b_i;
  unsigned int b_jl;
  int i;
  int i1;
  int i2;
  int il;
  int jl;
  int loop_ub;
  int n;
  int nx;
  int robscale;
  int *r3;
  bool *r2;
  Y_data = Y->data;
  emxInit_real_T(&bivT, 1);
  /* unibiv has the purpose of detecting univariate and bivariate outliers */
  /*  */
  /* <a href="matlab: docsearchFS('unibiv')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*  Y :           Input data. Matrix. */
  /*                n x v data matrix; n observations and v variables. Rows of
   */
  /*                Y represent observations, and columns represent variables.
   */
  /*                Missing values (NaN's) and infinite values (Inf's) are */
  /*                allowed, since observations (rows) with missing or infinite
   */
  /*                values will automatically be excluded from the */
  /*                computations. */
  /*                 Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*        madcoef :  scaled MAD. Scalar. Coefficient which is used to scale
   * MAD */
  /*                    coefficient to have a robust estimate of dispersion.
   * The */
  /*                    default is 1.4815 so that 1.4815*MAD(N(0,1))=1. */
  /*                  Example - 'madcoef',2 */
  /*                  Data Types - double */
  /*                    Remark: if mad =median(y-median(y))=0 then the
   * interquartile */
  /*                    range is used. If also the interquartile range is 0 */
  /*                    than the MD (mean absolute deviation) is used.  In */
  /*                    other words MD=mean(abs(y-mean(Y)) */
  /*  */
  /*            rf  :  It specifies the confidence */
  /*                   level of the robust bivariate ellipses. Scalar. 0<rf<1.
   */
  /*                   The default value is 0.95 that is the outer contour in */
  /*                   presence of normality for each ellipse should leave */
  /*                   outside 5% of the values. */
  /*                  Example - 'rf',0.99 */
  /*                  Data Types - double */
  /*  */
  /*       robscale :   how to compute dispersion. Scalar. It specifies the */
  /*                    statistical indexes to use to compute the dispersion of
   */
  /*                    each variable and the correlation among each pair of */
  /*                    variables. */
  /*                    robscale=1 (default): the program uses the median
   * correlation */
  /*                    and the MAD as estimate of the dispersion of each
   * variable; */
  /*                    robscale=2: the correlation coefficient among ranks is
   * used */
  /*                    (Spearman's rho) and the MAD as estimate of the
   * dispersion */
  /*                    of each variable; */
  /*                    robscale=3: the correlation coefficient is based on
   * Kendall's tau b */
  /*                    and the MAD as estimate of the dispersion of each */
  /*                    variable; */
  /*                    robscale=4: tetracoric correlation coefficient is used
   * and the MAD */
  /*                    as estimate of the dispersion of each variable; */
  /*                    otherwise the correlation and the dispersion of the
   * variables are */
  /*                    computed using the traditional (non robust) formulae */
  /*                    around the univariate medians. */
  /*                  Example - 'robscale',2 */
  /*                  Data Types - double */
  /*  */
  /*          plots :   Plot on the screen. Scalar. It specifies whether it is
   */
  /*                    necessary to produce a plot */
  /*                    with univariate standardized boxplots on the */
  /*                    main diagonal and bivariate confidence ellipses out of
   */
  /*                    the main diagonal. If plots is equal to 1 a plot */
  /*                    which contains univariate standardized boxplots on the
   */
  /*                    main diagonal and bivariate confidence ellipses out of
   */
  /*                    the main diagonal is produced on the screen. If plots is
   */
  /*                    <> 1 no plot is produced. As default no plot is */
  /*                    produced. */
  /*                  Example - 'plots',2 */
  /*                  Data Types - double */
  /*  */
  /*        tag     :   plot tag.  Character. It identifies the handle of the
   * plot which */
  /*                    is about to be created. The default is to use tag */
  /*                    'pl_unibiv'. Notice that if the program finds a plot
   * which */
  /*                    has a tag equal to the one specified by the user, then
   */
  /*                    the output of the new plot overwrites the existing one
   */
  /*                    in the same window else a new window is created. */
  /*                  Example - 'tag','new_tag' */
  /*                  Data Types - char */
  /*  */
  /*        textlab : plot labels. Scalar.  Scalar which controls the labels in
   */
  /*                    the plots. If textlab=1 and */
  /*                    plots=1 the labels associated */
  /*                    to the units which are univariate outliers or which are
   */
  /*                    outside the confidence levels of the contours are */
  /*                    displayed on the screen. */
  /*                  Example - 'textlab',0 */
  /*                  Data Types - double */
  /*  */
  /*  Output: */
  /*  */
  /*    fre  :  n x 4 matrix which contains details about the univariate and */
  /*            bivariate outliers. */
  /*            1st col = index of the units; */
  /*            2nd col = number of times unit has been declared */
  /*            univariate outliers; */
  /*            3rd col = number of times unit has been declared */
  /*            bivariate outlier; */
  /*            4th col = pseudo MD as sum of bivariate MD. */
  /*  */
  /*  See also: FSMmmd */
  /*  */
  /*  References: */
  /*  */
  /*        Riani, M., Zani S. (1997). An iterative method for the detection of
   */
  /*        multivariate outliers, "Metron", Vol. LV, pp. 101-117. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('unibiv')">Link to the help page for this
   * function</a> */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  Examples: */
  /* { */
  /*     % unibiv with all default options. */
  /*     % Run this code to see the output shown in the help file */
  /*     n=500; */
  /*     p=5; */
  /*     randn('state', 123456); */
  /*     Y=randn(n,p); */
  /*     [out]=unibiv(Y); */
  /* } */
  /* { */
  /*     %% unibiv with optional arguments. */
  /*     % Stack loss data. */
  /*     Y=load('stack_loss.txt'); */
  /*     % Show robust confidence ellipses */
  /*     out=unibiv(Y,'plots',1,'textlab',1); */
  /* } */
  /*  Beginning of code */
  n = Y->size[0];
  /*  Default confidence level for bivariate ellipses */
  /*  Input parameters checking */
  /*  Write in structure 'options' the options chosen by the user */
  robscale = 1;
  /*  bivT contains the frequency distribution of biv. outliers */
  i = bivT->size[0];
  bivT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(bivT, i);
  bivT_data = bivT->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    bivT_data[i] = 0.0;
  }
  emxInit_real_T(&univT, 1);
  /*  univT contains the frequency distribution of univ. outliers */
  i = univT->size[0];
  univT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(univT, i);
  univT_data = univT->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    univT_data[i] = 0.0;
  }
  emxInit_real_T(&MDbiv, 1);
  /*  MDbiv= vector which contains the sum of the bivaraite Mahalanobis
   * distances for each unit */
  i = MDbiv->size[0];
  MDbiv->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(MDbiv, i);
  MDbiv_data = MDbiv->data;
  loop_ub = Y->size[0];
  for (i = 0; i < loop_ub; i++) {
    MDbiv_data[i] = 0.0;
  }
  /*  madcoef=1; */
  emxInit_real_T(&biv, 2);
  biv_data = biv->data;
  if (Y->size[0] < 1) {
    biv->size[0] = 1;
    biv->size[1] = 0;
  } else {
    i = biv->size[0] * biv->size[1];
    biv->size[0] = 1;
    biv->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(biv, i);
    biv_data = biv->data;
    loop_ub = Y->size[0] - 1;
    for (i = 0; i <= loop_ub; i++) {
      biv_data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = biv->size[1];
  emxEnsureCapacity_real_T(seq, i);
  seq_data = seq->data;
  loop_ub = biv->size[1];
  for (i = 0; i < loop_ub; i++) {
    seq_data[i] = biv_data[i];
  }
  i = Y->size[1];
  emxInit_real_T(&y, 1);
  emxInit_real_T(&Ys, 1);
  emxInit_real_T(&datax, 2);
  emxInit_real_T(&outy, 2);
  emxInit_real_T(&Xs, 1);
  emxInit_real_T(&xrank, 1);
  emxInit_real_T(&yrank, 1);
  emxInit_creal_T(&new2, 2);
  emxInit_boolean_T(&r, 1);
  emxInit_int32_T(&r1, 1);
  emxInit_real_T(&b_Y, 1);
  emxInit_creal_T(&b_Xs, 2);
  for (il = 0; il < i; il++) {
    /*  il is linked to the rows */
    /*  Ys = vector which contains standardized data */
    loop_ub = Y->size[0];
    i1 = y->size[0];
    y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(y, i1);
    biv_data = y->data;
    i1 = b_Y->size[0];
    b_Y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(b_Y, i1);
    b_Y_data = b_Y->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_r = Y_data[i1 + Y->size[0] * il];
      biv_data[i1] = b_r;
      b_Y_data[i1] = b_r;
    }
    Ty = median(b_Y);
    loop_ub = Y->size[0];
    i1 = b_Y->size[0];
    b_Y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(b_Y, i1);
    b_Y_data = b_Y->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Y_data[i1] = Y_data[i1 + Y->size[0] * il];
    }
    mady = mad(b_Y);
    if (mady > 0.0) {
      b_r = 1.4815 * mady;
      loop_ub = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(Ys, i1);
      Ys_data = Ys->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / b_r;
      }
    } else {
      loop_ub = Y->size[0];
      i1 = b_Y->size[0];
      b_Y->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(b_Y, i1);
      b_Y_data = b_Y->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Y_data[i1] = Y_data[i1 + Y->size[0] * il];
      }
      if (iqr(b_Y) > 0.0) {
        loop_ub = Y->size[0];
        i1 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i1);
        b_Y_data = b_Y->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_Y_data[i1] = Y_data[i1 + Y->size[0] * il];
        }
        b_r = 1.4815 * (1.349 * iqr(b_Y) / 0.6745);
        loop_ub = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        Ys_data = Ys->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / b_r;
        }
      } else {
        loop_ub = Y->size[0];
        i1 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i1);
        b_Y_data = b_Y->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_Y_data[i1] = Y_data[i1 + Y->size[0] * il];
        }
        b_r = 1.4815 * (1.2533 * b_mad(b_Y) / 0.6745);
        loop_ub = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        Ys_data = Ys->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          Ys_data[i1] = (Y_data[i1 + Y->size[0] * il] - Ty) / b_r;
        }
      }
    }
    /*  datax x add a sequence to standardized data */
    loop_ub = seq->size[0];
    i1 = datax->size[0] * datax->size[1];
    datax->size[0] = seq->size[0];
    datax->size[1] = 2;
    emxEnsureCapacity_real_T(datax, i1);
    biv_data = datax->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      biv_data[i1] = seq_data[i1];
    }
    loop_ub = Ys->size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      biv_data[i1 + datax->size[0]] = Ys_data[i1];
    }
    /*  quan = 1 x 3 vector which contins 1% quartile median and 3rd */
    /*  quartile */
    quantile(Ys, quan);
    /*  di= interquartile difference */
    mady = quan[2] - quan[0];
    /*  uq=upper truncation point */
    Ty = quan[2] + 1.5 * mady;
    /*  lq=lower truncation point */
    mady = quan[0] - 1.5 * mady;
    /*  outy is a (l+1) x 2 matrix. the first column contains */
    /*  the indexes of the units declared univariate */
    /*  outliers, the second columns gives the standardized */
    /*  values of the outliers */
    nx = datax->size[0] - 1;
    i1 = xrank->size[0];
    xrank->size[0] = datax->size[0];
    emxEnsureCapacity_real_T(xrank, i1);
    xrank_data = xrank->data;
    for (loop_ub = 0; loop_ub <= nx; loop_ub++) {
      xrank_data[loop_ub] = fabs(biv_data[loop_ub + datax->size[0]]);
    }
    if (datax->size[0] == xrank->size[0]) {
      loop_ub = datax->size[0];
      i1 = r->size[0];
      r->size[0] = datax->size[0];
      emxEnsureCapacity_boolean_T(r, i1);
      r2 = r->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_r = biv_data[i1 + datax->size[0]];
        r2[i1] = ((b_r > Ty) || (b_r < mady) || (xrank_data[i1] > 3.0));
      }
    } else {
      l_binary_expand_op(r, datax, Ty, mady, xrank);
      r2 = r->data;
    }
    loop_ub = r->size[0] - 1;
    nx = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (r2[b_i]) {
        nx++;
      }
    }
    i1 = r1->size[0];
    r1->size[0] = nx;
    emxEnsureCapacity_int32_T(r1, i1);
    r3 = r1->data;
    nx = 0;
    for (b_i = 0; b_i <= loop_ub; b_i++) {
      if (r2[b_i]) {
        r3[nx] = b_i + 1;
        nx++;
      }
    }
    loop_ub = r1->size[0];
    i1 = outy->size[0] * outy->size[1];
    outy->size[0] = r1->size[0];
    outy->size[1] = 2;
    emxEnsureCapacity_real_T(outy, i1);
    xrank_data = outy->data;
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        xrank_data[i2 + outy->size[0] * i1] =
            biv_data[(r3[i2] + datax->size[0] * i1) - 1];
      }
    }
    loop_ub = r1->size[0];
    if (r1->size[0] != 0) {
      /*  Increase by 1 the frequencey distribution of */
      /*  univariate outliers in vector univT */
      i1 = b_Y->size[0];
      b_Y->size[0] = r1->size[0];
      emxEnsureCapacity_real_T(b_Y, i1);
      b_Y_data = b_Y->data;
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Y_data[i1] = univT_data[(int)xrank_data[i1] - 1] + 1.0;
      }
      loop_ub = b_Y->size[0];
      for (i1 = 0; i1 < loop_ub; i1++) {
        univT_data[(int)xrank_data[i1] - 1] = b_Y_data[i1];
      }
    }
    i1 = Y->size[1] - il;
    for (jl = 0; jl < i1; jl++) {
      b_jl = ((unsigned int)il + jl) + 1U;
      /*  jl is linked to columns */
      if ((unsigned int)(il + 1) != b_jl) {
        /*  beginning of bivariate part */
        /*  Tx is the coordinate of the  Median */
        loop_ub = Y->size[0];
        i2 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i2);
        b_Y_data = b_Y->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
        }
        Ty = median(b_Y);
        loop_ub = Y->size[0];
        i2 = b_Y->size[0];
        b_Y->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(b_Y, i2);
        b_Y_data = b_Y->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
        }
        mady = mad(b_Y);
        if (mady > 0.0) {
          b_r = 1.4815 * mady;
          loop_ub = Y->size[0];
          i2 = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(Xs, i2);
          Xs_data = Xs->data;
          for (i2 = 0; i2 < loop_ub; i2++) {
            Xs_data[i2] =
                (Y_data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / b_r;
          }
        } else {
          if (robscale == 1) {
            robscale = 2;
          }
          loop_ub = Y->size[0];
          i2 = b_Y->size[0];
          b_Y->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(b_Y, i2);
          b_Y_data = b_Y->data;
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
          }
          mady = iqr(b_Y);
          if (mady > 0.0) {
            b_r = 1.4815 * (1.349 * mady / 0.6745);
            loop_ub = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, i2);
            Xs_data = Xs->data;
            for (i2 = 0; i2 < loop_ub; i2++) {
              Xs_data[i2] =
                  (Y_data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / b_r;
            }
          } else {
            loop_ub = Y->size[0];
            i2 = b_Y->size[0];
            b_Y->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(b_Y, i2);
            b_Y_data = b_Y->data;
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
            }
            b_r = 1.4815 * (1.2533 * b_mad(b_Y) / 0.6745);
            loop_ub = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, i2);
            Xs_data = Xs->data;
            for (i2 = 0; i2 < loop_ub; i2++) {
              Xs_data[i2] =
                  (Y_data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / b_r;
            }
          }
        }
        if (robscale == 1) {
          if (Xs->size[0] == Ys->size[0]) {
            i2 = yrank->size[0];
            yrank->size[0] = Xs->size[0];
            emxEnsureCapacity_real_T(yrank, i2);
            biv_data = yrank->data;
            loop_ub = Xs->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              biv_data[i2] = Xs_data[i2] + Ys_data[i2];
            }
          } else {
            b_plus(yrank, Xs, Ys);
            biv_data = yrank->data;
          }
          nx = yrank->size[0];
          i2 = xrank->size[0];
          xrank->size[0] = yrank->size[0];
          emxEnsureCapacity_real_T(xrank, i2);
          xrank_data = xrank->data;
          for (loop_ub = 0; loop_ub < nx; loop_ub++) {
            xrank_data[loop_ub] = fabs(biv_data[loop_ub]);
          }
          a = median(xrank);
          Ty = a * a;
          if (Xs->size[0] == Ys->size[0]) {
            i2 = yrank->size[0];
            yrank->size[0] = Xs->size[0];
            emxEnsureCapacity_real_T(yrank, i2);
            biv_data = yrank->data;
            loop_ub = Xs->size[0];
            for (i2 = 0; i2 < loop_ub; i2++) {
              biv_data[i2] = Xs_data[i2] - Ys_data[i2];
            }
          } else {
            minus(yrank, Xs, Ys);
            biv_data = yrank->data;
          }
          nx = yrank->size[0];
          i2 = xrank->size[0];
          xrank->size[0] = yrank->size[0];
          emxEnsureCapacity_real_T(xrank, i2);
          xrank_data = xrank->data;
          for (loop_ub = 0; loop_ub < nx; loop_ub++) {
            xrank_data[loop_ub] = fabs(biv_data[loop_ub]);
          }
          a = median(xrank);
          mady = a * a;
          b_r = (Ty - mady) / (Ty + mady);
          if (rtIsNaN(b_r)) {
            b_r = 0.0;
          }
        } else {
          /*  r is computed using ranks */
          loop_ub = Y->size[0];
          i2 = b_Y->size[0];
          b_Y->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(b_Y, i2);
          b_Y_data = b_Y->data;
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_Y_data[i2] = Y_data[i2 + Y->size[0] * ((int)b_jl - 1)];
          }
          tiedrankFS(b_Y, xrank);
          xrank_data = xrank->data;
          tiedrankFS(y, yrank);
          biv_data = yrank->data;
          mady =
              blockedSummation(xrank, xrank->size[0]) / (double)xrank->size[0];
          Ty = blockedSummation(yrank, yrank->size[0]) / (double)yrank->size[0];
          b_r = 0.0;
          loop_ub = xrank->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            b_r += (xrank_data[i2] - mady) * (biv_data[i2] - Ty);
          }
          b_r /= ((double)n - 1.0) * vvarstd(xrank, xrank->size[0]) *
                 vvarstd(yrank, yrank->size[0]);
        }
        /*  Spearman's rho and Kendall's tau and tetracoric correlation */
        /*  are discrete-valued statistics, and */
        /*  their distributions have positive probability at 1 and -1. */
        /*  If their value is equal to 1 or -1 then artificially put the value
         * equal */
        /*  to 0.999 or -0.999 */
        if (b_r == 1.0) {
          b_r = 0.999;
        } else if (b_r == -1.0) {
          b_r = -0.999;
        }
        /*  Now we calculate Mahalanobis distances with centroid defined */
        /*  by medians */
        a = 2.0 * b_r;
        mady = b_r * b_r;
        /*  Create the vector of pseudoMahalanobis distances (based on the sum
         */
        /*  of each bivariate projection) */
        i2 = yrank->size[0];
        yrank->size[0] = Xs->size[0];
        emxEnsureCapacity_real_T(yrank, i2);
        biv_data = yrank->data;
        loop_ub = Xs->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          Ty = Xs_data[i2];
          biv_data[i2] = Ty * Ty;
        }
        loop_ub = Ys->size[0];
        i2 = xrank->size[0];
        xrank->size[0] = Ys->size[0];
        emxEnsureCapacity_real_T(xrank, i2);
        xrank_data = xrank->data;
        for (i2 = 0; i2 < loop_ub; i2++) {
          Ty = Ys_data[i2];
          xrank_data[i2] = Ty * Ty;
        }
        if (yrank->size[0] == 1) {
          nx = xrank->size[0];
        } else {
          nx = yrank->size[0];
        }
        if (Xs->size[0] == 1) {
          loop_ub = Ys->size[0];
        } else {
          loop_ub = Xs->size[0];
        }
        if ((yrank->size[0] == xrank->size[0]) &&
            (Xs->size[0] == Ys->size[0]) && (nx == loop_ub)) {
          loop_ub = yrank->size[0];
          for (i2 = 0; i2 < loop_ub; i2++) {
            biv_data[i2] = ((biv_data[i2] + xrank_data[i2]) -
                            a * Xs_data[i2] * Ys_data[i2]) /
                           (1.0 - mady);
          }
        } else {
          k_binary_expand_op(yrank, xrank, a, Xs, Ys, mady);
          biv_data = yrank->data;
        }
        nx = yrank->size[0];
        for (loop_ub = 0; loop_ub < nx; loop_ub++) {
          biv_data[loop_ub] = sqrt(biv_data[loop_ub]);
        }
        loop_ub = MDbiv->size[0];
        if (MDbiv->size[0] == yrank->size[0]) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            MDbiv_data[i2] += biv_data[i2];
          }
        } else {
          plus(MDbiv, yrank);
          MDbiv_data = MDbiv->data;
        }
        /*   Em  is the median  of vector E */
        mady = sqrt(2.0 * ((double)n - 1.0) / ((double)n - 2.0) *
                    finv(varargin_2, (double)n - 2.0));
        /*  hinge=ellipse containing 50% of the values */
        /*  fence=ellipe containing (1-\alpha)% of the values */
        a = mady * sqrt((b_r + 1.0) / 2.0);
        Ty = mady * sqrt((1.0 - b_r) / 2.0);
        for (i2 = 0; i2 < 3601; i2++) {
          The1max[i2] = a * dv[i2];
          The2max[i2] = Ty * dv1[i2];
        }
        /*  rotation of the coordinates */
        a = 1.0 / (mady * mady * (1.0 - b_r * b_r));
        mady = -b_r * a;
        b_a[0] = a;
        b_a[2] = mady;
        b_a[1] = mady;
        b_a[3] = a;
        eig(b_a, aut);
        b_sort(aut);
        a_tmp = a - aut[1].re;
        b_r = a_tmp * (0.0 - aut[1].im);
        a_tmp = (a_tmp * a_tmp - (0.0 - aut[1].im) * (0.0 - aut[1].im)) +
                mady * mady;
        c_a.re = a_tmp;
        c_a.im = b_r + b_r;
        b_sqrt(&c_a);
        if (c_a.im == 0.0) {
          costh_re = mady / c_a.re;
          costh_im = 0.0;
        } else if (c_a.re == 0.0) {
          if (mady == 0.0) {
            costh_re = 0.0 / c_a.im;
            costh_im = 0.0;
          } else {
            costh_re = 0.0;
            costh_im = -(mady / c_a.im);
          }
        } else {
          ch_re = fabs(c_a.re);
          Ty = fabs(c_a.im);
          if (ch_re > Ty) {
            s = c_a.im / c_a.re;
            ch_re = c_a.re + s * c_a.im;
            costh_re = (mady + s * 0.0) / ch_re;
            costh_im = (0.0 - s * mady) / ch_re;
          } else if (Ty == ch_re) {
            if (c_a.re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (c_a.im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            costh_re = (mady * sgnbr + 0.0 * s) / ch_re;
            costh_im = (0.0 * sgnbr - mady * s) / ch_re;
          } else {
            s = c_a.re / c_a.im;
            ch_re = c_a.im + s * c_a.re;
            costh_re = s * mady / ch_re;
            costh_im = (s * 0.0 - mady) / ch_re;
          }
        }
        c_a.re = a_tmp;
        c_a.im = b_r + b_r;
        b_sqrt(&c_a);
        mady = aut[1].re - a;
        if (c_a.im == 0.0) {
          if (aut[1].im == 0.0) {
            sinth.re = mady / c_a.re;
            sinth.im = 0.0;
          } else if (mady == 0.0) {
            sinth.re = 0.0;
            sinth.im = aut[1].im / c_a.re;
          } else {
            sinth.re = mady / c_a.re;
            sinth.im = aut[1].im / c_a.re;
          }
        } else if (c_a.re == 0.0) {
          if (mady == 0.0) {
            sinth.re = aut[1].im / c_a.im;
            sinth.im = 0.0;
          } else if (aut[1].im == 0.0) {
            sinth.re = 0.0;
            sinth.im = -(mady / c_a.im);
          } else {
            sinth.re = aut[1].im / c_a.im;
            sinth.im = -(mady / c_a.im);
          }
        } else {
          ch_re = fabs(c_a.re);
          Ty = fabs(c_a.im);
          if (ch_re > Ty) {
            s = c_a.im / c_a.re;
            ch_re = c_a.re + s * c_a.im;
            sinth.re = (mady + s * aut[1].im) / ch_re;
            sinth.im = (aut[1].im - s * mady) / ch_re;
          } else if (Ty == ch_re) {
            if (c_a.re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (c_a.im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            sinth.re = (mady * sgnbr + aut[1].im * s) / ch_re;
            sinth.im = (aut[1].im * sgnbr - mady * s) / ch_re;
          } else {
            s = c_a.re / c_a.im;
            ch_re = c_a.im + s * c_a.re;
            sinth.re = (s * mady + aut[1].im) / ch_re;
            sinth.im = (s * aut[1].im - mady) / ch_re;
          }
        }
        /*  M is the orthogonal matrix which enables the rotation of the axes */
        M[0].re = costh_re;
        M[0].im = costh_im;
        M[2] = sinth;
        M[1].re = -sinth.re;
        M[1].im = -sinth.im;
        M[3].re = costh_re;
        M[3].im = costh_im;
        /*  fou = fires of the ellipse */
        if (aut[0].im == 0.0) {
          b_r = 1.0 / aut[0].re;
          a = 0.0;
        } else if (aut[0].re == 0.0) {
          b_r = 0.0;
          a = -(1.0 / aut[0].im);
        } else {
          ch_re = fabs(aut[0].re);
          Ty = fabs(aut[0].im);
          if (ch_re > Ty) {
            s = aut[0].im / aut[0].re;
            ch_re = aut[0].re + s * aut[0].im;
            b_r = (s * 0.0 + 1.0) / ch_re;
            a = (0.0 - s) / ch_re;
          } else if (Ty == ch_re) {
            if (aut[0].re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (aut[0].im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            b_r = (sgnbr + 0.0 * s) / ch_re;
            a = (0.0 * sgnbr - s) / ch_re;
          } else {
            s = aut[0].re / aut[0].im;
            ch_re = aut[0].im + s * aut[0].re;
            b_r = s / ch_re;
            a = (s * 0.0 - 1.0) / ch_re;
          }
        }
        if (aut[1].im == 0.0) {
          Ty = 1.0 / aut[1].re;
          mady = 0.0;
        } else if (aut[1].re == 0.0) {
          Ty = 0.0;
          mady = -(1.0 / aut[1].im);
        } else {
          ch_re = fabs(aut[1].re);
          Ty = fabs(aut[1].im);
          if (ch_re > Ty) {
            s = aut[1].im / aut[1].re;
            ch_re = aut[1].re + s * aut[1].im;
            Ty = (s * 0.0 + 1.0) / ch_re;
            mady = (0.0 - s) / ch_re;
          } else if (Ty == ch_re) {
            if (aut[1].re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (aut[1].im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            Ty = (sgnbr + 0.0 * s) / ch_re;
            mady = (0.0 * sgnbr - s) / ch_re;
          } else {
            s = aut[1].re / aut[1].im;
            ch_re = aut[1].im + s * aut[1].re;
            Ty = s / ch_re;
            mady = (s * 0.0 - 1.0) / ch_re;
          }
        }
        fuo = sqrt(rt_hypotd_snf(b_r - Ty, a - mady));
        /*  new1 = 2 x n matrix which contains the coordinates of the rotated
         * ellipse */
        for (i2 = 0; i2 < 3601; i2++) {
          b_i = i2 << 1;
          b_r = The1max[i2];
          mady = The2max[i2];
          b_The1max[b_i].re = b_r + mady;
          b_The1max[b_i].im = 0.0;
          b_The1max[b_i + 1].re = b_r - mady;
          b_The1max[b_i + 1].im = 0.0;
        }
        for (i2 = 0; i2 < 2; i2++) {
          mady = M[i2].re;
          Ty = M[i2].im;
          b_r = M[i2 + 2].re;
          a = M[i2 + 2].im;
          for (b_i = 0; b_i < 3601; b_i++) {
            nx = b_i << 1;
            costh_im = b_The1max[nx].im;
            s = b_The1max[nx].re;
            ch_re = b_The1max[nx + 1].im;
            sgnbr = b_The1max[nx + 1].re;
            nx += i2;
            new1[nx].re =
                (mady * s - Ty * costh_im) + (b_r * sgnbr - a * ch_re);
            new1[nx].im =
                (mady * costh_im + Ty * s) + (b_r * ch_re + a * sgnbr);
          }
        }
        /*  xnew = n x 1 vector which contains x coord. of rotated points */
        /*  ynew = n x 1 vector which contains y coord. of rotated points */
        for (i2 = 0; i2 < 3601; i2++) {
          b_i = i2 << 1;
          xnew[i2].re = new1[b_i].re;
          xnew[i2].im = -new1[b_i].im;
          ynew[i2].re = new1[b_i + 1].re;
          ynew[i2].im = -new1[b_i + 1].im;
        }
        /*  new2 = 2 x n matrix which contains the coordinates of the rotated
         * points */
        i2 = b_Xs->size[0] * b_Xs->size[1];
        b_Xs->size[0] = 2;
        b_Xs->size[1] = Xs->size[0];
        emxEnsureCapacity_creal_T(b_Xs, i2);
        b_Xs_data = b_Xs->data;
        loop_ub = Xs->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_Xs_data[2 * i2].re = Xs_data[i2];
          b_Xs_data[2 * i2].im = 0.0;
        }
        loop_ub = Ys->size[0];
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_i = 2 * i2 + 1;
          b_Xs_data[b_i].re = Ys_data[i2];
          b_Xs_data[b_i].im = 0.0;
        }
        i2 = new2->size[0] * new2->size[1];
        new2->size[0] = 2;
        new2->size[1] = b_Xs->size[1];
        emxEnsureCapacity_creal_T(new2, i2);
        new2_data = new2->data;
        loop_ub = b_Xs->size[1];
        for (i2 = 0; i2 < 2; i2++) {
          for (b_i = 0; b_i < loop_ub; b_i++) {
            mady = M[i2].re;
            Ty = b_Xs_data[2 * b_i].im;
            b_r = M[i2].im;
            a = b_Xs_data[2 * b_i].re;
            costh_im = M[i2 + 2].re;
            nx = 2 * b_i + 1;
            s = b_Xs_data[nx].im;
            ch_re = M[i2 + 2].im;
            sgnbr = b_Xs_data[nx].re;
            nx = i2 + 2 * b_i;
            new2_data[nx].re =
                (mady * a - b_r * Ty) + (costh_im * sgnbr - ch_re * s);
            new2_data[nx].im =
                (mady * Ty + b_r * a) + (costh_im * s + ch_re * sgnbr);
          }
        }
        /*  ch is the fixed distance of each point lying on the ellipse */
        sinth.re = ynew[9].re * ynew[9].re - ynew[9].im * ynew[9].im;
        mady = ynew[9].re * ynew[9].im;
        sinth.im = mady + mady;
        c_a.re = xnew[9].re + fuo;
        costh_re = xnew[9].re - fuo;
        sgnbr = xnew[9].im * xnew[9].im;
        b_r = c_a.re * c_a.re - sgnbr;
        costh_im = c_a.re * xnew[9].im;
        c_a.re = b_r + sinth.re;
        c_a.im = (costh_im + costh_im) + sinth.im;
        b_sqrt(&c_a);
        mady = costh_re * xnew[9].im;
        sinth.re += costh_re * costh_re - sgnbr;
        sinth.im += mady + mady;
        b_sqrt(&sinth);
        ch_re = c_a.re + sinth.re;
        /*  biv is the 1 x n vector which contains potential bivariate outliers
         */
        i2 = biv->size[0] * biv->size[1];
        biv->size[0] = 1;
        biv->size[1] = n;
        emxEnsureCapacity_real_T(biv, i2);
        biv_data = biv->data;
        for (i2 = 0; i2 < n; i2++) {
          biv_data[i2] = 0.0;
        }
        for (loop_ub = 0; loop_ub < n; loop_ub++) {
          a_tmp = new2_data[2 * loop_ub].re;
          c_a.re = a_tmp + fuo;
          a = new2_data[2 * loop_ub].im;
          costh_re = a_tmp - fuo;
          sgnbr = a * a;
          b_r = c_a.re * c_a.re - sgnbr;
          costh_im = c_a.re * a;
          nx = 2 * loop_ub + 1;
          mady = new2_data[nx].re;
          Ty = new2_data[nx].im;
          s = mady * mady - Ty * Ty;
          Ty *= mady;
          Ty += Ty;
          c_a.re = b_r + s;
          c_a.im = (costh_im + costh_im) + Ty;
          b_sqrt(&c_a);
          mady = costh_re * a;
          sinth.re = (costh_re * costh_re - sgnbr) + s;
          sinth.im = (mady + mady) + Ty;
          b_sqrt(&sinth);
          if (c_a.re + sinth.re > ch_re) {
            biv_data[loop_ub]++;
          }
        }
        /*  bivT contains cumulative distribution of bivariate outliers */
        loop_ub = bivT->size[0];
        if (bivT->size[0] == biv->size[1]) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            bivT_data[i2] += biv_data[i2];
          }
        } else {
          j_binary_expand_op(bivT, biv);
          bivT_data = bivT->data;
        }
        /*  the following lines plot the hinge together with the fence */
      } else {
        /*  plotting part */
        /*  produce a vertical boxplot @ */
        /*  end of univariate part */
      }
      /*  endif of il=jl */
    }
    /*  endif of jl=1:v */
  }
  emxFree_creal_T(&b_Xs);
  emxFree_real_T(&b_Y);
  emxFree_int32_T(&r1);
  emxFree_boolean_T(&r);
  emxFree_real_T(&biv);
  emxFree_creal_T(&new2);
  emxFree_real_T(&yrank);
  emxFree_real_T(&xrank);
  emxFree_real_T(&Xs);
  emxFree_real_T(&outy);
  emxFree_real_T(&datax);
  emxFree_real_T(&Ys);
  emxFree_real_T(&y);
  /*  endif of il=1:v */
  i = fre->size[0] * fre->size[1];
  fre->size[0] = seq->size[0];
  fre->size[1] = 4;
  emxEnsureCapacity_real_T(fre, i);
  biv_data = fre->data;
  loop_ub = seq->size[0];
  for (i = 0; i < loop_ub; i++) {
    biv_data[i] = seq_data[i];
  }
  emxFree_real_T(&seq);
  loop_ub = univT->size[0];
  for (i = 0; i < loop_ub; i++) {
    biv_data[i + fre->size[0]] = univT_data[i];
  }
  emxFree_real_T(&univT);
  loop_ub = bivT->size[0];
  for (i = 0; i < loop_ub; i++) {
    biv_data[i + fre->size[0] * 2] = bivT_data[i];
  }
  emxFree_real_T(&bivT);
  loop_ub = MDbiv->size[0];
  for (i = 0; i < loop_ub; i++) {
    biv_data[i + fre->size[0] * 3] = MDbiv_data[i];
  }
  emxFree_real_T(&MDbiv);
}

/* End of code generation (unibiv.c) */
