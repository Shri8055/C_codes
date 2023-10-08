#include<stdio.h>
int stack[5],top=-1,b;
void push(){
    if(top==4){
        printf("stack is overflow!!");
    }
    else{
        printf("Enter number to push:   ");
        scanf("%d",&b);
        top++;
        stack[top]=b;
    }
}

void pop(){
    if(top==-1){
        printf("stack is Underflow!!");
    }
    else{
        printf("Number to br popped is:   %d",stack[top]);
        top--;
    }
}

void show(){
    if(top==-1){
        printf("stack is Underflow!!");
    }
    else{
        printf("stack numbers are:  ");
        for(int i=top;i>=0;i--){
            printf(" %d",stack[i]);
        }
    }
}
void main(){
    int a,b,i;
    while(1){
    printf("\n 1: PUSH \n 2: POP \n 3: SHOW");
    printf("\nEnter ur choice:    ");
    scanf("%d",&a);
    switch(a){
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;
    
        default:
            printf("Enter valid input");
        }
    }
}