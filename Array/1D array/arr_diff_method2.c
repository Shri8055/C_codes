#include<stdio.h>
void main(){
    char a[]="asdf";
    char b[]="asdfgh";
    int i,j,found;
    printf("Diffent elements are :  \n");
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