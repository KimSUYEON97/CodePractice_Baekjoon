#include <stdio.h>
int d(int n){
    int sum = n;
    while (n>0){
        sum += n%10;
        n=n/10;
    }
    return sum;
}

int main(){
    int arr[10001]={0},result;
    for (int i =1;i<10001;i++){
        result = d(i);//i는 result의 생성자
        if(result <10001){
            arr[result]=1;//생성자가 있는 숫자
        }
    }
    
    for(int i=1;i<10001;i++){
        if(arr[i]!=1){
            printf("%d\n",i);
        }
    }
    return 0;
}