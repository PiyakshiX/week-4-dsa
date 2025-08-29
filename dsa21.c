#include <stdio.h>
int main(){
    int n,i,j,a[10][10],b[10][10],c[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&b[i][j]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=2*a[i][j]+3*b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
