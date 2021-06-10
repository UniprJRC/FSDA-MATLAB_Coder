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
#include "bc.h"
#include "find.h"
#include "fsdaC_emxutil.h"
#include "fsdaC_types.h"
#include "rt_nonfinite.h"
#include "rt_nonfinite.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
void b_lexunrank(double n, double k, double N, emxArray_real_T *kcomb)
{
  emxArray_boolean_T *b_pas_col;
  emxArray_int32_T *x;
  emxArray_real_T *pas_col;
  emxArray_real_T *seq;
  emxArray_real_T *y;
  double N_kk;
  double b_kk;
  double maxx;
  int i;
  int i1;
  int i2;
  int i3;
  int i4;
  int kk;
  int loop_ub_tmp;
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
  loop_ub_tmp = (int)k;
  kcomb->size[1] = (int)k;
  emxEnsureCapacity_real_T(kcomb, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    kcomb->data[i] = 0.0;
  }
  emxInit_real_T(&pas_col, 1);
  /*  initialise the count of the calls to binomial coefficient values (via */
  /*  call to bc function or access to Pascal matrix cells) */
  /*     %% call_bc OPTION: */
  N_kk = N;
  loop_ub_tmp = (int)n;
  i = pas_col->size[0];
  pas_col->size[0] = (int)n;
  emxEnsureCapacity_real_T(pas_col, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    pas_col->data[i] = 1.0;
  }
  emxInit_real_T(&y, 2);
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
    loop_ub_tmp = (int)floor(n - 1.0);
    y->size[1] = loop_ub_tmp + 1;
    emxEnsureCapacity_real_T(y, i);
    for (i = 0; i <= loop_ub_tmp; i++) {
      y->data[i] = (double)i + 1.0;
    }
  }
  emxInit_real_T(&seq, 1);
  i = seq->size[0];
  seq->size[0] = y->size[1];
  emxEnsureCapacity_real_T(seq, i);
  loop_ub_tmp = y->size[1];
  for (i = 0; i < loop_ub_tmp; i++) {
    seq->data[i] = y->data[i];
  }
  i = (int)(((-1.0 - k) + 1.0) / -1.0);
  emxInit_int32_T(&x, 1);
  emxInit_boolean_T(&b_pas_col, 1);
  for (kk = 0; kk < i; kk++) {
    b_kk = k + -(double)kk;
    /*  The next 'if' statement builds the required part of column kk+1 */
    /*  of the pascal matrix, which is the argument of the 'find' */
    /*  statement which follows. */
    /*  This replaces the loop with repeated calling of bc: */
    /*          for x = kk:n-1 */
    /*              if  bc(x,kk)> N_kk, break, end */
    /*          end */
    if (b_kk == k) {
      i1 = (int)((n - 1.0) + (1.0 - b_kk));
      for (loop_ub_tmp = 0; loop_ub_tmp < i1; loop_ub_tmp++) {
        maxx = b_kk + (double)loop_ub_tmp;
        pas_col->data[(int)(maxx + 1.0) - 1] =
            pas_col->data[(int)maxx - 1] * (maxx + 1.0) / ((maxx + 1.0) - b_kk);
      }
    } else {
      if (b_kk + 1.0 > n) {
        i1 = 1;
        i2 = 1;
        i3 = -1;
        i4 = 0;
      } else {
        i1 = (int)(b_kk + 1.0);
        i2 = (int)(b_kk + 1.0);
        i3 = (int)(b_kk + 1.0) - 2;
        i4 = (int)n;
      }
      loop_ub_tmp = (i4 - i3) - 1;
      i4 = y->size[0] * y->size[1];
      y->size[0] = 1;
      y->size[1] = loop_ub_tmp;
      emxEnsureCapacity_real_T(y, i4);
      for (i4 = 0; i4 < loop_ub_tmp; i4++) {
        y->data[i4] = pas_col->data[(i1 + i4) - 1] * (b_kk + 1.0) /
                      (seq->data[(i2 + i4) - 1] - b_kk);
      }
      loop_ub_tmp = y->size[1];
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        pas_col->data[(i3 + i1) + 1] = y->data[i1];
      }
    }
    if (b_kk > pas_col->size[0]) {
      i1 = 0;
      i2 = 0;
    } else {
      i1 = (int)b_kk - 1;
      i2 = pas_col->size[0];
    }
    loop_ub_tmp = i2 - i1;
    i2 = b_pas_col->size[0];
    b_pas_col->size[0] = loop_ub_tmp;
    emxEnsureCapacity_boolean_T(b_pas_col, i2);
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      b_pas_col->data[i2] = (pas_col->data[i1 + i2] > N_kk);
    }
    c_eml_find(b_pas_col, x);
    if (x->size[0] == 0) {
      maxx = n - 1.0;
    } else {
      maxx = ((double)x->data[0] + b_kk) - 2.0;
    }
    kcomb->data[(int)b_kk - 1] = n - maxx;
    if (maxx >= b_kk) {
      N_kk -= bc(maxx, b_kk);
    }
  }
  emxFree_boolean_T(&b_pas_col);
  emxFree_real_T(&y);
  emxFree_int32_T(&x);
  emxFree_real_T(&seq);
  emxFree_real_T(&pas_col);
}

