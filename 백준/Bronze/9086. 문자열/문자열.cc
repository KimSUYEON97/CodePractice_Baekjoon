#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(void) {
	string str;
	int t;
	scanf("%d",&t);
    for(int i=0;i<t;i++){
	    cin>>str;
        printf("%c%c\n",str[0],str[str.length()-1]);
    }
	return 0;
}