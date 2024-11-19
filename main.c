#include <stdio.h>

int moduleExp(int a,int m,int n){
  int res = 1;
  for(int i = 0; i<n; i++){
    res = (res%m * a%m)%m;
  }
  return res;
}

int main(int argc, char *argv[]){
  int a = 22; //base
  int m = 8; //module
  int n = 5; //exponent
  
  int res = moduleExp(a,m,n);
  printf("%d\n", res);

  return 0;
}
