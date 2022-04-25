#include <stdio.h>

int main(){
    int a,b,c,abc,t;
    int N[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%d %d %d",&a,&b,&c);
    abc = a*b*c;
    while (abc>0){
        t = abc%10;
        N[t] = N[t] + 1;
        abc = abc/10;
    }
    for(int i=0;i<10;i++){
    	printf("%d\n",N[i]);
    }
    return 0;
}