#include <stdio.h>
int main(){
    int n,pos,i;
    float a[100],num;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%f",&a[i]);
    scanf("%f%d",&num,&pos); // num and position
    for(i=n;i>pos;i--) a[i]=a[i-1];
    a[pos]=num; n++;
    for(i=0;i<n;i++) printf("%.2f ",a[i]);
    return 0;
}
