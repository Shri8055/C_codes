#include<stdio.h>
void main(){
    int a[10][10],b[10][10],c,d,i,j,r,r1,c1;
    printf("Enter row size of 1st array:  ");
    scanf("%d",&r);
    printf("Enter column size of 1st array:  ");
    scanf("%d",&c);
    printf("Enter %d numbers of 1st array:   ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter row size of 2nd array:  ");
    scanf("%d",&r1);
    printf("Enter column size of 2nd array:  ");
    scanf("%d",&c1);
    printf("Enter %d numbers of 2nd array:   ",r*c);
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nNumbers in 1st 2d array are:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("\nNumbers in 2nd 2d array are:   \n");
    for(i=0;i<r1;i++){
        printf("[");
        for(j=0;j<c1;j++){
            printf(" %d ",b[i][j]);
        }
        printf("]");
        printf("\n");
    }
    if(r==r1){
        printf("\n2d array matrices are identical.");
    }
    else{
        printf("\n2d array matrices are not identical");
    }
}