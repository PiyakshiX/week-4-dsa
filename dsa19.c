#include <stdio.h>
int isLowerTriangular(int a[10][10], int n){
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i][j]!=0) return 0;
    return 1;
}
int main(){
    int n,a[10][10];
    scanf("%d",&n);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    printf("%d", isLowerTriangular(a,n));
    return 0;
}
