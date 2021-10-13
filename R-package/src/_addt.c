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

    The dimensions of y and x, n and p, are passed by R.
    
    'la' is complicated - it is either a double value specifying the BoxCox 
        transformation to be used or an empty value for no transformation. Ideally
        I should be able to pass a NULL pointer from R to C, but I do not know how 
        to do this. A trivial solution would be to pass an array of length two, with 
        the second element equal to 0/1, telling whether the first element, which 
        is caryng the actual value, is present.
*/
void r_addt(double *yy, double *xx, double *ww, int *nn, int *pp,  
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
    
    /* Initialize function 'addt' input arguments. ==============================*/
    
    y = argInit_vector(yy, nn);         //  Initialize function input argument 'y'
    X = argInit_matrix(xx, nn, pp);     //  Initialize function input argument 'X'
    w = argInit_vector(ww, nn);         //  Initialize function input argument 'w'

    //  Initialize function input argument 'la'
    argInit_scalar(r_la, b_la, la_data, la_size);

    // Initialize the output structure ===========================
    //  VT::13.10.2021 - upgrade to MATLAB 2021b - now the output structue 
    //  is with dynamic allocation. The elements S2add, Tadd and pval are 
    //  now not doubles but emxArray. 
    
    emxInit_struct_addt_T(&out);

    // Rprintf("\nCalling addt_wrapper()...\n"); 

    addt_wrapper(y, X, w, b_intercept, la_data, la_size, b_nocheck, &out);

    /*
    
    Rprintf("\nReturning from addt_wrapper()...\n"); 
    Rprintf("\nS2add dimensions: %d, %d \n", out.S2add->size[0], out.S2add->size[1]); 
    Rprintf("Tadd dimensions: %d, %d \n", out.Tadd->size[0], out.Tadd->size[1]); 
    Rprintf("\npval dimensions: %d, %d \n", out.pval->size[0], out.pval->size[1]); 
    
    */
        
    *b = out.b.data[0];
    *S2add = out.S2add->data[0];
    *Tadd = out.Tadd->data[0];
    *pval = out.pval->data[0];
}
