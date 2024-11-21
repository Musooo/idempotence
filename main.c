#include <stdio.h>
#include <stdlib.h>
#include "decimalToBin.h"
#include "arrFunc.h"
#include "mathcalc.h"

int main(int argc, char *argv[]) {
    // int a = atoi(argv[1]); // base
    // int n = atoi(argv[2]); // exponent
    // int m = atoi(argv[3]); // modulo

    // // int res = moduleExp(a, m, n);
    // // printf("%d\n", res);

    // int *arr = NULL;
    // int size = 0;
    // dToB(&arr, n, &size);
    // printArr(arr,size);

    // int result = binExp(arr,a,m,size);
    // printf("%d\n", result);

    // free(arr);
    int num = pow(2,3);
    printf("%d\n",num);
    return 0;
}