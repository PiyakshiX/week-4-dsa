#include <stdio.h>
int isSymmetric(int a[10][10], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=a[j][i]) return 0;
    return 1;
}
int main(){
    int n,a[10][10];
    scanf("%d",&n);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    printf("%d", isSymmetric(a,n));
    return 0;
}
