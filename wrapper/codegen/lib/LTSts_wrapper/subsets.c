/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * subsets.c
 *
 * Code generation for function 'subsets'
 *
 */

/* Include files */
#include "subsets.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "bc.h"
#include "combsFS.h"
#include "find.h"
#include "randperm.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
void subsets(double nsamp_data[], const int nsamp_size[2], double n, double p,
             double ncomb, emxArray_real_T *C, double *nselected)
{
  emxArray_boolean_T pascalM_data;
  emxArray_boolean_T *b_pas_col;
  emxArray_real_T *A;
  emxArray_real_T *b_seq;
  emxArray_real_T *pas_col;
  emxArray_real_T *pascalM;
  emxArray_real_T *s;
  emxArray_real_T *seq;
  emxArray_real_T *y;
  double N_kk;
  double b_kk;
  double plusminus1;
  int aoffset;
  int b_i;
  int coffset;
  int i;
  int i1;
  int inner;
  int j;
  int kk;
  int loop_ub;
  int loop_ub_tmp;
  int nc;
  int pascalM_size;
  bool b_pascalM_data[20000];
  bool x_data[2];
  bool exitg1;
  bool usepascal;
  /* subsets creates a matrix of indexes where rows are distinct p-subsets
   * extracted from a set of n elements */
  /*  */
  /* <a href="matlab: docsearchFS('subsets')">Link to the help function</a> */
  /*  */
  /*   Required input arguments: */
  /*  */
  /*        nsamp : Number of subsamples which have to be extracted. Scalar; */
  /*                if nsamp=0 all subsets will be extracted; they will be (n */
  /*                choose p). */
  /*                Data Types - single|double */
  /*  */
  /*          n   : Number of observations of the dataset. Scalar. */
  /*                Data Types - single|double */
  /*  */
  /*          p   : Size of the subsets. Scalar. In regression with p */
  /*                explanatory variable the size of the elmental subsets is p;
   */
  /*                in multivariate analysis, in presence of v variables, */
  /*                the size of the elemental subsets is v+1. */
  /*                Data Types - single|double */
  /*  */
  /*   Optional input arguments: */
  /*  */
  /*        ncomb : scalar (n choose p). If the user has already computed this
   */
  /*                value it can supply it directly, otherwise the program will
   */
  /*                calculate it automatically. */
  /*                Example - C=subsets(20,10,3,120) */
  /*                Data Types - single|double */
  /*  */
  /*         msg  : scalar which controls whether to display or not messages */
  /*                on the screen. If msg=true (default), messages are displayed
   */
  /*                on the screen about estimated time. */
  /*                Example - C=subsets(20,10,3,120,0) */
  /*                Data Types - boolean */
  /*  */
  /*    method : Sampling methods. Scalar or vector. */
  /*             Methods used to extract the subsets. See section 'More About'
   */
  /*             of function randsampleFS.m for details about the sampling */
  /*             methods. Default is method = 1. */
  /*             - Scalar, from 0 to 3 determining the (random sample without */
  /*             replacement) method to be used. */
  /*             - Vector of weights: in such a case, Weighted Sampling Without
   */
  /*               Replacement is applied using that vector of weights. */
  /*             Example - randsampleFS(100,10,2) */
  /*             Data Types - single|double */
  /*  */
  /*  */
  /*   Output: */
  /*  */
  /*  */
  /*            C : The indices of the subsets which need to be extracted. */
  /*                Matrix with nselected rows and p columns (stored in int16
   * format). */
  /*                Data Types - single|double */
  /*  */
  /*    nselected : Number of rows of matrix C. Scalar. */
  /*                Data Types - single|double */
  /*  */
  /*  */
  /*  See also randsampleFS.m, lexunrank.m, bc.m */
  /*  */
  /*  References: */
  /*        See references in randsampleFS.m, lexunrank.m and bc.m. See also,
   * for */
  /*        weighted sampling, Pavlos S. Efraimidis, Paul G. Spirakis, Weighted
   */
  /*        random sampling with a reservoir, Information Processing Letters,
   * Volume */
  /*        97, Issue 5, 16 March 2006, Pages 181-185. */
  /*  */
  /*        Wong, C.K. and M.C. Easton (1980) "An Efficient Method for Weighted
   */
  /*        Sampling Without Replacement", SIAM Journal of Computing, */
  /*        9(1):111-113. */
  /*  */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /*  */
  /* <a href="matlab: docsearchFS('subsets')">Link to the help function</a> */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
  /*  */
  /*  Examples: */
  /*  */
  /* { */
  /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3. */
  /*        % Only default arguments used. */
  /*        C = subsets(5,100,3) */
  /* } */
  /* { */
  /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3. */
  /*        % Use information on the number of combinations to speed up
   * generation. */
  /*         ncomb = bc(100,3); */
  /*         C = subsets(5,100,3,ncomb) */
  /* } */
  /* { */
  /*        %% Create a matrix with the indexes of 5 subsets when n=100, p=3. */
  /*        % Also inform about the time taken for the operation. */
  /*         */
  /*        ncomb = bc(1000,5); */
  /*        C = subsets(500000,1000,5,ncomb,1); */
  /* } */
  /* { */
  /*        % Create a matrix with the indexes of 5 subsets when n=100, p=3. */
  /*        % As the previous example, but in addition returns in nselected the
   */
  /*        % number of combinations. */
  /*         */
  /*        ncomb = bc(1000,5); */
  /*        [C , nselected] = subsets(500000,1000,5,ncomb,1); */
  /* } */
  /* { */
  /*         % Extract 80000 subsets and check they are unique. */
  /*          */
  /*         C=subsets(80000,100,5); */
  /*         size(unique(C,'rows')) */
  /* } */
  /* { */
  /*     %% Sampling without replacement and the hypergeometric distribution. */
  /*  */
  /*     clear all; close all; */
  /*  */
  /*     % parameters */
  /*     n      = 100; */
  /*     p      = 3; */
  /*     nsamp  = 1000000; */
  /*     ncomb  = bc(n,p); */
  /*     msg    = 0; */
  /*      */
  /*     % Sampling without repetition nsamp p-subsets from a dataset of n
   * units. */
  /* 	C = subsets(nsamp, n, p, ncomb, msg); */
  /*     if verLessThan('matlab','8.4') */
  /*         hist(double(C(:))); xlim([1 n]); */
  /*     else */
  /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
   * xlim([1 n]); */
  /*         % this superimposes a line with the unit counts */
  /*         frC = tabulateFS(double(C(:))); */
  /*         hold on; plot(1:n,frC(:,3)/100,'r-','LineWidth',3); */
  /*     end */
  /*  */
  /*  */
  /*     % The hypergeometric distribution hygepdf(X,M,K,N) computes the
   * probability */
  /*     % of drawing exactly X of a possible K items in N drawings without */
  /*     % replacement from a group of M objects. For drawings with replacement,
   */
  /*     % the distribution would be binomial. */
  /*     hpdf = hygepdf(0:p,n,n/2,p); */
  /*  */
  /*     % Say that the n/2 target items (which determine the success of a draw)
   * are */
  /*     % in the subset formed by units 1,2,...n/2. Let's then count how many
   * times */
  /*     % we get units from this group. */
  /*     c   = C<=n/2; */
  /*     sc  = sum(c,2); */
  /*     tab = tabulateFS(sc); */
  /*     tab = (tab(:,2)/sum(tab(:,2)))'; */
  /*  */
  /*     disp('Probability of getting 0 to p successes in p drawns
   * (hypergeometric pdf):'); */
  /*     disp(hpdf); */
  /*     disp('Frequencies of the 0 to p successes in the p drawns (subsets
   * output):'); */
  /*     disp(tab); */
  /*  */
  /* } */
  /* { */
  /*     %% Weighted sampling without replacement and the non-central Wallenius
   * hypergeometric distribution. */
  /*  */
  /*     clear all; close all; */
  /*  */
  /*     % parameters */
  /*     n      = 500; */
  /*     p      = 3; */
  /*     nsamp  = 50000; */
  /*     ncomb  = bc(n,p); */
  /*     msg    = 0; */
  /*  */
  /*     % Sampling probability of the first n/2 units is 10 times larger than
   * the others n/2. */
  /*     method = [10*ones(n/2,1); ones(n/2,1)]; */
  /*     % no need to normalize weights: method = method(:)' / sum(method); */
  /*  */
  /* 	C = subsets(nsamp, n, p, ncomb, msg, method); */
  /*  */
  /*     if verLessThan('matlab','8.4') */
  /*         hist(double(C(:))); xlim([1 n]); */
  /*     else */
  /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
   */
  /*     end */
  /*  */
  /*     % Here we address the case when the sampling (without replacement) is
   * biased, */
  /*     % in the sense that the probabilities to select the units in the sample
   * are */
  /*     % proportional to weights provided using option 'method'. In this case,
   * the */
  /*     % extraction probabilities follow Wallenius' noncentral hypergeometric
   */
  /*     % distribution. The sampling scheme is the same of that of the
   * hypergeometric */
  /*     % distribution but, in addition, the success and failure are associated
   * with */
  /*     % weights w1 and w2 and we will say that the odds ratio is W = w1 / w2.
   * The */
  /*     % function is then called as: wpdf = WNChygepdf(x,N,K,M,W). */
  /*  */
  /*     for i = 0:p */
  /*         wpdf(i+1) = WNChygepdf(i,p,n/2,n,10); */
  /*     end */
  /*  */
  /*     % counts of the actual samples */
  /*     c   = C<=n/2; */
  /*     sc  = sum(c,2); */
  /*     tab = tabulateFS(sc); */
  /*     tab = (tab(:,2)/sum(tab(:,2)))'; */
  /*  */
  /*     disp('Probability of getting 0 to p successes in p weighted drawns
   * (non-central hypergeometric pdf):'); */
  /*     disp(wpdf); */
  /*     disp('Frequencies of the 0 to p successes in the p weighted drawns
   * (subsets output):'); */
  /*     disp(tab); */
  /*      */
  /*     % The non-central hypergeometric is also available in the R package */
  /*     % BiasedUrn. In the example above, where there are just two groups and
   * one */
  /*     % weight defining the ratio between the units in the two groups, the
   * function */
  /*     % to use is dWNCHypergeo (for Wallenius' distribution): */
  /*     % */
  /*     % dWNCHypergeo(c(0,1,2,3), 50, 50, 3, 10) */
  /*     % [1] 0.0007107089 0.0225823308 0.2296133830 0.7470935773 */
  /*     % */
  /*     % The general syntax of the function is: */
  /*     % dWNCHypergeo(x, m1, m2, n, odds) */
  /*     % x  = Number of red balls sampled. */
  /*     % m1 = Initial number of red balls in the urn. */
  /*     % m2 = Initial number of white balls in the urn. */
  /*     % n  = Total number of balls sampled. */
  /*     % N  = Total number of balls in urn before sampling. */
  /*     % odds = Probability ratio of red over white balls. */
  /*     % p = Cumulative probability. */
  /*     % nran = Number of random variates to generate. */
  /*     % mu = Mean x. */
  /*     % precision = Desired precision of calculation. */
  /*  */
  /* } */
  /* { */
  /*     % Weighted sampling without replacement, with negative weights. */
  /*  */
  /*     clear all; close all; */
  /*  */
  /*     n = 200; */
  /*     p = 3; */
  /*     nsamp = 10000; */
  /*     ncomb = bc(n,p); */
  /*     msg = 0; */
  /*     method = [-4*ones(n/4,1); -2*ones(n/4,1) ; -1*ones(n/4,1);
   * -4*ones(n/4,1)]; */
  /*     C = subsets(nsamp, n, p, ncomb, msg, method); */
  /*     if verLessThan('matlab','8.4') */
  /*         hist(double(C(:))); xlim([1 n]); */
  /*     else */
  /*         histogram(double(C(:)),'Normalization','pdf','BinMethod','Integers');
   */
  /*     end */
  /* } */
  /* { */
  /*     %% Function subset used in clustering or mixture modeling simulations.
   */
  /*  */
  /*     clear all; close all; */
  /*  */
  /*     % parameters */
  /*     n      = 100;       %number of units */
  /*     p      = 2;         %number of variables */
  /*     k      = 3;         %number of groups */
  /*     nsamp  = 500;       %number of samples */
  /*     ncomb  = bc(n,p); */
  /*     msg    = 0; */
  /*  */
  /*     % A dataset simulated using MixSim */
  /*     rng(372,'twister'); */
  /*     Q=MixSimreg(k,p,'BarOmega',0.001); */
  /*     [y,X,id]=simdatasetreg(n,Q.Pi,Q.Beta,Q.S,Q.Xdistrib); */
  /*  */
  /*     % Some user-defined weights for weighted sampling, provided as a vector
   * of "method" option. */
  /*     method = [1*ones(n/2,1); ones(n/2,1)]; */
  /*  */
  /*     % C must be a nsamp-by-k*p matrix, to contain the extraction of nsamp
   * p-combinations k times. */
  /*     % This can be easily done as follows: */
  /*     for i=1:k */
  /*         Ck(:,(i-1)*p+1:i*p) = subsets(nsamp, n, p, ncomb, msg, method); */
  /*     end */
  /*  */
  /*     % Ck is then provided, e.g., to tclustreg as follows: */
  /*     out=tclustreg(y,X,k,50,0.01,0.01,'nsamp',Ck); */
  /* } */
  /*  Beginning of code */
  /*  We cache the MATLAB memory information for better performance. */
  emxInit_real_T(&seq, 2);
  if (rtIsNaN(n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(seq, i);
    seq->data[0] = rtNaN;
  } else if (n < 1.0) {
    seq->size[0] = 1;
    seq->size[1] = 0;
  } else if (rtIsInf(n) && (1.0 == n)) {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    seq->size[1] = 1;
    emxEnsureCapacity_real_T(seq, i);
    seq->data[0] = rtNaN;
  } else {
    i = seq->size[0] * seq->size[1];
    seq->size[0] = 1;
    loop_ub = (int)floor(n - 1.0);
    seq->size[1] = loop_ub + 1;
    emxEnsureCapacity_real_T(seq, i);
    for (i = 0; i <= loop_ub; i++) {
      seq->data[i] = (double)i + 1.0;
    }
  }
  loop_ub_tmp = nsamp_size[0] * nsamp_size[1];
  for (i = 0; i < loop_ub_tmp; i++) {
    x_data[i] = (ncomb < nsamp_data[i]);
  }
  usepascal = ((nsamp_size[0] != 0) && (nsamp_size[1] != 0));
  if (usepascal) {
    loop_ub = 0;
    exitg1 = false;
    while ((!exitg1) && (loop_ub <= loop_ub_tmp - 1)) {
      if (!x_data[loop_ub]) {
        usepascal = false;
        exitg1 = true;
      } else {
        loop_ub++;
      }
    }
  }
  if (usepascal) {
    nsamp_data[0] = 0.0;
  }
  /*  this check is used in combination of randsampleFS, for computational */
  /*  efficiency */
  /*  Combinatorial part to extract the subsamples */
  /*  Key combinatorial variables used: */
  /*  C = matrix containing the indexes of the p-subsets. */
  /*  nselected = size(C,1), number of p-subsets to be selected. */
  /*  rndsi = vector of nselected indexes, randomly chosen between 1 e ncomb. */
  /*  Constants that determine the method used to extract the p-subsets */
  emxInit_real_T(&pascalM, 2);
  emxInit_real_T(&s, 2);
  emxInit_real_T(&pas_col, 1);
  emxInit_real_T(&b_seq, 1);
  emxInit_real_T(&y, 2);
  emxInit_real_T(&A, 2);
  emxInit_boolean_T(&b_pas_col, 1);
  if ((nsamp_data[0] == 0.0) || (ncomb <= 5.0E+7)) {
    if (nsamp_data[0] == 0.0) {
      *nselected = ncomb;
    } else {
      *nselected = nsamp_data[0];
    }
    /*  If nsamp = 0 matrix C contains the indexes of all possible subsets */
    combsFS(seq, p, C);
    /*  If nsamp is > 0 just select randomly ncomb rows from matrix C */
    if (nsamp_data[0] > 0.0) {
      /*  Extract without replacement nsamp elements from ncomb */
      /* randsampleFS generates a random sample of k elements from the integers
       * 1 to n (k<=n) */
      /*  */
      /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
       * function</a> */
      /*  */
      /*   Required input arguments: */
      /*  */
      /*        n : A vector of numbers will be selected from the integers 1 to
       * n. */
      /*            Scalar, a positive integer. */
      /*            Data Types - single|double */
      /*  */
      /*       k  : The number of elements to be selected. Non negative integer.
       */
      /*            Data Types - single|double */
      /*  */
      /*   Optional input arguments: */
      /*  */
      /*    method : Sampling methods. Scalar or vector. */
      /*             Methods used to extract the subsets. See more about for
       * details. */
      /*             Default is method = 0. */
      /*             - Scalar from 0 to 3 determining the method used to extract
       */
      /*              (without replacement) the random sample. */
      /*             - Vector of weights: in such a case, a weighted sampling
       * without */
      /*               replacement algorithm is applied using that vector of
       * weights. */
      /*             Example - randsampleFS(100,10,2) */
      /*             Data Types - single|double */
      /*  */
      /*  */
      /*    Output: */
      /*  */
      /*    y :     A column vector of k values sampled at random from the
       * integers 1:n. */
      /*            For methods 0, 1, 2 and weighted sampling the elements
       * extracted */
      /*            are unique; For method 3 (included for historical reasons)
       * there is */
      /*            no guarantee that the elements extracted are unique. */
      /*            Data Types - single|double. */
      /*  */
      /*  More About: */
      /*  */
      /*    The method=0 uses MATLAB function randperm. In old MATLAB releases
       */
      /*    randperm was slower than FSDA function shuffling, which is used in
       */
      /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
       * least */
      /*    50% slower). */
      /*  */
      /*    If method=1 the approach depends on the population and sample sizes:
       */
      /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the population
       * is */
      /*      relatively small and the desired sample is small compared to the
       */
      /*      population, we repeatedly sample with replacement until there are
       * k */
      /*      unique values; */
      /*    - otherwise, we do a random permutation of the population and return
       */
      /*      the first k elements. */
      /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
       * simulation */
      /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
      /*  */
      /*    If method=2 systematic sampling is used, where the starting point is
       */
      /*    random and the step is also random. */
      /*  */
      /*    If method=3 random sampling is based on the old but well known
       * Linear */
      /*    Congruential Generator (LCG) method. In this case there is no
       * guarantee */
      /*    to get unique numbers. The method is included for historical
       * reasons. */
      /*  */
      /*    If method is a vector of n weights, then Weighted Sampling Without
       */
      /*    Replacement is applied. Our implementation follows Efraimidis and */
      /*    Spirakis (2006). MATLAB function datasample follows Wong and  Easton
       */
      /*    (1980), which is also quite fast; note however that function
       * datasample */
      /*    may be very slow if applied repetedly, for the large amount of time
       */
      /*    spent on options checking. */
      /*  */
      /*    Remark on computation performances. Method=2 (systematic sampling)
       * is */
      /*    by far the fastest for any practical population size $n$. For
       * example, */
      /*    for $n \approx 10^6$ method=2 is two orders of magniture faster than
       */
      /*    method=1. With recent MATLAB releases (after R2011b) method = 0
       * (which */
      /*    uses compiled MATLAB function randperm) has comparable performances,
       * at */
      /*    least for reasonably small $k$. In releases before 2012a, randperm
       * was */
      /*    considerably slow. */
      /*  */
      /*  See also: randsample, datasample, shuffling */
      /*  */
      /*  References: */
      /*  */
      /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
      /*  for biological, agricultural and medical research (3rd ed.)", */
      /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
      /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley. [For
       */
      /*  Method 2] */
      /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
      /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp. 10-26.
       * [For */
      /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
       * Method] */
      /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random sampling
       * with */
      /*  a reservoir, "Information Processing Letters", Vol. 97, pp. 181-185.
       * [For */
      /*  Weighted Sampling Without Replacement] */
      /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for Weighted
       */
      /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9, pp.
       * 111-113. */
      /*  */
      /*  Copyright 2008-2021. */
      /*  Written by FSDA team */
      /*  */
      /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
       * function</a> */
      /*  */
      /*  */
      /* $LastChangedDate::                      $: Date of the last commit */
      /*  */
      /*  Examples: */
      /* { */
      /*     %% randsampleFS with default options. */
      /*     % default method (1) is used. */
      /*     randsampleFS(1000,10) */
      /* } */
      /* { */
      /*     %% randsampleFS with optional argument set to method (2). */
      /*     method = 2; */
      /*     randsampleFS(100,10,method) */
      /* } */
      /* { */
      /*     % randsampleFS with optional arguments set to method (3). */
      /*     method = 3; */
      /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
       * repetitions. */
      /*     randsampleFS(100,10,method) */
      /* } */
      /* { */
      /*     % randsampleFS Weighted Sampling Without Replacement. */
      /*     % Extract k=10 number in [-1000 -900] with gamma distributed
       * weights. */
      /*      population = -1000:1:-900; */
      /*      n = numel(population); */
      /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
      /*  */
      /*      k=10; */
      /*      y = randsampleFS(n,k,wgts); */
      /*      sample  = population(y); */
      /*       */
      /*      plot(wgts,'.r') */
      /*      hold on; */
      /*      text(y,wgts(y),'X'); */
      /*      title('Weight distribution with the extracted numbers
       * superimposed') */
      /* } */
      /*  Beginning of code */
      /*  randsampleFS needs to check the MATLAB version in use in order to: */
      /*  - decide the sampling method to use, and */
      /*  - use properly the optional parameter of randperm. */
      /*  In the first case  the release to check is R2012a, i.e. 7.14 */
      /*  In the second case the release to check is R2011b, i.e. 7.13 */
      /*  For the sake of computational efficiency, we just check the latest */
      /*  To pass the argument, use: */
      /*  after2012a = ~verLessThan('MATLAB','7.14'); */
      /*  choose the default sampling method */
      /*  Weighted Sampling Without Replacement */
      /*  This is done if the third argument is provided as a vector of weights.
       */
      /*  Extract a random sample of k integers between 1 and n. */
      randperm(ncomb, nsamp_data[0], seq);
      /*  METHOD: it was set to 2 */
      coffset = C->size[1] - 1;
      i = pascalM->size[0] * pascalM->size[1];
      pascalM->size[0] = seq->size[1];
      pascalM->size[1] = C->size[1];
      emxEnsureCapacity_real_T(pascalM, i);
      for (i = 0; i <= coffset; i++) {
        loop_ub = seq->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          pascalM->data[i1 + pascalM->size[0] * i] =
              C->data[((int)seq->data[i1] + C->size[0] * i) - 1];
        }
      }
      i = C->size[0] * C->size[1];
      C->size[0] = pascalM->size[0];
      C->size[1] = pascalM->size[1];
      emxEnsureCapacity_real_T(C, i);
      loop_ub = pascalM->size[0] * pascalM->size[1];
      for (i = 0; i < loop_ub; i++) {
        C->data[i] = pascalM->data[i];
      }
    }
  } else {
    *nselected = nsamp_data[0];
    /*  usepascal: flag used to decide whether to use the Pascal triangle */
    /*  tric, which allows to reduce considerably the computation time */
    usepascal = true;
    if ((ncomb > 5.0E+7) && (ncomb < 1.0E+8)) {
      /*  Extract without replacement nsamp elements from ncomb */
      /* randsampleFS generates a random sample of k elements from the integers
       * 1 to n (k<=n) */
      /*  */
      /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
       * function</a> */
      /*  */
      /*   Required input arguments: */
      /*  */
      /*        n : A vector of numbers will be selected from the integers 1 to
       * n. */
      /*            Scalar, a positive integer. */
      /*            Data Types - single|double */
      /*  */
      /*       k  : The number of elements to be selected. Non negative integer.
       */
      /*            Data Types - single|double */
      /*  */
      /*   Optional input arguments: */
      /*  */
      /*    method : Sampling methods. Scalar or vector. */
      /*             Methods used to extract the subsets. See more about for
       * details. */
      /*             Default is method = 0. */
      /*             - Scalar from 0 to 3 determining the method used to extract
       */
      /*              (without replacement) the random sample. */
      /*             - Vector of weights: in such a case, a weighted sampling
       * without */
      /*               replacement algorithm is applied using that vector of
       * weights. */
      /*             Example - randsampleFS(100,10,2) */
      /*             Data Types - single|double */
      /*  */
      /*  */
      /*    Output: */
      /*  */
      /*    y :     A column vector of k values sampled at random from the
       * integers 1:n. */
      /*            For methods 0, 1, 2 and weighted sampling the elements
       * extracted */
      /*            are unique; For method 3 (included for historical reasons)
       * there is */
      /*            no guarantee that the elements extracted are unique. */
      /*            Data Types - single|double. */
      /*  */
      /*  More About: */
      /*  */
      /*    The method=0 uses MATLAB function randperm. In old MATLAB releases
       */
      /*    randperm was slower than FSDA function shuffling, which is used in
       */
      /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
       * least */
      /*    50% slower). */
      /*  */
      /*    If method=1 the approach depends on the population and sample sizes:
       */
      /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the population
       * is */
      /*      relatively small and the desired sample is small compared to the
       */
      /*      population, we repeatedly sample with replacement until there are
       * k */
      /*      unique values; */
      /*    - otherwise, we do a random permutation of the population and return
       */
      /*      the first k elements. */
      /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
       * simulation */
      /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
      /*  */
      /*    If method=2 systematic sampling is used, where the starting point is
       */
      /*    random and the step is also random. */
      /*  */
      /*    If method=3 random sampling is based on the old but well known
       * Linear */
      /*    Congruential Generator (LCG) method. In this case there is no
       * guarantee */
      /*    to get unique numbers. The method is included for historical
       * reasons. */
      /*  */
      /*    If method is a vector of n weights, then Weighted Sampling Without
       */
      /*    Replacement is applied. Our implementation follows Efraimidis and */
      /*    Spirakis (2006). MATLAB function datasample follows Wong and  Easton
       */
      /*    (1980), which is also quite fast; note however that function
       * datasample */
      /*    may be very slow if applied repetedly, for the large amount of time
       */
      /*    spent on options checking. */
      /*  */
      /*    Remark on computation performances. Method=2 (systematic sampling)
       * is */
      /*    by far the fastest for any practical population size $n$. For
       * example, */
      /*    for $n \approx 10^6$ method=2 is two orders of magniture faster than
       */
      /*    method=1. With recent MATLAB releases (after R2011b) method = 0
       * (which */
      /*    uses compiled MATLAB function randperm) has comparable performances,
       * at */
      /*    least for reasonably small $k$. In releases before 2012a, randperm
       * was */
      /*    considerably slow. */
      /*  */
      /*  See also: randsample, datasample, shuffling */
      /*  */
      /*  References: */
      /*  */
      /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
      /*  for biological, agricultural and medical research (3rd ed.)", */
      /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
      /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley. [For
       */
      /*  Method 2] */
      /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
      /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp. 10-26.
       * [For */
      /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
       * Method] */
      /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random sampling
       * with */
      /*  a reservoir, "Information Processing Letters", Vol. 97, pp. 181-185.
       * [For */
      /*  Weighted Sampling Without Replacement] */
      /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for Weighted
       */
      /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9, pp.
       * 111-113. */
      /*  */
      /*  Copyright 2008-2021. */
      /*  Written by FSDA team */
      /*  */
      /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
       * function</a> */
      /*  */
      /*  */
      /* $LastChangedDate::                      $: Date of the last commit */
      /*  */
      /*  Examples: */
      /* { */
      /*     %% randsampleFS with default options. */
      /*     % default method (1) is used. */
      /*     randsampleFS(1000,10) */
      /* } */
      /* { */
      /*     %% randsampleFS with optional argument set to method (2). */
      /*     method = 2; */
      /*     randsampleFS(100,10,method) */
      /* } */
      /* { */
      /*     % randsampleFS with optional arguments set to method (3). */
      /*     method = 3; */
      /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
       * repetitions. */
      /*     randsampleFS(100,10,method) */
      /* } */
      /* { */
      /*     % randsampleFS Weighted Sampling Without Replacement. */
      /*     % Extract k=10 number in [-1000 -900] with gamma distributed
       * weights. */
      /*      population = -1000:1:-900; */
      /*      n = numel(population); */
      /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
      /*  */
      /*      k=10; */
      /*      y = randsampleFS(n,k,wgts); */
      /*      sample  = population(y); */
      /*       */
      /*      plot(wgts,'.r') */
      /*      hold on; */
      /*      text(y,wgts(y),'X'); */
      /*      title('Weight distribution with the extracted numbers
       * superimposed') */
      /* } */
      /*  Beginning of code */
      /*  randsampleFS needs to check the MATLAB version in use in order to: */
      /*  - decide the sampling method to use, and */
      /*  - use properly the optional parameter of randperm. */
      /*  In the first case  the release to check is R2012a, i.e. 7.14 */
      /*  In the second case the release to check is R2011b, i.e. 7.13 */
      /*  For the sake of computational efficiency, we just check the latest */
      /*  To pass the argument, use: */
      /*  after2012a = ~verLessThan('MATLAB','7.14'); */
      /*  choose the default sampling method */
      /*  Weighted Sampling Without Replacement */
      /*  This is done if the third argument is provided as a vector of weights.
       */
      /*  Extract a random sample of k integers between 1 and n. */
      randperm(ncomb, nsamp_data[0], seq);
      /*  METHOD: it was set to 2 */
      /*  The Pascal triangle can be used only if there is enough memory. */
      if (n <= 20000.0) {
        coffset = (int)n;
        if ((int)n < 2) {
          i = pascalM->size[0] * pascalM->size[1];
          pascalM->size[0] = (int)n;
          pascalM->size[1] = (int)n;
          emxEnsureCapacity_real_T(pascalM, i);
          loop_ub = (int)n * (int)n;
          for (i = 0; i < loop_ub; i++) {
            pascalM->data[i] = 1.0;
          }
        } else {
          i = pascalM->size[0] * pascalM->size[1];
          pascalM->size[0] = (int)n;
          pascalM->size[1] = (int)n;
          emxEnsureCapacity_real_T(pascalM, i);
          loop_ub = (int)n * (int)n;
          for (i = 0; i < loop_ub; i++) {
            pascalM->data[i] = 0.0;
          }
          for (i = 0; i < coffset; i++) {
            pascalM->data[i] = 1.0;
          }
          plusminus1 = -1.0;
          for (j = 2; j <= coffset; j++) {
            pascalM->data[(j + pascalM->size[0] * (j - 1)) - 1] = plusminus1;
            plusminus1 = -plusminus1;
          }
          if ((int)n > 2) {
            i = (int)n - 1;
            for (j = 2; j <= i; j++) {
              i1 = j + 1;
              for (b_i = i1; b_i <= coffset; b_i++) {
                pascalM->data[(b_i + pascalM->size[0] * (j - 1)) - 1] =
                    pascalM->data[(b_i + pascalM->size[0] * (j - 1)) - 2] -
                    pascalM->data[(b_i + pascalM->size[0] * (j - 2)) - 2];
              }
            }
          }
          loop_ub_tmp = pascalM->size[0];
          inner = pascalM->size[1];
          nc = pascalM->size[0];
          i = A->size[0] * A->size[1];
          A->size[0] = pascalM->size[0];
          A->size[1] = pascalM->size[1];
          emxEnsureCapacity_real_T(A, i);
          loop_ub = pascalM->size[0] * pascalM->size[1];
          for (i = 0; i < loop_ub; i++) {
            A->data[i] = pascalM->data[i];
          }
          i = pascalM->size[0] * pascalM->size[1];
          pascalM->size[0] = loop_ub_tmp;
          pascalM->size[1] = nc;
          emxEnsureCapacity_real_T(pascalM, i);
          for (j = 0; j < nc; j++) {
            coffset = j * loop_ub_tmp;
            for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
              pascalM->data[coffset + b_i] = 0.0;
            }
            for (loop_ub = 0; loop_ub < inner; loop_ub++) {
              aoffset = loop_ub * A->size[0];
              plusminus1 = A->data[loop_ub * A->size[0] + j];
              for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
                i = coffset + b_i;
                pascalM->data[i] += A->data[aoffset + b_i] * plusminus1;
              }
            }
          }
        }
      } else {
        usepascal = false;
        i = pascalM->size[0] * pascalM->size[1];
        pascalM->size[0] = 1;
        pascalM->size[1] = 1;
        emxEnsureCapacity_real_T(pascalM, i);
        pascalM->data[0] = 0.0;
        /*  C coder initialization */
      }
    } else {
      i = seq->size[0] * seq->size[1];
      seq->size[0] = 1;
      seq->size[1] = 1;
      emxEnsureCapacity_real_T(seq, i);
      seq->data[0] = 0.0;
      /*  C coder initialization */
      i = pascalM->size[0] * pascalM->size[1];
      pascalM->size[0] = 1;
      pascalM->size[1] = 1;
      emxEnsureCapacity_real_T(pascalM, i);
      pascalM->data[0] = 0.0;
      /*  C coder initialization */
    }
    /*  Create matrix C which will contain in each row the indexes forming the
     */
    /*  subset which is extracted at step i, where i=1....number of selected */
    /*  subsamples (nselected) */
    i = C->size[0] * C->size[1];
    i1 = (int)nsamp_data[0];
    C->size[0] = i1;
    loop_ub_tmp = (int)p;
    C->size[1] = (int)p;
    emxEnsureCapacity_real_T(C, i);
    for (b_i = 0; b_i < i1; b_i++) {
      if ((ncomb > 5.0E+7) && (ncomb < 1.0E+8)) {
        if (usepascal) {
          N_kk = seq->data[b_i];
          /* lexunrank gives the the $k$-combination of $n$ elements of position
           * $N$ in the lexicographic order of all combinations */
          /*  */
          /* <a href="matlab: docsearchFS('lexunrank')">Link to the help
           * function</a> */
          /*  */
          /*  Required input arguments: */
          /*  */
          /*     n:  Number of elements. A non negative integer > k. */
          /*         Data Types - single|double */
          /*  */
          /*     k:  Items to choose from the set of n elements. A non negative
           * integer. */
          /*         Data Types - single|double */
          /*  */
          /*     N:  Position N in the reverse co-lexicographic order of such */
          /*         combinations. A non negative integer between 0 and
           * bc(n,p)-1. */
          /*         Data Types - single|double */
          /*  */
          /*  Optional input arguments: */
          /*  */
          /*   pascalM:  Pascal matrix.  */
          /*             Matrix. The Pascal matrix as given by the MATLAB
           * function pascal(n). */
          /*            In applications where lexunrank is called many times, it
           * is preferable */
          /*            to compute the Pascal matrix once outside lexunrank, and
           * pass it */
          /*            to lexunrank as optional argument. Otherwise, the
           * required binomial */
          /*            coeffients are computed inside lexunrank using function
           * bc and, when */
          /*            possible, using the traditional recurrent formula. */
          /*            Example - pascal(n) */
          /*            Data Types - single|double */
          /*  */
          /*  Output: */
          /*  */
          /*    kcomb : The $k$-combination of n elements at position */
          /*            N. Vector of length k. The position is relative to a
           * reverse */
          /*            co-lexicographic order of the combinations or,
           * equivalently, of */
          /*            position bc(n,k)-N in the lexicographic order of the
           * same */
          /*            combinations. Data Types - single|double */
          /*  */
          /*    calls : Binomial coefficients. Scalar. The number of binomial */
          /*            coefficients used to compute the $k$-combination. */
          /*            Data Types - single|double */
          /*  */
          /*  More About: */
          /*  */
          /*    REMARKS ON THE INPUT ARGUMENTS. */
          /*  */
          /*    Input checks are intentionally avoided, as lexunrank is supposed
           * to be */
          /*    called many times, for sampling subsets. Thus, please ensure
           * that: */
          /*    - k < n; */
          /*    - N is an integer between 0 and bc(n,p)-1. */
          /*    It is possible to enable checks, by changing an internal "if"
           * statement to 1. */
          /*  */
          /*    REMARKS ON THE OUTPUT ARGUMENTS. */
          /*  */
          /*    As $n$ increases, 'calls' becomes much smaller than 'ncomb'.
           * This means */
          /*    that lexunrank(n,k,N) is extremely convenient if you are
           * interested in */
          /*    one or several, but not all, $k$-combinations at given
           * generation */
          /*    order(s) N. */
          /*  */
          /*    To generate all combinations in lexicographic order, it is more
           */
          /*    convenient using the FSDA function combsFS. The MATLAB function
           */
          /*    with the same purpose, nchoosek(1:4,3), is much less efficient.
           */
          /*  */
          /*    ON THE LEXICOGRAPHIC ORDERING. */
          /*  */
          /*    lexunrank(n,k,N) gives the $k$-combination of n elements of
           * position N */
          /*    in the reverse co-lexicographic order of such combinations or,
           */
          /*    equivalently, of position bc(n,k)-N in the lexicographic order
           * of the */
          /*    same combinations. */
          /*     */
          /*    Note that, in this implementation of the lexicographic unrank, N
           * ranges */
          /*    over the integers between 0 and bc(n,k)-1. For details see the
           */
          /*    "combinatorial number system" discussed by Knuth (2005), pp.
           * 5-6. */
          /*  */
          /*    To clarify with an example the meaning of the different orders,
           * while */
          /*    the lexicographic order of the 2-combinations of 3 elements are:
           */
          /*     */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            1  &   2  &   3     \\ */
          /*            1  &   2  &   4     \\ */
          /*            1  &   3  &   4     \\ */
          /*            2  &   3  &   4  */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*  */
          /*    the co-lexicographic order of the same combinations are */
          /*     */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            3   &  2  &   1     \\ */
          /*            4   &  2  &   1     \\ */
          /*            4   &  3  &   1     \\ */
          /*            4   &  3  &   2 */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*     */
          /*    and the reverse co-lexicographic order of the original
           * combinations are: */
          /*  */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            4   &  3  &   2     \\ */
          /*            4   &  3  &   1     \\ */
          /*            4   &  2  &   1     \\ */
          /*            3   &  2  &   1      */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*  */
          /*    The reasons for choosing a co-lexicographic unrank is that
           * right-to-left  */
          /*    array filling is much faster and elegant. The reverse is due to
           * a similar  */
          /*    motivation. */
          /*  */
          /*  */
          /*    ALGORITMIC DETAILS. */
          /*  */
          /*  Given the totally ordered set $S=\{1,2,\ldots,n\}$, a
           * $k$-combination is */
          /*  a subset $\{x_1, \ldots, x_k\}$ of $S$. Consider the $n$-lists of
           */
          /*  elements of the set $\{0,1\}$, i.e. the vertices of the hypercube
           * $V_n$. */
          /*  Each $k$-combination $\{x_1,\ldots,x_k\}$ can be associated to the
           */
          /*  $n$-list having a 1 at position $x_1$, \ldots, $x_k$, and a 0
           * elsewhere. */
          /*  */
          /*  Example: */
          /*    2-combinations of $\{1,2,3,4\}$: $\{1,2\}$, $\{1,3\}$,
           * $\{1,4\}$, */
          /*    $\{2,3\}$, $\{2,4\}$, $\{3,4\}$. Corresponding 4-lists of
           * $\{0,1\}$: */
          /*    $1100$,  $1010$,  $1001$,  $0110$, $0101$,  $0011$. */
          /*  */
          /*  The $n$-lists of $\{0,1\}$ containing $k$ times 1, and therefore
           */
          /*  equivalently the $k$-combinations of $n$-elements of $S$, can be
           */
          /*  generated in lexicographic order with an algorithm that builds the
           */
          /*  $k$-list of position $t+1$ using only the $k$-list of position
           * $t$, and */
          /*  which stops without counting the combinations generated. For
           * example, the */
          /*  MATLAB function NCHOOSEK(S,k), where $S$ is the row vector of
           * length $n$ */
          /*  of the elements of $S$, creates in lexicographic order a $k$
           * columns */
          /*  matrix whose rows consist of all possible combinations of the $n$
           */
          /*  elements of $S$ taken $k$ at a time. The number of such
           * combinations, */
          /*  given by the binomial coefficient $n!/((n-k)! k!)$, can be also
           * computed */
          /*  with the function NCHOOSEK by replacing the first argument, the
           * row */
          /*  vector $S$, with the scalar $n$. */
          /*  */
          /*  Unfortunately the binomial coefficient increases rapidly with $n$,
           * which */
          /*  makes the generation of all $k$-combinations computationally hard:
           * with */
          /*  NCHOOSEK the task is impractical even for values just above 15.
           * However, */
          /*  a lexicographic algorithm implements a one-to-one correspondence
           * between */
          /*  the $k$-combinations and the generation order, i.e. the set of
           * numbers $s */
          /*  = 1,\ldots,(n!/((n-k)!k!))$. This fact is used in our function to
           */
          /*  determine the $n$-list corresponding to the $k$-combination
           * $\{x_1, */
          /*  \ldots, x_k\}$ which would be generated by the lexicographic
           * algorithm at */
          /*  a given desired position $N$. This is useful in a number of
           * applications */
          /*  which require one or several, but not all, $k$-combinations at
           * given */
          /*  generation order(s). */
          /*  */
          /*  See also: combsFS, nchoosek, bc */
          /*  */
          /*  References: */
          /*  */
          /*    Lehmer, D. H. (1964). The machine tools of combinatorics. In E.
           * F. */
          /*    Beckenbach (Ed.), "Applied Combinatorial Mathematics", pp. 5-31.
           * New */
          /*    York, Wiley. */
          /*  */
          /*    Knuth, D. (2005). Generating All Combinations and Partitions.
           * The Art of */
          /*    Computer Programming, Vol. 4, Fascicle 3. Reading, Mass.,
           * Addison-Wesley. */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('lexunrank')">Link to the help
           * function</a> */
          /*  */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*  */
          /*  Examples: */
          /* { */
          /*         %% 7th 2 combination chosen among 5 element. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         kcomb=lexunrank(n,k,N) */
          /* } */
          /* { */
          /*         %% number of binomial coefficient calls necessary to
           * compute the 7th 2 combination chosen among 5 element. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         [~,calls]=lexunrank(n,k,N) */
          /* } */
          /* { */
          /*         %% 7th 2 combination chosen among 5 element, using the
           * pascal matrix. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         [kcomb,calls]=lexunrank(n,k,N,pascal(n)) */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     % Standard use. */
          /*     n = 4; p = 3; */
          /*     % number of p-combinations out of n */
          /*     n_bc = bc(n,p); */
          /*     % Pascal matrix */
          /*     pascalM=pascal(n); */
          /*     % n_bc is the Pascal cell in position (n-p+1,p+1) */
          /*     n_bc==pascalM(n-p+1,p+1) */
          /*     % all p-combinations in reverse-colex order generated by
           * lexunrank */
          /*     % using a loop with rank integers ranging from 0 to bc(n,p)-1
           */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end */
          /*     all_recolex */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     n = 4; p = 3; */
          /*     n_bc = bc(n,p); */
          /*     pascalM=pascal(n); */
          /*     n_bc==pascalM(n-p+1,p+1) */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end */
          /*     % To change from reverse-colex to colex. */
          /*     all_colex = flipud(all_recolex) */
          /*     % and to change from colex to lex, it is sufficient this */
          /*     all_lex = fliplr(all_colex) */
          /*  */
          /*     % all p-combinations in lexi order generated using combsFS */
          /*     all_lex_combs = combsFS(1:n,p) */
          /*  */
          /*     % the combination at Lexi position N_lex=3 is generated by
           * lexiunrank */
          /*     % in Colex position */
          /*     N_lex = 3; N_colex = n_bc - N_lex ; */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     n = 4; p = 3; */
          /*     n_bc = bc(n,p); */
          /*     pascalM=pascal(n); */
          /*     n_bc==pascalM(n-p+1,p+1); */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end   */
          /*     N_colex = n_bc - N_lex ;    */
          /*     % Use of lexunrank with pascal matrix */
          /*     kcomb = lexunrank(n,p,N_colex,pascal(n)) */
          /*     % This is without Pascal matrix */
          /*     kcomb2 = lexunrank(n,p,N_colex) */
          /*     % Just as confirmation, the combination in the lexi order is */
          /*     all_lex_combs = combsFS(1:n,p) */
          /*     all_lex_combs(N_lex,:) */
          /* } */
          /*  Beginning of code */
          /*  REMARK: checks and unnecessary computations are intentionally
           * avoided, as */
          /*  this function in FSDA is supposed to be called many times, for
           * sampling */
          /*  subsets. To enable checks change the if statement to 1. */
          /*  initialise the row vector for the k-combination to unrank from N
           */
          i = s->size[0] * s->size[1];
          s->size[0] = 1;
          s->size[1] = (int)p;
          emxEnsureCapacity_real_T(s, i);
          for (i = 0; i < loop_ub_tmp; i++) {
            s->data[i] = 0.0;
          }
          /*  initialise the count of the calls to binomial coefficient values
           * (via */
          /*  call to bc function or access to Pascal matrix cells) */
          /*     %% FAST OPTION: */
          /*  binomial coefficients are taken from the pascal matrix rather than
           */
          /*  computing them using bc. Of course this option is space greedy. */
          i = (int)(((-1.0 - p) + 1.0) / -1.0);
          for (kk = 0; kk < i; kk++) {
            b_kk = p + -(double)kk;
            /*  istruction find faster than logical extraction */
            plusminus1 = n - b_kk;
            if (1.0 > plusminus1) {
              loop_ub = 0;
            } else {
              loop_ub = (int)plusminus1;
            }
            pascalM_size = loop_ub;
            for (j = 0; j < loop_ub; j++) {
              b_pascalM_data[j] =
                  (pascalM->data[j + pascalM->size[0] *
                                         ((int)(b_kk + 1.0) - 1)] > N_kk);
            }
            pascalM_data.data = &b_pascalM_data[0];
            pascalM_data.size = &pascalM_size;
            pascalM_data.allocatedSize = 20000;
            pascalM_data.numDimensions = 1;
            pascalM_data.canFreeData = false;
            eml_find(&pascalM_data, (int *)&coffset, &aoffset);
            /*  seqnmkk=1:n-kk; */
            /*  x=seqnmkk(pascalM(seqnmkk,kk+1) > N_kk); */
            if (aoffset == 0) {
              /*  || x1==n-kk */
              plusminus1 = n - 1.0;
            } else {
              plusminus1 = ((double)coffset + b_kk) - 2.0;
            }
            s->data[(int)b_kk - 1] = n - plusminus1;
            if (plusminus1 >= b_kk) {
              N_kk -=
                  pascalM->data[((int)((plusminus1 - b_kk) + 1.0) +
                                 pascalM->size[0] * (int)(unsigned int)b_kk) -
                                1];
              /*  this is: N_kk - bc(maxx,kk) */
            }
          }
        } else {
          N_kk = seq->data[b_i];
          /* lexunrank gives the the $k$-combination of $n$ elements of position
           * $N$ in the lexicographic order of all combinations */
          /*  */
          /* <a href="matlab: docsearchFS('lexunrank')">Link to the help
           * function</a> */
          /*  */
          /*  Required input arguments: */
          /*  */
          /*     n:  Number of elements. A non negative integer > k. */
          /*         Data Types - single|double */
          /*  */
          /*     k:  Items to choose from the set of n elements. A non negative
           * integer. */
          /*         Data Types - single|double */
          /*  */
          /*     N:  Position N in the reverse co-lexicographic order of such */
          /*         combinations. A non negative integer between 0 and
           * bc(n,p)-1. */
          /*         Data Types - single|double */
          /*  */
          /*  Optional input arguments: */
          /*  */
          /*   pascalM:  Pascal matrix.  */
          /*             Matrix. The Pascal matrix as given by the MATLAB
           * function pascal(n). */
          /*            In applications where lexunrank is called many times, it
           * is preferable */
          /*            to compute the Pascal matrix once outside lexunrank, and
           * pass it */
          /*            to lexunrank as optional argument. Otherwise, the
           * required binomial */
          /*            coeffients are computed inside lexunrank using function
           * bc and, when */
          /*            possible, using the traditional recurrent formula. */
          /*            Example - pascal(n) */
          /*            Data Types - single|double */
          /*  */
          /*  Output: */
          /*  */
          /*    kcomb : The $k$-combination of n elements at position */
          /*            N. Vector of length k. The position is relative to a
           * reverse */
          /*            co-lexicographic order of the combinations or,
           * equivalently, of */
          /*            position bc(n,k)-N in the lexicographic order of the
           * same */
          /*            combinations. Data Types - single|double */
          /*  */
          /*    calls : Binomial coefficients. Scalar. The number of binomial */
          /*            coefficients used to compute the $k$-combination. */
          /*            Data Types - single|double */
          /*  */
          /*  More About: */
          /*  */
          /*    REMARKS ON THE INPUT ARGUMENTS. */
          /*  */
          /*    Input checks are intentionally avoided, as lexunrank is supposed
           * to be */
          /*    called many times, for sampling subsets. Thus, please ensure
           * that: */
          /*    - k < n; */
          /*    - N is an integer between 0 and bc(n,p)-1. */
          /*    It is possible to enable checks, by changing an internal "if"
           * statement to 1. */
          /*  */
          /*    REMARKS ON THE OUTPUT ARGUMENTS. */
          /*  */
          /*    As $n$ increases, 'calls' becomes much smaller than 'ncomb'.
           * This means */
          /*    that lexunrank(n,k,N) is extremely convenient if you are
           * interested in */
          /*    one or several, but not all, $k$-combinations at given
           * generation */
          /*    order(s) N. */
          /*  */
          /*    To generate all combinations in lexicographic order, it is more
           */
          /*    convenient using the FSDA function combsFS. The MATLAB function
           */
          /*    with the same purpose, nchoosek(1:4,3), is much less efficient.
           */
          /*  */
          /*    ON THE LEXICOGRAPHIC ORDERING. */
          /*  */
          /*    lexunrank(n,k,N) gives the $k$-combination of n elements of
           * position N */
          /*    in the reverse co-lexicographic order of such combinations or,
           */
          /*    equivalently, of position bc(n,k)-N in the lexicographic order
           * of the */
          /*    same combinations. */
          /*     */
          /*    Note that, in this implementation of the lexicographic unrank, N
           * ranges */
          /*    over the integers between 0 and bc(n,k)-1. For details see the
           */
          /*    "combinatorial number system" discussed by Knuth (2005), pp.
           * 5-6. */
          /*  */
          /*    To clarify with an example the meaning of the different orders,
           * while */
          /*    the lexicographic order of the 2-combinations of 3 elements are:
           */
          /*     */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            1  &   2  &   3     \\ */
          /*            1  &   2  &   4     \\ */
          /*            1  &   3  &   4     \\ */
          /*            2  &   3  &   4  */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*  */
          /*    the co-lexicographic order of the same combinations are */
          /*     */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            3   &  2  &   1     \\ */
          /*            4   &  2  &   1     \\ */
          /*            4   &  3  &   1     \\ */
          /*            4   &  3  &   2 */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*     */
          /*    and the reverse co-lexicographic order of the original
           * combinations are: */
          /*  */
          /*    \[  */
          /*      \left(  */
          /*         \begin{array}{ccc} */
          /*            4   &  3  &   2     \\ */
          /*            4   &  3  &   1     \\ */
          /*            4   &  2  &   1     \\ */
          /*            3   &  2  &   1      */
          /*         \end{array}  */
          /*       \right) */
          /*    \]  */
          /*  */
          /*    The reasons for choosing a co-lexicographic unrank is that
           * right-to-left  */
          /*    array filling is much faster and elegant. The reverse is due to
           * a similar  */
          /*    motivation. */
          /*  */
          /*  */
          /*    ALGORITMIC DETAILS. */
          /*  */
          /*  Given the totally ordered set $S=\{1,2,\ldots,n\}$, a
           * $k$-combination is */
          /*  a subset $\{x_1, \ldots, x_k\}$ of $S$. Consider the $n$-lists of
           */
          /*  elements of the set $\{0,1\}$, i.e. the vertices of the hypercube
           * $V_n$. */
          /*  Each $k$-combination $\{x_1,\ldots,x_k\}$ can be associated to the
           */
          /*  $n$-list having a 1 at position $x_1$, \ldots, $x_k$, and a 0
           * elsewhere. */
          /*  */
          /*  Example: */
          /*    2-combinations of $\{1,2,3,4\}$: $\{1,2\}$, $\{1,3\}$,
           * $\{1,4\}$, */
          /*    $\{2,3\}$, $\{2,4\}$, $\{3,4\}$. Corresponding 4-lists of
           * $\{0,1\}$: */
          /*    $1100$,  $1010$,  $1001$,  $0110$, $0101$,  $0011$. */
          /*  */
          /*  The $n$-lists of $\{0,1\}$ containing $k$ times 1, and therefore
           */
          /*  equivalently the $k$-combinations of $n$-elements of $S$, can be
           */
          /*  generated in lexicographic order with an algorithm that builds the
           */
          /*  $k$-list of position $t+1$ using only the $k$-list of position
           * $t$, and */
          /*  which stops without counting the combinations generated. For
           * example, the */
          /*  MATLAB function NCHOOSEK(S,k), where $S$ is the row vector of
           * length $n$ */
          /*  of the elements of $S$, creates in lexicographic order a $k$
           * columns */
          /*  matrix whose rows consist of all possible combinations of the $n$
           */
          /*  elements of $S$ taken $k$ at a time. The number of such
           * combinations, */
          /*  given by the binomial coefficient $n!/((n-k)! k!)$, can be also
           * computed */
          /*  with the function NCHOOSEK by replacing the first argument, the
           * row */
          /*  vector $S$, with the scalar $n$. */
          /*  */
          /*  Unfortunately the binomial coefficient increases rapidly with $n$,
           * which */
          /*  makes the generation of all $k$-combinations computationally hard:
           * with */
          /*  NCHOOSEK the task is impractical even for values just above 15.
           * However, */
          /*  a lexicographic algorithm implements a one-to-one correspondence
           * between */
          /*  the $k$-combinations and the generation order, i.e. the set of
           * numbers $s */
          /*  = 1,\ldots,(n!/((n-k)!k!))$. This fact is used in our function to
           */
          /*  determine the $n$-list corresponding to the $k$-combination
           * $\{x_1, */
          /*  \ldots, x_k\}$ which would be generated by the lexicographic
           * algorithm at */
          /*  a given desired position $N$. This is useful in a number of
           * applications */
          /*  which require one or several, but not all, $k$-combinations at
           * given */
          /*  generation order(s). */
          /*  */
          /*  See also: combsFS, nchoosek, bc */
          /*  */
          /*  References: */
          /*  */
          /*    Lehmer, D. H. (1964). The machine tools of combinatorics. In E.
           * F. */
          /*    Beckenbach (Ed.), "Applied Combinatorial Mathematics", pp. 5-31.
           * New */
          /*    York, Wiley. */
          /*  */
          /*    Knuth, D. (2005). Generating All Combinations and Partitions.
           * The Art of */
          /*    Computer Programming, Vol. 4, Fascicle 3. Reading, Mass.,
           * Addison-Wesley. */
          /*  */
          /*  Copyright 2008-2021. */
          /*  Written by FSDA team */
          /*  */
          /* <a href="matlab: docsearchFS('lexunrank')">Link to the help
           * function</a> */
          /*  */
          /*  */
          /* $LastChangedDate::                      $: Date of the last commit
           */
          /*  */
          /*  Examples: */
          /* { */
          /*         %% 7th 2 combination chosen among 5 element. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         kcomb=lexunrank(n,k,N) */
          /* } */
          /* { */
          /*         %% number of binomial coefficient calls necessary to
           * compute the 7th 2 combination chosen among 5 element. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         [~,calls]=lexunrank(n,k,N) */
          /* } */
          /* { */
          /*         %% 7th 2 combination chosen among 5 element, using the
           * pascal matrix. */
          /*         n = 5;  */
          /*         k = 2;  */
          /*         N = 7; */
          /*         [kcomb,calls]=lexunrank(n,k,N,pascal(n)) */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     % Standard use. */
          /*     n = 4; p = 3; */
          /*     % number of p-combinations out of n */
          /*     n_bc = bc(n,p); */
          /*     % Pascal matrix */
          /*     pascalM=pascal(n); */
          /*     % n_bc is the Pascal cell in position (n-p+1,p+1) */
          /*     n_bc==pascalM(n-p+1,p+1) */
          /*     % all p-combinations in reverse-colex order generated by
           * lexunrank */
          /*     % using a loop with rank integers ranging from 0 to bc(n,p)-1
           */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end */
          /*     all_recolex */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     n = 4; p = 3; */
          /*     n_bc = bc(n,p); */
          /*     pascalM=pascal(n); */
          /*     n_bc==pascalM(n-p+1,p+1) */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end */
          /*     % To change from reverse-colex to colex. */
          /*     all_colex = flipud(all_recolex) */
          /*     % and to change from colex to lex, it is sufficient this */
          /*     all_lex = fliplr(all_colex) */
          /*  */
          /*     % all p-combinations in lexi order generated using combsFS */
          /*     all_lex_combs = combsFS(1:n,p) */
          /*  */
          /*     % the combination at Lexi position N_lex=3 is generated by
           * lexiunrank */
          /*     % in Colex position */
          /*     N_lex = 3; N_colex = n_bc - N_lex ; */
          /* } */
          /* { */
          /*     % Additional example on the use of lexunrank. */
          /*     n = 4; p = 3; */
          /*     n_bc = bc(n,p); */
          /*     pascalM=pascal(n); */
          /*     n_bc==pascalM(n-p+1,p+1); */
          /*     all_recolex = nan(n_bc,p); */
          /*     for N_lex = 0:n_bc-1 */
          /*         all_recolex(N_lex+1,:) = lexunrank(n,p,N_lex); */
          /*     end   */
          /*     N_colex = n_bc - N_lex ;    */
          /*     % Use of lexunrank with pascal matrix */
          /*     kcomb = lexunrank(n,p,N_colex,pascal(n)) */
          /*     % This is without Pascal matrix */
          /*     kcomb2 = lexunrank(n,p,N_colex) */
          /*     % Just as confirmation, the combination in the lexi order is */
          /*     all_lex_combs = combsFS(1:n,p) */
          /*     all_lex_combs(N_lex,:) */
          /* } */
          /*  Beginning of code */
          /*  REMARK: checks and unnecessary computations are intentionally
           * avoided, as */
          /*  this function in FSDA is supposed to be called many times, for
           * sampling */
          /*  subsets. To enable checks change the if statement to 1. */
          /*  initialise the row vector for the k-combination to unrank from N
           */
          i = s->size[0] * s->size[1];
          s->size[0] = 1;
          s->size[1] = (int)p;
          emxEnsureCapacity_real_T(s, i);
          for (i = 0; i < loop_ub_tmp; i++) {
            s->data[i] = 0.0;
          }
          /*  initialise the count of the calls to binomial coefficient values
           * (via */
          /*  call to bc function or access to Pascal matrix cells) */
          /*     %% call_bc OPTION: */
          coffset = (int)n;
          i = pas_col->size[0];
          pas_col->size[0] = (int)n;
          emxEnsureCapacity_real_T(pas_col, i);
          for (i = 0; i < coffset; i++) {
            pas_col->data[i] = 1.0;
          }
          if (n < 1.0) {
            y->size[0] = 1;
            y->size[1] = 0;
          } else if (rtIsInf(n) && (1.0 == n)) {
            i = y->size[0] * y->size[1];
            y->size[0] = 1;
            y->size[1] = 1;
            emxEnsureCapacity_real_T(y, i);
            y->data[0] = rtNaN;
          } else {
            i = y->size[0] * y->size[1];
            y->size[0] = 1;
            y->size[1] = (int)floor(n - 1.0) + 1;
            emxEnsureCapacity_real_T(y, i);
            loop_ub = (int)floor(n - 1.0);
            for (i = 0; i <= loop_ub; i++) {
              y->data[i] = (double)i + 1.0;
            }
          }
          i = b_seq->size[0];
          b_seq->size[0] = y->size[1];
          emxEnsureCapacity_real_T(b_seq, i);
          loop_ub = y->size[1];
          for (i = 0; i < loop_ub; i++) {
            b_seq->data[i] = y->data[i];
          }
          i = (int)(((-1.0 - p) + 1.0) / -1.0);
          for (kk = 0; kk < i; kk++) {
            b_kk = p + -(double)kk;
            /*  The next 'if' statement builds the required part of column kk+1
             */
            /*  of the pascal matrix, which is the argument of the 'find' */
            /*  statement which follows. */
            /*  This replaces the loop with repeated calling of bc: */
            /*          for x = kk:n-1 */
            /*              if  bc(x,kk)> N_kk, break, end */
            /*          end */
            if (b_kk == p) {
              j = (int)((n - 1.0) + (1.0 - b_kk));
              for (coffset = 0; coffset < j; coffset++) {
                plusminus1 = b_kk + (double)coffset;
                pas_col->data[(int)(plusminus1 + 1.0) - 1] =
                    pas_col->data[(int)plusminus1 - 1] * (plusminus1 + 1.0) /
                    ((plusminus1 + 1.0) - b_kk);
              }
            } else {
              if (b_kk + 1.0 > n) {
                j = 1;
                nc = 1;
                aoffset = -1;
                inner = 0;
              } else {
                j = (int)(b_kk + 1.0);
                nc = (int)(b_kk + 1.0);
                aoffset = (int)(b_kk + 1.0) - 2;
                inner = (int)n;
              }
              coffset = (inner - aoffset) - 1;
              inner = y->size[0] * y->size[1];
              y->size[0] = 1;
              y->size[1] = coffset;
              emxEnsureCapacity_real_T(y, inner);
              for (inner = 0; inner < coffset; inner++) {
                y->data[inner] = pas_col->data[(j + inner) - 1] * (b_kk + 1.0) /
                                 (b_seq->data[(nc + inner) - 1] - b_kk);
              }
              loop_ub = y->size[1];
              for (j = 0; j < loop_ub; j++) {
                pas_col->data[(aoffset + j) + 1] = y->data[j];
              }
            }
            if (b_kk > pas_col->size[0]) {
              j = 0;
              nc = 0;
            } else {
              j = (int)b_kk - 1;
              nc = pas_col->size[0];
            }
            loop_ub = nc - j;
            nc = b_pas_col->size[0];
            b_pas_col->size[0] = loop_ub;
            emxEnsureCapacity_boolean_T(b_pas_col, nc);
            for (nc = 0; nc < loop_ub; nc++) {
              b_pas_col->data[nc] = (pas_col->data[j + nc] > N_kk);
            }
            eml_find(b_pas_col, (int *)&coffset, &aoffset);
            if (aoffset == 0) {
              plusminus1 = n - 1.0;
            } else {
              plusminus1 = ((double)coffset + b_kk) - 2.0;
            }
            s->data[(int)b_kk - 1] = n - plusminus1;
            if (plusminus1 >= b_kk) {
              N_kk -= bc(plusminus1, b_kk);
            }
          }
        }
      } else {
        /* randsampleFS generates a random sample of k elements from the
         * integers 1 to n (k<=n) */
        /*  */
        /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
         * function</a> */
        /*  */
        /*   Required input arguments: */
        /*  */
        /*        n : A vector of numbers will be selected from the integers 1
         * to n. */
        /*            Scalar, a positive integer. */
        /*            Data Types - single|double */
        /*  */
        /*       k  : The number of elements to be selected. Non negative
         * integer. */
        /*            Data Types - single|double */
        /*  */
        /*   Optional input arguments: */
        /*  */
        /*    method : Sampling methods. Scalar or vector. */
        /*             Methods used to extract the subsets. See more about for
         * details. */
        /*             Default is method = 0. */
        /*             - Scalar from 0 to 3 determining the method used to
         * extract */
        /*              (without replacement) the random sample. */
        /*             - Vector of weights: in such a case, a weighted sampling
         * without */
        /*               replacement algorithm is applied using that vector of
         * weights. */
        /*             Example - randsampleFS(100,10,2) */
        /*             Data Types - single|double */
        /*  */
        /*  */
        /*    Output: */
        /*  */
        /*    y :     A column vector of k values sampled at random from the
         * integers 1:n. */
        /*            For methods 0, 1, 2 and weighted sampling the elements
         * extracted */
        /*            are unique; For method 3 (included for historical reasons)
         * there is */
        /*            no guarantee that the elements extracted are unique. */
        /*            Data Types - single|double. */
        /*  */
        /*  More About: */
        /*  */
        /*    The method=0 uses MATLAB function randperm. In old MATLAB releases
         */
        /*    randperm was slower than FSDA function shuffling, which is used in
         */
        /*    method 1 (for example, in R2009a - MATLAB 7.8 - randperm was at
         * least */
        /*    50% slower). */
        /*  */
        /*    If method=1 the approach depends on the population and sample
         * sizes: */
        /*    - if $n < 1000$ and $k < n/(10 + 0.007n)$, that is if the
         * population is */
        /*      relatively small and the desired sample is small compared to the
         */
        /*      population, we repeatedly sample with replacement until there
         * are k */
        /*      unique values; */
        /*    - otherwise, we do a random permutation of the population and
         * return */
        /*      the first k elements. */
        /*    The threshold $k < n/(10 + 0.007n)$ has been determined by
         * simulation */
        /*    under MATLAB R2016b. Before, the threshold was $n < 4*k$. */
        /*  */
        /*    If method=2 systematic sampling is used, where the starting point
         * is */
        /*    random and the step is also random. */
        /*  */
        /*    If method=3 random sampling is based on the old but well known
         * Linear */
        /*    Congruential Generator (LCG) method. In this case there is no
         * guarantee */
        /*    to get unique numbers. The method is included for historical
         * reasons. */
        /*  */
        /*    If method is a vector of n weights, then Weighted Sampling Without
         */
        /*    Replacement is applied. Our implementation follows Efraimidis and
         */
        /*    Spirakis (2006). MATLAB function datasample follows Wong and
         * Easton */
        /*    (1980), which is also quite fast; note however that function
         * datasample */
        /*    may be very slow if applied repetedly, for the large amount of
         * time */
        /*    spent on options checking. */
        /*  */
        /*    Remark on computation performances. Method=2 (systematic sampling)
         * is */
        /*    by far the fastest for any practical population size $n$. For
         * example, */
        /*    for $n \approx 10^6$ method=2 is two orders of magniture faster
         * than */
        /*    method=1. With recent MATLAB releases (after R2011b) method = 0
         * (which */
        /*    uses compiled MATLAB function randperm) has comparable
         * performances, at */
        /*    least for reasonably small $k$. In releases before 2012a, randperm
         * was */
        /*    considerably slow. */
        /*  */
        /*  See also: randsample, datasample, shuffling */
        /*  */
        /*  References: */
        /*  */
        /*  Fisher, R.A. and Yates, F. (1948), "Statistical tables */
        /*  for biological, agricultural and medical research (3rd ed.)", */
        /*  Oliver & Boyd, pp. 26-27. [For Method 1] */
        /*  Cochran, W.G. (1977), "Sampling techniques (Third ed.)", Wiley. [For
         */
        /*  Method 2] */
        /*  Knuth, D.E. (1997), "The Art of Computer Programming, Volume 2: */
        /*  Seminumerical Algorithms, Third Edition" Addison-Wesley, pp. 10-26.
         * [For */
        /*  Method 3. For details see: Section 3.2.1: The Linear Congruential
         * Method] */
        /*  Efraimidis, P.S. and Spirakis, P.G. (2006), Weighted random sampling
         * with */
        /*  a reservoir, "Information Processing Letters", Vol. 97, pp. 181-185.
         * [For */
        /*  Weighted Sampling Without Replacement] */
        /*  Wong, C.K. and Easton, M.C. (1980), An Efficient Method for Weighted
         */
        /*  Sampling Without Replacement, "SIAM Journal of Computing", Vol. 9,
         * pp. 111-113. */
        /*  */
        /*  Copyright 2008-2021. */
        /*  Written by FSDA team */
        /*  */
        /* <a href="matlab: docsearchFS('randsampleFS')">Link to the help
         * function</a> */
        /*  */
        /*  */
        /* $LastChangedDate::                      $: Date of the last commit */
        /*  */
        /*  Examples: */
        /* { */
        /*     %% randsampleFS with default options. */
        /*     % default method (1) is used. */
        /*     randsampleFS(1000,10) */
        /* } */
        /* { */
        /*     %% randsampleFS with optional argument set to method (2). */
        /*     method = 2; */
        /*     randsampleFS(100,10,method) */
        /* } */
        /* { */
        /*     % randsampleFS with optional arguments set to method (3). */
        /*     method = 3; */
        /*     % Here, being nsel so big wrt nsamp, it is likely to obtain
         * repetitions. */
        /*     randsampleFS(100,10,method) */
        /* } */
        /* { */
        /*     % randsampleFS Weighted Sampling Without Replacement. */
        /*     % Extract k=10 number in [-1000 -900] with gamma distributed
         * weights. */
        /*      population = -1000:1:-900; */
        /*      n = numel(population); */
        /*      wgts = sort(random('gamma',0.3,2,n,1),'descend'); */
        /*  */
        /*      k=10; */
        /*      y = randsampleFS(n,k,wgts); */
        /*      sample  = population(y); */
        /*       */
        /*      plot(wgts,'.r') */
        /*      hold on; */
        /*      text(y,wgts(y),'X'); */
        /*      title('Weight distribution with the extracted numbers
         * superimposed') */
        /* } */
        /*  Beginning of code */
        /*  randsampleFS needs to check the MATLAB version in use in order to:
         */
        /*  - decide the sampling method to use, and */
        /*  - use properly the optional parameter of randperm. */
        /*  In the first case  the release to check is R2012a, i.e. 7.14 */
        /*  In the second case the release to check is R2011b, i.e. 7.13 */
        /*  For the sake of computational efficiency, we just check the latest
         */
        /*  To pass the argument, use: */
        /*  after2012a = ~verLessThan('MATLAB','7.14'); */
        /*  choose the default sampling method */
        /*  Weighted Sampling Without Replacement */
        /*  This is done if the third argument is provided as a vector of
         * weights. */
        /*  Extract a random sample of k integers between 1 and n. */
        randperm(n, p, s);
      }
      loop_ub = s->size[1];
      for (i = 0; i < loop_ub; i++) {
        C->data[b_i + C->size[0] * i] = s->data[i];
      }
    }
    /*          C=zeros(nselected,p); */
    /*          for i=1:nselected */
    /*              s=randsampleFS(n,p,method); */
    /*              C(i,:)=s; */
    /*          end */
  }
  emxFree_boolean_T(&b_pas_col);
  emxFree_real_T(&A);
  emxFree_real_T(&y);
  emxFree_real_T(&b_seq);
  emxFree_real_T(&pas_col);
  emxFree_real_T(&s);
  emxFree_real_T(&pascalM);
  emxFree_real_T(&seq);
}

/* End of code generation (subsets.c) */
