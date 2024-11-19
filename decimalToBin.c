#include "decimalToBin.h"
#include "arrFunc.h"
#include <stdlib.h>

void dToB(int **arr, int num, int *size) {
    *size = 0;
    while (num != 0) {
        addNToarr(arr, num % 2, size);
        num /= 2;
    }
}

