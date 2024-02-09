#include<stdio.h>
void main(){
    int a,i,b[10];
    printf("Enter decimal: ");
    scanf("%d",&a);
    for(i=0;a>0;i++){
        b[i]=a%2;
        a=a/2;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",b[i]);
    }
}