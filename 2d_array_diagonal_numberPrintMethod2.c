#include<stdio.h>
void main(){
    int a[10][10],b,c,d[10],r,i,j;
    printf("Enter row size:  ");
    scanf("%d",&r);
    printf("Enter column size:  ");
    scanf("%d",&c);
    printf("Enter %d number in 2d matrix:   ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Number in 2d matrix:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("\nDiagonal elements are:  \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j){
                printf(" %d",a[i][j]);
            }
            else{
                printf("\t");
            }        
        }
        printf("\n");
    }
}