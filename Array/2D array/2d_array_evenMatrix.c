#include<stdio.h>
void main(){
    int a[10][10],b,c,r,i,j;
    printf("Enter row size:  ");
    scanf("%d",&r);
    printf("Enter column size:  ");
    scanf("%d",&c);
    printf("Enter %d numbers in 2d array:   ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Numbers in 2d array are:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("Even numbers in 2d array are:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            if(a[i][j]%2==0){
                printf(" %d ",a[i][j]);
            }
            else{
                printf(" - ");
            }
        }
        printf("]");
        printf("\n");
    }
}