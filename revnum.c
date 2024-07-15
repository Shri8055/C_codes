#include<stdio.h>
void main(){
    int num,rev,quo;
    printf("Enter number:   ");
    scanf("%d",&num);
    printf("Reverse Number is:  ");
    while(num>0){
        quo=num/10;
        rev=num%10;
        printf("%d",rev);
        num=quo;
    }
}