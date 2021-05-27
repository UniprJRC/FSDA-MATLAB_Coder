void mycc(double *x, int *len)
{
    int n = *len;
    
    for (int i = 0; i < n; i++)
        x[i] = x[i] * x[i];
}

