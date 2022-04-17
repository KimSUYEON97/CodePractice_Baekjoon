#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=b;
    for(int i=0;i<3;i++){
        printf("%d\n",a*(c%10));
        c=c/10;
    }
    printf("%d",a*b);
    return 0;
}