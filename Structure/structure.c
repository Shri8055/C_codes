#include<stdio.h>
struct myProof{
    int myAge;
    int mySalary;
};
void main(){
    struct myProof mp;
    printf("Enter ur age:   ");
    scanf("%d",&mp.myAge);
    printf("Your age is:    %d",mp.myAge);
}