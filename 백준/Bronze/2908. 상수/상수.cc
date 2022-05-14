#include <stdio.h>

int main(){
    int a,b,lefta,leftb,chga=0,chgb=0,baek=100;
    scanf("%d %d",&a,&b);
    
    lefta=a%10;
    leftb=b%10;
    a=a/10;
    b=b/10;
    
    while(lefta!=0 && leftb!=0){
        chga+=lefta*baek;
        chgb+=leftb*baek;
        baek=baek/10;
        lefta=a%10;
        leftb=b%10;
        a=a/10;
        b=b/10;
    }
    
    if(chga>chgb){
        printf("%d",chga);
    }else{
        printf("%d",chgb);
    }
    return 0;
}