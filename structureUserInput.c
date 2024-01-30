#include<stdio.h>
struct studata{
    char stuname[10];
    int stuno;
    float stufees;
};
struct stu1data{
    char stu1name[10];
    int stu1no;
    float stu1fees;
};
void main(){
    struct studata sd;
    struct stu1data sd1;
    //Student 1
    printf("Student 1");
    printf("\nEnter Student name:  ");
    scanf("%s",&sd.stuname);
    printf("Enter SRN no:  ");
    scanf("%d",&sd.stuno);
    printf("Enter Student fees:  ");
    scanf("%f",&sd.stufees);
    //Student 2
    printf("Student 2");
    printf("\nEnter Student name:  ");
    scanf("%s",&sd1.stu1name);
    printf("Enter SRN no:  ");
    scanf("%d",&sd1.stu1no);
    printf("Enter Student fees:  ");
    scanf("%f",&sd1.stu1fees);
    
    printf("\n\nStudent 1 Data");
    printf("\nStudent Name is:  %s",sd.stuname);
    printf("\nStudent SRN is:  %d",sd.stuno);
    printf("\nStudent fee is:  %.2f",sd.stufees);
    
    printf("\n\nStudent 2 Data");
    printf("\nStudent Name is:  %s",sd1.stu1name);
    printf("\nStudent SRN is:  %d",sd1.stu1no);
    printf("\nStudent fee is:  %.2f",sd1.stu1fees);
}