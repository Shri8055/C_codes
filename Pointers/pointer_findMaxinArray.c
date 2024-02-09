#include<stdio.h>
int arrMax(int *a,int b){
    int max=*a;
    int i;
    for(i=0;i<b;i++){
        if(*(a+i)>max){
            max=*(a+i);
        }
    }
    return max;
}
void main(){
    int a[10],b,i;
    int *p;
    p=a;
    printf("Enter array size:   ");
    scanf("%d",&b);
    printf("Enter array numbers:    ");
    for(i=0;i<b;i++){
        scanf("%d",(p+i));
    }
    printf("Maximum Number from array is:   %d",arrMax(a,b));
}