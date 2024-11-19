#include <stdlib.h>
#include "arrFunc.h"

void addNToarr(int **arr, int n, int *size) {
    *arr = (int*) realloc(*arr, (*size + 1) * sizeof(int));
    (*arr)[*size] = n;
    (*size)++;
}

void reverseArr(int **arr, int **revArr, int *size, int *sizeRev){
    *sizeRev = 0;
    while (*sizeRev!=*size){
        addNToarr(revArr,(*arr)[*size-*sizeRev-1],sizeRev);
    }
}