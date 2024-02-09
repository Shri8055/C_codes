#include<stdio.h>
void main(){
    int angle1,angle2,angle3;
    printf("Enter 3 angle degrees :  ");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    if(angle1 == 60 && angle2 == 60 && angle3 == 60){
        printf("Triangle is equilateral");
    }
    else{
        printf("Triangle is not equilateral");
    }
}