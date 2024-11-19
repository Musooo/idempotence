#include "decimalToBin.h"
#include <stdlib.h>

void dToB(int **arr, int num, int *size) {
    *size = 0;
    while (num != 0) {
        addNToarr(arr, num % 2, size);
        num /= 2;
    }
}

void addNToarr(int **arr, int n, int *size) {
    *arr = (int*) realloc(*arr, (*size + 1) * sizeof(int));
    (*arr)[*size] = n;
    (*size)++;
}