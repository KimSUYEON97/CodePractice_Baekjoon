#include <stdio.h>
//EOF End Of File 도달시 읽어올 경우 -1 반환
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b) != -1){
        printf("%d\n",a+b);
    }
    return 0;
}