#include <stdio.h>

int fiv(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fiv(n-1)+fiv(n-2);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fiv(n));
    return 0;
}