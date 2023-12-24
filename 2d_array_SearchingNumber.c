#include<stdio.h>
void main(){
    int a[10][10],b,c,r,i,j;
    printf("Enter row size:  ");
    scanf("%d",&r);
    printf("Enter column size:  ");
    scanf("%d",&c);
    printf("Enter %d 2d array Numbers:  ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("2d array Numbers are:  \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter number to search:  ");
    scanf("%d",&b);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(b==a[i][j]){
                printf("Number %d found at [%d] [%d] location.",b,i,j);
            }
        }
        printf("\n");
    }
}