#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decimalToBin.h"
#include "arrFunc.h"
#include "mathcalc.h"

int main(int argc, char *argv[]) {
    int a = stringtoint(argv[1],strlen(argv[1]),0); //base
    int n = stringtoint(argv[2],strlen(argv[2]),0); //exponent
    int m = stringtoint(argv[3],strlen(argv[3]),0); //module

    int *arr = NULL;
    int size = 0;
    dToB(&arr, n, &size);
    int result = binExp(arr,a,m,size);
    printf("%d\n", result);

    free(arr);
    return 0;
}