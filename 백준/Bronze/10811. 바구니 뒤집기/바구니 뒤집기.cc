#include <stdio.h>

int main(){
    //n개 바구니 m번 넣는방법
    //i,j,k i~j에 k번 공을 넣는다.
    int n,m,ball[101][2],cnt[100];
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<m;i++){
        scanf("%d %d",&ball[i][0],&ball[i][1]);
    }
    
    for(int i=0;i<100;i++){//초기화
        cnt[i]=i+1;
    }
    
    for(int i=0;i<m;i++){
    	int min = ball[i][1] - ball[i][0];
    	if(min%2 == 0){
    		for(int j=0;j<min/2;j++){
    			int temp = cnt[ball[i][1]-j-1];
    			cnt[ball[i][1]-j-1] = cnt[ball[i][0]+j-1];
    			cnt[ball[i][0]+j-1] = temp;
    		}
    	}else{
    		for(int j=0;j<min/2+1;j++){
    			int temp = cnt[ball[i][1]-j-1];
    			cnt[ball[i][1]-j-1] = cnt[ball[i][0]+j-1];
    			cnt[ball[i][0]+j-1] = temp;
    		}
    	}
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",cnt[i]);
    }
    
    return 0;
}