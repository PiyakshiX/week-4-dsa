#include <stdio.h>
int main(){
    int p,q,i,j,ch,a[10][10],b[10][10],c[10][10];
    scanf("%d%d",&p,&q);
    for(i=0;i<p;i++) for(j=0;j<q;j++) scanf("%d",&a[i][j]);
    for(i=0;i<p;i++) for(j=0;j<q;j++) scanf("%d",&b[i][j]);
    do{
        printf("\n1.Display 2.Sum 3.Transpose(A) 4.Product 5.Exit\n");
        scanf("%d",&ch);
        if(ch==1){
            for(i=0;i<p;i++){for(j=0;j<q;j++) printf("%d ",a[i][j]); printf("\n");}
        }
        else if(ch==2){
            for(i=0;i<p;i++){for(j=0;j<q;j++){c[i][j]=a[i][j]+b[i][j]; printf("%d ",c[i][j]);}printf("\n");}
        }
        else if(ch==3){
            for(i=0;i<q;i++){for(j=0;j<p;j++) printf("%d ",a[j][i]); printf("\n");}
        }
        else if(ch==4){
            for(i=0;i<p;i++){for(j=0;j<q;j++){c[i][j]=0;for(int k=0;k<q;k++) c[i][j]+=a[i][k]*b[k][j]; printf("%d ",c[i][j]);}printf("\n");}
        }
    }while(ch!=5);
    return 0;
}
