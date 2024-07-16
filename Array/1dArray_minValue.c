#include<stdio.h>
void main(){
    int a[10],b,c,i,j,min=0;
    printf("Enter total numbers of array:   ");
    scanf("%d",&b);
    printf("Enter array numbers:    ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:  ");
    min=a[0];
    for(i=0;i<b;i++){
        if(min>a[i]){
            min=a[i];   
        }
        printf("%d ",a[i]);
    }
    printf("Minimun number is:  %d",min);
}