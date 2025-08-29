#include <stdio.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
    int (*p)[3]=a;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++) printf("%d ", *(*(p+i)+j));
        printf("\n");
    }
    return 0;
}
