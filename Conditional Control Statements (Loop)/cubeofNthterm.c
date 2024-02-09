#include<stdio.h>
void main(){

    // Find Nth number cube
    
    int a,i;
    printf("Enter nth term:  ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        printf("\nCube of %d is : %d",i,i*i*i);
    }
}