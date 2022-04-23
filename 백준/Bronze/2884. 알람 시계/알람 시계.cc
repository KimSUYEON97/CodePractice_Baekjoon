#include <stdio.h>

int main(){
    int h,m;
    int t = 45;
    scanf("%d %d",&h,&m);
    if( t-m > 0){
        m = 60-t+m;
        if(h==0){
            h=23;
        }
        else{
            h-=1;
        }
    }
    else{
        m -= t;
    }
    printf("%d %d",h,m);
    return 0;
}