#include<stdio.h>
void main(){

    // Input Nth number and perform : Add, Total numbers, Average

    int a,i,sum=0;
    float average;
    printf("Enter nth term:    ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf(" %d",i);
        sum=sum+i;
        if(i==a){
            printf("\nTotal element is : %d",i);
        }
    }
    printf("\nSum is : %d",sum);
    average=(float)sum/a;
    printf("\nAverage is : %0.2f",average);
}