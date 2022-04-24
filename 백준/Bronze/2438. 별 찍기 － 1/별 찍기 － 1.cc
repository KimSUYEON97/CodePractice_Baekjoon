#include <stdio.h>
#define star(n) for(int i=n;i>0;i--){printf("*");}

int main(){
    int n;
    scanf("%d",&n);
    for (int j=1;j<n+1;j++){
        star(j);
        printf("\n");
    }
    return 0;
}