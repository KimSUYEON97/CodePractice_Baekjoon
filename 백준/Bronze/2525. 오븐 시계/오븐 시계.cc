#include <stdio.h>

int main(){
    int a,b,c;
    int h,m;
    scanf("%d %d %d",&a,&b,&c);
    h = a+(b+c)/60;
    m = (b+c); 
    if(h > 23){ h = h-24; }
    if(m > 59){ m = m%60; }
    printf("%d %d",h,m);
    return 0;
}