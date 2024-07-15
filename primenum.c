#include<stdio.h>
void main(){
    int num,num1,count=0;
    printf("Enter number:   ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Number is Prime");
    }
    else{
        printf("Number is Not Prime");
    }
}