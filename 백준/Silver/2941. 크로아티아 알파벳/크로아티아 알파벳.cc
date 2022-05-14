#include <stdio.h>
#include <string.h>

int main(){
    char str[101];
    int len,word=0;
    scanf("%s",str);
    len = strlen(str);
    
    for(int i=0;i<len;i++){
        if(str[i]=='j'){
            if(str[i-1]=='n'||str[i-1]=='l'){
                continue;
            }
            else{
                word+=1;
            }
        }
        else if(str[i]=='='){
            if(str[i-1]=='c'||str[i-1]=='d'||str[i-1]=='s'){
            	continue;
            }
            else if(str[i-1]=='z'){
            	if(i>=2 && str[i-2]=='d'){
            		word-=1;
            	}
            	else{
            		continue;
            	}
            }
            else{
                word+=1;
            }
        }
        else if(str[i]=='-'){
        	if(str[i-1]=='c'||str[i-1]=='d'){
                continue;
            }
            else{
                word+=1;
            }
        }
        else{
            word+=1;
        }
    }
    printf("%d",word);
    return 0;
}