/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * lexunrank.c
 *
 * Code generation for function 'lexunrank'
 *
 */

/* Include files */
#include "lexunrank.h"
#include "LTSts_wrapper_data.h"
#include "LTSts_wrapper_emxutil.h"
#include "LTSts_wrapper_types.h"
#include "bc.h"
#include "eml_int_forloop_overflow_check.h"
#include "find.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo yj_emlrtRSI = {
    310,                                                    /* lineNo */
    "lexunrank",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pathName */
};

static emlrtRSInfo ak_emlrtRSI = {
    312,                                                    /* lineNo */
    "lexunrank",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pathName */
};

static emlrtRSInfo bk_emlrtRSI = {
    325,                                                    /* lineNo */
    "lexunrank",                                            /* fcnName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pathName */
};

static emlrtBCInfo kg_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    312,                                                     /* lineNo */
    29,                                                      /* colNo */
    "pas_col",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo lg_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    312,                                                     /* lineNo */
    26,                                                      /* colNo */
    "pas_col",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtECInfo ib_emlrtECI = {
    -1,                                                     /* nDims */
    310,                                                    /* lineNo */
    13,                                                     /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtBCInfo mg_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    310,                                                     /* lineNo */
    26,                                                      /* colNo */
    "pas_col",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo ng_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    310,                                                     /* lineNo */
    21,                                                      /* colNo */
    "pas_col",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo og_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    310,                                                     /* lineNo */
    65,                                                      /* colNo */
    "seq",                                                   /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo pg_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    310,                                                     /* lineNo */
    60,                                                      /* colNo */
    "seq",                                                   /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo qg_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    310,                                                     /* lineNo */
    44,                                                      /* colNo */
    "pas_col",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo rg_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    310,                                                     /* lineNo */
    39,                                                      /* colNo */
    "pas_col",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    306,                                                    /* lineNo */
    22,                                                     /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    297,                                                    /* lineNo */
    14,                                                     /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtDCInfo ud_emlrtDCI = {
    283,                                                     /* lineNo */
    1,                                                       /* colNo */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    1                                                        /* checkKind */
};

static emlrtDCInfo vd_emlrtDCI = {
    294,                                                     /* lineNo */
    5,                                                       /* colNo */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    4                                                        /* checkKind */
};

static emlrtBCInfo sg_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    307,                                                     /* lineNo */
    33,                                                      /* colNo */
    "pas_col",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo tg_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    307,                                                     /* lineNo */
    17,                                                      /* colNo */
    "pas_col",                                               /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtBCInfo ug_emlrtBCI = {
    -1,                                                      /* iFirst */
    -1,                                                      /* iLast */
    322,                                                     /* lineNo */
    9,                                                       /* colNo */
    "kcomb",                                                 /* aName */
    "lexunrank",                                             /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m", /* pName */
    0                                                        /* checkKind */
};

static emlrtRTEInfo mk_emlrtRTEI = {
    283,                                                    /* lineNo */
    1,                                                      /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtRTEInfo nk_emlrtRTEI = {
    294,                                                    /* lineNo */
    5,                                                      /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtRTEInfo ok_emlrtRTEI = {
    295,                                                    /* lineNo */
    5,                                                      /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtRTEInfo pk_emlrtRTEI = {
    312,                                                    /* lineNo */
    18,                                                     /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtRTEInfo qk_emlrtRTEI =
    {
        75,                  /* lineNo */
        9,                   /* colNo */
        "eml_mtimes_helper", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

static emlrtRTEInfo rk_emlrtRTEI = {
    310,                                                    /* lineNo */
    56,                                                     /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtRTEInfo sk_emlrtRTEI = {
    295,                                                    /* lineNo */
    12,                                                     /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

static emlrtRTEInfo tk_emlrtRTEI = {
    310,                                                    /* lineNo */
    31,                                                     /* colNo */
    "lexunrank",                                            /* fName */
    "D:\\MATLAB\\FSDAgit\\FSDA\\combinatorial\\lexunrank.m" /* pName */
};

/* Function Definitions */
void lexunrank(const emlrtStack *sp, real_T n, real_T k, real_T N,
               emxArray_real_T *kcomb)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  emxArray_boolean_T *b_pas_col;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *pas_col;
  emxArray_real_T *seq;
  emxArray_real_T *y;
  real_T N_kk;
  real_T b_kk;
  real_T maxx;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T ii_data;
  int32_T kk;
  int32_T loop_ub;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
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
  /* lexunrank gives the the $k$-combination of $n$ elements of position $N$ in
   * the lexicographic order of all combinations */
  /*  */
  /* <a href="matlab: docsearchFS('lexunrank')">Link to the help function</a> */
  /*  */
  /*  Required input arguments: */
  /*  */
  /*     n:  Number of elements. A non negative integer > k. */
  /*         Data Types - single|double */
  /*  */
  /*     k:  Items to choose from the set of n elements. A non negative integer.
   */
  /*         Data Types - single|double */
  /*  */
  /*     N:  Position N in the reverse co-lexicographic order of such */
  /*         combinations. A non negative integer between 0 and bc(n,p)-1. */
  /*         Data Types - single|double */
  /*  */
  /*  Optional input arguments: */
  /*  */
  /*   pascalM:  Pascal matrix.  */
  /*             Matrix. The Pascal matrix as given by the MATLAB function
   * pascal(n). */
  /*            In applications where lexunrank is called many times, it is
   * preferable */
  /*            to compute the Pascal matrix once outside lexunrank, and pass it
   */
  /*            to lexunrank as optional argument. Otherwise, the required
   * binomial */
  /*            coeffients are computed inside lexunrank using function bc and,
   * when */
  /*            possible, using the traditional recurrent formula. */
  /*            Example - pascal(n) */
  /*            Data Types - single|double */
  /*  */
  /*  Output: */
  /*  */
  /*    kcomb : The $k$-combination of n elements at position */
  /*            N. Vector of length k. The position is relative to a reverse */
  /*            co-lexicographic order of the combinations or, equivalently, of
   */
  /*            position bc(n,k)-N in the lexicographic order of the same */
  /*            combinations. Data Types - single|double */
  /*  */
  /*    calls : Binomial coefficients. Scalar. The number of binomial */
  /*            coefficients used to compute the $k$-combination.            */
  /*            Data Types - single|double */
  /*  */
  /*  More About: */
  /*  */
  /*    REMARKS ON THE INPUT ARGUMENTS. */
  /*  */
  /*    Input checks are intentionally avoided, as lexunrank is supposed to be
   */
  /*    called many times, for sampling subsets. Thus, please ensure that: */
  /*    - k < n; */
  /*    - N is an integer between 0 and bc(n,p)-1. */
  /*    It is possible to enable checks, by changing an internal "if" statement
   * to 1. */
  /*  */
  /*    REMARKS ON THE OUTPUT ARGUMENTS. */
  /*  */
  /*    As $n$ increases, 'calls' becomes much smaller than 'ncomb'. This means
   */
  /*    that lexunrank(n,k,N) is extremely convenient if you are interested in
   */
  /*    one or several, but not all, $k$-combinations at given generation */
  /*    order(s) N. */
  /*  */
  /*    To generate all combinations in lexicographic order, it is more  */
  /*    convenient using the FSDA function combsFS. The MATLAB function */
  /*    with the same purpose, nchoosek(1:4,3), is much less efficient. */
  /*  */
  /*    ON THE LEXICOGRAPHIC ORDERING. */
  /*  */
  /*    lexunrank(n,k,N) gives the $k$-combination of n elements of position N
   */
  /*    in the reverse co-lexicographic order of such combinations or, */
  /*    equivalently, of position bc(n,k)-N in the lexicographic order of the */
  /*    same combinations. */
  /*     */
  /*    Note that, in this implementation of the lexicographic unrank, N ranges
   */
  /*    over the integers between 0 and bc(n,k)-1. For details see the */
  /*    "combinatorial number system" discussed by Knuth (2005), pp. 5-6. */
  /*  */
  /*    To clarify with an example the meaning of the different orders, while */
  /*    the lexicographic order of the 2-combinations of 3 elements are: */
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
  /*    and the reverse co-lexicographic order of the original combinations are:
   */
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
  /*    The reasons for choosing a co-lexicographic unrank is that right-to-left
   */
  /*    array filling is much faster and elegant. The reverse is due to a
   * similar  */
  /*    motivation. */
  /*  */
  /*  */
  /*    ALGORITMIC DETAILS. */
  /*  */
  /*  Given the totally ordered set $S=\{1,2,\ldots,n\}$, a $k$-combination is
   */
  /*  a subset $\{x_1, \ldots, x_k\}$ of $S$. Consider the $n$-lists of */
  /*  elements of the set $\{0,1\}$, i.e. the vertices of the hypercube $V_n$.
   */
  /*  Each $k$-combination $\{x_1,\ldots,x_k\}$ can be associated to the */
  /*  $n$-list having a 1 at position $x_1$, \ldots, $x_k$, and a 0 elsewhere.
   */
  /*  */
  /*  Example: */
  /*    2-combinations of $\{1,2,3,4\}$: $\{1,2\}$, $\{1,3\}$, $\{1,4\}$, */
  /*    $\{2,3\}$, $\{2,4\}$, $\{3,4\}$. Corresponding 4-lists of $\{0,1\}$: */
  /*    $1100$,  $1010$,  $1001$,  $0110$, $0101$,  $0011$. */
  /*  */
  /*  The $n$-lists of $\{0,1\}$ containing $k$ times 1, and therefore */
  /*  equivalently the $k$-combinations of $n$-elements of $S$, can be */
  /*  generated in lexicographic order with an algorithm that builds the */
  /*  $k$-list of position $t+1$ using only the $k$-list of position $t$, and */
  /*  which stops without counting the combinations generated. For example, the
   */
  /*  MATLAB function NCHOOSEK(S,k), where $S$ is the row vector of length $n$
   */
  /*  of the elements of $S$, creates in lexicographic order a $k$ columns */
  /*  matrix whose rows consist of all possible combinations of the $n$ */
  /*  elements of $S$ taken $k$ at a time. The number of such combinations, */
  /*  given by the binomial coefficient $n!/((n-k)! k!)$, can be also computed
   */
  /*  with the function NCHOOSEK by replacing the first argument, the row */
  /*  vector $S$, with the scalar $n$. */
  /*  */
  /*  Unfortunately the binomial coefficient increases rapidly with $n$, which
   */
  /*  makes the generation of all $k$-combinations computationally hard: with */
  /*  NCHOOSEK the task is impractical even for values just above 15. However,
   */
  /*  a lexicographic algorithm implements a one-to-one correspondence between
   */
  /*  the $k$-combinations and the generation order, i.e. the set of numbers $s
   */
  /*  = 1,\ldots,(n!/((n-k)!k!))$. This fact is used in our function to */
  /*  determine the $n$-list corresponding to the $k$-combination $\{x_1, */
  /*  \ldots, x_k\}$ which would be generated by the lexicographic algorithm at
   */
  /*  a given desired position $N$. This is useful in a number of applications
   */
  /*  which require one or several, but not all, $k$-combinations at given */
  /*  generation order(s). */
  /*  */
  /*  See also: combsFS, nchoosek, bc */
  /*  */
  /*  References: */
  /*  */
  /*    Lehmer, D. H. (1964). The machine tools of combinatorics. In E. F. */
  /*    Beckenbach (Ed.), "Applied Combinatorial Mathematics", pp. 5-31. New */
  /*    York, Wiley. */
  /*  */
  /*    Knuth, D. (2005). Generating All Combinations and Partitions. The Art of
   */
  /*    Computer Programming, Vol. 4, Fascicle 3. Reading, Mass.,
   * Addison-Wesley. */
  /*  */
  /*  Copyright 2008-2021. */
  /*  Written by FSDA team */
  /*  */
  /* <a href="matlab: docsearchFS('lexunrank')">Link to the help function</a> */
  /*  */
  /*  */
  /* $LastChangedDate::                      $: Date of the last commit */
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
  /*         %% number of binomial coefficient calls necessary to compute the
   * 7th 2 combination chosen among 5 element. */
  /*         n = 5;  */
  /*         k = 2;  */
  /*         N = 7; */
  /*         [~,calls]=lexunrank(n,k,N) */
  /* } */
  /* { */
  /*         %% 7th 2 combination chosen among 5 element, using the pascal
   * matrix. */
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
  /*     % all p-combinations in reverse-colex order generated by lexunrank */
  /*     % using a loop with rank integers ranging from 0 to bc(n,p)-1 */
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
  /*     % the combination at Lexi position N_lex=3 is generated by lexiunrank
   */
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
  /*  REMARK: checks and unnecessary computations are intentionally avoided, as
   */
  /*  this function in FSDA is supposed to be called many times, for sampling */
  /*  subsets. To enable checks change the if statement to 1. */
  /*  initialise the row vector for the k-combination to unrank from N */
  i = kcomb->size[0] * kcomb->size[1];
  kcomb->size[0] = 1;
  emxEnsureCapacity_real_T(sp, kcomb, i, &mk_emlrtRTEI);
  i = (int32_T)muDoubleScalarFloor(k);
  if (k != i) {
    emlrtIntegerCheckR2012b(k, &md_emlrtDCI, (emlrtCTX)sp);
  }
  ii_data = (int32_T)k;
  i1 = kcomb->size[0] * kcomb->size[1];
  kcomb->size[1] = ii_data;
  emxEnsureCapacity_real_T(sp, kcomb, i1, &mk_emlrtRTEI);
  if (ii_data != i) {
    emlrtIntegerCheckR2012b(k, &ud_emlrtDCI, (emlrtCTX)sp);
  }
  for (i = 0; i < ii_data; i++) {
    kcomb->data[i] = 0.0;
  }
  emxInit_real_T(sp, &pas_col, 1, &nk_emlrtRTEI, true);
  /*  initialise the count of the calls to binomial coefficient values (via */
  /*  call to bc function or access to Pascal matrix cells) */
  /*     %% call_bc OPTION: */
  N_kk = N;
  if (!(n >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n, &vd_emlrtDCI, (emlrtCTX)sp);
  }
  ii_data = (int32_T)n;
  i = pas_col->size[0];
  pas_col->size[0] = (int32_T)n;
  emxEnsureCapacity_real_T(sp, pas_col, i, &nk_emlrtRTEI);
  for (i = 0; i < ii_data; i++) {
    pas_col->data[i] = 1.0;
  }
  emxInit_real_T(sp, &y, 2, &sk_emlrtRTEI, true);
  if (n < 1.0) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else if (muDoubleScalarIsInf(n) && (1.0 == n)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = 1;
    emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
    y->data[0] = rtNaN;
  } else {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    ii_data = (int32_T)muDoubleScalarFloor(n - 1.0);
    y->size[1] = ii_data + 1;
    emxEnsureCapacity_real_T(sp, y, i, &oc_emlrtRTEI);
    for (i = 0; i <= ii_data; i++) {
      y->data[i] = (real_T)i + 1.0;
    }
  }
  emxInit_real_T(sp, &seq, 1, &ok_emlrtRTEI, true);
  i = seq->size[0];
  seq->size[0] = y->size[1];
  emxEnsureCapacity_real_T(sp, seq, i, &ok_emlrtRTEI);
  ii_data = y->size[1];
  for (i = 0; i < ii_data; i++) {
    seq->data[i] = y->data[i];
  }
  emxFree_real_T(&y);
  i = (int32_T)(((-1.0 - k) + 1.0) / -1.0);
  emlrtForLoopVectorCheckR2021a(k, -1.0, 1.0, mxDOUBLE_CLASS, i, &nb_emlrtRTEI,
                                (emlrtCTX)sp);
  emxInit_real_T(sp, &b_y, 1, &tk_emlrtRTEI, true);
  emxInit_real_T(sp, &c_y, 1, &rk_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_pas_col, 1, &pk_emlrtRTEI, true);
  for (kk = 0; kk < i; kk++) {
    b_kk = k + -(real_T)kk;
    /*  The next 'if' statement builds the required part of column kk+1 */
    /*  of the pascal matrix, which is the argument of the 'find' */
    /*  statement which follows. */
    /*  This replaces the loop with repeated calling of bc: */
    /*          for x = kk:n-1 */
    /*              if  bc(x,kk)> N_kk, break, end */
    /*          end */
    if (b_kk == k) {
      i1 = (int32_T)((n - 1.0) + (1.0 - b_kk));
      emlrtForLoopVectorCheckR2021a(b_kk, 1.0, n - 1.0, mxDOUBLE_CLASS, i1,
                                    &mb_emlrtRTEI, (emlrtCTX)sp);
      for (ii_data = 0; ii_data < i1; ii_data++) {
        maxx = b_kk + (real_T)ii_data;
        if (((int32_T)maxx < 1) || ((int32_T)maxx > pas_col->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)maxx, 1, pas_col->size[0],
                                        &sg_emlrtBCI, (emlrtCTX)sp);
        }
        if (((int32_T)(maxx + 1.0) < 1) ||
            ((int32_T)(maxx + 1.0) > pas_col->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(maxx + 1.0), 1,
                                        pas_col->size[0], &tg_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        pas_col->data[(int32_T)(maxx + 1.0) - 1] =
            pas_col->data[(int32_T)maxx - 1] * (maxx + 1.0) /
            ((maxx + 1.0) - b_kk);
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtCTX)sp);
        }
      }
    } else {
      if (b_kk + 1.0 > n) {
        i1 = 0;
        i2 = 0;
      } else {
        if (((int32_T)(b_kk + 1.0) < 1) ||
            ((int32_T)(b_kk + 1.0) > pas_col->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_kk + 1.0), 1,
                                        pas_col->size[0], &rg_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i1 = (int32_T)(b_kk + 1.0) - 1;
        if (((int32_T)n < 1) || ((int32_T)n > pas_col->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, pas_col->size[0],
                                        &qg_emlrtBCI, (emlrtCTX)sp);
        }
        i2 = (int32_T)n;
      }
      iv[0] = 1;
      ii_data = i2 - i1;
      iv[1] = ii_data;
      st.site = &yj_emlrtRSI;
      indexShapeCheck(&st, pas_col->size[0], iv);
      if (b_kk + 1.0 > n) {
        i2 = 0;
        i3 = 0;
      } else {
        if (((int32_T)(b_kk + 1.0) < 1) ||
            ((int32_T)(b_kk + 1.0) > seq->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_kk + 1.0), 1, seq->size[0],
                                        &pg_emlrtBCI, (emlrtCTX)sp);
        }
        i2 = (int32_T)(b_kk + 1.0) - 1;
        if (((int32_T)n < 1) || ((int32_T)n > seq->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, seq->size[0],
                                        &og_emlrtBCI, (emlrtCTX)sp);
        }
        i3 = (int32_T)n;
      }
      iv[0] = 1;
      loop_ub = i3 - i2;
      iv[1] = loop_ub;
      st.site = &yj_emlrtRSI;
      indexShapeCheck(&st, seq->size[0], iv);
      if (b_kk + 1.0 > n) {
        i3 = -1;
        i4 = -1;
      } else {
        if (((int32_T)(b_kk + 1.0) < 1) ||
            ((int32_T)(b_kk + 1.0) > pas_col->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_kk + 1.0), 1,
                                        pas_col->size[0], &ng_emlrtBCI,
                                        (emlrtCTX)sp);
        }
        i3 = (int32_T)(b_kk + 1.0) - 2;
        if (((int32_T)n < 1) || ((int32_T)n > pas_col->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)n, 1, pas_col->size[0],
                                        &mg_emlrtBCI, (emlrtCTX)sp);
        }
        i4 = (int32_T)n - 1;
      }
      i5 = b_y->size[0];
      b_y->size[0] = ii_data;
      emxEnsureCapacity_real_T(sp, b_y, i5, &qk_emlrtRTEI);
      for (i5 = 0; i5 < ii_data; i5++) {
        b_y->data[i5] = pas_col->data[i1 + i5] * (b_kk + 1.0);
      }
      st.site = &yj_emlrtRSI;
      i1 = c_y->size[0];
      c_y->size[0] = loop_ub;
      emxEnsureCapacity_real_T(&st, c_y, i1, &rk_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        c_y->data[i1] = seq->data[i2 + i1] - b_kk;
      }
      b_st.site = &fh_emlrtRSI;
      c_st.site = &gh_emlrtRSI;
      d_st.site = &hh_emlrtRSI;
      e_st.site = &mf_emlrtRSI;
      f_st.site = &ih_emlrtRSI;
      if (b_y->size[0] <= c_y->size[0]) {
        i1 = b_y->size[0];
      } else {
        i1 = c_y->size[0];
      }
      p = true;
      b_p = true;
      ii_data = 0;
      exitg1 = false;
      while ((!exitg1) && (ii_data < 2)) {
        if (ii_data + 1 <= 1) {
          i2 = i1;
          i5 = b_y->size[0];
        } else {
          i2 = 1;
          i5 = 1;
        }
        if (i2 != i5) {
          b_p = false;
          exitg1 = true;
        } else {
          ii_data++;
        }
      }
      if (b_p) {
        b_p = true;
        ii_data = 0;
        exitg1 = false;
        while ((!exitg1) && (ii_data < 2)) {
          if (ii_data + 1 <= 1) {
            i2 = i1;
            i5 = c_y->size[0];
          } else {
            i2 = 1;
            i5 = 1;
          }
          if (i2 != i5) {
            b_p = false;
            exitg1 = true;
          } else {
            ii_data++;
          }
        }
        if (!b_p) {
          p = false;
        }
      } else {
        p = false;
      }
      if (!p) {
        emlrtErrorWithMessageIdR2018a(&f_st, &d_emlrtRTEI, "MATLAB:dimagree",
                                      "MATLAB:dimagree", 0);
      }
      f_st.site = &nf_emlrtRSI;
      g_st.site = &jh_emlrtRSI;
      if (b_y->size[0] <= c_y->size[0]) {
        i1 = b_y->size[0];
      } else {
        i1 = c_y->size[0];
      }
      if (b_y->size[0] <= c_y->size[0]) {
        loop_ub = b_y->size[0];
      } else {
        loop_ub = c_y->size[0];
      }
      p = true;
      b_p = true;
      ii_data = 0;
      exitg1 = false;
      while ((!exitg1) && (ii_data < 2)) {
        if (ii_data + 1 <= 1) {
          i2 = i1;
          i5 = b_y->size[0];
        } else {
          i2 = 1;
          i5 = 1;
        }
        if (i2 != i5) {
          b_p = false;
          exitg1 = true;
        } else {
          ii_data++;
        }
      }
      if (b_p) {
        b_p = true;
        ii_data = 0;
        exitg1 = false;
        while ((!exitg1) && (ii_data < 2)) {
          if (ii_data + 1 <= 1) {
            i2 = i1;
            i5 = c_y->size[0];
          } else {
            i2 = 1;
            i5 = 1;
          }
          if (i2 != i5) {
            b_p = false;
            exitg1 = true;
          } else {
            ii_data++;
          }
        }
        if (!b_p) {
          p = false;
        }
      } else {
        p = false;
      }
      if (!p) {
        emlrtErrorWithMessageIdR2018a(&g_st, &d_emlrtRTEI, "MATLAB:dimagree",
                                      "MATLAB:dimagree", 0);
      }
      g_st.site = &kh_emlrtRSI;
      if ((1 <= loop_ub) && (loop_ub > 2147483646)) {
        h_st.site = &pf_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }
      ii_data = b_y->size[0];
      for (i1 = 0; i1 < ii_data; i1++) {
        b_y->data[i1] /= c_y->data[i1];
      }
      ii_data = i4 - i3;
      if (ii_data != b_y->size[0]) {
        emlrtSubAssignSizeCheck1dR2017a(ii_data, b_y->size[0], &ib_emlrtECI,
                                        (emlrtCTX)sp);
      }
      for (i1 = 0; i1 < ii_data; i1++) {
        pas_col->data[(i3 + i1) + 1] = b_y->data[i1];
      }
    }
    if (b_kk > pas_col->size[0]) {
      i1 = 0;
      i2 = 0;
    } else {
      if (((int32_T)b_kk < 1) || ((int32_T)b_kk > pas_col->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_kk, 1, pas_col->size[0],
                                      &lg_emlrtBCI, (emlrtCTX)sp);
      }
      i1 = (int32_T)b_kk - 1;
      if (pas_col->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(pas_col->size[0], 1, pas_col->size[0],
                                      &kg_emlrtBCI, (emlrtCTX)sp);
      }
      i2 = pas_col->size[0];
    }
    iv[0] = 1;
    ii_data = i2 - i1;
    iv[1] = ii_data;
    st.site = &ak_emlrtRSI;
    indexShapeCheck(&st, pas_col->size[0], iv);
    st.site = &ak_emlrtRSI;
    i2 = b_pas_col->size[0];
    b_pas_col->size[0] = ii_data;
    emxEnsureCapacity_boolean_T(&st, b_pas_col, i2, &pk_emlrtRTEI);
    for (i2 = 0; i2 < ii_data; i2++) {
      b_pas_col->data[i2] = (pas_col->data[i1 + i2] > N_kk);
    }
    b_st.site = &uj_emlrtRSI;
    eml_find(&b_st, b_pas_col, (int32_T *)&ii_data, &loop_ub);
    if (loop_ub == 0) {
      maxx = n - 1.0;
    } else {
      maxx = ((real_T)ii_data + b_kk) - 2.0;
    }
    if (((int32_T)b_kk < 1) || ((int32_T)b_kk > kcomb->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)b_kk, 1, kcomb->size[1],
                                    &ug_emlrtBCI, (emlrtCTX)sp);
    }
    kcomb->data[(int32_T)b_kk - 1] = n - maxx;
    if (maxx >= b_kk) {
      st.site = &bk_emlrtRSI;
      N_kk -= bc(&st, maxx, b_kk);
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtCTX)sp);
    }
  }
  emxFree_boolean_T(&b_pas_col);
  emxFree_real_T(&c_y);
  emxFree_real_T(&b_y);
  emxFree_real_T(&seq);
  emxFree_real_T(&pas_col);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtCTX)sp);
}

/* End of code generation (lexunrank.c) */
