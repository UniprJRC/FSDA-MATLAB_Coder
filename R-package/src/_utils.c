#include "_utils.h"

void disp_dble(double *a, int n)
{
    int i;
    for(i=0; i < n; i++) Rprintf("%lf ",a[i]);
    Rprintf("\n");
}

void disp_int(int *a, int n)
{
    int i;
    for(i=0; i < n; i++)
	Rprintf("%d ", a[i]);
    Rprintf("\n");
}

void disp_mat(double **a, int n, int m)
{
    int i,j;
    for(i=0; i < n; i++) {
	Rprintf("\n");
	for(j=0; j < m; j++) Rprintf("%10.8f ",a[i][j]);
    }
    Rprintf("\n");
}

/*
 * Display an nxp matrix stored in linear array in
 * row major order (C)
 */
void disp_lmat(double *a, int n, int p)
{
    int i,j;
    for(i=0; i < n; i++)
    {
	Rprintf("\n");
	for(j=0; j < p; j++)
	    Rprintf("%10.8f ", a[i*p+j]);
    }
    Rprintf("\n");
}


/*
 * Display an nxp matrix stored in linear array in
 * column major order (FORTRAN)
 */
void disp_lmat_cm(double *a, int n, int p)
{
    int i,j;
    for(i=0; i < n; i++)
    {
    	Rprintf("\n");
    	for(j=0; j < p; j++)
    	    Rprintf("%10.8f ", a[i+j*n]);
    }
    Rprintf("\n");
}


//===================================================================================
//
//  Function Definitions to handle MATLAB generated data types

// A scalar value which can be missing (b=false)
void argInit_scalar(double a, bool b, double result_data[], int result_size[2])
{
    if(b)
    {
        result_size[0] = 1;
        result_size[1] = 1;
    } else
    {
        result_size[0] = 0;
        result_size[1] = 0;
    }

    result_data[0] = a;
}

// A second version for scalar value which can be missing (b=false)
// - the argument a[] is a an array with two elements, the first one is 
//  the value and the second one indicates if the value exists or is missing. 
void argInit_scalar2(double a[], double result_data[], int result_size[2])
{
    if(a[1])
    {
        result_size[0] = 1;
        result_size[1] = 1;
    } else
    {
        result_size[0] = 0;
        result_size[1] = 0;
    }

    result_data[0] = a[0];
}

emxArray_real_T *argInit_vector(double *yy, const int *nn)
{

    return emxCreateWrapperND_real_T(yy, 1, nn);
}

emxArray_real_T *argInit_matrix(double *xx, const int *nn, const int *pp)
{
    return emxCreateWrapper_real_T(xx, *nn, *pp);
}

emxArray_real_T *argCreate_matrix(const int nn, const int pp)
{
    return emxCreate_real_T(nn, pp);
}

emxArray_real_T *argCreate_vector(const int nn)
{
    return emxCreateND_real_T(1, &nn);
}

