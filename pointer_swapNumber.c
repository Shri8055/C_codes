#include<stdio.h>
int swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
    return (*a,*b);
}
void main(){
    int a,b,c;
    int *a1,*b1,*c1;
    printf("Enter 2 numbers:    ");
    scanf("%d%d",&a,&b);
    printf("\nNumbers before swap:  %d %d",a,b);
    swap(&a,&b);
    printf("\nNumbers after swap:  %d %d",a,b);
}