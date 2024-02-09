#include<stdio.h>
void main(){
    int a[2][3],i,j;
    printf("Enter array Numbers:    ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Array Numbers:    ");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("\nArray location [%d][%d] is %d",i,j,a[i][j]);
        }
    }
}