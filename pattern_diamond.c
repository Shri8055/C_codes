#include<stdio.h>
void main(){
    int a,b,c,d=1,i,j;
    printf("Enter rows:  ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(b=0;b<=a-i;b++){
            printf("--");
        }
        for(j=1;j<=i;j++){
            printf("  %.2d",d);
            d++;
        }
        printf("\n");
    }
}