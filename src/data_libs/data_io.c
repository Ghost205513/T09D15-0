#include "data_io.h"


int input(double *data, int *n) {
    int flag = 0;

    if (scanf("%d", n) == 0 || *n < 0) {
        flag = 1;
    } else {
        data = realloc(data, *n * sizeof(double));

        for (int i = 0; i < *n; i++) {
            if (scanf("%lf", &data[i]) == 0)
                flag = 1;
        }
    }

    return flag;
}

void output(double *data, int n) {
    printf("%.2lf", data[0]);

    for (int i = 1; i < n; i++) {
        printf(" %.2lf", data[i]);
    }
}

