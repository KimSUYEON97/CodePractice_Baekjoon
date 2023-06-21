#include <stdio.h>
#define LEN 1000000

int main(void) { //출처 : https://omyodevelop.tistory.com/120
	char str[LEN];
	
    //입력을 받을때까지 반복
    //fgets(char,int,file) : stdin입력을 받아 int길이의 char변수포인터(주소)에 넣는다.
	while(fgets(str,LEN,stdin)){
		printf("%s",str);
	}
	return 0;
}