void lexunrank(double n, double k, double N, const emxArray_real_T *pascalM,
               emxArray_real_T *kcomb)
{
  emxArray_boolean_T pascalM_data;
  emxArray_int32_T *b_i;
  double N_kk;
  double b_kk;
  double maxx;
  int i;
  int i1;
  int kk;
  int loop_ub_tmp;
  int pascalM_size;
  bool b_pascalM_data[20000];
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
  loop_ub_tmp = (int)k;
  kcomb->size[1] = (int)k;
  emxEnsureCapacity_real_T(kcomb, i);
  for (i = 0; i < loop_ub_tmp; i++) {
    kcomb->data[i] = 0.0;
  }
  /*  initialise the count of the calls to binomial coefficient values (via */
  /*  call to bc function or access to Pascal matrix cells) */
  /*     %% FAST OPTION: */
  /*  binomial coefficients are taken from the pascal matrix rather than */
  /*  computing them using bc. Of course this option is space greedy. */
  N_kk = N;
  i = (int)(((-1.0 - k) + 1.0) / -1.0);
  emxInit_int32_T(&b_i, 1);
  for (kk = 0; kk < i; kk++) {
    b_kk = k + -(double)kk;
    /*  istruction find faster than logical extraction */
    maxx = n - b_kk;
    if (1.0 > maxx) {
      loop_ub_tmp = 0;
    } else {
      loop_ub_tmp = (int)maxx;
    }
    pascalM_size = loop_ub_tmp;
    for (i1 = 0; i1 < loop_ub_tmp; i1++) {
      b_pascalM_data[i1] =
          (pascalM->data[i1 + pascalM->size[0] * ((int)(b_kk + 1.0) - 1)] >
           N_kk);
    }
    pascalM_data.data = &b_pascalM_data[0];
    pascalM_data.size = &pascalM_size;
    pascalM_data.allocatedSize = 20000;
    pascalM_data.numDimensions = 1;
    pascalM_data.canFreeData = false;
    c_eml_find(&pascalM_data, b_i);
    /*  seqnmkk=1:n-kk; */
    /*  x=seqnmkk(pascalM(seqnmkk,kk+1) > N_kk); */
    if (b_i->size[0] == 0) {
      /*  || x1==n-kk */
      maxx = n - 1.0;
    } else {
      maxx = ((double)b_i->data[0] + b_kk) - 2.0;
    }
    kcomb->data[(int)b_kk - 1] = n - maxx;
    if (maxx >= b_kk) {
      N_kk -= pascalM->data[((int)((maxx - b_kk) + 1.0) +
                             pascalM->size[0] * (int)(unsigned int)b_kk) -
                            1];
      /*  this is: N_kk - bc(maxx,kk) */
    }
  }
  emxFree_int32_T(&b_i);
}

/* End of code generation (lexunrank.c) */
