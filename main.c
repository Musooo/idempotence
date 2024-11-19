#include <stdio.h>
#include "decimalToBin.h"

int moduleExp(int a, int m, int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res = (res % m * a % m) % m;
    }
    return res;
}

int main(int argc, char *argv[]) {
    int a = 22; // base
    int m = 8; // modulo
    int n = 5; // esponente

    int res = moduleExp(a, m, n);
    printf("%d\n", res);

    int *arr = NULL;
    int size = 0;
    dToB(&arr, a, &size);

    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}