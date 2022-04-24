#include <stdio.h>
#define plus(a,b) printf("%d\n",a+b)
int main(){
    int t,a,b;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        plus(a,b);
    }
    return 0;
}