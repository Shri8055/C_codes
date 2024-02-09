#include<stdio.h>
void main(){
    int a[10][10],b,c,r,i,j;
    printf("Enter row size:  ");
    scanf("%d",&r);
    printf("Enter column size:  ");
    scanf("%d",&c);
    printf("Enter %d Numbers in 2d array:   ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("2d array is:    \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("Border numbers are:  \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            if(i==0||i==r-1||j==0||j==c-1) {
                printf(" %d ",a[i][j]);
            }else{
                printf("    ");
            }
        }
        printf("]");
        printf("\n");
    }
}