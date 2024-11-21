
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

int pow(int n,int b){
    if (b==0){
        return 1;
    }
    return n*pow(n,b-1);
}

int stringtoint(char *arr,int pos,int index){
    if (pos==0){
        return 0;
    }

    return (arr[index]-48)*pow(10,pos-1)+stringtoint(arr,pos-1,index+1);
}