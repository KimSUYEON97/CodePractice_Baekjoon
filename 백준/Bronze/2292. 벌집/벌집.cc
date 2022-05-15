#include <stdio.h>

int main(){
    long long n,a=1;
    
    scanf("%lld",&n);
    for(long long i=0;i>=0;i++){
        a=a+(6*i);
        if(n<=a){
            printf("%lld",i+1);
            break;
        }
    }
    return 0;
}