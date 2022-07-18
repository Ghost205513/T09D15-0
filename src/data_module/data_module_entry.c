#include "./../data_libs/data_io.h"
#include "data_process.h"

void main()
{
    double *data;
    int n;
    
    data = calloc(1, sizeof(double));

    input(data, n);

    if (normalization(data, &n))
        output(data, n);
    else
        printf("ERROR");  
}
