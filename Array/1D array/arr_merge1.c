#include<stdio.h>
void main(){
    int a[20],b[20],c[20],c1,c2,d,i,j;
    printf("Enter size of array 1:  ");
    scanf("%d",&c1);
    printf("Enter size of array 2:  ");
    scanf("%d",&c2);
    printf("Enter array 1 numbers:  ");
    for(i=0;i<c1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter array 2 numbers:  ");
    for(j=0;j<c2;j++){
        scanf("%d",&b[i]);
    }
    printf("Array 1 numbers are:  ");
    for(i=0;i<c1;i++){
        printf(" %d",a[i]);
    }
    printf("\nArray 2 numbers are:  ");
    for(j=0;j<c2;j++){
        printf(" %d",b[j]);
    }
    d=c1+c2;
    for(i=0;i<c1;i++){
        c[i]=a[i];
        c[i+c2]=b[i];
    }
    printf("\nMerged array is:  ");
    for(j=0;j<d;j++){
        printf(" %d",c[j]);
    }
}