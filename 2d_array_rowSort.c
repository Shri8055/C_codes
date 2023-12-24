#include<stdio.h>
void main(){
    int a[10][10],b,c,r,i,j,k;
    printf("Enter row size:  ");
    scanf("%d",&r);
    printf("Enter column size:  ");
    scanf("%d",&c);
    printf("Enter %d number in 2d array:    ",r*c);
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
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            for(k=(j+1);k<c;++k) {
                if(a[i][j]>a[i][k]){
                    int temp=a[i][j];
                    a[i][j]=a[i][k];
                    a[i][k]=temp;
                }
            }
        }
    }
    printf("Sorted 2d array is:    \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
}