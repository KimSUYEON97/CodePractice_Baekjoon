#include <stdio.h>

int main(){
    int n,m,card[100];
    int sum=0, max = -1;
    
    //1억 = 1초 ex) 100,0000 =1/1000초
    scanf("%d %d",&n,&m);
    for (int i=0;i<n;i++){
        scanf("%d",&card[i]);
    }
    
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		for(int z=j+1;z<n;z++){
    			sum=card[i]+card[j]+card[z];
    			if(sum<=m && max<=sum){
    				max = sum;
    			}
    		}
    	}
    }
    
    printf("%d",max);
    
    return 0;
}