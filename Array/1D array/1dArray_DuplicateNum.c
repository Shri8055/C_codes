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
        printf("%d ",a[i]);
    }
    printf("\nDuplicate numbers are:  ");
    for(i=0;i<b;i++){
        for(j=i+1;j<b;j++){
            if(a[i]==a[j]){
                printf("%d ,",a[i]);
            }
        }
    }
}