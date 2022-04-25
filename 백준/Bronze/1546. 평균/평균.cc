#include <stdio.h>
#define max(x,y) ((x)>(y)) ? (x) : (y)
int main(){
    int n,maxS = -1;
    int score[1000];
    float avg = 0;
    
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&score[i]);
        maxS = max(maxS,score[i]);
    }
    
    for (int i=0;i<n;i++){
        avg = avg + (((float)score[i]/maxS)*100);
    }
    avg = avg / n;
    printf("%.2f",avg);
    return 0;
}