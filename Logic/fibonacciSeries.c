#include<stdio.h>
void main(){
    int a,b,i,n1=0,n2=1,n3;
    printf("Enter range of Fibonacci Series:    ");
    scanf("%d",&b);
    for(i=0;i<b;i++){
        n3=n1+n2;
        printf(" %d",n1);
        n1=n2;
        n2=n3;
    }
}