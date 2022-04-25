#include <stdio.h>

int main(){
    int N[42]={0};
    int input,left,count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&input);
        left = input%42;
        N[left] = N[left]+1;
    }
    for(int i=0;i<42;i++){
        if(N[i]>0){
            count +=1;
        }
    }
    printf("%d",count);
    return 0;
}