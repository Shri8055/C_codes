#include<stdio.h>
void main(){

    // Square of Nth term and addition of square
    
    int a,b,c[10],i,j,q,sum=0;
    printf("Enter nth term:     ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        sum+=i*i;
        printf("\n\nNatural Numbers are :  %d \nAnd its square is :  %d\n",i,i*i);
    }
    printf("Sum of square is:   %d",sum);
}