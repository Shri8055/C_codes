#include<stdio.h>
void arrcpy(char *a,char *b){
    while(*a!='\0'){
        *b=*a;
        a++;
        b++;
    }
    *b='\0';
}
void main(){
    char a[15],b[15];
    printf("Enter string:   ");
    scanf("%s",&a);
    printf("\nString Present in 'a' char array:   %s",a);
    arrcpy(a,b);
    printf("\nCharacters present in 'a' string are copied to string 'b'");
    printf("\nString Present in 'b' char array:   %s",b);
}