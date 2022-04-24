#include <stdio.h>
#define min(x,y) ((x)<(y)?true:false)

int main(){
    int n,x,a;
    scanf("%d %d",&n,&x);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        if(min(a,x)){
            printf("%d ",a);
        }
    }
    return 0;
}