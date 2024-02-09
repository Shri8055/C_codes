#include<stdio.h>
void main(){
    int a[10][10],b=0,d=1,c,r,i,j;
    printf("Enter size of column:   ");
    scanf("%d",&c);
    printf("Enter size of row:   ");
    scanf("%d",&r);
    printf("Enter %d array numbers:   ",c*r);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Array numbers:   ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d*=a[i][j];
            b+=a[i][j];
            printf(" %d",a[i][j]);
        }
        printf("\nSum of above row is:  %d\n",b);
        printf("Multiplication of above row is:  %d\n",d);
        d=1;
        b=0;
        printf("\n");
    }
}