#include<stdio.h>

int main(){
    int n,sum=0;
    char in[100];
    scanf("%d",&n);
    scanf("%s",&in);
    //https://abcdefgh123123.tistory.com/170 참고
    for (int i=0;i<n;i++){
        //0 ~ 9 = 아스키코드값 48 ~ 57 즉, '0'을 빼주는 것은 아스키 코드값 48을 빼주어 정수값 추출하는것 
        sum = sum +in[i] -'0';
    }
    printf("%d",sum); 
    return 0;
}