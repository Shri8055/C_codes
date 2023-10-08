#include<stdio.h>
void main(){
    int a,b=0,i,j;
    printf("Enter range :   ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        j=i*i;
        printf("%d ",j);
        b+=j;
    }
    printf("\nSum of Square of number is :  %d",b);
}