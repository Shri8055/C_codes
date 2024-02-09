#include<stdio.h>
void main(){
    int a,i,j,k,space=4;
    for(i=0;i<5;i++){
        for(j=space;j>=1;j--){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("1 ");
        }
        printf("\n");
        space--;
    }
}