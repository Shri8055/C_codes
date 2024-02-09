#include<stdio.h>
void main(){
    int a[10][10],b[10][10],c,d=0,i,j,r;
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
    printf("\nNumbers in 1st 2d array are:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==0){
                d+=1;
            }
        }
    }
    if(d>=r*c/2){
        printf("\nMatrix is Sparse matrix");
    }
    else{
        printf("\nMatrix is Not Sparse matrix");
    }
}