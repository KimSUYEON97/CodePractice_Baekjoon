#include <stdio.h>
#include <string.h>
//ascii
//97~122 - 26글자
//65~90
int main(){
    char s[1000001];
    int maxI,maxS= -10,same=0,arr[26];

    scanf("%s",s);
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]>='a' && s[i]<='z'){//소문자
            arr[s[i]-'a']++;
        }
        else if(s[i]>='A' && s[i]<='Z'){ //대문자
            arr[s[i]-'A'] ++;
        }
        else{
            continue;
        }
    }
    for(int i=0;i<26;i++){
    	if(maxS == arr[i] && maxS != 0){
    		same++;
    	}
    	else{
            if(maxS<arr[i]){
                maxS=arr[i];
                maxI = i;
                same = 0;
            }
    	}
    }
    
    if(same > 0){
    	printf("?");
    }else{
    	printf("%c",maxI+'A');
    }
    
    return 0;
}