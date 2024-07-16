#include<stdio.h>
void main(){
    int a[10],b,c,i,max=0;
    printf("Enter total numbers of array:  ");
    scanf("%d",&b);
    printf("Enter numbers of array:  ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("Array Numbers are:  ");
    max=a[0];
    for(i=0;i<b;i++){
        if(max<a[i]){
            max=a[i];
        }
        printf("%d ",a[i]);
    }
    printf("Maximum Number is:  %d",max);
}