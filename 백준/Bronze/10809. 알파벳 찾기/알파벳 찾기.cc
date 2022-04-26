#include <stdio.h>
#include <string.h>
//ascii
//97~122 - 26글자
int main(){
    char alpha,s[100];
    int arr[26];
    
    scanf("%s",s);
    for(int i=0;i<26;i++){
    	arr[i] = -1;
    }
    
    for(int i=0;i<strlen(s);i++){
    	alpha = s[i];
    	if(arr[alpha-'a']==-1){
    		arr[alpha-'a'] = i;
    	}
    	else{
    		continue;
    	}
    }
    
    for(int i=0;i<26;i++){
    	printf("%d ",arr[i]);
    }
    return 0;
}
