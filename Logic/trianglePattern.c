#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter lines:  ");
    scanf("%d",&n);
    for(i=1,k=1;i<=n;i++){
        for(j=1;j<n-i;j++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf(" %d ",k++);
        }
        printf("\n");
    }
}