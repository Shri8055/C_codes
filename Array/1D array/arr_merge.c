#include<stdio.h>
void main(){

    // Merging 2 int arrays
    
    int a[10],b[10],c[10],i,j,c1,c2,c3;
    printf("Enter size of 1st array:    ");
    scanf("%d",&c1);
    printf("Enter size of 2nd array:    ");
    scanf("%d",&c2);
    printf("Enter 1st array:    ");
    for(i=0;i<c1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd array:    ");
    for(j=0;j<c2;j++){
        scanf("%d",&b[j]);
    }
    printf("\n1st array is:    ");
    for(i=c1-1;i>=0;i--){
        printf(" %d",a[i]);
    }
    printf("\n2nd array is:    ");
    for(j=c2-1;j>=0;j--){
        printf(" %d",b[j]);
    }
    c3=c1+c2;
    for(i=0;i<c1;i++){
        c[i]=a[i];
        c[i+4]=b[i];
    }
    printf("\nMerged array is:    ");
    for(j=c3-1;j>=0;j--){
        printf(" %d",c[j]);
    }
}