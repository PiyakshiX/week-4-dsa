#include <stdio.h>
int main(){
    int a[100], i, j;
    for(i=0;i<100;i++) scanf("%d",&a[i]);

    printf("Pairs with sum 50:\n");
    for(i=0;i<100;i++){
        for(j=i+1;j<100;j++){
            if(a[i]+a[j]==50)
                printf("(%d,%d)\n", a[i], a[j]);
        }
    }
    return 0;
}
