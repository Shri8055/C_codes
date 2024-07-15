#include<stdio.h>
void main(){
    int a,b,c;
    printf("1) Addition\n2) Substraction\n3) Multiplication\n4) Division");
    printf("\nEnter ur choice:    ");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Addition\n");
            printf("Enter number 1:  ");
            scanf("%d",&b);
            printf("Enter number 2:  ");
            scanf("%d",&c);
            printf("Addition of numbers is:  %d",b+c);
        break;
        
        case 2:
            printf("Substraction\n");
            printf("Enter number 1:  ");
            scanf("%d",&b);
            printf("Enter number 2:  ");
            scanf("%d",&c);
            printf("Substraction of numbers is:  %d",b-c);
        break;
        
        case 3:
            printf("Multiplication\n");
            printf("Enter number 1:  ");
            scanf("%d",&b);
            printf("Enter number 2:  ");
            scanf("%d",&c);
            printf("Multiplication of numbers is:  %d",b*c);
        break;
        
        case 4:
            printf("Division\n");
            printf("Enter number 1:  ");
            scanf("%d",&b);
            printf("Enter number 2:  ");
            scanf("%d",&c);
            printf("Division of numbers is:  %d",b/c);
        break;
        
        default:
            printf("Enter Valid case number");
    }
}