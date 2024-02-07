#include<stdio.h>
void rev(char *a){
    char *start=a;
    char *end=a;
    while(*end!='\0'){
        end++;
    }
    end--;
    while(start<end){
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
void main(){
    char a[15];
    printf("Enter string:   ");
    scanf("%s",&a);
    printf("String before reverse:  %s",a);
    rev(a);
    printf("\nString after reverse:   %s",a);
}