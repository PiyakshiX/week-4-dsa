#include <stdio.h>
int isUpperTriangular(int a[10][10], int n){
    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
            if(a[i][j]!=0) return 0;
    return 1;
}
int main(){
    int n,a[10][10];
    scanf("%d",&n);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    printf("%d", isUpperTriangular(a,n));
    return 0;
}
