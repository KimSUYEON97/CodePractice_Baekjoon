#include <stdio.h>
/*https://editor752.tistory.com/136*/
void star(int i,int j,int n){
	//3제곱수로 나누기한 몫과 나머지가 1인 곳에서 빈칸
    if((i/n)%3==1 && (j/n)%3==1){
    	printf(" ");
    }
    else{
    	if(n/3==0){ //n==1일때
    		printf("*");
    	}
    	else{
    		star(i,j,n/3);
    	}
    }
}
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		star(i,j,n);
    	}
    	printf("\n");
    }
    return 0;
}