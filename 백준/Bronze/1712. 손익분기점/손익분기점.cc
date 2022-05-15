#include <stdio.h>

int main(){
    int a,b,c;
    int bep = -1;
    scanf("%d %d %d",&a,&b,&c);
    
    if((c-b) <= 0){
        printf("%d",bep);
    }
    else{
        bep = (a/(c-b))+1;
        printf("%d",bep);
    }
    return 0;
}