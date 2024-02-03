#include<stdio.h>
int sum(int p,int q){
    return p=p+q;
}
int sub(int p,int q){
    return p=p-q;
}
int mul(int p,int q){
    return p=p*q;
}
float divi(int p,int q){
    float r=(float)p/q;
    return r;
}
void main(){
    int a,b,ch;
    printf("Enter number 1:  ");
    scanf("%d",&a);
    printf("Enter number 2:  ");
    scanf("%d",&b);
    printf("Enter your choice:  ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("Addition of two numbers is:  %d",sum(a,b));
            break;
        
        case 2:
            printf("Substraction of two numbers is:  %d",sub(a,b));
            break;
        
        case 3:
            printf("Multiplication of two numbers is:  %d",mul(a,b));
            break;
        
        case 4:
            printf("Division of two numbers is:  %.2f",divi(a,b));
            break;
        default:
            printf("Invalid choice\n");
    }
}