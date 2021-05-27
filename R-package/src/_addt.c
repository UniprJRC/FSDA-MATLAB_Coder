#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Include files */
#include "_utils.h"
#include "addt_wrapper.h"

/*
    The parameters passed to MATLAB are:
    y, X, bsb, bsbsteps, init, intercept, msg, nocheck. 
        
    'intercept' and 'nocheck' are bool, default to true and false

    The dimensions of y and x, n and p, are passed by R, but also the corrected by 
    the R version of chkinputR() function dimensions n1 and p1 are passed.
    
    'la' is complicated - it is either a double value specifying the BoxCox 
        transformation to be used or an empty value for no transformation. Ideally
        I should be able to pass a NULL pointer from R to C, but I do not know how 
        to do this. A trivial solution would be to pass an array of length two, with 
        the second element equal to 0/1, telling whether the first element, which 
        is caryng the actual value, is present.
*/
void r_addt(double *yy, double *xx, double *ww, int *nn, int *pp, int *nn1, int *pp1, 
        int * intercept, double *la, int *nocheck, 
        double *b, double *S2add, double *Tadd, double*pval)
{
    bool b_intercept = *intercept != 0;
    bool b_nocheck = *nocheck != 0;
    double r_la = la[0];                    // the value of la
    bool b_la = la[1] != 0;                 // if la exists
   
    
    emxArray_real_T *X;
    emxArray_real_T *w;
    emxArray_real_T *y;

    struct_addt_T out;

    double la_data[1];
    int la_size[2];
    
/*-------------------------------------------------------------  
    Rprintf("%s  %d %d\n", "Starting r_addt: y:", *nn, *pp);    
    disp_dble(yy, *nn);
    Rprintf("%s ", "Starting addt: X\n");                   
    disp_lmat_cm(xx, *nn, *pp);
*/

    /* Initialize function 'addt' input arguments. ==============================*/
    
    //  Initialize function input argument 'y'
    y = argInit_vector(yy, nn);
    
    //  Initialize function input argument 'X'
    X = argInit_matrix(xx, nn, pp);
    
    //  Initialize function input argument 'w'. 
    w = argInit_vector(ww, nn);
    
/*-------------------------------------------------------------  
    Rprintf("\ny dimensions: %d \n", y->size[0]); 
    disp_dble(y->data, y->size[0]);
    Rprintf("\nX dimensions: %d, %d \n", X->size[0], X->size[1]); 
    disp_lmat_cm(X->data, X->size[0], X->size[1]);
*/

    //  Initialize function input argument 'la'
    argInit_scalar(r_la, b_la, la_data, la_size);

/*-------------------------------------------------------------  
    Rprintf("la_size:......%d %d\n", la_size[0], la_size[1]);
    disp_lmat_cm(la_data, la_size[0], la_size[1]);
*/

    addt_wrapper(y, X, w, b_intercept, la_data, la_size, b_nocheck, &out);
    
    emxDestroyArray_real_T(w);
    emxDestroyArray_real_T(X);
    emxDestroyArray_real_T(y);

    *b = out.b.data[0];
    *S2add = out.S2add.data[0];
    *Tadd = out.Tadd.data[0];
    *pval = out.pval.data[0];
}
