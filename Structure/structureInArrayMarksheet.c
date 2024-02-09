#include<stdio.h>
struct stuMarks{
    char stuName[20];
    int stuRollno;
    int PhyM;
    int ChemM;
    int MathM;
    int MarksTotal;
};
void main(){
    int a,i;
    struct stuMarks sM[10];
    printf("Enter number of students:   ");
    scanf("%d",&a);
    for(i=1;i<a+1;i++){
        printf("Enter Student %d Name:  ",i);
        scanf("%s",&sM[i].stuName);
        printf("Enter Students %d Roll No:  ",i);
        scanf("%d",&sM[i].stuRollno);
        printf("Enter Students %d Physics Marks:  ",i);
        scanf("%d",&sM[i].PhyM);
        printf("Enter Students %d Chemistry Marks:  ",i);
        scanf("%d",&sM[i].ChemM);
        printf("Enter Students %d Maths Marks:  ",i);
        scanf("%d",&sM[i].MathM);
        sM[i].MarksTotal=sM[i].PhyM+sM[i].ChemM+sM[i].MathM;
        printf("\n");
    }
    printf("\nName\tRoll No.\tPhysics\t\tChemistry\tMaths\t\tTotal");
    for(i=1;i<a+1;i++){
        printf("\n%s\t%d\t%d\t%d\t%d\t%d",sM[i].stuName,sM[i].stuRollno,sM[i].PhyM,sM[i].ChemM,sM[i].MathM,sM[i].MarksTotal);
    }
}