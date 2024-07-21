#include<stdio.h>
void main(){
    int a[10],b,c,d,i,j;
    printf("Enter array size:   ");
    scanf("%d",&b);
    printf("Enter array numbers:    ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:  ");
    for(i=0;i<b;i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter number from where u want to start array: ");
    scanf("%d",&c);
    for(i=0;i<b;i++){
        if(c==a[i]){
            d=i;
        }
    }
    printf("Rotated array is:  ");
    for(i=d;i<b;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<d;i++){
        printf("%d ",a[i]);
    }   
}