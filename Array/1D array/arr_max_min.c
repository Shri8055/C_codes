#include<stdio.h>
void main() {

    // Maximum and minimum Number from int array.
    
    int a[10],b,i;
    printf("Enter size of array:    ");
    scanf("%d",&b);
    printf("Enter array Elements:  ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("Array Elements are:  ");
    for(i=0;i<b;i++){
        printf(" %d",a[i]);
    }
    int max = a[0];
    int min = a[0];
    for (int i=1;i<b;i++){
        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < min){
            min = a[i];
        }
    }
    printf("\nMaximum value: %d",max);
    printf("\nMinimum value: %d",min);
}
