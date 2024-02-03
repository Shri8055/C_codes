#include<stdio.h>
int sum(int p,int q){
    p=p+q;
    return p;
}
void main(){
    int a,b;
    printf("Enter Number 1:  ");
    scanf("%d",&a);
    printf("Enter Number 2:  ");
    scanf("%d",&b);
    printf("Addition of numbers is:  %d",sum(a,b));
}