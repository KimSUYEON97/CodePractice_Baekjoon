#include <stdio.h>
#define max(x,y) ((x)>(y)?true:false)
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        for (int j=n;j>0;j--){
            if(max(j,i)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}