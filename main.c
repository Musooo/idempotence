#include <stdio.h>
#include <stdlib.h>
#include "decimalToBin.h"
#include "arrFunc.h"

int moduleExp(int a, int m, int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res = (res % m * a % m) % m;
    }
    return res;
}

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]); // base
    int n = atoi(argv[2]); // exponent
    int m = atoi(argv[3]); // modulo

    int res = moduleExp(a, m, n);
    printf("%d\n", res);

    int *arr = NULL;
    int size = 0;
    dToB(&arr, a, &size);

    printArr(arr,size);

    int *revArr = NULL;
    int revSize = 0;
    reverseArr(&arr, &revArr,&size,&revSize);

    printArr(revArr,size);

    free(arr);
    free(revArr);
    return 0;
}