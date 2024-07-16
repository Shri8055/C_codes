#include<stdio.h>
void main(){
    int a[10],b,i;
    printf("Enter array numbers:  ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:  ");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\nArray numbers in reverse order are:  ");
    for(i=4;i>=0;i--){
        printf("%d ",a[i]);
    }
}