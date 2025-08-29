#include <stdio.h>
int main(){
    int m,n,a[20][20],i,j,count=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0) count++;
        }
    printf("Non-zero elements = %d",count);
    return 0;
}
