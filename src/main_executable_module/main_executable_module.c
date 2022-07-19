#include "./../data_libs/data_io.h"
#include "./../data_module/data_process.h"
#include "./../yet_another_decision_module/decision.h"

void sort(double *array, int length);
void qs(double *array, int left, int right);

int main() {
    double *data;
    int n;
    
    data = calloc(1, sizeof(double));

    printf("LOAD DATA...\n");

    if (input(data, &n) == 1) {
        printf("n/a");
    } else {
        printf("RAW DATA:\n\t");
        output(data, n);
        
        printf("\nNORMALIZED DATA:\n\t");
        if (normalization(data, n) == 1){
            output(data, n);

            printf("\nSORTED NORMALIZED DATA:\n\t");
            sort(data, n);
            output(data, n);

            printf("\nFINAL DECISION:\n\t");
            if (make_decision(data, n)){
                printf("YES");
            } else {
                printf("NO");
            }
        } else {
            printf("n/a");
        }
    }
}

void sort(double *array, int length) {
    qs(array, 0, length - 1);
}

void qs(double *array, int left, int right) {
    int i, j;
    double x;

    i = left;
    j = right;
    x = array[(left + right) / 2];

    do {
        while (i < right && array[i] < x)
            i++;

        while (j > left && x < array[j])
            j--;

        if (i <= j) {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j)
        qs(array, left, j);

    if (i < right)
        qs(array, i, right);
}
