#include <stdio.h>
int main(){
    int n,a[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i]*a[i];
    }
    printf("Sum of squares = %d",sum);
    return 0;
}
