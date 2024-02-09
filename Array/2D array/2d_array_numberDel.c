#include<stdio.h>
void main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,del;
    printf("2d Array is:    \n");
    for(i=0;i<3;i++){
        printf("[");
        for(j=0;j<3;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("Enter number in 2d array to Delete:  ");
    scanf("%d",&del);
    for(i=0;i<3;i++){
        printf("[");
        for(j=0;j<3;j++){
            if(del==a[i][j]){
                printf("   ");
                continue;
            }
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
}