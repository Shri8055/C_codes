#include<stdio.h>
void main(){
    char a[15],b;
    int count=0;
    printf("Enter name: ");
    scanf("%s",a);
    printf("\nEnter letter to find in name:   ");
    scanf(" %c",&b);
    int found=0;
    for(int i=0;i<4;i++){
        if(a[i]==b){
            found=1;
            count+=1;
        }
    }
    if(found){
        printf("Letter found in name for %d time(s):   %c",count,b);
    }
    else{
        printf("Letter not found in name");
    }
}