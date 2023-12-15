#include<stdio.h>
void main(){

    //finding different char in both arrays
    
    char arr1[15] = "abcd";
    char arr2[15] = "abcdef";
    printf("Different characters in arr1:\n");
    for(int i = 0; arr1[i]; i++){
        int found = 0;
        for(int j = 0; arr2[j]; j++){
            if(arr1[i] == arr2[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            printf("%c ", arr1[i]);
        }
    }
    printf("\n");
    printf("Different characters in arr2:\n");
    for(int i = 0; arr2[i]; i++){
        int found = 0;
        for(int j = 0; arr1[j]; j++){
            if(arr2[i] == arr1[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            printf("%c ", arr2[i]);
        }
    }
    printf("\n");
}
