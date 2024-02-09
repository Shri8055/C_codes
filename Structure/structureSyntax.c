#include<stdio.h>
struct myData{
    char myName[10];
    int myAge;
    int mySalary;
    char myWork[10];
};
void main(){
    struct myData md={"Shrinivas",20,2500000,"Manager"};
    printf("Name is:    %s\nAge is:    %d\nSalary is:     %d\nWork is:     %s   ",md.myName,md.myAge,md.mySalary,md.myWork);
}