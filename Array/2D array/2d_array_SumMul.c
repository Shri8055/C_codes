#include<stdio.h>
void main(){
    int a[10][10],b=0,d=1,c,r,i,j;
    printf("Enter size of column:   ");
    scanf("%d",&c);
    printf("Enter size of row:   ");
    scanf("%d",&r);
    printf("Enter array size:   ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Array numbers:   ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            b+=a[i][j];
            d*=a[i][j];
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of 2d array numbers is:  %d",b);
    printf("\nMultiplication of 2d array numbers is:  %d",d);
}