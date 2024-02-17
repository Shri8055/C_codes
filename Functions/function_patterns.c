#include<stdio.h>
int pattern(int x){
    for(int i=0;i<=x;i++){
        for(int j=0;j<i;j++){
            printf(" * ");
        }
        printf("\n");
    }
}
void main(){
    int a,b,c;
    printf("Enter a rows:   ");
    scanf("%d",&a);
    pattern(a);
    printf("Enter b rows:   ");
    scanf("%d",&b);
    pattern(b);
    printf("Enter c rows:   ");
    scanf("%d",&c);
    pattern(c);
}