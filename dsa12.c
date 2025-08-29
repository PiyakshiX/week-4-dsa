#include <stdio.h>
int main(){
    int n1,n2,i;
    float a[50],b[50],c[100];
    scanf("%d",&n1);
    for(i=0;i<n1;i++) scanf("%f",&a[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++) scanf("%f",&b[i]);
    for(i=0;i<n1;i++) c[i]=a[i];
    for(i=0;i<n2;i++) c[n1+i]=b[i];
    for(i=n1+n2-1;i>=0;i--) printf("%.2f ",c[i]);
    return 0;
}
