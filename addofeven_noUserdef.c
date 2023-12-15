#include<stdio.h>
void main(){

    // Printing even numbers and adding them

    int a,i,j=0;
    printf("Enter how much Even number u want to add :      ");
    scanf("%d",&a);
    printf("Even Natural numbers are:  ");
    for(i=1;i<=a*2;i++){
        if(i%2==0){
            j+=i;
            printf("%d ",i);
        }
    }
    printf("\nSum of Even Natural numbers is :     %d",j);
}