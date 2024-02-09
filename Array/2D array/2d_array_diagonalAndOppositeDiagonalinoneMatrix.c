#include<stdio.h>
void main(){
    int a[10][10],b,c,r,i,i1,j,j1;
    printf("Enter row size:  ");
    scanf("%d",&r);
    printf("Enter column size:  ");
    scanf("%d",&c);
    printf("Enter %d numbers in 2D array:   ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Numbers in 2D array are:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %.2d ",a[i][j]);
        }
        printf("]\n");
    }
    printf("Numbers in 2D array are:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            if(i==j||j==c-1-i){
                printf(" %.2d ",a[i][j]);
            }
            else{
                printf("    ");
            }
        }
        printf("]\n");
    }
}