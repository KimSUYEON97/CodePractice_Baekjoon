#include <stdio.h>

int main(){
    int n,place=0,maxN = 0;
    for (int i=0;i<9;i++){
        scanf("%d",&n);
        if(maxN<n){
            place = i+1;
            maxN = n;
        }
    }
    printf("%d\n%d",maxN,place);
    return 0;
}