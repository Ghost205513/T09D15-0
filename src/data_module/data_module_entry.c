#include "./../data_libs/data_io.h"
#include "data_process.h"

int main() {
    double *data;
    int n;

    data = calloc(1, sizeof(double));

    if (input(data, &n) == 1)
        printf("n/a");
    else if (normalization(data, n))
        output(data, n);
    else
        printf("ERROR");
}
