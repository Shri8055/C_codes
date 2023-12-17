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
    printf("Enter row number to interchange:    ");
    scanf("%d",&d);
    printf("You selected row is:");
    b=1;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(d==i+1){
                if(b<2){
                    printf("[");
                    b++;
                }
                printf(" %d ",a[i][j]);
            }
        }
    }
    printf("]");
    printf("\nEnter row number to interchange:    ");
    scanf("%d",&e);
    printf("Your selected row to interchange is:    ");
    b=1;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(e==i+1){
                if(b<2){
                    printf("[");
                    b++;
                }
                printf(" %d ",a[i][j]);
            }
        }
    }
    printf("]\n");
    for(j=0;j<c;j++){
        int temp=a[e-1][j];
        a[e-1][j]=a[d-1][j];
        a[d-1][j]=temp;
    }
    printf("Matrix after interchange row in 2d array is:   \n");
    for(i=0;i<r;i++){
        printf("[");
        for(j=0;j<c;j++){
            printf(" %d ",a[i][j]);
        }
        printf("]");
        printf("\n");
    }
}