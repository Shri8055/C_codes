#include<stdio.h>
void main(){
    int a[3][2],i,j;
    printf("Enter 2d array which has 3 row and 2 columns:    ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2d array is:    ");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}