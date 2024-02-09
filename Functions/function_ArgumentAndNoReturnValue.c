#include<stdio.h>
void sum(int p,int q){
    p=p+q;
    printf("Addition of Two numbers is:  %d",p);
}
void main(){
    int a,b;
    printf("Main function returns addition\n");
    printf("Enter Number 1:  ");
    scanf("%d",&a);
    printf("Enter Number 2:  ");
    scanf("%d",&b);
    sum(a,b);
}