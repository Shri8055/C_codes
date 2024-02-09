#include<stdio.h>
void main(){
    int a=5;
    int *p=&a;
    printf("In this Concept we see use of Pointer.\nPointer holds the memory address of variable of given type.\n");
    printf("Value of a:  %d",a);
    printf("\nValue of p after De-rerancing(*p):  %d",*p);
    printf("\nValue of p:  %d",p);
    printf("\nMemory address of a:  %d",&a);
    printf("\nMemory address of p:  %d",&p);
}