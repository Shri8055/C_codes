#include<stdio.h>
void main(){
    int a[10],b,c,d=1,i,j,l,m,temp;
    printf("Enter array size:   ");
    scanf("%d",&b);
    printf("Enter array numbers:    ");
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    printf("Array numbers are:  ");
    for(i=0;i<b;i++){
        printf("%d ",a[i]);
    }
    l=b-1;
    printf("\nArray after all zeros to back:  ");
    for(i=0;i<b;i++){
        if(a[i]==0){
            temp=a[i];      //temp=0
            a[i]=a[b-d];    //a[i]=5
            a[b-d]=temp;    //a[b-d]=0
        }
    }d++;
    for(i=0;i<b;i++){
        printf("%d ",a[i]);
    }
}