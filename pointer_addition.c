#include<stdio.h>
void main(){
    int a,b,c;
    int *p1,*p2;
    printf("Enter number 1:  ");
    scanf("%d",&a);
    printf("Enter number 2:  ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    c=*p1+*p2;
    printf("Addition of Numbers is:  %d",c);
}