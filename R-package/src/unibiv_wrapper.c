/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * unibiv_wrapper.c
 *
 * Code generation for function 'unibiv_wrapper'
 *
 */

/* Include files */
#include "unibiv_wrapper.h"
#include "blockedSummation.h"
#include "eig.h"
#include "find.h"
#include "finv.h"
#include "fsdaC_data.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_initialize.h"
#include "fsdaC_rtwutil.h"
#include "fsdaC_types.h"
#include "iqr.h"
#include "mad.h"
#include "median.h"
#include "quantile.h"
#include "rt_nonfinite.h"
#include "sort.h"
#include "sqrt.h"
#include "tril.h"
#include "unibiv.h"
#include "vvarstd.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void unibiv_wrapper(const emxArray_real_T *Y, double madcoef, double robscale,
                    double rf, emxArray_real_T *fre)
{
  static creal_T b_The1max[7202];
  static creal_T new1[7202];
  emxArray_boolean_T *r;
  emxArray_boolean_T *r1;
  emxArray_creal_T *b_Xs;
  emxArray_creal_T *new2;
  emxArray_int32_T *ii;
  emxArray_int32_T *jj;
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
  emxArray_uint8_T *r3;
  creal_T xnew[3601];
  creal_T ynew[3601];
  creal_T M[4];
  creal_T aut[2];
  creal_T b_a;
  creal_T sinth;
  double The1max[3601];
  double The2max[3601];
  double rr[4];
  double quan[3];
  double Sy;
  double Tx;
  double Ty;
  double a;
  double a_im_tmp_tmp;
  double b_robscale;
  double brm;
  double costh_im;
  double costh_re;
  double fuo;
  double mady;
  double s;
  double sgnbr;
  double uq;
  unsigned int b_jl;
  int boffset;
  int coffset;
  int i;
  int i1;
  int il;
  int j;
  int jl;
  int k;
  int n;
  int nx;
  if (!isInitialized_fsdaC) {
    fsdaC_initialize();
  }
  emxInit_real_T(&bivT, 1);
  /*  Wrapper function for FSM. NV pair names are not taken as */
  /*  inputs. Instead, just the values are taken as inputs. */
  /*  Y: an array of doubles of any dimensions */
  /*  Optional input arguments (name / pairs) in (case insensitive) */
  /*  alphabetical order */
  /*  robscale a scalar double */
  /*  robscale a scalar double */
  /*  rf: a scalar of type double */
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
  b_robscale = robscale;
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
  emxInit_int32_T(&ii, 1);
  emxInit_int32_T(&jj, 1);
  emxInit_uint8_T(&r3, 2);
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
      sgnbr = Y->data[i1 + Y->size[0] * il];
      y->data[i1] = sgnbr;
      yrank->data[i1] = sgnbr;
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
      mady *= madcoef;
      nx = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(Ys, i1);
      for (i1 = 0; i1 < nx; i1++) {
        Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / mady;
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
        mady = madcoef * (1.349 * iqr(yrank) / 0.6745);
        nx = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        for (i1 = 0; i1 < nx; i1++) {
          Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / mady;
        }
      } else {
        nx = Y->size[0];
        i1 = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, i1);
        for (i1 = 0; i1 < nx; i1++) {
          yrank->data[i1] = Y->data[i1 + Y->size[0] * il];
        }
        mady = madcoef * (1.2533 * b_mad(yrank) / 0.6745);
        nx = Y->size[0];
        i1 = Ys->size[0];
        Ys->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(Ys, i1);
        for (i1 = 0; i1 < nx; i1++) {
          Ys->data[i1] = (Y->data[i1 + Y->size[0] * il] - Ty) / mady;
        }
      }
    }
    if (b_robscale > 4.0) {
      /*  Sy is the unrobust standard deviation of y */
      nx = Y->size[0];
      i1 = Ys->size[0];
      Ys->size[0] = Y->size[0];
      emxEnsureCapacity_real_T(Ys, i1);
      for (i1 = 0; i1 < nx; i1++) {
        Ys->data[i1] = Y->data[i1 + Y->size[0] * il] - Ty;
      }
      mady = 0.0;
      nx = Ys->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        mady += Ys->data[i1] * Ys->data[i1];
      }
      Sy = sqrt(mady / ((double)n - 1.0));
      nx = Ys->size[0];
      for (i1 = 0; i1 < nx; i1++) {
        Ys->data[i1] /= Sy;
      }
    } else {
      Sy = 0.0;
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
    uq = quan[2] + 1.5 * mady;
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
      sgnbr = datax->data[i1 + datax->size[0]];
      r->data[i1] = ((sgnbr > uq) || (sgnbr < mady));
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
    coffset = r->size[0] - 1;
    nx = 0;
    for (boffset = 0; boffset <= coffset; boffset++) {
      if (r->data[boffset] || r1->data[boffset]) {
        nx++;
      }
    }
    i1 = r2->size[0];
    r2->size[0] = nx;
    emxEnsureCapacity_int32_T(r2, i1);
    nx = 0;
    for (boffset = 0; boffset <= coffset; boffset++) {
      if (r->data[boffset] || r1->data[boffset]) {
        r2->data[nx] = boffset + 1;
        nx++;
      }
    }
    nx = r2->size[0];
    i1 = outy->size[0] * outy->size[1];
    outy->size[0] = r2->size[0];
    outy->size[1] = 2;
    emxEnsureCapacity_real_T(outy, i1);
    for (i1 = 0; i1 < 2; i1++) {
      for (k = 0; k < nx; k++) {
        outy->data[k + outy->size[0] * i1] =
            datax->data[(r2->data[k] + datax->size[0] * i1) - 1];
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
        k = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, k);
        for (k = 0; k < nx; k++) {
          yrank->data[k] = Y->data[k + Y->size[0] * ((int)b_jl - 1)];
        }
        Tx = median(yrank);
        nx = Y->size[0];
        k = yrank->size[0];
        yrank->size[0] = Y->size[0];
        emxEnsureCapacity_real_T(yrank, k);
        for (k = 0; k < nx; k++) {
          yrank->data[k] = Y->data[k + Y->size[0] * ((int)b_jl - 1)];
        }
        mady = mad(yrank);
        if (mady > 0.0) {
          mady *= madcoef;
          nx = Y->size[0];
          k = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(Xs, k);
          for (k = 0; k < nx; k++) {
            Xs->data[k] =
                (Y->data[k + Y->size[0] * ((int)b_jl - 1)] - Tx) / mady;
          }
        } else {
          if (b_robscale == 1.0) {
            b_robscale = 2.0;
          }
          nx = Y->size[0];
          k = yrank->size[0];
          yrank->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(yrank, k);
          for (k = 0; k < nx; k++) {
            yrank->data[k] = Y->data[k + Y->size[0] * ((int)b_jl - 1)];
          }
          mady = iqr(yrank);
          if (mady > 0.0) {
            mady = madcoef * (1.349 * mady / 0.6745);
            nx = Y->size[0];
            k = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, k);
            for (k = 0; k < nx; k++) {
              Xs->data[k] =
                  (Y->data[k + Y->size[0] * ((int)b_jl - 1)] - Tx) / mady;
            }
          } else {
            nx = Y->size[0];
            k = yrank->size[0];
            yrank->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(yrank, k);
            for (k = 0; k < nx; k++) {
              yrank->data[k] = Y->data[k + Y->size[0] * ((int)b_jl - 1)];
            }
            mady = madcoef * (1.2533 * b_mad(yrank) / 0.6745);
            nx = Y->size[0];
            k = Xs->size[0];
            Xs->size[0] = Y->size[0];
            emxEnsureCapacity_real_T(Xs, k);
            for (k = 0; k < nx; k++) {
              Xs->data[k] =
                  (Y->data[k + Y->size[0] * ((int)b_jl - 1)] - Tx) / mady;
            }
          }
        }
        if (b_robscale == 1.0) {
          k = xrank->size[0];
          xrank->size[0] = Xs->size[0];
          emxEnsureCapacity_real_T(xrank, k);
          nx = Xs->size[0];
          for (k = 0; k < nx; k++) {
            xrank->data[k] = Xs->data[k] + Ys->data[k];
          }
          nx = xrank->size[0];
          k = yrank->size[0];
          yrank->size[0] = xrank->size[0];
          emxEnsureCapacity_real_T(yrank, k);
          for (k = 0; k < nx; k++) {
            yrank->data[k] = fabs(xrank->data[k]);
          }
          a = median(yrank);
          Tx = a * a;
          k = xrank->size[0];
          xrank->size[0] = Xs->size[0];
          emxEnsureCapacity_real_T(xrank, k);
          nx = Xs->size[0];
          for (k = 0; k < nx; k++) {
            xrank->data[k] = Xs->data[k] - Ys->data[k];
          }
          nx = xrank->size[0];
          k = yrank->size[0];
          yrank->size[0] = xrank->size[0];
          emxEnsureCapacity_real_T(yrank, k);
          for (k = 0; k < nx; k++) {
            yrank->data[k] = fabs(xrank->data[k]);
          }
          a = median(yrank);
          mady = a * a;
          Tx = (Tx - mady) / (Tx + mady);
          if (rtIsNaN(Tx)) {
            Tx = 0.0;
          }
        } else if (b_robscale == 2.0) {
          /*  r is computed using ranks */
          nx = Y->size[0];
          k = yrank->size[0];
          yrank->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(yrank, k);
          for (k = 0; k < nx; k++) {
            yrank->data[k] = Y->data[k + Y->size[0] * ((int)b_jl - 1)];
          }
          tiedrankFS(yrank, xrank);
          tiedrankFS(y, yrank);
          mady =
              blockedSummation(xrank, xrank->size[0]) / (double)xrank->size[0];
          Tx = blockedSummation(yrank, yrank->size[0]) / (double)yrank->size[0];
          uq = 0.0;
          nx = xrank->size[0];
          for (k = 0; k < nx; k++) {
            uq += (xrank->data[k] - mady) * (yrank->data[k] - Tx);
          }
          Tx = uq / (((double)n - 1.0) * vvarstd(xrank, xrank->size[0]) *
                     vvarstd(yrank, yrank->size[0]));
        } else if (b_robscale == 3.0) {
          /*  r is based on the linear correlation */
          /*  between the "concordances" sign(x(i)-x(j))*sign(y(i)-y(j)), i<j,
           * with */
          /*  an adjustment for ties.  This is often referred to as Kendall's
           * tau-b. */
          /*  Manual computation of Kendall correlation */
          /*  coefficient. */
          /*  Prepare indexes for all combinations without repetition */
          k = r3->size[0] * r3->size[1];
          r3->size[0] = n;
          r3->size[1] = n;
          emxEnsureCapacity_uint8_T(r3, k);
          nx = n * n;
          for (k = 0; k < nx; k++) {
            r3->data[k] = 1U;
          }
          tril(r3);
          c_eml_find(r3, ii, jj);
          nx = Y->size[0];
          k = datax->size[0] * datax->size[1];
          datax->size[0] = Y->size[0];
          datax->size[1] = 2;
          emxEnsureCapacity_real_T(datax, k);
          for (k = 0; k < nx; k++) {
            datax->data[k] = Y->data[k + Y->size[0] * ((int)b_jl - 1)];
          }
          nx = y->size[0];
          for (k = 0; k < nx; k++) {
            datax->data[k + datax->size[0]] = y->data[k];
          }
          /*  Now, this is just a linear correlation using the signs of */
          /*  [T * (T - 1) / 2] differences */
          nx = jj->size[0];
          k = outy->size[0] * outy->size[1];
          outy->size[0] = jj->size[0];
          outy->size[1] = 2;
          emxEnsureCapacity_real_T(outy, k);
          for (k = 0; k < 2; k++) {
            for (j = 0; j < nx; j++) {
              outy->data[j + outy->size[0] * k] =
                  datax->data[(jj->data[j] + datax->size[0] * k) - 1] -
                  datax->data[(ii->data[j] + datax->size[0] * k) - 1];
            }
          }
          nx = outy->size[0] << 1;
          for (k = 0; k < nx; k++) {
            mady = outy->data[k];
            if (outy->data[k] < 0.0) {
              mady = -1.0;
            } else if (outy->data[k] > 0.0) {
              mady = 1.0;
            } else if (outy->data[k] == 0.0) {
              mady = 0.0;
            }
            outy->data[k] = mady;
          }
          nx = outy->size[0];
          for (j = 0; j < 2; j++) {
            coffset = j << 1;
            boffset = j * outy->size[0];
            rr[coffset] = 0.0;
            rr[coffset + 1] = 0.0;
            for (k = 0; k < nx; k++) {
              mady = outy->data[boffset + k];
              rr[coffset] += outy->data[k] * mady;
              rr[coffset + 1] += outy->data[outy->size[0] + k] * mady;
            }
          }
          rr[2] /= sqrt(rr[0] * rr[3]);
          Tx = rr[2];
        } else if (b_robscale == 4.0) {
          /*  r is based on the tetracoric correlation */
          nx = Y->size[0];
          k = xrank->size[0];
          xrank->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(xrank, k);
          for (k = 0; k < nx; k++) {
            xrank->data[k] = (Y->data[k + Y->size[0] * ((int)b_jl - 1)] - Tx) *
                             (y->data[k] - Ty);
          }
          nx = xrank->size[0];
          for (k = 0; k < nx; k++) {
            mady = xrank->data[k];
            if (xrank->data[k] < 0.0) {
              mady = -1.0;
            } else if (xrank->data[k] > 0.0) {
              mady = 1.0;
            } else if (xrank->data[k] == 0.0) {
              mady = 0.0;
            }
            xrank->data[k] = mady;
          }
          Tx = blockedSummation(xrank, xrank->size[0]) / (double)n;
        } else {
          nx = Y->size[0];
          k = Xs->size[0];
          Xs->size[0] = Y->size[0];
          emxEnsureCapacity_real_T(Xs, k);
          for (k = 0; k < nx; k++) {
            Xs->data[k] = Y->data[k + Y->size[0] * ((int)b_jl - 1)] - Tx;
          }
          mady = 0.0;
          nx = Xs->size[0];
          for (k = 0; k < nx; k++) {
            mady += Xs->data[k] * Xs->data[k];
          }
          mady = sqrt(mady / ((double)n - 1.0));
          /*  Sx is the unrobust standard deviation of x */
          nx = Xs->size[0];
          for (k = 0; k < nx; k++) {
            Xs->data[k] /= mady;
          }
          /*  standardization of x */
          nx = y->size[0];
          k = Ys->size[0];
          Ys->size[0] = y->size[0];
          emxEnsureCapacity_real_T(Ys, k);
          for (k = 0; k < nx; k++) {
            Ys->data[k] = (y->data[k] - Ty) / Sy;
          }
          /*  standardization of y */
          mady = 0.0;
          nx = Xs->size[0];
          for (k = 0; k < nx; k++) {
            mady += Xs->data[k] * Ys->data[k];
          }
          Tx = mady / ((double)n - 1.0);
          /*  r= unrobust correlation */
        }
        /*  Spearman's rho and Kendall's tau and tetracoric correlation */
        /*  are discrete-valued statistics, and */
        /*  their distributions have positive probability at 1 and -1. */
        /*  If their value is equal to 1 or -1 then artificially put the value
         * equal */
        /*  to 0.999 or -0.999 */
        if (Tx == 1.0) {
          Tx = 0.999;
        } else if (Tx == -1.0) {
          Tx = -0.999;
        }
        /*  Now we calculate Mahalanobis distances with centroid defined */
        /*  by medians */
        a = 2.0 * Tx;
        mady = Tx * Tx;
        /*  Create the vector of pseudoMahalanobis distances (based on the sum
         */
        /*  of each bivariate projection) */
        k = yrank->size[0];
        yrank->size[0] = Xs->size[0];
        emxEnsureCapacity_real_T(yrank, k);
        nx = Xs->size[0];
        for (k = 0; k < nx; k++) {
          yrank->data[k] = Xs->data[k] * Xs->data[k];
        }
        k = xrank->size[0];
        xrank->size[0] = Ys->size[0];
        emxEnsureCapacity_real_T(xrank, k);
        nx = Ys->size[0];
        for (k = 0; k < nx; k++) {
          xrank->data[k] = Ys->data[k] * Ys->data[k];
        }
        nx = yrank->size[0];
        for (k = 0; k < nx; k++) {
          yrank->data[k] = ((yrank->data[k] + xrank->data[k]) -
                            a * Xs->data[k] * Ys->data[k]) /
                           (1.0 - mady);
        }
        nx = yrank->size[0];
        for (k = 0; k < nx; k++) {
          yrank->data[k] = sqrt(yrank->data[k]);
        }
        nx = MDbiv->size[0];
        for (k = 0; k < nx; k++) {
          MDbiv->data[k] += yrank->data[k];
        }
        /*   Em  is the median  of vector E */
        mady = sqrt(2.0 * ((double)n - 1.0) / ((double)n - 2.0) *
                    finv(rf, (double)n - 2.0));
        /*  hinge=ellipse containing 50% of the values */
        /*  fence=ellipe containing (1-\alpha)% of the values */
        a = mady * sqrt((Tx + 1.0) / 2.0);
        uq = mady * sqrt((1.0 - Tx) / 2.0);
        for (k = 0; k < 3601; k++) {
          The1max[k] = a * dv[k];
          The2max[k] = uq * dv1[k];
        }
        /*  rotation of the coordinates */
        a = 1.0 / (mady * mady * (1.0 - Tx * Tx));
        mady = -Tx * a;
        rr[0] = a;
        rr[2] = mady;
        rr[1] = mady;
        rr[3] = a;
        eig(rr, aut);
        b_sort(aut);
        Tx = a - aut[1].re;
        a_im_tmp_tmp = Tx * (0.0 - aut[1].im);
        Tx = (Tx * Tx - (0.0 - aut[1].im) * (0.0 - aut[1].im)) + mady * mady;
        b_a.re = Tx;
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
          uq = fabs(b_a.im);
          if (brm > uq) {
            s = b_a.im / b_a.re;
            brm = b_a.re + s * b_a.im;
            costh_re = (mady + s * 0.0) / brm;
            costh_im = (0.0 - s * mady) / brm;
          } else if (uq == brm) {
            if (b_a.re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (b_a.im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            costh_re = (mady * sgnbr + 0.0 * s) / brm;
            costh_im = (0.0 * sgnbr - mady * s) / brm;
          } else {
            s = b_a.re / b_a.im;
            brm = b_a.im + s * b_a.re;
            costh_re = s * mady / brm;
            costh_im = (s * 0.0 - mady) / brm;
          }
        }
        b_a.re = Tx;
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
          uq = fabs(b_a.im);
          if (brm > uq) {
            s = b_a.im / b_a.re;
            brm = b_a.re + s * b_a.im;
            sinth.re = (mady + s * aut[1].im) / brm;
            sinth.im = (aut[1].im - s * mady) / brm;
          } else if (uq == brm) {
            if (b_a.re > 0.0) {
              sgnbr = 0.5;
            } else {
              sgnbr = -0.5;
            }
            if (b_a.im > 0.0) {
              s = 0.5;
            } else {
              s = -0.5;
            }
            sinth.re = (mady * sgnbr + aut[1].im * s) / brm;
            sinth.im = (aut[1].im * sgnbr - mady * s) / brm;
          } else {
            s = b_a.re / b_a.im;
            brm = b_a.im + s * b_a.re;
            sinth.re = (s * mady + aut[1].im) / brm;
            sinth.im = (s * aut[1].im - mady) / brm;
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
          Tx = 1.0 / aut[0].re;
          a = 0.0;
        } else if (aut[0].re == 0.0) {
          Tx = 0.0;
          a = -(1.0 / aut[0].im);
        } else {
          brm = fabs(aut[0].re);
          uq = fabs(aut[0].im);
          if (brm > uq) {
            s = aut[0].im / aut[0].re;
            brm = aut[0].re + s * aut[0].im;
            Tx = (s * 0.0 + 1.0) / brm;
            a = (0.0 - s) / brm;
          } else if (uq == brm) {
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
            Tx = (sgnbr + 0.0 * s) / brm;
            a = (0.0 * sgnbr - s) / brm;
          } else {
            s = aut[0].re / aut[0].im;
            brm = aut[0].im + s * aut[0].re;
            Tx = s / brm;
            a = (s * 0.0 - 1.0) / brm;
          }
        }
        if (aut[1].im == 0.0) {
          uq = 1.0 / aut[1].re;
          mady = 0.0;
        } else if (aut[1].re == 0.0) {
          uq = 0.0;
          mady = -(1.0 / aut[1].im);
        } else {
          brm = fabs(aut[1].re);
          uq = fabs(aut[1].im);
          if (brm > uq) {
            s = aut[1].im / aut[1].re;
            brm = aut[1].re + s * aut[1].im;
            uq = (s * 0.0 + 1.0) / brm;
            mady = (0.0 - s) / brm;
          } else if (uq == brm) {
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
            uq = (sgnbr + 0.0 * s) / brm;
            mady = (0.0 * sgnbr - s) / brm;
          } else {
            s = aut[1].re / aut[1].im;
            brm = aut[1].im + s * aut[1].re;
            uq = s / brm;
            mady = (s * 0.0 - 1.0) / brm;
          }
        }
        fuo = sqrt(rt_hypotd_snf(Tx - uq, a - mady));
        /*  new1 = 2 x n matrix which contains the coordinates of the rotated
         * ellipse */
        for (k = 0; k < 3601; k++) {
          j = k << 1;
          sgnbr = The1max[k];
          mady = The2max[k];
          b_The1max[j].re = sgnbr + mady;
          b_The1max[j].im = 0.0;
          b_The1max[j + 1].re = sgnbr - mady;
          b_The1max[j + 1].im = 0.0;
        }
        for (k = 0; k < 2; k++) {
          sgnbr = M[k].re;
          mady = M[k].im;
          uq = M[k + 2].re;
          Tx = M[k + 2].im;
          for (j = 0; j < 3601; j++) {
            nx = j << 1;
            boffset = k + nx;
            s = b_The1max[nx].re;
            brm = b_The1max[nx].im;
            a = b_The1max[nx + 1].re;
            a_im_tmp_tmp = b_The1max[nx + 1].im;
            new1[boffset].re =
                (sgnbr * s - mady * brm) + (uq * a - Tx * a_im_tmp_tmp);
            new1[boffset].im =
                (sgnbr * brm + mady * s) + (uq * a_im_tmp_tmp + Tx * a);
          }
        }
        /*  xnew = n x 1 vector which contains x coord. of rotated points */
        /*  ynew = n x 1 vector which contains y coord. of rotated points */
        for (k = 0; k < 3601; k++) {
          j = k << 1;
          xnew[k].re = new1[j].re;
          xnew[k].im = -new1[j].im;
          ynew[k].re = new1[j + 1].re;
          ynew[k].im = -new1[j + 1].im;
        }
        /*  new2 = 2 x n matrix which contains the coordinates of the rotated
         * points */
        k = b_Xs->size[0] * b_Xs->size[1];
        b_Xs->size[0] = 2;
        b_Xs->size[1] = Xs->size[0];
        emxEnsureCapacity_creal_T(b_Xs, k);
        nx = Xs->size[0];
        for (k = 0; k < nx; k++) {
          b_Xs->data[2 * k].re = Xs->data[k];
          b_Xs->data[2 * k].im = 0.0;
        }
        nx = Ys->size[0];
        for (k = 0; k < nx; k++) {
          j = 2 * k + 1;
          b_Xs->data[j].re = Ys->data[k];
          b_Xs->data[j].im = 0.0;
        }
        k = new2->size[0] * new2->size[1];
        new2->size[0] = 2;
        new2->size[1] = b_Xs->size[1];
        emxEnsureCapacity_creal_T(new2, k);
        nx = b_Xs->size[1];
        for (k = 0; k < 2; k++) {
          for (j = 0; j < nx; j++) {
            sgnbr = M[k].re;
            mady = M[k].im;
            uq = M[k + 2].re;
            Tx = M[k + 2].im;
            boffset = 2 * j + 1;
            coffset = k + 2 * j;
            new2->data[coffset].re =
                (sgnbr * b_Xs->data[2 * j].re - mady * b_Xs->data[2 * j].im) +
                (uq * b_Xs->data[boffset].re - Tx * b_Xs->data[boffset].im);
            new2->data[coffset].im =
                (sgnbr * b_Xs->data[2 * j].im + mady * b_Xs->data[2 * j].re) +
                (uq * b_Xs->data[boffset].im + Tx * b_Xs->data[boffset].re);
          }
        }
        /*  ch is the fixed distance of each point lying on the ellipse */
        sinth.re = ynew[9].re * ynew[9].re - ynew[9].im * ynew[9].im;
        mady = ynew[9].re * ynew[9].im;
        sinth.im = mady + mady;
        b_a.re = xnew[9].re + fuo;
        costh_re = xnew[9].re - fuo;
        mady = xnew[9].im * xnew[9].im;
        uq = b_a.re * b_a.re - mady;
        Tx = b_a.re * xnew[9].im;
        b_a.re = uq + sinth.re;
        b_a.im = (Tx + Tx) + sinth.im;
        b_sqrt(&b_a);
        uq = costh_re * xnew[9].im;
        sinth.re += costh_re * costh_re - mady;
        sinth.im += uq + uq;
        b_sqrt(&sinth);
        mady = b_a.re + sinth.re;
        /*  biv is the 1 x n vector which contains potential bivariate outliers
         */
        k = biv->size[0] * biv->size[1];
        biv->size[0] = 1;
        biv->size[1] = n;
        emxEnsureCapacity_real_T(biv, k);
        for (k = 0; k < n; k++) {
          biv->data[k] = 0.0;
        }
        for (coffset = 0; coffset < n; coffset++) {
          b_a.re = new2->data[2 * coffset].re + fuo;
          b_a.im = new2->data[2 * coffset].im;
          costh_re = new2->data[2 * coffset].re - fuo;
          costh_im = new2->data[2 * coffset].im;
          uq = b_a.re * b_a.re - b_a.im * b_a.im;
          Tx = b_a.re * b_a.im;
          nx = 2 * coffset + 1;
          s = new2->data[nx].re * new2->data[nx].re -
              new2->data[nx].im * new2->data[nx].im;
          brm = new2->data[nx].re * new2->data[nx].im;
          brm += brm;
          b_a.re = uq + s;
          b_a.im = (Tx + Tx) + brm;
          b_sqrt(&b_a);
          uq = costh_re * costh_im;
          sinth.re = (costh_re * costh_re - costh_im * costh_im) + s;
          sinth.im = (uq + uq) + brm;
          b_sqrt(&sinth);
          if (b_a.re + sinth.re > mady) {
            biv->data[coffset]++;
          }
        }
        /*  bivT contains cumulative distribution of bivariate outliers */
        nx = bivT->size[0];
        for (k = 0; k < nx; k++) {
          bivT->data[k] += biv->data[k];
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
  emxFree_uint8_T(&r3);
  emxFree_int32_T(&jj);
  emxFree_int32_T(&ii);
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

/* End of code generation (unibiv_wrapper.c) */
