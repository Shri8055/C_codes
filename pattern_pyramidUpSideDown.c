#include<stdio.h>
void main(){
    int a,b,c=1,d=1,i,j;
    printf("Enter rows:  ");
    scanf("%d",&a);
    for(i=a;i>0;i--){
        for(b=0;b<d;b++){
            printf("  ");
        }
        for(j=0;j<i;j++){
            printf("%.2d  ",c);
            c++;
        }
        printf("\n");
        d++;
    }
}