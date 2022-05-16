#include <stdio.h>
#include <math.h>
//참고
/*https://mjeong9316.tistory.com/161*/
void hanoi(int n,int from,int mid,int to){
    if(n==1){
        printf("%d %d\n",from,to);
    }else{
        hanoi(n-1,from,to,mid);
        printf("%d %d\n",from,to);
        hanoi(n-1,mid,from,to);
    }
}

int main(){
    int n,result;
    scanf("%d",&n);
    /*https://shoark7.github.io/programming/algorithm/tower-of-hanoi*/
    result = pow(2,n) -1; //제곱
    printf("%d\n",result);
    hanoi(n,1,2,3); //최종적으로 1에서 3으로 가야함
    return 0;
}