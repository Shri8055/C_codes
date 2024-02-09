#include<stdio.h>
void main(){
    int a,b,c,i,sum=0;
    printf("Enter number to find if it is perfect or not :    ");
    scanf("%d",&a);
    printf("\n\nPositive divisors are : ");
    for(i=1;i<a;i++){
        if(a%i==0){
            sum+=i;
            printf("%d ",i);
        }
    }
    if(sum==a){
        printf("\nNumber is perfect !!! , because addition of divisors is "" %d ""\n\n",sum);
    }
    else{
        printf("\nNumber is not perfect !!! , because addition of divisors is "" %d ""\n\n",sum);
    }
}