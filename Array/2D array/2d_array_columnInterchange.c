#include<stdio.h>
void main(){
    int a[10][10],b,c,d,e,r,i,j;
    printf("Enter row size:  ");
    scanf("%d",&r);
    printf("Enter column size:  ");
    scanf("%d",&c);
    printf("Enter %d numbers in 2d array:    ",r*c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Numbers in 2d array are:    \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("Enter column number:    ");
    scanf("%d",&d);
    printf("You selected column is:  \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(d-1==j){
                printf("[ %d ]",a[i][j]);
                printf("\n");
            }
        }
    }
    printf("Enter column number to interchange:    ");
    scanf("%d",&e);
    printf("You selected column is:  \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(e-1==j){
                printf("[ %d ]",a[i][j]);
                printf("\n");
            }
        }
    }
    for(i=0;i<c;i++){
        int temp=a[i][d-1];
        a[i][d-1]=a[i][e-1];
        a[i][e-1]=temp;
    }
    printf("Matrix after interchange column in 2d array is:    \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
}