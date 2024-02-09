#include<stdio.h>
void main(){

    // Find common numbers in 2 array

    int a[5]={1,2,3,4,5},b[5]={5,6,7,8,9},c[5],i,j;  
    printf("\n\nEntered 1st array elements:    ");
    for(i=0;i<5;i++){
        printf(" %d",a[i]);
    }
    printf("\nEntered 2nd array elements:    ");
    for(i=0;i<5;i++){
        printf(" %d",b[i]);
    }
    for(i=0;i<5;i++){
       for(j=0;j<5;j++){
            if(a[i]==b[j]){
                printf("\n %d",a[i]);
            }
        }
    }
}