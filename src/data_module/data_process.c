#include "data_process.h"
#include <math.h>

int normalization(double *data, int n) {
    int result = 1;
    double max_value = max_(data, n);
    double min_value = min_(data, n);
    double size = max_value - min_value;

    if (fabs(size) < EPS) {
        for (int i = 0; i < n; i++) {
            if (size != 0)
                data[i] = data[i] / size - min_value / size;
            else
                data[i] = 1.00;
        }
    } else {
        result = 0;
    }

    return result;
}
