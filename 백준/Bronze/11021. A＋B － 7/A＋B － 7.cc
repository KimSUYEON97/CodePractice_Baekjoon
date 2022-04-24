#include <stdio.h>
#define plus(t,a,b) printf("Case #%d: %d\n",t,a+b);
int main(){
    int t,a,b;
    scanf("%d",&t);
    for(int i=1;i<t+1;i++){
        scanf("%d %d",&a,&b);
        plus(i,a,b);
    }
    return 0;
}