#include <stdio.h>

//브루트포스는 설마 싶은 방식을 일일히 따지는 것임
int div(int n){
    int sum=0;
    sum+=n;
    while(n>0){
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}
int main(){
    int n,i,m=0;
    
    scanf("%d",&n);
    for(i=1;i<n;i++){
        m=div(i);
        if(m==n){
            printf("%d",i);
            return 0;
        }
    }
    printf("0");
    return 0;
}