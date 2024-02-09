#include<stdio.h>
void main(){
    char a[9];
    int i,j;
    printf("Enter name:  ");
    for(i=0;i<9;i++){
        scanf("%c",&a[i]);
    }
    printf("Name is:  ");
    for(i=0;i<9;i++){
        printf("\n%c",a[i]);
    }
}