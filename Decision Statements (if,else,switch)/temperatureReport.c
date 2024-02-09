#include<stdio.h>
void main(){
    int a;
    printf("Enter temperature :    ");
    scanf("%d",&a);
    if(a<0){
        printf("Freezing");
    }
    else if(a>0 && a<=10){
        printf("About to freeze");
    }
    else if(a>10 && a<=20){
        printf("Cold weather");
    }
    else if(a>20 && a<=40){
        printf("Moderate");
    }
    else if(a>40 && a<=50){
        printf("Sunny");
    }
    else if(a>50 && a<=60){
        printf("Very hot");
    }
    else{
        printf("Lockdown");
    }
}