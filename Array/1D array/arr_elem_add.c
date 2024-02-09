#include<stdio.h>   
void main(){

    // Adding numbers of array
    
    int arr[5],sum=0,a,i;
    printf("Enter array elements:   ");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are: ");
    for(i=0;i<5;i++){
        printf(" %d",arr[i]);
        sum=sum+arr[i];
    }
    printf("\nSum of array elements is:   %d",sum);
}
