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


double mean(double *data, int n) {
    int ans = 0;

    for (int i = 0; i < n; i++)
        ans += data[i];

    return (double) ans / (double) n;
}

double variance(double *data, int n) {
    double mean = 0;
    double ans = 0;

    for (int i = 0; i < n; i++)
        mean += (double) data[i];

    mean /= (double) n;

    for (int i = 0; i < n; i++)
        ans += ((double) data[i] - mean) * ((double) data[i] - mean);

    return ans / (double) n;
}

