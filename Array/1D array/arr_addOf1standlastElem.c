#include<stdio.h>
void main(){
    int a[5],b,c,i,j;
    printf("Enter 5 array elements:     ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Array elements are:     ");
    for(i=0;i<5;i++){
        printf(" %d",a[i]);
    }
    c=a[0]+a[i-1];
    printf("\nAddition of 1st and last element of array is:  %d",c);
}