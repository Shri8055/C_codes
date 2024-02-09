#include<stdio.h>
void main(){
    int a[10][10],b[10][10],c,d[10],r,i,j;
    printf("Enter row size:  ");
    scanf("%d",&r);
    printf("Enter column size:  ");
    scanf("%d",&c);
    printf("Enter %d number in 1st 2D matrix:   ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter %d number in 2nd 2D matrix:   ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    printf("Number in 1st 2D matrix:   \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("Number in 2nd 2D matrix:   \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("Substraction 2 from 1 matrix:    \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            b[i][j]-=a[i][j];
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
}