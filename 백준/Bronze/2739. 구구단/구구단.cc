#include <stdio.h>

#define gugu(n) for(int i=1;i<10;i++){printf("%d * %d = %d\n",n,i,n*i);}
int main(){
    int n;
    scanf("%d",&n);
    gugu(n);
    return 0;
}