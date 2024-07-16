#include<stdio.h>
void main(){
    int a[10],b,c=0,i;
    printf("Enter array numbers:    ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:    ");
    for(i=0;i<5;i++){
        c+=a[i];
        printf("%d ",a[i]);
    }
    printf("\nAddition of array numbers is:   %d",c);
}