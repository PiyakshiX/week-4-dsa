#include <stdio.h>
int main(){
    int n,digits[20],i=0;
    scanf("%d",&n);
    while(n>0){digits[i++]=n%10; n/=10;}
    for(int j=i-1;j>=0;j--) printf("%d ",digits[j]);
    return 0;
}
