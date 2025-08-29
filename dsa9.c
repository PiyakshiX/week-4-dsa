#include <stdio.h>
int main(){
    int n,a[10][10],i,j,prod=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++) scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            prod*=a[i][j];

    printf("Product = %d",prod);
    return 0;
}
