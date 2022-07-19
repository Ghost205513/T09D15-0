#include "data_stat.h"

double max_(double *data, int n) {
    double ans = data[0];

    for (int i = 1; i < n; i++) {
        if (ans < data[i])
            ans = data[i];
    }

    return ans;
}

double min_(double *data, int n) {
    double ans = data[0];

    for (int i = 1; i < n; i++) {
        if (ans > data[i])
            ans = data[i];
    }

    return ans;
}
