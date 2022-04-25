#include <stdio.h>
#define dense(a,b) (float)(a)*100/(b)
int main(){
    int c,n;
    int s[1000], sum = 0, count=0;
    float avg = 0.00;
    
    scanf("%d",&c);
    for(int i=0;i<c;i++){
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&s[j]);
            sum += s[j];
        }
        avg = (float)sum/n;
        for(int j=0;j<n;j++){
            if(s[j]>avg){
                count++;
            }
        }
        printf("%.3f%\n",dense(count,n));
        sum = 0;
        count = 0;
    }
    return 0;
}