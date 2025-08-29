#include <stdio.h>
int main(){
    int m,n,i,j,a[20][20],odd[400],even[400],oc=0,ec=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0) even[ec++]=a[i][j];
            else odd[oc++]=a[i][j];
        }
    printf("Even: "); for(i=0;i<ec;i++) printf("%d ",even[i]);
    printf("\nOdd: "); for(i=0;i<oc;i++) printf("%d ",odd[i]);
    return 0;
}
