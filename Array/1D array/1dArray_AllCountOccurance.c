#include<stdio.h>
void main(){
    int a[100],count[100]={0},b,i;
    printf("Enter array size:   ");
    scanf("%d",&b);
    printf("Enter array numbers:  ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:  ");
    for(i=0;i<b;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<b;i++){
        int num=a[i];
        count[num]++;
    }
    for(i=0;i<b;i++){
        if(count[i]>0){
            printf("\nNumber %d occurs %d times.",i,count[i]);
        }
    }
}