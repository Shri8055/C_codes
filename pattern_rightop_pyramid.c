#include<stdio.h>
void main(){
    int a,b=1,c,d=1,i,j=0;
    printf("Enter row:  ");
    scanf("%d",&a);
    for(i=a;i>0;i--){
        for(c=0;c<=d-2;c++){
            printf("   ");
        }
        for(j=0;j<i;j++){
            printf("%.2d ",b);
            b++;
        }
        printf("\n");
        d++;
    }
}