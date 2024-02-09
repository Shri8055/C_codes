#include<stdio.h>
int sum(){
    int a,b;
    printf("Function with Return value\n");
    printf("Enter Number 1:  ");
    scanf("%d",&a);
    printf("Enter Number 2:  ");
    scanf("%d",&b);
    a=a+b;
    return a;
}
void main(){
    printf("Main function Returns Addition\n");
    printf("addition of two numbers is:  %d",sum());
}