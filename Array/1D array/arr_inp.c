#include<stdio.h>
void main(){

    // Printing array elements

    int arr[5],i;
    printf("Enter array numbers:    ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array numbers are:   ");
    for(i=0;i<5;i++){
        printf(" %d",arr[i]);
    }
}