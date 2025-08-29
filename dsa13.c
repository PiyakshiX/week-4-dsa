#include <stdio.h>
void swap(int *x,int *y){int t=*x;*x=*y;*y=t;}
int main(){
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    // sort
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(a[i]>a[j]) swap(&a[i],&a[j]);
    swap(&a[1],&a[n-2]);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
