#include "data_io.h"

int input(double *data, int *n) {
    int flagg = 0;
    if (scanf("%d", n) == 0 || *n < 0) {
        flag = 1;
    } else {
        for (int i = 0; i < *n; i++){
            scanf("%d", *data[i]);
        }
    }
}
