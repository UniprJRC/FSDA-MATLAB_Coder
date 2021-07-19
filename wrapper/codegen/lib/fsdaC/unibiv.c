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
void b_unibiv(const emxArray_real_T *Y, emxArray_real_T *fre)
{
  static creal_T b_The1max[7202];
  static creal_T new1[7202];
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_creal_T *b_Xs;
  emxArray_creal_T *new2;
  emxArray_int32_T *r2;
  emxArray_real_T *MDbiv;
  emxArray_real_T *Xs;
  emxArray_real_T *Ys;
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
  creal_T b_a;
  creal_T sinth;
  double The1max[3601];
  double The2max[3601];
  double c_a[4];
  double quan[3];
  double Ty;
  double a;
  double a_im_tmp_tmp;
  double b_r;
  double brm;
  double costh_im;
  double costh_re;
  double d;
  double fuo;
  double mady;
  double s;
  int b_i;
  unsigned int b_jl;
  int i;
  int i1;
  int i2;
  int i3;
  int il;
  int jl;
  int k;
  int n;
  int nx;
  int robscale;
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
  /*  */
  /*  Optional input arguments: */
  /*  */
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
  /*            rf  :  It specifies the confidence */
  /*                   level of the robust bivariate ellipses. Scalar. 0<rf<1.
   */
  /*                   The default value is 0.95 that is the outer contour in */
  /*                   presence of normality for each ellipse should leave */
  /*                   outside 5% of the values. */
  /*                  Example - 'rf',0.99 */
  /*                  Data Types - double */
  /*  */
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
  /*  */
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
  nx = Y->size[0];
  for (i = 0; i < nx; i++) {
    bivT->data[i] = 0.0;
  }
  emxInit_real_T(&univT, 1);
  /*  univT contains the frequency distribution of univ. outliers */
  i = univT->size[0];
  univT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(univT, i);
  nx = Y->size[0];
  for (i = 0; i < nx; i++) {
    univT->data[i] = 0.0;
  }
  emxInit_real_T(&MDbiv, 1);
  /*  MDbiv= vector which contains the sum of the bivaraite Mahalanobis
   * distances for each unit */
  i = MDbiv->size[0];
  MDbiv->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(MDbiv, i);
  nx = Y->size[0];
  for (i = 0; i < nx; i++) {
    MDbiv->data[i] = 0.0;
  }
  /*  madcoef=1; */
  emxInit_real_T(&biv, 2);
  if (Y->size[0] < 1) {
    biv->size[0] = 1;
    biv->size[1] = 0;
  } else {
    i = biv->size[0] * biv->size[1];
    biv->size[0] = 1;
    biv->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(biv, i);
    nx = Y->size[0] - 1;
    for (i = 0; i <= nx; i++) {
      biv->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = biv->size[1];
  emxEnsureCapacity_real_T(seq, i);
  nx = biv->size[1];
  for (i = 0; i < nx; i++) {
    seq->data[i] = biv->data[i];
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
  emxInit_boolean_T(&r1, 1);
  emxInit_int32_T(&r2, 1);
  emxInit_creal_T(&b_Xs, 2);
  for (il = 0; il < i; il++) {
    /*  il is linked to the rows */
    /*  Ys = vector which contains standardized data */
    nx = Y->size[0];
    i1 = y->size[0];
    y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(y, i1);
    i1 = yrank->size[0];
    yrank->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(yrank, i1);
    for (i1 = 0; i1 < nx; i1++) {
      brm = Y->data[i1 + Y->size[0] * il];
      y->data[i1] = brm;
      yrank->data[i1] = brm;
    }
    Ty = median(yrank);
    nx = Y->size[0];
    i1 = yrank->size[0];
    yrank->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(yrank, i1);
    for (i1 = 0; i1 < nx; i1++) {
      yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
    }
    mady = mad(yrank);
    if (mady > 0.0) {
      brm = 1.4815 * mady;
      nx = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(Ys, i1);
      for (i1 = 0; i1 < nx; i1++) {
        Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
      }
    } else {
      nx = Y->size[0];
      i1 = yrank->size[0];
      yrank->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(yrank, i1);
      for (i1 = 0; i1 < nx; i1++) {
        yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
      }
      if (iqr(yrank) > 0.0) {
        nx = Y->size[0];
        i1 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i1);
        for (i1 = 0; i1 < nx; i1++) {
          yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
        }
        brm = 1.4815 * (1.349 * iqr(yrank) / 0.6745);
        nx = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        for (i1 = 0; i1 < nx; i1++) {
          Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
        }
      } else {
        nx = Y->size[0];
        i1 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i1);
        for (i1 = 0; i1 < nx; i1++) {
          yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
        }
        brm = 1.4815 * (1.2533 * b_mad(yrank) / 0.6745);
        nx = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        for (i1 = 0; i1 < nx; i1++) {
          Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
        }
      }
    }
    /*  datax x add a sequence to standardized data */
    nx = seq->size[0];
    i1 = datax->size[0] * datax->size[1];
    datax->size[0] = seq->size[0];
    datax->size[1] = 2;
    emxEnsureCapacity_real_T(datax, i1);
    for (i1 = 0; i1 < nx; i1++) {
      datax->data[i1] = seq->data[i1];
    }
    nx = Ys->size[0];
    for (i1 = 0; i1 < nx; i1++) {
      datax->data[i1 + datax->size[0]] = Ys->data[i1];
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
    nx = datax->size[0];
    i1 = r->size[0];
    r->size[0] = datax->size[0];
    emxEnsureCapacity_boolean_T(r, i1);
    for (i1 = 0; i1 < nx; i1++) {
      brm = datax->data[i1 + datax->size[0]];
      r->data[i1] = ((brm > Ty) || (brm < mady));
    }
    nx = datax->size[0] - 1;
    i1 = yrank->size[0];
    yrank->size[0] = datax->size[0];
    emxEnsureCapacity_real_T(yrank, i1);
    for (k = 0; k <= nx; k++) {
      yrank->data[k] = fabs(datax->data[k + datax->size[0]]);
    }
    i1 = r1->size[0];
    r1->size[0] = yrank->size[0];
    emxEnsureCapacity_boolean_T(r1, i1);
    nx = yrank->size[0];
    for (i1 = 0; i1 < nx; i1++) {
      r1->data[i1] = (yrank->data[i1] > 3.0);
    }
    k = r->size[0] - 1;
    nx = 0;
    for (b_i = 0; b_i <= k; b_i++) {
      if (r->data[b_i] || r1->data[b_i]) {
        nx++;
      }
    }
    i1 = r2->size[0];
    r2->size[0] = nx;
    emxEnsureCapacity_int32_T(r2, i1);
    nx = 0;
    for (b_i = 0; b_i <= k; b_i++) {
      if (r->data[b_i] || r1->data[b_i]) {
        r2->data[nx] = b_i + 1;
        nx++;
      }
    }
    nx = r2->size[0];
    i1 = outy->size[0] * outy->size[1];
    outy->size[0] = r2->size[0];
    outy->size[1] = 2;
    emxEnsureCapacity_real_T(outy, i1);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < nx; i2++) {
        outy->data[i2 + outy->size[0] * i1] =
            datax->data[(r2->data[i2] + datax->size[0] * i1) - 1];
      }
    }
    nx = r2->size[0];
    if (r2->size[0] != 0) {
      /*  Increase by 1 the frequencey distribution of */
      /*  univariate outliers in vector univT */
      i1 = yrank->size[0];
      yrank->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(yrank, i1);
      for (i1 = 0; i1 < nx; i1++) {
        yrank->data[i1] = univT->data[(int)outy->data[i1] - 1] + 1.0;
      }
      nx = yrank->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        univT->data[(int)outy->data[i1] - 1] = yrank->data[i1];
      }
    }
    i1 = Y->size[1] - il;
    for (jl = 0; jl < i1; jl++) {
      b_jl = ((unsigned int)il + jl) + 1U;
      /*  jl is linked to columns */
      if ((unsigned int)(il + 1) != b_jl) {
        /*  beginning of bivariate part */
        /*  Tx is the coordinate of the  Median */
        nx = Y->size[0];
        i2 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i2);
        for (i2 = 0; i2 < nx; i2++) {
          yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
        }
        Ty = median(yrank);
        nx = Y->size[0];
        i2 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i2);
        for (i2 = 0; i2 < nx; i2++) {
          yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
        }
        mady = mad(yrank);
        if (mady > 0.0) {
          brm = 1.4815 * mady;
          nx = Y->size[0];
          i2 = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(Xs, i2);
          for (i2 = 0; i2 < nx; i2++) {
            Xs->data[i2] =
                (Y->data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / brm;
          }
        } else {
          if (robscale == 1) {
            robscale = 2;
          }
          nx = Y->size[0];
          i2 = yrank->size[0];
          yrank->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(yrank, i2);
          for (i2 = 0; i2 < nx; i2++) {
            yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
          }
          mady = iqr(yrank);
          if (mady > 0.0) {
            brm = 1.4815 * (1.349 * mady / 0.6745);
            nx = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, i2);
            for (i2 = 0; i2 < nx; i2++) {
              Xs->data[i2] =
                  (Y->data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / brm;
            }
          } else {
            nx = Y->size[0];
            i2 = yrank->size[0];
            yrank->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(yrank, i2);
            for (i2 = 0; i2 < nx; i2++) {
              yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
            }
            brm = 1.4815 * (1.2533 * b_mad(yrank) / 0.6745);
            nx = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, i2);
            for (i2 = 0; i2 < nx; i2++) {
              Xs->data[i2] =
                  (Y->data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / brm;
            }
          }
        }
        if (robscale == 1) {
          i2 = xrank->size[0];
          xrank->size[0] = Xs->size[0];
          emxEnsureCapacity_real_T(xrank, i2);
          nx = Xs->size[0];
          for (i2 = 0; i2 < nx; i2++) {
            xrank->data[i2] = Xs->data[i2] + Ys->data[i2];
          }
          nx = xrank->size[0];
          i2 = yrank->size[0];
          yrank->size[0] = xrank->size[0];
          emxEnsureCapacity_real_T(yrank, i2);
          for (k = 0; k < nx; k++) {
            yrank->data[k] = fabs(xrank->data[k]);
          }
          a = median(yrank);
          Ty = a * a;
          i2 = xrank->size[0];
          xrank->size[0] = Xs->size[0];
          emxEnsureCapacity_real_T(xrank, i2);
          nx = Xs->size[0];
          for (i2 = 0; i2 < nx; i2++) {
            xrank->data[i2] = Xs->data[i2] - Ys->data[i2];
          }
          nx = xrank->size[0];
          i2 = yrank->size[0];
          yrank->size[0] = xrank->size[0];
          emxEnsureCapacity_real_T(yrank, i2);
          for (k = 0; k < nx; k++) {
            yrank->data[k] = fabs(xrank->data[k]);
          }
          a = median(yrank);
          mady = a * a;
          b_r = (Ty - mady) / (Ty + mady);
          if (rtIsNaN(b_r)) {
            b_r = 0.0;
          }
        } else {
          /*  r is computed using ranks */
          nx = Y->size[0];
          i2 = yrank->size[0];
          yrank->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(yrank, i2);
          for (i2 = 0; i2 < nx; i2++) {
            yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
          }
          tiedrankFS(yrank, xrank);
          tiedrankFS(y, yrank);
          mady =
              blockedSummation(xrank, xrank->size[0]) / (double)xrank->size[0];
          Ty = blockedSummation(yrank, yrank->size[0]) / (double)yrank->size[0];
          b_r = 0.0;
          nx = xrank->size[0];
          for (i2 = 0; i2 < nx; i2++) {
            b_r += (xrank->data[i2] - mady) * (yrank->data[i2] - Ty);
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
        nx = Xs->size[0];
        for (k = 0; k < nx; k++) {
          yrank->data[k] = Xs->data[k] * Xs->data[k];
        }
        i2 = xrank->size[0];
        xrank->size[0] = Ys->size[0];
        emxEnsureCapacity_real_T(xrank, i2);
        nx = Ys->size[0];
        for (k = 0; k < nx; k++) {
          xrank->data[k] = Ys->data[k] * Ys->data[k];
        }
        nx = yrank->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          yrank->data[i2] = ((yrank->data[i2] + xrank->data[i2]) -
                             a * Xs->data[i2] * Ys->data[i2]) /
                            (1.0 - mady);
        }
        nx = yrank->size[0];
        for (k = 0; k < nx; k++) {
          yrank->data[k] = sqrt(yrank->data[k]);
        }
        nx = MDbiv->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          MDbiv->data[i2] += yrank->data[i2];
        }
        /*   Em  is the median  of vector E */
        if (n - 2 > 0) {
          brm = ((double)n - 2.0) / 2.0;
          if (0.95 > (betainc(0.5, 1.0, brm)).re) {
            b_a = betaincinv(0.95, brm, 1.0);
            mady = (1.0 - b_a.re) / b_a.re;
          } else {
            b_a = b_betaincinv(0.95, 1.0, brm);
            mady = b_a.re / (1.0 - b_a.re);
          }
          mady = mady * ((double)n - 2.0) / 2.0;
        } else {
          mady = rtNaN;
        }
        mady = sqrt(2.0 * ((double)n - 1.0) / ((double)n - 2.0) * mady);
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
        c_a[0] = a;
        c_a[2] = mady;
        c_a[1] = mady;
        c_a[3] = a;
        eig(c_a, aut);
        b_sort(aut);
        b_r = a - aut[1].re;
        a_im_tmp_tmp = b_r * (0.0 - aut[1].im);
        b_r = (b_r * b_r - (0.0 - aut[1].im) * (0.0 - aut[1].im)) + mady * mady;
        b_a.re = b_r;
        b_a.im = a_im_tmp_tmp + a_im_tmp_tmp;
        b_sqrt(&b_a);
        if (b_a.im == 0.0) {
          costh_re = mady / b_a.re;
          costh_im = 0.0;
        } else if (b_a.re == 0.0) {
          if (mady == 0.0) {
            costh_re = 0.0 / b_a.im;
            costh_im = 0.0;
          } else {
            costh_re = 0.0;
            costh_im = -(mady / b_a.im);
          }
        } else {
          brm = fabs(b_a.re);
          Ty = fabs(b_a.im);
          if (brm > Ty) {
            s = b_a.im / b_a.re;
            d = b_a.re + s * b_a.im;
            costh_re = (mady + s * 0.0) / d;
            costh_im = (0.0 - s * mady) / d;
          } else if (Ty == brm) {
            if (b_a.re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (b_a.im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }
            costh_re = (mady * s + 0.0 * d) / brm;
            costh_im = (0.0 * s - mady * d) / brm;
          } else {
            s = b_a.re / b_a.im;
            d = b_a.im + s * b_a.re;
            costh_re = s * mady / d;
            costh_im = (s * 0.0 - mady) / d;
          }
        }
        b_a.re = b_r;
        b_a.im = a_im_tmp_tmp + a_im_tmp_tmp;
        b_sqrt(&b_a);
        mady = aut[1].re - a;
        if (b_a.im == 0.0) {
          if (aut[1].im == 0.0) {
            sinth.re = mady / b_a.re;
            sinth.im = 0.0;
          } else if (mady == 0.0) {
            sinth.re = 0.0;
            sinth.im = aut[1].im / b_a.re;
          } else {
            sinth.re = mady / b_a.re;
            sinth.im = aut[1].im / b_a.re;
          }
        } else if (b_a.re == 0.0) {
          if (mady == 0.0) {
            sinth.re = aut[1].im / b_a.im;
            sinth.im = 0.0;
          } else if (aut[1].im == 0.0) {
            sinth.re = 0.0;
            sinth.im = -(mady / b_a.im);
          } else {
            sinth.re = aut[1].im / b_a.im;
            sinth.im = -(mady / b_a.im);
          }
        } else {
          brm = fabs(b_a.re);
          Ty = fabs(b_a.im);
          if (brm > Ty) {
            s = b_a.im / b_a.re;
            d = b_a.re + s * b_a.im;
            sinth.re = (mady + s * aut[1].im) / d;
            sinth.im = (aut[1].im - s * mady) / d;
          } else if (Ty == brm) {
            if (b_a.re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (b_a.im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }
            sinth.re = (mady * s + aut[1].im * d) / brm;
            sinth.im = (aut[1].im * s - mady * d) / brm;
          } else {
            s = b_a.re / b_a.im;
            d = b_a.im + s * b_a.re;
            sinth.re = (s * mady + aut[1].im) / d;
            sinth.im = (s * aut[1].im - mady) / d;
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
          brm = fabs(aut[0].re);
          Ty = fabs(aut[0].im);
          if (brm > Ty) {
            s = aut[0].im / aut[0].re;
            d = aut[0].re + s * aut[0].im;
            b_r = (s * 0.0 + 1.0) / d;
            a = (0.0 - s) / d;
          } else if (Ty == brm) {
            if (aut[0].re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (aut[0].im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }
            b_r = (s + 0.0 * d) / brm;
            a = (0.0 * s - d) / brm;
          } else {
            s = aut[0].re / aut[0].im;
            d = aut[0].im + s * aut[0].re;
            b_r = s / d;
            a = (s * 0.0 - 1.0) / d;
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
            s = aut[1].im / aut[1].re;
            d = aut[1].re + s * aut[1].im;
            Ty = (s * 0.0 + 1.0) / d;
            mady = (0.0 - s) / d;
          } else if (Ty == brm) {
            if (aut[1].re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (aut[1].im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }
            Ty = (s + 0.0 * d) / brm;
            mady = (0.0 * s - d) / brm;
          } else {
            s = aut[1].re / aut[1].im;
            d = aut[1].im + s * aut[1].re;
            Ty = s / d;
            mady = (s * 0.0 - 1.0) / d;
          }
        }
        fuo = sqrt(rt_hypotd_snf(b_r - Ty, a - mady));
        /*  new1 = 2 x n matrix which contains the coordinates of the rotated
         * ellipse */
        for (i2 = 0; i2 < 3601; i2++) {
          i3 = i2 << 1;
          brm = The1max[i2];
          mady = The2max[i2];
          b_The1max[i3].re = brm + mady;
          b_The1max[i3].im = 0.0;
          b_The1max[i3 + 1].re = brm - mady;
          b_The1max[i3 + 1].im = 0.0;
        }
        for (i2 = 0; i2 < 2; i2++) {
          brm = M[i2].re;
          mady = M[i2].im;
          Ty = M[i2 + 2].re;
          b_r = M[i2 + 2].im;
          for (i3 = 0; i3 < 3601; i3++) {
            nx = i3 << 1;
            b_i = i2 + nx;
            s = b_The1max[nx].re;
            d = b_The1max[nx].im;
            a = b_The1max[nx + 1].re;
            a_im_tmp_tmp = b_The1max[nx + 1].im;
            new1[b_i].re = (brm * s - mady * d) + (Ty * a - b_r * a_im_tmp_tmp);
            new1[b_i].im = (brm * d + mady * s) + (Ty * a_im_tmp_tmp + b_r * a);
          }
        }
        /*  xnew = n x 1 vector which contains x coord. of rotated points */
        /*  ynew = n x 1 vector which contains y coord. of rotated points */
        for (i2 = 0; i2 < 3601; i2++) {
          i3 = i2 << 1;
          xnew[i2].re = new1[i3].re;
          xnew[i2].im = -new1[i3].im;
          ynew[i2].re = new1[i3 + 1].re;
          ynew[i2].im = -new1[i3 + 1].im;
        }
        /*  new2 = 2 x n matrix which contains the coordinates of the rotated
         * points */
        i2 = b_Xs->size[0] * b_Xs->size[1];
        b_Xs->size[0] = 2;
        b_Xs->size[1] = Xs->size[0];
        emxEnsureCapacity_creal_T(b_Xs, i2);
        nx = Xs->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          b_Xs->data[2 * i2].re = Xs->data[i2];
          b_Xs->data[2 * i2].im = 0.0;
        }
        nx = Ys->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          i3 = 2 * i2 + 1;
          b_Xs->data[i3].re = Ys->data[i2];
          b_Xs->data[i3].im = 0.0;
        }
        i2 = new2->size[0] * new2->size[1];
        new2->size[0] = 2;
        new2->size[1] = b_Xs->size[1];
        emxEnsureCapacity_creal_T(new2, i2);
        nx = b_Xs->size[1];
        for (i2 = 0; i2 < 2; i2++) {
          for (i3 = 0; i3 < nx; i3++) {
            brm = M[i2].re;
            mady = M[i2].im;
            Ty = M[i2 + 2].re;
            b_r = M[i2 + 2].im;
            b_i = 2 * i3 + 1;
            k = i2 + 2 * i3;
            new2->data[k].re =
                (brm * b_Xs->data[2 * i3].re - mady * b_Xs->data[2 * i3].im) +
                (Ty * b_Xs->data[b_i].re - b_r * b_Xs->data[b_i].im);
            new2->data[k].im =
                (brm * b_Xs->data[2 * i3].im + mady * b_Xs->data[2 * i3].re) +
                (Ty * b_Xs->data[b_i].im + b_r * b_Xs->data[b_i].re);
          }
        }
        /*  ch is the fixed distance of each point lying on the ellipse */
        sinth.re = ynew[9].re * ynew[9].re - ynew[9].im * ynew[9].im;
        mady = ynew[9].re * ynew[9].im;
        sinth.im = mady + mady;
        b_a.re = xnew[9].re + fuo;
        costh_re = xnew[9].re - fuo;
        mady = xnew[9].im * xnew[9].im;
        Ty = b_a.re * b_a.re - mady;
        b_r = b_a.re * xnew[9].im;
        b_a.re = Ty + sinth.re;
        b_a.im = (b_r + b_r) + sinth.im;
        b_sqrt(&b_a);
        Ty = costh_re * xnew[9].im;
        sinth.re += costh_re * costh_re - mady;
        sinth.im += Ty + Ty;
        b_sqrt(&sinth);
        mady = b_a.re + sinth.re;
        /*  biv is the 1 x n vector which contains potential bivariate outliers
         */
        i2 = biv->size[0] * biv->size[1];
        biv->size[0] = 1;
        biv->size[1] = n;
        emxEnsureCapacity_real_T(biv, i2);
        for (i2 = 0; i2 < n; i2++) {
          biv->data[i2] = 0.0;
        }
        for (k = 0; k < n; k++) {
          b_a.re = new2->data[2 * k].re + fuo;
          b_a.im = new2->data[2 * k].im;
          costh_re = new2->data[2 * k].re - fuo;
          costh_im = new2->data[2 * k].im;
          Ty = b_a.re * b_a.re - b_a.im * b_a.im;
          b_r = b_a.re * b_a.im;
          nx = 2 * k + 1;
          s = new2->data[nx].re * new2->data[nx].re -
              new2->data[nx].im * new2->data[nx].im;
          d = new2->data[nx].re * new2->data[nx].im;
          d += d;
          b_a.re = Ty + s;
          b_a.im = (b_r + b_r) + d;
          b_sqrt(&b_a);
          Ty = costh_re * costh_im;
          sinth.re = (costh_re * costh_re - costh_im * costh_im) + s;
          sinth.im = (Ty + Ty) + d;
          b_sqrt(&sinth);
          if (b_a.re + sinth.re > mady) {
            biv->data[k]++;
          }
        }
        /*  bivT contains cumulative distribution of bivariate outliers */
        nx = bivT->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          bivT->data[i2] += biv->data[i2];
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
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&r1);
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
  nx = seq->size[0];
  for (i = 0; i < nx; i++) {
    fre->data[i] = seq->data[i];
  }
  emxFree_real_T(&seq);
  nx = univT->size[0];
  for (i = 0; i < nx; i++) {
    fre->data[i + fre->size[0]] = univT->data[i];
  }
  emxFree_real_T(&univT);
  nx = bivT->size[0];
  for (i = 0; i < nx; i++) {
    fre->data[i + fre->size[0] * 2] = bivT->data[i];
  }
  emxFree_real_T(&bivT);
  nx = MDbiv->size[0];
  for (i = 0; i < nx; i++) {
    fre->data[i + fre->size[0] * 3] = MDbiv->data[i];
  }
  emxFree_real_T(&MDbiv);
}

void tiedrankFS(const emxArray_real_T *x, emxArray_real_T *r)
{
  emxArray_boolean_T *b_x;
  emxArray_int32_T *iidx;
  emxArray_int32_T *rowidx;
  emxArray_real_T *b_ranks;
  emxArray_real_T *ranks;
  emxArray_real_T *tieloc;
  emxArray_real_T *y;
  double d;
  double ntied;
  double xLen;
  int i;
  int i1;
  int loop_ub;
  int nz;
  unsigned int tiecount;
  int vlen;
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
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    tieloc->data[i] = x->data[i];
  }
  emxInit_int32_T(&rowidx, 1);
  emxInit_int32_T(&iidx, 1);
  sort(tieloc, iidx);
  i = rowidx->size[0];
  rowidx->size[0] = iidx->size[0];
  emxEnsureCapacity_int32_T(rowidx, i);
  loop_ub = iidx->size[0];
  for (i = 0; i < loop_ub; i++) {
    rowidx->data[i] = iidx->data[i];
  }
  emxInit_boolean_T(&b_x, 1);
  i = b_x->size[0];
  b_x->size[0] = x->size[0];
  emxEnsureCapacity_boolean_T(b_x, i);
  loop_ub = x->size[0];
  for (i = 0; i < loop_ub; i++) {
    b_x->data[i] = rtIsNaN(x->data[i]);
  }
  vlen = b_x->size[0];
  if (b_x->size[0] == 0) {
    nz = 0;
  } else {
    nz = b_x->data[0];
    for (loop_ub = 2; loop_ub <= vlen; loop_ub++) {
      nz += b_x->data[loop_ub - 1];
    }
  }
  emxInit_real_T(&y, 2);
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
    loop_ub = (int)(xLen - 1.0);
    for (i = 0; i <= loop_ub; i++) {
      y->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&ranks, 1);
  i = ranks->size[0];
  ranks->size[0] = y->size[1] + nz;
  emxEnsureCapacity_real_T(ranks, i);
  loop_ub = y->size[1];
  for (i = 0; i < loop_ub; i++) {
    ranks->data[i] = y->data[i];
  }
  for (i = 0; i < nz; i++) {
    ranks->data[i + y->size[1]] = rtNaN;
  }
  emxFree_real_T(&y);
  /*  Adjust for ties.  Avoid using diff(sx) here in case there are infs. */
  if (1.0 > xLen - 1.0) {
    loop_ub = 0;
  } else {
    loop_ub = (int)(xLen - 1.0);
  }
  i = !(2.0 > xLen);
  i1 = b_x->size[0];
  b_x->size[0] = loop_ub;
  emxEnsureCapacity_boolean_T(b_x, i1);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_x->data[i1] = (tieloc->data[i1] >= tieloc->data[i + i1]);
  }
  b_eml_find(b_x, iidx);
  i = tieloc->size[0];
  tieloc->size[0] = iidx->size[0] + 1;
  emxEnsureCapacity_real_T(tieloc, i);
  loop_ub = iidx->size[0];
  emxFree_boolean_T(&b_x);
  for (i = 0; i < loop_ub; i++) {
    tieloc->data[i] = iidx->data[i];
  }
  tieloc->data[iidx->size[0]] = xLen + 2.0;
  i = r->size[0];
  r->size[0] = x->size[0];
  emxEnsureCapacity_real_T(r, i);
  loop_ub = x->size[0];
  emxFree_int32_T(&iidx);
  for (i = 0; i < loop_ub; i++) {
    r->data[i] = 0.0;
  }
  tiecount = 1U;
  emxInit_real_T(&b_ranks, 1);
  while (tiecount < (unsigned int)tieloc->size[0]) {
    xLen = tieloc->data[(int)tiecount - 1];
    ntied = 2.0;
    while (tieloc->data[(int)tiecount] ==
           tieloc->data[(int)tiecount - 1] + 1.0) {
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
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_ranks->data[i1] = ranks->data[i + i1];
    }
    xLen = blockedSummation(b_ranks, loop_ub);
    loop_ub = (nz - vlen) - 1;
    for (i = 0; i < loop_ub; i++) {
      ranks->data[(vlen + i) + 1] = xLen / ntied;
    }
    tiecount++;
  }
  emxFree_real_T(&b_ranks);
  emxFree_real_T(&tieloc);
  /*  Broadcast the ranks back out, including NaN where required. */
  loop_ub = ranks->size[0];
  for (i = 0; i < loop_ub; i++) {
    r->data[rowidx->data[i] - 1] = ranks->data[i];
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
  emxArray_boolean_T *r1;
  emxArray_creal_T *b_Xs;
  emxArray_creal_T *new2;
  emxArray_int32_T *r2;
  emxArray_real_T *MDbiv;
  emxArray_real_T *Xs;
  emxArray_real_T *Ys;
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
  double The1max[3601];
  double The2max[3601];
  double b_a[4];
  double quan[3];
  double Ty;
  double a;
  double a_im_tmp_tmp;
  double b_r;
  double brm;
  double costh_im;
  double costh_re;
  double d;
  double fuo;
  double mady;
  double s;
  int b_i;
  unsigned int b_jl;
  int i;
  int i1;
  int i2;
  int i3;
  int il;
  int jl;
  int k;
  int n;
  int nx;
  int robscale;
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
  /*  */
  /*  Optional input arguments: */
  /*  */
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
  /*            rf  :  It specifies the confidence */
  /*                   level of the robust bivariate ellipses. Scalar. 0<rf<1.
   */
  /*                   The default value is 0.95 that is the outer contour in */
  /*                   presence of normality for each ellipse should leave */
  /*                   outside 5% of the values. */
  /*                  Example - 'rf',0.99 */
  /*                  Data Types - double */
  /*  */
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
  /*  */
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
  nx = Y->size[0];
  for (i = 0; i < nx; i++) {
    bivT->data[i] = 0.0;
  }
  emxInit_real_T(&univT, 1);
  /*  univT contains the frequency distribution of univ. outliers */
  i = univT->size[0];
  univT->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(univT, i);
  nx = Y->size[0];
  for (i = 0; i < nx; i++) {
    univT->data[i] = 0.0;
  }
  emxInit_real_T(&MDbiv, 1);
  /*  MDbiv= vector which contains the sum of the bivaraite Mahalanobis
   * distances for each unit */
  i = MDbiv->size[0];
  MDbiv->size[0] = Y->size[0];
  emxEnsureCapacity_real_T(MDbiv, i);
  nx = Y->size[0];
  for (i = 0; i < nx; i++) {
    MDbiv->data[i] = 0.0;
  }
  /*  madcoef=1; */
  emxInit_real_T(&biv, 2);
  if (Y->size[0] < 1) {
    biv->size[0] = 1;
    biv->size[1] = 0;
  } else {
    i = biv->size[0] * biv->size[1];
    biv->size[0] = 1;
    biv->size[1] = Y->size[0];
    emxEnsureCapacity_real_T(biv, i);
    nx = Y->size[0] - 1;
    for (i = 0; i <= nx; i++) {
      biv->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = biv->size[1];
  emxEnsureCapacity_real_T(seq, i);
  nx = biv->size[1];
  for (i = 0; i < nx; i++) {
    seq->data[i] = biv->data[i];
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
  emxInit_boolean_T(&r1, 1);
  emxInit_int32_T(&r2, 1);
  emxInit_creal_T(&b_Xs, 2);
  for (il = 0; il < i; il++) {
    /*  il is linked to the rows */
    /*  Ys = vector which contains standardized data */
    nx = Y->size[0];
    i1 = y->size[0];
    y->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(y, i1);
    i1 = yrank->size[0];
    yrank->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(yrank, i1);
    for (i1 = 0; i1 < nx; i1++) {
      brm = Y->data[i1 + Y->size[0] * il];
      y->data[i1] = brm;
      yrank->data[i1] = brm;
    }
    Ty = median(yrank);
    nx = Y->size[0];
    i1 = yrank->size[0];
    yrank->size[0] = Y->size[0];
    emxEnsureCapacity_real_T(yrank, i1);
    for (i1 = 0; i1 < nx; i1++) {
      yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
    }
    mady = mad(yrank);
    if (mady > 0.0) {
      brm = 1.4815 * mady;
      nx = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(Ys, i1);
      for (i1 = 0; i1 < nx; i1++) {
        Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
      }
    } else {
      nx = Y->size[0];
      i1 = yrank->size[0];
      yrank->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(yrank, i1);
      for (i1 = 0; i1 < nx; i1++) {
        yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
      }
      if (iqr(yrank) > 0.0) {
        nx = Y->size[0];
        i1 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i1);
        for (i1 = 0; i1 < nx; i1++) {
          yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
        }
        brm = 1.4815 * (1.349 * iqr(yrank) / 0.6745);
        nx = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        for (i1 = 0; i1 < nx; i1++) {
          Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
        }
      } else {
        nx = Y->size[0];
        i1 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i1);
        for (i1 = 0; i1 < nx; i1++) {
          yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
        }
        brm = 1.4815 * (1.2533 * b_mad(yrank) / 0.6745);
        nx = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        for (i1 = 0; i1 < nx; i1++) {
          Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / brm;
        }
      }
    }
    /*  datax x add a sequence to standardized data */
    nx = seq->size[0];
    i1 = datax->size[0] * datax->size[1];
    datax->size[0] = seq->size[0];
    datax->size[1] = 2;
    emxEnsureCapacity_real_T(datax, i1);
    for (i1 = 0; i1 < nx; i1++) {
      datax->data[i1] = seq->data[i1];
    }
    nx = Ys->size[0];
    for (i1 = 0; i1 < nx; i1++) {
      datax->data[i1 + datax->size[0]] = Ys->data[i1];
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
    nx = datax->size[0];
    i1 = r->size[0];
    r->size[0] = datax->size[0];
    emxEnsureCapacity_boolean_T(r, i1);
    for (i1 = 0; i1 < nx; i1++) {
      brm = datax->data[i1 + datax->size[0]];
      r->data[i1] = ((brm > Ty) || (brm < mady));
    }
    nx = datax->size[0] - 1;
    i1 = yrank->size[0];
    yrank->size[0] = datax->size[0];
    emxEnsureCapacity_real_T(yrank, i1);
    for (k = 0; k <= nx; k++) {
      yrank->data[k] = fabs(datax->data[k + datax->size[0]]);
    }
    i1 = r1->size[0];
    r1->size[0] = yrank->size[0];
    emxEnsureCapacity_boolean_T(r1, i1);
    nx = yrank->size[0];
    for (i1 = 0; i1 < nx; i1++) {
      r1->data[i1] = (yrank->data[i1] > 3.0);
    }
    k = r->size[0] - 1;
    nx = 0;
    for (b_i = 0; b_i <= k; b_i++) {
      if (r->data[b_i] || r1->data[b_i]) {
        nx++;
      }
    }
    i1 = r2->size[0];
    r2->size[0] = nx;
    emxEnsureCapacity_int32_T(r2, i1);
    nx = 0;
    for (b_i = 0; b_i <= k; b_i++) {
      if (r->data[b_i] || r1->data[b_i]) {
        r2->data[nx] = b_i + 1;
        nx++;
      }
    }
    nx = r2->size[0];
    i1 = outy->size[0] * outy->size[1];
    outy->size[0] = r2->size[0];
    outy->size[1] = 2;
    emxEnsureCapacity_real_T(outy, i1);
    for (i1 = 0; i1 < 2; i1++) {
      for (i2 = 0; i2 < nx; i2++) {
        outy->data[i2 + outy->size[0] * i1] =
            datax->data[(r2->data[i2] + datax->size[0] * i1) - 1];
      }
    }
    nx = r2->size[0];
    if (r2->size[0] != 0) {
      /*  Increase by 1 the frequencey distribution of */
      /*  univariate outliers in vector univT */
      i1 = yrank->size[0];
      yrank->size[0] = r2->size[0];
      emxEnsureCapacity_real_T(yrank, i1);
      for (i1 = 0; i1 < nx; i1++) {
        yrank->data[i1] = univT->data[(int)outy->data[i1] - 1] + 1.0;
      }
      nx = yrank->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        univT->data[(int)outy->data[i1] - 1] = yrank->data[i1];
      }
    }
    i1 = Y->size[1] - il;
    for (jl = 0; jl < i1; jl++) {
      b_jl = ((unsigned int)il + jl) + 1U;
      /*  jl is linked to columns */
      if ((unsigned int)(il + 1) != b_jl) {
        /*  beginning of bivariate part */
        /*  Tx is the coordinate of the  Median */
        nx = Y->size[0];
        i2 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i2);
        for (i2 = 0; i2 < nx; i2++) {
          yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
        }
        Ty = median(yrank);
        nx = Y->size[0];
        i2 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i2);
        for (i2 = 0; i2 < nx; i2++) {
          yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
        }
        mady = mad(yrank);
        if (mady > 0.0) {
          brm = 1.4815 * mady;
          nx = Y->size[0];
          i2 = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(Xs, i2);
          for (i2 = 0; i2 < nx; i2++) {
            Xs->data[i2] =
                (Y->data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / brm;
          }
        } else {
          if (robscale == 1) {
            robscale = 2;
          }
          nx = Y->size[0];
          i2 = yrank->size[0];
          yrank->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(yrank, i2);
          for (i2 = 0; i2 < nx; i2++) {
            yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
          }
          mady = iqr(yrank);
          if (mady > 0.0) {
            brm = 1.4815 * (1.349 * mady / 0.6745);
            nx = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, i2);
            for (i2 = 0; i2 < nx; i2++) {
              Xs->data[i2] =
                  (Y->data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / brm;
            }
          } else {
            nx = Y->size[0];
            i2 = yrank->size[0];
            yrank->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(yrank, i2);
            for (i2 = 0; i2 < nx; i2++) {
              yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
            }
            brm = 1.4815 * (1.2533 * b_mad(yrank) / 0.6745);
            nx = Y->size[0];
            i2 = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, i2);
            for (i2 = 0; i2 < nx; i2++) {
              Xs->data[i2] =
                  (Y->data[i2 + Y->size[0] * ((int)b_jl - 1)] - Ty) / brm;
            }
          }
        }
        if (robscale == 1) {
          i2 = xrank->size[0];
          xrank->size[0] = Xs->size[0];
          emxEnsureCapacity_real_T(xrank, i2);
          nx = Xs->size[0];
          for (i2 = 0; i2 < nx; i2++) {
            xrank->data[i2] = Xs->data[i2] + Ys->data[i2];
          }
          nx = xrank->size[0];
          i2 = yrank->size[0];
          yrank->size[0] = xrank->size[0];
          emxEnsureCapacity_real_T(yrank, i2);
          for (k = 0; k < nx; k++) {
            yrank->data[k] = fabs(xrank->data[k]);
          }
          a = median(yrank);
          Ty = a * a;
          i2 = xrank->size[0];
          xrank->size[0] = Xs->size[0];
          emxEnsureCapacity_real_T(xrank, i2);
          nx = Xs->size[0];
          for (i2 = 0; i2 < nx; i2++) {
            xrank->data[i2] = Xs->data[i2] - Ys->data[i2];
          }
          nx = xrank->size[0];
          i2 = yrank->size[0];
          yrank->size[0] = xrank->size[0];
          emxEnsureCapacity_real_T(yrank, i2);
          for (k = 0; k < nx; k++) {
            yrank->data[k] = fabs(xrank->data[k]);
          }
          a = median(yrank);
          mady = a * a;
          b_r = (Ty - mady) / (Ty + mady);
          if (rtIsNaN(b_r)) {
            b_r = 0.0;
          }
        } else {
          /*  r is computed using ranks */
          nx = Y->size[0];
          i2 = yrank->size[0];
          yrank->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(yrank, i2);
          for (i2 = 0; i2 < nx; i2++) {
            yrank->data[i2] = Y->data[i2 + Y->size[0] * ((int)b_jl - 1)];
          }
          tiedrankFS(yrank, xrank);
          tiedrankFS(y, yrank);
          mady =
              blockedSummation(xrank, xrank->size[0]) / (double)xrank->size[0];
          Ty = blockedSummation(yrank, yrank->size[0]) / (double)yrank->size[0];
          b_r = 0.0;
          nx = xrank->size[0];
          for (i2 = 0; i2 < nx; i2++) {
            b_r += (xrank->data[i2] - mady) * (yrank->data[i2] - Ty);
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
        nx = Xs->size[0];
        for (k = 0; k < nx; k++) {
          yrank->data[k] = Xs->data[k] * Xs->data[k];
        }
        i2 = xrank->size[0];
        xrank->size[0] = Ys->size[0];
        emxEnsureCapacity_real_T(xrank, i2);
        nx = Ys->size[0];
        for (k = 0; k < nx; k++) {
          xrank->data[k] = Ys->data[k] * Ys->data[k];
        }
        nx = yrank->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          yrank->data[i2] = ((yrank->data[i2] + xrank->data[i2]) -
                             a * Xs->data[i2] * Ys->data[i2]) /
                            (1.0 - mady);
        }
        nx = yrank->size[0];
        for (k = 0; k < nx; k++) {
          yrank->data[k] = sqrt(yrank->data[k]);
        }
        nx = MDbiv->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          MDbiv->data[i2] += yrank->data[i2];
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
        b_r = a - aut[1].re;
        a_im_tmp_tmp = b_r * (0.0 - aut[1].im);
        b_r = (b_r * b_r - (0.0 - aut[1].im) * (0.0 - aut[1].im)) + mady * mady;
        c_a.re = b_r;
        c_a.im = a_im_tmp_tmp + a_im_tmp_tmp;
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
          brm = fabs(c_a.re);
          Ty = fabs(c_a.im);
          if (brm > Ty) {
            s = c_a.im / c_a.re;
            d = c_a.re + s * c_a.im;
            costh_re = (mady + s * 0.0) / d;
            costh_im = (0.0 - s * mady) / d;
          } else if (Ty == brm) {
            if (c_a.re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (c_a.im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }
            costh_re = (mady * s + 0.0 * d) / brm;
            costh_im = (0.0 * s - mady * d) / brm;
          } else {
            s = c_a.re / c_a.im;
            d = c_a.im + s * c_a.re;
            costh_re = s * mady / d;
            costh_im = (s * 0.0 - mady) / d;
          }
        }
        c_a.re = b_r;
        c_a.im = a_im_tmp_tmp + a_im_tmp_tmp;
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
          brm = fabs(c_a.re);
          Ty = fabs(c_a.im);
          if (brm > Ty) {
            s = c_a.im / c_a.re;
            d = c_a.re + s * c_a.im;
            sinth.re = (mady + s * aut[1].im) / d;
            sinth.im = (aut[1].im - s * mady) / d;
          } else if (Ty == brm) {
            if (c_a.re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (c_a.im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }
            sinth.re = (mady * s + aut[1].im * d) / brm;
            sinth.im = (aut[1].im * s - mady * d) / brm;
          } else {
            s = c_a.re / c_a.im;
            d = c_a.im + s * c_a.re;
            sinth.re = (s * mady + aut[1].im) / d;
            sinth.im = (s * aut[1].im - mady) / d;
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
          brm = fabs(aut[0].re);
          Ty = fabs(aut[0].im);
          if (brm > Ty) {
            s = aut[0].im / aut[0].re;
            d = aut[0].re + s * aut[0].im;
            b_r = (s * 0.0 + 1.0) / d;
            a = (0.0 - s) / d;
          } else if (Ty == brm) {
            if (aut[0].re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (aut[0].im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }
            b_r = (s + 0.0 * d) / brm;
            a = (0.0 * s - d) / brm;
          } else {
            s = aut[0].re / aut[0].im;
            d = aut[0].im + s * aut[0].re;
            b_r = s / d;
            a = (s * 0.0 - 1.0) / d;
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
            s = aut[1].im / aut[1].re;
            d = aut[1].re + s * aut[1].im;
            Ty = (s * 0.0 + 1.0) / d;
            mady = (0.0 - s) / d;
          } else if (Ty == brm) {
            if (aut[1].re > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            if (aut[1].im > 0.0) {
              d = 0.5;
            } else {
              d = -0.5;
            }
            Ty = (s + 0.0 * d) / brm;
            mady = (0.0 * s - d) / brm;
          } else {
            s = aut[1].re / aut[1].im;
            d = aut[1].im + s * aut[1].re;
            Ty = s / d;
            mady = (s * 0.0 - 1.0) / d;
          }
        }
        fuo = sqrt(rt_hypotd_snf(b_r - Ty, a - mady));
        /*  new1 = 2 x n matrix which contains the coordinates of the rotated
         * ellipse */
        for (i2 = 0; i2 < 3601; i2++) {
          i3 = i2 << 1;
          brm = The1max[i2];
          mady = The2max[i2];
          b_The1max[i3].re = brm + mady;
          b_The1max[i3].im = 0.0;
          b_The1max[i3 + 1].re = brm - mady;
          b_The1max[i3 + 1].im = 0.0;
        }
        for (i2 = 0; i2 < 2; i2++) {
          brm = M[i2].re;
          mady = M[i2].im;
          Ty = M[i2 + 2].re;
          b_r = M[i2 + 2].im;
          for (i3 = 0; i3 < 3601; i3++) {
            nx = i3 << 1;
            b_i = i2 + nx;
            s = b_The1max[nx].re;
            d = b_The1max[nx].im;
            a = b_The1max[nx + 1].re;
            a_im_tmp_tmp = b_The1max[nx + 1].im;
            new1[b_i].re = (brm * s - mady * d) + (Ty * a - b_r * a_im_tmp_tmp);
            new1[b_i].im = (brm * d + mady * s) + (Ty * a_im_tmp_tmp + b_r * a);
          }
        }
        /*  xnew = n x 1 vector which contains x coord. of rotated points */
        /*  ynew = n x 1 vector which contains y coord. of rotated points */
        for (i2 = 0; i2 < 3601; i2++) {
          i3 = i2 << 1;
          xnew[i2].re = new1[i3].re;
          xnew[i2].im = -new1[i3].im;
          ynew[i2].re = new1[i3 + 1].re;
          ynew[i2].im = -new1[i3 + 1].im;
        }
        /*  new2 = 2 x n matrix which contains the coordinates of the rotated
         * points */
        i2 = b_Xs->size[0] * b_Xs->size[1];
        b_Xs->size[0] = 2;
        b_Xs->size[1] = Xs->size[0];
        emxEnsureCapacity_creal_T(b_Xs, i2);
        nx = Xs->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          b_Xs->data[2 * i2].re = Xs->data[i2];
          b_Xs->data[2 * i2].im = 0.0;
        }
        nx = Ys->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          i3 = 2 * i2 + 1;
          b_Xs->data[i3].re = Ys->data[i2];
          b_Xs->data[i3].im = 0.0;
        }
        i2 = new2->size[0] * new2->size[1];
        new2->size[0] = 2;
        new2->size[1] = b_Xs->size[1];
        emxEnsureCapacity_creal_T(new2, i2);
        nx = b_Xs->size[1];
        for (i2 = 0; i2 < 2; i2++) {
          for (i3 = 0; i3 < nx; i3++) {
            brm = M[i2].re;
            mady = M[i2].im;
            Ty = M[i2 + 2].re;
            b_r = M[i2 + 2].im;
            b_i = 2 * i3 + 1;
            k = i2 + 2 * i3;
            new2->data[k].re =
                (brm * b_Xs->data[2 * i3].re - mady * b_Xs->data[2 * i3].im) +
                (Ty * b_Xs->data[b_i].re - b_r * b_Xs->data[b_i].im);
            new2->data[k].im =
                (brm * b_Xs->data[2 * i3].im + mady * b_Xs->data[2 * i3].re) +
                (Ty * b_Xs->data[b_i].im + b_r * b_Xs->data[b_i].re);
          }
        }
        /*  ch is the fixed distance of each point lying on the ellipse */
        sinth.re = ynew[9].re * ynew[9].re - ynew[9].im * ynew[9].im;
        mady = ynew[9].re * ynew[9].im;
        sinth.im = mady + mady;
        c_a.re = xnew[9].re + fuo;
        costh_re = xnew[9].re - fuo;
        mady = xnew[9].im * xnew[9].im;
        Ty = c_a.re * c_a.re - mady;
        b_r = c_a.re * xnew[9].im;
        c_a.re = Ty + sinth.re;
        c_a.im = (b_r + b_r) + sinth.im;
        b_sqrt(&c_a);
        Ty = costh_re * xnew[9].im;
        sinth.re += costh_re * costh_re - mady;
        sinth.im += Ty + Ty;
        b_sqrt(&sinth);
        mady = c_a.re + sinth.re;
        /*  biv is the 1 x n vector which contains potential bivariate outliers
         */
        i2 = biv->size[0] * biv->size[1];
        biv->size[0] = 1;
        biv->size[1] = n;
        emxEnsureCapacity_real_T(biv, i2);
        for (i2 = 0; i2 < n; i2++) {
          biv->data[i2] = 0.0;
        }
        for (k = 0; k < n; k++) {
          c_a.re = new2->data[2 * k].re + fuo;
          c_a.im = new2->data[2 * k].im;
          costh_re = new2->data[2 * k].re - fuo;
          costh_im = new2->data[2 * k].im;
          Ty = c_a.re * c_a.re - c_a.im * c_a.im;
          b_r = c_a.re * c_a.im;
          nx = 2 * k + 1;
          s = new2->data[nx].re * new2->data[nx].re -
              new2->data[nx].im * new2->data[nx].im;
          d = new2->data[nx].re * new2->data[nx].im;
          d += d;
          c_a.re = Ty + s;
          c_a.im = (b_r + b_r) + d;
          b_sqrt(&c_a);
          Ty = costh_re * costh_im;
          sinth.re = (costh_re * costh_re - costh_im * costh_im) + s;
          sinth.im = (Ty + Ty) + d;
          b_sqrt(&sinth);
          if (c_a.re + sinth.re > mady) {
            biv->data[k]++;
          }
        }
        /*  bivT contains cumulative distribution of bivariate outliers */
        nx = bivT->size[0];
        for (i2 = 0; i2 < nx; i2++) {
          bivT->data[i2] += biv->data[i2];
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
  emxFree_int32_T(&r2);
  emxFree_boolean_T(&r1);
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
  nx = seq->size[0];
  for (i = 0; i < nx; i++) {
    fre->data[i] = seq->data[i];
  }
  emxFree_real_T(&seq);
  nx = univT->size[0];
  for (i = 0; i < nx; i++) {
    fre->data[i + fre->size[0]] = univT->data[i];
  }
  emxFree_real_T(&univT);
  nx = bivT->size[0];
  for (i = 0; i < nx; i++) {
    fre->data[i + fre->size[0] * 2] = bivT->data[i];
  }
  emxFree_real_T(&bivT);
  nx = MDbiv->size[0];
  for (i = 0; i < nx; i++) {
    fre->data[i + fre->size[0] * 3] = MDbiv->data[i];
  }
  emxFree_real_T(&MDbiv);
}

/* End of code generation (unibiv.c) */
