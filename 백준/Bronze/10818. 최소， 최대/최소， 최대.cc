#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int n,num;
    int minN=1000000;
    int maxN= -1000000;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&num);
        minN = min(minN,num);
        maxN = max(maxN,num);
    }
    printf("%d %d",minN,maxN);
    return 0;
}