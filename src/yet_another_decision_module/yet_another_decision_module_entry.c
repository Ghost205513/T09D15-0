#include "./../data_libs/data_stat.h"
#include "./../data_libs/data_io.h"
#include "decision.h"

void main() {
    double *data;
    int n;

    data = calloc(1, sizeof(double));

    if (input(data, &n) == 1)
        printf("n/a");
    else if (make_decision(data, n))
        printf("YES");
    else
        printf("NO");
    
    free(data);
}
