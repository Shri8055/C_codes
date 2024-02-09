#include<stdio.h>
void main(){
    int a[10][10],b,c,r,i,j,r1,c1;
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
    printf("Enter location to search number:  ");
    scanf("%d %d",&r1,&c1);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(r1==i&&c1==j){
                printf("Number at [%d] [%d] location is %d",i,j,a[i][j]);
            }
        }
        printf("\n");
    }
}