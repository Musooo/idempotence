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

int binExp(int *arr, int a, int m, int size){
    int r = 1;
    for (int i = 0; i<=size-1; i++){
        if (arr[i]==1){
            r = (r * a)%m;
        }
        a = (a*a)%m;
    }
    return r;
}

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]); // base
    int n = atoi(argv[2]); // exponent
    int m = atoi(argv[3]); // modulo

    // int res = moduleExp(a, m, n);
    // printf("%d\n", res);

    int *arr = NULL;
    int size = 0;
    dToB(&arr, n, &size);
    printArr(arr,size);

    int result = binExp(arr,a,m,size);
    printf("%d\n", result);

    free(arr);
    return 0;
}