#include<stdio.h>
void main(){
    printf("\n\n");
    int i,j,k=1;
    int n;      
    printf("Enter number of rows:   ");
    scanf("%d",&n);                             // n = 4
    printf("\n");
    int iter=(n*2)-1;                           // iter = 7
    int half_1st_iter=(n*2)/2;                  // half_1st_iter = 4
    int half_2nd_iter=iter-half_1st_iter;       // half_2nd_iter = 3
    int half_helper=half_2nd_iter;
    for(i=1;i<=iter;i++){
        if(i<=half_1st_iter){
            for(j=1;j<=n-i;j++){
                printf("  ");
            }
            for(j=0;j<i;j++){
                printf(" *  ");
            }
        }
        else{
            if(k<=half_2nd_iter){
                for(j=1;j<=k;j++){
                    printf("  ");
                }k++;
            }
            for(j=0;j<half_helper;j++){
                printf(" *  ");
            }half_helper--;
        }
        printf("\n");
    }
    printf("\n\n");
}