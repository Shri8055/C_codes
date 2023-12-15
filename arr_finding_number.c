#include<stdio.h>
void main(){
    int a[10],b,c,i,j;
    printf("Enter array size:   ");
    scanf("%d",&b);
    printf("Enter array numbers:    ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:    ");
    for(i=0;i<b;i++){
        printf(" %d",a[i]);
    }
    printf("\nEnter number to search: ");
    scanf("%d",&c);
    for(i=0;i<b;i++){
        if(c==a[i]){
            printf("\nNumber %d found at a[%d] location of array !",c,i);
        }
    }
}