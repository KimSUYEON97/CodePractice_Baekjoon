#include <stdio.h>
#include <string.h>

int main(){
    char str[1000001];
    int len,cnt=0,scnt=0;
    scanf("%[^\n]s",str);
    //%s만 할 경우 띄어쓰기 기준으로 한 문자열만을 받아오기때문에 전체 입력을 받지 못한다.
    //따라서 []스캔셋을 이용하여 개행문자 전까지 입력을 스캔해온다.
    
    len = strlen(str);
    
    //문자열 맨앞,뒤에 각각 공백이 들어갈 경우 주의
    for (int i=0;i<len;i++){
    	if(str[i]==' '){
    		if(scnt>0){
    			cnt++;
    			scnt=0;
    		}
    	}
    	else{
    		scnt++;
    	}
    }
    
    //공백일 경우와 아닌 경우 구분
    if(scnt>0){
    	printf("%d",cnt +1);
    }else{
    	printf("%d",cnt);
    }
    
    return 0;
}
//출처
/* https://loding.tistory.com/48 */