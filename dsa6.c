#include <stdio.h>
void read(int a[10][10], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
}
void display(int a[10][10], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
}
int main(){
    int n,a[10][10];
    scanf("%d",&n);
    read(a,n);
    display(a,n);
    return 0;
}
