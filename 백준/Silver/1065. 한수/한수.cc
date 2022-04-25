#include <stdio.h>
int Hansu(int n){
    int a,b,c,cnt = 99;
    
    if (n<100){
        return n;
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
        return cnt;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",Hansu(n));
    return 0;
}