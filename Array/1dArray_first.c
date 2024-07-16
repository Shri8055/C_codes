#include<stdio.h>
void main(){
    int a[10],b,c,i,j;
    printf("Enter total numbers to add in array:  ");
    scanf("%d",&b);
    printf("Enter array numbers:    ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:    ");
    for(i=0;i<b;i++){
        printf("%d ",a[i]);
    }
}