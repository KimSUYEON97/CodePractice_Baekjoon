#include <stdio.h>

int main(){
    int x,f=1,cnt=0;
    
    scanf("%d",&x);
    if(x==1){
        printf("1/1");
        return 0;
    }
    while(x>=(f+cnt)){
        f=f+cnt;
        cnt++;
    }
    
    if(cnt % 2 ==0){
        printf("%d/%d",1+(x-f),cnt-(x-f));
    }else{
        printf("%d/%d",cnt-(x-f),1+(x-f));
    }
       
    return 0;
}