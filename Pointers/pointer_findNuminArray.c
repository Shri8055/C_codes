#include<stdio.h>
int numSearch(int *a,int b,int searchNum,int *index){
    int i;
    for(i=0;i<b;i++){
        if(searchNum==*(a+i)){
            *index=i;
            return 1;
        }
    }
    return 0;
}
void main(){
    int a[10],b,c,i,index,searchNum;
    int *p=a;
    printf("Enter size of array:    ");
    scanf("%d",&b);
    printf("Enter Array numbers:    ");
    for(i=0;i<b;i++){
        scanf("%d",(p+i));
    }
    printf("Enter number to search:    ");
    scanf("%d",&searchNum);
    if(numSearch(a,b,searchNum,&index)){
        printf("Number %d found at location a[%d] in array.",searchNum,index);
    }
    else{
        printf("Number %d not Found in array.",searchNum);
    }
}