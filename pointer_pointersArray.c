#include<stdio.h>
void main(){
    int a[10],b,c,i;
    int *p[10];
    printf("Enter array size:   ");
    scanf("%d",&b);
    printf("Enter:   ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
        p[i]=&a[i];
    }
    printf("Output:  ");
    for(i=0;i<b;i++){
        printf(" %d ",*p[i]);
    }
    printf("\nMemory locations of 'a' array:   ");
    for(i=0;i<b;i++){
        printf(" %d ",&a[i]);
    }
    printf("\nMemory locations of 'p' array:   ");
    for(i=0;i<b;i++){
        printf(" %d ",&p[i]);
    }
    printf("\nValues of '*p' array:           ");
    for(i=0;i<b;i++){
        printf(" %d ",p[i]);
    }
}