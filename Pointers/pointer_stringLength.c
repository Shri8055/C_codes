#include<stdio.h>
int strLen(char *a){
    int length=0;
    while(*a!='\0'){
        a++;
        length++;
    }
    return length;
}
void main(){
    char a[10];
    printf("Enter string:   ");
    scanf("%s",&a);
    printf("Length of String is:    %d",strLen(a));
}