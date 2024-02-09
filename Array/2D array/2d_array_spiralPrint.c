#include <stdio.h>
void main() {
    int a[10][10],r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);
    printf("Enter %d matrix elements:  ",r*c);
    for (int i=0;i<r;++i){
        for (int j=0;j<c;++j){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix elements are:  \n");
    for (int i=0;i<r;++i){
        printf("[");
        for (int j=0;j<c;++j){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
    printf("Spiral Order: ");
    int top=0,bottom=r-1,left=0,right=c-1;
    int direction=0;
    while(top<=bottom && left<=right){
        if(direction==0){
            for(int i=left;i<=right;++i)
                printf(" %d ",a[top][i]);
            top++;
        }else if(direction==1){
            for(int i=top;i<=bottom;++i)
                printf(" %d ",a[i][right]);
            right--;
        }else if(direction==2){
            for(int i=right;i>=left;--i)
                printf(" %d ",a[bottom][i]);
            bottom--;
        }else if(direction==3){
            for(int i=bottom;i>=top;--i)
                printf(" %d ",a[i][left]);
            left++;
        }
        direction=(direction+1)%4;
    }
}