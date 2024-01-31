#include<stdio.h>
struct studata{
    char stuname[10];
    int stuno;
    char stustd[10];
};
void main(){
    int a,i;
    struct studata sd[10];
    printf("Enter number of students:   ");
    scanf("%d",&a);
    for(i=0;i<a;i++){
        printf("Enter student Name:  ");
        scanf("%s",&sd[i].stuname);
        printf("Enter student Number:  ");
        scanf("%d",&sd[i].stuno);
        printf("Enter student Standard:  ");
        scanf("%s",&sd[i].stustd);
    }
    printf("\n\n");
    for(i=0;i<a;i++){
        printf("\nStudent Name is:    %s",sd[i].stuname);
        printf("\nStudent Number is:    %d",sd[i].stuno);
        printf("\nStudent Standard is:    %s",sd[i].stustd);
        printf("\n");
    }
}