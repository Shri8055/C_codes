#include<stdio.h>
void main(){
    
    // Copying one array to second

    int a[5],b[5],i;
    printf("Enter array elem:   ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        b[i]=a[i];
    }
    printf("Array elem are:   ");
    for(i=0;i<5;i++){
        printf(" %d",b[i]);
    }
}