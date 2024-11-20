#ifndef ARRFUNC_H
#define ARRFUNC_H

#include <stdlib.h>
#include <stdio.h>

void addNToarr(int **arr, int n, int *size);
void reverseArrCopy(int **arr, int **revArr, int *size, int *sizeRev);
void printArr(int *arr, int size);
void reverseArr(int *arr,int *size);

#endif // ARRFUNC_H