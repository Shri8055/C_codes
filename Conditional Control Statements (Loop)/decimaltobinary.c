#include<stdio.h>
void main(){
    int i,divi,rem,quo;
    printf("Enter Digit :   ");
    scanf("%d",&divi);
    for(i=divi;divi>=1;i--){
        quo=divi/2;
        rem=divi%2;
        printf(" %d",rem);
        divi=quo;
    }
    printf(" <=");
}