#include<stdio.h>
struct myData{
    char myName[10];
    int myAge;
    int mySalary;
    char myPost[10];
};
void main(){
    int a;
    struct myData md={"Shrinivas",20,2500000,"Manager"};
    printf("Name   :   %s",md.myName);
    printf("\nAge    :   %d",md.myAge);
    printf("\nSalary :   %d",md.mySalary);
    printf("\nPost   :   %s",md.myPost);
    printf("\nEnter 1 to Modify and 0 to Cancel Modify:   ");
    scanf("%d",&a);
    if(a==1){
        printf("Enter name:    ");
        scanf("%s",&md.myName);
        printf("Enter Age:    ");
        scanf("%d",&md.myAge);
        printf("Enter Salary:    ");
        scanf("%d",&md.mySalary);
        printf("Enter Post:    ");
        scanf("%s",&md.myPost);
        printf("\nData after modification is:\n");
    }
    else{
        printf("\nNo changes !!!\n");
    }
    printf("Enter name:    %s",md.myName);
    printf("\nEnter Age:    %d",md.myAge);
    printf("\nEnter Salary:    %d",md.mySalary);
    printf("\nEnter Post:    %s",md.myPost);
}