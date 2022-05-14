#include <stdio.h>

int main(){
    char word[16];
    int time[] = {3,4,5,6,7,8,9,10,10};
    int num,sum=0;
    
    scanf("%s",word);
    for (int i =0; word[i]!='\0';i++){// '\0' 문자열의 끝
        num=(word[i]-'A')/3;
        if((num==6||num==7) && ((word[i]-'A')%3 == 0)){
        	sum=sum+time[num-1];
        }
        else{
        	sum+=time[num];
        }
    }
    printf("%d",sum);
    return 0;
}

//방식 switch-case, 배열, 함수 etc... 적용가능