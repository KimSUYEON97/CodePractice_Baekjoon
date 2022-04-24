#include <stdio.h>
#define cycle(n) (n%10)*10 + ((n/10)+(n%10))%10
int main(){
    int n,t,count=1;
    scanf("%d",&n);
    t=cycle(n);
    while(n!=t){
        count++;
        t=cycle(t);
    }
    printf("%d",count);
    return 0;
}