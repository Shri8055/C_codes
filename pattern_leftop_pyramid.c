#include<stdio.h>
void main(){
    int a,b=1,i,j;
    printf("Enter row: ");
    scanf("%d",&a);
    for(i=a;i>0;i--){
        for(j=0;j<i;j++){
            printf("%.2d ",b);
            b++;
        }
        printf("\n");
    }
}