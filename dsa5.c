#include <stdio.h>
int main(){
    int m,n,i,j,a[20][20],sum=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    printf("Sum = %d, Mean = %.2f",sum,(float)sum/(m*n));
    return 0;
}
