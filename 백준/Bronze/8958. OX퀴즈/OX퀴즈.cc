#include <stdio.h>
#include <string.h>
int main(){
    int n,count=0,sum = 0;
    char test[80];
    
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",test);
        for(int j=0;j<strlen(test);j++){
            if(test[j]=='O'){
            	count +=1;
                sum += count;
            }
            else{
                count = 0;
            }
        }
        printf("%d\n",sum);
        count = 0;
        sum = 0;
        test[0] = '\0';//Null terminating char 널문자로 char버퍼비우기
    }
    return 0;
}