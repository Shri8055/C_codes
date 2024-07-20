#include<stdio.h>
void main(){
    int a[10],b,i,j,count=0,d;
    printf("Enter size of array:  ");
    scanf("%d",&b);
    printf("Enter elements in array:  ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++){
        for(j=i+1;j<b;j++){
            if(a[i]==a[j]){
                count++;
                printf("\nNumber %d occurs %d times.",a[i],count);
                
            }
        }
    }
    //printf("Number %d occurs %d times.",d,count);
}