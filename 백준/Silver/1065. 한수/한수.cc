#include <stdio.h>
void Hansu(int n){
    int a,b,c,cnt = 99;
    
    if (n<100){
        printf("%d",n);
    }
    else{
        for (int i=100;i<=n;i++){
            a = i/100;
            b = i/10 % 10;
            c = i % 10;
            
            if((b-c)==(a-b)){
                cnt++;
            }
        }
        printf("%d",cnt);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    Hansu(n);
    return 0;
}