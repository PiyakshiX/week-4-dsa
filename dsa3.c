#include <stdio.h>
int main(){
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    int temp=a[1];
    a[1]=a[n-2];
    a[n-2]=temp;

    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
