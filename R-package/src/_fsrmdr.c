#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "_utils.h"

/* Include files */
#include "FSRmdr_wrapper.h"

void r_fsrmdr(double *yy, double *xx, int *nn, int *pp, 
            double *xbsb, int *nbsb, 
            double *xbsbsteps, int *nbsbsteps, int *bsbmfullrank, double *xconstr, int *lconstr, double *threshlevoutX, int *internationaltrade,
            double *init, int *intercept, int *msg, int *nocheck,
            double *xmdr, int *nmdr, int *pmdr, 
            double *xUn, int *nUn, int *pUn, 
            double *xBB, int *nBB, int *pBB,
            double *xBols, int *nBols, int *pBols,
            double *xS2, int *nS2, int *pS2)
{
    int i, loop_ub;
    
    bool b_intercept = *intercept != 0;
    bool b_msg = *msg != 0;
    bool b_nocheck = *nocheck != 0;
    bool b_bsbmfullrank = *bsbmfullrank != 0;
    bool b_internationaltrade = *internationaltrade != 0;
   
    
    emxArray_real_T *y;
    emxArray_real_T *X;
    emxArray_real_T *bsb;
    emxArray_real_T *bsbsteps;
    emxArray_real_T *constr;

    double threshlevoutX_data[1];
    int threshlevoutX_size[2];

    emxArray_real_T *mdr;
    emxArray_real_T *Un;
    emxArray_real_T *BB;
    emxArray_real_T *Bols;
    emxArray_real_T *S2;

    /* Initialize function 'r_fsrmdr' input arguments. ==============================*/
    
    y = argInit_vector(yy, nn);             //  Initialize function input argument 'y'  
    X = argInit_matrix(xx, nn, pp);         //  Initialize function input argument 'X'
    bsb = argInit_vector(xbsb, nbsb);       //  Initialize function input argument 'bsb'
    bsbsteps = argInit_vector(xbsbsteps, nbsbsteps);        //  Initialize function input argument 'bsbsteps'
    constr = argInit_vector(xconstr, nn);   //  Initialize function input argument 'y'  
    argInit_scalar2(threshlevoutX, threshlevoutX_data, threshlevoutX_size);

    /* Initialize function 'r_fsrmdr' output arguments. ==============================*/
    mdr = emxCreate_real_T(*nmdr, *pmdr);   //  Initialize function output argument 'mdr'
    Un = emxCreate_real_T(*nUn, *pUn);      //  Initialize function output argument 'Un'
    BB =  emxCreate_real_T(*nBB, *pBB);     //  Initialize function input argument 'BB'
    Bols =  emxCreate_real_T(*nBols, *pBols);   //  Initialize function input argument 'Bols'
    S2 =  emxCreate_real_T(*nS2, *pS2);     //  Initialize function input argument 'S2'
                      
    //Rprintf("\ny dimensions: %d %d\n", y->size[0], y->size[1]); 
    //disp_dble(y->data, y->size[0]);
    //Rprintf("\nX dimensions: %d, %d \n", X->size[0], X->size[1]); 
    //disp_lmat_cm(X->data, X->size[0], X->size[1]);
    //Rprintf("\nbsb dimensions: %d %d\n", bsb->size[0], bsb->size[1]); 
    //Rprintf("\nbsbsteps dimensions: %d %d\n", bsbsteps->size[0], bsbsteps->size[1]); 
    //Rprintf("\nconstr dimensions: %d %d\n", constr->size[0], constr->size[1]); 

    //Rprintf("\nCalling FSRmdr ...\n");                  

    FSRmdr_wrapper(y, X, bsb, b_bsbmfullrank, bsbsteps, constr, *init, b_intercept, 
        b_internationaltrade, b_msg, b_nocheck, threshlevoutX_data, threshlevoutX_size, mdr, Un, BB, Bols, S2);
    
    //Rprintf("%s ", "Returning from FSRmdr and copying parameters ...\n");                  

    // Check the sizes of the returned vectors and matrices in the structure out.
    if(mdr->size[0] != *nmdr || mdr->size[1] != *pmdr)
        Rprintf("\nWARNING: the size of output matrix mdr changed: was %d, %d, now is %d, %d \n", *nmdr, *pmdr, mdr->size[0], mdr->size[1]); 
    if(Un->size[0] != *nUn || Un->size[1] != *pUn)
        Rprintf("\nWARNING: the size of output matrix Un changed: was %d, %d, now is %d, %d \n", *nUn, *pUn, Un->size[0], Un->size[1]); 
    if(BB->size[0] != *nBB || BB->size[1] != *pBB)
        Rprintf("\nWARNING: the size of output matrix BB changed: was %d, %d, now is %d, %d \n", *nBB, *pBB, BB->size[0], BB->size[1]); 
    if(Bols->size[0] != *nBols || Bols->size[1] != *pBols)
        Rprintf("\nWARNING: the size of output matrix Bols changed: was %d, %d, now is %d, %d \n", *nBols, *pBols, Bols->size[0], Bols->size[1]); 
    if(S2->size[0] != *nS2 || S2->size[1] != *pS2)
        Rprintf("\nWARNING: the size of output matrix S2 changed: was %d, %d, now is %d, %d \n", *nS2, *pS2, S2->size[0], S2->size[1]); 

    // Copy the output matrices mdr, Un, BB, Bols and S2
    loop_ub = mdr->size[0] * mdr->size[1];
    for(i=0; i < loop_ub; i++) {
        xmdr[i] = mdr->data[i];
    }

    loop_ub = Un->size[0] * Un->size[1];
    for(i=0; i < loop_ub; i++) {
        xUn[i] = Un->data[i];
    }

    loop_ub = BB->size[0] * BB->size[1];
    for(i=0; i < loop_ub; i++) {
        xBB[i] = BB->data[i];
    }

    loop_ub = Bols->size[0] * Bols->size[1];
    for(i=0; i < loop_ub; i++) {
        xBols[i] = Bols->data[i];
    }

    loop_ub = S2->size[0] * S2->size[1];
    for(i=0; i < loop_ub; i++) {
        xS2[i] = S2->data[i];
    }


    emxDestroyArray_real_T(S2);
    emxDestroyArray_real_T(Bols);
    emxDestroyArray_real_T(BB);
    emxDestroyArray_real_T(Un);
    emxDestroyArray_real_T(mdr);
}

