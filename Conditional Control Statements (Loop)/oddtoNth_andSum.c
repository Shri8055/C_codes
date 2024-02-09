#include<stdio.h>
void main(){

    // Odd Number addition till Nth term 

    int a,b,i,sum=0;
    printf("Enter range:  ");
    scanf("%d",&a);
    a=a*2;
    for(i=0;i<a;i++){
        if(i%2==1){
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nSum of odd Numbers is : %d",sum);
}   