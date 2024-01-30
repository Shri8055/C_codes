#include<stdio.h>
struct myData{
    char myName[10];
    int myAge;
    int mySalary;
    char myWork[10];
};
void main(){
    struct myData md={"Shrinivas",20,2500000,"Manager"};
    struct myData md1;
    md1=md;
    printf("Name is:    %s\nAge is:    %d\nSalary is:     %d\nWork is:     %s   ",md1.myName,md1.myAge,md1.mySalary,md1.myWork);
}