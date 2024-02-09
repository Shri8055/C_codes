#include<stdio.h>
void main(){
    
    // Finding different characters from 2 arrays by user input

    char a[15];
    char b[15];
    int i,j,c,found;
    printf("Enter 1st char array:    ");
    scanf("%s",a);
    printf("Enter 2nd char array:    ");
    scanf("%s",b);
    printf("Different elements are :  \n");
    //array 1st
    for(i=0;a[i];i++){
        found=0;
        for(j=0;b[j];j++){
            if(a[i]==b[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            printf("%c ",a[i]);
        }
    }
    //array 2nd
    for(i=0;b[i];i++){
        found=0;
        for(j=0;a[j];j++){
            if(b[i]==a[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            printf("%c ",b[i]);
        }
    }
}