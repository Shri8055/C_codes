#include<stdio.h>
void main(){
    int a[10][10],b,r,c,i,j,max,min;
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
    printf("Numbers in 2d array:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    min=a[0][0];
    max=a[0][0];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("Maximum number is:  %d\n",max);
    printf("Minimum number is:  %d",min);
}