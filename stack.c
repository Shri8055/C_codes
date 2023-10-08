#include<stdio.h>
void main(){
    int stack[5],top=-1,a,b,i;
    while(1){
        printf("\n1:PUSH \n2:POP \n3:SHOW");
        printf("\nEnter ur choice:    ");
        scanf("%d",&a);
        switch(a){
            case 1:
                if(top==4){
                    printf("\n\tStack is Overflow !!\n");
                }
                else{
                    printf("\nEnter number to push:   ");
                    scanf("%d",&b);
                    top++;
                    stack[top]=b;
                }
            break;

            case 2:
                if(top==-1){
                    printf("\n\tStack is Underflow !!\n");
                }
                else{
                    printf("\nNumber to be popped is:   %d",stack[top]);
                    top--;
                }
            break;

            case 3:
                if(top==-1){
                    printf("\n\tStack Underflow !!\n");
                }
                else{
                    printf("\nStack numbers are:  ");
                    for(i=top;i>=0;i--){
                        printf(" %d",stack[i]);
                    }
                }
            break;
        }
    }
}