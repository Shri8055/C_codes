#include<stdio.h>
void main(){
    int a,b,d,i,e;
    int c[10];
    printf("Enter number of elements to add in array :  ");
    scanf("%d",&e);
    printf("Array is :  ");
    for(i=0;i<e;i++){
        scanf("%d",&c[i]);
    }
    for(i=0;i<e;i++){
        printf(" %d",c[i]);
    }
    printf("\nEnter index values till 4-1 to add numbers:  ");
    scanf("%d %d",&a,&b);
    printf("\nAddition is : %d",c[a]+c[b]);
}