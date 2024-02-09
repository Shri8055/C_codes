#include<stdio.h>
void main(){
    int a,b,i,j=1;
    printf("Enter number for factorial:   ");
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        j=j*i;
        printf(" %d *",i);
    }
    printf("\n Factorial of number is : %d ",j);
}