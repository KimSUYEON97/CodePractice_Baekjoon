#include <stdio.h>
#include <string.h>
int groupword(char str[],int len){
    int alpha[26]={0,}; //요소 0으로 초기화
    alpha[str[0]-'a']+=1;
    for(int i=1;i<len;i++){
        if(alpha[str[i]-'a']>=1 && str[i]!=str[i-1]){
            return 0;
        }else{
            alpha[str[i]-'a']+=1;
        }
    }
    return 1;
}

int main(){
    int n,len,cnt=0;
    char str[101];
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",str);
        len=strlen(str);
        
        cnt+=groupword(str,len);
    }
    printf("%d",cnt);
    return 0;
}